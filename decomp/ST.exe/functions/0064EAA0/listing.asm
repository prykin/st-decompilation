FUN_0064eaa0:
0064EAA0  55                        PUSH EBP
0064EAA1  8B EC                     MOV EBP,ESP
0064EAA3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EAA6  53                        PUSH EBX
0064EAA7  33 C0                     XOR EAX,EAX
0064EAA9  B3 08                     MOV BL,0x8
LAB_0064eaab:
0064EAAB  38 9C 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],BL
0064EAB2  75 44                     JNZ 0x0064eaf8
0064EAB4  40                        INC EAX
0064EAB5  83 F8 01                  CMP EAX,0x1
0064EAB8  7C F1                     JL 0x0064eaab
0064EABA  B8 01 00 00 00            MOV EAX,0x1
0064EABF  B2 0A                     MOV DL,0xa
LAB_0064eac1:
0064EAC1  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EAC8  75 2E                     JNZ 0x0064eaf8
0064EACA  40                        INC EAX
0064EACB  83 F8 02                  CMP EAX,0x2
0064EACE  7C F1                     JL 0x0064eac1
0064EAD0  B8 02 00 00 00            MOV EAX,0x2
LAB_0064ead5:
0064EAD5  38 9C 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],BL
0064EADC  75 1A                     JNZ 0x0064eaf8
0064EADE  40                        INC EAX
0064EADF  83 F8 03                  CMP EAX,0x3
0064EAE2  7C F1                     JL 0x0064ead5
0064EAE4  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0064EAE7  85 C9                     TEST ECX,ECX
0064EAE9  7C 0D                     JL 0x0064eaf8
0064EAEB  83 F9 04                  CMP ECX,0x4
0064EAEE  7D 08                     JGE 0x0064eaf8
0064EAF0  B8 01 00 00 00            MOV EAX,0x1
0064EAF5  5B                        POP EBX
0064EAF6  5D                        POP EBP
0064EAF7  C3                        RET
LAB_0064eaf8:
0064EAF8  33 C0                     XOR EAX,EAX
0064EAFA  5B                        POP EBX
0064EAFB  5D                        POP EBP
0064EAFC  C3                        RET
