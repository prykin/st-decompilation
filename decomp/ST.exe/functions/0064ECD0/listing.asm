FUN_0064ecd0:
0064ECD0  55                        PUSH EBP
0064ECD1  8B EC                     MOV EBP,ESP
0064ECD3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064ECD6  33 C0                     XOR EAX,EAX
0064ECD8  B2 08                     MOV DL,0x8
LAB_0064ecda:
0064ECDA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ECE1  75 28                     JNZ 0x0064ed0b
0064ECE3  40                        INC EAX
0064ECE4  83 F8 03                  CMP EAX,0x3
0064ECE7  7C F1                     JL 0x0064ecda
0064ECE9  B8 03 00 00 00            MOV EAX,0x3
0064ECEE  B2 0A                     MOV DL,0xa
LAB_0064ecf0:
0064ECF0  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ECF7  75 12                     JNZ 0x0064ed0b
0064ECF9  40                        INC EAX
0064ECFA  83 F8 04                  CMP EAX,0x4
0064ECFD  7C F1                     JL 0x0064ecf0
0064ECFF  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0064ED02  33 C0                     XOR EAX,EAX
0064ED04  85 D2                     TEST EDX,EDX
0064ED06  0F 95 C0                  SETNZ AL
0064ED09  5D                        POP EBP
0064ED0A  C3                        RET
LAB_0064ed0b:
0064ED0B  33 C0                     XOR EAX,EAX
0064ED0D  5D                        POP EBP
0064ED0E  C3                        RET
