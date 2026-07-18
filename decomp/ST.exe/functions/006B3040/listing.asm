FUN_006b3040:
006B3040  55                        PUSH EBP
006B3041  8B EC                     MOV EBP,ESP
006B3043  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B3046  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B3049  56                        PUSH ESI
006B304A  83 C8 FF                  OR EAX,0xffffffff
006B304D  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B3053  3B CE                     CMP ECX,ESI
006B3055  5E                        POP ESI
006B3056  73 0C                     JNC 0x006b3064
006B3058  8B 82 B0 01 00 00         MOV EAX,dword ptr [EDX + 0x1b0]
006B305E  8B 0C 88                  MOV ECX,dword ptr [EAX + ECX*0x4]
006B3061  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
LAB_006b3064:
006B3064  5D                        POP EBP
006B3065  C2 08 00                  RET 0x8
