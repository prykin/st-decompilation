FUN_0067ee70:
0067EE70  55                        PUSH EBP
0067EE71  8B EC                     MOV EBP,ESP
0067EE73  8B 0D 1C 8A 84 00         MOV ECX,dword ptr [0x00848a1c]
0067EE79  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EE7C  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
0067EE7F  7D 08                     JGE 0x0067ee89
0067EE81  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0067EE84  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0067EE87  5D                        POP EBP
0067EE88  C3                        RET
LAB_0067ee89:
0067EE89  33 C0                     XOR EAX,EAX
0067EE8B  5D                        POP EBP
0067EE8C  C3                        RET
