FUN_0064f360:
0064F360  55                        PUSH EBP
0064F361  8B EC                     MOV EBP,ESP
0064F363  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F366  33 C0                     XOR EAX,EAX
0064F368  BA 08 00 00 00            MOV EDX,0x8
LAB_0064f36d:
0064F36D  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F374  75 18                     JNZ 0x0064f38e
0064F376  40                        INC EAX
0064F377  83 F8 03                  CMP EAX,0x3
0064F37A  7C F1                     JL 0x0064f36d
0064F37C  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064F37F  85 C0                     TEST EAX,EAX
0064F381  7C 0B                     JL 0x0064f38e
0064F383  3B C2                     CMP EAX,EDX
0064F385  7D 07                     JGE 0x0064f38e
0064F387  B8 01 00 00 00            MOV EAX,0x1
0064F38C  5D                        POP EBP
0064F38D  C3                        RET
LAB_0064f38e:
0064F38E  33 C0                     XOR EAX,EAX
0064F390  5D                        POP EBP
0064F391  C3                        RET
