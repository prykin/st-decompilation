STGroupC::SaveGrpData:
004240F0  55                        PUSH EBP
004240F1  8B EC                     MOV EBP,ESP
004240F3  83 EC 58                  SUB ESP,0x58
004240F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004240FB  53                        PUSH EBX
004240FC  56                        PUSH ESI
004240FD  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00424100  57                        PUSH EDI
00424101  8D 55 AC                  LEA EDX,[EBP + -0x54]
00424104  8D 4D A8                  LEA ECX,[EBP + -0x58]
00424107  6A 00                     PUSH 0x0
00424109  52                        PUSH EDX
0042410A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0042410D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00424113  E8 D8 96 30 00            CALL 0x0072d7f0
00424118  8B F0                     MOV ESI,EAX
0042411A  83 C4 08                  ADD ESP,0x8
0042411D  85 F6                     TEST ESI,ESI
0042411F  0F 85 6D 01 00 00         JNZ 0x00424292
00424125  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00424128  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0042412B  C7 07 40 00 00 00         MOV dword ptr [EDI],0x40
00424131  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
00424134  85 C0                     TEST EAX,EAX
00424136  74 1F                     JZ 0x00424157
00424138  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042413B  51                        PUSH ECX
0042413C  50                        PUSH EAX
0042413D  E8 DE BE 28 00            CALL 0x006b0020
00424142  8D 55 F8                  LEA EDX,[EBP + -0x8]
00424145  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00424148  52                        PUSH EDX
00424149  E8 12 6F 28 00            CALL 0x006ab060
0042414E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00424151  8B 0F                     MOV ECX,dword ptr [EDI]
00424153  03 C8                     ADD ECX,EAX
00424155  89 0F                     MOV dword ptr [EDI],ECX
LAB_00424157:
00424157  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
0042415A  85 C0                     TEST EAX,EAX
0042415C  74 1F                     JZ 0x0042417d
0042415E  8D 4D FC                  LEA ECX,[EBP + -0x4]
00424161  51                        PUSH ECX
00424162  50                        PUSH EAX
00424163  E8 B8 BE 28 00            CALL 0x006b0020
00424168  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042416B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042416E  52                        PUSH EDX
0042416F  E8 EC 6E 28 00            CALL 0x006ab060
00424174  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00424177  8B 0F                     MOV ECX,dword ptr [EDI]
00424179  03 C8                     ADD ECX,EAX
0042417B  89 0F                     MOV dword ptr [EDI],ECX
LAB_0042417d:
0042417D  8B 0F                     MOV ECX,dword ptr [EDI]
0042417F  51                        PUSH ECX
00424180  E8 EB 6A 28 00            CALL 0x006aac70
00424185  0F BE 56 24               MOVSX EDX,byte ptr [ESI + 0x24]
00424189  8B D8                     MOV EBX,EAX
0042418B  33 C9                     XOR ECX,ECX
0042418D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00424190  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00424193  89 53 04                  MOV dword ptr [EBX + 0x4],EDX
00424196  C7 43 0C 02 00 00 00      MOV dword ptr [EBX + 0xc],0x2
0042419D  8B 46 20                  MOV EAX,dword ptr [ESI + 0x20]
004241A0  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
004241A3  66 8B 56 25               MOV DX,word ptr [ESI + 0x25]
004241A7  66 89 53 18               MOV word ptr [EBX + 0x18],DX
004241AB  66 8B 46 27               MOV AX,word ptr [ESI + 0x27]
004241AF  66 89 43 1A               MOV word ptr [EBX + 0x1a],AX
004241B3  8B 56 31                  MOV EDX,dword ptr [ESI + 0x31]
004241B6  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
004241B9  8B 46 35                  MOV EAX,dword ptr [ESI + 0x35]
004241BC  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
004241BF  8B 56 39                  MOV EDX,dword ptr [ESI + 0x39]
004241C2  89 53 34                  MOV dword ptr [EBX + 0x34],EDX
004241C5  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
004241C8  3B C1                     CMP EAX,ECX
004241CA  74 3E                     JZ 0x0042420a
004241CC  8D 4D FC                  LEA ECX,[EBP + -0x4]
004241CF  51                        PUSH ECX
004241D0  50                        PUSH EAX
004241D1  E8 4A BE 28 00            CALL 0x006b0020
004241D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004241D9  8B F0                     MOV ESI,EAX
004241DB  8B D1                     MOV EDX,ECX
004241DD  8D 7B 40                  LEA EDI,[EBX + 0x40]
004241E0  C1 E9 02                  SHR ECX,0x2
004241E3  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004241E6  F3 A5                     MOVSD.REP ES:EDI,ESI
004241E8  8B CA                     MOV ECX,EDX
004241EA  83 E1 03                  AND ECX,0x3
004241ED  F3 A4                     MOVSB.REP ES:EDI,ESI
004241EF  C7 43 1C 40 00 00 00      MOV dword ptr [EBX + 0x1c],0x40
004241F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004241F9  8D 4D F8                  LEA ECX,[EBP + -0x8]
004241FC  89 43 20                  MOV dword ptr [EBX + 0x20],EAX
004241FF  51                        PUSH ECX
00424200  E8 5B 6E 28 00            CALL 0x006ab060
00424205  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00424208  EB 10                     JMP 0x0042421a
LAB_0042420a:
0042420A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0042420D  C7 43 1C FF FF FF FF      MOV dword ptr [EBX + 0x1c],0xffffffff
00424214  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00424217  89 53 20                  MOV dword ptr [EBX + 0x20],EDX
LAB_0042421a:
0042421A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042421D  8B 76 2D                  MOV ESI,dword ptr [ESI + 0x2d]
00424220  85 F6                     TEST ESI,ESI
00424222  8D 78 40                  LEA EDI,[EAX + 0x40]
00424225  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00424228  74 39                     JZ 0x00424263
0042422A  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042422D  51                        PUSH ECX
0042422E  56                        PUSH ESI
0042422F  E8 EC BD 28 00            CALL 0x006b0020
00424234  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00424237  8B F0                     MOV ESI,EAX
00424239  8B D1                     MOV EDX,ECX
0042423B  03 FB                     ADD EDI,EBX
0042423D  C1 E9 02                  SHR ECX,0x2
00424240  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00424243  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00424246  F3 A5                     MOVSD.REP ES:EDI,ESI
00424248  8B CA                     MOV ECX,EDX
0042424A  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042424D  83 E1 03                  AND ECX,0x3
00424250  52                        PUSH EDX
00424251  F3 A4                     MOVSB.REP ES:EDI,ESI
00424253  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
00424256  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00424259  89 4B 28                  MOV dword ptr [EBX + 0x28],ECX
0042425C  E8 FF 6D 28 00            CALL 0x006ab060
00424261  EB 0D                     JMP 0x00424270
LAB_00424263:
00424263  C7 43 24 FF FF FF FF      MOV dword ptr [EBX + 0x24],0xffffffff
0042426A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042426D  89 43 28                  MOV dword ptr [EBX + 0x28],EAX
LAB_00424270:
00424270  C7 43 38 FF FF FF FF      MOV dword ptr [EBX + 0x38],0xffffffff
00424277  C7 43 3C 00 00 00 00      MOV dword ptr [EBX + 0x3c],0x0
0042427E  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00424281  8B C3                     MOV EAX,EBX
00424283  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00424289  5F                        POP EDI
0042428A  5E                        POP ESI
0042428B  5B                        POP EBX
0042428C  8B E5                     MOV ESP,EBP
0042428E  5D                        POP EBP
0042428F  C2 04 00                  RET 0x4
LAB_00424292:
00424292  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00424295  68 68 51 7A 00            PUSH 0x7a5168
0042429A  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042429F  56                        PUSH ESI
004242A0  6A 00                     PUSH 0x0
004242A2  68 B9 01 00 00            PUSH 0x1b9
004242A7  68 A4 50 7A 00            PUSH 0x7a50a4
004242AC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004242B2  E8 19 92 28 00            CALL 0x006ad4d0
004242B7  83 C4 18                  ADD ESP,0x18
004242BA  85 C0                     TEST EAX,EAX
004242BC  74 01                     JZ 0x004242bf
004242BE  CC                        INT3
LAB_004242bf:
004242BF  68 BA 01 00 00            PUSH 0x1ba
004242C4  68 A4 50 7A 00            PUSH 0x7a50a4
004242C9  6A 00                     PUSH 0x0
004242CB  56                        PUSH ESI
004242CC  E8 6F 1B 28 00            CALL 0x006a5e40
004242D1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004242D4  5F                        POP EDI
004242D5  5E                        POP ESI
004242D6  5B                        POP EBX
004242D7  8B E5                     MOV ESP,EBP
004242D9  5D                        POP EBP
004242DA  C2 04 00                  RET 0x4
