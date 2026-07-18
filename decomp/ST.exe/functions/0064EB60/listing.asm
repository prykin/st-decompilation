FUN_0064eb60:
0064EB60  55                        PUSH EBP
0064EB61  8B EC                     MOV EBP,ESP
0064EB63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EB66  33 C0                     XOR EAX,EAX
0064EB68  B2 08                     MOV DL,0x8
LAB_0064eb6a:
0064EB6A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EB71  75 0D                     JNZ 0x0064eb80
0064EB73  40                        INC EAX
0064EB74  83 F8 02                  CMP EAX,0x2
0064EB77  7C F1                     JL 0x0064eb6a
0064EB79  B8 01 00 00 00            MOV EAX,0x1
0064EB7E  5D                        POP EBP
0064EB7F  C3                        RET
LAB_0064eb80:
0064EB80  33 C0                     XOR EAX,EAX
0064EB82  5D                        POP EBP
0064EB83  C3                        RET
