section .rodata
	format: db 'Hello, Holberton', 10, 0

	section .text
	global main
	extern printf
	main:
		; printf(format, name)
		mov rdi, format
		; no XMM registers
		mov rax, 0
		call printf
		; return 0
		mov rax, 0
		ret
