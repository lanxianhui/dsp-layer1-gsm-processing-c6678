/*  ===========================================================================
 *  Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005, 2006
 *
 *  Use of this software is controlled by the terms and conditions found
 *  in the license agreement under which this software has been supplied
 *  provided
 *
 *  ===========================================================================
 */

/** ============================================================================
 *   @file  cslr_tpmgr.h
 *
 *   @path  $(CSLPATH)\inc
 *
 *   @desc  This file contains the Register Desciptions for TPMGR
 *
 */

#ifndef _CSLR_TPMGR_H_
#define _CSLR_TPMGR_H_

#include <cslr.h>
#include <tistdtypes.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 TINPSEL;
    volatile Uint32 TOUTPSEL;
} CSL_TpmgrRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* TINPSEL */

#define CSL_TPMGR_TINPSEL_TINPHSEL5_MASK (0x00C00000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL5_SHIFT (0x00000016u)
#define CSL_TPMGR_TINPSEL_TINPHSEL5_RESETVAL (0x00000001u)

/*----TINPHSEL5 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL5_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL5_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL5_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL5_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL5_MASK (0x00300000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL5_SHIFT (0x00000014u)
#define CSL_TPMGR_TINPSEL_TINPLSEL5_RESETVAL (0x00000000u)

/*----TINPLSEL5 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL5_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL5_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL5_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL5_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPHSEL4_MASK (0x000C0000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL4_SHIFT (0x00000012u)
#define CSL_TPMGR_TINPSEL_TINPHSEL4_RESETVAL (0x00000001u)

/*----TINPHSEL4 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL4_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL4_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL4_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL4_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL4_MASK (0x00030000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL4_SHIFT (0x00000010u)
#define CSL_TPMGR_TINPSEL_TINPLSEL4_RESETVAL (0x00000000u)

/*----TINPLSEL4 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL4_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL4_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL4_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL4_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPHSEL3_MASK (0x0000C000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL3_SHIFT (0x0000000Eu)
#define CSL_TPMGR_TINPSEL_TINPHSEL3_RESETVAL (0x00000001u)

/*----TINPHSEL3 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL3_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL3_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL3_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL3_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL3_MASK (0x00003000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL3_SHIFT (0x0000000Cu)
#define CSL_TPMGR_TINPSEL_TINPLSEL3_RESETVAL (0x00000000u)

/*----TINPLSEL3 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL3_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL3_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL3_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL3_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPHSEL2_MASK (0x00000C00u)
#define CSL_TPMGR_TINPSEL_TINPHSEL2_SHIFT (0x0000000Au)
#define CSL_TPMGR_TINPSEL_TINPHSEL2_RESETVAL (0x00000001u)

/*----TINPHSEL2 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL2_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL2_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL2_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL2_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL2_MASK (0x00000300u)
#define CSL_TPMGR_TINPSEL_TINPLSEL2_SHIFT (0x00000008u)
#define CSL_TPMGR_TINPSEL_TINPLSEL2_RESETVAL (0x00000000u)

/*----TINPLSEL2 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL2_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL2_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL2_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL2_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPHSEL1_MASK (0x000000C0u)
#define CSL_TPMGR_TINPSEL_TINPHSEL1_SHIFT (0x00000006u)
#define CSL_TPMGR_TINPSEL_TINPHSEL1_RESETVAL (0x00000001u)

/*----TINPHSEL1 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL1_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL1_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL1_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL1_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL1_MASK (0x00000030u)
#define CSL_TPMGR_TINPSEL_TINPLSEL1_SHIFT (0x00000004u)
#define CSL_TPMGR_TINPSEL_TINPLSEL1_RESETVAL (0x00000000u)

/*----TINPLSEL1 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL1_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL1_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL1_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL1_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPHSEL0_MASK (0x0000000Cu)
#define CSL_TPMGR_TINPSEL_TINPHSEL0_SHIFT (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL0_RESETVAL (0x00000001u)

/*----TINPHSEL0 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPHSEL0_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPHSEL0_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPHSEL0_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPHSEL0_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_TINPLSEL0_MASK (0x00000003u)
#define CSL_TPMGR_TINPSEL_TINPLSEL0_SHIFT (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL0_RESETVAL (0x00000000u)

/*----TINPLSEL0 Tokens----*/
#define CSL_TPMGR_TINPSEL_TINPLSEL0_TIMI0 (0x00000000u)
#define CSL_TPMGR_TINPSEL_TINPLSEL0_TIMI1 (0x00000001u)
#define CSL_TPMGR_TINPSEL_TINPLSEL0_FSEVT2 (0x00000002u)
#define CSL_TPMGR_TINPSEL_TINPLSEL0_FSEVT3 (0x00000003u)

#define CSL_TPMGR_TINPSEL_RESETVAL       (0x00444444u)

/* TOUTPSEL */

#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_MASK (0x000000F0u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_SHIFT (0x00000004u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_RESETVAL (0x00000001u)

/*----TOUTPHSEL0 Tokens----*/
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL0 (0x00000000u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH0 (0x00000001u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL1 (0x00000002u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH1 (0x00000003u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL2 (0x00000004u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH2 (0x00000005u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL3 (0x00000006u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH3 (0x00000007u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL4 (0x00000008u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH4 (0x00000009u)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTL5 (0x0000000Au)
#define CSL_TPMGR_TOUTPSEL_TOUTPHSEL0_TOUTH5 (0x0000000Bu)

#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_MASK (0x0000000Fu)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_SHIFT (0x00000000u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_RESETVAL (0x00000000u)

/*----TOUTPLSEL0 Tokens----*/
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL0 (0x00000000u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH0 (0x00000001u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL1 (0x00000002u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH1 (0x00000003u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL2 (0x00000004u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH2 (0x00000005u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL3 (0x00000006u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH3 (0x00000007u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL4 (0x00000008u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH4 (0x00000009u)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTL5 (0x0000000Au)
#define CSL_TPMGR_TOUTPSEL_TOUTPLSEL0_TOUTH5 (0x0000000Bu)

#define CSL_TPMGR_TOUTPSEL_RESETVAL      (0x00000010u)

#endif
