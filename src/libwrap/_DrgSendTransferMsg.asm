        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   DrgSendTransferMsg:PROC
        PUBLIC  _DrgSendTransferMsg
_DrgSendTransferMsg PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    push   dword ptr [esp+20]
    call   DrgSendTransferMsg
    add    esp, 16
    pop    fs
    ret
_DrgSendTransferMsg ENDP

CODE32          ENDS

                END
