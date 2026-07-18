FUN_006511a0:
006511A0  55                        PUSH EBP
006511A1  8B EC                     MOV EBP,ESP
006511A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006511A6  33 C0                     XOR EAX,EAX
006511A8  B2 08                     MOV DL,0x8
LAB_006511aa:
006511AA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006511B1  75 12                     JNZ 0x006511c5
006511B3  40                        INC EAX
006511B4  83 F8 04                  CMP EAX,0x4
006511B7  7C F1                     JL 0x006511aa
006511B9  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006511BC  33 C0                     XOR EAX,EAX
006511BE  85 D2                     TEST EDX,EDX
006511C0  0F 9D C0                  SETGE AL
006511C3  5D                        POP EBP
006511C4  C3                        RET
LAB_006511c5:
006511C5  33 C0                     XOR EAX,EAX
006511C7  5D                        POP EBP
006511C8  C3                        RET
