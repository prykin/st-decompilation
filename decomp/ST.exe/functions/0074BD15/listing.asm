FUN_0074bd15:
0074BD15  55                        PUSH EBP
0074BD16  8B EC                     MOV EBP,ESP
0074BD18  83 EC 10                  SUB ESP,0x10
0074BD1B  53                        PUSH EBX
0074BD1C  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0074BD1F  56                        PUSH ESI
0074BD20  57                        PUSH EDI
0074BD21  BE A8 1D 7A 00            MOV ESI,0x7a1da8
0074BD26  8B FB                     MOV EDI,EBX
0074BD28  A5                        MOVSD ES:EDI,ESI
0074BD29  A5                        MOVSD ES:EDI,ESI
0074BD2A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074BD2D  33 D2                     XOR EDX,EDX
0074BD2F  A5                        MOVSD ES:EDI,ESI
0074BD30  A5                        MOVSD ES:EDI,ESI
0074BD31  0F B7 08                  MOVZX ECX,word ptr [EAX]
0074BD34  8D 7B 10                  LEA EDI,[EBX + 0x10]
0074BD37  8D 75 F0                  LEA ESI,[EBP + -0x10]
0074BD3A  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
0074BD3E  66 C7 45 F6 10 00         MOV word ptr [EBP + -0xa],0x10
0074BD44  C7 45 F8 80 00 00 AA      MOV dword ptr [EBP + -0x8],0xaa000080
0074BD4B  C7 45 FC 00 38 9B 71      MOV dword ptr [EBP + -0x4],0x719b3800
0074BD52  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0074BD55  6A 01                     PUSH 0x1
0074BD57  A5                        MOVSD ES:EDI,ESI
0074BD58  A5                        MOVSD ES:EDI,ESI
0074BD59  A5                        MOVSD ES:EDI,ESI
0074BD5A  A5                        MOVSD ES:EDI,ESI
0074BD5B  8D 7B 2C                  LEA EDI,[EBX + 0x2c]
0074BD5E  BE 98 1D 7A 00            MOV ESI,0x7a1d98
0074BD63  A5                        MOVSD ES:EDI,ESI
0074BD64  A5                        MOVSD ES:EDI,ESI
0074BD65  A5                        MOVSD ES:EDI,ESI
0074BD66  A5                        MOVSD ES:EDI,ESI
0074BD67  39 55 10                  CMP dword ptr [EBP + 0x10],EDX
0074BD6A  5F                        POP EDI
0074BD6B  89 7B 20                  MOV dword ptr [EBX + 0x20],EDI
0074BD6E  89 53 24                  MOV dword ptr [EBX + 0x24],EDX
0074BD71  0F B7 48 0C               MOVZX ECX,word ptr [EAX + 0xc]
0074BD75  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
0074BD78  89 53 3C                  MOV dword ptr [EBX + 0x3c],EDX
0074BD7B  74 5A                     JZ 0x0074bdd7
0074BD7D  66 39 38                  CMP word ptr [EAX],DI
0074BD80  75 09                     JNZ 0x0074bd8b
0074BD82  C7 43 40 12 00 00 00      MOV dword ptr [EBX + 0x40],0x12
0074BD89  EB 0A                     JMP 0x0074bd95
LAB_0074bd8b:
0074BD8B  0F B7 40 10               MOVZX EAX,word ptr [EAX + 0x10]
0074BD8F  83 C0 12                  ADD EAX,0x12
0074BD92  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
LAB_0074bd95:
0074BD95  FF 73 40                  PUSH dword ptr [EBX + 0x40]
0074BD98  FF 15 D8 C0 85 00         CALL dword ptr [0x0085c0d8]
0074BD9E  85 C0                     TEST EAX,EAX
0074BDA0  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
0074BDA3  75 07                     JNZ 0x0074bdac
0074BDA5  B8 0E 00 07 80            MOV EAX,0x8007000e
0074BDAA  EB 2D                     JMP 0x0074bdd9
LAB_0074bdac:
0074BDAC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074BDAF  66 39 3E                  CMP word ptr [ESI],DI
0074BDB2  75 10                     JNZ 0x0074bdc4
0074BDB4  8B F8                     MOV EDI,EAX
0074BDB6  A5                        MOVSD ES:EDI,ESI
0074BDB7  A5                        MOVSD ES:EDI,ESI
0074BDB8  A5                        MOVSD ES:EDI,ESI
0074BDB9  A5                        MOVSD ES:EDI,ESI
0074BDBA  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
0074BDBD  66 83 60 10 00            AND word ptr [EAX + 0x10],0x0
0074BDC2  EB 13                     JMP 0x0074bdd7
LAB_0074bdc4:
0074BDC4  8B 4B 40                  MOV ECX,dword ptr [EBX + 0x40]
0074BDC7  8B F8                     MOV EDI,EAX
0074BDC9  8B C1                     MOV EAX,ECX
0074BDCB  C1 E9 02                  SHR ECX,0x2
0074BDCE  F3 A5                     MOVSD.REP ES:EDI,ESI
0074BDD0  8B C8                     MOV ECX,EAX
0074BDD2  83 E1 03                  AND ECX,0x3
0074BDD5  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0074bdd7:
0074BDD7  33 C0                     XOR EAX,EAX
LAB_0074bdd9:
0074BDD9  5F                        POP EDI
0074BDDA  5E                        POP ESI
0074BDDB  5B                        POP EBX
0074BDDC  C9                        LEAVE
0074BDDD  C2 0C 00                  RET 0xc
