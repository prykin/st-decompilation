FUN_0052a6f0:
0052A6F0  55                        PUSH EBP
0052A6F1  8B EC                     MOV EBP,ESP
0052A6F3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0052A6F6  33 C9                     XOR ECX,ECX
0052A6F8  33 C0                     XOR EAX,EAX
0052A6FA  66 8B 4A 14               MOV CX,word ptr [EDX + 0x14]
0052A6FE  2B C8                     SUB ECX,EAX
0052A700  74 0C                     JZ 0x0052a70e
0052A702  83 E9 02                  SUB ECX,0x2
0052A705  75 0C                     JNZ 0x0052a713
0052A707  B8 01 00 00 00            MOV EAX,0x1
0052A70C  5D                        POP EBP
0052A70D  C3                        RET
LAB_0052a70e:
0052A70E  B8 02 00 00 00            MOV EAX,0x2
LAB_0052a713:
0052A713  5D                        POP EBP
0052A714  C3                        RET
