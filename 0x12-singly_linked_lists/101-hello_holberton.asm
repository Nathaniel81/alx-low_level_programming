extern printf

section .text


section .text
global main


main:

push rbp
mov rdi, format
mov rsi, msg
mov rax, 0
call printf

pop rbp
max rax, 0
ret

section .rodata
msg: db "Hello, Holberton", 0
format: db "%s", 10, 0
