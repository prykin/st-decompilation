FUN_00578430:
00578430  55                        PUSH EBP
00578431  8B EC                     MOV EBP,ESP
00578433  83 EC 08                  SUB ESP,0x8
00578436  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0057843A  66 8B 51 43               MOV DX,word ptr [ECX + 0x43]
0057843E  66 8B 49 45               MOV CX,word ptr [ECX + 0x45]
00578442  53                        PUSH EBX
00578443  56                        PUSH ESI
00578444  57                        PUSH EDI
00578445  8D 59 E4                  LEA EBX,[ECX + -0x1c]
00578448  83 C1 1C                  ADD ECX,0x1c
0057844B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0057844E  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00578452  8D 70 E4                  LEA ESI,[EAX + -0x1c]
00578455  8D 7A E4                  LEA EDI,[EDX + -0x1c]
00578458  83 C0 1C                  ADD EAX,0x1c
0057845B  83 C2 1C                  ADD EDX,0x1c
0057845E  66 3B CE                  CMP CX,SI
00578461  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00578464  7C 05                     JL 0x0057846b
00578466  66 3B C8                  CMP CX,AX
00578469  7E 1B                     JLE 0x00578486
LAB_0057846b:
0057846B  66 8B 5D 14               MOV BX,word ptr [EBP + 0x14]
0057846F  66 3B DE                  CMP BX,SI
00578472  7C 05                     JL 0x00578479
00578474  66 3B D8                  CMP BX,AX
00578477  7E 0A                     JLE 0x00578483
LAB_00578479:
00578479  66 3B CE                  CMP CX,SI
0057847C  7F 62                     JG 0x005784e0
0057847E  66 3B D8                  CMP BX,AX
00578481  7C 5D                     JL 0x005784e0
LAB_00578483:
00578483  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00578486:
00578486  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0057848A  66 3B CF                  CMP CX,DI
0057848D  7C 05                     JL 0x00578494
0057848F  66 3B CA                  CMP CX,DX
00578492  7E 18                     JLE 0x005784ac
LAB_00578494:
00578494  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
00578498  66 3B C7                  CMP AX,DI
0057849B  7C 05                     JL 0x005784a2
0057849D  66 3B C2                  CMP AX,DX
005784A0  7E 0A                     JLE 0x005784ac
LAB_005784a2:
005784A2  66 3B CF                  CMP CX,DI
005784A5  7F 39                     JG 0x005784e0
005784A7  66 3B C2                  CMP AX,DX
005784AA  7C 34                     JL 0x005784e0
LAB_005784ac:
005784AC  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
005784B0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005784B3  66 3B CB                  CMP CX,BX
005784B6  7C 05                     JL 0x005784bd
005784B8  66 3B CA                  CMP CX,DX
005784BB  7E 18                     JLE 0x005784d5
LAB_005784bd:
005784BD  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
005784C1  66 3B C3                  CMP AX,BX
005784C4  7C 05                     JL 0x005784cb
005784C6  66 3B C2                  CMP AX,DX
005784C9  7E 0A                     JLE 0x005784d5
LAB_005784cb:
005784CB  66 3B CB                  CMP CX,BX
005784CE  7F 10                     JG 0x005784e0
005784D0  66 3B C2                  CMP AX,DX
005784D3  7C 0B                     JL 0x005784e0
LAB_005784d5:
005784D5  5F                        POP EDI
005784D6  5E                        POP ESI
005784D7  33 C0                     XOR EAX,EAX
005784D9  5B                        POP EBX
005784DA  8B E5                     MOV ESP,EBP
005784DC  5D                        POP EBP
005784DD  C2 18 00                  RET 0x18
LAB_005784e0:
005784E0  5F                        POP EDI
005784E1  5E                        POP ESI
005784E2  83 C8 FF                  OR EAX,0xffffffff
005784E5  5B                        POP EBX
005784E6  8B E5                     MOV ESP,EBP
005784E8  5D                        POP EBP
005784E9  C2 18 00                  RET 0x18
