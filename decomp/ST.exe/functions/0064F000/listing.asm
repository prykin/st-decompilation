FUN_0064f000:
0064F000  55                        PUSH EBP
0064F001  8B EC                     MOV EBP,ESP
0064F003  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F006  33 C0                     XOR EAX,EAX
0064F008  B2 08                     MOV DL,0x8
LAB_0064f00a:
0064F00A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F011  75 0D                     JNZ 0x0064f020
0064F013  40                        INC EAX
0064F014  83 F8 03                  CMP EAX,0x3
0064F017  7C F1                     JL 0x0064f00a
0064F019  B8 01 00 00 00            MOV EAX,0x1
0064F01E  5D                        POP EBP
0064F01F  C3                        RET
LAB_0064f020:
0064F020  33 C0                     XOR EAX,EAX
0064F022  5D                        POP EBP
0064F023  C3                        RET
