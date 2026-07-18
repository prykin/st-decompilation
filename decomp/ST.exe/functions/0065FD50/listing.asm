FUN_0065fd50:
0065FD50  55                        PUSH EBP
0065FD51  8B EC                     MOV EBP,ESP
0065FD53  83 EC 0C                  SUB ESP,0xc
0065FD56  33 C0                     XOR EAX,EAX
0065FD58  56                        PUSH ESI
0065FD59  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0065FD5C  8B F1                     MOV ESI,ECX
0065FD5E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0065FD61  8D 4D F8                  LEA ECX,[EBP + -0x8]
0065FD64  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
0065FD68  89 86 A7 00 00 00         MOV dword ptr [ESI + 0xa7],EAX
0065FD6E  50                        PUSH EAX
0065FD6F  8D 55 F6                  LEA EDX,[EBP + -0xa]
0065FD72  51                        PUSH ECX
0065FD73  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0065FD76  8D 45 F4                  LEA EAX,[EBP + -0xc]
0065FD79  52                        PUSH EDX
0065FD7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0065FD7D  50                        PUSH EAX
0065FD7E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0065FD81  51                        PUSH ECX
0065FD82  52                        PUSH EDX
0065FD83  50                        PUSH EAX
0065FD84  E8 CB 4F DA FF            CALL 0x00404d54
0065FD89  83 C4 1C                  ADD ESP,0x1c
0065FD8C  85 C0                     TEST EAX,EAX
0065FD8E  74 3E                     JZ 0x0065fdce
0065FD90  66 8B 46 7D               MOV AX,word ptr [ESI + 0x7d]
0065FD94  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0065FD97  66 3D FE FF               CMP AX,0xfffe
0065FD9B  89 4D FA                  MOV dword ptr [EBP + -0x6],ECX
0065FD9E  74 2E                     JZ 0x0065fdce
0065FDA0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0065FDA6  85 C9                     TEST ECX,ECX
0065FDA8  74 24                     JZ 0x0065fdce
0065FDAA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
0065FDAD  50                        PUSH EAX
0065FDAE  52                        PUSH EDX
0065FDAF  E8 45 5F DA FF            CALL 0x00405cf9
0065FDB4  85 C0                     TEST EAX,EAX
0065FDB6  74 16                     JZ 0x0065fdce
0065FDB8  8B 10                     MOV EDX,dword ptr [EAX]
0065FDBA  8D 4D F4                  LEA ECX,[EBP + -0xc]
0065FDBD  51                        PUSH ECX
0065FDBE  6A 01                     PUSH 0x1
0065FDC0  8B C8                     MOV ECX,EAX
0065FDC2  FF 52 08                  CALL dword ptr [EDX + 0x8]
0065FDC5  33 C0                     XOR EAX,EAX
0065FDC7  5E                        POP ESI
0065FDC8  8B E5                     MOV ESP,EBP
0065FDCA  5D                        POP EBP
0065FDCB  C2 10 00                  RET 0x10
LAB_0065fdce:
0065FDCE  83 C8 FF                  OR EAX,0xffffffff
0065FDD1  5E                        POP ESI
0065FDD2  8B E5                     MOV ESP,EBP
0065FDD4  5D                        POP EBP
0065FDD5  C2 10 00                  RET 0x10
