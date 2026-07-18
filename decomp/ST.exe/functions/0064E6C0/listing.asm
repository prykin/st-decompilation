FUN_0064e6c0:
0064E6C0  55                        PUSH EBP
0064E6C1  8B EC                     MOV EBP,ESP
0064E6C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E6C6  33 C0                     XOR EAX,EAX
0064E6C8  B2 08                     MOV DL,0x8
LAB_0064e6ca:
0064E6CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E6D1  75 0D                     JNZ 0x0064e6e0
0064E6D3  40                        INC EAX
0064E6D4  83 F8 01                  CMP EAX,0x1
0064E6D7  7C F1                     JL 0x0064e6ca
0064E6D9  B8 01 00 00 00            MOV EAX,0x1
0064E6DE  5D                        POP EBP
0064E6DF  C3                        RET
LAB_0064e6e0:
0064E6E0  33 C0                     XOR EAX,EAX
0064E6E2  5D                        POP EBP
0064E6E3  C3                        RET
