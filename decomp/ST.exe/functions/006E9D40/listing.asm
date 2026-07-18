FUN_006e9d40:
006E9D40  55                        PUSH EBP
006E9D41  8B EC                     MOV EBP,ESP
006E9D43  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9D46  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E9D4C  3B D0                     CMP EDX,EAX
006E9D4E  56                        PUSH ESI
006E9D4F  73 5F                     JNC 0x006e9db0
006E9D51  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9D57  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9D5A  C1 E0 03                  SHL EAX,0x3
006E9D5D  2B C2                     SUB EAX,EDX
006E9D5F  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9D62  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E9D65  8B 08                     MOV ECX,dword ptr [EAX]
006E9D67  F6 C5 80                  TEST CH,0x80
006E9D6A  74 44                     JZ 0x006e9db0
006E9D6C  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E9D72  85 D2                     TEST EDX,EDX
006E9D74  74 49                     JZ 0x006e9dbf
006E9D76  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E9D79  8B B0 94 00 00 00         MOV ESI,dword ptr [EAX + 0x94]
006E9D7F  3B CE                     CMP ECX,ESI
006E9D81  73 1E                     JNC 0x006e9da1
006E9D83  8B 74 CA 04               MOV ESI,dword ptr [EDX + ECX*0x8 + 0x4]
006E9D87  85 F6                     TEST ESI,ESI
006E9D89  74 34                     JZ 0x006e9dbf
006E9D8B  8B 90 A4 00 00 00         MOV EDX,dword ptr [EAX + 0xa4]
006E9D91  66 81 64 8A 02 FF BF      AND word ptr [EDX + ECX*0x4 + 0x2],0xbfff
006E9D98  5E                        POP ESI
006E9D99  8D 44 8A 02               LEA EAX,[EDX + ECX*0x4 + 0x2]
006E9D9D  5D                        POP EBP
006E9D9E  C2 08 00                  RET 0x8
LAB_006e9da1:
006E9DA1  68 CC ED 7E 00            PUSH 0x7eedcc
006E9DA6  E8 F5 F3 FF FF            CALL 0x006e91a0
006E9DAB  5E                        POP ESI
006E9DAC  5D                        POP EBP
006E9DAD  C2 08 00                  RET 0x8
LAB_006e9db0:
006E9DB0  83 FA FF                  CMP EDX,-0x1
006E9DB3  74 0A                     JZ 0x006e9dbf
006E9DB5  68 CC ED 7E 00            PUSH 0x7eedcc
006E9DBA  E8 91 EE FF FF            CALL 0x006e8c50
LAB_006e9dbf:
006E9DBF  5E                        POP ESI
006E9DC0  5D                        POP EBP
006E9DC1  C2 08 00                  RET 0x8
