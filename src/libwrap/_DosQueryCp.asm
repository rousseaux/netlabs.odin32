        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   DosQueryCp:PROC
        PUBLIC  _DosQueryCp
_DosQueryCp PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    call   DosQueryCp
    add    esp, 12
    pop    fs
    ret
_DosQueryCp ENDP

CODE32          ENDS

                END
