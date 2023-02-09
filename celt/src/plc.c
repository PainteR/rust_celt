/* Copyright (c) 2009-2010 Xiph.Org Foundation
   Written by Jean-Marc Valin */
/*
   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions
   are met:

   - Redistributions of source code must retain the above copyright
   notice, this list of conditions and the following disclaimer.

   - Redistributions in binary form must reproduce the above copyright
   notice, this list of conditions and the following disclaimer in the
   documentation and/or other materials provided with the distribution.

   THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
   ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
   LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
   A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE FOUNDATION OR
   CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
   EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
   PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
   PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
   LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
   NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
   SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/
/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* This is a build of CELT */
#define CELT_BUILD /**/

/* Version extra */
#define CELT_EXTRA_VERSION ""

/* Version major */
#define CELT_MAJOR_VERSION 0

/* Version micro */
#define CELT_MICRO_VERSION 4

/* Version minor */
#define CELT_MINOR_VERSION 11

/* Complete version string */
#define CELT_VERSION "0.11.4"

/* Custom modes */
#define CUSTOM_MODES /**/

/* Assertions */
/* #undef ENABLE_ASSERTIONS */

/* Postfilter */
/* #undef ENABLE_POSTFILTER */

/* Debug fixed-point implementation */
/* #undef FIXED_DEBUG */

/* Compile as fixed-point */
/* #undef FIXED_POINT */

/* Compile as floating-point */
#define FLOATING_POINT /**/

/* Float approximations */
/* #undef FLOAT_APPROX */

/* Define to 1 if you have the <alloca.h> header file. */
#define HAVE_ALLOCA_H 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `getopt_long' function. */
#define HAVE_GETOPT_LONG 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `m' library (-lm). */
#define HAVE_LIBM 1

/* Define to 1 if you have the `winmm' library (-lwinmm). */
/* #undef HAVE_LIBWINMM */

/* Define to 1 if you have the `lrint' function. */
#define HAVE_LRINT 1

/* Define to 1 if you have the `lrintf' function. */
#define HAVE_LRINTF 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/audioio.h> header file. */
/* #undef HAVE_SYS_AUDIOIO_H */

/* Define to 1 if you have the <sys/soundcard.h> header file. */
/* #undef HAVE_SYS_SOUNDCARD_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory where libtool stores uninstalled libraries. */
#define LT_OBJDIR ".libs/"

