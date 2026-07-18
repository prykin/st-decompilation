FUN_0064f5e0:
0064F5E0  55                        PUSH EBP
0064F5E1  8B EC                     MOV EBP,ESP
0064F5E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F5E6  33 C0                     XOR EAX,EAX
0064F5E8  B2 08                     MOV DL,0x8
LAB_0064f5ea:
0064F5EA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F5F1  75 0D                     JNZ 0x0064f600
0064F5F3  40                        INC EAX
0064F5F4  83 F8 02                  CMP EAX,0x2
0064F5F7  7C F1                     JL 0x0064f5ea
0064F5F9  B8 01 00 00 00            MOV EAX,0x1
0064F5FE  5D                        POP EBP
0064F5FF  C3                        RET
LAB_0064f600:
0064F600  33 C0                     XOR EAX,EAX
0064F602  5D                        POP EBP
0064F603  C3                        RET
