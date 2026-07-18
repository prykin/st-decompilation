FUN_006e4370:
006E4370  55                        PUSH EBP
006E4371  8B EC                     MOV EBP,ESP
006E4373  83 EC 68                  SUB ESP,0x68
006E4376  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E437B  53                        PUSH EBX
006E437C  56                        PUSH ESI
006E437D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E4380  57                        PUSH EDI
006E4381  8D 55 9C                  LEA EDX,[EBP + -0x64]
006E4384  8D 4D 98                  LEA ECX,[EBP + -0x68]
006E4387  6A 00                     PUSH 0x0
006E4389  52                        PUSH EDX
006E438A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006E438D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E4393  E8 58 94 04 00            CALL 0x0072d7f0
006E4398  8B F0                     MOV ESI,EAX
006E439A  83 C4 08                  ADD ESP,0x8
006E439D  85 F6                     TEST ESI,ESI
006E439F  0F 85 86 00 00 00         JNZ 0x006e442b
006E43A5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E43A8  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006E43AB  85 C0                     TEST EAX,EAX
006E43AD  74 69                     JZ 0x006e4418
006E43AF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006E43B2  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006E43B5  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_006e43bc:
006E43BC  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
006E43BF  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E43C2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E43C5  3B D0                     CMP EDX,EAX
006E43C7  73 0F                     JNC 0x006e43d8
006E43C9  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006E43CC  0F AF C2                  IMUL EAX,EDX
006E43CF  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006E43D2  42                        INC EDX
006E43D3  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006E43D6  EB 02                     JMP 0x006e43da
LAB_006e43d8:
006E43D8  33 C0                     XOR EAX,EAX
LAB_006e43da:
006E43DA  85 C0                     TEST EAX,EAX
006E43DC  74 3A                     JZ 0x006e4418
006E43DE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006E43E1  8B 10                     MOV EDX,dword ptr [EAX]
006E43E3  3B D1                     CMP EDX,ECX
006E43E5  75 D5                     JNZ 0x006e43bc
006E43E7  8B 15 6C 6D 85 00         MOV EDX,dword ptr [0x00856d6c]
006E43ED  C7 45 E0 01 00 00 00      MOV dword ptr [EBP + -0x20],0x1
006E43F4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006E43F7  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E43FA  8D 55 DC                  LEA EDX,[EBP + -0x24]
006E43FD  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006E4400  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
006E4403  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
006E4406  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006E4409  52                        PUSH EDX
006E440A  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006E440D  51                        PUSH ECX
006E440E  52                        PUSH EDX
006E440F  8B CE                     MOV ECX,ESI
006E4411  E8 BA F9 FF FF            CALL 0x006e3dd0
006E4416  EB A4                     JMP 0x006e43bc
LAB_006e4418:
006E4418  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006E441B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E4420  33 C0                     XOR EAX,EAX
006E4422  5F                        POP EDI
006E4423  5E                        POP ESI
006E4424  5B                        POP EBX
006E4425  8B E5                     MOV ESP,EBP
006E4427  5D                        POP EBP
006E4428  C2 0C 00                  RET 0xc
LAB_006e442b:
006E442B  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
006E442E  68 4C E9 7E 00            PUSH 0x7ee94c
006E4433  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E4438  56                        PUSH ESI
006E4439  6A 00                     PUSH 0x0
006E443B  68 78 01 00 00            PUSH 0x178
006E4440  68 8C E7 7E 00            PUSH 0x7ee78c
006E4445  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E444B  E8 80 90 FC FF            CALL 0x006ad4d0
006E4450  83 C4 18                  ADD ESP,0x18
006E4453  85 C0                     TEST EAX,EAX
006E4455  74 01                     JZ 0x006e4458
006E4457  CC                        INT3
LAB_006e4458:
006E4458  68 79 01 00 00            PUSH 0x179
006E445D  68 8C E7 7E 00            PUSH 0x7ee78c
006E4462  6A 00                     PUSH 0x0
006E4464  56                        PUSH ESI
006E4465  E8 D6 19 FC FF            CALL 0x006a5e40
006E446A  8B C6                     MOV EAX,ESI
006E446C  5F                        POP EDI
006E446D  5E                        POP ESI
006E446E  5B                        POP EBX
006E446F  8B E5                     MOV ESP,EBP
006E4471  5D                        POP EBP
006E4472  C2 0C 00                  RET 0xc
