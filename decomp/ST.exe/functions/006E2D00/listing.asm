FUN_006e2d00:
006E2D00  55                        PUSH EBP
006E2D01  8B EC                     MOV EBP,ESP
006E2D03  56                        PUSH ESI
006E2D04  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E2D07  85 F6                     TEST ESI,ESI
006E2D09  7C 2C                     JL 0x006e2d37
006E2D0B  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
006E2D0E  3B F0                     CMP ESI,EAX
006E2D10  7D 25                     JGE 0x006e2d37
006E2D12  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E2D15  85 D2                     TEST EDX,EDX
006E2D17  7C 1E                     JL 0x006e2d37
006E2D19  57                        PUSH EDI
006E2D1A  8B 79 2C                  MOV EDI,dword ptr [ECX + 0x2c]
006E2D1D  3B D7                     CMP EDX,EDI
006E2D1F  5F                        POP EDI
006E2D20  7D 15                     JGE 0x006e2d37
006E2D22  0F AF C2                  IMUL EAX,EDX
006E2D25  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
006E2D28  03 C6                     ADD EAX,ESI
006E2D2A  33 D2                     XOR EDX,EDX
006E2D2C  5E                        POP ESI
006E2D2D  66 8B 14 41               MOV DX,word ptr [ECX + EAX*0x2]
006E2D31  8B C2                     MOV EAX,EDX
006E2D33  5D                        POP EBP
006E2D34  C2 08 00                  RET 0x8
LAB_006e2d37:
006E2D37  B8 FF FF 00 00            MOV EAX,0xffff
006E2D3C  5E                        POP ESI
006E2D3D  5D                        POP EBP
006E2D3E  C2 08 00                  RET 0x8
