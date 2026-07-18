FUN_0067bba0:
0067BBA0  55                        PUSH EBP
0067BBA1  8B EC                     MOV EBP,ESP
0067BBA3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0067BBA6  53                        PUSH EBX
0067BBA7  56                        PUSH ESI
0067BBA8  33 C9                     XOR ECX,ECX
0067BBAA  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
0067BBAD  57                        PUSH EDI
0067BBAE  85 F6                     TEST ESI,ESI
0067BBB0  7E 2D                     JLE 0x0067bbdf
0067BBB2  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0067BBB5  3B CE                     CMP ECX,ESI
LAB_0067bbb7:
0067BBB7  73 21                     JNC 0x0067bbda
0067BBB9  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0067BBBC  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0067BBBF  0F AF C1                  IMUL EAX,ECX
0067BBC2  03 C3                     ADD EAX,EBX
0067BBC4  85 C0                     TEST EAX,EAX
0067BBC6  74 12                     JZ 0x0067bbda
0067BBC8  66 83 38 00               CMP word ptr [EAX],0x0
0067BBCC  76 0C                     JBE 0x0067bbda
0067BBCE  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0067BBD1  85 DB                     TEST EBX,EBX
0067BBD3  7D 05                     JGE 0x0067bbda
0067BBD5  85 78 08                  TEST dword ptr [EAX + 0x8],EDI
0067BBD8  75 07                     JNZ 0x0067bbe1
LAB_0067bbda:
0067BBDA  41                        INC ECX
0067BBDB  3B CE                     CMP ECX,ESI
0067BBDD  7C D8                     JL 0x0067bbb7
LAB_0067bbdf:
0067BBDF  33 C0                     XOR EAX,EAX
LAB_0067bbe1:
0067BBE1  5F                        POP EDI
0067BBE2  5E                        POP ESI
0067BBE3  5B                        POP EBX
0067BBE4  5D                        POP EBP
0067BBE5  C3                        RET
