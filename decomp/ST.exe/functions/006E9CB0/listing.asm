FUN_006e9cb0:
006E9CB0  55                        PUSH EBP
006E9CB1  8B EC                     MOV EBP,ESP
006E9CB3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9CB6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9CBC  3B D0                     CMP EDX,EAX
006E9CBE  56                        PUSH ESI
006E9CBF  73 5D                     JNC 0x006e9d1e
006E9CC1  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9CC7  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9CCA  C1 E0 03                  SHL EAX,0x3
006E9CCD  2B C2                     SUB EAX,EDX
006E9CCF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9CD2  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E9CD5  8B 08                     MOV ECX,dword ptr [EAX]
006E9CD7  F6 C5 80                  TEST CH,0x80
006E9CDA  74 42                     JZ 0x006e9d1e
006E9CDC  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E9CE2  85 D2                     TEST EDX,EDX
006E9CE4  74 47                     JZ 0x006e9d2d
006E9CE6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9CE9  8B B0 94 00 00 00         MOV ESI,dword ptr [EAX + 0x94]
006E9CEF  3B CE                     CMP ECX,ESI
006E9CF1  73 1C                     JNC 0x006e9d0f
006E9CF3  8B 74 CA 04               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x4]
006E9CF7  85 F6                     TEST ESI,ESI
006E9CF9  74 32                     JZ 0x006e9d2d
006E9CFB  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E9D01  80 4C 8A 03 40            OR byte ptr [EDX + ECX*0x4 + 0x3],0x40
006E9D06  5E                        POP ESI
006E9D07  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006E9D0B  5D                        POP EBP
006E9D0C  C2 08 00                  RET 0x8
LAB_006e9d0f:
006E9D0F  68 BC ED 7E 00            PUSH 0x7eedbc
006E9D14  E8 87 F4 FF FF            CALL 0x006e91a0
006E9D19  5E                        POP ESI
006E9D1A  5D                        POP EBP
006E9D1B  C2 08 00                  RET 0x8
LAB_006e9d1e:
006E9D1E  83 FA FF                  CMP EDX,-0x1
006E9D21  74 0A                     JZ 0x006e9d2d
006E9D23  68 BC ED 7E 00            PUSH 0x7eedbc
006E9D28  E8 23 EF FF FF            CALL 0x006e8c50
LAB_006e9d2d:
006E9D2D  5E                        POP ESI
006E9D2E  5D                        POP EBP
006E9D2F  C2 08 00                  RET 0x8
