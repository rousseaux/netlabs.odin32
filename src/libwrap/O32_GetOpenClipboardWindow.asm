        .386p
CODE32          SEGMENT DWORD PUBLIC USE32 'CODE'

        EXTRN   _O32_GetOpenClipboardWindow:PROC
        PUBLIC  O32_GetOpenClipboardWindow
O32_GetOpenClipboardWindow PROC NEAR
    push   fs
    mov    eax, 0150bh
    mov    fs, eax
    call   _O32_GetOpenClipboardWindow
    pop    fs
    ret
O32_GetOpenClipboardWindow ENDP

CODE32          ENDS

                END
