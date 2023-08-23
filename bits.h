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
int isNegOne(int);
int test_isNegOne(int);
int logicalAnd(int);
int test_logicalAnd(int);
int bitZor(int, int);
int test_bitZor(int, int);
int isLessNegTwo(int);
int test_isLessNegTwo(int);
int decOK();
int test_decOK();
int incOK();
int test_incOK();
int isBetween(int, int);
int test_isBetween(int, int);
int bitSwap(int, int, int);
int test_bitSwap(int, int, int);
int logicalOr(int);
int test_logicalOr(int);
int rotate(int, int);
int test_rotate(int, int);
int negVal(int);
int test_negVal(int);
int twocomp2onecomp(int);
int test_twocomp2onecomp(int);
unsigned float_range(unsigned);
unsigned test_float_range(unsigned);
unsigned float_gtOne(unsigned);
unsigned test_float_gtOne(unsigned);
unsigned float_exactInt(unsigned);
unsigned test_float_exactInt(unsigned);
