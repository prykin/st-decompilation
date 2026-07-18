FUN_006b50c0:
006B50C0  55                        PUSH EBP
006B50C1  8B EC                     MOV EBP,ESP
006B50C3  56                        PUSH ESI
006B50C4  57                        PUSH EDI
006B50C5  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006B50C8  81 FF 00 01 00 00         CMP EDI,0x100
006B50CE  7E 02                     JLE 0x006b50d2
006B50D0  33 FF                     XOR EDI,EDI
LAB_006b50d2:
006B50D2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B50D5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B50D8  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B50DB  50                        PUSH EAX
006B50DC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B50DF  57                        PUSH EDI
006B50E0  51                        PUSH ECX
006B50E1  52                        PUSH EDX
006B50E2  50                        PUSH EAX
006B50E3  E8 08 C0 01 00            CALL 0x006d10f0
006B50E8  85 C0                     TEST EAX,EAX
006B50EA  74 12                     JZ 0x006b50fe
006B50EC  85 FF                     TEST EDI,EDI
006B50EE  74 0E                     JZ 0x006b50fe
006B50F0  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006B50F3  85 F6                     TEST ESI,ESI
006B50F5  74 07                     JZ 0x006b50fe
006B50F7  8B CF                     MOV ECX,EDI
006B50F9  8D 78 28                  LEA EDI,[EAX + 0x28]
006B50FC  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_006b50fe:
006B50FE  5F                        POP EDI
006B50FF  5E                        POP ESI
006B5100  5D                        POP EBP
006B5101  C2 18 00                  RET 0x18
