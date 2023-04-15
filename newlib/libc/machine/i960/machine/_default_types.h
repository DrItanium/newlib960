/*
Copyright (c) 2023, Joshua Scoggins
All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef _MACHINE__DEFAULT_TYPES_H
#define _MACHINE__DEFAULT_TYPES_H
/* use the values defined by my hacked gcc 11.2.0 port since 3.4.6 doesn't have these */
#ifndef __INTPTR_TYPE__
#define __INTPTR_TYPE__ long int
#endif
#ifndef __INTPTR_MAX__
#define __INTPTR_MAX__ 0x7fffffffL
#endif
#ifndef __UINTPTR_TYPE__
#define __UINTPTR_TYPE__ long unsigned int
#endif
#ifndef __UINTPTR_MAX__
#define __UINTPTR_MAX__ 0xffffffffUL
#endif
#ifndef __INT32_TYPE__
#define __INT32_TYPE__ long int
#endif
#ifndef __UINT32_TYPE__
#define __UINT32_TYPE__ long unsigned int
#endif
#ifndef __INT8_TYPE__
#define __INT8_TYPE__ signed char
#endif
#ifndef __UINT8_TYPE__
#define __UINT8_TYPE__ unsigned char
#endif
#ifndef __INT16_TYPE__
#define __INT16_TYPE__ short int
#endif
#ifndef __UINT16_TYPE__
#define __UINT16_TYPE__ short unsigned int
#endif
#ifndef __INTMAX_MAX__
#define __INTMAX_MAX__ 0x7fffffffffffffffLL
#endif
#ifndef __INTMAX_TYPE__
#define __INTMAX_TYPE__ long long int
#endif

#ifndef __UINTMAX_MAX__
#define __UINTMAX_MAX__ 0xffffffffffffffffULL
#endif 
#ifndef __UINTMAX_TYPE__
#define __UINTMAX_TYPE__ long long unsigned int
#endif
#ifndef __SIZE_MAX__
#define __SIZE_MAX__ 0xffffffffUL
#endif

#include <machine/_default_types.h>

#endif /* _MACHINE__DEFAULT_TYPES_H */
