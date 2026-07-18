FUN_006a10c0:
006A10C0  55                        PUSH EBP
006A10C1  8B EC                     MOV EBP,ESP
006A10C3  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
006A10C7  33 C0                     XOR EAX,EAX
LAB_006a10c9:
006A10C9  0F BF D0                  MOVSX EDX,AX
006A10CC  66 3B 0C 55 08 F8 7D 00   CMP CX,word ptr [EDX*0x2 + 0x7df808]
006A10D4  74 0B                     JZ 0x006a10e1
006A10D6  40                        INC EAX
006A10D7  66 3D 0F 00               CMP AX,0xf
006A10DB  7C EC                     JL 0x006a10c9
006A10DD  66 0D FF FF               OR AX,0xffff
LAB_006a10e1:
006A10E1  5D                        POP EBP
006A10E2  C3                        RET
