        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   WinMakePoints:PROC
        PUBLIC  _WinMakePoints
_WinMakePoints PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    push   dword ptr [esp+16]
    call   WinMakePoints
    add    esp, 12
    pop    fs
    ret
_WinMakePoints ENDP

CODE32          ENDS

                END
