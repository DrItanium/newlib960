#ifndef ASM_H
#define ASM_H

#ifdef __STDC__
# define _C_LABEL(x)    _ ## x
#else
# define _C_LABEL(x)    _/**/x
#endif
#define _ASM_LABEL(x)   x

#define _ENTRY(name)	\
	.text; .align 4; .globl name; name:
#ifndef __ELF__
#define ENTRY(name)	\
	_ENTRY(_C_LABEL(name))
#else
#define ENTRY(name) _ENTRY(name)
#endif

#endif
