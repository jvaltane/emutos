/*
 * fnt_gr_8x8.c - a font in standard format
 *
 * Automatically generated by fntconv.c
 *
 * And then the font was "refined" a bit by GGN
 * because I always hated having ANSI characters from
 * MS-DOS on my STe instead of the copyright or TM characters!
 *
 * (BTW: original font comes from ELKAT)
 */

#include "config.h"
#include "portab.h"
#include "font.h"

static const UWORD off_table[] =
{
    0x0000, 0x0008, 0x0010, 0x0018, 0x0020, 0x0028, 0x0030, 0x0038,
    0x0040, 0x0048, 0x0050, 0x0058, 0x0060, 0x0068, 0x0070, 0x0078,
    0x0080, 0x0088, 0x0090, 0x0098, 0x00a0, 0x00a8, 0x00b0, 0x00b8,
    0x00c0, 0x00c8, 0x00d0, 0x00d8, 0x00e0, 0x00e8, 0x00f0, 0x00f8,
    0x0100, 0x0108, 0x0110, 0x0118, 0x0120, 0x0128, 0x0130, 0x0138,
    0x0140, 0x0148, 0x0150, 0x0158, 0x0160, 0x0168, 0x0170, 0x0178,
    0x0180, 0x0188, 0x0190, 0x0198, 0x01a0, 0x01a8, 0x01b0, 0x01b8,
    0x01c0, 0x01c8, 0x01d0, 0x01d8, 0x01e0, 0x01e8, 0x01f0, 0x01f8,
    0x0200, 0x0208, 0x0210, 0x0218, 0x0220, 0x0228, 0x0230, 0x0238,
    0x0240, 0x0248, 0x0250, 0x0258, 0x0260, 0x0268, 0x0270, 0x0278,
    0x0280, 0x0288, 0x0290, 0x0298, 0x02a0, 0x02a8, 0x02b0, 0x02b8,
    0x02c0, 0x02c8, 0x02d0, 0x02d8, 0x02e0, 0x02e8, 0x02f0, 0x02f8,
    0x0300, 0x0308, 0x0310, 0x0318, 0x0320, 0x0328, 0x0330, 0x0338,
    0x0340, 0x0348, 0x0350, 0x0358, 0x0360, 0x0368, 0x0370, 0x0378,
    0x0380, 0x0388, 0x0390, 0x0398, 0x03a0, 0x03a8, 0x03b0, 0x03b8,
    0x03c0, 0x03c8, 0x03d0, 0x03d8, 0x03e0, 0x03e8, 0x03f0, 0x03f8,
    0x0400, 0x0408, 0x0410, 0x0418, 0x0420, 0x0428, 0x0430, 0x0438,
    0x0440, 0x0448, 0x0450, 0x0458, 0x0460, 0x0468, 0x0470, 0x0478,
    0x0480, 0x0488, 0x0490, 0x0498, 0x04a0, 0x04a8, 0x04b0, 0x04b8,
    0x04c0, 0x04c8, 0x04d0, 0x04d8, 0x04e0, 0x04e8, 0x04f0, 0x04f8,
    0x0500, 0x0508, 0x0510, 0x0518, 0x0520, 0x0528, 0x0530, 0x0538,
    0x0540, 0x0548, 0x0550, 0x0558, 0x0560, 0x0568, 0x0570, 0x0578,
    0x0580, 0x0588, 0x0590, 0x0598, 0x05a0, 0x05a8, 0x05b0, 0x05b8,
    0x05c0, 0x05c8, 0x05d0, 0x05d8, 0x05e0, 0x05e8, 0x05f0, 0x05f8,
    0x0600, 0x0608, 0x0610, 0x0618, 0x0620, 0x0628, 0x0630, 0x0638,
    0x0640, 0x0648, 0x0650, 0x0658, 0x0660, 0x0668, 0x0670, 0x0678,
    0x0680, 0x0688, 0x0690, 0x0698, 0x06a0, 0x06a8, 0x06b0, 0x06b8,
    0x06c0, 0x06c8, 0x06d0, 0x06d8, 0x06e0, 0x06e8, 0x06f0, 0x06f8,
    0x0700, 0x0708, 0x0710, 0x0718, 0x0720, 0x0728, 0x0730, 0x0738,
    0x0740, 0x0748, 0x0750, 0x0758, 0x0760, 0x0768, 0x0770, 0x0778,
    0x0780, 0x0788, 0x0790, 0x0798, 0x07a0, 0x07a8, 0x07b0, 0x07b8,
    0x07c0, 0x07c8, 0x07d0, 0x07d8, 0x07e0, 0x07e8, 0x07f0, 0x07f8,
    0x0800,
};

