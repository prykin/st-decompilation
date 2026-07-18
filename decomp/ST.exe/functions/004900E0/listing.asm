STBoatC::RestoreBoatData:
004900E0  55                        PUSH EBP
004900E1  8B EC                     MOV EBP,ESP
004900E3  83 EC 50                  SUB ESP,0x50
004900E6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004900E9  53                        PUSH EBX
004900EA  56                        PUSH ESI
004900EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004900EE  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
004900F4  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004900F7  57                        PUSH EDI
004900F8  8D 45 B4                  LEA EAX,[EBP + -0x4c]
004900FB  8D 55 B0                  LEA EDX,[EBP + -0x50]
004900FE  6A 00                     PUSH 0x0
00490100  50                        PUSH EAX
00490101  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00490104  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049010A  E8 E1 D6 29 00            CALL 0x0072d7f0
0049010F  8B F0                     MOV ESI,EAX
00490111  83 C4 08                  ADD ESP,0x8
00490114  85 F6                     TEST ESI,ESI
00490116  0F 85 12 03 00 00         JNZ 0x0049042e
0049011C  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0049011F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00490122  B9 5A 00 00 00            MOV ECX,0x5a
00490127  8D 73 5C                  LEA ESI,[EBX + 0x5c]
0049012A  8D B8 F3 06 00 00         LEA EDI,[EAX + 0x6f3]
00490130  F3 A5                     MOVSD.REP ES:EDI,ESI
00490132  66 A5                     MOVSW ES:EDI,ESI
00490134  A4                        MOVSB ES:EDI,ESI
00490135  8D B3 C7 01 00 00         LEA ESI,[EBX + 0x1c7]
0049013B  8D B8 C0 02 00 00         LEA EDI,[EAX + 0x2c0]
00490141  B9 65 00 00 00            MOV ECX,0x65
00490146  8D 90 55 04 00 00         LEA EDX,[EAX + 0x455]
0049014C  F3 A5                     MOVSD.REP ES:EDI,ESI
0049014E  8D 8B 5C 03 00 00         LEA ECX,[EBX + 0x35c]
00490154  A4                        MOVSB ES:EDI,ESI
00490155  8B 31                     MOV ESI,dword ptr [ECX]
00490157  8D B8 9B 04 00 00         LEA EDI,[EAX + 0x49b]
0049015D  89 32                     MOV dword ptr [EDX],ESI
0049015F  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
00490162  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
00490165  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00490168  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
0049016B  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
0049016E  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00490171  66 8B 93 6C 03 00 00      MOV DX,word ptr [EBX + 0x36c]
00490178  66 89 90 69 04 00 00      MOV word ptr [EAX + 0x469],DX
0049017F  66 8B 8B 6E 03 00 00      MOV CX,word ptr [EBX + 0x36e]
00490186  66 89 88 6F 04 00 00      MOV word ptr [EAX + 0x46f],CX
0049018D  8B 93 70 03 00 00         MOV EDX,dword ptr [EBX + 0x370]
00490193  89 90 71 04 00 00         MOV dword ptr [EAX + 0x471],EDX
00490199  66 8B 8B 74 03 00 00      MOV CX,word ptr [EBX + 0x374]
004901A0  66 89 88 75 04 00 00      MOV word ptr [EAX + 0x475],CX
004901A7  66 8B 93 76 03 00 00      MOV DX,word ptr [EBX + 0x376]
004901AE  66 89 90 77 04 00 00      MOV word ptr [EAX + 0x477],DX
004901B5  66 8B 8B 78 03 00 00      MOV CX,word ptr [EBX + 0x378]
004901BC  66 89 88 79 04 00 00      MOV word ptr [EAX + 0x479],CX
004901C3  8B 93 82 03 00 00         MOV EDX,dword ptr [EBX + 0x382]
004901C9  89 90 7F 04 00 00         MOV dword ptr [EAX + 0x47f],EDX
004901CF  8B 8B 86 03 00 00         MOV ECX,dword ptr [EBX + 0x386]
004901D5  89 88 83 04 00 00         MOV dword ptr [EAX + 0x483],ECX
004901DB  8B 93 8A 03 00 00         MOV EDX,dword ptr [EBX + 0x38a]
004901E1  89 90 87 04 00 00         MOV dword ptr [EAX + 0x487],EDX
004901E7  8B 8B 8E 03 00 00         MOV ECX,dword ptr [EBX + 0x38e]
004901ED  8D 93 92 03 00 00         LEA EDX,[EBX + 0x392]
004901F3  89 88 8B 04 00 00         MOV dword ptr [EAX + 0x48b],ECX
004901F9  8D 88 8F 04 00 00         LEA ECX,[EAX + 0x48f]
004901FF  8B 32                     MOV ESI,dword ptr [EDX]
00490201  89 31                     MOV dword ptr [ECX],ESI
00490203  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
00490206  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
00490209  8D B3 9E 03 00 00         LEA ESI,[EBX + 0x39e]
0049020F  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00490212  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00490215  B9 10 00 00 00            MOV ECX,0x10
0049021A  F3 A5                     MOVSD.REP ES:EDI,ESI
0049021C  66 A5                     MOVSW ES:EDI,ESI
0049021E  8D B3 E0 03 00 00         LEA ESI,[EBX + 0x3e0]
00490224  8D B8 DD 04 00 00         LEA EDI,[EAX + 0x4dd]
0049022A  B9 0C 00 00 00            MOV ECX,0xc
0049022F  F3 A5                     MOVSD.REP ES:EDI,ESI
00490231  66 A5                     MOVSW ES:EDI,ESI
00490233  A4                        MOVSB ES:EDI,ESI
00490234  8D B3 13 04 00 00         LEA ESI,[EBX + 0x413]
0049023A  8D B8 10 05 00 00         LEA EDI,[EAX + 0x510]
00490240  B9 07 00 00 00            MOV ECX,0x7
00490245  F3 A5                     MOVSD.REP ES:EDI,ESI
00490247  8D B3 2F 04 00 00         LEA ESI,[EBX + 0x42f]
0049024D  8D B8 2C 05 00 00         LEA EDI,[EAX + 0x52c]
00490253  B9 0A 00 00 00            MOV ECX,0xa
00490258  F3 A5                     MOVSD.REP ES:EDI,ESI
0049025A  8D B3 57 04 00 00         LEA ESI,[EBX + 0x457]
00490260  8D B8 54 05 00 00         LEA EDI,[EAX + 0x554]
00490266  B9 0D 00 00 00            MOV ECX,0xd
0049026B  F3 A5                     MOVSD.REP ES:EDI,ESI
0049026D  8D B3 8B 04 00 00         LEA ESI,[EBX + 0x48b]
00490273  8D B8 88 05 00 00         LEA EDI,[EAX + 0x588]
00490279  B9 06 00 00 00            MOV ECX,0x6
0049027E  F3 A5                     MOVSD.REP ES:EDI,ESI
00490280  8D B3 A3 04 00 00         LEA ESI,[EBX + 0x4a3]
00490286  8D B8 A0 05 00 00         LEA EDI,[EAX + 0x5a0]
0049028C  B9 0A 00 00 00            MOV ECX,0xa
00490291  F3 A5                     MOVSD.REP ES:EDI,ESI
00490293  8D 8B CD 04 00 00         LEA ECX,[EBX + 0x4cd]
00490299  8D 90 CA 05 00 00         LEA EDX,[EAX + 0x5ca]
0049029F  66 A5                     MOVSW ES:EDI,ESI
004902A1  8B 31                     MOV ESI,dword ptr [ECX]
004902A3  8D B8 FC 05 00 00         LEA EDI,[EAX + 0x5fc]
004902A9  89 32                     MOV dword ptr [EDX],ESI
004902AB  C7 45 F8 09 00 00 00      MOV dword ptr [EBP + -0x8],0x9
004902B2  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
004902B5  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
004902B8  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
004902BB  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
004902BE  8B 71 0C                  MOV ESI,dword ptr [ECX + 0xc]
004902C1  89 72 0C                  MOV dword ptr [EDX + 0xc],ESI
004902C4  66 8B 49 10               MOV CX,word ptr [ECX + 0x10]
004902C8  66 89 4A 10               MOV word ptr [EDX + 0x10],CX
004902CC  8D 93 DF 04 00 00         LEA EDX,[EBX + 0x4df]
004902D2  8D 88 DC 05 00 00         LEA ECX,[EAX + 0x5dc]
004902D8  8B 32                     MOV ESI,dword ptr [EDX]
004902DA  89 31                     MOV dword ptr [ECX],ESI
004902DC  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
004902DF  89 71 04                  MOV dword ptr [ECX + 0x4],ESI
004902E2  8B 72 08                  MOV ESI,dword ptr [EDX + 0x8]
004902E5  89 71 08                  MOV dword ptr [ECX + 0x8],ESI
004902E8  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
004902EB  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
004902EE  8D 8B EF 04 00 00         LEA ECX,[EBX + 0x4ef]
004902F4  8D 90 EC 05 00 00         LEA EDX,[EAX + 0x5ec]
004902FA  8B 31                     MOV ESI,dword ptr [ECX]
004902FC  89 32                     MOV dword ptr [EDX],ESI
004902FE  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
00490301  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
00490304  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00490307  89 72 08                  MOV dword ptr [EDX + 0x8],ESI
0049030A  8D B3 FF 04 00 00         LEA ESI,[EBX + 0x4ff]
00490310  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00490313  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00490316  B9 07 00 00 00            MOV ECX,0x7
0049031B  F3 A5                     MOVSD.REP ES:EDI,ESI
0049031D  A4                        MOVSB ES:EDI,ESI
0049031E  8D B3 1C 05 00 00         LEA ESI,[EBX + 0x51c]
00490324  8D B8 19 06 00 00         LEA EDI,[EAX + 0x619]
0049032A  B9 07 00 00 00            MOV ECX,0x7
0049032F  F3 A5                     MOVSD.REP ES:EDI,ESI
00490331  8D B3 38 05 00 00         LEA ESI,[EBX + 0x538]
00490337  8D B8 35 06 00 00         LEA EDI,[EAX + 0x635]
0049033D  B9 0D 00 00 00            MOV ECX,0xd
00490342  F3 A5                     MOVSD.REP ES:EDI,ESI
00490344  66 A5                     MOVSW ES:EDI,ESI
00490346  8D B3 6E 05 00 00         LEA ESI,[EBX + 0x56e]
0049034C  8D B8 6B 06 00 00         LEA EDI,[EAX + 0x66b]
00490352  B9 08 00 00 00            MOV ECX,0x8
00490357  F3 A5                     MOVSD.REP ES:EDI,ESI
00490359  8D B3 8E 05 00 00         LEA ESI,[EBX + 0x58e]
0049035F  8D B8 8B 06 00 00         LEA EDI,[EAX + 0x68b]
00490365  B9 07 00 00 00            MOV ECX,0x7
0049036A  F3 A5                     MOVSD.REP ES:EDI,ESI
0049036C  66 A5                     MOVSW ES:EDI,ESI
0049036E  8D B3 AC 05 00 00         LEA ESI,[EBX + 0x5ac]
00490374  8D B8 A9 06 00 00         LEA EDI,[EAX + 0x6a9]
0049037A  B9 08 00 00 00            MOV ECX,0x8
0049037F  F3 A5                     MOVSD.REP ES:EDI,ESI
00490381  66 A5                     MOVSW ES:EDI,ESI
00490383  8D B3 CE 05 00 00         LEA ESI,[EBX + 0x5ce]
00490389  8D B8 CB 06 00 00         LEA EDI,[EAX + 0x6cb]
0049038F  B9 08 00 00 00            MOV ECX,0x8
00490394  F3 A5                     MOVSD.REP ES:EDI,ESI
00490396  8B 93 EE 05 00 00         MOV EDX,dword ptr [EBX + 0x5ee]
0049039C  8D B0 82 02 00 00         LEA ESI,[EAX + 0x282]
004903A2  89 90 EB 06 00 00         MOV dword ptr [EAX + 0x6eb],EDX
004903A8  8B 8B F2 05 00 00         MOV ECX,dword ptr [EBX + 0x5f2]
004903AE  89 88 EF 06 00 00         MOV dword ptr [EAX + 0x6ef],ECX
004903B4  8D 7B 14                  LEA EDI,[EBX + 0x14]
LAB_004903b7:
004903B7  8B 0F                     MOV ECX,dword ptr [EDI]
004903B9  83 F9 FF                  CMP ECX,-0x1
004903BC  74 11                     JZ 0x004903cf
004903BE  03 CB                     ADD ECX,EBX
004903C0  51                        PUSH ECX
004903C1  6A 00                     PUSH 0x0
004903C3  E8 98 FC 21 00            CALL 0x006b0060
004903C8  89 06                     MOV dword ptr [ESI],EAX
004903CA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004903CD  EB 06                     JMP 0x004903d5
LAB_004903cf:
004903CF  C7 06 00 00 00 00         MOV dword ptr [ESI],0x0
LAB_004903d5:
004903D5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004903D8  83 C7 08                  ADD EDI,0x8
004903DB  83 C6 04                  ADD ESI,0x4
004903DE  49                        DEC ECX
004903DF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004903E2  75 D3                     JNZ 0x004903b7
004903E4  8B 8B 7A 03 00 00         MOV ECX,dword ptr [EBX + 0x37a]
004903EA  83 F9 FF                  CMP ECX,-0x1
004903ED  74 24                     JZ 0x00490413
004903EF  03 CB                     ADD ECX,EBX
004903F1  51                        PUSH ECX
004903F2  6A 00                     PUSH 0x0
004903F4  E8 67 FC 21 00            CALL 0x006b0060
004903F9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004903FC  89 82 7B 04 00 00         MOV dword ptr [EDX + 0x47b],EAX
00490402  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00490405  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049040A  5F                        POP EDI
0049040B  5E                        POP ESI
0049040C  5B                        POP EBX
0049040D  8B E5                     MOV ESP,EBP
0049040F  5D                        POP EBP
00490410  C2 04 00                  RET 0x4
LAB_00490413:
00490413  C7 80 7B 04 00 00 00 00 00 00  MOV dword ptr [EAX + 0x47b],0x0
0049041D  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00490420  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00490425  5F                        POP EDI
00490426  5E                        POP ESI
00490427  5B                        POP EBX
00490428  8B E5                     MOV ESP,EBP
0049042A  5D                        POP EBP
0049042B  C2 04 00                  RET 0x4
LAB_0049042e:
0049042E  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00490431  68 58 BA 7A 00            PUSH 0x7aba58
00490436  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049043B  56                        PUSH ESI
0049043C  6A 00                     PUSH 0x0
0049043E  68 D4 4E 00 00            PUSH 0x4ed4
00490443  68 3C 9D 7A 00            PUSH 0x7a9d3c
00490448  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049044E  E8 7D D0 21 00            CALL 0x006ad4d0
00490453  83 C4 18                  ADD ESP,0x18
00490456  85 C0                     TEST EAX,EAX
00490458  74 01                     JZ 0x0049045b
0049045A  CC                        INT3
LAB_0049045b:
0049045B  68 D5 4E 00 00            PUSH 0x4ed5
00490460  68 3C 9D 7A 00            PUSH 0x7a9d3c
00490465  6A 00                     PUSH 0x0
00490467  56                        PUSH ESI
00490468  E8 D3 59 21 00            CALL 0x006a5e40
0049046D  5F                        POP EDI
0049046E  5E                        POP ESI
0049046F  5B                        POP EBX
00490470  8B E5                     MOV ESP,EBP
00490472  5D                        POP EBP
00490473  C2 04 00                  RET 0x4
