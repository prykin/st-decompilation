FUN_0074ef87:
0074EF87  55                        PUSH EBP
0074EF88  8B EC                     MOV EBP,ESP
0074EF8A  83 EC 10                  SUB ESP,0x10
0074EF8D  53                        PUSH EBX
0074EF8E  56                        PUSH ESI
0074EF8F  8B F1                     MOV ESI,ECX
0074EF91  57                        PUSH EDI
0074EF92  8D 7E 1C                  LEA EDI,[ESI + 0x1c]
0074EF95  57                        PUSH EDI
0074EF96  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074EF9C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074EF9F  8D 55 F0                  LEA EDX,[EBP + -0x10]
0074EFA2  52                        PUSH EDX
0074EFA3  8D 55 F8                  LEA EDX,[EBP + -0x8]
0074EFA6  8B 08                     MOV ECX,dword ptr [EAX]
0074EFA8  52                        PUSH EDX
0074EFA9  50                        PUSH EAX
0074EFAA  FF 51 14                  CALL dword ptr [ECX + 0x14]
0074EFAD  8B D8                     MOV EBX,EAX
0074EFAF  85 DB                     TEST EBX,EBX
0074EFB1  7D 0B                     JGE 0x0074efbe
0074EFB3  57                        PUSH EDI
0074EFB4  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074EFBA  8B C3                     MOV EAX,EBX
0074EFBC  EB 25                     JMP 0x0074efe3
LAB_0074efbe:
0074EFBE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074EFC1  83 66 48 00               AND dword ptr [ESI + 0x48],0x0
0074EFC5  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0074EFC8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0074EFCB  89 46 3C                  MOV dword ptr [ESI + 0x3c],EAX
0074EFCE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074EFD1  89 46 40                  MOV dword ptr [ESI + 0x40],EAX
0074EFD4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074EFD7  57                        PUSH EDI
0074EFD8  89 46 44                  MOV dword ptr [ESI + 0x44],EAX
0074EFDB  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074EFE1  33 C0                     XOR EAX,EAX
LAB_0074efe3:
0074EFE3  5F                        POP EDI
0074EFE4  5E                        POP ESI
0074EFE5  5B                        POP EBX
0074EFE6  C9                        LEAVE
0074EFE7  C2 04 00                  RET 0x4
