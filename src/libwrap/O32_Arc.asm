        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   _O32_Arc:PROC
        PUBLIC  O32_Arc
O32_Arc PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    push   dword ptr [esp+40]
    call   _O32_Arc
    add    esp, 36
    pop    fs
    ret
O32_Arc ENDP

CODE32          ENDS

                END
