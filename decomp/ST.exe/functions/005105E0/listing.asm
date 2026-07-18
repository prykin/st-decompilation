FUN_005105e0:
005105E0  55                        PUSH EBP
005105E1  8B EC                     MOV EBP,ESP
005105E3  83 EC 58                  SUB ESP,0x58
005105E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005105E9  56                        PUSH ESI
005105EA  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
005105ED  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005105F4  8B 40 18                  MOV EAX,dword ptr [EAX + 0x18]
005105F7  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005105FA  8B 10                     MOV EDX,dword ptr [EAX]
005105FC  2B D6                     SUB EDX,ESI
005105FE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00510601  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
00510604  85 D2                     TEST EDX,EDX
00510606  75 10                     JNZ 0x00510618
00510608  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0051060B  8B 0D 34 67 80 00         MOV ECX,dword ptr [0x00806734]
00510611  2B C1                     SUB EAX,ECX
00510613  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00510616  EB 0B                     JMP 0x00510623
LAB_00510618:
00510618  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0051061B  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0051061E  2B D0                     SUB EDX,EAX
00510620  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_00510623:
00510623  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00510628  8D 55 AC                  LEA EDX,[EBP + -0x54]
0051062B  8D 4D A8                  LEA ECX,[EBP + -0x58]
0051062E  6A 00                     PUSH 0x0
00510630  52                        PUSH EDX
00510631  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00510638  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0051063B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510641  E8 AA D1 21 00            CALL 0x0072d7f0
00510646  8B F0                     MOV ESI,EAX
00510648  83 C4 08                  ADD ESP,0x8
0051064B  85 F6                     TEST ESI,ESI
0051064D  0F 85 B1 00 00 00         JNZ 0x00510704
00510653  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00510656  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
00510659  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
0051065C  83 F8 03                  CMP EAX,0x3
0051065F  77 2D                     JA 0x0051068e
switchD_00510661::switchD:
00510661  FF 24 85 4C 07 51 00      JMP dword ptr [EAX*0x4 + 0x51074c]
switchD_00510661::caseD_2:
00510668  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0051066F  EB 1D                     JMP 0x0051068e
switchD_00510661::caseD_0:
00510671  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00510678  EB 14                     JMP 0x0051068e
switchD_00510661::caseD_1:
0051067A  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0051067D  33 C9                     XOR ECX,ECX
0051067F  8A 94 30 FC 40 FF FF      MOV DL,byte ptr [EAX + ESI*0x1 + 0xffff40fc]
00510686  84 D2                     TEST DL,DL
00510688  0F 95 C1                  SETNZ CL
0051068B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
switchD_00510661::default:
0051068E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00510691  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00510694  6A 01                     PUSH 0x1
00510696  6A 00                     PUSH 0x0
00510698  52                        PUSH EDX
00510699  6A 01                     PUSH 0x1
0051069B  50                        PUSH EAX
0051069C  E8 5F 25 1E 00            CALL 0x006f2c00
005106A1  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005106A7  83 C4 0C                  ADD ESP,0xc
005106AA  50                        PUSH EAX
005106AB  6A 01                     PUSH 0x1
005106AD  E8 2E 16 1E 00            CALL 0x006f1ce0
005106B2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005106B5  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005106B8  50                        PUSH EAX
005106B9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005106BC  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
005106BF  6A 01                     PUSH 0x1
005106C1  51                        PUSH ECX
005106C2  52                        PUSH EDX
005106C3  50                        PUSH EAX
005106C4  E8 60 2B EF FF            CALL 0x00403229
005106C9  83 C4 14                  ADD ESP,0x14
005106CC  8D 4D F8                  LEA ECX,[EBP + -0x8]
005106CF  51                        PUSH ECX
005106D0  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
005106D6  E8 05 1A 1E 00            CALL 0x006f20e0
005106DB  8B 56 44                  MOV EDX,dword ptr [ESI + 0x44]
005106DE  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
005106E1  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
005106E4  52                        PUSH EDX
005106E5  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005106EB  50                        PUSH EAX
005106EC  6A FF                     PUSH -0x1
005106EE  51                        PUSH ECX
005106EF  52                        PUSH EDX
005106F0  E8 4B 2F 1A 00            CALL 0x006b3640
005106F5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
005106F8  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005106FD  5E                        POP ESI
005106FE  8B E5                     MOV ESP,EBP
00510700  5D                        POP EBP
00510701  C2 08 00                  RET 0x8
LAB_00510704:
00510704  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00510707  68 C4 2A 7C 00            PUSH 0x7c2ac4
0051070C  68 CC 4C 7A 00            PUSH 0x7a4ccc
00510711  56                        PUSH ESI
00510712  6A 00                     PUSH 0x0
00510714  68 8F 00 00 00            PUSH 0x8f
00510719  68 58 29 7C 00            PUSH 0x7c2958
0051071E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00510724  E8 A7 CD 19 00            CALL 0x006ad4d0
00510729  83 C4 18                  ADD ESP,0x18
0051072C  85 C0                     TEST EAX,EAX
0051072E  74 01                     JZ 0x00510731
00510730  CC                        INT3
LAB_00510731:
00510731  68 8F 00 00 00            PUSH 0x8f
00510736  68 58 29 7C 00            PUSH 0x7c2958
0051073B  6A 00                     PUSH 0x0
0051073D  56                        PUSH ESI
0051073E  E8 FD 56 19 00            CALL 0x006a5e40
00510743  5E                        POP ESI
00510744  8B E5                     MOV ESP,EBP
00510746  5D                        POP EBP
00510747  C2 08 00                  RET 0x8