/* We're part of Opus */
/* #undef OPUS_BUILD */

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* The size of `int', as computed by sizeof. */
#define SIZEOF_INT 4

/* The size of `long', as computed by sizeof. */
#define SIZEOF_LONG 4

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* The size of `short', as computed by sizeof. */
#define SIZEOF_SHORT 2

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Make use of alloca */
/* #undef USE_ALLOCA */

/* Use C99 variable-size arrays */
/* #undef VAR_ARRAYS */

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
#if defined __BIG_ENDIAN__
#define WORDS_BIGENDIAN 1
#endif
#else
#ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
#endif
#endif

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to the equivalent of the C99 'restrict' keyword, or to
   nothing if this is not supported.  Do not define if restrict is
   supported directly.  */
#define restrict __restrict
/* Work around a bug in Sun C++: it does not support _Restrict or
   __restrict__, even though the corresponding Sun C compiler ends up with
   "#define restrict _Restrict" or "#define restrict __restrict__" in the
   previous line.  Perhaps some future version of Sun C++ will work with
   restrict; if so, hopefully it defines __RESTRICT like Sun C does.  */
#if defined __SUNPRO_CC && !defined __RESTRICT
#define _Restrict
#define __restrict__
#endif

// Required for compat with Valve.
#define OPUS_BUILD 1

// Slim down the binary.
#define CUSTOM_MODES_ONLY 1

// alloca on win32, vararrays on everything else we support.
#ifdef _WIN32
#define USE_ALLOCA 1
#else
#define VAR_ARRAYS 1
#endif

#ifdef _MSC_VER
#pragma warning(disable : 4018) // signed/unsigned mismatch
#pragma warning(disable : 4244) // conversion from 'double' to 'celt_word16', possible loss of data
#pragma warning(disable : 4267) // conversion from 'size_t' to 'int', possible loss of data
#pragma warning(disable : 4305) // truncation from 'double' to 'const float'
#pragma warning(disable : 4311) // pointer truncation from 'char *' to 'long'
#pragma warning(disable : 4554) // check operator precedence for possible error; use parentheses to clarify precedence
#pragma warning(disable : 4996) // This function or variable may be unsafe. Consider using fopen_s instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS. See online help for details.
#endif

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "plc.h"
#include "stack_alloc.h"
#include "mathops.h"

void _celt_lpc(
    celt_word16 *_lpc,     /* out: [0...p-1] LPC coefficients      */
    const celt_word32 *ac, /* in:  [0...p] autocorrelation values  */
    int p)
{
   int i, j;
   celt_word32 r;
   celt_word32 error = ac[0];
#ifdef FIXED_POINT
   celt_word32 lpc[LPC_ORDER];
#else
   float *lpc = _lpc;
#endif

   for (i = 0; i < p; i++)
      lpc[i] = 0;
   if (ac[0] != 0)
   {
      for (i = 0; i < p; i++)
      {
         /* Sum up this iteration's reflection coefficient */
         celt_word32 rr = 0;
         for (j = 0; j < i; j++)
            rr += MULT32_32_Q31(lpc[j], ac[i - j]);
         rr += SHR32(ac[i + 1], 3);
         r = -frac_div32(SHL32(rr, 3), error);
         /*  Update LPC coefficients and total error */
         lpc[i] = SHR32(r, 3);
         for (j = 0; j<(i + 1)>> 1; j++)
         {
            celt_word32 tmp1, tmp2;
            tmp1 = lpc[j];
            tmp2 = lpc[i - 1 - j];
            lpc[j] = tmp1 + MULT32_32_Q31(r, tmp2);
            lpc[i - 1 - j] = tmp2 + MULT32_32_Q31(r, tmp1);
         }

         error = error - MULT32_32_Q31(MULT32_32_Q31(r, r), error);
         /* Bail out once we get 30 dB gain */
#ifdef FIXED_POINT
         if (error < SHR32(ac[0], 10))
            break;
#else
         if (error < .001f * ac[0])
            break;
#endif
      }
   }
#ifdef FIXED_POINT
   for (i = 0; i < p; i++)
      _lpc[i] = ROUND16(lpc[i], 16);
#endif
}

void fir(const celt_word16 *x,
         const celt_word16 *num,
         celt_word16 *y,
         int N,
         int ord,
         celt_word16 *mem)
{
   int i, j;

   for (i = 0; i < N; i++)
   {
      celt_word32 sum = SHL32(EXTEND32(x[i]), SIG_SHIFT);
      for (j = 0; j < ord; j++)
      {
         sum += MULT16_16(num[j], mem[j]);
      }
      for (j = ord - 1; j >= 1; j--)
      {
         mem[j] = mem[j - 1];
      }
      mem[0] = x[i];
      y[i] = ROUND16(sum, SIG_SHIFT);
   }
}

void iir(const celt_word32 *x,
         const celt_word16 *den,
         celt_word32 *y,
         int N,
         int ord,
         celt_word16 *mem)
{
   int i, j;
   for (i = 0; i < N; i++)
   {
      celt_word32 sum = x[i];
      for (j = 0; j < ord; j++)
      {
         sum -= MULT16_16(den[j], mem[j]);
      }
      for (j = ord - 1; j >= 1; j--)
      {
         mem[j] = mem[j - 1];
      }
      mem[0] = ROUND16(sum, SIG_SHIFT);
      y[i] = sum;
   }
}

void _celt_autocorr(
    const celt_word16 *x, /*  in: [0...n-1] samples x   */
    celt_word32 *ac,      /* out: [0...lag-1] ac values */
    const celt_word16 *window,
    int overlap,
    int lag,
    int n)
{
   celt_word32 d;
   int i;
   VARDECL(celt_word16, xx);
   SAVE_STACK;
   ALLOC(xx, n, celt_word16);
   for (i = 0; i < n; i++)
      xx[i] = x[i];
   for (i = 0; i < overlap; i++)
   {
      xx[i] = MULT16_16_Q15(x[i], window[i]);
      xx[n - i - 1] = MULT16_16_Q15(x[n - i - 1], window[i]);
   }
#ifdef FIXED_POINT
   {
      celt_word32 ac0 = 0;
      int shift;
      for (i = 0; i < n; i++)
         ac0 += SHR32(MULT16_16(xx[i], xx[i]), 8);
      ac0 += 1 + n;

      shift = celt_ilog2(ac0) - 30 + 9;
      shift = (shift + 1) / 2;
      for (i = 0; i < n; i++)
         xx[i] = VSHR32(xx[i], shift);
   }
#endif
   while (lag >= 0)
   {
      for (i = lag, d = 0; i < n; i++)
         d += xx[i] * xx[i - lag];
      ac[lag] = d;
      /*printf ("%f ", ac[lag]);*/
      lag--;
   }
   /*printf ("\n");*/
   ac[0] += 10;

   RESTORE_STACK;
}
