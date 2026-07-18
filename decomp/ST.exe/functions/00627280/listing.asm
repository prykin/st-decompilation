FUN_00627280:
00627280  55                        PUSH EBP
00627281  8B EC                     MOV EBP,ESP
00627283  0F BF 45 08               MOVSX EAX,word ptr [EBP + 0x8]
00627287  8B 91 C2 02 00 00         MOV EDX,dword ptr [ECX + 0x2c2]
0062728D  53                        PUSH EBX
0062728E  2B D0                     SUB EDX,EAX
00627290  56                        PUSH ESI
00627291  0F BF 45 0C               MOVSX EAX,word ptr [EBP + 0xc]
00627295  8B B1 C6 02 00 00         MOV ESI,dword ptr [ECX + 0x2c6]
0062729B  57                        PUSH EDI
0062729C  8B B9 CA 02 00 00         MOV EDI,dword ptr [ECX + 0x2ca]
006272A2  2B F0                     SUB ESI,EAX
006272A4  0F BF 45 10               MOVSX EAX,word ptr [EBP + 0x10]
006272A8  2B F8                     SUB EDI,EAX
006272AA  33 C0                     XOR EAX,EAX
006272AC  8A 81 AD 02 00 00         MOV AL,byte ptr [ECX + 0x2ad]
006272B2  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006272B5  D1 E0                     SHL EAX,0x1
006272B7  0F BF 88 AC 04 7D 00      MOVSX ECX,word ptr [EAX + 0x7d04ac]
006272BE  0F BF 98 AA 04 7D 00      MOVSX EBX,word ptr [EAX + 0x7d04aa]
006272C5  0F BF 80 A8 04 7D 00      MOVSX EAX,word ptr [EAX + 0x7d04a8]
006272CC  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006272CF  8B D8                     MOV EBX,EAX
006272D1  0F AF D8                  IMUL EBX,EAX
006272D4  8B C2                     MOV EAX,EDX
006272D6  0F AF C2                  IMUL EAX,EDX
006272D9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006272DC  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006272DF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006272E2  C1 E0 03                  SHL EAX,0x3
006272E5  99                        CDQ
006272E6  F7 FB                     IDIV EBX
006272E8  8B D8                     MOV EBX,EAX
006272EA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006272ED  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
006272F0  8B D8                     MOV EBX,EAX
006272F2  0F AF D8                  IMUL EBX,EAX
006272F5  8B C6                     MOV EAX,ESI
006272F7  0F AF C6                  IMUL EAX,ESI
006272FA  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006272FD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00627300  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00627303  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00627306  C1 E0 03                  SHL EAX,0x3
00627309  99                        CDQ
0062730A  F7 FB                     IDIV EBX
0062730C  8B D9                     MOV EBX,ECX
0062730E  0F AF D9                  IMUL EBX,ECX
00627311  03 F0                     ADD ESI,EAX
00627313  8B C7                     MOV EAX,EDI
00627315  0F AF C7                  IMUL EAX,EDI
00627318  5F                        POP EDI
00627319  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062731C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0062731F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00627322  C1 E0 03                  SHL EAX,0x3
00627325  99                        CDQ
00627326  F7 FB                     IDIV EBX
00627328  03 F0                     ADD ESI,EAX
0062732A  81 FE E8 03 00 00         CMP ESI,0x3e8
00627330  5E                        POP ESI
00627331  5B                        POP EBX
00627332  7D 09                     JGE 0x0062733d
00627334  B8 01 00 00 00            MOV EAX,0x1
00627339  5D                        POP EBP
0062733A  C2 18 00                  RET 0x18
LAB_0062733d:
0062733D  83 C8 FF                  OR EAX,0xffffffff
00627340  5D                        POP EBP
00627341  C2 18 00                  RET 0x18
