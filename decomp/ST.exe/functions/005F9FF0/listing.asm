FUN_005f9ff0:
005F9FF0  56                        PUSH ESI
005F9FF1  8B F1                     MOV ESI,ECX
005F9FF3  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005F9FF9  85 C0                     TEST EAX,EAX
005F9FFB  74 1D                     JZ 0x005fa01a
005F9FFD  8B 48 58                  MOV ECX,dword ptr [EAX + 0x58]
005FA000  83 C0 58                  ADD EAX,0x58
005FA003  85 C9                     TEST ECX,ECX
005FA005  74 13                     JZ 0x005fa01a
005FA007  50                        PUSH EAX
005FA008  E8 53 10 0B 00            CALL 0x006ab060
005FA00D  8B 86 E6 02 00 00         MOV EAX,dword ptr [ESI + 0x2e6]
005FA013  C7 40 58 00 00 00 00      MOV dword ptr [EAX + 0x58],0x0
LAB_005fa01a:
005FA01A  5E                        POP ESI
005FA01B  C3                        RET
