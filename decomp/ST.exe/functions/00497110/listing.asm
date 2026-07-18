FUN_00497110:
00497110  55                        PUSH EBP
00497111  8B EC                     MOV EBP,ESP
00497113  83 EC 28                  SUB ESP,0x28
00497116  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00497119  53                        PUSH EBX
0049711A  56                        PUSH ESI
0049711B  57                        PUSH EDI
0049711C  8B B0 E9 01 00 00         MOV ESI,dword ptr [EAX + 0x1e9]
00497122  8B B8 ED 01 00 00         MOV EDI,dword ptr [EAX + 0x1ed]
00497128  8B 80 F1 01 00 00         MOV EAX,dword ptr [EAX + 0x1f1]
0049712E  83 C7 64                  ADD EDI,0x64
00497131  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00497134  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00497137  83 C6 64                  ADD ESI,0x64
0049713A  8B 98 E9 01 00 00         MOV EBX,dword ptr [EAX + 0x1e9]
00497140  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
00497146  83 C0 64                  ADD EAX,0x64
00497149  83 C3 64                  ADD EBX,0x64
0049714C  50                        PUSH EAX
0049714D  53                        PUSH EBX
0049714E  57                        PUSH EDI
0049714F  56                        PUSH ESI
00497150  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00497153  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00497156  E8 7D 5D 21 00            CALL 0x006aced8
0049715B  83 C4 10                  ADD ESP,0x10
0049715E  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00497161  85 C0                     TEST EAX,EAX
00497163  0F 8E 76 01 00 00         JLE 0x004972df
00497169  8B C3                     MOV EAX,EBX
0049716B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049716E  2B C6                     SUB EAX,ESI
00497170  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00497173  99                        CDQ
00497174  2B C2                     SUB EAX,EDX
00497176  8B D8                     MOV EBX,EAX
00497178  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049717B  2B C7                     SUB EAX,EDI
0049717D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00497180  99                        CDQ
00497181  2B C2                     SUB EAX,EDX
00497183  D1 F8                     SAR EAX,0x1
00497185  03 C7                     ADD EAX,EDI
00497187  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0049718A  8B C1                     MOV EAX,ECX
0049718C  2B C1                     SUB EAX,ECX
0049718E  99                        CDQ
0049718F  2B C2                     SUB EAX,EDX
00497191  8B D0                     MOV EDX,EAX
00497193  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00497198  D1 FB                     SAR EBX,0x1
0049719A  D1 FA                     SAR EDX,0x1
0049719C  03 DE                     ADD EBX,ESI
0049719E  03 D1                     ADD EDX,ECX
004971A0  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004971A3  78 14                     JS 0x004971b9
004971A5  F7 EA                     IMUL EDX
004971A7  C1 FA 06                  SAR EDX,0x6
004971AA  8B CA                     MOV ECX,EDX
004971AC  C1 E9 1F                  SHR ECX,0x1f
004971AF  03 D1                     ADD EDX,ECX
004971B1  0F BF D2                  MOVSX EDX,DX
004971B4  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
004971B7  EB 13                     JMP 0x004971cc
LAB_004971b9:
004971B9  F7 EA                     IMUL EDX
004971BB  C1 FA 06                  SAR EDX,0x6
004971BE  8B C2                     MOV EAX,EDX
004971C0  C1 E8 1F                  SHR EAX,0x1f
004971C3  03 D0                     ADD EDX,EAX
004971C5  0F BF C2                  MOVSX EAX,DX
004971C8  48                        DEC EAX
004971C9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_004971cc:
004971CC  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
004971D2  8D 55 E8                  LEA EDX,[EBP + -0x18]
004971D5  52                        PUSH EDX
004971D6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004971D9  8B 89 80 03 00 00         MOV ECX,dword ptr [ECX + 0x380]
004971DF  50                        PUSH EAX
004971E0  8B D1                     MOV EDX,ECX
004971E2  B8 79 19 8C 02            MOV EAX,0x28c1979
004971E7  0F AF 55 F8               IMUL EDX,dword ptr [EBP + -0x8]
004971EB  0F AF CB                  IMUL ECX,EBX
004971EE  F7 EA                     IMUL EDX
004971F0  D1 FA                     SAR EDX,0x1
004971F2  8B C2                     MOV EAX,EDX
004971F4  C1 E8 1F                  SHR EAX,0x1f
004971F7  03 D0                     ADD EDX,EAX
004971F9  B8 79 19 8C 02            MOV EAX,0x28c1979
004971FE  52                        PUSH EDX
004971FF  F7 E9                     IMUL ECX
00497201  D1 FA                     SAR EDX,0x1
00497203  8B CA                     MOV ECX,EDX
00497205  C1 E9 1F                  SHR ECX,0x1f
00497208  03 D1                     ADD EDX,ECX
0049720A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00497210  52                        PUSH EDX
00497211  E8 FA C0 24 00            CALL 0x006e3310
00497216  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00497219  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0049721C  DD D8                     FSTP ST0
0049721E  8D 42 01                  LEA EAX,[EDX + 0x1]
00497221  3B C8                     CMP ECX,EAX
00497223  7E 0E                     JLE 0x00497233
00497225  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00497228  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0049722B  C1 E0 03                  SHL EAX,0x3
0049722E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00497231  EB 0C                     JMP 0x0049723f
LAB_00497233:
00497233  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00497236  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00497239  C1 E0 03                  SHL EAX,0x3
0049723C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0049723f:
0049723F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00497242  50                        PUSH EAX
00497243  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00497246  52                        PUSH EDX
00497247  50                        PUSH EAX
00497248  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049724B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0049724E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00497251  8D 1C 8D 00 00 00 00      LEA EBX,[ECX*0x4 + 0x0]
00497258  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049725B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0049725E  51                        PUSH ECX
0049725F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00497262  C1 E0 03                  SHL EAX,0x3
00497265  99                        CDQ
00497266  F7 FB                     IDIV EBX
00497268  03 C7                     ADD EAX,EDI
0049726A  50                        PUSH EAX
0049726B  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0049726E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00497271  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00497274  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00497277  C1 E0 03                  SHL EAX,0x3
0049727A  99                        CDQ
0049727B  F7 FB                     IDIV EBX
0049727D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00497280  03 C6                     ADD EAX,ESI
00497282  50                        PUSH EAX
00497283  8B 82 D9 01 00 00         MOV EAX,dword ptr [EDX + 0x1d9]
00497289  50                        PUSH EAX
0049728A  E8 F7 B7 F6 FF            CALL 0x00402a86
0049728F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00497292  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00497295  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00497298  51                        PUSH ECX
00497299  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0049729C  52                        PUSH EDX
0049729D  50                        PUSH EAX
0049729E  51                        PUSH ECX
0049729F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004972A2  2B F9                     SUB EDI,ECX
004972A4  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
004972A7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004972AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004972AD  C1 E0 03                  SHL EAX,0x3
004972B0  99                        CDQ
004972B1  F7 FB                     IDIV EBX
004972B3  03 C1                     ADD EAX,ECX
004972B5  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
004972B8  2B F1                     SUB ESI,ECX
004972BA  50                        PUSH EAX
004972BB  8D 04 76                  LEA EAX,[ESI + ESI*0x2]
004972BE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004972C1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004972C4  C1 E0 03                  SHL EAX,0x3
004972C7  99                        CDQ
004972C8  F7 FB                     IDIV EBX
004972CA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004972CD  03 C1                     ADD EAX,ECX
004972CF  50                        PUSH EAX
004972D0  8B 82 D9 01 00 00         MOV EAX,dword ptr [EDX + 0x1d9]
004972D6  50                        PUSH EAX
004972D7  E8 AA B7 F6 FF            CALL 0x00402a86
004972DC  83 C4 38                  ADD ESP,0x38
LAB_004972df:
004972DF  5F                        POP EDI
004972E0  5E                        POP ESI
004972E1  5B                        POP EBX
004972E2  8B E5                     MOV ESP,EBP
004972E4  5D                        POP EBP
004972E5  C2 08 00                  RET 0x8
