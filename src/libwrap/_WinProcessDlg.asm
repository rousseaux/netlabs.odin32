        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   WinProcessDlg:PROC
        PUBLIC  _WinProcessDlg
_WinProcessDlg PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    push   dword ptr [esp+8]
    call   WinProcessDlg
    add    esp, 4
    pop    fs
    ret
_WinProcessDlg ENDP

CODE32          ENDS

                END
