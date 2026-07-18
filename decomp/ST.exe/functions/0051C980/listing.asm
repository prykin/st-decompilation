HelpPanelTy::SpecProc:
0051C980  55                        PUSH EBP
0051C981  8B EC                     MOV EBP,ESP
0051C983  83 EC 70                  SUB ESP,0x70
0051C986  8B 81 48 02 00 00         MOV EAX,dword ptr [ECX + 0x248]
0051C98C  53                        PUSH EBX
0051C98D  56                        PUSH ESI
0051C98E  57                        PUSH EDI
0051C98F  33 FF                     XOR EDI,EDI
0051C991  6A 04                     PUSH 0x4
0051C993  50                        PUSH EAX
0051C994  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0051C997  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0051C99A  E8 01 EA 1E 00            CALL 0x0070b3a0
0051C99F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0051C9A2  A1 74 A1 7F 00            MOV EAX,[0x007fa174]
0051C9A7  83 C4 08                  ADD ESP,0x8
0051C9AA  3B C7                     CMP EAX,EDI
0051C9AC  0F 84 98 07 00 00         JZ 0x0051d14a
0051C9B2  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0051C9B8  8D 45 94                  LEA EAX,[EBP + -0x6c]
0051C9BB  8D 55 90                  LEA EDX,[EBP + -0x70]
0051C9BE  57                        PUSH EDI
0051C9BF  50                        PUSH EAX
0051C9C0  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
0051C9C3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051C9C9  E8 22 0E 21 00            CALL 0x0072d7f0
0051C9CE  8B F0                     MOV ESI,EAX
0051C9D0  83 C4 08                  ADD ESP,0x8
0051C9D3  3B F7                     CMP ESI,EDI
0051C9D5  0F 85 32 07 00 00         JNZ 0x0051d10d
0051C9DB  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0051C9DE  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0051C9E1  84 C0                     TEST AL,AL
0051C9E3  0F 85 92 00 00 00         JNZ 0x0051ca7b
0051C9E9  8A 83 A1 01 00 00         MOV AL,byte ptr [EBX + 0x1a1]
0051C9EF  84 C0                     TEST AL,AL
0051C9F1  74 17                     JZ 0x0051ca0a
0051C9F3  3C 06                     CMP AL,0x6
0051C9F5  74 13                     JZ 0x0051ca0a
0051C9F7  3C 0A                     CMP AL,0xa
0051C9F9  74 0F                     JZ 0x0051ca0a
0051C9FB  C6 83 A2 01 00 00 00      MOV byte ptr [EBX + 0x1a2],0x0
0051CA02  89 BB AB 01 00 00         MOV dword ptr [EBX + 0x1ab],EDI
0051CA08  EB 12                     JMP 0x0051ca1c
LAB_0051ca0a:
0051CA0A  8B 8B A3 01 00 00         MOV ECX,dword ptr [EBX + 0x1a3]
0051CA10  88 83 A2 01 00 00         MOV byte ptr [EBX + 0x1a2],AL
0051CA16  89 8B AB 01 00 00         MOV dword ptr [EBX + 0x1ab],ECX
LAB_0051ca1c:
0051CA1C  8B 83 78 01 00 00         MOV EAX,dword ptr [EBX + 0x178]
0051CA22  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051CA25  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0051CA28  C6 83 A1 01 00 00 0B      MOV byte ptr [EBX + 0x1a1],0xb
0051CA2F  85 C0                     TEST EAX,EAX
0051CA31  89 BB A3 01 00 00         MOV dword ptr [EBX + 0x1a3],EDI
0051CA37  89 B3 A7 01 00 00         MOV dword ptr [EBX + 0x1a7],ESI
0051CA3D  66 C7 83 AF 01 00 00 32 00  MOV word ptr [EBX + 0x1af],0x32
0051CA46  66 C7 83 B1 01 00 00 05 00  MOV word ptr [EBX + 0x1b1],0x5
0051CA4F  74 30                     JZ 0x0051ca81
0051CA51  C7 43 28 02 42 00 00      MOV dword ptr [EBX + 0x28],0x4202
0051CA58  66 C7 43 2C 00 00         MOV word ptr [EBX + 0x2c],0x0
0051CA5E  66 C7 43 2E 02 00         MOV word ptr [EBX + 0x2e],0x2
0051CA64  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
0051CA67  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
0051CA6D  85 C9                     TEST ECX,ECX
0051CA6F  74 10                     JZ 0x0051ca81
0051CA71  8B 11                     MOV EDX,dword ptr [ECX]
0051CA73  8D 43 18                  LEA EAX,[EBX + 0x18]
0051CA76  50                        PUSH EAX
0051CA77  FF 12                     CALL dword ptr [EDX]
0051CA79  EB 06                     JMP 0x0051ca81
LAB_0051ca7b:
0051CA7B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051CA7E  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
LAB_0051ca81:
0051CA81  6A 00                     PUSH 0x0
0051CA83  56                        PUSH ESI
0051CA84  57                        PUSH EDI
0051CA85  E8 FA 6B EE FF            CALL 0x00403684
0051CA8A  83 C4 0C                  ADD ESP,0xc
0051CA8D  8B CB                     MOV ECX,EBX
0051CA8F  50                        PUSH EAX
0051CA90  56                        PUSH ESI
0051CA91  68 FF 55 00 00            PUSH 0x55ff
0051CA96  E8 5E 74 EE FF            CALL 0x00403ef9
0051CA9B  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
0051CAA1  8D 55 FC                  LEA EDX,[EBP + -0x4]
0051CAA4  51                        PUSH ECX
0051CAA5  56                        PUSH ESI
0051CAA6  57                        PUSH EDI
0051CAA7  52                        PUSH EDX
0051CAA8  8B CB                     MOV ECX,EBX
0051CAAA  E8 C9 72 EE FF            CALL 0x00403d78
0051CAAF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CAB2  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CAB8  6A 0F                     PUSH 0xf
0051CABA  68 9C 01 00 00            PUSH 0x19c
0051CABF  50                        PUSH EAX
0051CAC0  6A 00                     PUSH 0x0
0051CAC2  6A 00                     PUSH 0x0
0051CAC4  51                        PUSH ECX
0051CAC5  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CACB  E8 C0 3F 1F 00            CALL 0x00710a90
0051CAD0  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051CAD6  6A 03                     PUSH 0x3
0051CAD8  6A FF                     PUSH -0x1
0051CADA  6A FF                     PUSH -0x1
0051CADC  52                        PUSH EDX
0051CADD  68 4A 56 00 00            PUSH 0x564a
0051CAE2  E8 59 36 19 00            CALL 0x006b0140
0051CAE7  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CAED  50                        PUSH EAX
0051CAEE  E8 CD 4E 1F 00            CALL 0x007119c0
0051CAF3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CAF6  83 C0 0F                  ADD EAX,0xf
0051CAF9  81 FF FE 00 00 00         CMP EDI,0xfe
0051CAFF  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051CB02  0F 85 A3 01 00 00         JNZ 0x0051ccab
0051CB08  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CB0E  6A 0F                     PUSH 0xf
0051CB10  68 91 00 00 00            PUSH 0x91
0051CB15  50                        PUSH EAX
0051CB16  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051CB1C  6A 00                     PUSH 0x0
0051CB1E  6A 00                     PUSH 0x0
0051CB20  50                        PUSH EAX
0051CB21  E8 6A 3F 1F 00            CALL 0x00710a90
0051CB26  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051CB2C  6A 03                     PUSH 0x3
0051CB2E  6A FF                     PUSH -0x1
0051CB30  6A FD                     PUSH -0x3
0051CB32  51                        PUSH ECX
0051CB33  68 61 56 00 00            PUSH 0x5661
0051CB38  E8 03 36 19 00            CALL 0x006b0140
0051CB3D  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CB43  50                        PUSH EAX
0051CB44  E8 77 4E 1F 00            CALL 0x007119c0
0051CB49  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CB4C  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051CB52  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CB58  6A 0F                     PUSH 0xf
0051CB5A  68 06 01 00 00            PUSH 0x106
0051CB5F  52                        PUSH EDX
0051CB60  68 96 00 00 00            PUSH 0x96
0051CB65  6A 00                     PUSH 0x0
0051CB67  50                        PUSH EAX
0051CB68  E8 23 3F 1F 00            CALL 0x00710a90
0051CB6D  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051CB73  8B C6                     MOV EAX,ESI
0051CB75  83 E8 03                  SUB EAX,0x3
0051CB78  51                        PUSH ECX
0051CB79  F7 D8                     NEG EAX
0051CB7B  1B C0                     SBB EAX,EAX
0051CB7D  6A 00                     PUSH 0x0
0051CB7F  24 F3                     AND AL,0xf3
0051CB81  56                        PUSH ESI
0051CB82  83 C0 5F                  ADD EAX,0x5f
0051CB85  50                        PUSH EAX
0051CB86  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0051CB89  E8 F6 6A EE FF            CALL 0x00403684
0051CB8E  83 C4 0C                  ADD ESP,0xc
0051CB91  50                        PUSH EAX
0051CB92  E8 A9 35 19 00            CALL 0x006b0140
0051CB97  8B F8                     MOV EDI,EAX
0051CB99  83 C9 FF                  OR ECX,0xffffffff
0051CB9C  33 C0                     XOR EAX,EAX
0051CB9E  6A 0A                     PUSH 0xa
0051CBA0  F2 AE                     SCASB.REPNE ES:EDI
0051CBA2  F7 D1                     NOT ECX
0051CBA4  2B F9                     SUB EDI,ECX
0051CBA6  68 3A F3 80 00            PUSH 0x80f33a
0051CBAB  8B D1                     MOV EDX,ECX
0051CBAD  8B F7                     MOV ESI,EDI
0051CBAF  BF 3A F3 80 00            MOV EDI,0x80f33a
0051CBB4  C1 E9 02                  SHR ECX,0x2
0051CBB7  F3 A5                     MOVSD.REP ES:EDI,ESI
0051CBB9  8B CA                     MOV ECX,EDX
0051CBBB  83 E1 03                  AND ECX,0x3
0051CBBE  F3 A4                     MOVSB.REP ES:EDI,ESI
0051CBC0  E8 9B 19 21 00            CALL 0x0072e560
0051CBC5  83 C4 08                  ADD ESP,0x8
0051CBC8  85 C0                     TEST EAX,EAX
0051CBCA  74 12                     JZ 0x0051cbde
LAB_0051cbcc:
0051CBCC  6A 0A                     PUSH 0xa
0051CBCE  50                        PUSH EAX
0051CBCF  C6 00 20                  MOV byte ptr [EAX],0x20
0051CBD2  E8 89 19 21 00            CALL 0x0072e560
0051CBD7  83 C4 08                  ADD ESP,0x8
0051CBDA  85 C0                     TEST EAX,EAX
0051CBDC  75 EE                     JNZ 0x0051cbcc
LAB_0051cbde:
0051CBDE  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051CBE4  33 C0                     XOR EAX,EAX
0051CBE6  80 F9 03                  CMP CL,0x3
0051CBE9  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CBEF  0F 95 C0                  SETNZ AL
0051CBF2  48                        DEC EAX
0051CBF3  83 E0 05                  AND EAX,0x5
0051CBF6  50                        PUSH EAX
0051CBF7  6A FF                     PUSH -0x1
0051CBF9  6A 01                     PUSH 0x1
0051CBFB  68 3A F3 80 00            PUSH 0x80f33a
0051CC00  E8 BB 4D 1F 00            CALL 0x007119c0
0051CC05  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CC08  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051CC0B  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0051CC0E  83 C0 0F                  ADD EAX,0xf
0051CC11  51                        PUSH ECX
0051CC12  57                        PUSH EDI
0051CC13  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051CC16  E8 DA 8A EE FF            CALL 0x004056f5
0051CC1B  8B 93 40 02 00 00         MOV EDX,dword ptr [EBX + 0x240]
0051CC21  50                        PUSH EAX
0051CC22  52                        PUSH EDX
0051CC23  E8 78 E7 1E 00            CALL 0x0070b3a0
0051CC28  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CC2E  50                        PUSH EAX
0051CC2F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CC32  6A 01                     PUSH 0x1
0051CC34  50                        PUSH EAX
0051CC35  68 96 00 00 00            PUSH 0x96
0051CC3A  51                        PUSH ECX
0051CC3B  E8 E9 65 EE FF            CALL 0x00403229
0051CC40  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051CC43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CC46  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051CC4C  56                        PUSH ESI
0051CC4D  83 C2 FE                  ADD EDX,-0x2
0051CC50  6A 06                     PUSH 0x6
0051CC52  52                        PUSH EDX
0051CC53  68 94 00 00 00            PUSH 0x94
0051CC58  50                        PUSH EAX
0051CC59  E8 CB 65 EE FF            CALL 0x00403229
0051CC5E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CC61  C7 45 D4 94 00 00 00      MOV dword ptr [EBP + -0x2c],0x94
0051CC68  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051CC6B  83 C2 FE                  ADD EDX,-0x2
0051CC6E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0051CC71  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051CC74  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051CC77  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051CC7A  83 C4 38                  ADD ESP,0x38
0051CC7D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0051CC80  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051CC86  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0051CC89  52                        PUSH EDX
0051CC8A  50                        PUSH EAX
0051CC8B  C6 45 E4 02               MOV byte ptr [EBP + -0x1c],0x2
0051CC8F  89 7D E5                  MOV dword ptr [EBP + -0x1b],EDI
0051CC92  89 4D E9                  MOV dword ptr [EBP + -0x17],ECX
0051CC95  E8 26 15 19 00            CALL 0x006ae1c0
0051CC9A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CC9D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
0051CCA0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0051CCA3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0051CCA6  03 C1                     ADD EAX,ECX
0051CCA8  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0051ccab:
0051CCAB  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CCB1  6A 0F                     PUSH 0xf
0051CCB3  68 91 00 00 00            PUSH 0x91
0051CCB8  50                        PUSH EAX
0051CCB9  6A 00                     PUSH 0x0
0051CCBB  6A 00                     PUSH 0x0
0051CCBD  51                        PUSH ECX
0051CCBE  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CCC4  E8 C7 3D 1F 00            CALL 0x00710a90
0051CCC9  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051CCCF  6A 03                     PUSH 0x3
0051CCD1  6A FF                     PUSH -0x1
0051CCD3  6A FD                     PUSH -0x3
0051CCD5  52                        PUSH EDX
0051CCD6  68 55 56 00 00            PUSH 0x5655
0051CCDB  E8 60 34 19 00            CALL 0x006b0140
0051CCE0  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CCE6  50                        PUSH EAX
0051CCE7  E8 D4 4C 1F 00            CALL 0x007119c0
0051CCEC  A1 18 76 80 00            MOV EAX,[0x00807618]
0051CCF1  50                        PUSH EAX
0051CCF2  6A 01                     PUSH 0x1
0051CCF4  56                        PUSH ESI
0051CCF5  57                        PUSH EDI
0051CCF6  E8 89 69 EE FF            CALL 0x00403684
0051CCFB  83 C4 0C                  ADD ESP,0xc
0051CCFE  50                        PUSH EAX
0051CCFF  E8 3C 34 19 00            CALL 0x006b0140
0051CD04  8B F8                     MOV EDI,EAX
0051CD06  83 C9 FF                  OR ECX,0xffffffff
0051CD09  33 C0                     XOR EAX,EAX
0051CD0B  6A 01                     PUSH 0x1
0051CD0D  F2 AE                     SCASB.REPNE ES:EDI
0051CD0F  F7 D1                     NOT ECX
0051CD11  2B F9                     SUB EDI,ECX
0051CD13  68 06 01 00 00            PUSH 0x106
0051CD18  8B D1                     MOV EDX,ECX
0051CD1A  8B F7                     MOV ESI,EDI
0051CD1C  BF 3A F3 80 00            MOV EDI,0x80f33a
0051CD21  68 D8 21 7C 00            PUSH 0x7c21d8
0051CD26  C1 E9 02                  SHR ECX,0x2
0051CD29  F3 A5                     MOVSD.REP ES:EDI,ESI
0051CD2B  8B CA                     MOV ECX,EDX
0051CD2D  68 3A F3 80 00            PUSH 0x80f33a
0051CD32  83 E1 03                  AND ECX,0x3
0051CD35  68 3A F3 80 00            PUSH 0x80f33a
0051CD3A  F3 A4                     MOVSB.REP ES:EDI,ESI
0051CD3C  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CD42  E8 C9 5E 1F 00            CALL 0x00712c10
0051CD47  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CD4D  68 3A F3 80 00            PUSH 0x80f33a
0051CD52  E8 89 46 1F 00            CALL 0x007113e0
0051CD57  8B F0                     MOV ESI,EAX
0051CD59  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CD5C  56                        PUSH ESI
0051CD5D  50                        PUSH EAX
0051CD5E  8B CB                     MOV ECX,EBX
0051CD60  E8 0B 4B EE FF            CALL 0x00401870
0051CD65  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CD68  8B FE                     MOV EDI,ESI
0051CD6A  81 E7 FF FF 00 00         AND EDI,0xffff
0051CD70  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051CD76  8D 4F 02                  LEA ECX,[EDI + 0x2]
0051CD79  51                        PUSH ECX
0051CD7A  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CD80  68 06 01 00 00            PUSH 0x106
0051CD85  52                        PUSH EDX
0051CD86  68 96 00 00 00            PUSH 0x96
0051CD8B  6A 00                     PUSH 0x0
0051CD8D  50                        PUSH EAX
0051CD8E  E8 FD 3C 1F 00            CALL 0x00710a90
0051CD93  A0 4E 87 80 00            MOV AL,[0x0080874e]
0051CD98  33 C9                     XOR ECX,ECX
0051CD9A  3C 03                     CMP AL,0x3
0051CD9C  6A FF                     PUSH -0x1
0051CD9E  0F 95 C1                  SETNZ CL
0051CDA1  49                        DEC ECX
0051CDA2  6A FF                     PUSH -0x1
0051CDA4  83 E1 05                  AND ECX,0x5
0051CDA7  51                        PUSH ECX
0051CDA8  6A FF                     PUSH -0x1
0051CDAA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CDB0  6A 01                     PUSH 0x1
0051CDB2  68 3A F3 80 00            PUSH 0x80f33a
0051CDB7  E8 B4 4D 1F 00            CALL 0x00711b70
0051CDBC  66 83 FE 0F               CMP SI,0xf
0051CDC0  77 05                     JA 0x0051cdc7
0051CDC2  BF 0F 00 00 00            MOV EDI,0xf
LAB_0051cdc7:
0051CDC7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CDCA  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051CDD0  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CDD6  03 C7                     ADD EAX,EDI
0051CDD8  6A 0F                     PUSH 0xf
0051CDDA  68 91 00 00 00            PUSH 0x91
0051CDDF  50                        PUSH EAX
0051CDE0  6A 00                     PUSH 0x0
0051CDE2  6A 00                     PUSH 0x0
0051CDE4  52                        PUSH EDX
0051CDE5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051CDE8  E8 A3 3C 1F 00            CALL 0x00710a90
0051CDED  A1 18 76 80 00            MOV EAX,[0x00807618]
0051CDF2  6A 03                     PUSH 0x3
0051CDF4  6A FF                     PUSH -0x1
0051CDF6  6A FD                     PUSH -0x3
0051CDF8  50                        PUSH EAX
0051CDF9  68 2A 56 00 00            PUSH 0x562a
0051CDFE  E8 3D 33 19 00            CALL 0x006b0140
0051CE03  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CE09  50                        PUSH EAX
0051CE0A  E8 B1 4B 1F 00            CALL 0x007119c0
0051CE0F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051CE12  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051CE18  6A 0F                     PUSH 0xf
0051CE1A  68 06 01 00 00            PUSH 0x106
0051CE1F  51                        PUSH ECX
0051CE20  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CE26  68 96 00 00 00            PUSH 0x96
0051CE2B  6A 00                     PUSH 0x0
0051CE2D  52                        PUSH EDX
0051CE2E  E8 5D 3C 1F 00            CALL 0x00710a90
0051CE33  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0051CE36  8B C1                     MOV EAX,ECX
0051CE38  48                        DEC EAX
0051CE39  74 15                     JZ 0x0051ce50
0051CE3B  48                        DEC EAX
0051CE3C  74 09                     JZ 0x0051ce47
0051CE3E  C7 45 F8 1B 00 00 00      MOV dword ptr [EBP + -0x8],0x1b
0051CE45  EB 10                     JMP 0x0051ce57
LAB_0051ce47:
0051CE47  C7 45 F8 13 00 00 00      MOV dword ptr [EBP + -0x8],0x13
0051CE4E  EB 07                     JMP 0x0051ce57
LAB_0051ce50:
0051CE50  C7 45 F8 07 00 00 00      MOV dword ptr [EBP + -0x8],0x7
LAB_0051ce57:
0051CE57  A1 18 76 80 00            MOV EAX,[0x00807618]
0051CE5C  50                        PUSH EAX
0051CE5D  6A 00                     PUSH 0x0
0051CE5F  51                        PUSH ECX
0051CE60  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051CE63  51                        PUSH ECX
0051CE64  E8 1B 68 EE FF            CALL 0x00403684
0051CE69  83 C4 0C                  ADD ESP,0xc
0051CE6C  50                        PUSH EAX
0051CE6D  E8 CE 32 19 00            CALL 0x006b0140
0051CE72  8B F8                     MOV EDI,EAX
0051CE74  83 C9 FF                  OR ECX,0xffffffff
0051CE77  33 C0                     XOR EAX,EAX
0051CE79  6A 0A                     PUSH 0xa
0051CE7B  F2 AE                     SCASB.REPNE ES:EDI
0051CE7D  F7 D1                     NOT ECX
0051CE7F  2B F9                     SUB EDI,ECX
0051CE81  68 3A F3 80 00            PUSH 0x80f33a
0051CE86  8B D1                     MOV EDX,ECX
0051CE88  8B F7                     MOV ESI,EDI
0051CE8A  BF 3A F3 80 00            MOV EDI,0x80f33a
0051CE8F  C1 E9 02                  SHR ECX,0x2
0051CE92  F3 A5                     MOVSD.REP ES:EDI,ESI
0051CE94  8B CA                     MOV ECX,EDX
0051CE96  83 E1 03                  AND ECX,0x3
0051CE99  F3 A4                     MOVSB.REP ES:EDI,ESI
0051CE9B  E8 C0 16 21 00            CALL 0x0072e560
0051CEA0  83 C4 08                  ADD ESP,0x8
0051CEA3  85 C0                     TEST EAX,EAX
0051CEA5  74 12                     JZ 0x0051ceb9
LAB_0051cea7:
0051CEA7  6A 0A                     PUSH 0xa
0051CEA9  50                        PUSH EAX
0051CEAA  C6 00 20                  MOV byte ptr [EAX],0x20
0051CEAD  E8 AE 16 21 00            CALL 0x0072e560
0051CEB2  83 C4 08                  ADD ESP,0x8
0051CEB5  85 C0                     TEST EAX,EAX
0051CEB7  75 EE                     JNZ 0x0051cea7
LAB_0051ceb9:
0051CEB9  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051CEBF  33 C0                     XOR EAX,EAX
0051CEC1  80 F9 03                  CMP CL,0x3
0051CEC4  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CECA  0F 95 C0                  SETNZ AL
0051CECD  48                        DEC EAX
0051CECE  83 E0 05                  AND EAX,0x5
0051CED1  50                        PUSH EAX
0051CED2  6A FF                     PUSH -0x1
0051CED4  6A 01                     PUSH 0x1
0051CED6  68 3A F3 80 00            PUSH 0x80f33a
0051CEDB  E8 E0 4A 1F 00            CALL 0x007119c0
0051CEE0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051CEE3  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
0051CEE6  83 C1 0F                  ADD ECX,0xf
0051CEE9  57                        PUSH EDI
0051CEEA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0051CEED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051CEF0  51                        PUSH ECX
0051CEF1  E8 FF 87 EE FF            CALL 0x004056f5
0051CEF6  8B 93 3C 02 00 00         MOV EDX,dword ptr [EBX + 0x23c]
0051CEFC  50                        PUSH EAX
0051CEFD  52                        PUSH EDX
0051CEFE  E8 9D E4 1E 00            CALL 0x0070b3a0
0051CF03  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CF09  50                        PUSH EAX
0051CF0A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CF0D  6A 01                     PUSH 0x1
0051CF0F  50                        PUSH EAX
0051CF10  68 96 00 00 00            PUSH 0x96
0051CF15  51                        PUSH ECX
0051CF16  E8 0E 63 EE FF            CALL 0x00403229
0051CF1B  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0051CF1E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CF21  8B 83 18 02 00 00         MOV EAX,dword ptr [EBX + 0x218]
0051CF27  56                        PUSH ESI
0051CF28  83 C2 FE                  ADD EDX,-0x2
0051CF2B  6A 06                     PUSH 0x6
0051CF2D  52                        PUSH EDX
0051CF2E  68 94 00 00 00            PUSH 0x94
0051CF33  50                        PUSH EAX
0051CF34  E8 F0 62 EE FF            CALL 0x00403229
0051CF39  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051CF3C  C7 45 D4 94 00 00 00      MOV dword ptr [EBP + -0x2c],0x94
0051CF43  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0051CF46  83 C2 FE                  ADD EDX,-0x2
0051CF49  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0051CF4C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0051CF4F  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0051CF52  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0051CF55  83 C4 38                  ADD ESP,0x38
0051CF58  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0051CF5B  8B 83 D7 01 00 00         MOV EAX,dword ptr [EBX + 0x1d7]
0051CF61  8D 55 D4                  LEA EDX,[EBP + -0x2c]
0051CF64  52                        PUSH EDX
0051CF65  50                        PUSH EAX
0051CF66  C6 45 E4 03               MOV byte ptr [EBP + -0x1c],0x3
0051CF6A  89 4D E5                  MOV dword ptr [EBP + -0x1b],ECX
0051CF6D  89 7D E9                  MOV dword ptr [EBP + -0x17],EDI
0051CF70  E8 4B 12 19 00            CALL 0x006ae1c0
0051CF75  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CF78  8B 56 08                  MOV EDX,dword ptr [ESI + 0x8]
0051CF7B  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CF81  03 C2                     ADD EAX,EDX
0051CF83  6A 0F                     PUSH 0xf
0051CF85  68 91 00 00 00            PUSH 0x91
0051CF8A  50                        PUSH EAX
0051CF8B  6A 00                     PUSH 0x0
0051CF8D  6A 00                     PUSH 0x0
0051CF8F  51                        PUSH ECX
0051CF90  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CF96  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051CF99  E8 F2 3A 1F 00            CALL 0x00710a90
0051CF9E  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0051CFA4  6A 03                     PUSH 0x3
0051CFA6  6A FF                     PUSH -0x1
0051CFA8  6A FD                     PUSH -0x3
0051CFAA  52                        PUSH EDX
0051CFAB  68 62 56 00 00            PUSH 0x5662
0051CFB0  E8 8B 31 19 00            CALL 0x006b0140
0051CFB5  50                        PUSH EAX
0051CFB6  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CFBC  E8 FF 49 1F 00            CALL 0x007119c0
0051CFC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051CFC4  8B 8B 18 02 00 00         MOV ECX,dword ptr [EBX + 0x218]
0051CFCA  6A 0F                     PUSH 0xf
0051CFCC  68 06 01 00 00            PUSH 0x106
0051CFD1  50                        PUSH EAX
0051CFD2  68 96 00 00 00            PUSH 0x96
0051CFD7  6A 00                     PUSH 0x0
0051CFD9  51                        PUSH ECX
0051CFDA  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051CFE0  E8 AB 3A 1F 00            CALL 0x00710a90
0051CFE5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0051CFE8  8A 0D 4E 87 80 00         MOV CL,byte ptr [0x0080874e]
0051CFEE  8B C6                     MOV EAX,ESI
0051CFF0  2D FD 00 00 00            SUB EAX,0xfd
0051CFF5  F7 D8                     NEG EAX
0051CFF7  1B C0                     SBB EAX,EAX
0051CFF9  33 D2                     XOR EDX,EDX
0051CFFB  24 CD                     AND AL,0xcd
0051CFFD  05 63 56 00 00            ADD EAX,0x5663
0051D002  80 F9 03                  CMP CL,0x3
0051D005  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051D00B  0F 95 C2                  SETNZ DL
0051D00E  4A                        DEC EDX
0051D00F  83 E2 05                  AND EDX,0x5
0051D012  52                        PUSH EDX
0051D013  6A FF                     PUSH -0x1
0051D015  6A 01                     PUSH 0x1
0051D017  51                        PUSH ECX
0051D018  50                        PUSH EAX
0051D019  E8 22 31 19 00            CALL 0x006b0140
0051D01E  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D024  50                        PUSH EAX
0051D025  E8 96 49 1F 00            CALL 0x007119c0
0051D02A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0051D02D  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051D033  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D039  83 C0 0F                  ADD EAX,0xf
0051D03C  6A 0F                     PUSH 0xf
0051D03E  68 91 00 00 00            PUSH 0x91
0051D043  50                        PUSH EAX
0051D044  6A 00                     PUSH 0x0
0051D046  6A 00                     PUSH 0x0
0051D048  52                        PUSH EDX
0051D049  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0051D04C  E8 3F 3A 1F 00            CALL 0x00710a90
0051D051  A1 18 76 80 00            MOV EAX,[0x00807618]
0051D056  6A 03                     PUSH 0x3
0051D058  6A FF                     PUSH -0x1
0051D05A  6A FD                     PUSH -0x3
0051D05C  50                        PUSH EAX
0051D05D  68 25 56 00 00            PUSH 0x5625
0051D062  E8 D9 30 19 00            CALL 0x006b0140
0051D067  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D06D  50                        PUSH EAX
0051D06E  E8 4D 49 1F 00            CALL 0x007119c0
0051D073  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0051D076  8B 93 18 02 00 00         MOV EDX,dword ptr [EBX + 0x218]
0051D07C  6A 0F                     PUSH 0xf
0051D07E  68 06 01 00 00            PUSH 0x106
0051D083  51                        PUSH ECX
0051D084  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D08A  68 96 00 00 00            PUSH 0x96
0051D08F  6A 00                     PUSH 0x0
0051D091  52                        PUSH EDX
0051D092  E8 F9 39 1F 00            CALL 0x00710a90
0051D097  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
0051D09D  33 C0                     XOR EAX,EAX
0051D09F  80 FA 03                  CMP DL,0x3
0051D0A2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0051D0A8  0F 95 C0                  SETNZ AL
0051D0AB  48                        DEC EAX
0051D0AC  83 E0 05                  AND EAX,0x5
0051D0AF  50                        PUSH EAX
0051D0B0  6A FF                     PUSH -0x1
0051D0B2  6A 01                     PUSH 0x1
0051D0B4  51                        PUSH ECX
0051D0B5  68 5A 5D 00 00            PUSH 0x5d5a
0051D0BA  E8 81 30 19 00            CALL 0x006b0140
0051D0BF  50                        PUSH EAX
0051D0C0  8B 8B E0 01 00 00         MOV ECX,dword ptr [EBX + 0x1e0]
0051D0C6  E8 F5 48 1F 00            CALL 0x007119c0
0051D0CB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0051D0CE  6A 02                     PUSH 0x2
0051D0D0  83 C2 0F                  ADD EDX,0xf
0051D0D3  57                        PUSH EDI
0051D0D4  56                        PUSH ESI
0051D0D5  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0051D0D8  E8 A7 65 EE FF            CALL 0x00403684
0051D0DD  83 C4 0C                  ADD ESP,0xc
0051D0E0  8D 55 FC                  LEA EDX,[EBP + -0x4]
0051D0E3  8B CB                     MOV ECX,EBX
0051D0E5  50                        PUSH EAX
0051D0E6  52                        PUSH EDX
0051D0E7  E8 BF 5C EE FF            CALL 0x00402dab
0051D0EC  57                        PUSH EDI
0051D0ED  56                        PUSH ESI
0051D0EE  8D 45 FC                  LEA EAX,[EBP + -0x4]
0051D0F1  6A 0B                     PUSH 0xb
0051D0F3  50                        PUSH EAX
0051D0F4  8B CB                     MOV ECX,EBX
0051D0F6  E8 74 7F EE FF            CALL 0x0040506f
0051D0FB  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0051D0FE  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0051D104  5F                        POP EDI
0051D105  5E                        POP ESI
0051D106  5B                        POP EBX
0051D107  8B E5                     MOV ESP,EBP
0051D109  5D                        POP EBP
0051D10A  C2 0C 00                  RET 0xc
LAB_0051d10d:
0051D10D  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0051D110  68 54 3D 7C 00            PUSH 0x7c3d54
0051D115  68 CC 4C 7A 00            PUSH 0x7a4ccc
0051D11A  56                        PUSH ESI
0051D11B  57                        PUSH EDI
0051D11C  68 29 09 00 00            PUSH 0x929
0051D121  68 3C 38 7C 00            PUSH 0x7c383c
0051D126  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0051D12C  E8 9F 03 19 00            CALL 0x006ad4d0
0051D131  83 C4 18                  ADD ESP,0x18
0051D134  85 C0                     TEST EAX,EAX
0051D136  74 01                     JZ 0x0051d139
0051D138  CC                        INT3
LAB_0051d139:
0051D139  68 29 09 00 00            PUSH 0x929
0051D13E  68 3C 38 7C 00            PUSH 0x7c383c
0051D143  57                        PUSH EDI
0051D144  56                        PUSH ESI
0051D145  E8 F6 8C 18 00            CALL 0x006a5e40
LAB_0051d14a:
0051D14A  5F                        POP EDI
0051D14B  5E                        POP ESI
0051D14C  5B                        POP EBX
0051D14D  8B E5                     MOV ESP,EBP
0051D14F  5D                        POP EBP
0051D150  C2 0C 00                  RET 0xc
