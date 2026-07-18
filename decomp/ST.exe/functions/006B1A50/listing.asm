FUN_006b1a50:
006B1A50  55                        PUSH EBP
006B1A51  8B EC                     MOV EBP,ESP
006B1A53  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B1A56  56                        PUSH ESI
006B1A57  85 D2                     TEST EDX,EDX
006B1A59  7C 46                     JL 0x006b1aa1
006B1A5B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B1A5E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B1A61  8B C2                     MOV EAX,EDX
006B1A63  53                        PUSH EBX
006B1A64  C1 E0 04                  SHL EAX,0x4
006B1A67  03 C6                     ADD EAX,ESI
006B1A69  57                        PUSH EDI
006B1A6A  8B 78 14                  MOV EDI,dword ptr [EAX + 0x14]
006B1A6D  89 39                     MOV dword ptr [ECX],EDI
006B1A6F  8B 78 18                  MOV EDI,dword ptr [EAX + 0x18]
006B1A72  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
006B1A75  8B 78 1C                  MOV EDI,dword ptr [EAX + 0x1c]
006B1A78  2B 78 14                  SUB EDI,dword ptr [EAX + 0x14]
006B1A7B  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
006B1A7E  8B 58 18                  MOV EBX,dword ptr [EAX + 0x18]
006B1A81  8D 7A 02                  LEA EDI,[EDX + 0x2]
006B1A84  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B1A87  C1 E7 04                  SHL EDI,0x4
006B1A8A  8B 3C 37                  MOV EDI,dword ptr [EDI + ESI*0x1]
006B1A8D  2B FB                     SUB EDI,EBX
006B1A8F  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
006B1A92  5F                        POP EDI
006B1A93  85 C0                     TEST EAX,EAX
006B1A95  5B                        POP EBX
006B1A96  74 09                     JZ 0x006b1aa1
006B1A98  8B 8C 96 C4 00 00 00      MOV ECX,dword ptr [ESI + EDX*0x4 + 0xc4]
006B1A9F  89 08                     MOV dword ptr [EAX],ECX
LAB_006b1aa1:
006B1AA1  5E                        POP ESI
006B1AA2  5D                        POP EBP
006B1AA3  C2 10 00                  RET 0x10
