LANGUAGE LANG_GERMAN, SUBLANG_DEFAULT

SYSMENU MENU LOADONCALL MOVEABLE DISCARDABLE 
{
 MENUITEM "&Wiederherstellen", 61728
 MENUITEM "&Verschieben", 61456
 MENUITEM "&Gr��e", 61440
 MENUITEM "Mi&nimieren", 61472
 MENUITEM "Ma&ximieren", 61488
 MENUITEM SEPARATOR
 MENUITEM "&Schlie�en\tAlt-F4", 61536
 MENUITEM SEPARATOR
 MENUITEM "&Wechseln zu ...\tCtrl-Esc", 61744
}

SYSMENUWARP MENU LOADONCALL MOVEABLE DISCARDABLE 
{
 MENUITEM "&Wiederherstellen\tAlt-F5", 61728
 MENUITEM "&Verschieben\tAlt-F7", 61456
 MENUITEM "&Gr��e\tAlt-F8", 61440
 MENUITEM "Mi&nimieren\tAlt-F9", 61472
 MENUITEM "Ma&ximieren\tAlt-F10", 61488
 MENUITEM SEPARATOR
 MENUITEM "&Schlie�en\tAlt-F4", 61536
 MENUITEM SEPARATOR
 MENUITEM "&Wechseln zu ...\tCtrl-Esc", 61744
}

EDITMENU MENU LOADONCALL MOVEABLE DISCARDABLE
{
	POPUP ""
	BEGIN
		MENUITEM "&R�ckg�ngig", EM_UNDO
		MENUITEM SEPARATOR
		MENUITEM "&Ausschneiden", WM_CUT
		MENUITEM "&Kopieren", WM_COPY
		MENUITEM "&Einf�gen", WM_PASTE
		MENUITEM "&L�schen", WM_CLEAR
		MENUITEM SEPARATOR
		MENUITEM "&Alles markieren", EM_SETSEL
	END
}

MSGBOX DIALOG 100, 80, 216, 168
STYLE DS_SYSMODAL | DS_MODALFRAME | WS_POPUP | WS_VISIBLE | WS_CAPTION | WS_SYSMENU
BEGIN
        ICON "", 1088, 8, 20, 16, 16, WS_CHILD | WS_VISIBLE
        LTEXT "", 100, 32, 4, 176, 48, WS_CHILD | WS_VISIBLE | WS_GROUP
        PUSHBUTTON "&Ok", 1, 16, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Abbruch", 2, 64, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Abbruch", 3, 112, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Wiederholen", 4, 160, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Ignorieren", 5, 208, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Ja", 6, 256, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
        PUSHBUTTON "&Nein", 7, 304, 56, 40, 14, WS_CHILD | WS_VISIBLE | WS_TABSTOP
END

