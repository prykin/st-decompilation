FUN_0055d4c0:
0055D4C0  55                        PUSH EBP
0055D4C1  8B EC                     MOV EBP,ESP
0055D4C3  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
0055D4C6  84 C0                     TEST AL,AL
0055D4C8  74 1E                     JZ 0x0055d4e8
0055D4CA  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D4CD  84 C0                     TEST AL,AL
0055D4CF  75 17                     JNZ 0x0055d4e8
0055D4D1  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D4D7  85 C9                     TEST ECX,ECX
0055D4D9  74 0D                     JZ 0x0055d4e8
0055D4DB  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055D4DE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055D4E1  50                        PUSH EAX
0055D4E2  52                        PUSH EDX
0055D4E3  E8 D6 40 EA FF            CALL 0x004015be
LAB_0055d4e8:
0055D4E8  5D                        POP EBP
0055D4E9  C2 08 00                  RET 0x8
