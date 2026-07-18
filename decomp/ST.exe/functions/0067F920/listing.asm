FUN_0067f920:
0067F920  55                        PUSH EBP
0067F921  8B EC                     MOV EBP,ESP
0067F923  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0067F926  50                        PUSH EAX
0067F927  E8 F0 3B D8 FF            CALL 0x0040351c
0067F92C  83 C4 04                  ADD ESP,0x4
0067F92F  85 C0                     TEST EAX,EAX
0067F931  74 04                     JZ 0x0067f937
0067F933  D9 00                     FLD float ptr [EAX]
0067F935  5D                        POP EBP
0067F936  C3                        RET
LAB_0067f937:
0067F937  D9 05 4C 03 79 00         FLD float ptr [0x0079034c]
0067F93D  5D                        POP EBP
0067F93E  C3                        RET
