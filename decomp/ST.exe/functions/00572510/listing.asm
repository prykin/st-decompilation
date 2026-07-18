FUN_00572510:
00572510  55                        PUSH EBP
00572511  8B EC                     MOV EBP,ESP
00572513  81 EC 98 02 00 00         SUB ESP,0x298
00572519  53                        PUSH EBX
0057251A  8B D9                     MOV EBX,ECX
0057251C  8A 8B 85 07 00 00         MOV CL,byte ptr [EBX + 0x785]
00572522  56                        PUSH ESI
00572523  8D 83 85 07 00 00         LEA EAX,[EBX + 0x785]
00572529  57                        PUSH EDI
0057252A  84 C9                     TEST CL,CL
0057252C  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0057252F  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00572536  C6 83 EE 0D 00 00 00      MOV byte ptr [EBX + 0xdee],0x0
0057253D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00572540  0F 84 FA 02 00 00         JZ 0x00572840
00572546  50                        PUSH EAX
00572547  A1 CC B0 79 00            MOV EAX,[0x0079b0cc]
0057254C  8D 7B 28                  LEA EDI,[EBX + 0x28]
0057254F  50                        PUSH EAX
00572550  57                        PUSH EDI
00572551  8D 8D A8 FE FF FF         LEA ECX,[EBP + 0xfffffea8]
00572557  68 DC 6E 7C 00            PUSH 0x7c6edc
0057255C  51                        PUSH ECX
0057255D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
00572563  83 C4 14                  ADD ESP,0x14
00572566  8D 95 68 FD FF FF         LEA EDX,[EBP + 0xfffffd68]
0057256C  8D 85 A8 FE FF FF         LEA EAX,[EBP + 0xfffffea8]
00572572  52                        PUSH EDX
00572573  50                        PUSH EAX
00572574  FF 15 EC BC 85 00         CALL dword ptr [0x0085bcec]
0057257A  8B F0                     MOV ESI,EAX
0057257C  33 C0                     XOR EAX,EAX
0057257E  83 FE FF                  CMP ESI,-0x1
00572581  0F 95 C0                  SETNZ AL
00572584  85 C0                     TEST EAX,EAX
00572586  74 24                     JZ 0x005725ac
LAB_00572588:
00572588  F6 85 68 FD FF FF 10      TEST byte ptr [EBP + 0xfffffd68],0x10
0057258F  75 14                     JNZ 0x005725a5
00572591  8D 8D 68 FD FF FF         LEA ECX,[EBP + 0xfffffd68]
00572597  51                        PUSH ECX
00572598  56                        PUSH ESI
00572599  FF 15 F0 BC 85 00         CALL dword ptr [0x0085bcf0]
0057259F  85 C0                     TEST EAX,EAX
005725A1  75 E5                     JNZ 0x00572588
005725A3  EB 07                     JMP 0x005725ac
LAB_005725a5:
005725A5  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
LAB_005725ac:
005725AC  83 FE FF                  CMP ESI,-0x1
005725AF  74 07                     JZ 0x005725b8
005725B1  56                        PUSH ESI
005725B2  FF 15 F4 BC 85 00         CALL dword ptr [0x0085bcf4]
LAB_005725b8:
005725B8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005725BB  85 C0                     TEST EAX,EAX
005725BD  0F 84 76 02 00 00         JZ 0x00572839
005725C3  8B 15 D0 B0 79 00         MOV EDX,dword ptr [0x0079b0d0]
005725C9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005725CC  8B 0D CC B0 79 00         MOV ECX,dword ptr [0x0079b0cc]
005725D2  52                        PUSH EDX
005725D3  50                        PUSH EAX
005725D4  51                        PUSH ECX
005725D5  57                        PUSH EDI
005725D6  8D 95 A8 FE FF FF         LEA EDX,[EBP + 0xfffffea8]
005725DC  68 EC A1 7C 00            PUSH 0x7ca1ec
005725E1  52                        PUSH EDX
005725E2  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005725E8  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005725ED  8D 55 B0                  LEA EDX,[EBP + -0x50]
005725F0  8D 4D AC                  LEA ECX,[EBP + -0x54]
005725F3  6A 00                     PUSH 0x0
005725F5  52                        PUSH EDX
005725F6  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005725F9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005725FF  E8 EC B1 1B 00            CALL 0x0072d7f0
00572604  83 C4 20                  ADD ESP,0x20
00572607  85 C0                     TEST EAX,EAX
00572609  0F 85 10 02 00 00         JNZ 0x0057281f
0057260F  50                        PUSH EAX
00572610  50                        PUSH EAX
00572611  50                        PUSH EAX
00572612  8D 85 A8 FE FF FF         LEA EAX,[EBP + 0xfffffea8]
00572618  50                        PUSH EAX
00572619  68 45 03 00 00            PUSH 0x345
0057261E  E8 9D E8 17 00            CALL 0x006f0ec0
00572623  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00572626  8B F0                     MOV ESI,EAX
00572628  83 C4 14                  ADD ESP,0x14
0057262B  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0057262E  85 F6                     TEST ESI,ESI
00572630  0F 84 DF 01 00 00         JZ 0x00572815
00572636  8B 15 D4 B0 79 00         MOV EDX,dword ptr [0x0079b0d4]
0057263C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057263F  6A 01                     PUSH 0x1
00572641  51                        PUSH ECX
00572642  52                        PUSH EDX
00572643  6A 0C                     PUSH 0xc
00572645  8B CE                     MOV ECX,ESI
00572647  C7 45 FC F8 72 80 00      MOV dword ptr [EBP + -0x4],0x8072f8
0057264E  E8 8D F6 17 00            CALL 0x006f1ce0
00572653  A0 3B 73 80 00            MOV AL,[0x0080733b]
00572658  3C 01                     CMP AL,0x1
0057265A  73 0B                     JNC 0x00572667
0057265C  3C 03                     CMP AL,0x3
0057265E  76 07                     JBE 0x00572667
00572660  C6 05 3B 73 80 00 01      MOV byte ptr [0x0080733b],0x1
LAB_00572667:
00572667  8B CB                     MOV ECX,EBX
00572669  E8 F2 10 E9 FF            CALL 0x00403760
0057266E  8B 15 D8 B0 79 00         MOV EDX,dword ptr [0x0079b0d8]
00572674  8D 4D FC                  LEA ECX,[EBP + -0x4]
00572677  6A 01                     PUSH 0x1
00572679  51                        PUSH ECX
0057267A  8D 83 0E 08 00 00         LEA EAX,[EBX + 0x80e]
00572680  52                        PUSH EDX
00572681  6A 0C                     PUSH 0xc
00572683  8B CE                     MOV ECX,ESI
00572685  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00572688  E8 53 F6 17 00            CALL 0x006f1ce0
0057268D  8B 15 DC B0 79 00         MOV EDX,dword ptr [0x0079b0dc]
00572693  8D 4D FC                  LEA ECX,[EBP + -0x4]
00572696  6A 01                     PUSH 0x1
00572698  51                        PUSH ECX
00572699  8D 83 86 0D 00 00         LEA EAX,[EBX + 0xd86]
0057269F  52                        PUSH EDX
005726A0  6A 0C                     PUSH 0xc
005726A2  8B CE                     MOV ECX,ESI
005726A4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005726A7  E8 34 F6 17 00            CALL 0x006f1ce0
005726AC  8B 15 E0 B0 79 00         MOV EDX,dword ptr [0x0079b0e0]
005726B2  8D 4D FC                  LEA ECX,[EBP + -0x4]
005726B5  6A 01                     PUSH 0x1
005726B7  51                        PUSH ECX
005726B8  8D 83 9E 09 00 00         LEA EAX,[EBX + 0x99e]
005726BE  52                        PUSH EDX
005726BF  6A 0C                     PUSH 0xc
005726C1  8B CE                     MOV ECX,ESI
005726C3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005726C6  E8 15 F6 17 00            CALL 0x006f1ce0
005726CB  8B 15 E4 B0 79 00         MOV EDX,dword ptr [0x0079b0e4]
005726D1  8D 4D FC                  LEA ECX,[EBP + -0x4]
005726D4  6A 01                     PUSH 0x1
005726D6  51                        PUSH ECX
005726D7  8D 83 1E 0C 00 00         LEA EAX,[EBX + 0xc1e]
005726DD  52                        PUSH EDX
005726DE  6A 0C                     PUSH 0xc
005726E0  8B CE                     MOV ECX,ESI
005726E2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005726E5  E8 F6 F5 17 00            CALL 0x006f1ce0
005726EA  8D 93 C5 07 00 00         LEA EDX,[EBX + 0x7c5]
005726F0  B9 10 00 00 00            MOV ECX,0x10
005726F5  33 C0                     XOR EAX,EAX
005726F7  8B FA                     MOV EDI,EDX
005726F9  C6 83 EE 0D 00 00 01      MOV byte ptr [EBX + 0xdee],0x1
00572700  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00572703  F3 AB                     STOSD.REP ES:EDI
00572705  8D BB 05 08 00 00         LEA EDI,[EBX + 0x805]
0057270B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057270E  89 07                     MOV dword ptr [EDI],EAX
00572710  89 47 04                  MOV dword ptr [EDI + 0x4],EAX
00572713  50                        PUSH EAX
00572714  51                        PUSH ECX
00572715  88 47 08                  MOV byte ptr [EDI + 0x8],AL
00572718  8B 15 E8 B0 79 00         MOV EDX,dword ptr [0x0079b0e8]
0057271E  52                        PUSH EDX
0057271F  6A 0C                     PUSH 0xc
00572721  8B CE                     MOV ECX,ESI
00572723  E8 B8 F5 17 00            CALL 0x006f1ce0
00572728  85 C0                     TEST EAX,EAX
0057272A  75 38                     JNZ 0x00572764
0057272C  8D 83 C5 07 00 00         LEA EAX,[EBX + 0x7c5]
00572732  85 C0                     TEST EAX,EAX
00572734  74 2E                     JZ 0x00572764
00572736  8D BB 85 07 00 00         LEA EDI,[EBX + 0x785]
0057273C  85 FF                     TEST EDI,EDI
0057273E  74 24                     JZ 0x00572764
00572740  83 C9 FF                  OR ECX,0xffffffff
00572743  33 C0                     XOR EAX,EAX
00572745  F2 AE                     SCASB.REPNE ES:EDI
00572747  F7 D1                     NOT ECX
00572749  2B F9                     SUB EDI,ECX
0057274B  8B C1                     MOV EAX,ECX
0057274D  8B F7                     MOV ESI,EDI
0057274F  8D BB C5 07 00 00         LEA EDI,[EBX + 0x7c5]
00572755  C1 E9 02                  SHR ECX,0x2
00572758  F3 A5                     MOVSD.REP ES:EDI,ESI
0057275A  8B C8                     MOV ECX,EAX
0057275C  83 E1 03                  AND ECX,0x3
0057275F  F3 A4                     MOVSB.REP ES:EDI,ESI
00572761  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
LAB_00572764:
00572764  8B 15 EC B0 79 00         MOV EDX,dword ptr [0x0079b0ec]
0057276A  33 FF                     XOR EDI,EDI
0057276C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057276F  57                        PUSH EDI
00572770  51                        PUSH ECX
00572771  8D 83 05 08 00 00         LEA EAX,[EBX + 0x805]
00572777  52                        PUSH EDX
00572778  6A 0C                     PUSH 0xc
0057277A  8B CE                     MOV ECX,ESI
0057277C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0057277F  E8 5C F5 17 00            CALL 0x006f1ce0
00572784  8B 0D F8 72 80 00         MOV ECX,dword ptr [0x008072f8]
0057278A  89 3D F8 72 80 00         MOV dword ptr [0x008072f8],EDI
00572790  C7 05 FC 72 80 00 82 00 00 00  MOV dword ptr [0x008072fc],0x82
0057279A  33 C0                     XOR EAX,EAX
LAB_0057279c:
0057279C  33 D2                     XOR EDX,EDX
0057279E  8A 90 F8 72 80 00         MOV DL,byte ptr [EAX + 0x8072f8]
005727A4  03 FA                     ADD EDI,EDX
005727A6  40                        INC EAX
005727A7  3D 82 00 00 00            CMP EAX,0x82
005727AC  72 EE                     JC 0x0057279c
005727AE  3B F9                     CMP EDI,ECX
005727B0  74 0B                     JZ 0x005727bd
005727B2  6A 01                     PUSH 0x1
005727B4  6A 00                     PUSH 0x0
005727B6  8B CB                     MOV ECX,EBX
005727B8  E8 AC 1F E9 FF            CALL 0x00404769
LAB_005727bd:
005727BD  B8 94 A6 7C 00            MOV EAX,0x7ca694
005727C2  8D BB 40 06 00 00         LEA EDI,[EBX + 0x640]
LAB_005727c8:
005727C8  8A 17                     MOV DL,byte ptr [EDI]
005727CA  8A CA                     MOV CL,DL
005727CC  3A 10                     CMP DL,byte ptr [EAX]
005727CE  75 1C                     JNZ 0x005727ec
005727D0  84 C9                     TEST CL,CL
005727D2  74 14                     JZ 0x005727e8
005727D4  8A 57 01                  MOV DL,byte ptr [EDI + 0x1]
005727D7  8A CA                     MOV CL,DL
005727D9  3A 50 01                  CMP DL,byte ptr [EAX + 0x1]
005727DC  75 0E                     JNZ 0x005727ec
005727DE  83 C7 02                  ADD EDI,0x2
005727E1  83 C0 02                  ADD EAX,0x2
005727E4  84 C9                     TEST CL,CL
005727E6  75 E0                     JNZ 0x005727c8
LAB_005727e8:
005727E8  33 C0                     XOR EAX,EAX
005727EA  EB 05                     JMP 0x005727f1
LAB_005727ec:
005727EC  1B C0                     SBB EAX,EAX
005727EE  83 D8 FF                  SBB EAX,-0x1
LAB_005727f1:
005727F1  85 C0                     TEST EAX,EAX
005727F3  75 10                     JNZ 0x00572805
005727F5  80 3D 00 73 80 00 02      CMP byte ptr [0x00807300],0x2
005727FC  75 07                     JNZ 0x00572805
005727FE  C6 05 00 73 80 00 01      MOV byte ptr [0x00807300],0x1
LAB_00572805:
00572805  8B CB                     MOV ECX,EBX
00572807  E8 F4 14 E9 FF            CALL 0x00403d00
0057280C  56                        PUSH ESI
0057280D  E8 5E E9 17 00            CALL 0x006f1170
00572812  83 C4 04                  ADD ESP,0x4
LAB_00572815:
00572815  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00572818  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0057281D  EB 13                     JMP 0x00572832
LAB_0057281f:
0057281F  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00572822  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
00572825  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0057282B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_00572832:
00572832  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00572835  85 C0                     TEST EAX,EAX
00572837  75 07                     JNZ 0x00572840
LAB_00572839:
00572839  C6 83 EE 0D 00 00 00      MOV byte ptr [EBX + 0xdee],0x0
LAB_00572840:
00572840  5F                        POP EDI
00572841  5E                        POP ESI
00572842  5B                        POP EBX
00572843  8B E5                     MOV ESP,EBP
00572845  5D                        POP EBP
00572846  C3                        RET
