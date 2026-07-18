FUN_0067f820:
0067F820  55                        PUSH EBP
0067F821  8B EC                     MOV EBP,ESP
0067F823  8B 0D 30 8A 84 00         MOV ECX,dword ptr [0x00848a30]
0067F829  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067F82C  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0067F82F  73 11                     JNC 0x0067f842
0067F831  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067F834  0F AF C2                  IMUL EAX,EDX
0067F837  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0067F83A  85 C0                     TEST EAX,EAX
0067F83C  74 04                     JZ 0x0067f842
0067F83E  D9 00                     FLD float ptr [EAX]
0067F840  5D                        POP EBP
0067F841  C3                        RET
LAB_0067f842:
0067F842  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0067F848  5D                        POP EBP
0067F849  C3                        RET
