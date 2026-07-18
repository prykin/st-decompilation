FUN_006d0cc0:
006D0CC0  55                        PUSH EBP
006D0CC1  8B EC                     MOV EBP,ESP
006D0CC3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D0CC6  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006D0CC9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
006D0CCC  51                        PUSH ECX
006D0CCD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D0CD0  52                        PUSH EDX
006D0CD1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006D0CD4  6A 00                     PUSH 0x0
006D0CD6  6A 00                     PUSH 0x0
006D0CD8  51                        PUSH ECX
006D0CD9  50                        PUSH EAX
006D0CDA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D0CDD  6A 00                     PUSH 0x0
006D0CDF  6A 00                     PUSH 0x0
006D0CE1  52                        PUSH EDX
006D0CE2  50                        PUSH EAX
006D0CE3  E8 38 FD FF FF            CALL 0x006d0a20
006D0CE8  5D                        POP EBP
006D0CE9  C2 10 00                  RET 0x10
