FUN_0064e680:
0064E680  55                        PUSH EBP
0064E681  8B EC                     MOV EBP,ESP
0064E683  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E686  33 C0                     XOR EAX,EAX
0064E688  B2 08                     MOV DL,0x8
LAB_0064e68a:
0064E68A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E691  75 0D                     JNZ 0x0064e6a0
0064E693  40                        INC EAX
0064E694  83 F8 02                  CMP EAX,0x2
0064E697  7C F1                     JL 0x0064e68a
0064E699  B8 01 00 00 00            MOV EAX,0x1
0064E69E  5D                        POP EBP
0064E69F  C3                        RET
LAB_0064e6a0:
0064E6A0  33 C0                     XOR EAX,EAX
0064E6A2  5D                        POP EBP
0064E6A3  C3                        RET
