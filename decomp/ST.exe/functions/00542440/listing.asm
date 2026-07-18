FUN_00542440:
00542440  55                        PUSH EBP
00542441  8B EC                     MOV EBP,ESP
00542443  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00542446  56                        PUSH ESI
00542447  6A 05                     PUSH 0x5
00542449  8B F1                     MOV ESI,ECX
0054244B  50                        PUSH EAX
0054244C  E8 6F 2D 1A 00            CALL 0x006e51c0
00542451  33 C0                     XOR EAX,EAX
00542453  C7 06 B8 AD 79 00         MOV dword ptr [ESI],0x79adb8
00542459  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0054245C  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0054245F  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
00542462  8B C6                     MOV EAX,ESI
00542464  5E                        POP ESI
00542465  5D                        POP EBP
00542466  C2 04 00                  RET 0x4
