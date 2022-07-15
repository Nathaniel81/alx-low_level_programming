;File: 101-hello_holberton.asm
;Description: A 64-bit assembly program that printf Hello, Holberton.

extern printf

section .text
 global main


main:
 push rbp

 mov rdi,fmt
 mov rsi,msg
 mov rax,0
 call printf

 pop rbp

 mov rax, 0
 ret

section .data
 msg: db "Hello, Holberton", 0
 format: db "%s", 10, 0

