FUN_0055d480:
0055D480  55                        PUSH EBP
0055D481  8B EC                     MOV EBP,ESP
0055D483  8A 41 08                  MOV AL,byte ptr [ECX + 0x8]
0055D486  84 C0                     TEST AL,AL
0055D488  74 1A                     JZ 0x0055d4a4
0055D48A  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055D48D  84 C0                     TEST AL,AL
0055D48F  75 13                     JNZ 0x0055d4a4
0055D491  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055D497  85 C9                     TEST ECX,ECX
0055D499  74 09                     JZ 0x0055d4a4
0055D49B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0055D49E  50                        PUSH EAX
0055D49F  E8 F1 69 EA FF            CALL 0x00403e95
LAB_0055d4a4:
0055D4A4  5D                        POP EBP
0055D4A5  C2 04 00                  RET 0x4
