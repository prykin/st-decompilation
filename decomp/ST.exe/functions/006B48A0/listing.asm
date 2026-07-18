FUN_006b48a0:
006B48A0  55                        PUSH EBP
006B48A1  8B EC                     MOV EBP,ESP
006B48A3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B48A6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B48A9  50                        PUSH EAX
006B48AA  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006B48AD  99                        CDQ
006B48AE  33 C2                     XOR EAX,EDX
006B48B0  2B C2                     SUB EAX,EDX
006B48B2  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006B48B5  50                        PUSH EAX
006B48B6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B48B9  52                        PUSH EDX
006B48BA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B48BD  6A 00                     PUSH 0x0
006B48BF  6A 00                     PUSH 0x0
006B48C1  50                        PUSH EAX
006B48C2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B48C5  51                        PUSH ECX
006B48C6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B48C9  51                        PUSH ECX
006B48CA  52                        PUSH EDX
006B48CB  50                        PUSH EAX
006B48CC  E8 AF FD FF FF            CALL 0x006b4680
006B48D1  5D                        POP EBP
006B48D2  C2 18 00                  RET 0x18
