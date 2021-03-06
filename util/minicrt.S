/*
 * minicrt.S - a minimal C Run Time startup.
 *
 * Copyright (C) 2001 by following authors
 * Copyright (C) 2013-2015 The EmuTOS development team.
 *
 * Authors:
 *  SCC     Steven C. Cavender
 *  LVL     Laurent Vogel
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#include "asmdefs.h"

#ifndef STACK_SIZE
#define STACK_SIZE 0x100        // note: this is in longwords
#endif

#define P_TLEN  0x0C
#define P_DLEN  0x14
#define P_BLEN  0x1C

#define MSHRINK 0x4A
#define PTERM   0x4C

        .globl  _start
        .globl  _exit
        .globl  ___main

        .extern _main

        .text

_start:
        move.l  4(sp),a0         // pick up base page address
        lea.l   stack_base,sp    // set up local stack
        move.l  a0,-(sp)         // and build initial stack frame

// mshrink

                                 // compute size for Mshrink()
        move.l  #256,d0          // size of basepage
        add.l   P_TLEN(a0),d0
        add.l   P_DLEN(a0),d0
        add.l   P_BLEN(a0),d0
        move.l  d0,-(sp)
        move.l  a0,-(sp)
        clr.w   -(sp)
        move.w  #MSHRINK,-(sp)
        trap    #1
        add.l   #12,sp

// empty argc and argv

        moveq   #0,d0
        move.l  d0,-(sp)         // empty env
        move.l  d0,-(sp)         // empty argv
        move.w  d0,-(sp)         // argc = 0
        jsr     _main
        move.w  d0,-(sp)

_exit:
        move.w  #PTERM,-(sp)
        trap    #1

        // this is to fool gcc lib. called at start of main()
___main:
        rts

        .bss
        .even

        .ds.l   STACK_SIZE
stack_base:
        .ds.w   1
