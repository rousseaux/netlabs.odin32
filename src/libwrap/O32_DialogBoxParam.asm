        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   _O32_DialogBoxParam:PROC
        PUBLIC  O32_DialogBoxParam
O32_DialogBoxParam PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    call   _O32_DialogBoxParam
    add    esp, 20
    pop    fs
    ret
O32_DialogBoxParam ENDP

CODE32          ENDS

                END
