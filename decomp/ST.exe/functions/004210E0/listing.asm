STAllPlayersC::SaveGObjData:
004210E0  55                        PUSH EBP
004210E1  8B EC                     MOV EBP,ESP
004210E3  83 EC 68                  SUB ESP,0x68
004210E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004210EB  53                        PUSH EBX
004210EC  56                        PUSH ESI
004210ED  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004210F0  57                        PUSH EDI
004210F1  8D 55 9C                  LEA EDX,[EBP + -0x64]
004210F4  8D 4D 98                  LEA ECX,[EBP + -0x68]
004210F7  6A 00                     PUSH 0x0
004210F9  52                        PUSH EDX
004210FA  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
004210FD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00421103  E8 E8 C6 30 00            CALL 0x0072d7f0
00421108  8B F0                     MOV ESI,EAX
0042110A  83 C4 08                  ADD ESP,0x8
0042110D  85 F6                     TEST ESI,ESI
0042110F  0F 85 32 0D 00 00         JNZ 0x00421e47
00421115  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00421118  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0042111B  C7 06 81 02 00 00         MOV dword ptr [ESI],0x281
00421121  8B 83 9B 00 00 00         MOV EAX,dword ptr [EBX + 0x9b]
00421127  8D 0C C5 81 02 00 00      LEA ECX,[EAX*0x8 + 0x281]
0042112E  89 0E                     MOV dword ptr [ESI],ECX
00421130  8B 83 A3 00 00 00         MOV EAX,dword ptr [EBX + 0xa3]
00421136  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00421139  C1 E0 03                  SHL EAX,0x3
0042113C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0042113F  03 C1                     ADD EAX,ECX
00421141  89 06                     MOV dword ptr [ESI],EAX
00421143  8B 8B CD 01 00 00         MOV ECX,dword ptr [EBX + 0x1cd]
00421149  83 F9 01                  CMP ECX,0x1
0042114C  0F 85 A1 01 00 00         JNZ 0x004212f3
00421152  05 24 01 00 00            ADD EAX,0x124
00421157  89 06                     MOV dword ptr [ESI],EAX
00421159  8B 4B 20                  MOV ECX,dword ptr [EBX + 0x20]
0042115C  83 F9 14                  CMP ECX,0x14
0042115F  0F 84 2B 01 00 00         JZ 0x00421290
00421165  81 F9 AE 01 00 00         CMP ECX,0x1ae
0042116B  0F 84 1A 01 00 00         JZ 0x0042128b
00421171  81 F9 E8 03 00 00         CMP ECX,0x3e8
00421177  0F 85 76 01 00 00         JNZ 0x004212f3
0042117D  8D BB 35 01 00 00         LEA EDI,[EBX + 0x135]
00421183  C7 45 E4 02 00 00 00      MOV dword ptr [EBP + -0x1c],0x2
LAB_0042118a:
0042118A  8B 4F F8                  MOV ECX,dword ptr [EDI + -0x8]
0042118D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421190  50                        PUSH EAX
00421191  51                        PUSH ECX
00421192  E8 89 EE 28 00            CALL 0x006b0020
00421197  8D 55 F8                  LEA EDX,[EBP + -0x8]
0042119A  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042119D  52                        PUSH EDX
0042119E  E8 BD 9E 28 00            CALL 0x006ab060
004211A3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004211A6  8B 0E                     MOV ECX,dword ptr [ESI]
004211A8  03 C8                     ADD ECX,EAX
004211AA  89 0E                     MOV dword ptr [ESI],ECX
004211AC  8B 17                     MOV EDX,dword ptr [EDI]
004211AE  8D 4D FC                  LEA ECX,[EBP + -0x4]
004211B1  51                        PUSH ECX
004211B2  52                        PUSH EDX
004211B3  E8 68 EE 28 00            CALL 0x006b0020
004211B8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004211BB  8D 45 F8                  LEA EAX,[EBP + -0x8]
004211BE  50                        PUSH EAX
004211BF  E8 9C 9E 28 00            CALL 0x006ab060
004211C4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004211C7  8B 16                     MOV EDX,dword ptr [ESI]
004211C9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004211CC  03 D1                     ADD EDX,ECX
004211CE  83 C7 04                  ADD EDI,0x4
004211D1  48                        DEC EAX
004211D2  89 16                     MOV dword ptr [ESI],EDX
004211D4  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004211D7  75 B1                     JNZ 0x0042118a
004211D9  8D BB 4D 01 00 00         LEA EDI,[EBX + 0x14d]
004211DF  C7 45 E4 04 00 00 00      MOV dword ptr [EBP + -0x1c],0x4
LAB_004211e6:
004211E6  8B 47 F0                  MOV EAX,dword ptr [EDI + -0x10]
004211E9  8D 55 FC                  LEA EDX,[EBP + -0x4]
004211EC  52                        PUSH EDX
004211ED  50                        PUSH EAX
004211EE  E8 2D EE 28 00            CALL 0x006b0020
004211F3  8D 4D F8                  LEA ECX,[EBP + -0x8]
004211F6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004211F9  51                        PUSH ECX
004211FA  E8 61 9E 28 00            CALL 0x006ab060
004211FF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421202  8B 06                     MOV EAX,dword ptr [ESI]
00421204  03 C2                     ADD EAX,EDX
00421206  89 06                     MOV dword ptr [ESI],EAX
00421208  8B 0F                     MOV ECX,dword ptr [EDI]
0042120A  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042120D  50                        PUSH EAX
0042120E  51                        PUSH ECX
0042120F  E8 0C EE 28 00            CALL 0x006b0020
00421214  8D 55 F8                  LEA EDX,[EBP + -0x8]
00421217  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0042121A  52                        PUSH EDX
0042121B  E8 40 9E 28 00            CALL 0x006ab060
00421220  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421223  8B 0E                     MOV ECX,dword ptr [ESI]
00421225  03 C8                     ADD ECX,EAX
00421227  83 C7 04                  ADD EDI,0x4
0042122A  89 0E                     MOV dword ptr [ESI],ECX
0042122C  8B C1                     MOV EAX,ECX
0042122E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00421231  49                        DEC ECX
00421232  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00421235  75 AF                     JNZ 0x004211e6
00421237  05 72 02 00 00            ADD EAX,0x272
0042123C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042123F  89 06                     MOV dword ptr [ESI],EAX
00421241  8B 93 9D 01 00 00         MOV EDX,dword ptr [EBX + 0x19d]
00421247  51                        PUSH ECX
00421248  52                        PUSH EDX
00421249  E8 D2 ED 28 00            CALL 0x006b0020
0042124E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00421251  8D 45 F8                  LEA EAX,[EBP + -0x8]
00421254  50                        PUSH EAX
00421255  E8 06 9E 28 00            CALL 0x006ab060
0042125A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042125D  8B 16                     MOV EDX,dword ptr [ESI]
0042125F  03 D1                     ADD EDX,ECX
00421261  89 16                     MOV dword ptr [ESI],EDX
00421263  8B 83 A1 01 00 00         MOV EAX,dword ptr [EBX + 0x1a1]
00421269  8D 55 FC                  LEA EDX,[EBP + -0x4]
0042126C  52                        PUSH EDX
0042126D  50                        PUSH EAX
0042126E  E8 AD ED 28 00            CALL 0x006b0020
00421273  8D 4D F8                  LEA ECX,[EBP + -0x8]
00421276  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00421279  51                        PUSH ECX
0042127A  E8 E1 9D 28 00            CALL 0x006ab060
0042127F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421282  8B 06                     MOV EAX,dword ptr [ESI]
00421284  83 C2 2E                  ADD EDX,0x2e
00421287  03 C2                     ADD EAX,EDX
00421289  EB 66                     JMP 0x004212f1
LAB_0042128b:
0042128B  83 C0 22                  ADD EAX,0x22
0042128E  EB 61                     JMP 0x004212f1
LAB_00421290:
00421290  8D BB 71 01 00 00         LEA EDI,[EBX + 0x171]
00421296  C7 45 E4 05 00 00 00      MOV dword ptr [EBP + -0x1c],0x5
LAB_0042129d:
0042129D  8B 4F EC                  MOV ECX,dword ptr [EDI + -0x14]
004212A0  8D 45 FC                  LEA EAX,[EBP + -0x4]
004212A3  50                        PUSH EAX
004212A4  51                        PUSH ECX
004212A5  E8 76 ED 28 00            CALL 0x006b0020
004212AA  8D 55 F8                  LEA EDX,[EBP + -0x8]
004212AD  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004212B0  52                        PUSH EDX
004212B1  E8 AA 9D 28 00            CALL 0x006ab060
004212B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004212B9  8B 0E                     MOV ECX,dword ptr [ESI]
004212BB  03 C8                     ADD ECX,EAX
004212BD  89 0E                     MOV dword ptr [ESI],ECX
004212BF  8B 17                     MOV EDX,dword ptr [EDI]
004212C1  8D 4D FC                  LEA ECX,[EBP + -0x4]
004212C4  51                        PUSH ECX
004212C5  52                        PUSH EDX
004212C6  E8 55 ED 28 00            CALL 0x006b0020
004212CB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004212CE  8D 45 F8                  LEA EAX,[EBP + -0x8]
004212D1  50                        PUSH EAX
004212D2  E8 89 9D 28 00            CALL 0x006ab060
004212D7  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004212DA  8B 06                     MOV EAX,dword ptr [ESI]
004212DC  03 C1                     ADD EAX,ECX
004212DE  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
004212E1  83 C7 04                  ADD EDI,0x4
004212E4  49                        DEC ECX
004212E5  89 06                     MOV dword ptr [ESI],EAX
004212E7  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004212EA  75 B1                     JNZ 0x0042129d
004212EC  05 BC 04 00 00            ADD EAX,0x4bc
LAB_004212f1:
004212F1  89 06                     MOV dword ptr [ESI],EAX
LAB_004212f3:
004212F3  8B 16                     MOV EDX,dword ptr [ESI]
004212F5  52                        PUSH EDX
004212F6  E8 75 99 28 00            CALL 0x006aac70
004212FB  8D 90 11 01 00 00         LEA EDX,[EAX + 0x111]
00421301  83 C9 FF                  OR ECX,0xffffffff
00421304  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00421307  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0042130E  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00421311  89 0A                     MOV dword ptr [EDX],ECX
00421313  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421316  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00421319  89 90 15 01 00 00         MOV dword ptr [EAX + 0x115],EDX
0042131F  89 88 19 01 00 00         MOV dword ptr [EAX + 0x119],ECX
00421325  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421328  BE 02 00 00 00            MOV ESI,0x2
0042132D  89 90 1D 01 00 00         MOV dword ptr [EAX + 0x11d],EDX
00421333  89 88 21 01 00 00         MOV dword ptr [EAX + 0x121],ECX
00421339  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042133C  89 90 25 01 00 00         MOV dword ptr [EAX + 0x125],EDX
00421342  89 88 29 01 00 00         MOV dword ptr [EAX + 0x129],ECX
00421348  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042134B  89 90 2D 01 00 00         MOV dword ptr [EAX + 0x12d],EDX
00421351  8D 90 35 01 00 00         LEA EDX,[EAX + 0x135]
00421357  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_0042135a:
0042135A  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
0042135D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421360  89 3A                     MOV dword ptr [EDX],EDI
00421362  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00421365  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421368  89 7A 10                  MOV dword ptr [EDX + 0x10],EDI
0042136B  83 C2 08                  ADD EDX,0x8
0042136E  4E                        DEC ESI
0042136F  75 E9                     JNZ 0x0042135a
00421371  8D 90 55 01 00 00         LEA EDX,[EAX + 0x155]
00421377  BE 04 00 00 00            MOV ESI,0x4
LAB_0042137c:
0042137C  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
0042137F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421382  89 3A                     MOV dword ptr [EDX],EDI
00421384  89 4A 1C                  MOV dword ptr [EDX + 0x1c],ECX
00421387  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0042138A  89 7A 20                  MOV dword ptr [EDX + 0x20],EDI
0042138D  83 C2 08                  ADD EDX,0x8
00421390  4E                        DEC ESI
00421391  75 E9                     JNZ 0x0042137c
00421393  8D 90 95 01 00 00         LEA EDX,[EAX + 0x195]
00421399  BE 05 00 00 00            MOV ESI,0x5
0042139E  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
LAB_004213a1:
004213A1  89 4A FC                  MOV dword ptr [EDX + -0x4],ECX
004213A4  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004213A7  89 3A                     MOV dword ptr [EDX],EDI
004213A9  89 4A 24                  MOV dword ptr [EDX + 0x24],ECX
004213AC  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004213AF  89 7A 28                  MOV dword ptr [EDX + 0x28],EDI
004213B2  83 C2 08                  ADD EDX,0x8
004213B5  4E                        DEC ESI
004213B6  75 E9                     JNZ 0x004213a1
004213B8  89 88 E1 01 00 00         MOV dword ptr [EAX + 0x1e1],ECX
004213BE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004213C1  89 90 E5 01 00 00         MOV dword ptr [EAX + 0x1e5],EDX
004213C7  89 88 E9 01 00 00         MOV dword ptr [EAX + 0x1e9],ECX
004213CD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004213D0  8D 73 34                  LEA ESI,[EBX + 0x34]
004213D3  89 90 ED 01 00 00         MOV dword ptr [EAX + 0x1ed],EDX
004213D9  89 88 F1 01 00 00         MOV dword ptr [EAX + 0x1f1],ECX
004213DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004213E2  8D 78 08                  LEA EDI,[EAX + 0x8]
004213E5  89 90 F5 01 00 00         MOV dword ptr [EAX + 0x1f5],EDX
004213EB  89 88 F9 01 00 00         MOV dword ptr [EAX + 0x1f9],ECX
004213F1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004213F4  89 90 FD 01 00 00         MOV dword ptr [EAX + 0x1fd],EDX
004213FA  89 88 01 02 00 00         MOV dword ptr [EAX + 0x201],ECX
00421400  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421403  89 90 05 02 00 00         MOV dword ptr [EAX + 0x205],EDX
00421409  89 88 09 02 00 00         MOV dword ptr [EAX + 0x209],ECX
0042140F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421412  89 90 0D 02 00 00         MOV dword ptr [EAX + 0x20d],EDX
00421418  89 88 11 02 00 00         MOV dword ptr [EAX + 0x211],ECX
0042141E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421421  89 90 15 02 00 00         MOV dword ptr [EAX + 0x215],EDX
00421427  89 88 19 02 00 00         MOV dword ptr [EAX + 0x219],ECX
0042142D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421430  89 90 1D 02 00 00         MOV dword ptr [EAX + 0x21d],EDX
00421436  89 88 21 02 00 00         MOV dword ptr [EAX + 0x221],ECX
0042143C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042143F  89 90 25 02 00 00         MOV dword ptr [EAX + 0x225],EDX
00421445  89 88 29 02 00 00         MOV dword ptr [EAX + 0x229],ECX
0042144B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042144E  89 90 2D 02 00 00         MOV dword ptr [EAX + 0x22d],EDX
00421454  89 88 31 02 00 00         MOV dword ptr [EAX + 0x231],ECX
0042145A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042145D  89 90 35 02 00 00         MOV dword ptr [EAX + 0x235],EDX
00421463  89 88 39 02 00 00         MOV dword ptr [EAX + 0x239],ECX
00421469  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042146C  89 90 3D 02 00 00         MOV dword ptr [EAX + 0x23d],EDX
00421472  89 88 41 02 00 00         MOV dword ptr [EAX + 0x241],ECX
00421478  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042147B  89 90 45 02 00 00         MOV dword ptr [EAX + 0x245],EDX
00421481  89 88 49 02 00 00         MOV dword ptr [EAX + 0x249],ECX
00421487  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0042148A  89 90 4D 02 00 00         MOV dword ptr [EAX + 0x24d],EDX
00421490  89 88 51 02 00 00         MOV dword ptr [EAX + 0x251],ECX
00421496  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421499  89 88 59 02 00 00         MOV dword ptr [EAX + 0x259],ECX
0042149F  89 90 55 02 00 00         MOV dword ptr [EAX + 0x255],EDX
004214A5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004214A8  89 90 5D 02 00 00         MOV dword ptr [EAX + 0x25d],EDX
004214AE  89 88 61 02 00 00         MOV dword ptr [EAX + 0x261],ECX
004214B4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004214B7  89 88 69 02 00 00         MOV dword ptr [EAX + 0x269],ECX
004214BD  89 90 65 02 00 00         MOV dword ptr [EAX + 0x265],EDX
004214C3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004214C6  89 88 6D 02 00 00         MOV dword ptr [EAX + 0x26d],ECX
004214CC  8B 53 1C                  MOV EDX,dword ptr [EBX + 0x1c]
004214CF  89 10                     MOV dword ptr [EAX],EDX
004214D1  66 8B 4B 30               MOV CX,word ptr [EBX + 0x30]
004214D5  66 89 48 04               MOV word ptr [EAX + 0x4],CX
004214D9  66 8B 53 32               MOV DX,word ptr [EBX + 0x32]
004214DD  B9 17 00 00 00            MOV ECX,0x17
004214E2  66 89 50 06               MOV word ptr [EAX + 0x6],DX
004214E6  F3 A5                     MOVSD.REP ES:EDI,ESI
004214E8  66 A5                     MOVSW ES:EDI,ESI
004214EA  A4                        MOVSB ES:EDI,ESI
004214EB  8D B3 93 00 00 00         LEA ESI,[EBX + 0x93]
004214F1  8D 78 67                  LEA EDI,[EAX + 0x67]
004214F4  B9 1B 00 00 00            MOV ECX,0x1b
004214F9  F3 A5                     MOVSD.REP ES:EDI,ESI
004214FB  66 A5                     MOVSW ES:EDI,ESI
004214FD  8B 8B CD 01 00 00         MOV ECX,dword ptr [EBX + 0x1cd]
00421503  89 88 D5 00 00 00         MOV dword ptr [EAX + 0xd5],ECX
00421509  8B 93 01 01 00 00         MOV EDX,dword ptr [EBX + 0x101]
0042150F  89 90 D9 00 00 00         MOV dword ptr [EAX + 0xd9],EDX
00421515  8B 8B 05 01 00 00         MOV ECX,dword ptr [EBX + 0x105]
0042151B  89 88 DD 00 00 00         MOV dword ptr [EAX + 0xdd],ECX
00421521  8B 93 09 01 00 00         MOV EDX,dword ptr [EBX + 0x109]
00421527  89 90 E1 00 00 00         MOV dword ptr [EAX + 0xe1],EDX
0042152D  8B 8B 0D 01 00 00         MOV ECX,dword ptr [EBX + 0x10d]
00421533  89 88 E5 00 00 00         MOV dword ptr [EAX + 0xe5],ECX
00421539  8B 93 11 01 00 00         MOV EDX,dword ptr [EBX + 0x111]
0042153F  89 90 E9 00 00 00         MOV dword ptr [EAX + 0xe9],EDX
00421545  8B 8B 15 01 00 00         MOV ECX,dword ptr [EBX + 0x115]
0042154B  89 88 ED 00 00 00         MOV dword ptr [EAX + 0xed],ECX
00421551  8B 93 19 01 00 00         MOV EDX,dword ptr [EBX + 0x119]
00421557  89 90 F1 00 00 00         MOV dword ptr [EAX + 0xf1],EDX
0042155D  8B 8B D1 01 00 00         MOV ECX,dword ptr [EBX + 0x1d1]
00421563  89 88 F5 00 00 00         MOV dword ptr [EAX + 0xf5],ECX
00421569  8B 93 15 02 00 00         MOV EDX,dword ptr [EBX + 0x215]
0042156F  89 90 F9 00 00 00         MOV dword ptr [EAX + 0xf9],EDX
00421575  8B 8B 19 02 00 00         MOV ECX,dword ptr [EBX + 0x219]
0042157B  89 88 FD 00 00 00         MOV dword ptr [EAX + 0xfd],ECX
00421581  8B 93 1D 02 00 00         MOV EDX,dword ptr [EBX + 0x21d]
00421587  89 90 01 01 00 00         MOV dword ptr [EAX + 0x101],EDX
0042158D  8B 8B 21 02 00 00         MOV ECX,dword ptr [EBX + 0x221]
00421593  89 88 05 01 00 00         MOV dword ptr [EAX + 0x105],ECX
00421599  8B 93 25 02 00 00         MOV EDX,dword ptr [EBX + 0x225]
0042159F  89 90 09 01 00 00         MOV dword ptr [EAX + 0x109],EDX
004215A5  C7 80 0D 01 00 00 00 00 00 00  MOV dword ptr [EAX + 0x10d],0x0
004215AF  8B 8B 9B 00 00 00         MOV ECX,dword ptr [EBX + 0x9b]
004215B5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004215B8  8B B3 97 00 00 00         MOV ESI,dword ptr [EBX + 0x97]
004215BE  C1 E1 03                  SHL ECX,0x3
004215C1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004215C4  8D BA 81 02 00 00         LEA EDI,[EDX + 0x281]
004215CA  8B D1                     MOV EDX,ECX
004215CC  C1 E9 02                  SHR ECX,0x2
004215CF  F3 A5                     MOVSD.REP ES:EDI,ESI
004215D1  8B CA                     MOV ECX,EDX
004215D3  83 E1 03                  AND ECX,0x3
004215D6  F3 A4                     MOVSB.REP ES:EDI,ESI
004215D8  C7 80 71 02 00 00 81 02 00 00  MOV dword ptr [EAX + 0x271],0x281
004215E2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004215E5  89 88 75 02 00 00         MOV dword ptr [EAX + 0x275],ECX
004215EB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004215EE  8D 9A 81 02 00 00         LEA EBX,[EDX + 0x281]
004215F4  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004215F7  8B 8A A3 00 00 00         MOV ECX,dword ptr [EDX + 0xa3]
004215FD  8B B2 9F 00 00 00         MOV ESI,dword ptr [EDX + 0x9f]
00421603  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00421606  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00421609  C1 E1 03                  SHL ECX,0x3
0042160C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0042160F  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
00421612  8B D1                     MOV EDX,ECX
00421614  C1 E9 02                  SHR ECX,0x2
00421617  F3 A5                     MOVSD.REP ES:EDI,ESI
00421619  8B CA                     MOV ECX,EDX
0042161B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0042161E  83 E1 03                  AND ECX,0x3
00421621  F3 A4                     MOVSB.REP ES:EDI,ESI
00421623  89 98 79 02 00 00         MOV dword ptr [EAX + 0x279],EBX
00421629  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042162C  89 88 7D 02 00 00         MOV dword ptr [EAX + 0x27d],ECX
00421632  8B 8A CD 01 00 00         MOV ECX,dword ptr [EDX + 0x1cd]
00421638  83 F9 01                  CMP ECX,0x1
0042163B  0F 85 F1 07 00 00         JNZ 0x00421e32
00421641  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421644  8B B2 1D 01 00 00         MOV ESI,dword ptr [EDX + 0x11d]
0042164A  03 DF                     ADD EBX,EDI
0042164C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0042164F  B9 0D 00 00 00            MOV ECX,0xd
00421654  03 FB                     ADD EDI,EBX
00421656  C7 45 FC 36 00 00 00      MOV dword ptr [EBP + -0x4],0x36
0042165D  F3 A5                     MOVSD.REP ES:EDI,ESI
0042165F  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00421662  66 A5                     MOVSW ES:EDI,ESI
00421664  89 19                     MOV dword ptr [ECX],EBX
00421666  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421669  89 88 15 01 00 00         MOV dword ptr [EAX + 0x115],ECX
0042166F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421672  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00421675  03 DE                     ADD EBX,ESI
00421677  8B B2 21 01 00 00         MOV ESI,dword ptr [EDX + 0x121]
0042167D  B9 0D 00 00 00            MOV ECX,0xd
00421682  03 FB                     ADD EDI,EBX
00421684  C7 45 FC 36 00 00 00      MOV dword ptr [EBP + -0x4],0x36
0042168B  F3 A5                     MOVSD.REP ES:EDI,ESI
0042168D  66 A5                     MOVSW ES:EDI,ESI
0042168F  89 98 19 01 00 00         MOV dword ptr [EAX + 0x119],EBX
00421695  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421698  89 88 1D 01 00 00         MOV dword ptr [EAX + 0x11d],ECX
0042169E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004216A1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004216A4  8B B2 25 01 00 00         MOV ESI,dword ptr [EDX + 0x125]
004216AA  03 D9                     ADD EBX,ECX
004216AC  B9 17 00 00 00            MOV ECX,0x17
004216B1  03 FB                     ADD EDI,EBX
004216B3  C7 45 FC 5C 00 00 00      MOV dword ptr [EBP + -0x4],0x5c
004216BA  F3 A5                     MOVSD.REP ES:EDI,ESI
004216BC  89 98 21 01 00 00         MOV dword ptr [EAX + 0x121],EBX
004216C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004216C5  89 88 25 01 00 00         MOV dword ptr [EAX + 0x125],ECX
004216CB  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004216CE  8B B2 29 01 00 00         MOV ESI,dword ptr [EDX + 0x129]
004216D4  03 DF                     ADD EBX,EDI
004216D6  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004216D9  B9 17 00 00 00            MOV ECX,0x17
004216DE  03 FB                     ADD EDI,EBX
004216E0  C7 45 FC 5C 00 00 00      MOV dword ptr [EBP + -0x4],0x5c
004216E7  F3 A5                     MOVSD.REP ES:EDI,ESI
004216E9  89 98 29 01 00 00         MOV dword ptr [EAX + 0x129],EBX
004216EF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004216F2  89 88 2D 01 00 00         MOV dword ptr [EAX + 0x12d],ECX
004216F8  8B 4A 20                  MOV ECX,dword ptr [EDX + 0x20]
004216FB  83 F9 14                  CMP ECX,0x14
004216FE  0F 84 04 05 00 00         JZ 0x00421c08
00421704  81 F9 AE 01 00 00         CMP ECX,0x1ae
0042170A  0F 84 03 04 00 00         JZ 0x00421b13
00421710  81 F9 E8 03 00 00         CMP ECX,0x3e8
00421716  0F 85 16 07 00 00         JNZ 0x00421e32
0042171C  81 C2 35 01 00 00         ADD EDX,0x135
00421722  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
00421729  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
0042172C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0042172F  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_00421732:
00421732  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00421735  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421738  8D 45 FC                  LEA EAX,[EBP + -0x4]
0042173B  03 DE                     ADD EBX,ESI
0042173D  8B 51 F8                  MOV EDX,dword ptr [ECX + -0x8]
00421740  50                        PUSH EAX
00421741  52                        PUSH EDX
00421742  E8 D9 E8 28 00            CALL 0x006b0020
00421747  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042174A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042174D  8B F0                     MOV ESI,EAX
0042174F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421752  8B D1                     MOV EDX,ECX
00421754  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
00421757  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0042175A  C1 E9 02                  SHR ECX,0x2
0042175D  F3 A5                     MOVSD.REP ES:EDI,ESI
0042175F  8B CA                     MOV ECX,EDX
00421761  8D 55 F4                  LEA EDX,[EBP + -0xc]
00421764  83 E1 03                  AND ECX,0x3
00421767  52                        PUSH EDX
00421768  F3 A4                     MOVSB.REP ES:EDI,ESI
0042176A  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
0042176D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421770  89 08                     MOV dword ptr [EAX],ECX
00421772  E8 E9 98 28 00            CALL 0x006ab060
00421777  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042177A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0042177D  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421780  03 DE                     ADD EBX,ESI
00421782  8B 11                     MOV EDX,dword ptr [ECX]
00421784  50                        PUSH EAX
00421785  52                        PUSH EDX
00421786  E8 95 E8 28 00            CALL 0x006b0020
0042178B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042178E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421791  8B F0                     MOV ESI,EAX
00421793  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421796  8B D1                     MOV EDX,ECX
00421798  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
0042179B  C1 E9 02                  SHR ECX,0x2
0042179E  F3 A5                     MOVSD.REP ES:EDI,ESI
004217A0  8B CA                     MOV ECX,EDX
004217A2  83 E1 03                  AND ECX,0x3
004217A5  F3 A4                     MOVSB.REP ES:EDI,ESI
004217A7  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004217AA  8D 4D F4                  LEA ECX,[EBP + -0xc]
004217AD  51                        PUSH ECX
004217AE  89 5E 0C                  MOV dword ptr [ESI + 0xc],EBX
004217B1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004217B4  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
004217B7  E8 A4 98 28 00            CALL 0x006ab060
004217BC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004217BF  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
004217C2  83 C2 04                  ADD EDX,0x4
004217C5  83 C6 08                  ADD ESI,0x8
004217C8  48                        DEC EAX
004217C9  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004217CC  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004217CF  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
004217D2  0F 85 5A FF FF FF         JNZ 0x00421732
004217D8  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004217DB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004217DE  81 C2 4D 01 00 00         ADD EDX,0x14d
004217E4  05 55 01 00 00            ADD EAX,0x155
004217E9  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004217EC  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004217EF  C7 45 E0 04 00 00 00      MOV dword ptr [EBP + -0x20],0x4
LAB_004217f6:
004217F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004217F9  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004217FC  03 D8                     ADD EBX,EAX
004217FE  8D 4D FC                  LEA ECX,[EBP + -0x4]
00421801  8B 42 F0                  MOV EAX,dword ptr [EDX + -0x10]
00421804  51                        PUSH ECX
00421805  50                        PUSH EAX
00421806  E8 15 E8 28 00            CALL 0x006b0020
0042180B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042180E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00421811  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421814  8B F0                     MOV ESI,EAX
00421816  8B C1                     MOV EAX,ECX
00421818  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
0042181B  C1 E9 02                  SHR ECX,0x2
0042181E  F3 A5                     MOVSD.REP ES:EDI,ESI
00421820  8B C8                     MOV ECX,EAX
00421822  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00421825  83 E1 03                  AND ECX,0x3
00421828  8D 55 F4                  LEA EDX,[EBP + -0xc]
0042182B  F3 A4                     MOVSB.REP ES:EDI,ESI
0042182D  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
00421830  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421833  52                        PUSH EDX
00421834  89 08                     MOV dword ptr [EAX],ECX
00421836  E8 25 98 28 00            CALL 0x006ab060
0042183B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0042183E  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421841  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421844  03 DE                     ADD EBX,ESI
00421846  8B 11                     MOV EDX,dword ptr [ECX]
00421848  50                        PUSH EAX
00421849  52                        PUSH EDX
0042184A  E8 D1 E7 28 00            CALL 0x006b0020
0042184F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421852  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421855  8B F0                     MOV ESI,EAX
00421857  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0042185A  8B D1                     MOV EDX,ECX
0042185C  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
0042185F  C1 E9 02                  SHR ECX,0x2
00421862  F3 A5                     MOVSD.REP ES:EDI,ESI
00421864  8B CA                     MOV ECX,EDX
00421866  83 E1 03                  AND ECX,0x3
00421869  F3 A4                     MOVSB.REP ES:EDI,ESI
0042186B  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0042186E  8D 4D F4                  LEA ECX,[EBP + -0xc]
00421871  51                        PUSH ECX
00421872  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
00421875  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421878  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
0042187B  E8 E0 97 28 00            CALL 0x006ab060
00421880  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00421883  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00421886  83 C2 04                  ADD EDX,0x4
00421889  83 C6 08                  ADD ESI,0x8
0042188C  48                        DEC EAX
0042188D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00421890  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00421893  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00421896  0F 85 5A FF FF FF         JNZ 0x004217f6
0042189C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042189F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004218A2  03 D8                     ADD EBX,EAX
004218A4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004218A7  8B B2 85 01 00 00         MOV ESI,dword ptr [EDX + 0x185]
004218AD  B9 4A 00 00 00            MOV ECX,0x4a
004218B2  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
004218B5  C7 45 FC 29 01 00 00      MOV dword ptr [EBP + -0x4],0x129
004218BC  F3 A5                     MOVSD.REP ES:EDI,ESI
004218BE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004218C1  A4                        MOVSB ES:EDI,ESI
004218C2  89 98 E1 01 00 00         MOV dword ptr [EAX + 0x1e1],EBX
004218C8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004218CB  89 88 E5 01 00 00         MOV dword ptr [EAX + 0x1e5],ECX
004218D1  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004218D4  8B B2 89 01 00 00         MOV ESI,dword ptr [EDX + 0x189]
004218DA  03 DF                     ADD EBX,EDI
004218DC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004218DF  B9 4A 00 00 00            MOV ECX,0x4a
004218E4  03 FB                     ADD EDI,EBX
004218E6  C7 45 FC 29 01 00 00      MOV dword ptr [EBP + -0x4],0x129
004218ED  F3 A5                     MOVSD.REP ES:EDI,ESI
004218EF  A4                        MOVSB ES:EDI,ESI
004218F0  89 98 E9 01 00 00         MOV dword ptr [EAX + 0x1e9],EBX
004218F6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004218F9  89 88 ED 01 00 00         MOV dword ptr [EAX + 0x1ed],ECX
004218FF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421902  8B 8A 8D 01 00 00         MOV ECX,dword ptr [EDX + 0x18d]
00421908  03 DE                     ADD EBX,ESI
0042190A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0042190D  C7 45 FC 10 00 00 00      MOV dword ptr [EBP + -0x4],0x10
00421914  8B 39                     MOV EDI,dword ptr [ECX]
00421916  03 F3                     ADD ESI,EBX
00421918  89 3E                     MOV dword ptr [ESI],EDI
0042191A  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
0042191D  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421920  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00421923  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
00421926  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00421929  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
0042192C  89 98 F1 01 00 00         MOV dword ptr [EAX + 0x1f1],EBX
00421932  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421935  89 88 F5 01 00 00         MOV dword ptr [EAX + 0x1f5],ECX
0042193B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042193E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421941  03 D9                     ADD EBX,ECX
00421943  8B 8A 91 01 00 00         MOV ECX,dword ptr [EDX + 0x191]
00421949  C7 45 FC 10 00 00 00      MOV dword ptr [EBP + -0x4],0x10
00421950  03 F3                     ADD ESI,EBX
00421952  8B 39                     MOV EDI,dword ptr [ECX]
00421954  89 3E                     MOV dword ptr [ESI],EDI
00421956  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421959  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
0042195C  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
0042195F  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
00421962  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00421965  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
00421968  89 98 F9 01 00 00         MOV dword ptr [EAX + 0x1f9],EBX
0042196E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421971  89 88 FD 01 00 00         MOV dword ptr [EAX + 0x1fd],ECX
00421977  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042197A  8B 8A 9D 01 00 00         MOV ECX,dword ptr [EDX + 0x19d]
00421980  03 D8                     ADD EBX,EAX
00421982  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421985  50                        PUSH EAX
00421986  51                        PUSH ECX
00421987  E8 94 E6 28 00            CALL 0x006b0020
0042198C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0042198F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00421992  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421995  8B F0                     MOV ESI,EAX
00421997  8B C1                     MOV EAX,ECX
00421999  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
0042199C  C1 E9 02                  SHR ECX,0x2
0042199F  F3 A5                     MOVSD.REP ES:EDI,ESI
004219A1  8B C8                     MOV ECX,EAX
004219A3  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004219A6  83 E1 03                  AND ECX,0x3
004219A9  F3 A4                     MOVSB.REP ES:EDI,ESI
004219AB  89 98 11 02 00 00         MOV dword ptr [EAX + 0x211],EBX
004219B1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004219B4  8D 55 F4                  LEA EDX,[EBP + -0xc]
004219B7  89 88 15 02 00 00         MOV dword ptr [EAX + 0x215],ECX
004219BD  52                        PUSH EDX
004219BE  E8 9D 96 28 00            CALL 0x006ab060
004219C3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004219C6  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004219C9  8D 45 FC                  LEA EAX,[EBP + -0x4]
004219CC  03 DE                     ADD EBX,ESI
004219CE  8B 91 A1 01 00 00         MOV EDX,dword ptr [ECX + 0x1a1]
004219D4  50                        PUSH EAX
004219D5  52                        PUSH EDX
004219D6  E8 45 E6 28 00            CALL 0x006b0020
004219DB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004219DE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004219E1  8B F0                     MOV ESI,EAX
004219E3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004219E6  8B D1                     MOV EDX,ECX
004219E8  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
004219EB  C1 E9 02                  SHR ECX,0x2
004219EE  F3 A5                     MOVSD.REP ES:EDI,ESI
004219F0  8B CA                     MOV ECX,EDX
004219F2  83 E1 03                  AND ECX,0x3
004219F5  F3 A4                     MOVSB.REP ES:EDI,ESI
004219F7  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004219FA  8D 4D F4                  LEA ECX,[EBP + -0xc]
004219FD  51                        PUSH ECX
004219FE  89 9E 19 02 00 00         MOV dword ptr [ESI + 0x219],EBX
00421A04  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421A07  89 86 1D 02 00 00         MOV dword ptr [ESI + 0x21d],EAX
00421A0D  E8 4E 96 28 00            CALL 0x006ab060
00421A12  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421A15  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00421A18  03 D8                     ADD EBX,EAX
00421A1A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00421A1D  C7 45 FC 0C 00 00 00      MOV dword ptr [EBP + -0x4],0xc
00421A24  03 CB                     ADD ECX,EBX
00421A26  8B 90 A5 01 00 00         MOV EDX,dword ptr [EAX + 0x1a5]
00421A2C  8B 3A                     MOV EDI,dword ptr [EDX]
00421A2E  89 39                     MOV dword ptr [ECX],EDI
00421A30  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
00421A33  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
00421A36  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00421A39  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00421A3C  89 9E 21 02 00 00         MOV dword ptr [ESI + 0x221],EBX
00421A42  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421A45  89 8E 25 02 00 00         MOV dword ptr [ESI + 0x225],ECX
00421A4B  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421A4E  8B 90 A9 01 00 00         MOV EDX,dword ptr [EAX + 0x1a9]
00421A54  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00421A57  03 DF                     ADD EBX,EDI
00421A59  C7 45 FC 0C 00 00 00      MOV dword ptr [EBP + -0x4],0xc
00421A60  8B 3A                     MOV EDI,dword ptr [EDX]
00421A62  03 CB                     ADD ECX,EBX
00421A64  89 39                     MOV dword ptr [ECX],EDI
00421A66  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
00421A69  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
00421A6C  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
00421A6F  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00421A72  89 9E 29 02 00 00         MOV dword ptr [ESI + 0x229],EBX
00421A78  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421A7B  89 8E 2D 02 00 00         MOV dword ptr [ESI + 0x22d],ECX
00421A81  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00421A84  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00421A87  03 DA                     ADD EBX,EDX
00421A89  8B 90 B5 01 00 00         MOV EDX,dword ptr [EAX + 0x1b5]
00421A8F  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421A96  03 CB                     ADD ECX,EBX
00421A98  8B 3A                     MOV EDI,dword ptr [EDX]
00421A9A  89 39                     MOV dword ptr [ECX],EDI
00421A9C  8B 7A 04                  MOV EDI,dword ptr [EDX + 0x4]
00421A9F  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
00421AA2  66 8B 7A 08               MOV DI,word ptr [EDX + 0x8]
00421AA6  66 89 79 08               MOV word ptr [ECX + 0x8],DI
00421AAA  8A 52 0A                  MOV DL,byte ptr [EDX + 0xa]
00421AAD  88 51 0A                  MOV byte ptr [ECX + 0xa],DL
00421AB0  89 9E 41 02 00 00         MOV dword ptr [ESI + 0x241],EBX
00421AB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421AB9  89 8E 45 02 00 00         MOV dword ptr [ESI + 0x245],ECX
00421ABF  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421AC2  03 D9                     ADD EBX,ECX
00421AC4  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421ACB  8B 90 B9 01 00 00         MOV EDX,dword ptr [EAX + 0x1b9]
00421AD1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421AD4  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
00421AD7  8B 02                     MOV EAX,dword ptr [EDX]
00421AD9  89 01                     MOV dword ptr [ECX],EAX
00421ADB  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00421ADE  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00421AE1  66 8B 42 08               MOV AX,word ptr [EDX + 0x8]
00421AE5  66 89 41 08               MOV word ptr [ECX + 0x8],AX
00421AE9  8A 52 0A                  MOV DL,byte ptr [EDX + 0xa]
00421AEC  88 51 0A                  MOV byte ptr [ECX + 0xa],DL
00421AEF  89 9E 49 02 00 00         MOV dword ptr [ESI + 0x249],EBX
00421AF5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421AF8  89 86 4D 02 00 00         MOV dword ptr [ESI + 0x24d],EAX
00421AFE  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00421B01  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421B04  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00421B0A  5F                        POP EDI
00421B0B  5E                        POP ESI
00421B0C  5B                        POP EBX
00421B0D  8B E5                     MOV ESP,EBP
00421B0F  5D                        POP EBP
00421B10  C2 04 00                  RET 0x4
LAB_00421b13:
00421B13  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421B16  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421B19  03 D9                     ADD EBX,ECX
00421B1B  8B 8A AD 01 00 00         MOV ECX,dword ptr [EDX + 0x1ad]
00421B21  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421B28  03 F3                     ADD ESI,EBX
00421B2A  8B 39                     MOV EDI,dword ptr [ECX]
00421B2C  89 3E                     MOV dword ptr [ESI],EDI
00421B2E  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421B31  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421B34  66 8B 79 08               MOV DI,word ptr [ECX + 0x8]
00421B38  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
00421B3C  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
00421B3F  88 4E 0A                  MOV byte ptr [ESI + 0xa],CL
00421B42  89 98 31 02 00 00         MOV dword ptr [EAX + 0x231],EBX
00421B48  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421B4B  89 88 35 02 00 00         MOV dword ptr [EAX + 0x235],ECX
00421B51  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421B54  8B 8A B1 01 00 00         MOV ECX,dword ptr [EDX + 0x1b1]
00421B5A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421B5D  03 DF                     ADD EBX,EDI
00421B5F  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421B66  8B 39                     MOV EDI,dword ptr [ECX]
00421B68  03 F3                     ADD ESI,EBX
00421B6A  89 3E                     MOV dword ptr [ESI],EDI
00421B6C  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421B6F  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421B72  66 8B 79 08               MOV DI,word ptr [ECX + 0x8]
00421B76  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
00421B7A  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
00421B7D  88 4E 0A                  MOV byte ptr [ESI + 0xa],CL
00421B80  89 98 39 02 00 00         MOV dword ptr [EAX + 0x239],EBX
00421B86  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421B89  89 88 3D 02 00 00         MOV dword ptr [EAX + 0x23d],ECX
00421B8F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421B92  8B 8A C5 01 00 00         MOV ECX,dword ptr [EDX + 0x1c5]
00421B98  03 DE                     ADD EBX,ESI
00421B9A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421B9D  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
00421BA4  8B 39                     MOV EDI,dword ptr [ECX]
00421BA6  03 F3                     ADD ESI,EBX
00421BA8  89 3E                     MOV dword ptr [ESI],EDI
00421BAA  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
00421BAE  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
00421BB2  89 98 61 02 00 00         MOV dword ptr [EAX + 0x261],EBX
00421BB8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421BBB  89 88 65 02 00 00         MOV dword ptr [EAX + 0x265],ECX
00421BC1  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421BC4  8B 92 C9 01 00 00         MOV EDX,dword ptr [EDX + 0x1c9]
00421BCA  03 D9                     ADD EBX,ECX
00421BCC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00421BCF  C7 45 FC 06 00 00 00      MOV dword ptr [EBP + -0x4],0x6
00421BD6  8B 32                     MOV ESI,dword ptr [EDX]
00421BD8  03 CB                     ADD ECX,EBX
00421BDA  89 31                     MOV dword ptr [ECX],ESI
00421BDC  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
00421BE0  66 89 51 04               MOV word ptr [ECX + 0x4],DX
00421BE4  89 98 69 02 00 00         MOV dword ptr [EAX + 0x269],EBX
00421BEA  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421BED  89 88 6D 02 00 00         MOV dword ptr [EAX + 0x26d],ECX
00421BF3  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00421BF6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421BF9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00421BFF  5F                        POP EDI
00421C00  5E                        POP ESI
00421C01  5B                        POP EBX
00421C02  8B E5                     MOV ESP,EBP
00421C04  5D                        POP EBP
00421C05  C2 04 00                  RET 0x4
LAB_00421c08:
00421C08  81 C2 71 01 00 00         ADD EDX,0x171
00421C0E  C7 45 E0 05 00 00 00      MOV dword ptr [EBP + -0x20],0x5
00421C15  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00421C18  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00421C1B  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_00421c1e:
00421C1E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00421C21  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421C24  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421C27  03 DE                     ADD EBX,ESI
00421C29  8B 51 EC                  MOV EDX,dword ptr [ECX + -0x14]
00421C2C  50                        PUSH EAX
00421C2D  52                        PUSH EDX
00421C2E  E8 ED E3 28 00            CALL 0x006b0020
00421C33  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421C36  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421C39  8B F0                     MOV ESI,EAX
00421C3B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421C3E  8B D1                     MOV EDX,ECX
00421C40  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
00421C43  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00421C46  C1 E9 02                  SHR ECX,0x2
00421C49  F3 A5                     MOVSD.REP ES:EDI,ESI
00421C4B  8B CA                     MOV ECX,EDX
00421C4D  8D 55 F4                  LEA EDX,[EBP + -0xc]
00421C50  83 E1 03                  AND ECX,0x3
00421C53  52                        PUSH EDX
00421C54  F3 A4                     MOVSB.REP ES:EDI,ESI
00421C56  89 58 FC                  MOV dword ptr [EAX + -0x4],EBX
00421C59  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421C5C  89 08                     MOV dword ptr [EAX],ECX
00421C5E  E8 FD 93 28 00            CALL 0x006ab060
00421C63  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00421C66  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421C69  8D 45 FC                  LEA EAX,[EBP + -0x4]
00421C6C  03 DE                     ADD EBX,ESI
00421C6E  8B 11                     MOV EDX,dword ptr [ECX]
00421C70  50                        PUSH EAX
00421C71  52                        PUSH EDX
00421C72  E8 A9 E3 28 00            CALL 0x006b0020
00421C77  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421C7A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00421C7D  8B F0                     MOV ESI,EAX
00421C7F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421C82  8B D1                     MOV EDX,ECX
00421C84  8D 3C 03                  LEA EDI,[EBX + EAX*0x1]
00421C87  C1 E9 02                  SHR ECX,0x2
00421C8A  F3 A5                     MOVSD.REP ES:EDI,ESI
00421C8C  8B CA                     MOV ECX,EDX
00421C8E  83 E1 03                  AND ECX,0x3
00421C91  F3 A4                     MOVSB.REP ES:EDI,ESI
00421C93  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
00421C96  8D 4D F4                  LEA ECX,[EBP + -0xc]
00421C99  51                        PUSH ECX
00421C9A  89 5E 24                  MOV dword ptr [ESI + 0x24],EBX
00421C9D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421CA0  89 46 28                  MOV dword ptr [ESI + 0x28],EAX
00421CA3  E8 B8 93 28 00            CALL 0x006ab060
00421CA8  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00421CAB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00421CAE  83 C2 04                  ADD EDX,0x4
00421CB1  83 C6 08                  ADD ESI,0x8
00421CB4  48                        DEC EAX
00421CB5  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00421CB8  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
00421CBB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00421CBE  0F 85 5A FF FF FF         JNZ 0x00421c1e
00421CC4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00421CC7  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00421CCA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00421CCD  03 D8                     ADD EBX,EAX
00421CCF  8B 82 95 01 00 00         MOV EAX,dword ptr [EDX + 0x195]
00421CD5  BE 13 00 00 00            MOV ESI,0x13
00421CDA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00421CDD  03 CB                     ADD ECX,EBX
00421CDF  8B 38                     MOV EDI,dword ptr [EAX]
00421CE1  89 39                     MOV dword ptr [ECX],EDI
00421CE3  8B 78 04                  MOV EDI,dword ptr [EAX + 0x4]
00421CE6  89 79 04                  MOV dword ptr [ECX + 0x4],EDI
00421CE9  8B 78 08                  MOV EDI,dword ptr [EAX + 0x8]
00421CEC  89 79 08                  MOV dword ptr [ECX + 0x8],EDI
00421CEF  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00421CF2  89 79 0C                  MOV dword ptr [ECX + 0xc],EDI
00421CF5  66 8B 78 10               MOV DI,word ptr [EAX + 0x10]
00421CF9  66 89 79 10               MOV word ptr [ECX + 0x10],DI
00421CFD  8A 40 12                  MOV AL,byte ptr [EAX + 0x12]
00421D00  88 41 12                  MOV byte ptr [ECX + 0x12],AL
00421D03  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00421D06  89 98 01 02 00 00         MOV dword ptr [EAX + 0x201],EBX
00421D0C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421D0F  89 88 05 02 00 00         MOV dword ptr [EAX + 0x205],ECX
00421D15  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421D18  8B 8A 99 01 00 00         MOV ECX,dword ptr [EDX + 0x199]
00421D1E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00421D21  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421D24  03 DF                     ADD EBX,EDI
00421D26  8B 39                     MOV EDI,dword ptr [ECX]
00421D28  03 F3                     ADD ESI,EBX
00421D2A  89 3E                     MOV dword ptr [ESI],EDI
00421D2C  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421D2F  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421D32  8B 79 08                  MOV EDI,dword ptr [ECX + 0x8]
00421D35  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
00421D38  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
00421D3B  89 7E 0C                  MOV dword ptr [ESI + 0xc],EDI
00421D3E  66 8B 79 10               MOV DI,word ptr [ECX + 0x10]
00421D42  66 89 7E 10               MOV word ptr [ESI + 0x10],DI
00421D46  8A 49 12                  MOV CL,byte ptr [ECX + 0x12]
00421D49  88 4E 12                  MOV byte ptr [ESI + 0x12],CL
00421D4C  89 98 09 02 00 00         MOV dword ptr [EAX + 0x209],EBX
00421D52  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421D55  89 88 0D 02 00 00         MOV dword ptr [EAX + 0x20d],ECX
00421D5B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421D5E  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421D61  03 D9                     ADD EBX,ECX
00421D63  8B 8A AD 01 00 00         MOV ECX,dword ptr [EDX + 0x1ad]
00421D69  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421D70  03 F3                     ADD ESI,EBX
00421D72  8B 39                     MOV EDI,dword ptr [ECX]
00421D74  89 3E                     MOV dword ptr [ESI],EDI
00421D76  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421D79  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421D7C  66 8B 79 08               MOV DI,word ptr [ECX + 0x8]
00421D80  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
00421D84  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
00421D87  88 4E 0A                  MOV byte ptr [ESI + 0xa],CL
00421D8A  89 98 31 02 00 00         MOV dword ptr [EAX + 0x231],EBX
00421D90  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421D93  89 88 35 02 00 00         MOV dword ptr [EAX + 0x235],ECX
00421D99  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00421D9C  8B 8A B1 01 00 00         MOV ECX,dword ptr [EDX + 0x1b1]
00421DA2  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00421DA5  03 DF                     ADD EBX,EDI
00421DA7  C7 45 FC 0B 00 00 00      MOV dword ptr [EBP + -0x4],0xb
00421DAE  8B 39                     MOV EDI,dword ptr [ECX]
00421DB0  03 F3                     ADD ESI,EBX
00421DB2  89 3E                     MOV dword ptr [ESI],EDI
00421DB4  8B 79 04                  MOV EDI,dword ptr [ECX + 0x4]
00421DB7  89 7E 04                  MOV dword ptr [ESI + 0x4],EDI
00421DBA  66 8B 79 08               MOV DI,word ptr [ECX + 0x8]
00421DBE  66 89 7E 08               MOV word ptr [ESI + 0x8],DI
00421DC2  8A 49 0A                  MOV CL,byte ptr [ECX + 0xa]
00421DC5  88 4E 0A                  MOV byte ptr [ESI + 0xa],CL
00421DC8  89 98 39 02 00 00         MOV dword ptr [EAX + 0x239],EBX
00421DCE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421DD1  89 88 3D 02 00 00         MOV dword ptr [EAX + 0x23d],ECX
00421DD7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00421DDA  03 DE                     ADD EBX,ESI
00421DDC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00421DDF  8B B2 BD 01 00 00         MOV ESI,dword ptr [EDX + 0x1bd]
00421DE5  B9 90 00 00 00            MOV ECX,0x90
00421DEA  03 FB                     ADD EDI,EBX
00421DEC  C7 45 FC 40 02 00 00      MOV dword ptr [EBP + -0x4],0x240
00421DF3  F3 A5                     MOVSD.REP ES:EDI,ESI
00421DF5  89 98 51 02 00 00         MOV dword ptr [EAX + 0x251],EBX
00421DFB  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421DFE  89 88 55 02 00 00         MOV dword ptr [EAX + 0x255],ECX
00421E04  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421E07  8B B2 C1 01 00 00         MOV ESI,dword ptr [EDX + 0x1c1]
00421E0D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00421E10  03 D9                     ADD EBX,ECX
00421E12  B9 90 00 00 00            MOV ECX,0x90
00421E17  C7 45 FC 40 02 00 00      MOV dword ptr [EBP + -0x4],0x240
00421E1E  8D 3C 13                  LEA EDI,[EBX + EDX*0x1]
00421E21  F3 A5                     MOVSD.REP ES:EDI,ESI
00421E23  89 98 59 02 00 00         MOV dword ptr [EAX + 0x259],EBX
00421E29  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00421E2C  89 88 5D 02 00 00         MOV dword ptr [EAX + 0x25d],ECX
LAB_00421e32:
00421E32  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
00421E35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421E38  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00421E3E  5F                        POP EDI
00421E3F  5E                        POP ESI
00421E40  5B                        POP EBX
00421E41  8B E5                     MOV ESP,EBP
00421E43  5D                        POP EBP
00421E44  C2 04 00                  RET 0x4
LAB_00421e47:
00421E47  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
00421E4A  68 58 50 7A 00            PUSH 0x7a5058
00421E4F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00421E54  56                        PUSH ESI
00421E55  6A 00                     PUSH 0x0
00421E57  68 46 0E 00 00            PUSH 0xe46
00421E5C  68 0C 4E 7A 00            PUSH 0x7a4e0c
00421E61  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00421E66  E8 65 B6 28 00            CALL 0x006ad4d0
00421E6B  83 C4 18                  ADD ESP,0x18
00421E6E  85 C0                     TEST EAX,EAX
00421E70  74 01                     JZ 0x00421e73
00421E72  CC                        INT3
LAB_00421e73:
00421E73  68 47 0E 00 00            PUSH 0xe47
00421E78  68 0C 4E 7A 00            PUSH 0x7a4e0c
00421E7D  6A 00                     PUSH 0x0
00421E7F  56                        PUSH ESI
00421E80  E8 BB 3F 28 00            CALL 0x006a5e40
00421E85  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00421E88  5F                        POP EDI
00421E89  5E                        POP ESI
00421E8A  5B                        POP EBX
00421E8B  8B E5                     MOV ESP,EBP
00421E8D  5D                        POP EBP
00421E8E  C2 04 00                  RET 0x4
