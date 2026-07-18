FUN_0064e9a0:
0064E9A0  55                        PUSH EBP
0064E9A1  8B EC                     MOV EBP,ESP
0064E9A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E9A6  33 C0                     XOR EAX,EAX
0064E9A8  B2 08                     MOV DL,0x8
LAB_0064e9aa:
0064E9AA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E9B1  75 2F                     JNZ 0x0064e9e2
0064E9B3  40                        INC EAX
0064E9B4  83 F8 01                  CMP EAX,0x1
0064E9B7  7C F1                     JL 0x0064e9aa
0064E9B9  B8 01 00 00 00            MOV EAX,0x1
0064E9BE  B2 0A                     MOV DL,0xa
LAB_0064e9c0:
0064E9C0  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E9C7  75 19                     JNZ 0x0064e9e2
0064E9C9  40                        INC EAX
0064E9CA  83 F8 02                  CMP EAX,0x2
0064E9CD  7C F1                     JL 0x0064e9c0
0064E9CF  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0064E9D2  85 C9                     TEST ECX,ECX
0064E9D4  7C 0C                     JL 0x0064e9e2
0064E9D6  83 F9 04                  CMP ECX,0x4
0064E9D9  7D 07                     JGE 0x0064e9e2
0064E9DB  B8 01 00 00 00            MOV EAX,0x1
0064E9E0  5D                        POP EBP
0064E9E1  C3                        RET
LAB_0064e9e2:
0064E9E2  33 C0                     XOR EAX,EAX
0064E9E4  5D                        POP EBP
0064E9E5  C3                        RET
