        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   WinFocusChange:PROC
        PUBLIC  _WinFocusChange
_WinFocusChange PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    call   WinFocusChange
    add    esp, 12
    pop    fs
    ret
_WinFocusChange ENDP

CODE32          ENDS

                END