FUN_006b3ab0:
006B3AB0  55                        PUSH EBP
006B3AB1  8B EC                     MOV EBP,ESP
006B3AB3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B3AB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B3AB9  56                        PUSH ESI
006B3ABA  83 C8 FF                  OR EAX,0xffffffff
006B3ABD  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B3AC3  3B CE                     CMP ECX,ESI
006B3AC5  5E                        POP ESI
006B3AC6  73 16                     JNC 0x006b3ade
006B3AC8  8B 92 B0 01 00 00         MOV EDX,dword ptr [EDX + 0x1b0]
006B3ACE  8B 0C 8A                  MOV ECX,dword ptr [EDX + ECX*0x4]
006B3AD1  8B 11                     MOV EDX,dword ptr [ECX]
006B3AD3  F6 C6 80                  TEST DH,0x80
006B3AD6  74 06                     JZ 0x006b3ade
006B3AD8  8B 81 C4 00 00 00         MOV EAX,dword ptr [ECX + 0xc4]
LAB_006b3ade:
006B3ADE  5D                        POP EBP
006B3ADF  C2 08 00                  RET 0x8
