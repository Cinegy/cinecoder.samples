// Command line interface

#pragma once

#include <vector>

int g_cursor_x = 26;
int g_cursor_y = 26;
unsigned char g_cursor[2704] = {
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x4b,0x00,0x00,0x00,0xdf,0x00,0x00,0x00,0xdf,0x00,0x00,0x00,0x50,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe5,0x26,0x26,0x26,0xff,0x7f,0x7f,0x7f,0xff,0x27,0x27,0x27,0xfc,
  0x00,0x00,0x00,0x63,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,
  0x9e,0x9e,0x9e,0xff,0x27,0x27,0x27,0xfe,0x00,0x00,0x00,0x74,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0x7f,0x7f,0x7f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa0,0xa0,0xa0,0xfe,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0x88,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,
  0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xa4,0xa4,0xa4,0xfd,
  0x26,0x26,0x26,0xff,0x00,0x00,0x00,0x95,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xfe,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xa5,0xa5,0xa5,0xfc,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xa4,0x00,0x00,0x00,0x05,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xab,0xab,0xab,0xfa,0x26,0x26,0x26,0xff,
  0x00,0x00,0x00,0xb2,0x00,0x00,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xaf,0xaf,0xaf,0xf8,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xbf,0x00,0x00,0x00,0x0d,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,0x7f,0x7f,0x7f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xb6,0xb6,0xb6,0xf7,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xca,
  0x00,0x00,0x00,0x13,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfd,
  0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xbd,0xbd,0xbd,0xf5,
  0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xd5,0x00,0x00,0x00,0x1b,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xfc,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xc4,0xc4,0xc4,0xf3,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xde,0x00,0x00,0x00,0x23,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xcc,0xcc,0xcc,0xf2,0x26,0x26,0x26,0xff,
  0x00,0x00,0x00,0xe6,0x00,0x00,0x00,0x2d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xd3,0xd3,0xd3,0xf1,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xea,0x00,0x00,0x00,0x32,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfb,0x7f,0x7f,0x7f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xb7,0xb7,0xb7,0xe5,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0xe6,
  0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfa,
  0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf5,0xf5,0xf5,0xf7,0x4c,0x4c,0x4c,0xb1,0x00,0x00,0x00,0xfc,
  0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xfa,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xc0,0xc0,0xc0,0xf8,
  0x91,0x91,0x91,0xff,0x7f,0x7f,0x7f,0xff,0x7f,0x7f,0x7f,0xff,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xff,
  0x00,0x00,0x00,0xff,0x00,0x00,0x00,0xb9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xe0,0xe0,0xe0,0xf4,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0x7f,0x7f,0x7f,0xff,0x00,0x00,0x00,0xf5,0x00,0x00,0x00,0x96,0x00,0x00,0x00,0x80,
  0x00,0x00,0x00,0x69,0x00,0x00,0x00,0x47,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfa,0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xaf,0xaf,0xaf,0xf9,0x91,0x91,0x91,0xff,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x8a,0x8a,0x8a,0xf8,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x31,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf9,0x7f,0x7f,0x7f,0xff,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xaa,0xaa,0xaa,0xfb,0x26,0x26,0x26,0xff,0x26,0x26,0x26,0xff,
  0xdc,0xdc,0xdc,0xf1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xf1,0xf1,0xf1,0xf4,0x26,0x26,0x26,0xff,
  0x00,0x00,0x00,0xa3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
  0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xa5,0xa5,0xa5,0xfd,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xa6,
  0x00,0x00,0x00,0xf7,0x80,0x80,0x80,0xfe,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
  0x83,0x83,0x83,0xfd,0x00,0x00,0x00,0xfa,0x00,0x00,0x00,0x1d,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xe7,0x26,0x26,0x26,0xff,0x82,0x82,0x82,0xfe,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0x8f,
  0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x9f,0x26,0x26,0x26,0xff,0xf1,0xf1,0xf1,0xf4,0xff,0xff,0xff,0xff,
  0xff,0xff,0xff,0xff,0xe4,0xe4,0xe4,0xf1,0x26,0x26,0x26,0xff,0x00,0x00,0x00,0x8d,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x62,0x00,0x00,0x00,0xf9,0x00,0x00,0x00,0xfa,0x00,0x00,0x00,0x7a,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x31,0x00,0x00,0x00,0xff,0x8b,0x8b,0x8b,0xf7,
  0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0x7f,0x7f,0x7f,0xff,0x00,0x00,0x00,0xf2,
  0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0b,0x00,0x00,0x00,0x0e,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc2,
  0x7f,0x7f,0x7f,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xb2,0xb2,0xb2,0xe6,
  0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x61,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x54,0x26,0x26,0x26,0xff,0xc1,0xc1,0xc1,0xf4,0xff,0xff,0xff,0xff,0xe8,0xe8,0xe8,0xf2,
  0x29,0x29,0x29,0xf8,0x00,0x00,0x00,0xff,0x00,0x00,0x00,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0xe0,0x26,0x26,0x26,0xff,0x7f,0x7f,0x7f,0xff,
  0x26,0x26,0x26,0xff,0x00,0x00,0x00,0xfd,0x00,0x00,0x00,0x9d,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3f,0x00,0x00,0x00,0xe0,
  0x00,0x00,0x00,0xeb,0x00,0x00,0x00,0x91,0x00,0x00,0x00,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00};

bool g_CLI_bProcess = false;
int g_CLI_mouse_X = 0;
int g_CLI_mouse_Y = 0;
struct fb_var_screeninfo g_var_info;
std::vector<unsigned char> g_fb;
bool g_bCopyToFB = false;

#define DELAY_MOUSE 150

