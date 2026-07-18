FUN_00651120:
00651120  55                        PUSH EBP
00651121  8B EC                     MOV EBP,ESP
00651123  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00651126  33 C0                     XOR EAX,EAX
00651128  B2 08                     MOV DL,0x8
LAB_0065112a:
0065112A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651131  75 12                     JNZ 0x00651145
00651133  40                        INC EAX
00651134  83 F8 03                  CMP EAX,0x3
00651137  7C F1                     JL 0x0065112a
00651139  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065113C  33 C0                     XOR EAX,EAX
0065113E  85 D2                     TEST EDX,EDX
00651140  0F 9D C0                  SETGE AL
00651143  5D                        POP EBP
00651144  C3                        RET
LAB_00651145:
00651145  33 C0                     XOR EAX,EAX
00651147  5D                        POP EBP
00651148  C3                        RET
