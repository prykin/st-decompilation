FUN_0064edc0:
0064EDC0  55                        PUSH EBP
0064EDC1  8B EC                     MOV EBP,ESP
0064EDC3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EDC6  33 C0                     XOR EAX,EAX
0064EDC8  B2 08                     MOV DL,0x8
LAB_0064edca:
0064EDCA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EDD1  75 0D                     JNZ 0x0064ede0
0064EDD3  40                        INC EAX
0064EDD4  83 F8 07                  CMP EAX,0x7
0064EDD7  7C F1                     JL 0x0064edca
0064EDD9  B8 01 00 00 00            MOV EAX,0x1
0064EDDE  5D                        POP EBP
0064EDDF  C3                        RET
LAB_0064ede0:
0064EDE0  33 C0                     XOR EAX,EAX
0064EDE2  5D                        POP EBP
0064EDE3  C3                        RET
