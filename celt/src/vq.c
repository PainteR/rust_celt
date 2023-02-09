/* Copyright (c) 2007-2008 CSIRO
   Copyright (c) 2007-2009 Xiph.Org Foundation
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

#include "mathops.h"
#include "cwrs.h"
#include "vq.h"
#include "arch.h"
#include "os_support.h"
#include "bands.h"
#include "rate.h"

#ifndef M_PI
#define M_PI 3.141592653
#endif

static void exp_rotation1(celt_norm *X, int len, int stride, celt_word16 c, celt_word16 s)
{
   int i;
   celt_norm *Xptr;
   Xptr = X;
   for (i = 0; i < len - stride; i++)
   {
      celt_norm x1, x2;
      x1 = Xptr[0];
      x2 = Xptr[stride];
      Xptr[stride] = EXTRACT16(SHR32(MULT16_16(c, x2) + MULT16_16(s, x1), 15));
      *Xptr++ = EXTRACT16(SHR32(MULT16_16(c, x1) - MULT16_16(s, x2), 15));
   }
   Xptr = &X[len - 2 * stride - 1];
   for (i = len - 2 * stride - 1; i >= 0; i--)
   {
      celt_norm x1, x2;
      x1 = Xptr[0];
      x2 = Xptr[stride];
      Xptr[stride] = EXTRACT16(SHR32(MULT16_16(c, x2) + MULT16_16(s, x1), 15));
      *Xptr-- = EXTRACT16(SHR32(MULT16_16(c, x1) - MULT16_16(s, x2), 15));
   }
}

static void exp_rotation(celt_norm *X, int len, int dir, int stride, int K, int spread)
{
   static const int SPREAD_FACTOR[3] = {15, 10, 5};
   int i;
   celt_word16 c, s;
   celt_word16 gain, theta;
   int stride2 = 0;
   int factor;
   /*int i;
   if (len>=30)
   {
      for (i=0;i<len;i++)
         X[i] = 0;
      X[14] = 1;
      K=5;
   }*/
   if (2 * K >= len || spread == SPREAD_NONE)
      return;
   factor = SPREAD_FACTOR[spread - 1];

   gain = celt_div((celt_word32)MULT16_16(Q15_ONE, len), (celt_word32)(len + factor * K));
   /* FIXME: Make that HALF16 instead of HALF32 */
   theta = HALF32(MULT16_16_Q15(gain, gain));

   c = celt_cos_norm(EXTEND32(theta));
   s = celt_cos_norm(EXTEND32(SUB16(Q15ONE, theta))); /*  sin(theta) */

   if (len >= 8 * stride)
   {
      stride2 = 1;
      /* This is just a simple way of computing sqrt(len/stride) with rounding.
         It's basically incrementing long as (stride2+0.5)^2 < len/stride.
         I _think_ it is bit-exact */
      while ((stride2 * stride2 + stride2) * stride + (stride >> 2) < len)
         stride2++;
   }
   /*TODO: We should be passing around log2(B), not B, for both this and for
      extract_collapse_mask().*/
   len /= stride;
   for (i = 0; i < stride; i++)
   {
      if (dir < 0)
      {
         if (stride2)
            exp_rotation1(X + i * len, len, stride2, s, c);
         exp_rotation1(X + i * len, len, 1, c, s);
      }
      else
      {
         exp_rotation1(X + i * len, len, 1, c, -s);
         if (stride2)
            exp_rotation1(X + i * len, len, stride2, s, -c);
      }
   }
   /*if (len>=30)
   {
      for (i=0;i<len;i++)
         printf ("%f ", X[i]);
      printf ("\n");
      exit(0);
   }*/
}

/** Takes the pitch vector and the decoded residual vector, computes the gain
    that will give ||p+g*y||=1 and mixes the residual with the pitch. */
static void normalise_residual(int *restrict iy, celt_norm *restrict X,
                               int N, celt_word32 Ryy, celt_word16 gain)
{
   int i;
#ifdef FIXED_POINT
   int k;
#endif
   celt_word32 t;
   celt_word16 g;

#ifdef FIXED_POINT
   k = celt_ilog2(Ryy) >> 1;
#endif
   t = VSHR32(Ryy, (k - 7) << 1);
   g = MULT16_16_P15(celt_rsqrt_norm(t), gain);

   i = 0;
   do
      X[i] = EXTRACT16(PSHR32(MULT16_16(g, iy[i]), k + 1));
   while (++i < N);
}

