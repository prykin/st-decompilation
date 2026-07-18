FUN_0064e960:
0064E960  55                        PUSH EBP
0064E961  8B EC                     MOV EBP,ESP
0064E963  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064E966  33 C0                     XOR EAX,EAX
0064E968  B2 08                     MOV DL,0x8
LAB_0064e96a:
0064E96A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064E971  75 19                     JNZ 0x0064e98c
0064E973  40                        INC EAX
0064E974  83 F8 02                  CMP EAX,0x2
0064E977  7C F1                     JL 0x0064e96a
0064E979  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0064E97C  85 C0                     TEST EAX,EAX
0064E97E  7C 0C                     JL 0x0064e98c
0064E980  83 F8 21                  CMP EAX,0x21
0064E983  7D 07                     JGE 0x0064e98c
0064E985  B8 01 00 00 00            MOV EAX,0x1
0064E98A  5D                        POP EBP
0064E98B  C3                        RET
LAB_0064e98c:
0064E98C  33 C0                     XOR EAX,EAX
0064E98E  5D                        POP EBP
0064E98F  C3                        RET
