section .data
    hello db 'Hello, Holberton', 0x0A
    len equ $-hello

section .text
    global main

main:
    mov eax, 4              ; System call number for write
    mov ebx, 1              ; File descriptor for stdout
    mov ecx, hello          ; Address of the string to print
    mov edx, len            ; Length of the string
    int 0x80                ; Call the kernel

    mov eax, 1              ; System call number for exit
    xor ebx, ebx            ; Exit status 0
    int 0x80                ; Call the kernel
