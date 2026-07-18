FUN_007482d8:
007482D8  55                        PUSH EBP
007482D9  8B EC                     MOV EBP,ESP
007482DB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007482DE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007482E1  DD 45 1C                  FLD double ptr [EBP + 0x1c]
007482E4  89 48 74                  MOV dword ptr [EAX + 0x74],ECX
007482E7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007482EA  89 48 78                  MOV dword ptr [EAX + 0x78],ECX
007482ED  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007482F0  89 48 7C                  MOV dword ptr [EAX + 0x7c],ECX
007482F3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007482F6  89 88 80 00 00 00         MOV dword ptr [EAX + 0x80],ECX
007482FC  DD 98 84 00 00 00         FSTP double ptr [EAX + 0x84]
00748302  33 C0                     XOR EAX,EAX
00748304  5D                        POP EBP
00748305  C2 1C 00                  RET 0x1c
