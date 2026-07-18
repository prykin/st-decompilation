FUN_0064f3b0:
0064F3B0  55                        PUSH EBP
0064F3B1  8B EC                     MOV EBP,ESP
0064F3B3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F3B6  33 C0                     XOR EAX,EAX
0064F3B8  B2 08                     MOV DL,0x8
LAB_0064f3ba:
0064F3BA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F3C1  75 0D                     JNZ 0x0064f3d0
0064F3C3  40                        INC EAX
0064F3C4  83 F8 02                  CMP EAX,0x2
0064F3C7  7C F1                     JL 0x0064f3ba
0064F3C9  B8 01 00 00 00            MOV EAX,0x1
0064F3CE  5D                        POP EBP
0064F3CF  C3                        RET
LAB_0064f3d0:
0064F3D0  33 C0                     XOR EAX,EAX
0064F3D2  5D                        POP EBP
0064F3D3  C3                        RET
