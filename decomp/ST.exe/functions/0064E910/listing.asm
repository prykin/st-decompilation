FUN_0064e910:
0064E910  55                        PUSH EBP
0064E911  8B EC                     MOV EBP,ESP
0064E913  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E916  33 C0                     XOR EAX,EAX
0064E918  B2 08                     MOV DL,0x8
LAB_0064e91a:
0064E91A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E921  75 1B                     JNZ 0x0064e93e
0064E923  40                        INC EAX
0064E924  83 F8 02                  CMP EAX,0x2
0064E927  7C F1                     JL 0x0064e91a
0064E929  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0064E92C  85 C0                     TEST EAX,EAX
0064E92E  7C 0E                     JL 0x0064e93e
0064E930  3D 00 01 00 00            CMP EAX,0x100
0064E935  7D 07                     JGE 0x0064e93e
0064E937  B8 01 00 00 00            MOV EAX,0x1
0064E93C  5D                        POP EBP
0064E93D  C3                        RET
LAB_0064e93e:
0064E93E  33 C0                     XOR EAX,EAX
0064E940  5D                        POP EBP
0064E941  C3                        RET
