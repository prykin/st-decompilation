FUN_0064ea60:
0064EA60  55                        PUSH EBP
0064EA61  8B EC                     MOV EBP,ESP
0064EA63  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EA66  33 C0                     XOR EAX,EAX
0064EA68  B2 08                     MOV DL,0x8
LAB_0064ea6a:
0064EA6A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EA71  75 19                     JNZ 0x0064ea8c
0064EA73  40                        INC EAX
0064EA74  83 F8 03                  CMP EAX,0x3
0064EA77  7C F1                     JL 0x0064ea6a
0064EA79  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0064EA7C  85 C0                     TEST EAX,EAX
0064EA7E  7C 0C                     JL 0x0064ea8c
0064EA80  83 F8 21                  CMP EAX,0x21
0064EA83  7D 07                     JGE 0x0064ea8c
0064EA85  B8 01 00 00 00            MOV EAX,0x1
0064EA8A  5D                        POP EBP
0064EA8B  C3                        RET
LAB_0064ea8c:
0064EA8C  33 C0                     XOR EAX,EAX
0064EA8E  5D                        POP EBP
0064EA8F  C3                        RET
