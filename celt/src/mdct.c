/* Copyright (c) 2007-2008 CSIRO
   Copyright (c) 2007-2008 Xiph.Org Foundation
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

/* This is a simple MDCT implementation that uses a N/4 complex FFT
   to do most of the work. It should be relatively straightforward to
   plug in pretty much and FFT here.
   
   This replaces the Vorbis FFT (and uses the exact same API), which 
   was a bit too messy and that was ending up duplicating code 
   (might as well use the same FFT everywhere).
   
   The algorithm is similar to (and inspired from) Fabrice Bellard's
   MDCT implementation in FFMPEG, but has differences in signs, ordering
   and scaling in many places. 
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

#ifndef SKIP_CONFIG_H
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif
#endif

#include "mdct.h"
#include "kiss_fft.h"
#include "_kiss_fft_guts.h"
#include <math.h>
#include "os_support.h"
#include "mathops.h"
#include "stack_alloc.h"

#ifndef M_PI
#define M_PI 3.141592653
#endif

#ifdef CUSTOM_MODES

void clt_mdct_init(mdct_lookup *l, int N, int maxshift)
{
   int i;
   int N4, N2;
   kiss_twiddle_scalar *trig;
   l->n = N;
   N2 = N >> 1;
   N4 = N >> 2;
   l->maxshift = maxshift;
   for (i = 0; i <= maxshift; i++)
   {
      if (i == 0)
         l->kfft[i] = kiss_fft_alloc(N >> 2 >> i, 0, 0);
      else
         l->kfft[i] = kiss_fft_alloc_twiddles(N >> 2 >> i, 0, 0, l->kfft[0]);
#ifndef ENABLE_TI_DSPLIB55
      if (l->kfft[i] == NULL)
         return;
#endif
   }
   l->trig = trig = (kiss_twiddle_scalar *)celt_alloc((N4 + 1) * sizeof(kiss_twiddle_scalar));
   if (l->trig == NULL)
      return;
      /* We have enough points that sine isn't necessary */
#if defined(FIXED_POINT)
   for (i = 0; i <= N4; i++)
      trig[i] = TRIG_UPSCALE * celt_cos_norm(DIV32(ADD32(SHL32(EXTEND32(i), 17), N2), N));
#else
   for (i = 0; i <= N4; i++)
      trig[i] = (kiss_twiddle_scalar)cos(2 * M_PI * i / N);
#endif
}

void clt_mdct_clear(mdct_lookup *l)
{
   int i;
   for (i = 0; i <= l->maxshift; i++)
      kiss_fft_free(l->kfft[i]);
   celt_free((kiss_twiddle_scalar *)l->trig);
}

#endif /* CUSTOM_MODES */

