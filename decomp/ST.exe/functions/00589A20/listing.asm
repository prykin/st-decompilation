FUN_00589a20:
00589A20  55                        PUSH EBP
00589A21  8B EC                     MOV EBP,ESP
00589A23  83 EC 08                  SUB ESP,0x8
00589A26  66 8B 41 41               MOV AX,word ptr [ECX + 0x41]
00589A2A  66 8B 51 43               MOV DX,word ptr [ECX + 0x43]
00589A2E  66 8B 49 45               MOV CX,word ptr [ECX + 0x45]
00589A32  53                        PUSH EBX
00589A33  56                        PUSH ESI
00589A34  57                        PUSH EDI
00589A35  8D 59 E4                  LEA EBX,[ECX + -0x1c]
00589A38  83 C1 1C                  ADD ECX,0x1c
00589A3B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00589A3E  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00589A42  8D 70 E4                  LEA ESI,[EAX + -0x1c]
00589A45  8D 7A E4                  LEA EDI,[EDX + -0x1c]
00589A48  83 C0 1C                  ADD EAX,0x1c
00589A4B  83 C2 1C                  ADD EDX,0x1c
00589A4E  66 3B CE                  CMP CX,SI
00589A51  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00589A54  7C 05                     JL 0x00589a5b
00589A56  66 3B C8                  CMP CX,AX
00589A59  7E 1B                     JLE 0x00589a76
LAB_00589a5b:
00589A5B  66 8B 5D 14               MOV BX,word ptr [EBP + 0x14]
00589A5F  66 3B DE                  CMP BX,SI
00589A62  7C 05                     JL 0x00589a69
00589A64  66 3B D8                  CMP BX,AX
00589A67  7E 0A                     JLE 0x00589a73
LAB_00589a69:
00589A69  66 3B CE                  CMP CX,SI
00589A6C  7F 62                     JG 0x00589ad0
00589A6E  66 3B D8                  CMP BX,AX
00589A71  7C 5D                     JL 0x00589ad0
LAB_00589a73:
00589A73  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00589a76:
00589A76  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00589A7A  66 3B CF                  CMP CX,DI
00589A7D  7C 05                     JL 0x00589a84
00589A7F  66 3B CA                  CMP CX,DX
00589A82  7E 18                     JLE 0x00589a9c
LAB_00589a84:
00589A84  66 8B 45 18               MOV AX,word ptr [EBP + 0x18]
00589A88  66 3B C7                  CMP AX,DI
00589A8B  7C 05                     JL 0x00589a92
00589A8D  66 3B C2                  CMP AX,DX
00589A90  7E 0A                     JLE 0x00589a9c
LAB_00589a92:
00589A92  66 3B CF                  CMP CX,DI
00589A95  7F 39                     JG 0x00589ad0
00589A97  66 3B C2                  CMP AX,DX
00589A9A  7C 34                     JL 0x00589ad0
LAB_00589a9c:
00589A9C  66 8B 4D 10               MOV CX,word ptr [EBP + 0x10]
00589AA0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00589AA3  66 3B CB                  CMP CX,BX
00589AA6  7C 05                     JL 0x00589aad
00589AA8  66 3B CA                  CMP CX,DX
00589AAB  7E 18                     JLE 0x00589ac5
LAB_00589aad:
00589AAD  66 8B 45 1C               MOV AX,word ptr [EBP + 0x1c]
00589AB1  66 3B C3                  CMP AX,BX
00589AB4  7C 05                     JL 0x00589abb
00589AB6  66 3B C2                  CMP AX,DX
00589AB9  7E 0A                     JLE 0x00589ac5
LAB_00589abb:
00589ABB  66 3B CB                  CMP CX,BX
00589ABE  7F 10                     JG 0x00589ad0
00589AC0  66 3B C2                  CMP AX,DX
00589AC3  7C 0B                     JL 0x00589ad0
LAB_00589ac5:
00589AC5  5F                        POP EDI
00589AC6  5E                        POP ESI
00589AC7  33 C0                     XOR EAX,EAX
00589AC9  5B                        POP EBX
00589ACA  8B E5                     MOV ESP,EBP
00589ACC  5D                        POP EBP
00589ACD  C2 18 00                  RET 0x18
LAB_00589ad0:
00589AD0  5F                        POP EDI
00589AD1  5E                        POP ESI
00589AD2  83 C8 FF                  OR EAX,0xffffffff
00589AD5  5B                        POP EBX
00589AD6  8B E5                     MOV ESP,EBP
00589AD8  5D                        POP EBP
00589AD9  C2 18 00                  RET 0x18
