FUN_0064f5a0:
0064F5A0  55                        PUSH EBP
0064F5A1  8B EC                     MOV EBP,ESP
0064F5A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F5A6  33 C0                     XOR EAX,EAX
0064F5A8  B2 08                     MOV DL,0x8
LAB_0064f5aa:
0064F5AA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F5B1  75 0D                     JNZ 0x0064f5c0
0064F5B3  40                        INC EAX
0064F5B4  83 F8 05                  CMP EAX,0x5
0064F5B7  7C F1                     JL 0x0064f5aa
0064F5B9  B8 01 00 00 00            MOV EAX,0x1
0064F5BE  5D                        POP EBP
0064F5BF  C3                        RET
LAB_0064f5c0:
0064F5C0  33 C0                     XOR EAX,EAX
0064F5C2  5D                        POP EBP
0064F5C3  C3                        RET
