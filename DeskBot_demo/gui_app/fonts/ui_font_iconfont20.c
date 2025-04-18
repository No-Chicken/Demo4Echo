/*******************************************************************************
 * Size: 20 px
 * Bpp: 4
 * Opts: --bpp 4 --size 20 --font E:/projects/SquareLine_Projects/Echo_mate/main/assets/font/iconfont2.ttf -o E:/projects/SquareLine_Projects/Echo_mate/main/assets/font\ui_font_iconfont20.c --format lvgl -r 0xe60f -r 0xe605 -r 0xe679 -r 0xe691 -r 0xe67a -r 0xe6ca -r 0xe641 -r 0xe677 -r 0xec7e -r 0xe652 --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_ICONFONT20
#define UI_FONT_ICONFONT20 1
#endif

#if UI_FONT_ICONFONT20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+E605 "" */
    0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3e, 0xf8, 0x0, 0x8,
    0x40, 0x0, 0x0, 0x0, 0x2, 0xee, 0xbf, 0x0,
    0xd, 0xf5, 0x0, 0x0, 0x0, 0x1e, 0xe2, 0x7f,
    0x10, 0x1, 0xcf, 0x30, 0x0, 0x13, 0xdf, 0x30,
    0x7f, 0x1b, 0xb1, 0x1e, 0xc0, 0x1c, 0xff, 0xf4,
    0x0, 0x7f, 0x16, 0xfb, 0x6, 0xf3, 0x8f, 0x76,
    0x20, 0x0, 0x7f, 0x10, 0x7f, 0x41, 0xf9, 0xae,
    0x0, 0x0, 0x0, 0x7f, 0x10, 0xf, 0x90, 0xdb,
    0xae, 0x0, 0x0, 0x0, 0x7f, 0x10, 0xe, 0xa0,
    0xcd, 0xae, 0x0, 0x0, 0x0, 0x7f, 0x10, 0xf,
    0x90, 0xdb, 0x8f, 0x76, 0x20, 0x0, 0x7f, 0x10,
    0x7f, 0x41, 0xf9, 0x1c, 0xff, 0xf4, 0x0, 0x7f,
    0x16, 0xfb, 0x6, 0xf3, 0x0, 0x13, 0xdf, 0x30,
    0x7f, 0x1b, 0xb1, 0x1e, 0xd0, 0x0, 0x0, 0x1e,
    0xe2, 0x7f, 0x10, 0x1, 0xcf, 0x30, 0x0, 0x0,
    0x2, 0xee, 0xbf, 0x0, 0xd, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0x3e, 0xf8, 0x0, 0x8, 0x40, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x10, 0x0, 0x0, 0x0,
    0x0,

    /* U+E60F "" */
    0x0, 0x0, 0x6, 0x50, 0x0, 0x28, 0x10, 0x0,
    0x0, 0x0, 0x4, 0xdf, 0xf5, 0x43, 0xcf, 0xf7,
    0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xff, 0xff,
    0xff, 0x50, 0x0, 0x0, 0xb, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x10, 0x0, 0x0, 0xc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x20, 0x0, 0x0, 0x5f, 0xff,
    0xff, 0xef, 0xff, 0xff, 0xb0, 0x0, 0x5a, 0xff,
    0xff, 0xe3, 0x1, 0xaf, 0xff, 0xfb, 0x80, 0xcf,
    0xff, 0xff, 0x40, 0x0, 0xe, 0xff, 0xff, 0xf2,
    0xcf, 0xff, 0xff, 0x10, 0x0, 0xb, 0xff, 0xff,
    0xf2, 0xcf, 0xff, 0xff, 0x40, 0x0, 0xe, 0xff,
    0xff, 0xf2, 0x5a, 0xff, 0xff, 0xe3, 0x0, 0xbf,
    0xff, 0xfb, 0x80, 0x0, 0x5f, 0xff, 0xff, 0xef,
    0xff, 0xff, 0xb0, 0x0, 0x0, 0xc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0x20, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x10, 0x0, 0x0, 0xf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0x50, 0x0, 0x0,
    0x4, 0xdf, 0xf5, 0x44, 0xcf, 0xf7, 0x0, 0x0,
    0x0, 0x0, 0x6, 0x50, 0x0, 0x28, 0x10, 0x0,
    0x0,

    /* U+E641 "" */
    0x0, 0x0, 0x0, 0x2, 0x57, 0x64, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xdf, 0xdd, 0xbf,
    0xfc, 0x40, 0x0, 0x0, 0x0, 0x2, 0xd9, 0x4c,
    0x1b, 0x33, 0xd4, 0xab, 0x10, 0x0, 0x0, 0x2e,
    0x50, 0xb3, 0xb, 0x30, 0x6a, 0x6, 0xd1, 0x0,
    0x1, 0xd8, 0xdb, 0xe5, 0x3b, 0x53, 0x5f, 0xbd,
    0x8c, 0x0, 0x9, 0x60, 0x9, 0xa8, 0xae, 0xca,
    0x8a, 0x90, 0x6, 0x80, 0x2c, 0x0, 0xc, 0x20,
    0xb, 0x30, 0x3, 0xb0, 0x0, 0xc1, 0x76, 0x0,
    0xe, 0x0, 0xb, 0x30, 0x0, 0xe0, 0x0, 0x67,
    0xc1, 0x0, 0x1c, 0x0, 0xb, 0x30, 0x0, 0xc1,
    0x0, 0x1c, 0xd0, 0x0, 0x2b, 0x0, 0xb, 0x30,
    0x0, 0xb2, 0x0, 0xd, 0xff, 0xff, 0xff, 0xee,
    0xef, 0xfe, 0xee, 0xff, 0xff, 0xff, 0xd0, 0x0,
    0x2b, 0x0, 0xb, 0x30, 0x0, 0xb2, 0x0, 0xd,
    0xc1, 0x0, 0x1c, 0x0, 0xb, 0x30, 0x0, 0xc1,
    0x0, 0x1c, 0x86, 0x0, 0xe, 0x0, 0xb, 0x30,
    0x0, 0xe0, 0x0, 0x68, 0x2d, 0x0, 0xc, 0x20,
    0xb, 0x30, 0x3, 0xb0, 0x0, 0xd2, 0xa, 0x60,
    0x9, 0xa8, 0xae, 0xca, 0x8a, 0x90, 0x6, 0x90,
    0x1, 0xd9, 0xdc, 0xe5, 0x3b, 0x53, 0x5f, 0xbd,
    0x8d, 0x0, 0x0, 0x3e, 0x50, 0xb3, 0xb, 0x30,
    0x6a, 0x6, 0xe2, 0x0, 0x0, 0x2, 0xd9, 0x4c,
    0x1b, 0x33, 0xd4, 0xab, 0x10, 0x0, 0x0, 0x0,
    0x6, 0xdf, 0xdd, 0xbf, 0xfb, 0x40, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x2, 0x57, 0x64, 0x10, 0x0,
    0x0, 0x0,

    /* U+E652 "" */
    0x0, 0x0, 0x20, 0x0, 0x0, 0x0, 0x2, 0x0,
    0x0, 0x0, 0x2, 0xf9, 0x0, 0x0, 0x0, 0x9f,
    0x20, 0x0, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf9, 0xcf, 0xee, 0xee, 0xee, 0xee,
    0xee, 0xee, 0xee, 0xfc, 0xcf, 0x10, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xfc, 0xcf, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xfc, 0xcf, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xcf,
    0x21, 0x11, 0x11, 0x11, 0x11, 0x11, 0x12, 0xfc,
    0xcf, 0x10, 0x9a, 0xa2, 0x0, 0x2a, 0xa9, 0x1,
    0xfc, 0xcf, 0x12, 0xff, 0xf6, 0x0, 0x6f, 0xff,
    0x21, 0xfc, 0xcf, 0x10, 0x23, 0x30, 0x0, 0x3,
    0x32, 0x1, 0xfc, 0xcf, 0x10, 0x1, 0x10, 0x0,
    0x1, 0x10, 0x1, 0xfc, 0xcf, 0x12, 0xff, 0xf5,
    0x0, 0x6f, 0xff, 0x11, 0xfc, 0xcf, 0x10, 0xbc,
    0xc3, 0x0, 0x3c, 0xcb, 0x1, 0xfc, 0xcf, 0x10,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x1, 0xfc, 0xcf,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xfc,
    0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf9,

    /* U+E677 "" */
    0x0, 0x0, 0x0, 0x0, 0x23, 0x32, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x3, 0xae, 0xff, 0xff,
    0xea, 0x30, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xed,
    0xff, 0xff, 0xed, 0xfa, 0x0, 0x0, 0x0, 0x1d,
    0xf8, 0x4f, 0xb9, 0xe8, 0xf5, 0x7f, 0xd1, 0x0,
    0x0, 0xce, 0xfe, 0xec, 0x7, 0xe0, 0xae, 0xdf,
    0xfc, 0x0, 0x8, 0xf3, 0x1c, 0xff, 0xcd, 0xfc,
    0xff, 0xc1, 0x4f, 0x80, 0x2f, 0x70, 0xa, 0xc7,
    0xae, 0xfa, 0x7c, 0xa0, 0x8, 0xf2, 0x7f, 0x0,
    0xf, 0x70, 0x8, 0xe0, 0x7, 0xe0, 0x1, 0xf7,
    0xc9, 0x0, 0x2f, 0x40, 0x8, 0xe0, 0x4, 0xf1,
    0x0, 0xbc, 0xeb, 0x77, 0x9f, 0x86, 0x6b, 0xf6,
    0x68, 0xf8, 0x66, 0xbe, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x0,
    0x3f, 0x30, 0x7, 0xe0, 0x2, 0xf3, 0x0, 0x7e,
    0xca, 0x0, 0x1f, 0x40, 0x7, 0xe0, 0x4, 0xf1,
    0x0, 0xac, 0x7f, 0x0, 0xe, 0x80, 0x7, 0xe0,
    0x7, 0xe0, 0x0, 0xf7, 0x2f, 0x80, 0xa, 0xd6,
    0xad, 0xfa, 0x7c, 0xa0, 0x8, 0xf2, 0x8, 0xf3,
    0x1c, 0xff, 0xdd, 0xfc, 0xff, 0xc2, 0x3f, 0x80,
    0x0, 0xcf, 0xfe, 0xdc, 0x7, 0xe0, 0xae, 0xef,
    0xec, 0x0, 0x0, 0x1d, 0xf7, 0x3f, 0xa9, 0xe8,
    0xf4, 0x7f, 0xd1, 0x0, 0x0, 0x0, 0xaf, 0xed,
    0xff, 0xff, 0xdd, 0xfa, 0x0, 0x0, 0x0, 0x0,
    0x3, 0xae, 0xff, 0xff, 0xea, 0x30, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x23, 0x32, 0x0, 0x0,
    0x0, 0x0,

    /* U+E679 "" */
    0x0, 0x0, 0x6, 0xbd, 0xca, 0x50, 0x0, 0x0,
    0x0, 0x4, 0xef, 0xec, 0xce, 0xfd, 0x30, 0x0,
    0x0, 0x4f, 0xe5, 0x0, 0x0, 0x5e, 0xf3, 0x0,
    0x1, 0xfd, 0x10, 0x1, 0x10, 0x1, 0xee, 0x0,
    0x9, 0xf2, 0x1, 0xbf, 0xfb, 0x10, 0x4f, 0x70,
    0xe, 0xb0, 0xc, 0xf8, 0x9f, 0xb0, 0xd, 0xd0,
    0x1f, 0x70, 0x2f, 0x70, 0x9, 0xf0, 0x9, 0xf0,
    0x2f, 0x60, 0x1f, 0x80, 0xa, 0xf0, 0x8, 0xf0,
    0xf, 0xa0, 0xb, 0xfa, 0xbf, 0x90, 0xb, 0xe0,
    0xa, 0xf0, 0x1, 0x9f, 0xe9, 0x0, 0x2f, 0x90,
    0x4, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x9f, 0x20,
    0x0, 0xce, 0x0, 0x0, 0x0, 0x1, 0xfb, 0x0,
    0x0, 0x4f, 0x80, 0x0, 0x0, 0xa, 0xf2, 0x0,
    0x0, 0xa, 0xf3, 0x0, 0x0, 0x4f, 0x90, 0x0,
    0x0, 0x1, 0xfd, 0x0, 0x0, 0xde, 0x10, 0x0,
    0x0, 0x0, 0x6f, 0x80, 0x9, 0xf5, 0x0, 0x0,
    0x0, 0x0, 0xb, 0xf4, 0x5f, 0xa0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xef, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x3c, 0xb2, 0x0, 0x0, 0x0,

    /* U+E67A "" */
    0x0, 0x0, 0x0, 0x0, 0x32, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8d, 0x20, 0x0, 0x11,
    0x0, 0x6, 0xe2, 0x0, 0x0, 0x4e, 0x40, 0x2,
    0x54, 0x10, 0x9, 0xc0, 0x0, 0x0, 0x0, 0x1,
    0xbf, 0xff, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xd, 0xff, 0xff, 0xff, 0x90, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xff, 0xff, 0xff, 0xf2, 0x0, 0x0,
    0x66, 0x30, 0xdf, 0xff, 0xff, 0xff, 0xf7, 0x6,
    0x63, 0xef, 0x70, 0xef, 0xff, 0xff, 0xff, 0xf8,
    0xe, 0xf7, 0x22, 0x10, 0xcf, 0xff, 0xff, 0xff,
    0xf6, 0x2, 0x21, 0x0, 0x0, 0x6f, 0xff, 0xff,
    0xff, 0xf1, 0x0, 0x0, 0x0, 0x0, 0xb, 0xff,
    0xff, 0xff, 0x60, 0x0, 0x0, 0x0, 0x3, 0x0,
    0x8e, 0xff, 0xc4, 0x1, 0x20, 0x0, 0x0, 0x5f,
    0x60, 0x0, 0x10, 0x0, 0xc, 0xd1, 0x0, 0x0,
    0x7d, 0x10, 0x0, 0x21, 0x0, 0x5, 0xd1, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xf9, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf9, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x32, 0x0,
    0x0, 0x0, 0x0,

    /* U+E691 "" */
    0x0, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xcf, 0xff, 0xfc, 0x60,
    0x0, 0x0, 0x0, 0x3, 0xdf, 0xfd, 0xaa, 0xcf,
    0xfd, 0x20, 0x0, 0x0, 0x4f, 0xf9, 0x20, 0x0,
    0x2, 0x9f, 0xf4, 0x0, 0x2, 0xef, 0x40, 0x0,
    0x0, 0x0, 0x4, 0xfe, 0x10, 0xb, 0xf5, 0x0,
    0x0, 0x5a, 0x0, 0x0, 0x6f, 0xb0, 0x3f, 0xb0,
    0x0, 0x0, 0x6c, 0x0, 0x0, 0xc, 0xf2, 0x8f,
    0x50, 0x0, 0x0, 0x2, 0x0, 0x0, 0x5, 0xf7,
    0xbf, 0x10, 0x0, 0x0, 0x9f, 0x0, 0x0, 0x2,
    0xfa, 0xcf, 0x0, 0x0, 0x0, 0xaf, 0x10, 0x0,
    0x0, 0xfb, 0xbf, 0x10, 0x0, 0x0, 0xaf, 0x10,
    0x0, 0x2, 0xfa, 0x8f, 0x50, 0x0, 0x0, 0xaf,
    0x10, 0x0, 0x5, 0xf7, 0x3f, 0xb0, 0x0, 0x0,
    0xaf, 0x10, 0x0, 0xc, 0xf2, 0xc, 0xf5, 0x0,
    0x0, 0x6b, 0x0, 0x0, 0x6f, 0xb0, 0x2, 0xff,
    0x40, 0x0, 0x0, 0x0, 0x4, 0xfe, 0x10, 0x0,
    0x4f, 0xf9, 0x20, 0x0, 0x2, 0x9f, 0xf4, 0x0,
    0x0, 0x3, 0xdf, 0xfc, 0xaa, 0xcf, 0xfd, 0x20,
    0x0, 0x0, 0x0, 0x6, 0xcf, 0xff, 0xfc, 0x60,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x0,
    0x0, 0x0, 0x0,

    /* U+E6CA "" */
    0x0, 0x0, 0x0, 0x0, 0x11, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x6, 0xcf, 0xff, 0xfb, 0x50,
    0x0, 0x0, 0x0, 0x2, 0xdf, 0xfc, 0xaa, 0xcf,
    0xfc, 0x10, 0x0, 0x0, 0x4f, 0xf9, 0x10, 0x0,
    0x2, 0xaf, 0xe2, 0x0, 0x1, 0xef, 0x40, 0x0,
    0x21, 0x0, 0x6, 0xfd, 0x0, 0xa, 0xf6, 0x0,
    0x0, 0xdb, 0x0, 0x0, 0x8f, 0x90, 0x2f, 0xc0,
    0x0, 0x0, 0xec, 0x0, 0x0, 0xe, 0xf0, 0x7f,
    0x60, 0x0, 0x0, 0xec, 0x0, 0x0, 0x7, 0xf5,
    0x9f, 0x20, 0x0, 0x0, 0xec, 0x0, 0x0, 0x4,
    0xf8, 0xaf, 0x10, 0x0, 0x7, 0xfc, 0x0, 0x0,
    0x3, 0xf8, 0x9f, 0x20, 0x0, 0xaf, 0xd2, 0x0,
    0x0, 0x4, 0xf8, 0x7f, 0x60, 0x6, 0xfc, 0x10,
    0x0, 0x0, 0x7, 0xf5, 0x2f, 0xc0, 0x1, 0x60,
    0x0, 0x0, 0x0, 0xe, 0xf0, 0xa, 0xf6, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x8f, 0x90, 0x1, 0xef,
    0x40, 0x0, 0x0, 0x0, 0x6, 0xfd, 0x0, 0x0,
    0x4f, 0xf8, 0x10, 0x0, 0x2, 0xaf, 0xe2, 0x0,
    0x0, 0x2, 0xdf, 0xfc, 0xaa, 0xcf, 0xfc, 0x10,
    0x0, 0x0, 0x0, 0x6, 0xcf, 0xff, 0xfb, 0x50,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x11, 0x0,
    0x0, 0x0, 0x0,

    /* U+EC7E "" */
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf2, 0x2f, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf2, 0x1c, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xc1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x19, 0x99, 0x99,
    0x99, 0x99, 0x99, 0x99, 0x99, 0x91, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2,
    0x2f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xf2, 0x2, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
    0x22, 0x20, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1c, 0xcc, 0xcc, 0xcc, 0xcc,
    0xcc, 0xcc, 0xcc, 0xc1, 0x2f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x2f, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 320, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 153, .adv_w = 320, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 306, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 516, .adv_w = 320, .box_w = 18, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 669, .adv_w = 320, .box_w = 20, .box_h = 21, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 879, .adv_w = 320, .box_w = 16, .box_h = 19, .ofs_x = 2, .ofs_y = -2},
    {.bitmap_index = 1031, .adv_w = 320, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1202, .adv_w = 320, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1373, .adv_w = 320, .box_w = 18, .box_h = 19, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1544, .adv_w = 320, .box_w = 18, .box_h = 15, .ofs_x = 1, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0xa, 0x3c, 0x4d, 0x72, 0x74, 0x75, 0x8c,
    0xc5, 0x679
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 58885, .range_length = 1658, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 10, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_iconfont20 = {
#else
lv_font_t ui_font_iconfont20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 21,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = 0,
    .underline_thickness = 0,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_ICONFONT20*/

