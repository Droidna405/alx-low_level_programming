section .data
    hello db 'Hello, Holberton', 0
    format db '%s', 0

section .text
    global main
    extern printf

main:
    sub rsp, 8                 ; Adjust the stack pointer to 16-byte align (if needed)
    mov rdi, format            ; Set the first parameter (format string)
    mov rsi, hello             ; Set the second parameter (string)
    call printf                ; Call the printf function
    add rsp, 8                 ; Adjust the stack pointer
    ret
