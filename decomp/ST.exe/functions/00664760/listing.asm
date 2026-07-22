AiFltClassTy::sub_00664760:
00664760  55                        PUSH EBP
00664761  8B EC                     MOV EBP,ESP
00664763  83 EC 0C                  SUB ESP,0xc
00664766  56                        PUSH ESI
00664767  8B F1                     MOV ESI,ECX
00664769  57                        PUSH EDI
0066476A  33 FF                     XOR EDI,EDI
0066476C  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00664772  89 BE 9B 00 00 00         MOV dword ptr [ESI + 0x9b],EDI
00664778  89 BE 9F 00 00 00         MOV dword ptr [ESI + 0x9f],EDI
0066477E  89 BE A3 00 00 00         MOV dword ptr [ESI + 0xa3],EDI
00664784  89 BE A7 00 00 00         MOV dword ptr [ESI + 0xa7],EDI
0066478A  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0066478D  3B F8                     CMP EDI,EAX
0066478F  7D 34                     JGE 0x006647c5
LAB_00664791:
00664791  73 0D                     JNC 0x006647a0
00664793  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00664796  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00664799  0F AF C7                  IMUL EAX,EDI
0066479C  03 C2                     ADD EAX,EDX
0066479E  EB 02                     JMP 0x006647a2
LAB_006647a0:
006647A0  33 C0                     XOR EAX,EAX
LAB_006647a2:
006647A2  8D 48 08                  LEA ECX,[EAX + 0x8]
006647A5  8D 50 06                  LEA EDX,[EAX + 0x6]
006647A8  51                        PUSH ECX
006647A9  8D 48 02                  LEA ECX,[EAX + 0x2]
006647AC  52                        PUSH EDX
006647AD  51                        PUSH ECX
006647AE  50                        PUSH EAX
006647AF  E8 52 D1 D9 FF            CALL 0x00401906
006647B4  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
006647BA  83 C4 10                  ADD ESP,0x10
006647BD  47                        INC EDI
006647BE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006647C1  3B F8                     CMP EDI,EAX
006647C3  7C CC                     JL 0x00664791
LAB_006647c5:
006647C5  8B 8E 23 02 00 00         MOV ECX,dword ptr [ESI + 0x223]
006647CB  33 FF                     XOR EDI,EDI
006647CD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006647D0  85 C0                     TEST EAX,EAX
006647D2  7E 40                     JLE 0x00664814
006647D4  3B F8                     CMP EDI,EAX
LAB_006647d6:
006647D6  73 0D                     JNC 0x006647e5
006647D8  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006647DB  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006647DE  0F AF C7                  IMUL EAX,EDI
006647E1  03 C2                     ADD EAX,EDX
006647E3  EB 02                     JMP 0x006647e7
LAB_006647e5:
006647E5  33 C0                     XOR EAX,EAX
LAB_006647e7:
006647E7  8D 48 04                  LEA ECX,[EAX + 0x4]
006647EA  8D 50 02                  LEA EDX,[EAX + 0x2]
006647ED  6A 00                     PUSH 0x0
006647EF  51                        PUSH ECX
006647F0  66 8B 09                  MOV CX,word ptr [ECX]
006647F3  52                        PUSH EDX
006647F4  66 8B 12                  MOV DX,word ptr [EDX]
006647F7  50                        PUSH EAX
006647F8  66 8B 00                  MOV AX,word ptr [EAX]
006647FB  51                        PUSH ECX
006647FC  52                        PUSH EDX
006647FD  50                        PUSH EAX
006647FE  E8 51 05 DA FF            CALL 0x00404d54
00664803  8B 8E 23 02 00 00         MOV ECX,dword ptr [ESI + 0x223]
00664809  83 C4 1C                  ADD ESP,0x1c
0066480C  47                        INC EDI
0066480D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00664810  3B F8                     CMP EDI,EAX
00664812  7C C2                     JL 0x006647d6
LAB_00664814:
00664814  80 BE 63 01 00 00 01      CMP byte ptr [ESI + 0x163],0x1
0066481B  75 71                     JNZ 0x0066488e
0066481D  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
00664823  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00664826  85 C0                     TEST EAX,EAX
00664828  75 64                     JNZ 0x0066488e
0066482A  8B 86 84 02 00 00         MOV EAX,dword ptr [ESI + 0x284]
00664830  85 C0                     TEST EAX,EAX
00664832  74 5A                     JZ 0x0066488e
00664834  66 8B 90 82 00 00 00      MOV DX,word ptr [EAX + 0x82]
0066483B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0066483E  66 83 EA 04               SUB DX,0x4
00664842  51                        PUSH ECX
00664843  66 89 55 F4               MOV word ptr [EBP + -0xc],DX
00664847  66 8B 80 84 00 00 00      MOV AX,word ptr [EAX + 0x84]
0066484E  66 2D 04 00               SUB AX,0x4
00664852  8D 55 FA                  LEA EDX,[EBP + -0x6]
00664855  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
00664859  B8 09 00 00 00            MOV EAX,0x9
0066485E  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00664862  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
00664866  8D 45 F6                  LEA EAX,[EBP + -0xa]
00664869  52                        PUSH EDX
0066486A  8D 4D F4                  LEA ECX,[EBP + -0xc]
0066486D  50                        PUSH EAX
0066486E  51                        PUSH ECX
0066486F  66 C7 45 F8 00 00         MOV word ptr [EBP + -0x8],0x0
00664875  66 C7 45 FE 05 00         MOV word ptr [EBP + -0x2],0x5
0066487B  E8 86 D0 D9 FF            CALL 0x00401906
00664880  83 C4 10                  ADD ESP,0x10
00664883  8D 55 F4                  LEA EDX,[EBP + -0xc]
00664886  8B CE                     MOV ECX,ESI
00664888  52                        PUSH EDX
00664889  E8 99 E1 D9 FF            CALL 0x00402a27
LAB_0066488e:
0066488E  80 BE 22 01 00 00 01      CMP byte ptr [ESI + 0x122],0x1
00664895  75 47                     JNZ 0x006648de
00664897  8B 86 23 02 00 00         MOV EAX,dword ptr [ESI + 0x223]
0066489D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006648A0  85 C9                     TEST ECX,ECX
006648A2  75 3A                     JNZ 0x006648de
006648A4  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
006648AA  33 FF                     XOR EDI,EDI
006648AC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006648AF  85 C0                     TEST EAX,EAX
006648B1  7E 2B                     JLE 0x006648de
006648B3  3B F8                     CMP EDI,EAX
LAB_006648b5:
006648B5  73 0D                     JNC 0x006648c4
006648B7  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006648BA  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
006648BD  0F AF C7                  IMUL EAX,EDI
006648C0  03 C2                     ADD EAX,EDX
006648C2  EB 02                     JMP 0x006648c6
LAB_006648c4:
006648C4  33 C0                     XOR EAX,EAX
LAB_006648c6:
006648C6  6A 05                     PUSH 0x5
006648C8  50                        PUSH EAX
006648C9  8B CE                     MOV ECX,ESI
006648CB  E8 AB F6 D9 FF            CALL 0x00403f7b
006648D0  8B 8E 2F 02 00 00         MOV ECX,dword ptr [ESI + 0x22f]
006648D6  47                        INC EDI
006648D7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006648DA  3B F8                     CMP EDI,EAX
006648DC  7C D7                     JL 0x006648b5
LAB_006648de:
006648DE  5F                        POP EDI
006648DF  5E                        POP ESI
006648E0  8B E5                     MOV ESP,EBP
006648E2  5D                        POP EBP
006648E3  C3                        RET