static const UWORD dat_table[] =
{
    0x0018, 0x3C18, 0x183C, 0xFFE7, 0x017E, 0x1818, 0xF0F0, 0x05A0,
    0x7C06, 0x7C7C, 0xC67C, 0x7C7C, 0x7C7C, 0x0078, 0x07F0, 0x1104,
    0x0018, 0x6600, 0x1800, 0x3818, 0x0E70, 0x0000, 0x0000, 0x0002,
    0x3C18, 0x3C7E, 0x0C7E, 0x3C7E, 0x3C3C, 0x0000, 0x0600, 0x603C,
    0x3C18, 0x7C3C, 0x787E, 0x7E3E, 0x663C, 0x0666, 0x60C6, 0x663C,
    0x7C3C, 0x7C3C, 0x7E66, 0x66C6, 0x6666, 0x7E1E, 0x4078, 0x1000,
    0x0000, 0x6000, 0x0600, 0x1C00, 0x6018, 0x1860, 0x3800, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x000E, 0x1870, 0x0000,
    0x187C, 0x7E18, 0x7E7E, 0x663C, 0x3C66, 0x18C6, 0x667E, 0x3C7E,
    0x7C7E, 0x7E66, 0x1066, 0xC63C, 0x003C, 0x003C, 0x007E, 0x003C,
    0x0000, 0x3C00, 0x007E, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x3434, 0x0200, 0x007F, 0x3034, 0x3466, 0x0C00, 0x7A7E, 0x7EF1,
    0x66F6, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x0060, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x000E, 0x0066,
    0x0018, 0x1818, 0x6618, 0x1818, 0x6618, 0x98BF, 0xB3BC, 0x9EB3,
    0x9E18, 0x300C, 0x0018, 0x1800, 0x3800, 0x0000, 0x0038, 0x0000,
    0x003C, 0x241C, 0x3899, 0xFFC3, 0x03C3, 0x3C1C, 0xC0C0, 0x05A0,
    0xC606, 0x0606, 0xC6C0, 0xC006, 0xC6C6, 0x0060, 0x0FF8, 0x0B28,
    0x0018, 0x666C, 0x3E66, 0x6C18, 0x1C38, 0x6618, 0x0000, 0x0006,
    0x6638, 0x660C, 0x1C60, 0x6006, 0x6666, 0x1818, 0x0C00, 0x3066,
    0x663C, 0x6666, 0x6C60, 0x6060, 0x6618, 0x066C, 0x60EE, 0x7666,
    0x6666, 0x6666, 0x1866, 0x66C6, 0x6666, 0x0618, 0x6018, 0x3800,
    0xC000, 0x6000, 0x0600, 0x3000, 0x6000, 0x0060, 0x1800, 0x0000,
    0x0000, 0x0000, 0x1800, 0x0000, 0x0000, 0x0018, 0x1818, 0x6018,
    0x3C66, 0x603C, 0x6006, 0x6666, 0x186C, 0x3CEE, 0x7600, 0x6666,
    0x6630, 0x1866, 0x7C66, 0xD666, 0x0066, 0x0060, 0x0018, 0x0066,
    0x0000, 0x6600, 0x0018, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x5858, 0x3C02, 0x00D8, 0x1858, 0x5800, 0x1810, 0xCAC3, 0xC35B,
    0x0066, 0x667C, 0x1E7E, 0x7C1C, 0x1E7E, 0x6E3C, 0x3E7E, 0x6C1C,
    0x3E36, 0x7E66, 0x3E78, 0xD67C, 0x1C3E, 0xFE7E, 0x361B, 0x10F7,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xBCB0, 0xB398, 0xB3B3,
    0xB318, 0x1818, 0x0E18, 0x1832, 0x6C1C, 0x0000, 0x6C6C, 0x00FE,
    0x0066, 0x24F6, 0x6FC3, 0xFE99, 0x06D3, 0x3C16, 0xFEDF, 0x05A0,
    0xC606, 0x0606, 0xC6C0, 0xC006, 0xC6C6, 0x3C78, 0x1FEC, 0x0DD8,
    0x0018, 0x66FE, 0x606C, 0x3818, 0x1818, 0x3C18, 0x0000, 0x000C,
    0x6E18, 0x0618, 0x3C7C, 0x600C, 0x6666, 0x1818, 0x187E, 0x1806,
    0x6E66, 0x6660, 0x6660, 0x6060, 0x6618, 0x0678, 0x60FE, 0x7E66,
    0x6666, 0x6660, 0x1866, 0x66C6, 0x3C66, 0x0C18, 0x3018, 0x6C00,
    0x603C, 0x7C3C, 0x3E3C, 0x7C3E, 0x7C38, 0x1866, 0x18EC, 0x7C3C,
    0x7C3E, 0x7C3E, 0x7E66, 0x66C6, 0x6666, 0x7E18, 0x1818, 0xF218,
    0x6666, 0x6066, 0x600C, 0x6666, 0x1878, 0x66FE, 0x7600, 0x6666,
    0x6618, 0x1866, 0xD63C, 0xD666, 0x3E66, 0x6630, 0x3E30, 0xFC66,
    0x3066, 0x0666, 0x6630, 0x3C7E, 0x3C3F, 0x3E7E, 0x664C, 0x66C6,
    0x0000, 0x663C, 0x7ED8, 0x0000, 0x3C00, 0x3038, 0xCABD, 0xBD5F,
    0xE666, 0x760C, 0x060C, 0x060C, 0x0C36, 0x660C, 0x0606, 0x3E0C,
    0x3636, 0x6666, 0x060C, 0xD66C, 0x0C06, 0x6666, 0x363C, 0x3899,
    0xC63E, 0x3EFC, 0x1830, 0x3C66, 0x66C6, 0x6630, 0x3318, 0x3333,
    0x337E, 0x0C30, 0x1B18, 0x004C, 0x383A, 0x000F, 0x6C18, 0x0000,
    0x00C3, 0xE783, 0xC1E7, 0xFC3C, 0x8CD3, 0x3C10, 0xD8DB, 0x0DB0,
    0x0000, 0x7C7C, 0x7C7C, 0x7C00, 0x7C7C, 0x0660, 0x1804, 0x0628,
    0x0018, 0x006C, 0x3C18, 0x7000, 0x1818, 0xFF7E, 0x007E, 0x0018,
    0x7618, 0x0C0C, 0x6C06, 0x7C18, 0x3C3E, 0x0000, 0x3000, 0x0C0C,
    0x6A66, 0x7C60, 0x667C, 0x7C6E, 0x7E18, 0x0670, 0x60D6, 0x7E66,
    0x7C66, 0x7C3C, 0x1866, 0x66D6, 0x183C, 0x1818, 0x1818, 0xC600,
    0x3006, 0x6660, 0x6666, 0x3066, 0x6618, 0x186C, 0x18FE, 0x6666,
    0x6666, 0x6660, 0x1866, 0x66C6, 0x3C66, 0x0C30, 0x180C, 0x9E34,
    0x667C, 0x6066, 0x7C18, 0x7E7E, 0x1870, 0x66D6, 0x7E3C, 0x6666,
    0x7C0C, 0x183C, 0xD618, 0xD666, 0x667C, 0x3C3C, 0x6060, 0x661E,
    0x306C, 0x3E66, 0x6618, 0x6666, 0x6666, 0x6018, 0x66D6, 0x66D6,
    0x3C3C, 0x6E6E, 0xDBDE, 0x1818, 0x6600, 0x0010, 0xCAB1, 0xA555,
    0x6666, 0x3C0C, 0x0E0C, 0x660C, 0x0636, 0x660C, 0x0606, 0x660C,
    0x3636, 0x763C, 0x360C, 0xD66C, 0x0C06, 0x6676, 0x1C66, 0x6C99,
    0xD666, 0x6066, 0x1830, 0x6666, 0x66D6, 0x663E, 0x3F18, 0x331E,
    0x3318, 0x1818, 0x1B18, 0x7E00, 0x0030, 0x0018, 0x0030, 0x3800,
    0x00E7, 0xC383, 0xC1C3, 0xF999, 0xD8DB, 0x7E10, 0xDEFF, 0x0DB0,
    0xC606, 0xC006, 0x0606, 0xC606, 0xC606, 0x7E7E, 0x1804, 0x07D0,
    0x0018, 0x006C, 0x0630, 0xDE00, 0x1818, 0x3C18, 0x0000, 0x0030,
    0x6618, 0x1806, 0x7E06, 0x6630, 0x6606, 0x1818, 0x1800, 0x1818,
    0x6E7E, 0x6660, 0x6660, 0x6066, 0x6618, 0x0678, 0x60C6, 0x6E66,
    0x6076, 0x6C06, 0x1866, 0x66FE, 0x3C18, 0x3018, 0x0C18, 0x0000,
    0x003E, 0x6660, 0x667E, 0x3066, 0x6618, 0x1878, 0x18D6, 0x6666,
    0x6666, 0x603C, 0x1866, 0x66D6, 0x1866, 0x1818, 0x1818, 0x0C34,
    0x7E66, 0x6066, 0x6030, 0x6666, 0x1878, 0x66C6, 0x6E00, 0x6666,
    0x6018, 0x1818, 0xD63C, 0x7C3C, 0x6666, 0x1866, 0x7C30, 0x6666,
    0x3078, 0x6666, 0x6630, 0x6666, 0x6666, 0x3C18, 0x66D6, 0x3CD6,
    0x0666, 0x7676, 0xDFD8, 0x3C3C, 0x6600, 0x0010, 0x7AB1, 0xB951,
    0x6666, 0x6E0C, 0x1E0C, 0x660C, 0x0636, 0x6600, 0x0606, 0x660C,
    0x3636, 0x060E, 0x360C, 0xD66C, 0x0C06, 0x6606, 0x0C66, 0xC6EF,
    0xD666, 0x7C66, 0x1830, 0x6666, 0x66D6, 0x7E30, 0x3318, 0x330C,
    0x1E18, 0x300C, 0x18D8, 0x0032, 0x0078, 0x18D8, 0x007C, 0x3800,
    0x0024, 0x66F6, 0x6F99, 0xF3C3, 0x70C3, 0x1070, 0x181E, 0x1998,
    0xC606, 0xC006, 0x0606, 0xC606, 0xC606, 0x6618, 0x1004, 0x2E10,
    0x0000, 0x00FE, 0x7C66, 0xCC00, 0x1C38, 0x6618, 0x3000, 0x1860,
    0x6618, 0x3066, 0x0C66, 0x6630, 0x660C, 0x1818, 0x0C7E, 0x3000,
    0x6066, 0x6666, 0x6C60, 0x6066, 0x6618, 0x666C, 0x60C6, 0x6666,
    0x606C, 0x6666, 0x1866, 0x3CEE, 0x6618, 0x6018, 0x0618, 0x0000,
    0x0066, 0x6660, 0x6660, 0x303E, 0x6618, 0x186C, 0x18C6, 0x6666,
    0x6666, 0x6006, 0x1866, 0x3C7C, 0x3C3E, 0x3018, 0x1818, 0x0062,
    0x6666, 0x6066, 0x6060, 0x6666, 0x186C, 0x66C6, 0x6E00, 0x6666,
    0x6030, 0x1818, 0x7C66, 0x1000, 0x6666, 0x3C66, 0x6018, 0x6666,
    0x3466, 0x6666, 0x3C18, 0x6666, 0x6666, 0x061A, 0x66D6, 0x18D6,
    0x7E66, 0x6666, 0xD8D8, 0x6666, 0x6600, 0x0010, 0x0ABD, 0xAD00,
    0xF6F6, 0x667E, 0x360C, 0x660C, 0x0636, 0x7E00, 0x3E0E, 0x6E3C,
    0x1C7E, 0x7E7E, 0x340C, 0xFEEC, 0x0C06, 0x7E06, 0x0C3C, 0x8266,
    0xD666, 0x6066, 0x1A34, 0x6666, 0x66D6, 0x6630, 0x3318, 0x330C,
    0x0000, 0x0000, 0x18D8, 0x184C, 0x0030, 0x1870, 0x0000, 0x3800,
    0x0024, 0x3C1C, 0x383C, 0xE7E7, 0x20C3, 0x38F0, 0x181B, 0x799E,
    0x7C06, 0x7C7C, 0x067C, 0x7C06, 0x7C7C, 0x3C1E, 0x1E3C, 0x39E0,
    0x0018, 0x006C, 0x1846, 0x7600, 0x0E70, 0x0000, 0x3000, 0x1840,
    0x3C7E, 0x7E3C, 0x0C3C, 0x3C30, 0x3C38, 0x0030, 0x0600, 0x6018,
    0x3E66, 0x7C3C, 0x787E, 0x603E, 0x663C, 0x3C66, 0x7EC6, 0x663C,
    0x6036, 0x663C, 0x183E, 0x18C6, 0x6618, 0x7E1E, 0x0278, 0x00FE,
    0x003E, 0x7C3C, 0x3E3C, 0x3006, 0x663C, 0x1866, 0x3CC6, 0x663C,
    0x7C3E, 0x607C, 0x0E3E, 0x186C, 0x6606, 0x7E0E, 0x1870, 0x007E,
    0x667C, 0x607E, 0x7E7E, 0x663C, 0x3C66, 0x66C6, 0x667E, 0x3C66,
    0x607E, 0x1818, 0x1066, 0x107E, 0x3F7C, 0x243C, 0x3E0C, 0x663C,
    0x1866, 0x667F, 0x180C, 0x3C66, 0x7C3C, 0x7C0C, 0x3C7C, 0x3C7C,
    0x3E3C, 0x3C3C, 0x7E7F, 0x7E7E, 0x6600, 0x0000, 0x0AC3, 0xC300,
    0x0606, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x3000, 0x0000, 0x0C06, 0x0006, 0x0CD8, 0x0000,
    0x7C3F, 0x3E66, 0x0C18, 0x3C3C, 0x3C7C, 0x663F, 0x333C, 0x1E0C,
    0x3F7E, 0x7E7E, 0x1870, 0x1800, 0x007E, 0x0030, 0x0000, 0x0000,
    0x003C, 0x1818, 0x1800, 0x0000, 0x007E, 0x1060, 0x0000, 0x718E,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x1754, 0x3800,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x6000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x007C, 0x0000, 0x7000, 0x0000, 0x0000,
    0x6006, 0x0000, 0x0000, 0x0000, 0x007C, 0x0000, 0x1800, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0060, 0x3C00, 0x007C, 0x0000,
    0x0000, 0x0060, 0x0004, 0x0000, 0x6000, 0x0000, 0x0010, 0x6610,
    0x0000, 0x4040, 0x0000, 0x6666, 0x3C00, 0x0000, 0x0A7E, 0x7E00,
    0x1C1C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0070, 0x0000,
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
    0x0000, 0x0000, 0x1800, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
};

const Fonthead fnt_gr_8x8 = {
    1,  /* font_id */
    9,  /* point */
    "8x8 system font",  /*   BYTE name[32]      */
    0,  /* first_ade */
    255,  /* last_ade */
    6,  /* top */
    6,  /* ascent */
    4,  /* half */
    1,  /* descent */
    1,  /* bottom */
    7,  /* max_char_width */
    8,  /* max_cell_width */
    1,  /* left_offset */
    3,  /* right_offset */
    1,  /* thicken */
    1,  /* ul_size */
    0x5555, /* lighten */
    0x5555, /* skew */
    F_STDFORM | F_MONOSPACE | F_DEFAULT,  /* flags */
    0,                  /*   UBYTE *hor_table   */
    off_table,          /*   UWORD *off_table   */
    dat_table,          /*   UWORD *dat_table   */
    256,  /* form_width */
    8,  /* form_height */
    0,  /* struct font * next_font */
    0   /* UWORD next_seg */
};
