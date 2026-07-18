FUN_006b1c80:
006B1C80  55                        PUSH EBP
006B1C81  8B EC                     MOV EBP,ESP
006B1C83  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B1C86  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B1C89  56                        PUSH ESI
006B1C8A  B8 FE FF FF FF            MOV EAX,0xfffffffe
006B1C8F  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B1C95  3B CE                     CMP ECX,ESI
006B1C97  5E                        POP ESI
006B1C98  73 13                     JNC 0x006b1cad
006B1C9A  8B 92 B0 01 00 00         MOV EDX,dword ptr [EDX + 0x1b0]
006B1CA0  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006B1CA3  8B 11                     MOV EDX,dword ptr [ECX]
006B1CA5  F6 C6 80                  TEST DH,0x80
006B1CA8  74 03                     JZ 0x006b1cad
006B1CAA  8B 41 4C                  MOV EAX,dword ptr [ECX + 0x4c]
LAB_006b1cad:
006B1CAD  5D                        POP EBP
006B1CAE  C2 08 00                  RET 0x8
