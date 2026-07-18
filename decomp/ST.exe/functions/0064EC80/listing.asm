FUN_0064ec80:
0064EC80  55                        PUSH EBP
0064EC81  8B EC                     MOV EBP,ESP
0064EC83  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EC86  53                        PUSH EBX
0064EC87  33 C0                     XOR EAX,EAX
0064EC89  B2 08                     MOV DL,0x8
LAB_0064ec8b:
0064EC8B  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EC92  75 0D                     JNZ 0x0064eca1
0064EC94  40                        INC EAX
0064EC95  83 F8 05                  CMP EAX,0x5
0064EC98  7C F1                     JL 0x0064ec8b
0064EC9A  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0064EC9D  85 C0                     TEST EAX,EAX
0064EC9F  7D 05                     JGE 0x0064eca6
LAB_0064eca1:
0064ECA1  33 C0                     XOR EAX,EAX
0064ECA3  5B                        POP EBX
0064ECA4  5D                        POP EBP
0064ECA5  C3                        RET
LAB_0064eca6:
0064ECA6  8B 59 18                  MOV EBX,dword ptr [ECX + 0x18]
0064ECA9  33 D2                     XOR EDX,EDX
0064ECAB  3B D8                     CMP EBX,EAX
0064ECAD  5B                        POP EBX
0064ECAE  0F 9D C2                  SETGE DL
0064ECB1  8B C2                     MOV EAX,EDX
0064ECB3  5D                        POP EBP
0064ECB4  C3                        RET
