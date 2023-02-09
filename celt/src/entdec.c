/* Copyright (c) 2001-2011 Timothy B. Terriberry
   Copyright (c) 2008-2009 Xiph.Org Foundation */
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

#include <stddef.h>
#include "os_support.h"
#include "arch.h"
#include "entdec.h"
#include "mfrngcod.h"

/*A range decoder.
  This is an entropy decoder based upon \cite{Mar79}, which is itself a
   rediscovery of the FIFO arithmetic code introduced by \cite{Pas76}.
  It is very similar to arithmetic encoding, except that encoding is done with
   digits in any base, instead of with bits, and so it is faster when using
   larger bases (i.e.: a byte).
  The author claims an average waste of $\frac{1}{2}\log_b(2b)$ bits, where $b$
   is the base, longer than the theoretical optimum, but to my knowledge there
   is no published justification for this claim.
  This only seems true when using near-infinite precision arithmetic so that
   the process is carried out with no rounding errors.

  IBM (the author's employer) never sought to patent the idea, and to my
   knowledge the algorithm is unencumbered by any patents, though its
   performance is very competitive with proprietary arithmetic coding.
  The two are based on very similar ideas, however.
  An excellent description of implementation details is available at
   http://www.arturocampos.com/ac_range.html
  A recent work \cite{MNW98} which proposes several changes to arithmetic
   encoding for efficiency actually re-discovers many of the principles
   behind range encoding, and presents a good theoretical analysis of them.

  End of stream is handled by writing out the smallest number of bits that
   ensures that the stream will be correctly decoded regardless of the value of
   any subsequent bits.
  ec_tell() can be used to determine how many bits were needed to decode
   all the symbols thus far; other data can be packed in the remaining bits of
   the input buffer.
  @PHDTHESIS{Pas76,
    author="Richard Clark Pasco",
    title="Source coding algorithms for fast data compression",
    school="Dept. of Electrical Engineering, Stanford University",
    address="Stanford, CA",
    month=May,
    year=1976
  }
  @INPROCEEDINGS{Mar79,
   author="Martin, G.N.N.",
   title="Range encoding: an algorithm for removing redundancy from a digitised
    message",
   booktitle="Video & Data Recording Conference",
   year=1979,
   address="Southampton",
   month=Jul
  }
  @ARTICLE{MNW98,
   author="Alistair Moffat and Radford Neal and Ian H. Witten",
   title="Arithmetic Coding Revisited",
   journal="{ACM} Transactions on Information Systems",
   year=1998,
   volume=16,
   number=3,
   pages="256--294",
   month=Jul,
   URL="http://www.stanford.edu/class/ee398/handouts/papers/Moffat98ArithmCoding.pdf"
  }*/

static int ec_read_byte(ec_dec *_this)
{
  return _this->offs < _this->storage ? _this->buf[_this->offs++] : 0;
}

static int ec_read_byte_from_end(ec_dec *_this)
{
  return _this->end_offs < _this->storage ? _this->buf[_this->storage - ++(_this->end_offs)] : 0;
}

/*Normalizes the contents of val and rng so that rng lies entirely in the
   high-order symbol.*/
static void ec_dec_normalize(ec_dec *_this)
{
  /*If the range is too small, rescale it and input some bits.*/
  while (_this->rng <= EC_CODE_BOT)
  {
    int sym;
    _this->nbits_total += EC_SYM_BITS;
    _this->rng <<= EC_SYM_BITS;
    /*Use up the remaining bits from our last symbol.*/
    sym = _this->rem;
    /*Read the next value from the input.*/
    _this->rem = ec_read_byte(_this);
    /*Take the rest of the bits we need from this new symbol.*/
    sym = (sym << EC_SYM_BITS | _this->rem) >> EC_SYM_BITS - EC_CODE_EXTRA;
    /*And subtract them from val, capped to be less than EC_CODE_TOP.*/
    _this->val = (_this->val << EC_SYM_BITS) + (EC_SYM_MAX & ~sym) & EC_CODE_TOP - 1;
  }
}

