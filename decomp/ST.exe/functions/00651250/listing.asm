FUN_00651250:
00651250  55                        PUSH EBP
00651251  8B EC                     MOV EBP,ESP
00651253  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651256  33 C0                     XOR EAX,EAX
00651258  B2 08                     MOV DL,0x8
LAB_0065125a:
0065125A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651261  75 12                     JNZ 0x00651275
00651263  40                        INC EAX
00651264  83 F8 03                  CMP EAX,0x3
00651267  7C F1                     JL 0x0065125a
00651269  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065126C  33 C0                     XOR EAX,EAX
0065126E  85 D2                     TEST EDX,EDX
00651270  0F 9D C0                  SETGE AL
00651273  5D                        POP EBP
00651274  C3                        RET
LAB_00651275:
00651275  33 C0                     XOR EAX,EAX
00651277  5D                        POP EBP
00651278  C3                        RET
