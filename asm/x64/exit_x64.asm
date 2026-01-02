section .text
    global _start

_start:
    ; x64 syscall for exit
    mov rax, 60         ; sys_exit
    xor rdi, rdi        ; status 0
    syscall
