        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   GpiConvert:PROC
        PUBLIC  _GpiConvert
_GpiConvert PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    push   dword ptr [esp+24]
    call   GpiConvert
    add    esp, 20
    pop    fs
    ret
_GpiConvert ENDP

CODE32          ENDS

                END
