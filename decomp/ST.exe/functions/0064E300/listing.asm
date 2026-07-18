FUN_0064e300:
0064E300  55                        PUSH EBP
0064E301  8B EC                     MOV EBP,ESP
0064E303  83 EC 60                  SUB ESP,0x60
0064E306  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0064E309  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0064E30F  53                        PUSH EBX
0064E310  56                        PUSH ESI
0064E311  33 DB                     XOR EBX,EBX
0064E313  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0064E316  57                        PUSH EDI
0064E317  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0064E31A  8D 55 A0                  LEA EDX,[EBP + -0x60]
0064E31D  53                        PUSH EBX
0064E31E  50                        PUSH EAX
0064E31F  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0064E322  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0064E325  C7 45 EC FF FF FF FF      MOV dword ptr [EBP + -0x14],0xffffffff
0064E32C  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
0064E32F  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0064E332  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
0064E335  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064E33B  E8 B0 F4 0D 00            CALL 0x0072d7f0
0064E340  8B F0                     MOV ESI,EAX
0064E342  83 C4 08                  ADD ESP,0x8
0064E345  3B F3                     CMP ESI,EBX
0064E347  0F 85 15 01 00 00         JNZ 0x0064e462
0064E34D  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0064E350  3B F3                     CMP ESI,EBX
0064E352  7C 05                     JL 0x0064e359
0064E354  83 FE 08                  CMP ESI,0x8
0064E357  7E 0B                     JLE 0x0064e364
LAB_0064e359:
0064E359  BE FF 00 00 00            MOV ESI,0xff
0064E35E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0064E361  83 FE 08                  CMP ESI,0x8
LAB_0064e364:
0064E364  75 0D                     JNZ 0x0064e373
0064E366  33 C9                     XOR ECX,ECX
0064E368  8A 0D 4D 87 80 00         MOV CL,byte ptr [0x0080874d]
0064E36E  8B F1                     MOV ESI,ECX
0064E370  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
LAB_0064e373:
0064E373  8A 45 1C                  MOV AL,byte ptr [EBP + 0x1c]
0064E376  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0064E379  3A C3                     CMP AL,BL
0064E37B  7C 07                     JL 0x0064e384
0064E37D  3C 08                     CMP AL,0x8
0064E37F  0F BE C0                  MOVSX EAX,AL
0064E382  7C 02                     JL 0x0064e386
LAB_0064e384:
0064E384  8B C7                     MOV EAX,EDI
LAB_0064e386:
0064E386  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0064E389  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0064E38C  50                        PUSH EAX
0064E38D  52                        PUSH EDX
0064E38E  66 0F BE 45 14            MOVSX AX,byte ptr [EBP + 0x14]
0064E393  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0064E396  50                        PUSH EAX
0064E397  51                        PUSH ECX
0064E398  52                        PUSH EDX
0064E399  E8 23 70 DB FF            CALL 0x004053c1
0064E39E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0064E3A1  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
0064E3A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0064E3A7  8D 4D E4                  LEA ECX,[EBP + -0x1c]
0064E3AA  51                        PUSH ECX
0064E3AB  89 70 77                  MOV dword ptr [EAX + 0x77],ESI
0064E3AE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0064E3B1  52                        PUSH EDX
0064E3B2  E8 0D 31 DB FF            CALL 0x004014c4
0064E3B7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0064E3BA  8D 45 FC                  LEA EAX,[EBP + -0x4]
0064E3BD  50                        PUSH EAX
0064E3BE  E8 0A 78 DB FF            CALL 0x00405bcd
0064E3C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0064E3C6  83 C4 20                  ADD ESP,0x20
0064E3C9  8D 55 F0                  LEA EDX,[EBP + -0x10]
0064E3CC  8D 45 E8                  LEA EAX,[EBP + -0x18]
0064E3CF  53                        PUSH EBX
0064E3D0  51                        PUSH ECX
0064E3D1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0064E3D7  52                        PUSH EDX
0064E3D8  50                        PUSH EAX
0064E3D9  68 84 03 00 00            PUSH 0x384
0064E3DE  E8 DF 37 DB FF            CALL 0x00401bc2
0064E3E3  8D 4D F8                  LEA ECX,[EBP + -0x8]
0064E3E6  51                        PUSH ECX
0064E3E7  E8 E1 77 DB FF            CALL 0x00405bcd
0064E3EC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0064E3EF  83 C4 04                  ADD ESP,0x4
0064E3F2  3B C3                     CMP EAX,EBX
0064E3F4  74 3B                     JZ 0x0064e431
0064E3F6  33 F6                     XOR ESI,ESI
0064E3F8  57                        PUSH EDI
0064E3F9  66 8B 70 7D               MOV SI,word ptr [EAX + 0x7d]
0064E3FD  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0064E400  E8 A4 69 DB FF            CALL 0x00404da9
0064E405  8B F8                     MOV EDI,EAX
0064E407  83 C4 04                  ADD ESP,0x4
0064E40A  3B FB                     CMP EDI,EBX
0064E40C  74 41                     JZ 0x0064e44f
0064E40E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0064E411  53                        PUSH EBX
0064E412  57                        PUSH EDI
0064E413  E8 D2 3C DB FF            CALL 0x004020ea
0064E418  57                        PUSH EDI
0064E419  E8 F2 FC 05 00            CALL 0x006ae110
0064E41E  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0064E421  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064E426  8B C6                     MOV EAX,ESI
0064E428  5F                        POP EDI
0064E429  5E                        POP ESI
0064E42A  5B                        POP EBX
0064E42B  8B E5                     MOV ESP,EBP
0064E42D  5D                        POP EBP
0064E42E  C2 1C 00                  RET 0x1c
LAB_0064e431:
0064E431  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0064E437  68 B4 01 00 00            PUSH 0x1b4
0064E43C  68 34 2A 7D 00            PUSH 0x7d2a34
0064E441  52                        PUSH EDX
0064E442  68 55 FF FF FF            PUSH 0xffffff55
0064E447  E8 F4 79 05 00            CALL 0x006a5e40
0064E44C  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
LAB_0064e44f:
0064E44F  8B 45 A0                  MOV EAX,dword ptr [EBP + -0x60]
0064E452  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0064E457  8B C6                     MOV EAX,ESI
0064E459  5F                        POP EDI
0064E45A  5E                        POP ESI
0064E45B  5B                        POP EBX
0064E45C  8B E5                     MOV ESP,EBP
0064E45E  5D                        POP EBP
0064E45F  C2 1C 00                  RET 0x1c
LAB_0064e462:
0064E462  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0064E465  8D 55 FC                  LEA EDX,[EBP + -0x4]
0064E468  52                        PUSH EDX
0064E469  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0064E46F  E8 59 77 DB FF            CALL 0x00405bcd
0064E474  8D 45 F8                  LEA EAX,[EBP + -0x8]
0064E477  50                        PUSH EAX
0064E478  E8 50 77 DB FF            CALL 0x00405bcd
0064E47D  83 C4 08                  ADD ESP,0x8
0064E480  68 B8 01 00 00            PUSH 0x1b8
0064E485  68 34 2A 7D 00            PUSH 0x7d2a34
0064E48A  53                        PUSH EBX
0064E48B  56                        PUSH ESI
0064E48C  E8 AF 79 05 00            CALL 0x006a5e40
0064E491  8B C6                     MOV EAX,ESI
0064E493  5F                        POP EDI
0064E494  5E                        POP ESI
0064E495  5B                        POP EBX
0064E496  8B E5                     MOV ESP,EBP
0064E498  5D                        POP EBP
0064E499  C2 1C 00                  RET 0x1c
