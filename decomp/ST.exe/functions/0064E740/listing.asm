FUN_0064e740:
0064E740  55                        PUSH EBP
0064E741  8B EC                     MOV EBP,ESP
0064E743  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E746  33 C0                     XOR EAX,EAX
0064E748  B2 08                     MOV DL,0x8
LAB_0064e74a:
0064E74A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E751  75 0D                     JNZ 0x0064e760
0064E753  40                        INC EAX
0064E754  83 F8 01                  CMP EAX,0x1
0064E757  7C F1                     JL 0x0064e74a
0064E759  B8 01 00 00 00            MOV EAX,0x1
0064E75E  5D                        POP EBP
0064E75F  C3                        RET
LAB_0064e760:
0064E760  33 C0                     XOR EAX,EAX
0064E762  5D                        POP EBP
0064E763  C3                        RET
