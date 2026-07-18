FUN_0064f080:
0064F080  55                        PUSH EBP
0064F081  8B EC                     MOV EBP,ESP
0064F083  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F086  33 C0                     XOR EAX,EAX
0064F088  B2 08                     MOV DL,0x8
LAB_0064f08a:
0064F08A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F091  75 0D                     JNZ 0x0064f0a0
0064F093  40                        INC EAX
0064F094  83 F8 03                  CMP EAX,0x3
0064F097  7C F1                     JL 0x0064f08a
0064F099  B8 01 00 00 00            MOV EAX,0x1
0064F09E  5D                        POP EBP
0064F09F  C3                        RET
LAB_0064f0a0:
0064F0A0  33 C0                     XOR EAX,EAX
0064F0A2  5D                        POP EBP
0064F0A3  C3                        RET
