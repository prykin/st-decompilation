FUN_0064eb20:
0064EB20  55                        PUSH EBP
0064EB21  8B EC                     MOV EBP,ESP
0064EB23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EB26  33 C0                     XOR EAX,EAX
0064EB28  B2 08                     MOV DL,0x8
LAB_0064eb2a:
0064EB2A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EB31  75 12                     JNZ 0x0064eb45
0064EB33  40                        INC EAX
0064EB34  83 F8 03                  CMP EAX,0x3
0064EB37  7C F1                     JL 0x0064eb2a
0064EB39  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064EB3C  33 C0                     XOR EAX,EAX
0064EB3E  85 D2                     TEST EDX,EDX
0064EB40  0F 9D C0                  SETGE AL
0064EB43  5D                        POP EBP
0064EB44  C3                        RET
LAB_0064eb45:
0064EB45  33 C0                     XOR EAX,EAX
0064EB47  5D                        POP EBP
0064EB48  C3                        RET
