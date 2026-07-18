FUN_006e9e60:
006E9E60  55                        PUSH EBP
006E9E61  8B EC                     MOV EBP,ESP
006E9E63  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9E66  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9E6C  3B D0                     CMP EDX,EAX
006E9E6E  56                        PUSH ESI
006E9E6F  73 5F                     JNC 0x006e9ed0
006E9E71  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9E77  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9E7A  C1 E0 03                  SHL EAX,0x3
006E9E7D  2B C2                     SUB EAX,EDX
006E9E7F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9E82  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E9E85  8B 08                     MOV ECX,dword ptr [EAX]
006E9E87  F6 C5 80                  TEST CH,0x80
006E9E8A  74 44                     JZ 0x006e9ed0
006E9E8C  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E9E92  85 D2                     TEST EDX,EDX
006E9E94  74 49                     JZ 0x006e9edf
006E9E96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9E99  8B B0 94 00 00 00         MOV ESI,dword ptr [EAX + 0x94]
006E9E9F  3B CE                     CMP ECX,ESI
006E9EA1  73 1E                     JNC 0x006e9ec1
006E9EA3  8B 74 CA 04               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x4]
006E9EA7  85 F6                     TEST ESI,ESI
006E9EA9  74 34                     JZ 0x006e9edf
006E9EAB  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E9EB1  66 81 64 8A 02 FF 7F      AND word ptr [EDX + ECX*0x4 + 0x2],0x7fff
006E9EB8  5E                        POP ESI
006E9EB9  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006E9EBD  5D                        POP EBP
006E9EBE  C2 08 00                  RET 0x8
LAB_006e9ec1:
006E9EC1  68 EC ED 7E 00            PUSH 0x7eedec
006E9EC6  E8 D5 F2 FF FF            CALL 0x006e91a0
006E9ECB  5E                        POP ESI
006E9ECC  5D                        POP EBP
006E9ECD  C2 08 00                  RET 0x8
LAB_006e9ed0:
006E9ED0  83 FA FF                  CMP EDX,-0x1
006E9ED3  74 0A                     JZ 0x006e9edf
006E9ED5  68 EC ED 7E 00            PUSH 0x7eedec
006E9EDA  E8 71 ED FF FF            CALL 0x006e8c50
LAB_006e9edf:
006E9EDF  5E                        POP ESI
006E9EE0  5D                        POP EBP
006E9EE1  C2 08 00                  RET 0x8
