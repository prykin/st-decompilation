FUN_0064f4c0:
0064F4C0  55                        PUSH EBP
0064F4C1  8B EC                     MOV EBP,ESP
0064F4C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F4C6  33 C0                     XOR EAX,EAX
0064F4C8  B2 08                     MOV DL,0x8
LAB_0064f4ca:
0064F4CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F4D1  75 13                     JNZ 0x0064f4e6
0064F4D3  40                        INC EAX
0064F4D4  83 F8 01                  CMP EAX,0x1
0064F4D7  7C F1                     JL 0x0064f4ca
0064F4D9  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0064F4DC  33 C0                     XOR EAX,EAX
0064F4DE  83 FA 02                  CMP EDX,0x2
0064F4E1  0F 9E C0                  SETLE AL
0064F4E4  5D                        POP EBP
0064F4E5  C3                        RET
LAB_0064f4e6:
0064F4E6  33 C0                     XOR EAX,EAX
0064F4E8  5D                        POP EBP
0064F4E9  C3                        RET
