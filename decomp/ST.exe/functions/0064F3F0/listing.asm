FUN_0064f3f0:
0064F3F0  55                        PUSH EBP
0064F3F1  8B EC                     MOV EBP,ESP
0064F3F3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F3F6  33 C0                     XOR EAX,EAX
0064F3F8  B2 08                     MOV DL,0x8
LAB_0064f3fa:
0064F3FA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F401  75 0D                     JNZ 0x0064f410
0064F403  40                        INC EAX
0064F404  83 F8 01                  CMP EAX,0x1
0064F407  7C F1                     JL 0x0064f3fa
0064F409  B8 01 00 00 00            MOV EAX,0x1
0064F40E  5D                        POP EBP
0064F40F  C3                        RET
LAB_0064f410:
0064F410  33 C0                     XOR EAX,EAX
0064F412  5D                        POP EBP
0064F413  C3                        RET
