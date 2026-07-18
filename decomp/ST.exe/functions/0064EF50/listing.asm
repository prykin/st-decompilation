FUN_0064ef50:
0064EF50  55                        PUSH EBP
0064EF51  8B EC                     MOV EBP,ESP
0064EF53  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EF56  33 C0                     XOR EAX,EAX
0064EF58  B2 08                     MOV DL,0x8
LAB_0064ef5a:
0064EF5A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EF61  75 0D                     JNZ 0x0064ef70
0064EF63  40                        INC EAX
0064EF64  83 F8 05                  CMP EAX,0x5
0064EF67  7C F1                     JL 0x0064ef5a
0064EF69  B8 01 00 00 00            MOV EAX,0x1
0064EF6E  5D                        POP EBP
0064EF6F  C3                        RET
LAB_0064ef70:
0064EF70  33 C0                     XOR EAX,EAX
0064EF72  5D                        POP EBP
0064EF73  C3                        RET
