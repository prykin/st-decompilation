FUN_00615fd0:
00615FD0  55                        PUSH EBP
00615FD1  8B EC                     MOV EBP,ESP
00615FD3  83 EC 08                  SUB ESP,0x8
00615FD6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00615FD9  53                        PUSH EBX
00615FDA  56                        PUSH ESI
00615FDB  8B F1                     MOV ESI,ECX
00615FDD  33 DB                     XOR EBX,EBX
00615FDF  57                        PUSH EDI
00615FE0  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00615FE3  83 F8 01                  CMP EAX,0x1
00615FE6  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00615FE9  C7 86 48 02 00 00 FF FF FF FF  MOV dword ptr [ESI + 0x248],0xffffffff
00615FF3  0F 84 6C 01 00 00         JZ 0x00616165
00615FF9  0F 8E E4 01 00 00         JLE 0x006161e3
00615FFF  83 F8 03                  CMP EAX,0x3
00616002  0F 8F DB 01 00 00         JG 0x006161e3
00616008  8B 8E FF 02 00 00         MOV ECX,dword ptr [ESI + 0x2ff]
0061600E  3B CB                     CMP ECX,EBX
00616010  0F 84 C1 01 00 00         JZ 0x006161d7
00616016  8D 55 F8                  LEA EDX,[EBP + -0x8]
00616019  8B 01                     MOV EAX,dword ptr [ECX]
0061601B  52                        PUSH EDX
0061601C  8D 55 FE                  LEA EDX,[EBP + -0x2]
0061601F  52                        PUSH EDX
00616020  8D 55 0A                  LEA EDX,[EBP + 0xa]
00616023  52                        PUSH EDX
00616024  8D 55 0E                  LEA EDX,[EBP + 0xe]
00616027  52                        PUSH EDX
00616028  8B 96 03 03 00 00         MOV EDX,dword ptr [ESI + 0x303]
0061602E  52                        PUSH EDX
0061602F  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
00616035  85 C0                     TEST EAX,EAX
00616037  0F 85 9A 01 00 00         JNZ 0x006161d7
0061603D  83 BE F7 01 00 00 02      CMP dword ptr [ESI + 0x1f7],0x2
00616044  0F 85 8B 00 00 00         JNZ 0x006160d5
0061604A  8B 86 FB 02 00 00         MOV EAX,dword ptr [ESI + 0x2fb]
00616050  8B 8E 07 02 00 00         MOV ECX,dword ptr [ESI + 0x207]
00616056  3B C1                     CMP EAX,ECX
00616058  75 41                     JNZ 0x0061609b
0061605A  66 8B 8E FF 01 00 00      MOV CX,word ptr [ESI + 0x1ff]
00616061  8B 96 FB 01 00 00         MOV EDX,dword ptr [ESI + 0x1fb]
00616067  8B 86 FF 02 00 00         MOV EAX,dword ptr [ESI + 0x2ff]
0061606D  68 2A 01 00 00            PUSH 0x12a
00616072  68 B0 00 00 00            PUSH 0xb0
00616077  51                        PUSH ECX
00616078  8B 8E 1B 02 00 00         MOV ECX,dword ptr [ESI + 0x21b]
0061607E  52                        PUSH EDX
0061607F  0F BF 96 01 02 00 00      MOVSX EDX,word ptr [ESI + 0x201]
00616086  50                        PUSH EAX
00616087  51                        PUSH ECX
00616088  52                        PUSH EDX
00616089  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
0061608F  E8 8E DD DE FF            CALL 0x00403e22
00616094  BB 01 00 00 00            MOV EBX,0x1
00616099  EB 3A                     JMP 0x006160d5
LAB_0061609b:
0061609B  66 8B 86 FF 01 00 00      MOV AX,word ptr [ESI + 0x1ff]
006160A2  8B 8E FB 01 00 00         MOV ECX,dword ptr [ESI + 0x1fb]
006160A8  8B 96 FF 02 00 00         MOV EDX,dword ptr [ESI + 0x2ff]
006160AE  68 10 01 00 00            PUSH 0x110
006160B3  68 B0 00 00 00            PUSH 0xb0
006160B8  50                        PUSH EAX
006160B9  8B 86 1B 02 00 00         MOV EAX,dword ptr [ESI + 0x21b]
006160BF  51                        PUSH ECX
006160C0  0F BF 8E 01 02 00 00      MOVSX ECX,word ptr [ESI + 0x201]
006160C7  52                        PUSH EDX
006160C8  50                        PUSH EAX
006160C9  51                        PUSH ECX
006160CA  8D 8E EB 02 00 00         LEA ECX,[ESI + 0x2eb]
006160D0  E8 4D DD DE FF            CALL 0x00403e22
LAB_006160d5:
006160D5  0F BF 4D 0A               MOVSX ECX,word ptr [EBP + 0xa]
006160D9  0F BF 45 0E               MOVSX EAX,word ptr [EBP + 0xe]
006160DD  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
006160E1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006160E4  89 8E 0F 03 00 00         MOV dword ptr [ESI + 0x30f],ECX
006160EA  89 8E 2F 02 00 00         MOV dword ptr [ESI + 0x22f],ECX
006160F0  53                        PUSH EBX
006160F1  6A 00                     PUSH 0x0
006160F3  8B CE                     MOV ECX,ESI
006160F5  89 86 0B 03 00 00         MOV dword ptr [ESI + 0x30b],EAX
006160FB  89 96 13 03 00 00         MOV dword ptr [ESI + 0x313],EDX
00616101  89 BE 07 03 00 00         MOV dword ptr [ESI + 0x307],EDI
00616107  89 86 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EAX
0061610D  89 96 33 02 00 00         MOV dword ptr [ESI + 0x233],EDX
00616113  E8 7B F8 DE FF            CALL 0x00405993
00616118  85 C0                     TEST EAX,EAX
0061611A  0F 84 B7 00 00 00         JZ 0x006161d7
00616120  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00616126  BF 07 00 00 00            MOV EDI,0x7
0061612B  83 E8 00                  SUB EAX,0x0
0061612E  74 1E                     JZ 0x0061614e
00616130  48                        DEC EAX
00616131  0F 85 AC 00 00 00         JNZ 0x006161e3
00616137  68 8C 04 00 00            PUSH 0x48c
0061613C  8B CE                     MOV ECX,ESI
0061613E  E8 C5 FB DE FF            CALL 0x00405d08
00616143  8B C7                     MOV EAX,EDI
00616145  5F                        POP EDI
00616146  5E                        POP ESI
00616147  5B                        POP EBX
00616148  8B E5                     MOV ESP,EBP
0061614A  5D                        POP EBP
0061614B  C2 08 00                  RET 0x8
LAB_0061614e:
0061614E  68 78 04 00 00            PUSH 0x478
00616153  8B CE                     MOV ECX,ESI
00616155  E8 AE FB DE FF            CALL 0x00405d08
0061615A  8B C7                     MOV EAX,EDI
0061615C  5F                        POP EDI
0061615D  5E                        POP ESI
0061615E  5B                        POP EBX
0061615F  8B E5                     MOV ESP,EBP
00616161  5D                        POP EBP
00616162  C2 08 00                  RET 0x8
LAB_00616165:
00616165  8B 86 0F 03 00 00         MOV EAX,dword ptr [ESI + 0x30f]
0061616B  8B 96 0B 03 00 00         MOV EDX,dword ptr [ESI + 0x30b]
00616171  8B 8E 13 03 00 00         MOV ECX,dword ptr [ESI + 0x313]
00616177  89 86 2F 02 00 00         MOV dword ptr [ESI + 0x22f],EAX
0061617D  8B 86 F7 01 00 00         MOV EAX,dword ptr [ESI + 0x1f7]
00616183  89 96 2B 02 00 00         MOV dword ptr [ESI + 0x22b],EDX
00616189  2B C3                     SUB EAX,EBX
0061618B  89 8E 33 02 00 00         MOV dword ptr [ESI + 0x233],ECX
00616191  89 9E FF 02 00 00         MOV dword ptr [ESI + 0x2ff],EBX
00616197  74 0A                     JZ 0x006161a3
00616199  48                        DEC EAX
0061619A  75 13                     JNZ 0x006161af
0061619C  68 8C 04 00 00            PUSH 0x48c
006161A1  EB 05                     JMP 0x006161a8
LAB_006161a3:
006161A3  68 78 04 00 00            PUSH 0x478
LAB_006161a8:
006161A8  8B CE                     MOV ECX,ESI
006161AA  E8 59 FB DE FF            CALL 0x00405d08
LAB_006161af:
006161AF  6A 00                     PUSH 0x0
006161B1  6A 00                     PUSH 0x0
006161B3  8B CE                     MOV ECX,ESI
006161B5  E8 D9 F7 DE FF            CALL 0x00405993
006161BA  85 C0                     TEST EAX,EAX
006161BC  74 19                     JZ 0x006161d7
006161BE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006161C1  BF 07 00 00 00            MOV EDI,0x7
006161C6  8B C7                     MOV EAX,EDI
006161C8  89 96 07 03 00 00         MOV dword ptr [ESI + 0x307],EDX
006161CE  5F                        POP EDI
006161CF  5E                        POP ESI
006161D0  5B                        POP EBX
006161D1  8B E5                     MOV ESP,EBP
006161D3  5D                        POP EBP
006161D4  C2 08 00                  RET 0x8
LAB_006161d7:
006161D7  8B CE                     MOV ECX,ESI
006161D9  E8 5F E4 DE FF            CALL 0x0040463d
006161DE  BF 09 00 00 00            MOV EDI,0x9
LAB_006161e3:
006161E3  8B C7                     MOV EAX,EDI
006161E5  5F                        POP EDI
006161E6  5E                        POP ESI
006161E7  5B                        POP EBX
006161E8  8B E5                     MOV ESP,EBP
006161EA  5D                        POP EBP
006161EB  C2 08 00                  RET 0x8
