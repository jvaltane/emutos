/*
 * vdistub.h - VDI entry points, called by BIOS
 *
 * Copyright (C) 2019 The EmuTOS development team
 *
 * This file is distributed under the GPL, version 2 or at your
 * option any later version.  See doc/license.txt for details.
 */

#ifndef _VDISTUB_H
#define _VDISTUB_H

/* Forward declarations */
struct Mcdb_;
struct _mcs;
struct blit_frame;

/* The VDI is just a library. It has no initialization routine.
 * To make it available, the BIOS just needs to install the vditrap function
 * below as trap #2 handler. */
void vditrap(void);

/* shared VDI functions & VDI line-A wrapper functions */
void draw_sprite(void);
void undraw_sprite(void);
WORD get_pix(void);
void put_pix(void);
void text_blt(void);
void linea_show_mouse(void);
void linea_hide_mouse(void);
void linea_transform_mouse(void);
void linea_rect(void);
void linea_hline(void);
void linea_polygon(void);
void linea_line(void);
void linea_fill(void);
void linea_blit(struct blit_frame *info);
void linea_raster(void);

/* Line-A related variables */
extern WORD sprite_x, sprite_y;
extern struct Mcdb_ *sprite_def;
extern struct _mcs *sprite_sav;

/* End of the VDI BSS section.
 * This is referenced by the OSHEADER */
extern UBYTE _endvdibss[]; /* defined in vdi/endvdi.S */

#endif /* _VDISTUB_H */
