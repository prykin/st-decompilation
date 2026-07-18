FUN_006eb230:
006EB230  55                        PUSH EBP
006EB231  8B EC                     MOV EBP,ESP
006EB233  53                        PUSH EBX
006EB234  56                        PUSH ESI
006EB235  57                        PUSH EDI
006EB236  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006EB239  85 FF                     TEST EDI,EDI
006EB23B  0F 84 BC 00 00 00         JZ 0x006eb2fd
006EB241  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006EB244  85 DB                     TEST EBX,EBX
006EB246  0F 84 B1 00 00 00         JZ 0x006eb2fd
006EB24C  85 FF                     TEST EDI,EDI
006EB24E  7D 11                     JGE 0x006eb261
006EB250  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006EB253  B8 01 00 00 00            MOV EAX,0x1
006EB258  F7 DF                     NEG EDI
006EB25A  2B C7                     SUB EAX,EDI
006EB25C  03 D0                     ADD EDX,EAX
006EB25E  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_006eb261:
006EB261  85 DB                     TEST EBX,EBX
006EB263  7D 11                     JGE 0x006eb276
006EB265  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006EB268  BA 01 00 00 00            MOV EDX,0x1
006EB26D  F7 DB                     NEG EBX
006EB26F  2B D3                     SUB EDX,EBX
006EB271  03 C2                     ADD EAX,EDX
006EB273  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006eb276:
006EB276  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006EB279  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006EB27F  3B D0                     CMP EDX,EAX
006EB281  73 6B                     JNC 0x006eb2ee
006EB283  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006EB289  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006EB28C  C1 E0 03                  SHL EAX,0x3
006EB28F  2B C2                     SUB EAX,EDX
006EB291  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006EB294  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006EB297  8B 01                     MOV EAX,dword ptr [ECX]
006EB299  F6 C4 80                  TEST AH,0x80
006EB29C  74 50                     JZ 0x006eb2ee
006EB29E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
006EB2A1  85 D2                     TEST EDX,EDX
006EB2A3  75 58                     JNZ 0x006eb2fd
006EB2A5  A9 00 00 01 00            TEST EAX,0x10000
006EB2AA  74 51                     JZ 0x006eb2fd
006EB2AC  8B 41 5C                  MOV EAX,dword ptr [ECX + 0x5c]
006EB2AF  99                        CDQ
006EB2B0  2B C2                     SUB EAX,EDX
006EB2B2  8B F0                     MOV ESI,EAX
006EB2B4  8B 41 54                  MOV EAX,dword ptr [ECX + 0x54]
006EB2B7  D1 FE                     SAR ESI,0x1
006EB2B9  03 F0                     ADD ESI,EAX
006EB2BB  8B 41 60                  MOV EAX,dword ptr [ECX + 0x60]
006EB2BE  99                        CDQ
006EB2BF  2B C2                     SUB EAX,EDX
006EB2C1  8B 51 58                  MOV EDX,dword ptr [ECX + 0x58]
006EB2C4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006EB2C7  D1 F8                     SAR EAX,0x1
006EB2C9  03 C2                     ADD EAX,EDX
006EB2CB  3B F1                     CMP ESI,ECX
006EB2CD  7C 2E                     JL 0x006eb2fd
006EB2CF  03 CF                     ADD ECX,EDI
006EB2D1  3B F1                     CMP ESI,ECX
006EB2D3  7D 28                     JGE 0x006eb2fd
006EB2D5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006EB2D8  3B C1                     CMP EAX,ECX
006EB2DA  7C 21                     JL 0x006eb2fd
006EB2DC  03 CB                     ADD ECX,EBX
006EB2DE  3B C1                     CMP EAX,ECX
006EB2E0  7D 1B                     JGE 0x006eb2fd
006EB2E2  5F                        POP EDI
006EB2E3  5E                        POP ESI
006EB2E4  B8 01 00 00 00            MOV EAX,0x1
006EB2E9  5B                        POP EBX
006EB2EA  5D                        POP EBP
006EB2EB  C2 14 00                  RET 0x14
LAB_006eb2ee:
006EB2EE  83 FA FF                  CMP EDX,-0x1
006EB2F1  74 0A                     JZ 0x006eb2fd
006EB2F3  68 64 EF 7E 00            PUSH 0x7eef64
006EB2F8  E8 53 D9 FF FF            CALL 0x006e8c50
LAB_006eb2fd:
006EB2FD  5F                        POP EDI
006EB2FE  5E                        POP ESI
006EB2FF  33 C0                     XOR EAX,EAX
006EB301  5B                        POP EBX
006EB302  5D                        POP EBP
006EB303  C2 14 00                  RET 0x14
