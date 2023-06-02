global main
extern printf

main:
    mov edi, format   ; Move the address of the format string into the edi register
    xor eax, eax      ; Clear the eax register
    call printf       ; Call the printf function, passing the address of the format string
    mov eax, 0        ; Set the return value to 0 (success)
    ret               ; Return from the main function

format: db `Hello, Holberton\n`, 0  ; Define the format string
