FUN_0064e700:
0064E700  55                        PUSH EBP
0064E701  8B EC                     MOV EBP,ESP
0064E703  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E706  33 C0                     XOR EAX,EAX
0064E708  B2 08                     MOV DL,0x8
LAB_0064e70a:
0064E70A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E711  75 0D                     JNZ 0x0064e720
0064E713  40                        INC EAX
0064E714  83 F8 02                  CMP EAX,0x2
0064E717  7C F1                     JL 0x0064e70a
0064E719  B8 01 00 00 00            MOV EAX,0x1
0064E71E  5D                        POP EBP
0064E71F  C3                        RET
LAB_0064e720:
0064E720  33 C0                     XOR EAX,EAX
0064E722  5D                        POP EBP
0064E723  C3                        RET
