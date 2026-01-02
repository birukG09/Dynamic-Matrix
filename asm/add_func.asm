section .text
    global add_func

add_func:
    mov eax, [esp + 4]
    add eax, [esp + 8]
    ret
