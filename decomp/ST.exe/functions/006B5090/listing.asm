FUN_006b5090:
006B5090  55                        PUSH EBP
006B5091  8B EC                     MOV EBP,ESP
006B5093  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5096  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B5099  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006B509D  83 C0 1F                  ADD EAX,0x1f
006B50A0  C1 E8 03                  SHR EAX,0x3
006B50A3  25 FC FF FF 1F            AND EAX,0x1ffffffc
006B50A8  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006B50AC  8D 44 88 28               LEA EAX,[EAX + ECX*0x4 + 0x28]
006B50B0  5D                        POP EBP
006B50B1  C2 10 00                  RET 0x10
