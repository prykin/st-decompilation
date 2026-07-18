FUN_0054cb40:
0054CB40  55                        PUSH EBP
0054CB41  8B EC                     MOV EBP,ESP
0054CB43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054CB46  56                        PUSH ESI
0054CB47  6A 04                     PUSH 0x4
0054CB49  8B F1                     MOV ESI,ECX
0054CB4B  50                        PUSH EAX
0054CB4C  E8 AF 95 19 00            CALL 0x006e6100
0054CB51  33 C0                     XOR EAX,EAX
0054CB53  C7 06 38 AE 79 00         MOV dword ptr [ESI],0x79ae38
0054CB59  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0054CB5C  89 86 E4 00 00 00         MOV dword ptr [ESI + 0xe4],EAX
0054CB62  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
0054CB65  89 46 2C                  MOV dword ptr [ESI + 0x2c],EAX
0054CB68  89 46 24                  MOV dword ptr [ESI + 0x24],EAX
0054CB6B  89 86 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EAX
0054CB71  C7 86 F0 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xf0],0x1
0054CB7B  8B C6                     MOV EAX,ESI
0054CB7D  5E                        POP ESI
0054CB7E  5D                        POP EBP
0054CB7F  C2 04 00                  RET 0x4
