FUN_006b33f0:
006B33F0  55                        PUSH EBP
006B33F1  8B EC                     MOV EBP,ESP
006B33F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B33F6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B33F9  56                        PUSH ESI
006B33FA  33 C0                     XOR EAX,EAX
006B33FC  8B B2 A0 01 00 00         MOV ESI,dword ptr [EDX + 0x1a0]
006B3402  3B CE                     CMP ECX,ESI
006B3404  5E                        POP ESI
006B3405  73 1C                     JNC 0x006b3423
006B3407  8B 82 B0 01 00 00         MOV EAX,dword ptr [EDX + 0x1b0]
006B340D  8B 0C 88                  MOV ECX,dword ptr [EAX + ECX*0x4]
006B3410  33 C0                     XOR EAX,EAX
006B3412  8B 11                     MOV EDX,dword ptr [ECX]
006B3414  81 E2 20 80 00 00         AND EDX,0x8020
006B341A  81 FA 20 80 00 00         CMP EDX,0x8020
006B3420  0F 94 C0                  SETZ AL
LAB_006b3423:
006B3423  5D                        POP EBP
006B3424  C2 08 00                  RET 0x8
