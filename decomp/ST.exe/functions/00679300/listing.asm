AiPlrClassTy::CloseTactByTitle:
00679300  55                        PUSH EBP
00679301  8B EC                     MOV EBP,ESP
00679303  83 EC 7C                  SUB ESP,0x7c
00679306  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067930B  53                        PUSH EBX
0067930C  56                        PUSH ESI
0067930D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00679310  57                        PUSH EDI
00679311  8D 55 88                  LEA EDX,[EBP + -0x78]
00679314  8D 4D 84                  LEA ECX,[EBP + -0x7c]
00679317  6A 00                     PUSH 0x0
00679319  52                        PUSH EDX
0067931A  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0067931D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00679323  E8 C8 44 0B 00            CALL 0x0072d7f0
00679328  8B F0                     MOV ESI,EAX
0067932A  83 C4 08                  ADD ESP,0x8
0067932D  85 F6                     TEST ESI,ESI
0067932F  0F 85 9E 00 00 00         JNZ 0x006793d3
00679335  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00679338  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0067933B  50                        PUSH EAX
0067933C  8B CE                     MOV ECX,ESI
0067933E  E8 21 91 D8 FF            CALL 0x00402464
00679343  8B D8                     MOV EBX,EAX
00679345  85 DB                     TEST EBX,EBX
00679347  7C 77                     JL 0x006793c0
00679349  8B 8E 95 06 00 00         MOV ECX,dword ptr [ESI + 0x695]
0067934F  85 C9                     TEST ECX,ECX
00679351  74 23                     JZ 0x00679376
00679353  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00679356  3B D8                     CMP EBX,EAX
00679358  7D 1C                     JGE 0x00679376
0067935A  73 0D                     JNC 0x00679369
0067935C  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0067935F  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00679362  0F AF C3                  IMUL EAX,EBX
00679365  03 C2                     ADD EAX,EDX
00679367  EB 02                     JMP 0x0067936b
LAB_00679369:
00679369  33 C0                     XOR EAX,EAX
LAB_0067936b:
0067936B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0067936E  85 C9                     TEST ECX,ECX
00679370  74 04                     JZ 0x00679376
00679372  8B 30                     MOV ESI,dword ptr [EAX]
00679374  EB 02                     JMP 0x00679378
LAB_00679376:
00679376  33 F6                     XOR ESI,ESI
LAB_00679378:
00679378  85 F6                     TEST ESI,ESI
0067937A  74 44                     JZ 0x006793c0
0067937C  B9 0D 00 00 00            MOV ECX,0xd
00679381  33 C0                     XOR EAX,EAX
00679383  8D 7D C8                  LEA EDI,[EBP + -0x38]
00679386  F3 AB                     STOSD.REP ES:EDI
00679388  8D 4D C8                  LEA ECX,[EBP + -0x38]
0067938B  C7 45 C8 71 00 00 00      MOV dword ptr [EBP + -0x38],0x71
00679392  85 C9                     TEST ECX,ECX
00679394  74 0B                     JZ 0x006793a1
00679396  8D 55 C8                  LEA EDX,[EBP + -0x38]
00679399  8B CE                     MOV ECX,ESI
0067939B  52                        PUSH EDX
0067939C  E8 40 7D D8 FF            CALL 0x004010e1
LAB_006793a1:
006793A1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006793A4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
006793AA  50                        PUSH EAX
006793AB  E8 7C AF D8 FF            CALL 0x0040432c
006793B0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006793B3  53                        PUSH EBX
006793B4  8B 91 95 06 00 00         MOV EDX,dword ptr [ECX + 0x695]
006793BA  52                        PUSH EDX
006793BB  E8 B0 78 03 00            CALL 0x006b0c70
LAB_006793c0:
006793C0  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
006793C3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006793C8  33 C0                     XOR EAX,EAX
006793CA  5F                        POP EDI
006793CB  5E                        POP ESI
006793CC  5B                        POP EBX
006793CD  8B E5                     MOV ESP,EBP
006793CF  5D                        POP EBP
006793D0  C2 04 00                  RET 0x4
LAB_006793d3:
006793D3  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006793D6  68 AC 2E 7D 00            PUSH 0x7d2eac
006793DB  68 CC 4C 7A 00            PUSH 0x7a4ccc
006793E0  56                        PUSH ESI
006793E1  6A 00                     PUSH 0x0
006793E3  68 F1 00 00 00            PUSH 0xf1
006793E8  68 4C 2E 7D 00            PUSH 0x7d2e4c
006793ED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006793F3  E8 D8 40 03 00            CALL 0x006ad4d0
006793F8  83 C4 18                  ADD ESP,0x18
006793FB  85 C0                     TEST EAX,EAX
006793FD  74 01                     JZ 0x00679400
006793FF  CC                        INT3
LAB_00679400:
00679400  68 F2 00 00 00            PUSH 0xf2
00679405  68 4C 2E 7D 00            PUSH 0x7d2e4c
0067940A  6A 00                     PUSH 0x0
0067940C  56                        PUSH ESI
0067940D  E8 2E CA 02 00            CALL 0x006a5e40
00679412  8B C6                     MOV EAX,ESI
00679414  5F                        POP EDI
00679415  5E                        POP ESI
00679416  5B                        POP EBX
00679417  8B E5                     MOV ESP,EBP
00679419  5D                        POP EBP
0067941A  C2 04 00                  RET 0x4
