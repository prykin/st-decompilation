FUN_0064ee00:
0064EE00  55                        PUSH EBP
0064EE01  8B EC                     MOV EBP,ESP
0064EE03  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EE06  33 C0                     XOR EAX,EAX
0064EE08  B2 08                     MOV DL,0x8
LAB_0064ee0a:
0064EE0A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EE11  75 0D                     JNZ 0x0064ee20
0064EE13  40                        INC EAX
0064EE14  83 F8 02                  CMP EAX,0x2
0064EE17  7C F1                     JL 0x0064ee0a
0064EE19  B8 01 00 00 00            MOV EAX,0x1
0064EE1E  5D                        POP EBP
0064EE1F  C3                        RET
LAB_0064ee20:
0064EE20  33 C0                     XOR EAX,EAX
0064EE22  5D                        POP EBP
0064EE23  C3                        RET
