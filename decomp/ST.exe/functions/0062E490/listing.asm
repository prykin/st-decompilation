FUN_0062e490:
0062E490  55                        PUSH EBP
0062E491  8B EC                     MOV EBP,ESP
0062E493  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0062E496  53                        PUSH EBX
0062E497  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0062E49A  56                        PUSH ESI
0062E49B  57                        PUSH EDI
0062E49C  50                        PUSH EAX
0062E49D  8B F9                     MOV EDI,ECX
0062E49F  53                        PUSH EBX
0062E4A0  E8 09 64 DD FF            CALL 0x004048ae
0062E4A5  85 C0                     TEST EAX,EAX
0062E4A7  7C 42                     JL 0x0062e4eb
0062E4A9  8B 4C 9F 50               MOV ECX,dword ptr [EDI + EBX*0x4 + 0x50]
0062E4AD  3B 41 0C                  CMP EAX,dword ptr [ECX + 0xc]
0062E4B0  73 0D                     JNC 0x0062e4bf
0062E4B2  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
0062E4B5  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0062E4B8  0F AF F0                  IMUL ESI,EAX
0062E4BB  03 F2                     ADD ESI,EDX
0062E4BD  EB 02                     JMP 0x0062e4c1
LAB_0062e4bf:
0062E4BF  33 F6                     XOR ESI,ESI
LAB_0062e4c1:
0062E4C1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0062E4C4  85 C9                     TEST ECX,ECX
0062E4C6  74 11                     JZ 0x0062e4d9
0062E4C8  C7 46 24 01 00 00 00      MOV dword ptr [ESI + 0x24],0x1
0062E4CF  5F                        POP EDI
0062E4D0  5E                        POP ESI
0062E4D1  83 C8 FF                  OR EAX,0xffffffff
0062E4D4  5B                        POP EBX
0062E4D5  5D                        POP EBP
0062E4D6  C2 18 00                  RET 0x18
LAB_0062e4d9:
0062E4D9  6A 00                     PUSH 0x0
0062E4DB  50                        PUSH EAX
0062E4DC  53                        PUSH EBX
0062E4DD  8B CF                     MOV ECX,EDI
0062E4DF  E8 B2 71 DD FF            CALL 0x00405696
0062E4E4  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
LAB_0062e4eb:
0062E4EB  5F                        POP EDI
0062E4EC  5E                        POP ESI
0062E4ED  83 C8 FF                  OR EAX,0xffffffff
0062E4F0  5B                        POP EBX
0062E4F1  5D                        POP EBP
0062E4F2  C2 18 00                  RET 0x18
