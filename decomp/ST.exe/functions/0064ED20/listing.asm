FUN_0064ed20:
0064ED20  55                        PUSH EBP
0064ED21  8B EC                     MOV EBP,ESP
0064ED23  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064ED26  33 C0                     XOR EAX,EAX
0064ED28  B2 08                     MOV DL,0x8
LAB_0064ed2a:
0064ED2A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ED31  75 28                     JNZ 0x0064ed5b
0064ED33  40                        INC EAX
0064ED34  83 F8 02                  CMP EAX,0x2
0064ED37  7C F1                     JL 0x0064ed2a
0064ED39  B8 02 00 00 00            MOV EAX,0x2
0064ED3E  B2 0A                     MOV DL,0xa
LAB_0064ed40:
0064ED40  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ED47  75 12                     JNZ 0x0064ed5b
0064ED49  40                        INC EAX
0064ED4A  83 F8 03                  CMP EAX,0x3
0064ED4D  7C F1                     JL 0x0064ed40
0064ED4F  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064ED52  33 C0                     XOR EAX,EAX
0064ED54  85 D2                     TEST EDX,EDX
0064ED56  0F 95 C0                  SETNZ AL
0064ED59  5D                        POP EBP
0064ED5A  C3                        RET
LAB_0064ed5b:
0064ED5B  33 C0                     XOR EAX,EAX
0064ED5D  5D                        POP EBP
0064ED5E  C3                        RET
