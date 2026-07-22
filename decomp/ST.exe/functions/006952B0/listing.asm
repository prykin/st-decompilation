CGenerate::FUN_006952b0:
006952B0  55                        PUSH EBP
006952B1  8B EC                     MOV EBP,ESP
006952B3  81 EC D0 00 00 00         SUB ESP,0xd0
006952B9  53                        PUSH EBX
006952BA  56                        PUSH ESI
006952BB  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006952BE  57                        PUSH EDI
006952BF  8B D9                     MOV EBX,ECX
006952C1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
006952C8  8B 06                     MOV EAX,dword ptr [ESI]
006952CA  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
006952CD  50                        PUSH EAX
006952CE  E8 DD 93 09 00            CALL 0x0072e6b0
006952D3  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
006952D6  B9 8C 00 00 00            MOV ECX,0x8c
006952DB  F3 A5                     MOVSD.REP ES:EDI,ESI
006952DD  83 C4 04                  ADD ESP,0x4
006952E0  8B CB                     MOV ECX,EBX
006952E2  66 A5                     MOVSW ES:EDI,ESI
006952E4  E8 E1 F2 D6 FF            CALL 0x004045ca
006952E9  8B CB                     MOV ECX,EBX
006952EB  8B F0                     MOV ESI,EAX
006952ED  E8 51 F7 D6 FF            CALL 0x00404a43
006952F2  85 F6                     TEST ESI,ESI
006952F4  0F 84 C0 05 00 00         JZ 0x006958ba
006952FA  8B 35 DC BE 85 00         MOV ESI,dword ptr [0x0085bedc]
00695300  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
00695307  FF D6                     CALL ESI
00695309  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0069530C  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
00695313  FF D6                     CALL ESI
00695315  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00695318  8D 4D EC                  LEA ECX,[EBP + -0x14]
0069531B  51                        PUSH ECX
0069531C  33 C9                     XOR ECX,ECX
0069531E  8A 8F 2D 02 00 00         MOV CL,byte ptr [EDI + 0x22d]
00695324  8D 55 E8                  LEA EDX,[EBP + -0x18]
00695327  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
0069532A  8B 87 14 02 00 00         MOV EAX,dword ptr [EDI + 0x214]
00695330  52                        PUSH EDX
00695331  8B 97 10 02 00 00         MOV EDX,dword ptr [EDI + 0x210]
00695337  51                        PUSH ECX
00695338  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069533B  50                        PUSH EAX
0069533C  8B 87 0C 02 00 00         MOV EAX,dword ptr [EDI + 0x20c]
00695342  52                        PUSH EDX
00695343  50                        PUSH EAX
00695344  8B CB                     MOV ECX,EBX
00695346  E8 A5 E5 D6 FF            CALL 0x004038f0
0069534B  8B 75 DC                  MOV ESI,dword ptr [EBP + -0x24]
0069534E  85 C0                     TEST EAX,EAX
00695350  75 0D                     JNZ 0x0069535f
00695352  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
00695355  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
0069535C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_0069535f:
0069535F  8B 8F 25 02 00 00         MOV ECX,dword ptr [EDI + 0x225]
00695365  8B 87 21 02 00 00         MOV EAX,dword ptr [EDI + 0x221]
0069536B  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
0069536E  8B 8F 10 02 00 00         MOV ECX,dword ptr [EDI + 0x210]
00695374  0F AF 8F 0C 02 00 00      IMUL ECX,dword ptr [EDI + 0x20c]
0069537B  8B 97 29 02 00 00         MOV EDX,dword ptr [EDI + 0x229]
00695381  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
00695384  B8 D3 4D 62 10            MOV EAX,0x10624dd3
00695389  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0069538C  F7 E9                     IMUL ECX
0069538E  C1 FA 05                  SAR EDX,0x5
00695391  8B C2                     MOV EAX,EDX
00695393  C7 45 D8 05 00 00 00      MOV dword ptr [EBP + -0x28],0x5
0069539A  C1 E8 1F                  SHR EAX,0x1f
0069539D  03 D0                     ADD EDX,EAX
0069539F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006953A4  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006953A7  F7 E9                     IMUL ECX
006953A9  C1 FA 09                  SAR EDX,0x9
006953AC  8B C2                     MOV EAX,EDX
006953AE  C1 E8 1F                  SHR EAX,0x1f
006953B1  03 D0                     ADD EDX,EAX
006953B3  B8 56 55 55 55            MOV EAX,0x55555556
006953B8  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006953BB  F7 E9                     IMUL ECX
006953BD  8B CA                     MOV ECX,EDX
006953BF  C1 E9 1F                  SHR ECX,0x1f
006953C2  03 D1                     ADD EDX,ECX
006953C4  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006953C7  8D 14 B5 00 00 00 00      LEA EDX,[ESI*0x4 + 0x0]
006953CE  52                        PUSH EDX
006953CF  E8 9C 58 01 00            CALL 0x006aac70
006953D4  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006953D7  6A 0A                     PUSH 0xa
006953D9  B9 08 00 00 00            MOV ECX,0x8
006953DE  33 C0                     XOR EAX,EAX
006953E0  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
006953E6  6A 40                     PUSH 0x40
006953E8  33 F6                     XOR ESI,ESI
006953EA  6A 0A                     PUSH 0xa
006953EC  F3 AB                     STOSD.REP ES:EDI
006953EE  56                        PUSH ESI
006953EF  E8 9C 8E 01 00            CALL 0x006ae290
006953F4  6A 0A                     PUSH 0xa
006953F6  6A 40                     PUSH 0x40
006953F8  6A 0A                     PUSH 0xa
006953FA  56                        PUSH ESI
006953FB  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006953FE  E8 8D 8E 01 00            CALL 0x006ae290
00695403  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
00695406  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00695409  6A 0A                     PUSH 0xa
0069540B  6A 0F                     PUSH 0xf
0069540D  50                        PUSH EAX
0069540E  56                        PUSH ESI
0069540F  E8 7C 8E 01 00            CALL 0x006ae290
00695414  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00695417  6A 0A                     PUSH 0xa
00695419  6A 0F                     PUSH 0xf
0069541B  51                        PUSH ECX
0069541C  56                        PUSH ESI
0069541D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00695420  E8 6B 8E 01 00            CALL 0x006ae290
00695425  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00695428  C7 45 F0 32 00 00 00      MOV dword ptr [EBP + -0x10],0x32
LAB_0069542f:
0069542F  39 75 F4                  CMP dword ptr [EBP + -0xc],ESI
00695432  7F 13                     JG 0x00695447
00695434  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00695437  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069543A  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0069543D  03 C2                     ADD EAX,EDX
0069543F  3B C8                     CMP ECX,EAX
00695441  0F 83 B8 02 00 00         JNC 0x006956ff
LAB_00695447:
00695447  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0069544A  33 C0                     XOR EAX,EAX
0069544C  8D 7D 98                  LEA EDI,[EBP + -0x68]
0069544F  89 71 0C                  MOV dword ptr [ECX + 0xc],ESI
00695452  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00695455  B9 06 00 00 00            MOV ECX,0x6
0069545A  89 72 0C                  MOV dword ptr [EDX + 0xc],ESI
0069545D  F3 AB                     STOSD.REP ES:EDI
0069545F  39 73 08                  CMP dword ptr [EBX + 0x8],ESI
00695462  75 0C                     JNZ 0x00695470
00695464  39 73 0C                  CMP dword ptr [EBX + 0xc],ESI
00695467  75 07                     JNZ 0x00695470
00695469  8B CB                     MOV ECX,EBX
0069546B  E8 38 BE D6 FF            CALL 0x004012a8
LAB_00695470:
00695470  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00695473  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00695476  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00695479  56                        PUSH ESI
0069547A  51                        PUSH ECX
0069547B  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0069547E  52                        PUSH EDX
0069547F  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00695482  8B 00                     MOV EAX,dword ptr [EAX]
00695484  83 EA 02                  SUB EDX,0x2
00695487  51                        PUSH ECX
00695488  83 E8 02                  SUB EAX,0x2
0069548B  52                        PUSH EDX
0069548C  50                        PUSH EAX
0069548D  8B CB                     MOV ECX,EBX
0069548F  E8 B2 CF D6 FF            CALL 0x00402446
00695494  8B CB                     MOV ECX,EBX
00695496  E8 A8 F5 D6 FF            CALL 0x00404a43
0069549B  8B CB                     MOV ECX,EBX
0069549D  E8 FE CA D6 FF            CALL 0x00401fa0
006954A2  8B CB                     MOV ECX,EBX
006954A4  E8 9A F5 D6 FF            CALL 0x00404a43
006954A9  8B CB                     MOV ECX,EBX
006954AB  E8 E7 00 D7 FF            CALL 0x00405597
006954B0  8B CB                     MOV ECX,EBX
006954B2  E8 8C F5 D6 FF            CALL 0x00404a43
006954B7  56                        PUSH ESI
006954B8  8B CB                     MOV ECX,EBX
006954BA  E8 A0 E8 D6 FF            CALL 0x00403d5f
006954BF  8B CB                     MOV ECX,EBX
006954C1  E8 7D F5 D6 FF            CALL 0x00404a43
006954C6  8B CB                     MOV ECX,EBX
006954C8  E8 0B 01 D7 FF            CALL 0x004055d8
006954CD  8B CB                     MOV ECX,EBX
006954CF  89 83 3F 58 00 00         MOV dword ptr [EBX + 0x583f],EAX
006954D5  E8 69 F5 D6 FF            CALL 0x00404a43
006954DA  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006954DD  8B 93 3F 58 00 00         MOV EDX,dword ptr [EBX + 0x583f]
006954E3  51                        PUSH ECX
006954E4  52                        PUSH EDX
006954E5  8B CB                     MOV ECX,EBX
006954E7  E8 DC 06 D7 FF            CALL 0x00405bc8
006954EC  8B CB                     MOV ECX,EBX
006954EE  E8 50 F5 D6 FF            CALL 0x00404a43
006954F3  8B 83 3F 58 00 00         MOV EAX,dword ptr [EBX + 0x583f]
006954F9  8B CB                     MOV ECX,EBX
006954FB  50                        PUSH EAX
006954FC  E8 79 FF D6 FF            CALL 0x0040547a
00695501  8B CB                     MOV ECX,EBX
00695503  E8 3B F5 D6 FF            CALL 0x00404a43
00695508  8B CB                     MOV ECX,EBX
0069550A  E8 05 C5 D6 FF            CALL 0x00401a14
0069550F  8B CB                     MOV ECX,EBX
00695511  E8 2D F5 D6 FF            CALL 0x00404a43
00695516  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00695519  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069551C  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0069551F  6A 01                     PUSH 0x1
00695521  51                        PUSH ECX
00695522  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00695525  52                        PUSH EDX
00695526  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00695529  8B 00                     MOV EAX,dword ptr [EAX]
0069552B  51                        PUSH ECX
0069552C  52                        PUSH EDX
0069552D  50                        PUSH EAX
0069552E  8B CB                     MOV ECX,EBX
00695530  E8 11 CF D6 FF            CALL 0x00402446
00695535  8B CB                     MOV ECX,EBX
00695537  E8 07 F5 D6 FF            CALL 0x00404a43
0069553C  8B CB                     MOV ECX,EBX
0069553E  E8 BF EA D6 FF            CALL 0x00404002
00695543  8B CB                     MOV ECX,EBX
00695545  E8 F9 F4 D6 FF            CALL 0x00404a43
0069554A  8B CB                     MOV ECX,EBX
0069554C  E8 1B F4 D6 FF            CALL 0x0040496c
00695551  8B CB                     MOV ECX,EBX
00695553  E8 EB F4 D6 FF            CALL 0x00404a43
00695558  8B CB                     MOV ECX,EBX
0069555A  E8 42 EC D6 FF            CALL 0x004041a1
0069555F  8B CB                     MOV ECX,EBX
00695561  E8 DD F4 D6 FF            CALL 0x00404a43
00695566  8B CB                     MOV ECX,EBX
00695568  E8 95 EA D6 FF            CALL 0x00404002
0069556D  8B CB                     MOV ECX,EBX
0069556F  E8 CF F4 D6 FF            CALL 0x00404a43
00695574  6A 01                     PUSH 0x1
00695576  8B CB                     MOV ECX,EBX
00695578  E8 E2 E7 D6 FF            CALL 0x00403d5f
0069557D  8B CB                     MOV ECX,EBX
0069557F  E8 BF F4 D6 FF            CALL 0x00404a43
00695584  8B CB                     MOV ECX,EBX
00695586  E8 69 F8 D6 FF            CALL 0x00404df4
0069558B  8B CB                     MOV ECX,EBX
0069558D  E8 B1 F4 D6 FF            CALL 0x00404a43
00695592  8B CB                     MOV ECX,EBX
00695594  E8 08 EC D6 FF            CALL 0x004041a1
00695599  8B CB                     MOV ECX,EBX
0069559B  E8 A3 F4 D6 FF            CALL 0x00404a43
006955A0  8B CB                     MOV ECX,EBX
006955A2  E8 5B EA D6 FF            CALL 0x00404002
006955A7  8B CB                     MOV ECX,EBX
006955A9  E8 95 F4 D6 FF            CALL 0x00404a43
006955AE  6A 01                     PUSH 0x1
006955B0  8B CB                     MOV ECX,EBX
006955B2  E8 A8 E7 D6 FF            CALL 0x00403d5f
006955B7  8B CB                     MOV ECX,EBX
006955B9  E8 85 F4 D6 FF            CALL 0x00404a43
006955BE  8B CB                     MOV ECX,EBX
006955C0  E8 B0 03 D7 FF            CALL 0x00405975
006955C5  8B CB                     MOV ECX,EBX
006955C7  E8 77 F4 D6 FF            CALL 0x00404a43
006955CC  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006955CF  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006955D2  51                        PUSH ECX
006955D3  52                        PUSH EDX
006955D4  8B CB                     MOV ECX,EBX
006955D6  E8 1F BB D6 FF            CALL 0x004010fa
006955DB  8B CB                     MOV ECX,EBX
006955DD  E8 61 F4 D6 FF            CALL 0x00404a43
006955E2  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006955E5  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
006955E8  50                        PUSH EAX
006955E9  51                        PUSH ECX
006955EA  E8 11 B6 05 00            CALL 0x006f0c00
006955EF  83 C4 08                  ADD ESP,0x8
006955F2  8B CB                     MOV ECX,EBX
006955F4  E8 4A F4 D6 FF            CALL 0x00404a43
006955F9  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006955FC  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
006955FF  4A                        DEC EDX
00695600  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00695603  52                        PUSH EDX
00695604  8B 10                     MOV EDX,dword ptr [EAX]
00695606  D1 E1                     SHL ECX,0x1
00695608  D1 E2                     SHL EDX,0x1
0069560A  51                        PUSH ECX
0069560B  52                        PUSH EDX
0069560C  8B CB                     MOV ECX,EBX
0069560E  E8 C2 D5 D6 FF            CALL 0x00402bd5
00695613  8B CB                     MOV ECX,EBX
00695615  E8 29 F4 D6 FF            CALL 0x00404a43
0069561A  E8 A1 90 09 00            CALL 0x0072e6c0
0069561F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00695622  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00695625  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069562A  8D 45 98                  LEA EAX,[EBP + -0x68]
0069562D  50                        PUSH EAX
0069562E  51                        PUSH ECX
0069562F  6A 23                     PUSH 0x23
00695631  6A 04                     PUSH 0x4
00695633  6A 0A                     PUSH 0xa
00695635  6A 0A                     PUSH 0xa
00695637  52                        PUSH EDX
00695638  8B CB                     MOV ECX,EBX
0069563A  E8 F6 FC D6 FF            CALL 0x00405335
0069563F  8B CB                     MOV ECX,EBX
00695641  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
00695644  E8 FA F3 D6 FF            CALL 0x00404a43
00695649  E8 72 90 09 00            CALL 0x0072e6c0
0069564E  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
00695653  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00695656  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00695659  8D 4D 98                  LEA ECX,[EBP + -0x68]
0069565C  4A                        DEC EDX
0069565D  51                        PUSH ECX
0069565E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00695661  52                        PUSH EDX
00695662  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00695665  51                        PUSH ECX
00695666  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00695669  52                        PUSH EDX
0069566A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0069566D  51                        PUSH ECX
0069566E  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
00695671  52                        PUSH EDX
00695672  8B 10                     MOV EDX,dword ptr [EAX]
00695674  D1 E1                     SHL ECX,0x1
00695676  D1 E2                     SHL EDX,0x1
00695678  51                        PUSH ECX
00695679  52                        PUSH EDX
0069567A  8B CB                     MOV ECX,EBX
0069567C  E8 72 E9 D6 FF            CALL 0x00403ff3
00695681  8B CB                     MOV ECX,EBX
00695683  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
00695686  E8 B8 F3 D6 FF            CALL 0x00404a43
0069568B  E8 30 90 09 00            CALL 0x0072e6c0
00695690  8B CB                     MOV ECX,EBX
00695692  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
00695697  E8 78 C3 D6 FF            CALL 0x00401a14
0069569C  8B CB                     MOV ECX,EBX
0069569E  E8 A0 F3 D6 FF            CALL 0x00404a43
006956A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006956A6  8D 4D CC                  LEA ECX,[EBP + -0x34]
006956A9  50                        PUSH EAX
006956AA  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
006956B0  51                        PUSH ECX
006956B1  8D 45 98                  LEA EAX,[EBP + -0x68]
006956B4  52                        PUSH EDX
006956B5  50                        PUSH EAX
006956B6  8B CB                     MOV ECX,EBX
006956B8  E8 5E FD D6 FF            CALL 0x0040541b
006956BD  85 C0                     TEST EAX,EAX
006956BF  74 22                     JZ 0x006956e3
006956C1  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
006956C7  8D 55 98                  LEA EDX,[EBP + -0x68]
006956CA  51                        PUSH ECX
006956CB  52                        PUSH EDX
006956CC  8B CB                     MOV ECX,EBX
006956CE  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006956D5  E8 34 EC D6 FF            CALL 0x0040430e
006956DA  8B CB                     MOV ECX,EBX
006956DC  E8 3E C2 D6 FF            CALL 0x0040191f
006956E1  EB 07                     JMP 0x006956ea
LAB_006956e3:
006956E3  8B CB                     MOV ECX,EBX
006956E5  E8 1A C9 D6 FF            CALL 0x00402004
LAB_006956ea:
006956EA  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006956F0  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006956F3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006956F6  48                        DEC EAX
006956F7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006956FA  E9 30 FD FF FF            JMP 0x0069542f
LAB_006956ff:
006956FF  83 7D F8 01               CMP dword ptr [EBP + -0x8],0x1
00695703  0F 85 6A 01 00 00         JNZ 0x00695873
00695709  8B CB                     MOV ECX,EBX
0069570B  E8 11 DE D6 FF            CALL 0x00403521
00695710  8B 4B 08                  MOV ECX,dword ptr [EBX + 0x8]
00695713  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
00695716  0F AF 01                  IMUL EAX,dword ptr [ECX]
00695719  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0069571C  C1 E0 03                  SHL EAX,0x3
0069571F  50                        PUSH EAX
00695720  E8 4B 55 01 00            CALL 0x006aac70
00695725  A3 D4 3D 85 00            MOV [0x00853dd4],EAX
0069572A  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0069572D  6A 01                     PUSH 0x1
0069572F  50                        PUSH EAX
00695730  51                        PUSH ECX
00695731  E8 54 C5 D6 FF            CALL 0x00401c8a
00695736  83 C4 0C                  ADD ESP,0xc
00695739  E8 82 8F 09 00            CALL 0x0072e6c0
0069573E  8D 95 74 FF FF FF         LEA EDX,[EBP + 0xffffff74]
00695744  8B CB                     MOV ECX,EBX
00695746  52                        PUSH EDX
00695747  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069574C  E8 37 D6 D6 FF            CALL 0x00402d88
00695751  E8 6A 8F 09 00            CALL 0x0072e6c0
00695756  8B CB                     MOV ECX,EBX
00695758  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
0069575D  E8 94 F9 D6 FF            CALL 0x004050f6
00695762  8B CB                     MOV ECX,EBX
00695764  E8 DA F2 D6 FF            CALL 0x00404a43
00695769  E8 52 8F 09 00            CALL 0x0072e6c0
0069576E  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
00695773  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00695776  50                        PUSH EAX
00695777  8B CB                     MOV ECX,EBX
00695779  E8 5C D9 D6 FF            CALL 0x004030da
0069577E  E8 3D 8F 09 00            CALL 0x0072e6c0
00695783  A3 D0 3D 85 00            MOV [0x00853dd0],EAX
00695788  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0069578B  8B 30                     MOV ESI,dword ptr [EAX]
0069578D  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00695790  8B CE                     MOV ECX,ESI
00695792  B8 1F 85 EB 51            MOV EAX,0x51eb851f
00695797  0F AF CF                  IMUL ECX,EDI
0069579A  C1 E1 02                  SHL ECX,0x2
0069579D  F7 E9                     IMUL ECX
0069579F  C1 FA 05                  SAR EDX,0x5
006957A2  8B CA                     MOV ECX,EDX
006957A4  8D 04 3F                  LEA EAX,[EDI + EDI*0x1]
006957A7  C1 E9 1F                  SHR ECX,0x1f
006957AA  03 D1                     ADD EDX,ECX
006957AC  8D 0C 36                  LEA ECX,[ESI + ESI*0x1]
006957AF  52                        PUSH EDX
006957B0  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006957B3  52                        PUSH EDX
006957B4  50                        PUSH EAX
006957B5  51                        PUSH ECX
006957B6  8B CB                     MOV ECX,EBX
006957B8  E8 D4 E5 D6 FF            CALL 0x00403d91
006957BD  8B CB                     MOV ECX,EBX
006957BF  E8 53 EC D6 FF            CALL 0x00404417
006957C4  8B CB                     MOV ECX,EBX
006957C6  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006957C9  E8 75 F2 D6 FF            CALL 0x00404a43
006957CE  A1 D4 3D 85 00            MOV EAX,[0x00853dd4]
006957D3  85 C0                     TEST EAX,EAX
006957D5  74 0A                     JZ 0x006957e1
006957D7  68 D4 3D 85 00            PUSH 0x853dd4
006957DC  E8 7F 58 01 00            CALL 0x006ab060
LAB_006957e1:
006957E1  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006957E7  8D 8D 34 FF FF FF         LEA ECX,[EBP + 0xffffff34]
006957ED  8D 85 30 FF FF FF         LEA EAX,[EBP + 0xffffff30]
006957F3  6A 00                     PUSH 0x0
006957F5  51                        PUSH ECX
006957F6  89 95 30 FF FF FF         MOV dword ptr [EBP + 0xffffff30],EDX
006957FC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00695801  E8 EA 7F 09 00            CALL 0x0072d7f0
00695806  83 C4 08                  ADD ESP,0x8
00695809  85 C0                     TEST EAX,EAX
0069580B  75 57                     JNZ 0x00695864
0069580D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00695810  85 FF                     TEST EDI,EDI
00695812  74 40                     JZ 0x00695854
00695814  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00695817  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
0069581A  50                        PUSH EAX
0069581B  50                        PUSH EAX
0069581C  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
0069581F  50                        PUSH EAX
00695820  A1 74 D7 79 00            MOV EAX,[0x0079d774]
00695825  68 32 02 00 00            PUSH 0x232
0069582A  52                        PUSH EDX
0069582B  50                        PUSH EAX
0069582C  6A 0C                     PUSH 0xc
0069582E  E8 BD BB 05 00            CALL 0x006f13f0
00695833  8B 0D 78 D7 79 00         MOV ECX,dword ptr [0x0079d778]
00695839  6A 00                     PUSH 0x0
0069583B  6A 00                     PUSH 0x0
0069583D  6A 00                     PUSH 0x0
0069583F  6A 0D                     PUSH 0xd
00695841  57                        PUSH EDI
00695842  51                        PUSH ECX
00695843  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00695846  6A 0C                     PUSH 0xc
00695848  E8 A3 BB 05 00            CALL 0x006f13f0
0069584D  8B CE                     MOV ECX,ESI
0069584F  E8 EF F1 D6 FF            CALL 0x00404a43
LAB_00695854:
00695854  8B 95 30 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff30]
0069585A  33 F6                     XOR ESI,ESI
0069585C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00695862  EB 12                     JMP 0x00695876
LAB_00695864:
00695864  8B 85 30 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff30]
0069586A  33 F6                     XOR ESI,ESI
0069586C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00695871  EB 03                     JMP 0x00695876
LAB_00695873:
00695873  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
LAB_00695876:
00695876  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
00695879  74 09                     JZ 0x00695884
0069587B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0069587E  51                        PUSH ECX
0069587F  E8 DC 57 01 00            CALL 0x006ab060
LAB_00695884:
00695884  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00695887  52                        PUSH EDX
00695888  E8 83 88 01 00            CALL 0x006ae110
0069588D  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
00695890  50                        PUSH EAX
00695891  E8 7A 88 01 00            CALL 0x006ae110
00695896  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00695899  51                        PUSH ECX
0069589A  E8 71 88 01 00            CALL 0x006ae110
0069589F  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006958A2  52                        PUSH EDX
006958A3  E8 68 88 01 00            CALL 0x006ae110
006958A8  FF 15 DC BE 85 00         CALL dword ptr [0x0085bedc]
006958AE  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006958B1  5F                        POP EDI
006958B2  5E                        POP ESI
006958B3  5B                        POP EBX
006958B4  8B E5                     MOV ESP,EBP
006958B6  5D                        POP EBP
006958B7  C2 08 00                  RET 0x8
LAB_006958ba:
006958BA  8B C6                     MOV EAX,ESI
006958BC  5F                        POP EDI
006958BD  5E                        POP ESI
006958BE  5B                        POP EBX
006958BF  8B E5                     MOV ESP,EBP
006958C1  5D                        POP EBP
006958C2  C2 08 00                  RET 0x8