static unsigned extract_collapse_mask(int *iy, int N, int B)
{
   unsigned collapse_mask;
   int N0;
   int i;
   if (B <= 1)
      return 1;
   /*TODO: We should be passing around log2(B), not B, for both this and for
      exp_rotation().*/
   N0 = N / B;
   collapse_mask = 0;
   i = 0;
   do
   {
      int j;
      j = 0;
      do
      {
         collapse_mask |= (iy[i * N0 + j] != 0) << i;
      } while (++j < N0);
   } while (++i < B);
   return collapse_mask;
}

unsigned alg_quant(celt_norm *X, int N, int K, int spread, int B,
                   int resynth, ec_enc *enc, celt_word16 gain)
{
   VARDECL(celt_norm, y);
   VARDECL(int, iy);
   VARDECL(celt_word16, signx);
   int i, j;
   celt_word16 s;
   int pulsesLeft;
   celt_word32 sum;
   celt_word32 xy;
   celt_word16 yy;
   unsigned collapse_mask;
   SAVE_STACK;

   celt_assert2(K != 0, "alg_quant() needs at least one pulse");

   ALLOC(y, N, celt_norm);
   ALLOC(iy, N, int);
   ALLOC(signx, N, celt_word16);

   exp_rotation(X, N, 1, B, K, spread);

   /* Get rid of the sign */
   sum = 0;
   j = 0;
   do
   {
      if (X[j] > 0)
         signx[j] = 1;
      else
      {
         signx[j] = -1;
         X[j] = -X[j];
      }
      iy[j] = 0;
      y[j] = 0;
   } while (++j < N);

   xy = yy = 0;

   pulsesLeft = K;

   /* Do a pre-search by projecting on the pyramid */
   if (K > (N >> 1))
   {
      celt_word16 rcp;
      j = 0;
      do
      {
         sum += X[j];
      } while (++j < N);

      /* If X is too small, just replace it with a pulse at 0 */
#ifdef FIXED_POINT
      if (sum <= K)
#else
      if (sum <= EPSILON)
#endif
      {
         X[0] = QCONST16(1.f, 14);
         j = 1;
         do
            X[j] = 0;
         while (++j < N);
         sum = QCONST16(1.f, 14);
      }
      /* Do we have sufficient accuracy here? */
      rcp = EXTRACT16(MULT16_32_Q16(K - 1, celt_rcp(sum)));
      j = 0;
      do
      {
#ifdef FIXED_POINT
         /* It's really important to round *towards zero* here */
         iy[j] = MULT16_16_Q15(X[j], rcp);
#else
         iy[j] = (int)floor(rcp * X[j]);
#endif
         y[j] = iy[j];
         yy = MAC16_16(yy, y[j], y[j]);
         xy = MAC16_16(xy, X[j], y[j]);
         y[j] *= 2;
         pulsesLeft -= iy[j];
      } while (++j < N);
   }
   celt_assert2(pulsesLeft >= 1, "Allocated too many pulses in the quick pass");

   /* This should never happen, but just in case it does (e.g. on silence)
      we fill the first bin with pulses. */
#ifdef FIXED_POINT_DEBUG
   celt_assert2(pulsesLeft <= N + 3, "Not enough pulses in the quick pass");
#endif
   if (pulsesLeft > N + 3)
   {
      celt_word16 tmp = pulsesLeft;
      yy = MAC16_16(yy, tmp, tmp);
      yy = MAC16_16(yy, tmp, y[0]);
      iy[0] += pulsesLeft;
      pulsesLeft = 0;
   }

   s = 1;
   for (i = 0; i < pulsesLeft; i++)
   {
      int best_id;
      celt_word32 best_num = -VERY_LARGE16;
      celt_word16 best_den = 0;
#ifdef FIXED_POINT
      int rshift;
#endif
#ifdef FIXED_POINT
      rshift = 1 + celt_ilog2(K - pulsesLeft + i + 1);
#endif
      best_id = 0;
      /* The squared magnitude term gets added anyway, so we might as well 
         add it outside the loop */
      yy = ADD32(yy, 1);
      j = 0;
      do
      {
         celt_word16 Rxy, Ryy;
         /* Temporary sums of the new pulse(s) */
         Rxy = EXTRACT16(SHR32(ADD32(xy, EXTEND32(X[j])), rshift));
         /* We're multiplying y[j] by two so we don't have to do it here */
         Ryy = ADD16(yy, y[j]);

         /* Approximate score: we maximise Rxy/sqrt(Ryy) (we're guaranteed that
            Rxy is positive because the sign is pre-computed) */
         Rxy = MULT16_16_Q15(Rxy, Rxy);
         /* The idea is to check for num/den >= best_num/best_den, but that way
            we can do it without any division */
         /* OPT: Make sure to use conditional moves here */
         if (MULT16_16(best_den, Rxy) > MULT16_16(Ryy, best_num))
         {
            best_den = Ryy;
            best_num = Rxy;
            best_id = j;
         }
      } while (++j < N);

      /* Updating the sums of the new pulse(s) */
      xy = ADD32(xy, EXTEND32(X[best_id]));
      /* We're multiplying y[j] by two so we don't have to do it here */
      yy = ADD16(yy, y[best_id]);

      /* Only now that we've made the final choice, update y/iy */
      /* Multiplying y[j] by 2 so we don't have to do it everywhere else */
      y[best_id] += 2 * s;
      iy[best_id]++;
   }

   /* Put the original sign back */
   j = 0;
   do
   {
      X[j] = MULT16_16(signx[j], X[j]);
      if (signx[j] < 0)
         iy[j] = -iy[j];
   } while (++j < N);
   encode_pulses(iy, N, K, enc);

   if (resynth)
   {
      normalise_residual(iy, X, N, yy, gain);
      exp_rotation(X, N, -1, B, K, spread);
   }
   collapse_mask = extract_collapse_mask(iy, N, B);
   RESTORE_STACK;
   return collapse_mask;
}

