global main

section .data
    hello db "Hello, Holberton", 0
    format db "%s\n", 0

section .text
main:
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf
    xor rax, rax
    ret
