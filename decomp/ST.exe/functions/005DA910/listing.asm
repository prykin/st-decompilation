FUN_005da910:
005DA910  56                        PUSH ESI
005DA911  8B F1                     MOV ESI,ECX
005DA913  8B 86 8A 06 00 00         MOV EAX,dword ptr [ESI + 0x68a]
005DA919  85 C0                     TEST EAX,EAX
005DA91B  74 06                     JZ 0x005da923
005DA91D  50                        PUSH EAX
005DA91E  E8 ED B7 0D 00            CALL 0x006b6110
LAB_005da923:
005DA923  C7 86 8A 06 00 00 00 00 00 00  MOV dword ptr [ESI + 0x68a],0x0
005DA92D  5E                        POP ESI
005DA92E  C3                        RET