int CLI_OnMouseMove()
{
	int fd, bytes;
	unsigned char data[3];

	const char *pDevice = "/dev/input/mice";

	// Open Mouse
	fd = open(pDevice, O_RDWR);
	if (fd == -1)
	{
		printf("ERROR Opening %s\n", pDevice);
		return -1;
	}

	struct fb_var_screeninfo var_info;
	var_info = frame_buffer.GetVInfo();

	g_CLI_mouse_X = var_info.xres / 2;
	g_CLI_mouse_Y = var_info.yres / 2;

	g_CLI_bProcess = true;

	int left, middle, right;
	signed char x, y;
	int _x, _y;
	while (g_CLI_bProcess)
	{
		// Read Mouse
		bytes = read(fd, data, sizeof(data));

		if (bytes > 0)
		{
			left = data[0] & 0x1;
			right = data[0] & 0x2;
			middle = data[0] & 0x4;

			x = data[1];
			y = data[2];

			_x = g_CLI_mouse_X + (int)x;
			_y = g_CLI_mouse_Y - (int)y;

			if (_x < var_info.xres && _x >= 0) g_CLI_mouse_X = _x;
			if (_y < var_info.yres && _y >= 0) g_CLI_mouse_Y = _y;

			{
				int h = var_info.yres;
				float fStartY = (float)h - (edgeLineY * 2.f);
				float fStopY = (float)h;

				if (((float)g_CLI_mouse_Y >= fStartY) && ((float)g_CLI_mouse_Y <= fStopY))
					g_bShowSlider = true;
				else
					g_bShowSlider = false;
			}

            if (left > 0) // click left mouse button
            {
                if (g_bShowSlider)
                {
                    SeekToFrame(g_CLI_mouse_X, g_CLI_mouse_Y);
                }
                else
                {
                    Keyboard(32, 0, 0);
                }
            }
		}
	}

	if (fd)
        close(fd);

	return 0;
}

int CLI_Draw(unsigned char* pb)
{
	static size_t pitch = g_var_info.xres * 4;

	/*if (g_bPause)
	{
        sprintf_s(textbuf, "Pause");
        dib_draw::PrintStringToDIB_font8x16(textdib, 0, 0, textdib_size, textbuf, -1, 0, 0, 2);
        text_size_x = strlen(textbuf)*8*2;
        text_size_y = 16*2;
	}*/

	if (!g_bPause)
	{
        int *textdib_ptr = ((int*)pb) + 1/*(g_var_info.yres - text_size_y + 1)*/ * g_var_info.xres - text_size_x;
        for(int i = 0; i < text_size_y; i++)
            memcpy(textdib_ptr + i*g_var_info.xres, textdib + i*textdib_size, text_size_x*4);
    }

	if (g_CLI_bProcess)
	{
		int w = g_var_info.xres;
		int h = g_var_info.yres;

		int mx, my;
		mx = g_cursor_x / 2;
		my = g_cursor_y / 2;

		int start_x = max(0, g_CLI_mouse_X - mx);
		int stop_x = min(w - 1, g_CLI_mouse_X + mx);

		int start_y = max(0, g_CLI_mouse_Y - my);
		int stop_y = min(h - 1, g_CLI_mouse_Y + my);

		unsigned char* pbMouse = pb + (start_y * pitch) + (start_x * 4);
		unsigned char* pbCursor = g_cursor;
		int stride = (stop_x - start_x) * 4;

		if (g_bShowSlider)
		{
            sizeSquare2 = (float)w / 200;
            sizeSquare = sizeSquare2 * 2;
            edgeLineY = sizeSquare2 * 4;
            edgeLineX = sizeSquare2 * 2;

			unsigned char* pbSlider = pb + ((h - (int)(edgeLineY * 2.f)) * pitch);
			for (int i = 0; i < (int)(edgeLineY * 2.f); i++)
			{
				memset(pbSlider, 0x00, pitch);
				pbSlider += pitch;
			}

			pbSlider = pb + ((h - (int)(edgeLineY)) * pitch) + ((int)edgeLineX * 4);
			memset(pbSlider, 0xFF, pitch - ((int)edgeLineX * 4));

			float xCoord = edgeLineX + ((((float)w - (2.f * edgeLineX)) / (float)(iAllFrames - 1)) * (float)iCurPlayFrameNumber);
			int yCoord = h - (int)(edgeLineY + sizeSquare2);

			pbSlider = pb + (int)(yCoord * pitch) + ((int)(xCoord - sizeSquare2) * 4);
			for (int i = 0; i < (int)sizeSquare; i++)
			{
				memset(pbSlider, 0xFF, sizeSquare * 4);
				pbSlider += pitch;
			}
		}

		static int icount_mouse = 0;
		static int iprevx = g_CLI_mouse_X;
		static int iprevy = g_CLI_mouse_Y;

		if (iprevx == g_CLI_mouse_X && iprevy == g_CLI_mouse_Y)
		    icount_mouse++;
		else
		{
			iprevx = g_CLI_mouse_X;
			iprevy = g_CLI_mouse_Y;
			icount_mouse = 0;
		}

		if (icount_mouse >= DELAY_MOUSE && !g_bShowSlider)
		    icount_mouse = DELAY_MOUSE;
		else
		{
            int k = 0;
            for (int i = start_y; i < stop_y; i++)
            {
                for (int j = 0; j < (stop_x - start_x); j++)
                {
                    //memset(pbMouse, 0xFF, stride);
                    k = (j * 4);
                    if (*(pbCursor + k - 1) == 255)
                        memcpy(pbMouse + k, pbCursor + k, 4);
                }
                //memcpy(pbMouse, pbCursor, stride);
                pbMouse += pitch;
                pbCursor += (g_cursor_x * 4);
            }
		}
	}

	return 0;
}
