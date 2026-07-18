FUN_0055d440:
0055D440  55                        PUSH EBP
0055D441  8B EC                     MOV EBP,ESP
0055D443  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
0055D446  84 C0                     TEST AL,AL
0055D448  74 1E                     JZ 0x0055d468
0055D44A  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D44D  84 C0                     TEST AL,AL
0055D44F  75 17                     JNZ 0x0055d468
0055D451  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D457  85 C9                     TEST ECX,ECX
0055D459  74 0D                     JZ 0x0055d468
0055D45B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055D45E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055D461  50                        PUSH EAX
0055D462  52                        PUSH EDX
0055D463  E8 02 81 EA FF            CALL 0x0040556a
LAB_0055d468:
0055D468  5D                        POP EBP
0055D469  C2 08 00                  RET 0x8