void clt_mdct_forward(const mdct_lookup *l, kiss_fft_scalar *in, kiss_fft_scalar *restrict out, const celt_word16 *window, int overlap, int shift)
{
   int i;
   int N, N2, N4;
   kiss_twiddle_scalar sine;
   VARDECL(kiss_fft_scalar, f);
   SAVE_STACK;
   N = l->n;
   N >>= shift;
   N2 = N >> 1;
   N4 = N >> 2;
   ALLOC(f, N2, kiss_fft_scalar);
   /* sin(x) ~= x here */
#ifdef FIXED_POINT
   sine = TRIG_UPSCALE * (QCONST16(0.7853981f, 15) + N2) / N;
#else
   sine = (kiss_twiddle_scalar)2 * M_PI * (.125f) / N;
#endif

   /* Consider the input to be composed of four blocks: [a, b, c, d] */
   /* Window, shuffle, fold */
   {
      /* Temp pointers to make it really clear to the compiler what we're doing */
      const kiss_fft_scalar *restrict xp1 = in + (overlap >> 1);
      const kiss_fft_scalar *restrict xp2 = in + N2 - 1 + (overlap >> 1);
      kiss_fft_scalar *restrict yp = out;
      const celt_word16 *restrict wp1 = window + (overlap >> 1);
      const celt_word16 *restrict wp2 = window + (overlap >> 1) - 1;
      for (i = 0; i < (overlap >> 2); i++)
      {
         /* Real part arranged as -d-cR, Imag part arranged as -b+aR*/
         *yp++ = MULT16_32_Q15(*wp2, xp1[N2]) + MULT16_32_Q15(*wp1, *xp2);
         *yp++ = MULT16_32_Q15(*wp1, *xp1) - MULT16_32_Q15(*wp2, xp2[-N2]);
         xp1 += 2;
         xp2 -= 2;
         wp1 += 2;
         wp2 -= 2;
      }
      wp1 = window;
      wp2 = window + overlap - 1;
      for (; i < N4 - (overlap >> 2); i++)
      {
         /* Real part arranged as a-bR, Imag part arranged as -c-dR */
         *yp++ = *xp2;
         *yp++ = *xp1;
         xp1 += 2;
         xp2 -= 2;
      }
      for (; i < N4; i++)
      {
         /* Real part arranged as a-bR, Imag part arranged as -c-dR */
         *yp++ = -MULT16_32_Q15(*wp1, xp1[-N2]) + MULT16_32_Q15(*wp2, *xp2);
         *yp++ = MULT16_32_Q15(*wp2, *xp1) + MULT16_32_Q15(*wp1, xp2[N2]);
         xp1 += 2;
         xp2 -= 2;
         wp1 += 2;
         wp2 -= 2;
      }
   }
   /* Pre-rotation */
   {
      kiss_fft_scalar *restrict yp = out;
      const kiss_twiddle_scalar *t = &l->trig[0];
      for (i = 0; i < N4; i++)
      {
         kiss_fft_scalar re, im, yr, yi;
         re = yp[0];
         im = yp[1];
         yr = -S_MUL(re, t[i << shift]) - S_MUL(im, t[(N4 - i) << shift]);
         yi = -S_MUL(im, t[i << shift]) + S_MUL(re, t[(N4 - i) << shift]);
         /* works because the cos is nearly one */
         *yp++ = yr + S_MUL(yi, sine);
         *yp++ = yi - S_MUL(yr, sine);
      }
   }

   /* N/4 complex FFT, down-scales by 4/N */
   kiss_fft(l->kfft[shift], (kiss_fft_cpx *)out, (kiss_fft_cpx *)f);

   /* Post-rotate */
   {
      /* Temp pointers to make it really clear to the compiler what we're doing */
      const kiss_fft_scalar *restrict fp = f;
      kiss_fft_scalar *restrict yp1 = out;
      kiss_fft_scalar *restrict yp2 = out + N2 - 1;
      const kiss_twiddle_scalar *t = &l->trig[0];
      /* Temp pointers to make it really clear to the compiler what we're doing */
      for (i = 0; i < N4; i++)
      {
         kiss_fft_scalar yr, yi;
         yr = S_MUL(fp[1], t[(N4 - i) << shift]) + S_MUL(fp[0], t[i << shift]);
         yi = S_MUL(fp[0], t[(N4 - i) << shift]) - S_MUL(fp[1], t[i << shift]);
         /* works because the cos is nearly one */
         *yp1 = yr - S_MUL(yi, sine);
         *yp2 = yi + S_MUL(yr, sine);
         ;
         fp += 2;
         yp1 += 2;
         yp2 -= 2;
      }
   }
   RESTORE_STACK;
}

