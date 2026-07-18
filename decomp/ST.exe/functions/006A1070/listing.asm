FUN_006a1070:
006A1070  55                        PUSH EBP
006A1071  8B EC                     MOV EBP,ESP
006A1073  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
006A1077  33 C0                     XOR EAX,EAX
LAB_006a1079:
006A1079  0F BF D0                  MOVSX EDX,AX
006A107C  66 3B 0C 55 08 F8 7D 00   CMP CX,word ptr [EDX*0x2 + 0x7df808]
006A1084  74 27                     JZ 0x006a10ad
006A1086  40                        INC EAX
006A1087  66 3D 0F 00               CMP AX,0xf
006A108B  7C EC                     JL 0x006a1079
006A108D  33 C0                     XOR EAX,EAX
LAB_006a108f:
006A108F  0F BF D0                  MOVSX EDX,AX
006A1092  66 8B 14 55 08 F8 7D 00   MOV DX,word ptr [EDX*0x2 + 0x7df808]
006A109A  66 33 D1                  XOR DX,CX
006A109D  F6 C6 0F                  TEST DH,0xf
006A10A0  74 0B                     JZ 0x006a10ad
006A10A2  40                        INC EAX
006A10A3  66 3D 0F 00               CMP AX,0xf
006A10A7  7C E6                     JL 0x006a108f
006A10A9  66 0D FF FF               OR AX,0xffff
LAB_006a10ad:
006A10AD  5D                        POP EBP
006A10AE  C3                        RET
