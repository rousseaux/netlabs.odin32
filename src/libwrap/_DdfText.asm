        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   DdfText:PROC
        PUBLIC  _DdfText
_DdfText PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+12]
    push   dword ptr [esp+12]
    call   DdfText
    add    esp, 8
    pop    fs
    ret
_DdfText ENDP

CODE32          ENDS

                END