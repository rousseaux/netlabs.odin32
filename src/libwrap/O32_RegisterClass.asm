        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   _O32_RegisterClass:PROC
        PUBLIC  O32_RegisterClass
O32_RegisterClass PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+8]
    call   _O32_RegisterClass
    add    esp, 4
    pop    fs
    ret
O32_RegisterClass ENDP

CODE32          ENDS

                END