void clt_mdct_backward(const mdct_lookup *l, kiss_fft_scalar *in, kiss_fft_scalar *restrict out, const celt_word16 *restrict window, int overlap, int shift)
{
   int i;
   int N, N2, N4;
   kiss_twiddle_scalar sine;
   VARDECL(kiss_fft_scalar, f);
   VARDECL(kiss_fft_scalar, f2);
   SAVE_STACK;
   N = l->n;
   N >>= shift;
   N2 = N >> 1;
   N4 = N >> 2;
   ALLOC(f, N2, kiss_fft_scalar);
   ALLOC(f2, N2, kiss_fft_scalar);
   /* sin(x) ~= x here */
#ifdef FIXED_POINT
   sine = TRIG_UPSCALE * (QCONST16(0.7853981f, 15) + N2) / N;
#else
   sine = (kiss_twiddle_scalar)2 * M_PI * (.125f) / N;
#endif

   /* Pre-rotate */
   {
      /* Temp pointers to make it really clear to the compiler what we're doing */
      const kiss_fft_scalar *restrict xp1 = in;
      const kiss_fft_scalar *restrict xp2 = in + N2 - 1;
      kiss_fft_scalar *restrict yp = f2;
      const kiss_twiddle_scalar *t = &l->trig[0];
      for (i = 0; i < N4; i++)
      {
         kiss_fft_scalar yr, yi;
         yr = -S_MUL(*xp2, t[i << shift]) + S_MUL(*xp1, t[(N4 - i) << shift]);
         yi = -S_MUL(*xp2, t[(N4 - i) << shift]) - S_MUL(*xp1, t[i << shift]);
         /* works because the cos is nearly one */
         *yp++ = yr - S_MUL(yi, sine);
         *yp++ = yi + S_MUL(yr, sine);
         xp1 += 2;
         xp2 -= 2;
      }
   }

   /* Inverse N/4 complex FFT. This one should *not* downscale even in fixed-point */
   kiss_ifft(l->kfft[shift], (kiss_fft_cpx *)f2, (kiss_fft_cpx *)f);

   /* Post-rotate */
   {
      kiss_fft_scalar *restrict fp = f;
      const kiss_twiddle_scalar *t = &l->trig[0];

      for (i = 0; i < N4; i++)
      {
         kiss_fft_scalar re, im, yr, yi;
         re = fp[0];
         im = fp[1];
         /* We'd scale up by 2 here, but instead it's done when mixing the windows */
         yr = S_MUL(re, t[i << shift]) - S_MUL(im, t[(N4 - i) << shift]);
         yi = S_MUL(im, t[i << shift]) + S_MUL(re, t[(N4 - i) << shift]);
         /* works because the cos is nearly one */
         *fp++ = yr - S_MUL(yi, sine);
         *fp++ = yi + S_MUL(yr, sine);
      }
   }
   /* De-shuffle the components for the middle of the window only */
   {
      const kiss_fft_scalar *restrict fp1 = f;
      const kiss_fft_scalar *restrict fp2 = f + N2 - 1;
      kiss_fft_scalar *restrict yp = f2;
      for (i = 0; i < N4; i++)
      {
         *yp++ = -*fp1;
         *yp++ = *fp2;
         fp1 += 2;
         fp2 -= 2;
      }
   }
   out -= (N2 - overlap) >> 1;
   /* Mirror on both sides for TDAC */
   {
      kiss_fft_scalar *restrict fp1 = f2 + N4 - 1;
      kiss_fft_scalar *restrict xp1 = out + N2 - 1;
      kiss_fft_scalar *restrict yp1 = out + N4 - overlap / 2;
      const celt_word16 *restrict wp1 = window;
      const celt_word16 *restrict wp2 = window + overlap - 1;
      for (i = 0; i < N4 - overlap / 2; i++)
      {
         *xp1 = *fp1;
         xp1--;
         fp1--;
      }
      for (; i < N4; i++)
      {
         kiss_fft_scalar x1;
         x1 = *fp1--;
         *yp1++ += -MULT16_32_Q15(*wp1, x1);
         *xp1-- += MULT16_32_Q15(*wp2, x1);
         wp1++;
         wp2--;
      }
   }
   {
      kiss_fft_scalar *restrict fp2 = f2 + N4;
      kiss_fft_scalar *restrict xp2 = out + N2;
      kiss_fft_scalar *restrict yp2 = out + N - 1 - (N4 - overlap / 2);
      const celt_word16 *restrict wp1 = window;
      const celt_word16 *restrict wp2 = window + overlap - 1;
      for (i = 0; i < N4 - overlap / 2; i++)
      {
         *xp2 = *fp2;
         xp2++;
         fp2++;
      }
      for (; i < N4; i++)
      {
         kiss_fft_scalar x2;
         x2 = *fp2++;
         *yp2-- = MULT16_32_Q15(*wp1, x2);
         *xp2++ = MULT16_32_Q15(*wp2, x2);
         wp1++;
         wp2--;
      }
   }
   RESTORE_STACK;
}
