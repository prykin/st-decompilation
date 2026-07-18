FUN_0067ee40:
0067EE40  55                        PUSH EBP
0067EE41  8B EC                     MOV EBP,ESP
0067EE43  8B 0D 18 8A 84 00         MOV ECX,dword ptr [0x00848a18]
0067EE49  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067EE4C  3B 41 08                  CMP EAX,dword ptr [ECX + 0x8]
0067EE4F  7D 08                     JGE 0x0067ee59
0067EE51  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
0067EE54  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
0067EE57  5D                        POP EBP
0067EE58  C3                        RET
LAB_0067ee59:
0067EE59  33 C0                     XOR EAX,EAX
0067EE5B  5D                        POP EBP
0067EE5C  C3                        RET
