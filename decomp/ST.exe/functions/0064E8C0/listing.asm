FUN_0064e8c0:
0064E8C0  55                        PUSH EBP
0064E8C1  8B EC                     MOV EBP,ESP
0064E8C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E8C6  33 C0                     XOR EAX,EAX
0064E8C8  B2 08                     MOV DL,0x8
LAB_0064e8ca:
0064E8CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E8D1  75 1B                     JNZ 0x0064e8ee
0064E8D3  40                        INC EAX
0064E8D4  83 F8 04                  CMP EAX,0x4
0064E8D7  7C F1                     JL 0x0064e8ca
0064E8D9  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064E8DC  85 C0                     TEST EAX,EAX
0064E8DE  7C 0E                     JL 0x0064e8ee
0064E8E0  3D 00 01 00 00            CMP EAX,0x100
0064E8E5  7D 07                     JGE 0x0064e8ee
0064E8E7  B8 01 00 00 00            MOV EAX,0x1
0064E8EC  5D                        POP EBP
0064E8ED  C3                        RET
LAB_0064e8ee:
0064E8EE  33 C0                     XOR EAX,EAX
0064E8F0  5D                        POP EBP
0064E8F1  C3                        RET
