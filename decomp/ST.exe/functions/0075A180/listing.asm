FUN_0075a180:
0075A180  55                        PUSH EBP
0075A181  8B EC                     MOV EBP,ESP
0075A183  83 EC 20                  SUB ESP,0x20
0075A186  53                        PUSH EBX
0075A187  56                        PUSH ESI
0075A188  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075A18B  33 DB                     XOR EBX,EBX
0075A18D  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075A190  8B 86 2A 01 00 00         MOV EAX,dword ptr [ESI + 0x12a]
0075A196  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0075A199  8B 8E 96 01 00 00         MOV ECX,dword ptr [ESI + 0x196]
0075A19F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0075A1A2  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
0075A1A8  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0075A1AB  85 D2                     TEST EDX,EDX
0075A1AD  0F 8E 07 01 00 00         JLE 0x0075a2ba
0075A1B3  8D 50 0C                  LEA EDX,[EAX + 0xc]
0075A1B6  8D 41 08                  LEA EAX,[ECX + 0x8]
0075A1B9  57                        PUSH EDI
0075A1BA  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0075A1BD  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075A1C0  EB 09                     JMP 0x0075a1cb
LAB_0075a1c2:
0075A1C2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0075A1C5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0075A1C8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0075a1cb:
0075A1CB  8B 42 18                  MOV EAX,dword ptr [EDX + 0x18]
0075A1CE  0F AF 02                  IMUL EAX,dword ptr [EDX]
0075A1D1  99                        CDQ
0075A1D2  F7 BE 2A 01 00 00         IDIV dword ptr [ESI + 0x12a]
0075A1D8  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0075A1DB  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0075A1DE  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
0075A1E1  8B 3E                     MOV EDI,dword ptr [ESI]
0075A1E3  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0075A1E6  83 C6 02                  ADD ESI,0x2
0075A1E9  8B 14 9A                  MOV EDX,dword ptr [EDX + EBX*0x4]
0075A1EC  8B 0C 99                  MOV ECX,dword ptr [ECX + EBX*0x4]
0075A1EF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0075A1F2  0F AF F0                  IMUL ESI,EAX
0075A1F5  85 F6                     TEST ESI,ESI
0075A1F7  7E 31                     JLE 0x0075a22a
0075A1F9  8B DF                     MOV EBX,EDI
0075A1FB  8B D1                     MOV EDX,ECX
0075A1FD  2B D9                     SUB EBX,ECX
0075A1FF  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075A202  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0075A205  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0075A208  2B D9                     SUB EBX,ECX
LAB_0075a20a:
0075A20A  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0075A20D  83 C2 04                  ADD EDX,0x4
0075A210  8B 74 16 FC               MOV ESI,dword ptr [ESI + EDX*0x1 + -0x4]
0075A214  89 72 FC                  MOV dword ptr [EDX + -0x4],ESI
0075A217  89 74 13 FC               MOV dword ptr [EBX + EDX*0x1 + -0x4],ESI
0075A21B  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
0075A21E  4E                        DEC ESI
0075A21F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0075A222  75 E6                     JNZ 0x0075a20a
0075A224  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075A227  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0075a22a:
0075A22A  8D 34 00                  LEA ESI,[EAX + EAX*0x1]
0075A22D  85 F6                     TEST ESI,ESI
0075A22F  7E 40                     JLE 0x0075a271
0075A231  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0075A234  8B F0                     MOV ESI,EAX
0075A236  0F AF F2                  IMUL ESI,EDX
0075A239  83 C2 FE                  ADD EDX,-0x2
0075A23C  8B DF                     MOV EBX,EDI
0075A23E  0F AF D0                  IMUL EDX,EAX
0075A241  8D 34 B1                  LEA ESI,[ECX + ESI*0x4]
0075A244  2B D9                     SUB EBX,ECX
0075A246  8D 14 97                  LEA EDX,[EDI + EDX*0x4]
0075A249  2B CF                     SUB ECX,EDI
0075A24B  8D 3C 00                  LEA EDI,[EAX + EAX*0x1]
0075A24E  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
LAB_0075a251:
0075A251  8B 3C 1E                  MOV EDI,dword ptr [ESI + EBX*0x1]
0075A254  83 C6 04                  ADD ESI,0x4
0075A257  89 3C 11                  MOV dword ptr [ECX + EDX*0x1],EDI
0075A25A  8B 3A                     MOV EDI,dword ptr [EDX]
0075A25C  89 7E FC                  MOV dword ptr [ESI + -0x4],EDI
0075A25F  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
0075A262  83 C2 04                  ADD EDX,0x4
0075A265  4F                        DEC EDI
0075A266  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0075A269  75 E6                     JNZ 0x0075a251
0075A26B  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0075A26E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0075a271:
0075A271  85 C0                     TEST EAX,EAX
0075A273  7E 20                     JLE 0x0075a295
0075A275  8D 34 85 00 00 00 00      LEA ESI,[EAX*0x4 + 0x0]
0075A27C  33 C9                     XOR ECX,ECX
0075A27E  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0075A281  8B F0                     MOV ESI,EAX
LAB_0075a283:
0075A283  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0075A286  8B C1                     MOV EAX,ECX
0075A288  2B C7                     SUB EAX,EDI
0075A28A  8B 3A                     MOV EDI,dword ptr [EDX]
0075A28C  83 C1 04                  ADD ECX,0x4
0075A28F  4E                        DEC ESI
0075A290  89 3C 10                  MOV dword ptr [EAX + EDX*0x1],EDI
0075A293  75 EE                     JNZ 0x0075a283
LAB_0075a295:
0075A295  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0075A298  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0075A29B  83 C2 04                  ADD EDX,0x4
0075A29E  43                        INC EBX
0075A29F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0075A2A2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0075A2A5  83 C1 54                  ADD ECX,0x54
0075A2A8  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0075A2AB  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
0075A2AE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0075A2B1  3B D8                     CMP EBX,EAX
0075A2B3  0F 8C 09 FF FF FF         JL 0x0075a1c2
0075A2B9  5F                        POP EDI
LAB_0075a2ba:
0075A2BA  5E                        POP ESI
0075A2BB  5B                        POP EBX
0075A2BC  8B E5                     MOV ESP,EBP
0075A2BE  5D                        POP EBP
0075A2BF  C2 04 00                  RET 0x4
