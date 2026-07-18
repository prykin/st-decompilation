FUN_0064e7c0:
0064E7C0  55                        PUSH EBP
0064E7C1  8B EC                     MOV EBP,ESP
0064E7C3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E7C6  33 C0                     XOR EAX,EAX
0064E7C8  B2 08                     MOV DL,0x8
LAB_0064e7ca:
0064E7CA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E7D1  75 2E                     JNZ 0x0064e801
0064E7D3  40                        INC EAX
0064E7D4  83 F8 03                  CMP EAX,0x3
0064E7D7  7C F1                     JL 0x0064e7ca
0064E7D9  66 83 39 04               CMP word ptr [ECX],0x4
0064E7DD  7D 1A                     JGE 0x0064e7f9
0064E7DF  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064E7E2  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
LAB_0064e7e5:
0064E7E5  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064E7E8  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0064E7EB  3B D0                     CMP EDX,EAX
0064E7ED  7D 03                     JGE 0x0064e7f2
0064E7EF  89 41 14                  MOV dword ptr [ECX + 0x14],EAX
LAB_0064e7f2:
0064E7F2  B8 01 00 00 00            MOV EAX,0x1
0064E7F7  5D                        POP EBP
0064E7F8  C3                        RET
LAB_0064e7f9:
0064E7F9  38 91 D3 00 00 00         CMP byte ptr [ECX + 0xd3],DL
0064E7FF  74 E4                     JZ 0x0064e7e5
LAB_0064e801:
0064E801  33 C0                     XOR EAX,EAX
0064E803  5D                        POP EBP
0064E804  C3                        RET
