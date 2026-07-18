FUN_0043e460:
0043E460  55                        PUSH EBP
0043E461  8B EC                     MOV EBP,ESP
0043E463  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0043E467  53                        PUSH EBX
0043E468  56                        PUSH ESI
0043E469  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043E46C  57                        PUSH EDI
0043E46D  33 F6                     XOR ESI,ESI
0043E46F  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043E472  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043E475  C1 E1 04                  SHL ECX,0x4
0043E478  03 C8                     ADD ECX,EAX
0043E47A  33 C0                     XOR EAX,EAX
0043E47C  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0043E47F  8B 3C 4D 29 4E 7F 00      MOV EDI,dword ptr [ECX*0x2 + 0x7f4e29]
0043E486  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0043E489  85 DB                     TEST EBX,EBX
0043E48B  7E 23                     JLE 0x0043e4b0
LAB_0043e48d:
0043E48D  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
0043E490  8B 0C B2                  MOV ECX,dword ptr [EDX + ESI*0x4]
0043E493  85 C9                     TEST ECX,ECX
0043E495  74 10                     JZ 0x0043e4a7
0043E497  8B 01                     MOV EAX,dword ptr [ECX]
0043E499  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
0043E49F  83 F8 01                  CMP EAX,0x1
0043E4A2  75 03                     JNZ 0x0043e4a7
0043E4A4  FF 45 08                  INC dword ptr [EBP + 0x8]
LAB_0043e4a7:
0043E4A7  46                        INC ESI
0043E4A8  3B F3                     CMP ESI,EBX
0043E4AA  7C E1                     JL 0x0043e48d
0043E4AC  66 8B 45 08               MOV AX,word ptr [EBP + 0x8]
LAB_0043e4b0:
0043E4B0  5F                        POP EDI
0043E4B1  5E                        POP ESI
0043E4B2  5B                        POP EBX
0043E4B3  5D                        POP EBP
0043E4B4  C2 04 00                  RET 0x4
