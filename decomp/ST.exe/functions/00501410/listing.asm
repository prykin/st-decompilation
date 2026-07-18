CPanelTy::PaintBRLife:
00501410  55                        PUSH EBP
00501411  8B EC                     MOV EBP,ESP
00501413  83 EC 4C                  SUB ESP,0x4c
00501416  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050141B  53                        PUSH EBX
0050141C  56                        PUSH ESI
0050141D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00501420  57                        PUSH EDI
00501421  8D 55 B8                  LEA EDX,[EBP + -0x48]
00501424  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00501427  6A 00                     PUSH 0x0
00501429  52                        PUSH EDX
0050142A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0050142D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00501433  E8 B8 C3 22 00            CALL 0x0072d7f0
00501438  8B F0                     MOV ESI,EAX
0050143A  83 C4 08                  ADD ESP,0x8
0050143D  85 F6                     TEST ESI,ESI
0050143F  0F 85 AA 00 00 00         JNZ 0x005014ef
00501445  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00501448  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0050144B  50                        PUSH EAX
0050144C  6A 21                     PUSH 0x21
0050144E  8B 8E 8C 01 00 00         MOV ECX,dword ptr [ESI + 0x18c]
00501454  6A 07                     PUSH 0x7
00501456  8D 47 35                  LEA EAX,[EDI + 0x35]
00501459  6A 70                     PUSH 0x70
0050145B  50                        PUSH EAX
0050145C  6A 00                     PUSH 0x0
0050145E  51                        PUSH ECX
0050145F  E8 0C 2D 1B 00            CALL 0x006b4170
00501464  8A 8E C8 0B 00 00         MOV CL,byte ptr [ESI + 0xbc8]
0050146A  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
0050146D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00501470  25 FF 00 00 00            AND EAX,0xff
00501475  8B D0                     MOV EDX,EAX
00501477  C1 E2 05                  SHL EDX,0x5
0050147A  03 D0                     ADD EDX,EAX
0050147C  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00501481  F7 E2                     MUL EDX
00501483  C1 EA 05                  SHR EDX,0x5
00501486  84 C9                     TEST CL,CL
00501488  88 55 FC                  MOV byte ptr [EBP + -0x4],DL
0050148B  76 08                     JBE 0x00501495
0050148D  84 D2                     TEST DL,DL
0050148F  75 04                     JNZ 0x00501495
00501491  C6 45 FC 01               MOV byte ptr [EBP + -0x4],0x1
LAB_00501495:
00501495  80 F9 46                  CMP CL,0x46
00501498  72 04                     JC 0x0050149e
0050149A  33 D2                     XOR EDX,EDX
0050149C  EB 0B                     JMP 0x005014a9
LAB_0050149e:
0050149E  80 F9 14                  CMP CL,0x14
005014A1  1B D2                     SBB EDX,EDX
005014A3  83 E2 05                  AND EDX,0x5
005014A6  83 C2 05                  ADD EDX,0x5
LAB_005014a9:
005014A9  8B 8E 8A 02 00 00         MOV ECX,dword ptr [ESI + 0x28a]
005014AF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005014B2  25 FF 00 00 00            AND EAX,0xff
005014B7  83 C7 36                  ADD EDI,0x36
005014BA  8B 59 08                  MOV EBX,dword ptr [ECX + 0x8]
005014BD  50                        PUSH EAX
005014BE  2B D8                     SUB EBX,EAX
005014C0  6A 05                     PUSH 0x5
005014C2  53                        PUSH EBX
005014C3  52                        PUSH EDX
005014C4  8B 96 8C 01 00 00         MOV EDX,dword ptr [ESI + 0x18c]
005014CA  6A 00                     PUSH 0x0
005014CC  51                        PUSH ECX
005014CD  B9 91 00 00 00            MOV ECX,0x91
005014D2  2B C8                     SUB ECX,EAX
005014D4  51                        PUSH ECX
005014D5  57                        PUSH EDI
005014D6  6A 00                     PUSH 0x0
005014D8  52                        PUSH EDX
005014D9  E8 12 41 1B 00            CALL 0x006b55f0
005014DE  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005014E1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005014E6  5F                        POP EDI
005014E7  5E                        POP ESI
005014E8  5B                        POP EBX
005014E9  8B E5                     MOV ESP,EBP
005014EB  5D                        POP EBP
005014EC  C2 04 00                  RET 0x4
LAB_005014ef:
005014EF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005014F2  68 88 25 7C 00            PUSH 0x7c2588
005014F7  68 CC 4C 7A 00            PUSH 0x7a4ccc
005014FC  56                        PUSH ESI
005014FD  6A 00                     PUSH 0x0
005014FF  6A 40                     PUSH 0x40
00501501  68 24 25 7C 00            PUSH 0x7c2524
00501506  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050150C  E8 BF BF 1A 00            CALL 0x006ad4d0
00501511  83 C4 18                  ADD ESP,0x18
00501514  85 C0                     TEST EAX,EAX
00501516  74 01                     JZ 0x00501519
00501518  CC                        INT3
LAB_00501519:
00501519  6A 40                     PUSH 0x40
0050151B  68 24 25 7C 00            PUSH 0x7c2524
00501520  6A 00                     PUSH 0x0
00501522  56                        PUSH ESI
00501523  E8 18 49 1A 00            CALL 0x006a5e40
00501528  5F                        POP EDI
00501529  5E                        POP ESI
0050152A  5B                        POP EBX
0050152B  8B E5                     MOV ESP,EBP
0050152D  5D                        POP EBP
0050152E  C2 04 00                  RET 0x4