void ec_dec_init(ec_dec *_this, unsigned char *_buf, celt_uint32 _storage)
{
  _this->buf = _buf;
  _this->storage = _storage;
  _this->end_offs = 0;
  _this->end_window = 0;
  _this->nend_bits = 0;
  _this->offs = 0;
  _this->rng = 1U << EC_CODE_EXTRA;
  _this->rem = ec_read_byte(_this);
  _this->val = _this->rng - 1 - (_this->rem >> EC_SYM_BITS - EC_CODE_EXTRA);
  _this->error = 0;
  /*Normalize the interval.*/
  ec_dec_normalize(_this);
  /*This is the offset from which ec_tell() will subtract partial bits.
    This must be after the initial ec_dec_normalize(), or you will have to
     compensate for the bits that are read there.*/
  _this->nbits_total = EC_CODE_BITS + 1;
}

unsigned ec_decode(ec_dec *_this, unsigned _ft)
{
  unsigned s;
  _this->ext = _this->rng / _ft;
  s = (unsigned)(_this->val / _this->ext);
  return _ft - EC_MINI(s + 1, _ft);
}

unsigned ec_decode_bin(ec_dec *_this, unsigned _bits)
{
  unsigned s;
  _this->ext = _this->rng >> _bits;
  s = (unsigned)(_this->val / _this->ext);
  return (1 << _bits) - EC_MINI(s + 1, 1 << _bits);
}

void ec_dec_update(ec_dec *_this, unsigned _fl, unsigned _fh, unsigned _ft)
{
  celt_uint32 s;
  s = IMUL32(_this->ext, _ft - _fh);
  _this->val -= s;
  _this->rng = _fl > 0 ? IMUL32(_this->ext, _fh - _fl) : _this->rng - s;
  ec_dec_normalize(_this);
}

/*The probability of having a "one" is 1/(1<<_logp).*/
int ec_dec_bit_logp(ec_dec *_this, unsigned _logp)
{
  celt_uint32 r;
  celt_uint32 d;
  celt_uint32 s;
  int ret;
  r = _this->rng;
  d = _this->val;
  s = r >> _logp;
  ret = d < s;
  if (!ret)
    _this->val = d - s;
  _this->rng = ret ? s : r - s;
  ec_dec_normalize(_this);
  return ret;
}

int ec_dec_icdf(ec_dec *_this, const unsigned char *_icdf, unsigned _ftb)
{
  celt_uint32 r;
  celt_uint32 d;
  celt_uint32 s;
  celt_uint32 t;
  int ret;
  s = _this->rng;
  d = _this->val;
  r = s >> _ftb;
  ret = -1;
  do
  {
    t = s;
    s = IMUL32(r, _icdf[++ret]);
  } while (d < s);
  _this->val = d - s;
  _this->rng = t - s;
  ec_dec_normalize(_this);
  return ret;
}

celt_uint32 ec_dec_uint(ec_dec *_this, celt_uint32 _ft)
{
  unsigned ft;
  unsigned s;
  int ftb;
  /*In order to optimize EC_ILOG(), it is undefined for the value 0.*/
  celt_assert(_ft > 1);
  _ft--;
  ftb = EC_ILOG(_ft);
  if (ftb > EC_UINT_BITS)
  {
    celt_uint32 t;
    ftb -= EC_UINT_BITS;
    ft = (unsigned)(_ft >> ftb) + 1;
    s = ec_decode(_this, ft);
    ec_dec_update(_this, s, s + 1, ft);
    t = (celt_uint32)s << ftb | ec_dec_bits(_this, ftb);
    if (t <= _ft)
      return t;
    _this->error = 1;
    return _ft;
  }
  else
  {
    _ft++;
    s = ec_decode(_this, (unsigned)_ft);
    ec_dec_update(_this, s, s + 1, (unsigned)_ft);
    return s;
  }
}

celt_uint32 ec_dec_bits(ec_dec *_this, unsigned _bits)
{
  ec_window window;
  int available;
  celt_uint32 ret;
  window = _this->end_window;
  available = _this->nend_bits;
  if (available < _bits)
  {
    do
    {
      window |= (ec_window)ec_read_byte_from_end(_this) << available;
      available += EC_SYM_BITS;
    } while (available <= EC_WINDOW_SIZE - EC_SYM_BITS);
  }
  ret = (celt_uint32)window & ((celt_uint32)1 << _bits) - 1;
  window >>= _bits;
  available -= _bits;
  _this->end_window = window;
  _this->nend_bits = available;
  _this->nbits_total += _bits;
  return ret;
}
