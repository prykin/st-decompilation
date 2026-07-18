FUN_0055d6b0:
0055D6B0  55                        PUSH EBP
0055D6B1  8B EC                     MOV EBP,ESP
0055D6B3  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D6B6  84 C0                     TEST AL,AL
0055D6B8  75 13                     JNZ 0x0055d6cd
0055D6BA  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D6C0  85 C9                     TEST ECX,ECX
0055D6C2  74 09                     JZ 0x0055d6cd
0055D6C4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D6C7  50                        PUSH EAX
0055D6C8  E8 C5 74 EA FF            CALL 0x00404b92
LAB_0055d6cd:
0055D6CD  5D                        POP EBP
0055D6CE  C2 04 00                  RET 0x4
