FUN_0064eed0:
0064EED0  55                        PUSH EBP
0064EED1  8B EC                     MOV EBP,ESP
0064EED3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EED6  33 C0                     XOR EAX,EAX
0064EED8  B2 08                     MOV DL,0x8
LAB_0064eeda:
0064EEDA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EEE1  75 0D                     JNZ 0x0064eef0
0064EEE3  40                        INC EAX
0064EEE4  83 F8 02                  CMP EAX,0x2
0064EEE7  7C F1                     JL 0x0064eeda
0064EEE9  B8 01 00 00 00            MOV EAX,0x1
0064EEEE  5D                        POP EBP
0064EEEF  C3                        RET
LAB_0064eef0:
0064EEF0  33 C0                     XOR EAX,EAX
0064EEF2  5D                        POP EBP
0064EEF3  C3                        RET
