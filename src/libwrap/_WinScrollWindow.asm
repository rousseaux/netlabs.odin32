        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   WinScrollWindow:PROC
        PUBLIC  _WinScrollWindow
_WinScrollWindow PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    push   dword ptr [esp+36]
    call   WinScrollWindow
    add    esp, 32
    pop    fs
    ret
_WinScrollWindow ENDP

CODE32          ENDS

                END
