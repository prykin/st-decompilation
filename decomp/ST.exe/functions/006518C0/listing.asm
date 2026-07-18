FUN_006518c0:
006518C0  55                        PUSH EBP
006518C1  8B EC                     MOV EBP,ESP
006518C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006518C6  33 C0                     XOR EAX,EAX
006518C8  B2 08                     MOV DL,0x8
LAB_006518ca:
006518CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006518D1  75 12                     JNZ 0x006518e5
006518D3  40                        INC EAX
006518D4  83 F8 03                  CMP EAX,0x3
006518D7  7C F1                     JL 0x006518ca
006518D9  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
006518DC  33 C0                     XOR EAX,EAX
006518DE  85 D2                     TEST EDX,EDX
006518E0  0F 9D C0                  SETGE AL
006518E3  5D                        POP EBP
006518E4  C3                        RET
LAB_006518e5:
006518E5  33 C0                     XOR EAX,EAX
006518E7  5D                        POP EBP
006518E8  C3                        RET
