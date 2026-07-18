FUN_0064ebe0:
0064EBE0  55                        PUSH EBP
0064EBE1  8B EC                     MOV EBP,ESP
0064EBE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EBE6  33 C0                     XOR EAX,EAX
0064EBE8  B2 08                     MOV DL,0x8
LAB_0064ebea:
0064EBEA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EBF1  75 28                     JNZ 0x0064ec1b
0064EBF3  40                        INC EAX
0064EBF4  83 F8 02                  CMP EAX,0x2
0064EBF7  7C F1                     JL 0x0064ebea
0064EBF9  B8 02 00 00 00            MOV EAX,0x2
0064EBFE  B2 0A                     MOV DL,0xa
LAB_0064ec00:
0064EC00  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EC07  75 12                     JNZ 0x0064ec1b
0064EC09  40                        INC EAX
0064EC0A  83 F8 03                  CMP EAX,0x3
0064EC0D  7C F1                     JL 0x0064ec00
0064EC0F  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064EC12  33 C0                     XOR EAX,EAX
0064EC14  85 D2                     TEST EDX,EDX
0064EC16  0F 95 C0                  SETNZ AL
0064EC19  5D                        POP EBP
0064EC1A  C3                        RET
LAB_0064ec1b:
0064EC1B  33 C0                     XOR EAX,EAX
0064EC1D  5D                        POP EBP
0064EC1E  C3                        RET
