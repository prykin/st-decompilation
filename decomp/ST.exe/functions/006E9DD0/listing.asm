FUN_006e9dd0:
006E9DD0  55                        PUSH EBP
006E9DD1  8B EC                     MOV EBP,ESP
006E9DD3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9DD6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9DDC  3B D0                     CMP EDX,EAX
006E9DDE  56                        PUSH ESI
006E9DDF  73 5D                     JNC 0x006e9e3e
006E9DE1  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9DE7  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9DEA  C1 E0 03                  SHL EAX,0x3
006E9DED  2B C2                     SUB EAX,EDX
006E9DEF  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9DF2  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E9DF5  8B 08                     MOV ECX,dword ptr [EAX]
006E9DF7  F6 C5 80                  TEST CH,0x80
006E9DFA  74 42                     JZ 0x006e9e3e
006E9DFC  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E9E02  85 D2                     TEST EDX,EDX
006E9E04  74 47                     JZ 0x006e9e4d
006E9E06  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9E09  8B B0 94 00 00 00         MOV ESI,dword ptr [EAX + 0x94]
006E9E0F  3B CE                     CMP ECX,ESI
006E9E11  73 1C                     JNC 0x006e9e2f
006E9E13  8B 74 CA 04               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x4]
006E9E17  85 F6                     TEST ESI,ESI
006E9E19  74 32                     JZ 0x006e9e4d
006E9E1B  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E9E21  80 4C 8A 03 80            OR byte ptr [EDX + ECX*0x4 + 0x3],0x80
006E9E26  5E                        POP ESI
006E9E27  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006E9E2B  5D                        POP EBP
006E9E2C  C2 08 00                  RET 0x8
LAB_006e9e2f:
006E9E2F  68 DC ED 7E 00            PUSH 0x7eeddc
006E9E34  E8 67 F3 FF FF            CALL 0x006e91a0
006E9E39  5E                        POP ESI
006E9E3A  5D                        POP EBP
006E9E3B  C2 08 00                  RET 0x8
LAB_006e9e3e:
006E9E3E  83 FA FF                  CMP EDX,-0x1
006E9E41  74 0A                     JZ 0x006e9e4d
006E9E43  68 DC ED 7E 00            PUSH 0x7eeddc
006E9E48  E8 03 EE FF FF            CALL 0x006e8c50
LAB_006e9e4d:
006E9E4D  5E                        POP ESI
006E9E4E  5D                        POP EBP
006E9E4F  C2 08 00                  RET 0x8
