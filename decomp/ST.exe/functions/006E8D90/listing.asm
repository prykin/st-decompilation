FUN_006e8d90:
006E8D90  55                        PUSH EBP
006E8D91  8B EC                     MOV EBP,ESP
006E8D93  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E8D96  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E8D9C  3B D0                     CMP EDX,EAX
006E8D9E  73 3A                     JNC 0x006e8dda
006E8DA0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E8DA6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E8DA9  C1 E0 03                  SHL EAX,0x3
006E8DAC  2B C2                     SUB EAX,EDX
006E8DAE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E8DB1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E8DB4  8B 08                     MOV ECX,dword ptr [EAX]
006E8DB6  F6 C5 80                  TEST CH,0x80
006E8DB9  74 1F                     JZ 0x006e8dda
006E8DBB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E8DBE  F6 C5 40                  TEST CH,0x40
006E8DC1  74 17                     JZ 0x006e8dda
006E8DC3  8B 90 A0 00 00 00         MOV EDX,dword ptr [EAX + 0xa0]
006E8DC9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E8DCC  89 4A 25                  MOV dword ptr [EDX + 0x25],ECX
006E8DCF  8B 08                     MOV ECX,dword ptr [EAX]
006E8DD1  83 C9 04                  OR ECX,0x4
006E8DD4  89 08                     MOV dword ptr [EAX],ECX
006E8DD6  5D                        POP EBP
006E8DD7  C2 08 00                  RET 0x8
LAB_006e8dda:
006E8DDA  83 FA FF                  CMP EDX,-0x1
006E8DDD  74 0A                     JZ 0x006e8de9
006E8DDF  68 A0 EC 7E 00            PUSH 0x7eeca0
006E8DE4  E8 67 FE FF FF            CALL 0x006e8c50
LAB_006e8de9:
006E8DE9  5D                        POP EBP
006E8DEA  C2 08 00                  RET 0x8
