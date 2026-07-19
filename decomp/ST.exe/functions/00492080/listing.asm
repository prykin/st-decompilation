STBoatC::NotReadyForLoading:
00492080  55                        PUSH EBP
00492081  8B EC                     MOV EBP,ESP
00492083  83 EC 10                  SUB ESP,0x10
00492086  56                        PUSH ESI
00492087  8B F1                     MOV ESI,ECX
00492089  8B 86 5D 04 00 00         MOV EAX,dword ptr [ESI + 0x45d]
0049208F  83 F8 0F                  CMP EAX,0xf
00492092  74 09                     JZ 0x0049209d
00492094  83 F8 0E                  CMP EAX,0xe
00492097  0F 85 46 01 00 00         JNZ 0x004921e3
LAB_0049209d:
0049209D  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
004920A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004920A6  3B C1                     CMP EAX,ECX
004920A8  0F 85 35 01 00 00         JNZ 0x004921e3
004920AE  83 BE 96 05 00 00 02      CMP dword ptr [ESI + 0x596],0x2
004920B5  0F 85 28 01 00 00         JNZ 0x004921e3
004920BB  8D 4D F0                  LEA ECX,[EBP + -0x10]
004920BE  51                        PUSH ECX
004920BF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004920C5  50                        PUSH EAX
004920C6  E8 05 42 25 00            CALL 0x006e62d0
004920CB  83 F8 FC                  CMP EAX,-0x4
004920CE  75 40                     JNZ 0x00492110
004920D0  68 8C BB 7A 00            PUSH 0x7abb8c
004920D5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004920DA  6A 00                     PUSH 0x0
004920DC  6A 00                     PUSH 0x0
004920DE  68 C8 50 00 00            PUSH 0x50c8
004920E3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004920E8  E8 E3 B3 21 00            CALL 0x006ad4d0
004920ED  83 C4 18                  ADD ESP,0x18
004920F0  85 C0                     TEST EAX,EAX
004920F2  74 01                     JZ 0x004920f5
004920F4  CC                        INT3
LAB_004920f5:
004920F5  C7 86 96 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x596],0x1
004920FF  C7 86 92 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x592],0x0
00492109  5E                        POP ESI
0049210A  8B E5                     MOV ESP,EBP
0049210C  5D                        POP EBP
0049210D  C2 04 00                  RET 0x4
LAB_00492110:
00492110  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00492113  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00492116  53                        PUSH EBX
00492117  57                        PUSH EDI
00492118  8B 11                     MOV EDX,dword ptr [ECX]
0049211A  50                        PUSH EAX
0049211B  FF 92 AC 00 00 00         CALL dword ptr [EDX + 0xac]
00492121  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00492124  8D BE 8C 05 00 00         LEA EDI,[ESI + 0x58c]
0049212A  8D 9E 8A 05 00 00         LEA EBX,[ESI + 0x58a]
00492130  8D 86 88 05 00 00         LEA EAX,[ESI + 0x588]
00492136  57                        PUSH EDI
00492137  53                        PUSH EBX
00492138  50                        PUSH EAX
00492139  E8 CD 3D F7 FF            CALL 0x00405f0b
0049213E  8D 4D FA                  LEA ECX,[EBP + -0x6]
00492141  8D 55 F8                  LEA EDX,[EBP + -0x8]
00492144  51                        PUSH ECX
00492145  8D 45 F6                  LEA EAX,[EBP + -0xa]
00492148  52                        PUSH EDX
00492149  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049214C  50                        PUSH EAX
0049214D  8D 55 0A                  LEA EDX,[EBP + 0xa]
00492150  51                        PUSH ECX
00492151  66 8B 0F                  MOV CX,word ptr [EDI]
00492154  8D 45 FE                  LEA EAX,[EBP + -0x2]
00492157  52                        PUSH EDX
00492158  66 8B 13                  MOV DX,word ptr [EBX]
0049215B  50                        PUSH EAX
0049215C  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00492163  51                        PUSH ECX
00492164  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00492168  52                        PUSH EDX
00492169  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
0049216D  50                        PUSH EAX
0049216E  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00492172  51                        PUSH ECX
00492173  52                        PUSH EDX
00492174  50                        PUSH EAX
00492175  8B CE                     MOV ECX,ESI
00492177  E8 80 0B F7 FF            CALL 0x00402cfc
0049217C  5F                        POP EDI
0049217D  83 F8 FE                  CMP EAX,-0x2
00492180  5B                        POP EBX
00492181  75 1B                     JNZ 0x0049219e
00492183  C7 86 96 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x596],0x1
0049218D  C7 86 92 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x592],0x0
00492197  5E                        POP ESI
00492198  8B E5                     MOV ESP,EBP
0049219A  5D                        POP EBP
0049219B  C2 04 00                  RET 0x4
LAB_0049219e:
0049219E  83 F8 FF                  CMP EAX,-0x1
004921A1  C7 86 96 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x596],0x0
004921AB  75 10                     JNZ 0x004921bd
004921AD  0F BF 4D FA               MOVSX ECX,word ptr [EBP + -0x6]
004921B1  0F BF 55 F8               MOVSX EDX,word ptr [EBP + -0x8]
004921B5  0F BF 45 F6               MOVSX EAX,word ptr [EBP + -0xa]
004921B9  51                        PUSH ECX
004921BA  52                        PUSH EDX
004921BB  EB 0E                     JMP 0x004921cb
LAB_004921bd:
004921BD  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
004921C1  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
004921C5  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
004921C9  51                        PUSH ECX
004921CA  52                        PUSH EDX
LAB_004921cb:
004921CB  50                        PUSH EAX
004921CC  8B CE                     MOV ECX,ESI
004921CE  E8 98 2D F7 FF            CALL 0x00404f6b
004921D3  6A 00                     PUSH 0x0
004921D5  8B CE                     MOV ECX,ESI
004921D7  E8 02 10 F7 FF            CALL 0x004031de
004921DC  5E                        POP ESI
004921DD  8B E5                     MOV ESP,EBP
004921DF  5D                        POP EBP
004921E0  C2 04 00                  RET 0x4
LAB_004921e3:
004921E3  68 58 BB 7A 00            PUSH 0x7abb58
004921E8  68 CC 4C 7A 00            PUSH 0x7a4ccc
004921ED  6A 00                     PUSH 0x0
004921EF  6A 00                     PUSH 0x0
004921F1  68 DB 50 00 00            PUSH 0x50db
004921F6  68 3C 9D 7A 00            PUSH 0x7a9d3c
004921FB  E8 D0 B2 21 00            CALL 0x006ad4d0
00492200  83 C4 18                  ADD ESP,0x18
00492203  85 C0                     TEST EAX,EAX
00492205  74 01                     JZ 0x00492208
00492207  CC                        INT3
LAB_00492208:
00492208  5E                        POP ESI
00492209  8B E5                     MOV ESP,EBP
0049220B  5D                        POP EBP
0049220C  C2 04 00                  RET 0x4
