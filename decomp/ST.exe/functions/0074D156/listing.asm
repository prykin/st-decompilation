FUN_0074d156:
0074D156  55                        PUSH EBP
0074D157  8B EC                     MOV EBP,ESP
0074D159  83 EC 20                  SUB ESP,0x20
0074D15C  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074D160  53                        PUSH EBX
0074D161  56                        PUSH ESI
0074D162  57                        PUSH EDI
0074D163  8B F9                     MOV EDI,ECX
0074D165  74 4C                     JZ 0x0074d1b3
0074D167  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074D16A  8D 55 F0                  LEA EDX,[EBP + -0x10]
0074D16D  52                        PUSH EDX
0074D16E  50                        PUSH EAX
0074D16F  8B 08                     MOV ECX,dword ptr [EAX]
0074D171  FF 51 10                  CALL dword ptr [ECX + 0x10]
0074D174  85 C0                     TEST EAX,EAX
0074D176  7C 6B                     JL 0x0074d1e3
0074D178  8B BF 98 00 00 00         MOV EDI,dword ptr [EDI + 0x98]
0074D17E  8D 4D E0                  LEA ECX,[EBP + -0x20]
0074D181  51                        PUSH ECX
0074D182  8D 4D F0                  LEA ECX,[EBP + -0x10]
0074D185  8B 07                     MOV EAX,dword ptr [EDI]
0074D187  51                        PUSH ECX
0074D188  57                        PUSH EDI
0074D189  FF 50 0C                  CALL dword ptr [EAX + 0xc]
0074D18C  85 C0                     TEST EAX,EAX
0074D18E  7C 53                     JL 0x0074d1e3
0074D190  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0074D193  3B 45 E0                  CMP EAX,dword ptr [EBP + -0x20]
0074D196  7F 14                     JG 0x0074d1ac
0074D198  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0074D19B  3B 45 E4                  CMP EAX,dword ptr [EBP + -0x1c]
0074D19E  7F 0C                     JG 0x0074d1ac
0074D1A0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0074D1A3  3B 45 E8                  CMP EAX,dword ptr [EBP + -0x18]
0074D1A6  7F 04                     JG 0x0074d1ac
0074D1A8  33 C0                     XOR EAX,EAX
0074D1AA  EB 37                     JMP 0x0074d1e3
LAB_0074d1ac:
0074D1AC  B8 05 40 00 80            MOV EAX,0x80004005
0074D1B1  EB 30                     JMP 0x0074d1e3
LAB_0074d1b3:
0074D1B3  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0074D1B6  53                        PUSH EBX
0074D1B7  8B 03                     MOV EAX,dword ptr [EBX]
0074D1B9  FF 50 04                  CALL dword ptr [EAX + 0x4]
0074D1BC  8B 87 98 00 00 00         MOV EAX,dword ptr [EDI + 0x98]
0074D1C2  8D B7 98 00 00 00         LEA ESI,[EDI + 0x98]
0074D1C8  85 C0                     TEST EAX,EAX
0074D1CA  74 06                     JZ 0x0074d1d2
0074D1CC  8B 08                     MOV ECX,dword ptr [EAX]
0074D1CE  50                        PUSH EAX
0074D1CF  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074d1d2:
0074D1D2  8B BF 9C 00 00 00         MOV EDI,dword ptr [EDI + 0x9c]
0074D1D8  89 1E                     MOV dword ptr [ESI],EBX
0074D1DA  6A 00                     PUSH 0x0
0074D1DC  53                        PUSH EBX
0074D1DD  8B 07                     MOV EAX,dword ptr [EDI]
0074D1DF  57                        PUSH EDI
0074D1E0  FF 50 10                  CALL dword ptr [EAX + 0x10]
LAB_0074d1e3:
0074D1E3  5F                        POP EDI
0074D1E4  5E                        POP ESI
0074D1E5  5B                        POP EBX
0074D1E6  C9                        LEAVE
0074D1E7  C2 08 00                  RET 0x8
