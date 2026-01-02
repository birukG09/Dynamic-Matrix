section .text
    global add_three

add_three:
    mov rax, rdi
    add rax, rsi
    add rax, rdx
    ret
