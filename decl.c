#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define TMin INT_MIN
#define TMax INT_MAX

#include "btest.h"
#include "bits.h"

test_rec test_set[] = {
/* Copyright (C) 1991-2012 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <http://www.gnu.org/licenses/>.  */
/* This header is separate from features.h so that the compiler can
   include it implicitly at the start of every compilation.  It must
   not itself include <features.h> or any other header that includes
   <features.h> because the implicit include comes before any feature
   test macros that may be defined in a source file before it first
   explicitly includes a system header.  GCC knows the name of this
   header in order to preinclude it.  */
/* We do support the IEC 559 math functionality, real and complex.  */
/* wchar_t uses ISO/IEC 10646 (2nd ed., published 2011-03-15) /
   Unicode 6.0.  */
/* We do not support C11 <threads.h>.  */
 {"isNegOne", (funct_t) isNegOne, (funct_t) test_isNegOne, 1, "! ~ & ^ | +", 5, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"logicalAnd", (funct_t) logicalAnd, (funct_t) test_logicalAnd, 2,
    "~ & ^ | + << >> !", 5, 1,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"bitZor", (funct_t) bitZor, (funct_t) test_bitZor, 2, "| ~", 8, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"isLessNegTwo", (funct_t) isLessNegTwo, (funct_t) test_isLessNegTwo, 1,
    "! ~ & ^ | + << >>", 12, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"decOK", (funct_t) decOK, (funct_t) test_decOK, 1, "! ~ & ^ | + << >>", 5, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"incOK", (funct_t) incOK, (funct_t) test_incOK, 1, "! ~ & ^ | + << >>", 7, 2,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"isBetween", (funct_t) isBetween, (funct_t) test_isBetween, 3,
    "! ~ & ^ | + << >>", 40, 3,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
{"bitSwap", (funct_t) bitSwap, (funct_t) test_bitSwap, 3,
     "! ~ & ^ | + << >>", 25, 3,
    {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"logicalOr", (funct_t) logicalOr, (funct_t) test_logicalOr, 2,
    "~ & ^ | + << >>", 18, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"rotate", (funct_t) rotate, (funct_t) test_rotate,
   2, "! ~ & ^ | + << >>", 22, 4,
  {{TMin, TMax},{0,1},{TMin,TMax}}},
 {"negVal", (funct_t) negVal, (funct_t) test_negVal, 1, "! ~ & ^ | + << >>", 10, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"twocomp2onecomp", (funct_t) twocomp2onecomp,
   (funct_t) test_twocomp2onecomp, 1, "! ~ & ^ | + << >>", 20, 4,
  {{TMin, TMax},{TMin,TMax},{TMin,TMax}}},
 {"float_range", (funct_t) float_range, (funct_t) test_float_range, 1,
    "$", 10, 2,
     {{1, 1},{1,1},{1,1}}},
 {"float_gtOne", (funct_t) float_gtOne, (funct_t) test_float_gtOne, 1,
    "$", 15, 2,
     {{1, 1},{1,1},{1,1}}},
 {"float_exactInt", (funct_t) float_exactInt, (funct_t) test_float_exactInt, 1,
    "$", 30, 4,
     {{1, 1},{1,1},{1,1}}},
  {"", NULL, NULL, 0, "", 0, 0,
   {{0, 0},{0,0},{0,0}}}
};
