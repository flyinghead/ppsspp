// Copyright (C) 2003 Dolphin Project.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, version 2.0 or later versions.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License 2.0 for more details.

// A copy of the GPL 2.0 should have been included with the program.
// If not, see http://www.gnu.org/licenses/

// Official SVN repository and contact information can be found at
// http://code.google.com/p/dolphin-emu/


// This header contains type definitions that are shared between the Dolphin core and
// other parts of the code. Any definitions that are only used by the core should be
// placed in "Common.h" instead.

#pragma once

#ifdef __arm__
#if !defined(ARM)
#define ARM
#endif
#endif

#ifdef _WIN32

typedef unsigned __int8 u8;
typedef unsigned __int16 u16;
typedef unsigned __int32 u32;
typedef unsigned __int64 u64;

typedef signed __int8 s8;
typedef signed __int16 s16;
typedef signed __int32 s32;
typedef signed __int64 s64;

#else

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;

#endif // _WIN32


#ifdef ANDROID
#undef BIG_ENDIAN
#undef __BIG_ENDIAN__
#endif

#if !BIG_ENDIAN && !__BIG_ENDIAN__
typedef u32 u32_le;
typedef u16 u16_le;
typedef u64 u64_le;

typedef s32 s32_le;
typedef s16 s16_le;
typedef s64 s64_le;

typedef float float_le;
typedef double double_le;
#else
#error FIX ME
#endif