/** Decode pulse vector and combine the result with the pitch vector to produce
    the final normalised signal in the current band. */
unsigned alg_unquant(celt_norm *X, int N, int K, int spread, int B,
                     ec_dec *dec, celt_word16 gain)
{
   int i;
   celt_word32 Ryy;
   unsigned collapse_mask;
   VARDECL(int, iy);
   SAVE_STACK;

   celt_assert2(K != 0, "alg_unquant() needs at least one pulse");
   ALLOC(iy, N, int);
   decode_pulses(iy, N, K, dec);
   Ryy = 0;
   i = 0;
   do
   {
      Ryy = MAC16_16(Ryy, iy[i], iy[i]);
   } while (++i < N);
   normalise_residual(iy, X, N, Ryy, gain);
   exp_rotation(X, N, -1, B, K, spread);
   collapse_mask = extract_collapse_mask(iy, N, B);
   RESTORE_STACK;
   return collapse_mask;
}

void renormalise_vector(celt_norm *X, int N, celt_word16 gain)
{
   int i;
#ifdef FIXED_POINT
   int k;
#endif
   celt_word32 E = EPSILON;
   celt_word16 g;
   celt_word32 t;
   celt_norm *xptr = X;
   for (i = 0; i < N; i++)
   {
      E = MAC16_16(E, *xptr, *xptr);
      xptr++;
   }
#ifdef FIXED_POINT
   k = celt_ilog2(E) >> 1;
#endif
   t = VSHR32(E, (k - 7) << 1);
   g = MULT16_16_P15(celt_rsqrt_norm(t), gain);

   xptr = X;
   for (i = 0; i < N; i++)
   {
      *xptr = EXTRACT16(PSHR32(MULT16_16(g, *xptr), k + 1));
      xptr++;
   }
   /*return celt_sqrt(E);*/
}

int stereo_itheta(celt_norm *X, celt_norm *Y, int stereo, int N)
{
   int i;
   int itheta;
   celt_word16 mid, side;
   celt_word32 Emid, Eside;

   Emid = Eside = EPSILON;
   if (stereo)
   {
      for (i = 0; i < N; i++)
      {
         celt_norm m, s;
         m = ADD16(SHR16(X[i], 1), SHR16(Y[i], 1));
         s = SUB16(SHR16(X[i], 1), SHR16(Y[i], 1));
         Emid = MAC16_16(Emid, m, m);
         Eside = MAC16_16(Eside, s, s);
      }
   }
   else
   {
      for (i = 0; i < N; i++)
      {
         celt_norm m, s;
         m = X[i];
         s = Y[i];
         Emid = MAC16_16(Emid, m, m);
         Eside = MAC16_16(Eside, s, s);
      }
   }
   mid = celt_sqrt(Emid);
   side = celt_sqrt(Eside);
#ifdef FIXED_POINT
   /* 0.63662 = 2/pi */
   itheta = MULT16_16_Q15(QCONST16(0.63662f, 15), celt_atan2p(side, mid));
#else
   itheta = (int)floor(.5f + 16384 * 0.63662f * atan2(side, mid));
#endif

   return itheta;
}
