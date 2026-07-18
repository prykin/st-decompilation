FUN_006b1090:
006B1090  55                        PUSH EBP
006B1091  8B EC                     MOV EBP,ESP
006B1093  83 EC 10                  SUB ESP,0x10
006B1096  53                        PUSH EBX
006B1097  56                        PUSH ESI
006B1098  33 DB                     XOR EBX,EBX
006B109A  57                        PUSH EDI
006B109B  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006B109E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006B10A1  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
006B10A4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006B10A7  33 F6                     XOR ESI,ESI
006B10A9  8D 7D 0C                  LEA EDI,[EBP + 0xc]
LAB_006b10ac:
006B10AC  8B 0F                     MOV ECX,dword ptr [EDI]
006B10AE  3B CB                     CMP ECX,EBX
006B10B0  7C 35                     JL 0x006b10e7
006B10B2  8B C1                     MOV EAX,ECX
006B10B4  99                        CDQ
006B10B5  83 E2 1F                  AND EDX,0x1f
006B10B8  03 C2                     ADD EAX,EDX
006B10BA  C1 F8 05                  SAR EAX,0x5
006B10BD  81 E1 1F 00 00 80         AND ECX,0x8000001f
006B10C3  8D 44 85 F0               LEA EAX,[EBP + EAX*0x4 + -0x10]
006B10C7  79 05                     JNS 0x006b10ce
006B10C9  49                        DEC ECX
006B10CA  83 C9 E0                  OR ECX,0xffffffe0
006B10CD  41                        INC ECX
LAB_006b10ce:
006B10CE  BA 01 00 00 00            MOV EDX,0x1
006B10D3  83 C7 04                  ADD EDI,0x4
006B10D6  D3 E2                     SHL EDX,CL
006B10D8  8B 08                     MOV ECX,dword ptr [EAX]
006B10DA  0B CA                     OR ECX,EDX
006B10DC  46                        INC ESI
006B10DD  81 FE 80 00 00 00         CMP ESI,0x80
006B10E3  89 08                     MOV dword ptr [EAX],ECX
006B10E5  7C C5                     JL 0x006b10ac
LAB_006b10e7:
006B10E7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B10EA  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B10ED  8B C8                     MOV ECX,EAX
006B10EF  5F                        POP EDI
006B10F0  5E                        POP ESI
006B10F1  5B                        POP EBX
006B10F2  89 11                     MOV dword ptr [ECX],EDX
006B10F4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B10F7  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006B10FA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006B10FD  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
006B1100  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006B1103  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
006B1106  8B E5                     MOV ESP,EBP
006B1108  5D                        POP EBP
006B1109  C3                        RET
