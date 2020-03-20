/*      DESKAPP.H       06/11/84 - 06/11/85             Lee Lorenzen    */
/*      for 3.0         1/21/86  - 12/30/86             MDF             */

/*
*       Copyright 1999, Caldera Thin Clients, Inc.
*                 2002-2019 The EmuTOS development team
*
*       This software is licenced under the GNU Public License.
*       Please see LICENSE.TXT for further information.
*
*                  Historical Copyright
*       -------------------------------------------------------------
*       GEM Desktop                                       Version 2.3
*       Serial No.  XXXX-0000-654321              All Rights Reserved
*       Copyright (C) 1987                      Digital Research Inc.
*       -------------------------------------------------------------
*/

#ifndef _DESKAPP_H
#define _DESKAPP_H
#include "deskconf.h"
#include "icons.h"

/*
 * bit masks for the a_flags field in the ANODE
 */
                            /* flags applicable to installed applications */
#define AF_ISCRYS 0x0001        /* is GEM application: only relevant for a_type==AT_ISFILE */
/* #define AF_ISGRAF 0x0002        no longer used */
#define AF_ISDESK 0x0004        /* requires desktop icon */
#define AF_ISPARM 0x0008        /* requires input parameters (TTP or GTP) */
#define AF_APPDIR 0x0010        /* use application dir (else top window) */
#define AF_ISFULL 0x0020        /* use full path (else filename only) */
#define AF_AUTORUN 0x0080       /* this program is to be autorun */
                            /* flags applicable to icons */
#define AF_ISEXEC 0x4000        /* this is an executable file */
#define AF_WINDOW 0x8000        /* this is an anode for a window icon */

/*
 * values for the a_type field in the ANODE
 */
#define AT_ISFILE 0
#define AT_ISFOLD 1
#define AT_ISDISK 2
#define AT_ISTRSH 3
#if CONF_WITH_PRINTER_ICON
#define AT_ISPRNT 4
#endif

/*
 * standard gem icons, always available
 */
#define IG_HARD   0             /* hard drive */
#define IG_FLOPPY 1             /* floppy drive */
#define IG_FOLDER 2             /* folder */
#define IG_TRASH  3             /* trash */
#define IG_PRINT  4             /* printer */
#define IG_REMOV  5             /* removable disk */
#define IG_APPL   6             /* generic application icon */
#define IG_DOCU   7             /* generic document icon */
#define NUM_GEM_IBLKS (IG_DOCU+1)

/*
 * the following values are saved in EMUDESK.INF by EmuTOS 0.9.6 &
 * earlier.  app_parse() converts them to the standard values.
 */
#define IG_APPL_REV0    8       /* application icon */
#define IG_DOCU_REV0    40      /* document icon */


/*
 * configuration parameters
 */
#define NUM_ANODES  64L         /* # of application nodes */
#define SIZE_BUFF   4096L       /* size of buffer used to store ANODE text */


#if (BUILTIN_IBLKS < NUM_GEM_IBLKS) /* BUILTIN_IBLKS from "icons.h", generated by "erd" */
# error Insufficient builtin icons in icons.c
#endif

/*
 * ANODE: store application information for desktop
 *
 * usage of a_pappl/a_pdata/a_pargs below:
 *  (1) for a file or folder on the desktop:
 *      a_pappl: name (used as icon label), up to 12 chars
 *      a_pdata: fully-qualified name
 *      a_pargs: unused
 *  (2) for an installed application:
 *      a_pappl: fully_qualified filename
 *      a_pdata: document type, as TOS wildcard, up to 5 chars (e.g. *.DAT)
 *      a_pargs: fixed argument(s) for application, up to 11 chars
 */
typedef struct _applstr ANODE;
struct _applstr
{
    ANODE *a_next;
    UWORD a_flags;              /* see above for usage */
    char a_funkey;              /* associated function key: 0=none, else 0x01-0x14 */
    char a_letter;              /* letter for icon */
    WORD a_type;                /* icon type (see above) */
    WORD a_obid;                /* object index */
    char *a_pappl;              /* see comments above */
    char *a_pdata;              /* see comments above */
    char *a_pargs;              /* see comments above */
    WORD a_aicon;               /* application icon # */
    WORD a_dicon;               /* data icon # */
    WORD a_xspot;               /* desired spot on desk */
    WORD a_yspot;               /* desired spot on desk */
};


/*
 * save current info for one window
 */
typedef struct
{
    WORD x_save;                /* window position */
    WORD y_save;
    WORD w_save;
    WORD h_save;
    WORD hsl_save;              /* horizontal slider position */
    WORD vsl_save;              /* vertical slider position */
    char pth_save[LEN_ZPATH];
} WSAVE;


/* values stored in cs_sort (below) range from 0 to CS_NOSORT */
#define CS_NOSORT   (NSRTITEM-NAMEITEM)

/*
 * save desktop context (preferences and windows)
 */
typedef struct
{
    char cs_sort;               /* Sort mode */
    char cs_view;               /* Show files as icons or text */
    char cs_sizefit;            /* Size windows to fit (boolean) */
    char cs_confcpy;            /* Confirm copies (boolean) */
    char cs_confdel;            /* Confirm deletes (boolean) */
    char cs_confovwr;           /* Confirm overwrite (boolean) */
    char cs_dblclick;           /* Double click speed */
    char cs_mnuclick;           /* Click required to drop down menu (boolean) */
    char cs_timefmt;            /* Time format */
    char cs_datefmt;            /* Date format */
    char cs_blitter;            /* Blitter enabled (boolean) */
    char cs_cache;              /* Cache enabled (boolean) */
    char cs_appdir;             /* Appl dir is default for non-installed apps (boolean) */
    char cs_fullpath;           /* Full path for arg to non-installed apps (boolean) */
    WSAVE cs_wnode[NUM_WNODES]; /* window save info */
} CSAVE;


/*
 * Function prototypes
 */
ANODE *app_alloc(void);
void app_free(ANODE *pa);
char *scan_str(char *pcurr, char **ppstr);
void app_tran(WORD bi_num);
void app_start(void);
void app_save(WORD todisk);
void app_blddesk(void);
ANODE *app_afind_by_id(WORD obid);
ANODE *app_afind_by_name(WORD atype, WORD ignore, char *pspec, char *pname, WORD *pisapp);
void nomem_alert(void) NORETURN;

#if CONF_WITH_READ_INF
BOOL app_read_inf(void);
#endif

#endif  /* _DESKAPP_H */
