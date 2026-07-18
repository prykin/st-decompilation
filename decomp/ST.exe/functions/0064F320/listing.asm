FUN_0064f320:
0064F320  55                        PUSH EBP
0064F321  8B EC                     MOV EBP,ESP
0064F323  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F326  33 C0                     XOR EAX,EAX
0064F328  B2 08                     MOV DL,0x8
LAB_0064f32a:
0064F32A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F331  75 0D                     JNZ 0x0064f340
0064F333  40                        INC EAX
0064F334  83 F8 03                  CMP EAX,0x3
0064F337  7C F1                     JL 0x0064f32a
0064F339  B8 01 00 00 00            MOV EAX,0x1
0064F33E  5D                        POP EBP
0064F33F  C3                        RET
LAB_0064f340:
0064F340  33 C0                     XOR EAX,EAX
0064F342  5D                        POP EBP
0064F343  C3                        RET
