SubmarineTitans::Recovered::HiddenThis::AnonReceiver_006EA050::sub_006EA460:
006EA460  55                        PUSH EBP
006EA461  8B EC                     MOV EBP,ESP
006EA463  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EA466  53                        PUSH EBX
006EA467  8B 99 10 03 00 00         MOV EBX,dword ptr [ECX + 0x310]
006EA46D  56                        PUSH ESI
006EA46E  3B D3                     CMP EDX,EBX
006EA470  57                        PUSH EDI
006EA471  73 55                     JNC 0x006ea4c8
006EA473  8B B1 1C 03 00 00         MOV ESI,dword ptr [ECX + 0x31c]
006EA479  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EA47C  C1 E0 03                  SHL EAX,0x3
006EA47F  2B C2                     SUB EAX,EDX
006EA481  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA484  8D 3C 86                  LEA EDI,[ESI + EAX*0x4]
006EA487  8B 04 86                  MOV EAX,dword ptr [ESI + EAX*0x4]
006EA48A  F6 C4 80                  TEST AH,0x80
006EA48D  74 39                     JZ 0x006ea4c8
006EA48F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EA492  83 F9 FF                  CMP ECX,-0x1
006EA495  74 1B                     JZ 0x006ea4b2
006EA497  85 C9                     TEST ECX,ECX
006EA499  7C 2D                     JL 0x006ea4c8
006EA49B  3B CB                     CMP ECX,EBX
006EA49D  7D 29                     JGE 0x006ea4c8
006EA49F  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006EA4A2  C1 E0 03                  SHL EAX,0x3
006EA4A5  2B C1                     SUB EAX,ECX
006EA4A7  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EA4AA  8B 1C 86                  MOV EBX,dword ptr [ESI + EAX*0x4]
006EA4AD  F6 C7 80                  TEST BH,0x80
006EA4B0  74 16                     JZ 0x006ea4c8
LAB_006ea4b2:
006EA4B2  8B 57 04                  MOV EDX,dword ptr [EDI + 0x4]
006EA4B5  89 4F 1C                  MOV dword ptr [EDI + 0x1c],ECX
006EA4B8  83 E2 AF                  AND EDX,0xffffffaf
006EA4BB  83 CA 20                  OR EDX,0x20
006EA4BE  89 57 04                  MOV dword ptr [EDI + 0x4],EDX
006EA4C1  5F                        POP EDI
006EA4C2  5E                        POP ESI
006EA4C3  5B                        POP EBX
006EA4C4  5D                        POP EBP
006EA4C5  C2 08 00                  RET 0x8
LAB_006ea4c8:
006EA4C8  83 FA FF                  CMP EDX,-0x1
006EA4CB  74 0A                     JZ 0x006ea4d7
006EA4CD  68 70 EE 7E 00            PUSH 0x7eee70
006EA4D2  E8 79 E7 FF FF            CALL 0x006e8c50
LAB_006ea4d7:
006EA4D7  5F                        POP EDI
006EA4D8  5E                        POP ESI
006EA4D9  5B                        POP EBX
006EA4DA  5D                        POP EBP
006EA4DB  C2 08 00                  RET 0x8
