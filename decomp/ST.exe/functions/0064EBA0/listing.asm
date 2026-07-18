FUN_0064eba0:
0064EBA0  55                        PUSH EBP
0064EBA1  8B EC                     MOV EBP,ESP
0064EBA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EBA6  33 C0                     XOR EAX,EAX
0064EBA8  B2 08                     MOV DL,0x8
LAB_0064ebaa:
0064EBAA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EBB1  75 0D                     JNZ 0x0064ebc0
0064EBB3  40                        INC EAX
0064EBB4  83 F8 03                  CMP EAX,0x3
0064EBB7  7C F1                     JL 0x0064ebaa
0064EBB9  B8 01 00 00 00            MOV EAX,0x1
0064EBBE  5D                        POP EBP
0064EBBF  C3                        RET
LAB_0064ebc0:
0064EBC0  33 C0                     XOR EAX,EAX
0064EBC2  5D                        POP EBP
0064EBC3  C3                        RET
