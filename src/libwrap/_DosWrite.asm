        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   DosWrite:PROC
        PUBLIC  _DosWrite
_DosWrite PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    call   DosWrite
    add    esp, 16
    pop    fs
    ret
_DosWrite ENDP

CODE32          ENDS

                END
