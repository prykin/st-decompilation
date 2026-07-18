FUN_0064f0c0:
0064F0C0  55                        PUSH EBP
0064F0C1  8B EC                     MOV EBP,ESP
0064F0C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F0C6  33 C0                     XOR EAX,EAX
0064F0C8  B2 08                     MOV DL,0x8
LAB_0064f0ca:
0064F0CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F0D1  75 28                     JNZ 0x0064f0fb
0064F0D3  40                        INC EAX
0064F0D4  83 F8 02                  CMP EAX,0x2
0064F0D7  7C F1                     JL 0x0064f0ca
0064F0D9  B8 02 00 00 00            MOV EAX,0x2
0064F0DE  B2 0A                     MOV DL,0xa
LAB_0064f0e0:
0064F0E0  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F0E7  75 12                     JNZ 0x0064f0fb
0064F0E9  40                        INC EAX
0064F0EA  83 F8 03                  CMP EAX,0x3
0064F0ED  7C F1                     JL 0x0064f0e0
0064F0EF  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064F0F2  33 C0                     XOR EAX,EAX
0064F0F4  85 D2                     TEST EDX,EDX
0064F0F6  0F 95 C0                  SETNZ AL
0064F0F9  5D                        POP EBP
0064F0FA  C3                        RET
LAB_0064f0fb:
0064F0FB  33 C0                     XOR EAX,EAX
0064F0FD  5D                        POP EBP
0064F0FE  C3                        RET
