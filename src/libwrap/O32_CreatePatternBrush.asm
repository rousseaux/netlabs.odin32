        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   _O32_CreatePatternBrush:PROC
        PUBLIC  O32_CreatePatternBrush
O32_CreatePatternBrush PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+8]
    call   _O32_CreatePatternBrush
    add    esp, 4
    pop    fs
    ret
O32_CreatePatternBrush ENDP

CODE32          ENDS

                END
