FUN_0058e440:
0058E440  55                        PUSH EBP
0058E441  8B EC                     MOV EBP,ESP
0058E443  83 EC 08                  SUB ESP,0x8
0058E446  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
0058E44A  66 8B 51 43               MOV DX,word ptr [ECX + 0x43]
0058E44E  66 8B 49 45               MOV CX,word ptr [ECX + 0x45]
0058E452  53                        PUSH EBX
0058E453  56                        PUSH ESI
0058E454  57                        PUSH EDI
0058E455  8D 59 F4                  LEA EBX,[ECX + -0xc]
0058E458  83 C1 0C                  ADD ECX,0xc
0058E45B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0058E45E  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
0058E462  8D 70 E4                  LEA ESI,[EAX + -0x1c]
0058E465  8D 7A F4                  LEA EDI,[EDX + -0xc]
0058E468  83 C0 1C                  ADD EAX,0x1c
0058E46B  83 C2 0C                  ADD EDX,0xc
0058E46E  66 3B CE                  CMP CX,SI
0058E471  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0058E474  7C 05                     JL 0x0058e47b
0058E476  66 3B C8                  CMP CX,AX
0058E479  7E 1B                     JLE 0x0058e496
LAB_0058e47b:
0058E47B  66 8B 5D 14               MOV BX,word ptr [EBP + 0x14]
0058E47F  66 3B DE                  CMP BX,SI
0058E482  7C 05                     JL 0x0058e489
0058E484  66 3B D8                  CMP BX,AX
0058E487  7E 0A                     JLE 0x0058e493
LAB_0058e489:
0058E489  66 3B CE                  CMP CX,SI
0058E48C  7F 62                     JG 0x0058e4f0
0058E48E  66 3B D8                  CMP BX,AX
0058E491  7C 5D                     JL 0x0058e4f0
LAB_0058e493:
0058E493  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0058e496:
0058E496  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
0058E49A  66 3B CF                  CMP CX,DI
0058E49D  7C 05                     JL 0x0058e4a4
0058E49F  66 3B CA                  CMP CX,DX
0058E4A2  7E 18                     JLE 0x0058e4bc
LAB_0058e4a4:
0058E4A4  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
0058E4A8  66 3B C7                  CMP AX,DI
0058E4AB  7C 05                     JL 0x0058e4b2
0058E4AD  66 3B C2                  CMP AX,DX
0058E4B0  7E 0A                     JLE 0x0058e4bc
LAB_0058e4b2:
0058E4B2  66 3B CF                  CMP CX,DI
0058E4B5  7F 39                     JG 0x0058e4f0
0058E4B7  66 3B C2                  CMP AX,DX
0058E4BA  7C 34                     JL 0x0058e4f0
LAB_0058e4bc:
0058E4BC  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
0058E4C0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0058E4C3  66 3B CB                  CMP CX,BX
0058E4C6  7C 05                     JL 0x0058e4cd
0058E4C8  66 3B CA                  CMP CX,DX
0058E4CB  7E 18                     JLE 0x0058e4e5
LAB_0058e4cd:
0058E4CD  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
0058E4D1  66 3B C3                  CMP AX,BX
0058E4D4  7C 05                     JL 0x0058e4db
0058E4D6  66 3B C2                  CMP AX,DX
0058E4D9  7E 0A                     JLE 0x0058e4e5
LAB_0058e4db:
0058E4DB  66 3B CB                  CMP CX,BX
0058E4DE  7F 10                     JG 0x0058e4f0
0058E4E0  66 3B C2                  CMP AX,DX
0058E4E3  7C 0B                     JL 0x0058e4f0
LAB_0058e4e5:
0058E4E5  5F                        POP EDI
0058E4E6  5E                        POP ESI
0058E4E7  33 C0                     XOR EAX,EAX
0058E4E9  5B                        POP EBX
0058E4EA  8B E5                     MOV ESP,EBP
0058E4EC  5D                        POP EBP
0058E4ED  C2 18 00                  RET 0x18
LAB_0058e4f0:
0058E4F0  5F                        POP EDI
0058E4F1  5E                        POP ESI
0058E4F2  83 C8 FF                  OR EAX,0xffffffff
0058E4F5  5B                        POP EBX
0058E4F6  8B E5                     MOV ESP,EBP
0058E4F8  5D                        POP EBP
0058E4F9  C2 18 00                  RET 0x18
