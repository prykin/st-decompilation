FUN_00651880:
00651880  55                        PUSH EBP
00651881  8B EC                     MOV EBP,ESP
00651883  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651886  33 C0                     XOR EAX,EAX
00651888  B2 08                     MOV DL,0x8
LAB_0065188a:
0065188A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651891  75 12                     JNZ 0x006518a5
00651893  40                        INC EAX
00651894  83 F8 09                  CMP EAX,0x9
00651897  7C F1                     JL 0x0065188a
00651899  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065189C  33 C0                     XOR EAX,EAX
0065189E  85 D2                     TEST EDX,EDX
006518A0  0F 9D C0                  SETGE AL
006518A3  5D                        POP EBP
006518A4  C3                        RET
LAB_006518a5:
006518A5  33 C0                     XOR EAX,EAX
006518A7  5D                        POP EBP
006518A8  C3                        RET
