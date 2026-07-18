FUN_006527d0:
006527D0  55                        PUSH EBP
006527D1  8B EC                     MOV EBP,ESP
006527D3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006527D6  33 C0                     XOR EAX,EAX
006527D8  B2 08                     MOV DL,0x8
LAB_006527da:
006527DA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006527E1  75 0D                     JNZ 0x006527f0
006527E3  40                        INC EAX
006527E4  83 F8 01                  CMP EAX,0x1
006527E7  7C F1                     JL 0x006527da
006527E9  B8 01 00 00 00            MOV EAX,0x1
006527EE  5D                        POP EBP
006527EF  C3                        RET
LAB_006527f0:
006527F0  33 C0                     XOR EAX,EAX
006527F2  5D                        POP EBP
006527F3  C3                        RET
