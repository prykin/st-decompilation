FUN_004237d0:
004237D0  55                        PUSH EBP
004237D1  8B EC                     MOV EBP,ESP
004237D3  51                        PUSH ECX
004237D4  53                        PUSH EBX
004237D5  8B D9                     MOV EBX,ECX
004237D7  56                        PUSH ESI
004237D8  57                        PUSH EDI
004237D9  8B 43 29                  MOV EAX,dword ptr [EBX + 0x29]
004237DC  33 F6                     XOR ESI,ESI
004237DE  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004237E1  85 FF                     TEST EDI,EDI
004237E3  76 25                     JBE 0x0042380a
004237E5  33 D2                     XOR EDX,EDX
LAB_004237e7:
004237E7  8D 4D FE                  LEA ECX,[EBP + -0x2]
004237EA  51                        PUSH ECX
004237EB  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
004237EE  E8 7D 94 28 00            CALL 0x006acc70
004237F3  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
004237F7  66 39 55 FE               CMP word ptr [EBP + -0x2],DX
004237FB  74 18                     JZ 0x00423815
004237FD  46                        INC ESI
004237FE  8B D6                     MOV EDX,ESI
00423800  81 E2 FF FF 00 00         AND EDX,0xffff
00423806  3B D7                     CMP EDX,EDI
00423808  72 DD                     JC 0x004237e7
LAB_0042380a:
0042380A  5F                        POP EDI
0042380B  5E                        POP ESI
0042380C  33 C0                     XOR EAX,EAX
0042380E  5B                        POP EBX
0042380F  8B E5                     MOV ESP,EBP
00423811  5D                        POP EBP
00423812  C2 04 00                  RET 0x4
LAB_00423815:
00423815  5F                        POP EDI
00423816  5E                        POP ESI
00423817  B8 01 00 00 00            MOV EAX,0x1
0042381C  5B                        POP EBX
0042381D  8B E5                     MOV ESP,EBP
0042381F  5D                        POP EBP
00423820  C2 04 00                  RET 0x4
