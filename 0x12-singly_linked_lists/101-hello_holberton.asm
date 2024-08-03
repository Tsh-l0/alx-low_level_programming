section .data
	format db 'Hello, Holberton', 10, 0 ; Define the string with a newline and null terminator

section .text
	global main 	; Make the main function globally accessible

extern printf	; Declare the printf function from the C standard library

main:
	; Set up the first argument to printf
	mov rdi, format	; Move the address of the format string into rdi
	xor rax, rax	; Clear rax (required for 64-bit calling convention)
	call printf	; Call the printf function

	; Return from main
	mov eax, 0	; Set the return value to 0
	ret		; Return from the main function
