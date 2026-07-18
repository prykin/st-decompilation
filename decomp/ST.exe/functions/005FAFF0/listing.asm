FUN_005faff0:
005FAFF0  55                        PUSH EBP
005FAFF1  8B EC                     MOV EBP,ESP
005FAFF3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005FAFF8  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
005FAFFE  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005FB001  03 D0                     ADD EDX,EAX
005FB003  C6 81 E5 02 00 00 01      MOV byte ptr [ECX + 0x2e5],0x1
005FB00A  89 91 E1 02 00 00         MOV dword ptr [ECX + 0x2e1],EDX
005FB010  5D                        POP EBP
005FB011  C2 04 00                  RET 0x4
