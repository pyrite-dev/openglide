//**************************************************************
//*            OpenGLide - Glide to OpenGL Wrapper
//*             http://openglide.sourceforge.net
//*
//*         OpenGLide is OpenSource under LGPL license
//*              Originaly made by Fabio Barros
//*      Modified by Paul for Glidos (http://www.glidos.net)
//*               Linux version by Simon White
//**************************************************************
#ifndef __SDK2_UNIX_H__
#define __SDK2_UNIX_H__

/* Define the sizeof of types in bytes */
#define FXSIZEOF_UNSIGNED_CHAR      1
#define FXSIZEOF_UNSIGNED_SHORT     2
#define FXSIZEOF_UNSIGNED_INT       4
#define FXSIZEOF_UNSIGNED_LONG      8
#define FXSIZEOF_UNSIGNED_LONG_LONG 8
#define FXSIZEOF_INT_P              8

/*
** basic data types
*/
#if FXSIZEOF_UNSIGNED_CHAR != 1
#  error "sizeof (unsigned char) != 1"
#else
  typedef unsigned char FxU8;
  typedef   signed char FxI8;
#endif

#if FXSIZEOF_UNSIGNED_SHORT != 2
#  error "sizeof (unsigned short) != 2"
#else
  typedef unsigned short FxU16;
  typedef   signed short FxI16;
#endif

#if FXSIZEOF_UNSIGNED_INT == 4
  typedef unsigned int FxU32;
  typedef   signed int FxI32;
#elif FXSIZEOF_UNSIGNED_LONG == 4
  typedef unsigned long FxU32;
  typedef   signed long FxI32;
#else
#  error "can't find sizeof(type) of 4 bytes!"
#endif

#if FXSIZEOF_UNSIGNED_LONG == 8
  typedef unsigned long FxU64;
  typedef   signed long FxI64;
#elif FXSIZEOF_UNSIGNED_LONG_LONG == 8
  typedef unsigned long long FxU64;
  typedef   signed long long FxI64;
#else
#  error "can't find data type of 8 bytes"
#endif

#if FXSIZEOF_INT_P == 4
  typedef FxU32 FxU;
  typedef FxI32 FxI;
#else
  typedef FxU64 FxU;
  typedef FxI64 FxI;
#endif

typedef FxI32           FxBool;
typedef float           FxFloat;
typedef double          FxDouble;

#endif // __SDK2_UNIX_H__
