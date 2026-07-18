FUN_0064f470:
0064F470  55                        PUSH EBP
0064F471  8B EC                     MOV EBP,ESP
0064F473  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F476  53                        PUSH EBX
0064F477  33 C0                     XOR EAX,EAX
0064F479  B2 08                     MOV DL,0x8
LAB_0064f47b:
0064F47B  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F482  75 12                     JNZ 0x0064f496
0064F484  40                        INC EAX
0064F485  83 F8 04                  CMP EAX,0x4
0064F488  7C F1                     JL 0x0064f47b
0064F48A  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064F48D  B8 02 00 00 00            MOV EAX,0x2
0064F492  3B D0                     CMP EDX,EAX
0064F494  7E 05                     JLE 0x0064f49b
LAB_0064f496:
0064F496  33 C0                     XOR EAX,EAX
0064F498  5B                        POP EBX
0064F499  5D                        POP EBP
0064F49A  C3                        RET
LAB_0064f49b:
0064F49B  8B 59 14                  MOV EBX,dword ptr [ECX + 0x14]
0064F49E  33 D2                     XOR EDX,EDX
0064F4A0  3B D8                     CMP EBX,EAX
0064F4A2  5B                        POP EBX
0064F4A3  0F 9E C2                  SETLE DL
0064F4A6  8B C2                     MOV EAX,EDX
0064F4A8  5D                        POP EBP
0064F4A9  C3                        RET
