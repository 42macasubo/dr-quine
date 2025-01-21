.intel_syntax noprefix

.section .data

.section .text
.globl _start

_start:
	# this is a comment inside main
	mov eax,1
	mov ebx,1
	int 0x80

#.section .data
#msg db 'Hello, world!', 0xa
#len equ $ - msg
