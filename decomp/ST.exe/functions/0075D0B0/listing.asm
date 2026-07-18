FUN_0075d0b0:
0075D0B0  55                        PUSH EBP
0075D0B1  8B EC                     MOV EBP,ESP
0075D0B3  53                        PUSH EBX
0075D0B4  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0075D0B7  56                        PUSH ESI
0075D0B8  57                        PUSH EDI
0075D0B9  8B B3 9E 01 00 00         MOV ESI,dword ptr [EBX + 0x19e]
0075D0BF  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0075D0C2  85 C0                     TEST EAX,EAX
0075D0C4  75 17                     JNZ 0x0075d0dd
0075D0C6  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
0075D0C9  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075D0CC  8B 03                     MOV EAX,dword ptr [EBX]
0075D0CE  6A 00                     PUSH 0x0
0075D0D0  51                        PUSH ECX
0075D0D1  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0075D0D4  52                        PUSH EDX
0075D0D5  51                        PUSH ECX
0075D0D6  53                        PUSH EBX
0075D0D7  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
0075D0DA  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
LAB_0075d0dd:
0075D0DD  8B 7E 10                  MOV EDI,dword ptr [ESI + 0x10]
0075D0E0  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
0075D0E3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0075D0E6  2B F8                     SUB EDI,EAX
0075D0E8  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0075D0EB  8B 0A                     MOV ECX,dword ptr [EDX]
0075D0ED  2B C1                     SUB EAX,ECX
0075D0EF  3B F8                     CMP EDI,EAX
0075D0F1  76 02                     JBE 0x0075d0f5
0075D0F3  8B F8                     MOV EDI,EAX
LAB_0075d0f5:
0075D0F5  8B 43 6C                  MOV EAX,dword ptr [EBX + 0x6c]
0075D0F8  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
0075D0FB  2B C2                     SUB EAX,EDX
0075D0FD  3B F8                     CMP EDI,EAX
0075D0FF  76 02                     JBE 0x0075d103
0075D101  8B F8                     MOV EDI,EAX
LAB_0075d103:
0075D103  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0075D106  8B 83 BA 01 00 00         MOV EAX,dword ptr [EBX + 0x1ba]
0075D10C  57                        PUSH EDI
0075D10D  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
0075D110  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0075D113  51                        PUSH ECX
0075D114  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0075D117  8D 14 91                  LEA EDX,[ECX + EDX*0x4]
0075D11A  52                        PUSH EDX
0075D11B  53                        PUSH EBX
0075D11C  FF 50 04                  CALL dword ptr [EAX + 0x4]
0075D11F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0075D122  8B 08                     MOV ECX,dword ptr [EAX]
0075D124  03 CF                     ADD ECX,EDI
0075D126  89 08                     MOV dword ptr [EAX],ECX
0075D128  8B 5E 18                  MOV EBX,dword ptr [ESI + 0x18]
0075D12B  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
0075D12E  03 DF                     ADD EBX,EDI
0075D130  8B CB                     MOV ECX,EBX
0075D132  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
0075D135  3B C8                     CMP ECX,EAX
0075D137  72 0F                     JC 0x0075d148
0075D139  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0075D13C  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
0075D143  03 C8                     ADD ECX,EAX
0075D145  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
LAB_0075d148:
0075D148  5F                        POP EDI
0075D149  5E                        POP ESI
0075D14A  5B                        POP EBX
0075D14B  5D                        POP EBP
0075D14C  C2 1C 00                  RET 0x1c
