FUN_0064ee90:
0064EE90  55                        PUSH EBP
0064EE91  8B EC                     MOV EBP,ESP
0064EE93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EE96  33 C0                     XOR EAX,EAX
0064EE98  B2 08                     MOV DL,0x8
LAB_0064ee9a:
0064EE9A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EEA1  75 0D                     JNZ 0x0064eeb0
0064EEA3  40                        INC EAX
0064EEA4  83 F8 03                  CMP EAX,0x3
0064EEA7  7C F1                     JL 0x0064ee9a
0064EEA9  B8 01 00 00 00            MOV EAX,0x1
0064EEAE  5D                        POP EBP
0064EEAF  C3                        RET
LAB_0064eeb0:
0064EEB0  33 C0                     XOR EAX,EAX
0064EEB2  5D                        POP EBP
0064EEB3  C3                        RET
