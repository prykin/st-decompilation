FUN_0062d2d0:
0062D2D0  55                        PUSH EBP
0062D2D1  8B EC                     MOV EBP,ESP
0062D2D3  6A FF                     PUSH -0x1
0062D2D5  68 88 D0 79 00            PUSH 0x79d088
0062D2DA  68 64 D9 72 00            PUSH 0x72d964
0062D2DF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0062D2E5  50                        PUSH EAX
0062D2E6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0062D2ED  83 EC 38                  SUB ESP,0x38
0062D2F0  53                        PUSH EBX
0062D2F1  56                        PUSH ESI
0062D2F2  57                        PUSH EDI
0062D2F3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0062D2F6  8B F1                     MOV ESI,ECX
0062D2F8  89 75 BC                  MOV dword ptr [EBP + -0x44],ESI
0062D2FB  33 DB                     XOR EBX,EBX
0062D2FD  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
0062D300  8D 46 30                  LEA EAX,[ESI + 0x30]
0062D303  85 C0                     TEST EAX,EAX
0062D305  0F 84 3E 01 00 00         JZ 0x0062d449
0062D30B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0062D30E  8B 44 BE 30               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x30]
0062D312  3B C3                     CMP EAX,EBX
0062D314  0F 84 2F 01 00 00         JZ 0x0062d449
0062D31A  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0062D31D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0062D320  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0062D323  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062D326  C1 E0 03                  SHL EAX,0x3
0062D329  83 C0 03                  ADD EAX,0x3
0062D32C  24 FC                     AND AL,0xfc
0062D32E  E8 0D 07 10 00            CALL 0x0072da40
0062D333  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0062D336  8B C4                     MOV EAX,ESP
0062D338  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0062D33B  83 CA FF                  OR EDX,0xffffffff
0062D33E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0062D341  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0062D344  39 5D 1C                  CMP dword ptr [EBP + 0x1c],EBX
0062D347  74 09                     JZ 0x0062d352
0062D349  C7 45 CC 04 00 00 00      MOV dword ptr [EBP + -0x34],0x4
0062D350  EB 14                     JMP 0x0062d366
LAB_0062d352:
0062D352  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0062D359  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0062D360  0F AF CB                  IMUL ECX,EBX
0062D363  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
LAB_0062d366:
0062D366  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0062D369  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0062D36C  83 C9 FF                  OR ECX,0xffffffff
0062D36F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0062D372  33 DB                     XOR EBX,EBX
0062D374  39 5D C4                  CMP dword ptr [EBP + -0x3c],EBX
0062D377  0F 8E 86 00 00 00         JLE 0x0062d403
0062D37D  83 C0 24                  ADD EAX,0x24
0062D380  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0062D383  EB 03                     JMP 0x0062d388
LAB_0062d385:
0062D385  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0062d388:
0062D388  8B 44 BE 30               MOV EAX,dword ptr [ESI + EDI*0x4 + 0x30]
0062D38C  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0062D38F  73 0B                     JNC 0x0062d39c
0062D391  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0062D394  0F AF F3                  IMUL ESI,EBX
0062D397  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0062D39A  EB 02                     JMP 0x0062d39e
LAB_0062d39c:
0062D39C  33 F6                     XOR ESI,ESI
LAB_0062d39e:
0062D39E  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0062D3A1  52                        PUSH EDX
0062D3A2  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0062D3A5  50                        PUSH EAX
0062D3A6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062D3A9  51                        PUSH ECX
0062D3AA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0062D3AD  52                        PUSH EDX
0062D3AE  E8 DD FB 07 00            CALL 0x006acf90
0062D3B3  3B 45 CC                  CMP EAX,dword ptr [EBP + -0x34]
0062D3B6  7D 06                     JGE 0x0062d3be
0062D3B8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0062D3BB  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
LAB_0062d3be:
0062D3BE  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0062D3C1  85 C9                     TEST ECX,ECX
0062D3C3  75 0B                     JNZ 0x0062d3d0
0062D3C5  3B 45 D4                  CMP EAX,dword ptr [EBP + -0x2c]
0062D3C8  7D 06                     JGE 0x0062d3d0
0062D3CA  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0062D3CD  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
LAB_0062d3d0:
0062D3D0  B9 08 00 00 00            MOV ECX,0x8
0062D3D5  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0062D3D8  8D 7A DC                  LEA EDI,[EDX + -0x24]
0062D3DB  F3 A5                     MOVSD.REP ES:EDI,ESI
0062D3DD  8B CA                     MOV ECX,EDX
0062D3DF  89 41 FC                  MOV dword ptr [ECX + -0x4],EAX
0062D3E2  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0062D3E8  43                        INC EBX
0062D3E9  83 C1 28                  ADD ECX,0x28
0062D3EC  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
0062D3EF  3B 5D C4                  CMP EBX,dword ptr [EBP + -0x3c]
0062D3F2  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
0062D3F5  7C 8E                     JL 0x0062d385
0062D3F7  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0062D3FA  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0062D3FD  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0062D400  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_0062d403:
0062D403  85 C9                     TEST ECX,ECX
0062D405  7C 5B                     JL 0x0062d462
0062D407  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0062D40A  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0062D40D  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
0062D410  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0062D413  89 1A                     MOV dword ptr [EDX],EBX
0062D415  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0062D418  89 5A 04                  MOV dword ptr [EDX + 0x4],EBX
0062D41B  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0062D41E  89 5A 08                  MOV dword ptr [EDX + 0x8],EBX
0062D421  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0062D424  89 5A 0C                  MOV dword ptr [EDX + 0xc],EBX
0062D427  6A 01                     PUSH 0x1
0062D429  51                        PUSH ECX
0062D42A  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
0062D42D  51                        PUSH ECX
0062D42E  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0062D431  52                        PUSH EDX
0062D432  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0062D435  51                        PUSH ECX
0062D436  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0062D439  52                        PUSH EDX
LAB_0062d43a:
0062D43A  57                        PUSH EDI
0062D43B  8B CE                     MOV ECX,ESI
0062D43D  E8 E5 50 DD FF            CALL 0x00402527
0062D442  C7 45 D8 01 00 00 00      MOV dword ptr [EBP + -0x28],0x1
LAB_0062d449:
0062D449  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0062D44C  8D 65 AC                  LEA ESP,[EBP + -0x54]
0062D44F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0062D452  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0062D459  5F                        POP EDI
0062D45A  5E                        POP ESI
0062D45B  5B                        POP EBX
0062D45C  8B E5                     MOV ESP,EBP
0062D45E  5D                        POP EBP
0062D45F  C2 18 00                  RET 0x18
LAB_0062d462:
0062D462  85 D2                     TEST EDX,EDX
0062D464  7C E3                     JL 0x0062d449
0062D466  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
0062D469  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0062D46C  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
0062D46F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0062D472  89 19                     MOV dword ptr [ECX],EBX
0062D474  8B 58 08                  MOV EBX,dword ptr [EAX + 0x8]
0062D477  89 59 04                  MOV dword ptr [ECX + 0x4],EBX
0062D47A  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
0062D47D  89 59 08                  MOV dword ptr [ECX + 0x8],EBX
0062D480  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
0062D483  89 59 0C                  MOV dword ptr [ECX + 0xc],EBX
0062D486  6A 01                     PUSH 0x1
0062D488  52                        PUSH EDX
0062D489  8B 50 14                  MOV EDX,dword ptr [EAX + 0x14]
0062D48C  52                        PUSH EDX
0062D48D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0062D490  51                        PUSH ECX
0062D491  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0062D494  52                        PUSH EDX
0062D495  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0062D498  50                        PUSH EAX
0062D499  EB 9F                     JMP 0x0062d43a
