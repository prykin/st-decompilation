FUN_00631910:
00631910  55                        PUSH EBP
00631911  8B EC                     MOV EBP,ESP
00631913  83 EC 24                  SUB ESP,0x24
00631916  53                        PUSH EBX
00631917  56                        PUSH ESI
00631918  8B F1                     MOV ESI,ECX
0063191A  57                        PUSH EDI
0063191B  B9 09 00 00 00            MOV ECX,0x9
00631920  33 C0                     XOR EAX,EAX
00631922  8D 7D DC                  LEA EDI,[EBP + -0x24]
00631925  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00631928  F3 AB                     STOSD.REP ES:EDI
0063192A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0063192D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00631930  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00631933  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00631936  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00631939  33 DB                     XOR EBX,EBX
0063193B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0063193E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
00631941  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00631944  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
00631947  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
0063194A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0063194D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00631950  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
00631953  3B C3                     CMP EAX,EBX
00631955  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00631958  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0063195B  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0063195E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00631961  75 0F                     JNZ 0x00631972
00631963  6A 0A                     PUSH 0xa
00631965  6A 24                     PUSH 0x24
00631967  6A 0A                     PUSH 0xa
00631969  53                        PUSH EBX
0063196A  E8 21 C9 07 00            CALL 0x006ae290
0063196F  89 46 69                  MOV dword ptr [ESI + 0x69],EAX
LAB_00631972:
00631972  8B 46 69                  MOV EAX,dword ptr [ESI + 0x69]
00631975  85 C0                     TEST EAX,EAX
00631977  74 10                     JZ 0x00631989
00631979  8D 4D DC                  LEA ECX,[EBP + -0x24]
0063197C  51                        PUSH ECX
0063197D  50                        PUSH EAX
0063197E  E8 3D C8 07 00            CALL 0x006ae1c0
00631983  8B D8                     MOV EBX,EAX
00631985  85 DB                     TEST EBX,EBX
00631987  7C 19                     JL 0x006319a2
LAB_00631989:
00631989  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0063198C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0063198F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00631992  53                        PUSH EBX
00631993  52                        PUSH EDX
00631994  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00631997  57                        PUSH EDI
00631998  50                        PUSH EAX
00631999  51                        PUSH ECX
0063199A  52                        PUSH EDX
0063199B  8B CE                     MOV ECX,ESI
0063199D  E8 D8 2B DD FF            CALL 0x0040457a
LAB_006319a2:
006319A2  5F                        POP EDI
006319A3  8D 43 01                  LEA EAX,[EBX + 0x1]
006319A6  5E                        POP ESI
006319A7  5B                        POP EBX
006319A8  8B E5                     MOV ESP,EBP
006319AA  5D                        POP EBP
006319AB  C2 20 00                  RET 0x20
