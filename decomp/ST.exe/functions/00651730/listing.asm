FUN_00651730:
00651730  55                        PUSH EBP
00651731  8B EC                     MOV EBP,ESP
00651733  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651736  33 C0                     XOR EAX,EAX
00651738  B2 08                     MOV DL,0x8
LAB_0065173a:
0065173A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651741  75 12                     JNZ 0x00651755
00651743  40                        INC EAX
00651744  83 F8 03                  CMP EAX,0x3
00651747  7C F1                     JL 0x0065173a
00651749  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065174C  33 C0                     XOR EAX,EAX
0065174E  85 D2                     TEST EDX,EDX
00651750  0F 9D C0                  SETGE AL
00651753  5D                        POP EBP
00651754  C3                        RET
LAB_00651755:
00651755  33 C0                     XOR EAX,EAX
00651757  5D                        POP EBP
00651758  C3                        RET
