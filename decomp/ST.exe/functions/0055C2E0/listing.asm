FUN_0055c2e0:
0055C2E0  55                        PUSH EBP
0055C2E1  8B EC                     MOV EBP,ESP
0055C2E3  8A 41 09                  MOV AL,byte ptr [ECX + 0x9]
0055C2E6  84 C0                     TEST AL,AL
0055C2E8  75 17                     JNZ 0x0055c301
0055C2EA  8B 0D 4C 17 81 00         MOV ECX,dword ptr [0x0081174c]
0055C2F0  85 C9                     TEST ECX,ECX
0055C2F2  74 0D                     JZ 0x0055c301
0055C2F4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0055C2F7  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0055C2FA  50                        PUSH EAX
0055C2FB  52                        PUSH EDX
0055C2FC  E8 28 92 EA FF            CALL 0x00405529
LAB_0055c301:
0055C301  5D                        POP EBP
0055C302  C2 10 00                  RET 0x10
