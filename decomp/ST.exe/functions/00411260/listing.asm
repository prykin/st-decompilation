FUN_00411260:
00411260  55                        PUSH EBP
00411261  8B EC                     MOV EBP,ESP
00411263  6A FF                     PUSH -0x1
00411265  68 70 00 79 00            PUSH 0x790070
0041126A  68 64 D9 72 00            PUSH 0x72d964
0041126F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00411275  50                        PUSH EAX
00411276  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0041127D  81 EC A4 00 00 00         SUB ESP,0xa4
00411283  53                        PUSH EBX
00411284  56                        PUSH ESI
00411285  57                        PUSH EDI
00411286  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00411289  33 DB                     XOR EBX,EBX
0041128B  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
0041128E  81 3D 20 4D 7F 00 C8 00 00 00  CMP dword ptr [0x007f4d20],0xc8
00411298  0F 8F E9 07 00 00         JG 0x00411a87
0041129E  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004112A1  3B FB                     CMP EDI,EBX
004112A3  0F 8C DE 07 00 00         JL 0x00411a87
004112A9  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
004112AF  3B F9                     CMP EDI,ECX
004112B1  0F 8D D0 07 00 00         JGE 0x00411a87
004112B7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004112BA  3B F3                     CMP ESI,EBX
004112BC  0F 8C C5 07 00 00         JL 0x00411a87
004112C2  A1 30 4D 7F 00            MOV EAX,[0x007f4d30]
004112C7  3B F0                     CMP ESI,EAX
004112C9  0F 8D B8 07 00 00         JGE 0x00411a87
004112CF  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004112D2  3B D3                     CMP EDX,EBX
004112D4  0F 8C AD 07 00 00         JL 0x00411a87
004112DA  3B 15 34 4D 7F 00         CMP EDX,dword ptr [0x007f4d34]
004112E0  0F 8D A1 07 00 00         JGE 0x00411a87
004112E6  0F AF C1                  IMUL EAX,ECX
004112E9  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
004112EC  33 C0                     XOR EAX,EAX
004112EE  39 1D 24 4D 7F 00         CMP dword ptr [0x007f4d24],EBX
004112F4  0F 9F C0                  SETG AL
004112F7  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
004112FA  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
004112FD  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00411300  3B C3                     CMP EAX,EBX
00411302  7E 22                     JLE 0x00411326
00411304  8B 0D 38 4D 7F 00         MOV ECX,dword ptr [0x007f4d38]
0041130A  0F AF C8                  IMUL ECX,EAX
0041130D  C1 F9 10                  SAR ECX,0x10
00411310  2B F9                     SUB EDI,ECX
00411312  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
00411315  8B 0D 28 4D 7F 00         MOV ECX,dword ptr [0x007f4d28]
0041131B  0F AF C8                  IMUL ECX,EAX
0041131E  C1 F9 10                  SAR ECX,0x10
00411321  03 F1                     ADD ESI,ECX
00411323  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
LAB_00411326:
00411326  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
00411329  A1 20 4D 7F 00            MOV EAX,[0x007f4d20]
0041132E  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00411331  89 55 A4                  MOV dword ptr [EBP + -0x5c],EDX
00411334  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
00411337  3B FB                     CMP EDI,EBX
00411339  7D 23                     JGE 0x0041135e
0041133B  B9 67 01 00 00            MOV ECX,0x167
00411340  2B CF                     SUB ECX,EDI
00411342  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
00411347  F7 E1                     MUL ECX
00411349  2B CA                     SUB ECX,EDX
0041134B  D1 E9                     SHR ECX,0x1
0041134D  03 CA                     ADD ECX,EDX
0041134F  C1 E9 08                  SHR ECX,0x8
00411352  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00411355  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
00411358  8D 3C CF                  LEA EDI,[EDI + ECX*0x8]
0041135B  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_0041135e:
0041135E  81 FF 68 01 00 00         CMP EDI,0x168
00411364  7C 24                     JL 0x0041138a
00411366  B8 6D C1 16 6C            MOV EAX,0x6c16c16d
0041136B  F7 E7                     MUL EDI
0041136D  8B C7                     MOV EAX,EDI
0041136F  2B C2                     SUB EAX,EDX
00411371  D1 E8                     SHR EAX,0x1
00411373  03 C2                     ADD EAX,EDX
00411375  C1 E8 08                  SHR EAX,0x8
00411378  8B C8                     MOV ECX,EAX
0041137A  F7 D9                     NEG ECX
0041137C  C1 E1 02                  SHL ECX,0x2
0041137F  2B C8                     SUB ECX,EAX
00411381  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00411384  8D 3C D7                  LEA EDI,[EDI + EDX*0x8]
00411387  89 7D 1C                  MOV dword ptr [EBP + 0x1c],EDI
LAB_0041138a:
0041138A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0041138D  8B 1C 85 F8 4B 7A 00      MOV EBX,dword ptr [EAX*0x4 + 0x7a4bf8]
00411394  89 5D A0                  MOV dword ptr [EBP + -0x60],EBX
00411397  8B CB                     MOV ECX,EBX
00411399  C1 E1 05                  SHL ECX,0x5
0041139C  51                        PUSH ECX
0041139D  E8 CE 98 29 00            CALL 0x006aac70
004113A2  8B F0                     MOV ESI,EAX
004113A4  89 75 B0                  MOV dword ptr [EBP + -0x50],ESI
004113A7  53                        PUSH EBX
004113A8  56                        PUSH ESI
004113A9  E8 42 09 00 00            CALL 0x00411cf0
004113AE  8B D8                     MOV EBX,EAX
004113B0  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
004113B3  8B CB                     MOV ECX,EBX
004113B5  0F AF CF                  IMUL ECX,EDI
004113B8  81 C1 B4 00 00 00         ADD ECX,0xb4
004113BE  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
004113C3  F7 E9                     IMUL ECX
004113C5  03 D1                     ADD EDX,ECX
004113C7  C1 FA 08                  SAR EDX,0x8
004113CA  8B C2                     MOV EAX,EDX
004113CC  C1 E8 1F                  SHR EAX,0x1f
004113CF  03 D0                     ADD EDX,EAX
004113D1  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
004113D4  3B D3                     CMP EDX,EBX
004113D6  75 07                     JNZ 0x004113df
004113D8  33 C9                     XOR ECX,ECX
004113DA  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
004113DD  EB 02                     JMP 0x004113e1
LAB_004113df:
004113DF  33 C9                     XOR ECX,ECX
LAB_004113e1:
004113E1  8B C3                     MOV EAX,EBX
004113E3  99                        CDQ
004113E4  83 E2 07                  AND EDX,0x7
004113E7  03 C2                     ADD EAX,EDX
004113E9  C1 F8 03                  SAR EAX,0x3
004113EC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004113EF  75 07                     JNZ 0x004113f8
004113F1  C7 45 B8 01 00 00 00      MOV dword ptr [EBP + -0x48],0x1
LAB_004113f8:
004113F8  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
004113FB  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004113FE  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
LAB_00411401:
00411401  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
00411404  3B 5D DC                  CMP EBX,dword ptr [EBP + -0x24]
00411407  0F 8E 11 01 00 00         JLE 0x0041151e
0041140D  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00411410  85 C0                     TEST EAX,EAX
00411412  0F 84 06 01 00 00         JZ 0x0041151e
00411418  39 5D A8                  CMP dword ptr [EBP + -0x58],EBX
0041141B  7D 56                     JGE 0x00411473
0041141D  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
00411420  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00411423  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0041142A  83 C0 03                  ADD EAX,0x3
0041142D  24 FC                     AND AL,0xfc
0041142F  E8 0C C6 31 00            CALL 0x0072da40
00411434  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00411437  8B C4                     MOV EAX,ESP
00411439  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0041143C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00411443  EB 2E                     JMP 0x00411473
LAB_00411473:
00411473  8B CB                     MOV ECX,EBX
00411475  33 C0                     XOR EAX,EAX
00411477  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0041147A  8B D1                     MOV EDX,ECX
0041147C  C1 E9 02                  SHR ECX,0x2
0041147F  F3 AB                     STOSD.REP ES:EDI
00411481  8B CA                     MOV ECX,EDX
00411483  83 E1 03                  AND ECX,0x3
00411486  F3 AA                     STOSB.REP ES:EDI
00411488  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
0041148B  C7 45 90 00 00 00 00      MOV dword ptr [EBP + -0x70],0x0
00411492  85 DB                     TEST EBX,EBX
00411494  0F 8E 81 00 00 00         JLE 0x0041151b
0041149A  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
004114A0  EB 03                     JMP 0x004114a5
LAB_004114a2:
004114A2  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
LAB_004114a5:
004114A5  0F BE 04 BE               MOVSX EAX,byte ptr [ESI + EDI*0x4]
004114A9  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
004114AC  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004114AF  0F BE 4C BE 01            MOVSX ECX,byte ptr [ESI + EDI*0x4 + 0x1]
004114B4  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
004114B7  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
004114BA  85 C0                     TEST EAX,EAX
004114BC  7C 4B                     JL 0x00411509
004114BE  3B C2                     CMP EAX,EDX
004114C0  7D 47                     JGE 0x00411509
004114C2  85 C9                     TEST ECX,ECX
004114C4  7C 43                     JL 0x00411509
004114C6  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
004114CC  7D 3B                     JGE 0x00411509
004114CE  0F AF D1                  IMUL EDX,ECX
004114D1  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004114D4  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
004114D8  03 C2                     ADD EAX,EDX
004114DA  03 C8                     ADD ECX,EAX
004114DC  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
004114DF  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
004114E2  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004114E8  80 F2 07                  XOR DL,0x7
004114EB  33 C0                     XOR EAX,EAX
004114ED  0F A3 11                  BT [ECX],EDX
004114F0  D0 D0                     RCL AL,0x1
004114F2  85 C0                     TEST EAX,EAX
004114F4  74 0D                     JZ 0x00411503
004114F6  FF 45 9C                  INC dword ptr [EBP + -0x64]
004114F9  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004114FC  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
004114FF  C6 04 10 01               MOV byte ptr [EAX + EDX*0x1],0x1
LAB_00411503:
00411503  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
LAB_00411509:
00411509  47                        INC EDI
0041150A  3B FB                     CMP EDI,EBX
0041150C  7C 02                     JL 0x00411510
0041150E  33 FF                     XOR EDI,EDI
LAB_00411510:
00411510  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
00411513  40                        INC EAX
00411514  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
00411517  3B C3                     CMP EAX,EBX
00411519  7C 87                     JL 0x004114a2
LAB_0041151b:
0041151B  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
LAB_0041151e:
0041151E  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
00411521  3B D8                     CMP EBX,EAX
00411523  0F 8E 15 03 00 00         JLE 0x0041183e
00411529  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
0041152C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0041152F  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00411532  3B DA                     CMP EBX,EDX
00411534  0F 8F 1E 01 00 00         JG 0x00411658
0041153A  85 DB                     TEST EBX,EBX
0041153C  0F 8E FC 02 00 00         JLE 0x0041183e
00411542  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00411545  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00411548  C1 E0 02                  SHL EAX,0x2
0041154B  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
00411551  89 9D 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EBX
LAB_00411557:
00411557  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0041155A  0F BE 04 B1               MOVSX EAX,byte ptr [ECX + ESI*0x4]
0041155E  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
00411561  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00411564  0F BE 4C B1 01            MOVSX ECX,byte ptr [ECX + ESI*0x4 + 0x1]
00411569  03 4D 0C                  ADD ECX,dword ptr [EBP + 0xc]
0041156C  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0041156F  85 C0                     TEST EAX,EAX
00411571  7C 1B                     JL 0x0041158e
00411573  3B 05 2C 4D 7F 00         CMP EAX,dword ptr [0x007f4d2c]
00411579  7D 13                     JGE 0x0041158e
0041157B  85 C9                     TEST ECX,ECX
0041157D  7C 0F                     JL 0x0041158e
0041157F  3B 0D 30 4D 7F 00         CMP ECX,dword ptr [0x007f4d30]
00411585  7D 07                     JGE 0x0041158e
00411587  BA 01 00 00 00            MOV EDX,0x1
0041158C  EB 02                     JMP 0x00411590
LAB_0041158e:
0041158E  33 D2                     XOR EDX,EDX
LAB_00411590:
00411590  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
00411593  85 D2                     TEST EDX,EDX
00411595  74 2E                     JZ 0x004115c5
00411597  8B 15 2C 4D 7F 00         MOV EDX,dword ptr [0x007f4d2c]
0041159D  0F AF D1                  IMUL EDX,ECX
004115A0  0F AF 7D CC               IMUL EDI,dword ptr [EBP + -0x34]
004115A4  03 C2                     ADD EAX,EDX
004115A6  03 F8                     ADD EDI,EAX
004115A8  89 7D 84                  MOV dword ptr [EBP + -0x7c],EDI
004115AB  8B 55 84                  MOV EDX,dword ptr [EBP + -0x7c]
004115AE  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004115B4  80 F2 07                  XOR DL,0x7
004115B7  33 C0                     XOR EAX,EAX
004115B9  0F A3 11                  BT [ECX],EDX
004115BC  D0 D0                     RCL AL,0x1
004115BE  85 C0                     TEST EAX,EAX
004115C0  75 7B                     JNZ 0x0041163d
004115C2  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
LAB_004115c5:
004115C5  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004115CB  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
004115D1  89 04 11                  MOV dword ptr [ECX + EDX*0x1],EAX
004115D4  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
004115D9  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004115DC  89 54 01 04               MOV dword ptr [ECX + EAX*0x1 + 0x4],EDX
004115E0  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
004115E3  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004115E9  89 44 11 08               MOV dword ptr [ECX + EDX*0x1 + 0x8],EAX
004115ED  FF 45 D8                  INC dword ptr [EBP + -0x28]
004115F0  83 C1 14                  ADD ECX,0x14
004115F3  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
004115F9  FF 4D DC                  DEC dword ptr [EBP + -0x24]
004115FC  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
004115FF  85 C0                     TEST EAX,EAX
00411601  74 3A                     JZ 0x0041163d
00411603  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
00411608  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
0041160C  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0041160F  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
00411613  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00411616  03 D0                     ADD EDX,EAX
00411618  03 CA                     ADD ECX,EDX
0041161A  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00411620  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00411625  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
0041162B  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
00411631  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
00411637  80 F2 07                  XOR DL,0x7
0041163A  0F AB 11                  BTS [ECX],EDX
LAB_0041163d:
0041163D  46                        INC ESI
0041163E  3B F3                     CMP ESI,EBX
00411640  7C 02                     JL 0x00411644
00411642  33 F6                     XOR ESI,ESI
LAB_00411644:
00411644  FF 8D 58 FF FF FF         DEC dword ptr [EBP + 0xffffff58]
0041164A  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
0041164D  0F 85 04 FF FF FF         JNZ 0x00411557
00411653  E9 E6 01 00 00            JMP 0x0041183e
LAB_00411658:
00411658  85 C0                     TEST EAX,EAX
0041165A  0F 8E E8 00 00 00         JLE 0x00411748
00411660  6A 01                     PUSH 0x1
00411662  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00411665  51                        PUSH ECX
00411666  53                        PUSH EBX
00411667  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0041166A  52                        PUSH EDX
0041166B  E8 60 DE FF FF            CALL 0x0040f4d0
00411670  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00411673  85 C0                     TEST EAX,EAX
00411675  0F 8E B9 01 00 00         JLE 0x00411834
0041167B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0041167E  8D 34 89                  LEA ESI,[ECX + ECX*0x4]
00411681  C1 E6 02                  SHL ESI,0x2
00411684  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
0041168A  03 C8                     ADD ECX,EAX
0041168C  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
0041168F  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
LAB_00411692:
00411692  6A 01                     PUSH 0x1
00411694  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00411697  50                        PUSH EAX
00411698  53                        PUSH EBX
00411699  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0041169C  51                        PUSH ECX
0041169D  E8 9E E1 FF FF            CALL 0x0040f840
004116A2  03 45 C8                  ADD EAX,dword ptr [EBP + -0x38]
004116A5  99                        CDQ
004116A6  F7 FB                     IDIV EBX
004116A8  0F BE 04 97               MOVSX EAX,byte ptr [EDI + EDX*0x4]
004116AC  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
004116AF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004116B2  0F BE 54 97 01            MOVSX EDX,byte ptr [EDI + EDX*0x4 + 0x1]
004116B7  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
004116BA  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
004116BD  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004116C3  89 04 0E                  MOV dword ptr [ESI + ECX*0x1],EAX
004116C6  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004116CC  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004116CF  89 44 16 04               MOV dword ptr [ESI + EDX*0x1 + 0x4],EAX
004116D3  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004116D6  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004116DC  89 4C 16 08               MOV dword ptr [ESI + EDX*0x1 + 0x8],ECX
004116E0  83 C6 14                  ADD ESI,0x14
004116E3  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004116E6  85 C0                     TEST EAX,EAX
004116E8  7C 4D                     JL 0x00411737
004116EA  8B 0D 2C 4D 7F 00         MOV ECX,dword ptr [0x007f4d2c]
004116F0  3B C1                     CMP EAX,ECX
004116F2  7D 43                     JGE 0x00411737
004116F4  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004116F7  85 D2                     TEST EDX,EDX
004116F9  7C 3C                     JL 0x00411737
004116FB  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
00411701  7D 34                     JGE 0x00411737
00411703  0F AF CA                  IMUL ECX,EDX
00411706  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00411709  0F AF 55 CC               IMUL EDX,dword ptr [EBP + -0x34]
0041170D  03 C1                     ADD EAX,ECX
0041170F  03 D0                     ADD EDX,EAX
00411711  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00411717  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
0041171C  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
00411722  8B 8D 74 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff74]
00411728  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0041172E  80 F2 07                  XOR DL,0x7
00411731  0F AB 11                  BTS [ECX],EDX
00411734  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
LAB_00411737:
00411737  FF 8D 54 FF FF FF         DEC dword ptr [EBP + 0xffffff54]
0041173D  0F 85 4F FF FF FF         JNZ 0x00411692
00411743  E9 EC 00 00 00            JMP 0x00411834
LAB_00411748:
00411748  8B C3                     MOV EAX,EBX
0041174A  C1 E0 10                  SHL EAX,0x10
0041174D  89 85 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EAX
00411753  99                        CDQ
00411754  F7 F9                     IDIV ECX
00411756  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
00411759  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0041175C  C1 E0 10                  SHL EAX,0x10
0041175F  85 C9                     TEST ECX,ECX
00411761  0F 8E D0 00 00 00         JLE 0x00411837
00411767  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0041176A  8D 3C 89                  LEA EDI,[ECX + ECX*0x4]
0041176D  C1 E7 02                  SHL EDI,0x2
00411770  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00411773  89 95 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EDX
00411779  03 CA                     ADD ECX,EDX
0041177B  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_0041177e:
0041177E  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00411781  0F BE 0C B1               MOVSX ECX,byte ptr [ECX + ESI*0x4]
00411785  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
00411788  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0041178B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0041178E  0F BE 54 B2 01            MOVSX EDX,byte ptr [EDX + ESI*0x4 + 0x1]
00411793  03 55 0C                  ADD EDX,dword ptr [EBP + 0xc]
00411796  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
00411799  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
0041179F  89 0C 17                  MOV dword ptr [EDI + EDX*0x1],ECX
004117A2  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
004117A8  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004117AB  89 54 0F 04               MOV dword ptr [EDI + ECX*0x1 + 0x4],EDX
004117AF  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004117B2  8B 15 3C 4D 7F 00         MOV EDX,dword ptr [0x007f4d3c]
004117B8  89 4C 17 08               MOV dword ptr [EDI + EDX*0x1 + 0x8],ECX
004117BC  83 C7 14                  ADD EDI,0x14
004117BF  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004117C2  85 C9                     TEST ECX,ECX
004117C4  7C 4B                     JL 0x00411811
004117C6  8B 35 2C 4D 7F 00         MOV ESI,dword ptr [0x007f4d2c]
004117CC  3B CE                     CMP ECX,ESI
004117CE  7D 41                     JGE 0x00411811
004117D0  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
004117D3  85 D2                     TEST EDX,EDX
004117D5  7C 3A                     JL 0x00411811
004117D7  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
004117DD  7D 32                     JGE 0x00411811
004117DF  0F AF F2                  IMUL ESI,EDX
004117E2  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
004117E5  0F AF 55 CC               IMUL EDX,dword ptr [EBP + -0x34]
004117E9  03 CE                     ADD ECX,ESI
004117EB  03 D1                     ADD EDX,ECX
004117ED  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004117F3  8B 0D FC 4C 7F 00         MOV ECX,dword ptr [0x007f4cfc]
004117F9  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004117FF  8B 8D 6C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff6c]
00411805  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
0041180B  80 F2 07                  XOR DL,0x7
0041180E  0F AB 11                  BTS [ECX],EDX
LAB_00411811:
00411811  03 45 94                  ADD EAX,dword ptr [EBP + -0x6c]
00411814  8B F0                     MOV ESI,EAX
00411816  C1 FE 10                  SAR ESI,0x10
00411819  3B F3                     CMP ESI,EBX
0041181B  7C 0B                     JL 0x00411828
0041181D  2B 85 50 FF FF FF         SUB EAX,dword ptr [EBP + 0xffffff50]
00411823  8B F0                     MOV ESI,EAX
00411825  C1 FE 10                  SAR ESI,0x10
LAB_00411828:
00411828  FF 8D 4C FF FF FF         DEC dword ptr [EBP + 0xffffff4c]
0041182E  0F 85 4A FF FF FF         JNZ 0x0041177e
LAB_00411834:
00411834  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
LAB_00411837:
00411837  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
LAB_0041183e:
0041183E  33 F6                     XOR ESI,ESI
00411840  39 75 DC                  CMP dword ptr [EBP + -0x24],ESI
00411843  0F 8F 6E 01 00 00         JG 0x004119b7
00411849  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0041184C  39 35 20 4D 7F 00         CMP dword ptr [0x007f4d20],ESI
00411852  0F 8E 15 01 00 00         JLE 0x0041196d
00411858  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
LAB_0041185e:
0041185E  8B 04 3E                  MOV EAX,dword ptr [ESI + EDI*0x1]
00411861  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00411864  8B 54 3E 04               MOV EDX,dword ptr [ESI + EDI*0x1 + 0x4]
00411868  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
0041186B  8B 4C 3E 08               MOV ECX,dword ptr [ESI + EDI*0x1 + 0x8]
0041186F  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00411872  85 C0                     TEST EAX,EAX
00411874  7C 32                     JL 0x004118a8
00411876  8B 1D 2C 4D 7F 00         MOV EBX,dword ptr [0x007f4d2c]
0041187C  3B C3                     CMP EAX,EBX
0041187E  7D 28                     JGE 0x004118a8
00411880  85 D2                     TEST EDX,EDX
00411882  7C 24                     JL 0x004118a8
00411884  3B 15 30 4D 7F 00         CMP EDX,dword ptr [0x007f4d30]
0041188A  7D 1C                     JGE 0x004118a8
0041188C  0F AF DA                  IMUL EBX,EDX
0041188F  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
00411893  03 C3                     ADD EAX,EBX
00411895  03 C8                     ADD ECX,EAX
00411897  8B 15 F0 4C 7F 00         MOV EDX,dword ptr [0x007f4cf0]
0041189D  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
004118A2  0F 84 AF 00 00 00         JZ 0x00411957
LAB_004118a8:
004118A8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004118AB  C1 F8 02                  SAR EAX,0x2
004118AE  50                        PUSH EAX
004118AF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004118B2  C1 F9 02                  SAR ECX,0x2
004118B5  51                        PUSH ECX
004118B6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004118B9  C1 FA 02                  SAR EDX,0x2
004118BC  52                        PUSH EDX
004118BD  A1 1C 4D 7F 00            MOV EAX,[0x007f4d1c]
004118C2  C1 F8 02                  SAR EAX,0x2
004118C5  50                        PUSH EAX
004118C6  8B 0D 10 4D 7F 00         MOV ECX,dword ptr [0x007f4d10]
004118CC  C1 F9 02                  SAR ECX,0x2
004118CF  51                        PUSH ECX
004118D0  8B 15 0C 4D 7F 00         MOV EDX,dword ptr [0x007f4d0c]
004118D6  C1 FA 02                  SAR EDX,0x2
004118D9  52                        PUSH EDX
004118DA  8D 45 A4                  LEA EAX,[EBP + -0x5c]
004118DD  50                        PUSH EAX
004118DE  8D 4D AC                  LEA ECX,[EBP + -0x54]
004118E1  51                        PUSH ECX
004118E2  8D 55 B4                  LEA EDX,[EBP + -0x4c]
004118E5  52                        PUSH EDX
004118E6  E8 85 D9 FF FF            CALL 0x0040f270
004118EB  85 C0                     TEST EAX,EAX
004118ED  0F 85 B6 00 00 00         JNZ 0x004119a9
004118F3  A1 2C 4D 7F 00            MOV EAX,[0x007f4d2c]
004118F8  0F AF 45 AC               IMUL EAX,dword ptr [EBP + -0x54]
004118FC  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
004118FF  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
00411903  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00411906  03 D0                     ADD EDX,EAX
00411908  03 CA                     ADD ECX,EDX
0041190A  89 8D 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],ECX
00411910  A1 FC 4C 7F 00            MOV EAX,[0x007f4cfc]
00411915  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0041191B  8B 8D 64 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff64]
00411921  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
00411927  80 F2 07                  XOR DL,0x7
0041192A  0F AB 11                  BTS [ECX],EDX
0041192D  8B 0D 3C 4D 7F 00         MOV ECX,dword ptr [0x007f4d3c]
00411933  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00411936  89 14 0E                  MOV dword ptr [ESI + ECX*0x1],EDX
00411939  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0041193E  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00411941  89 4C 06 04               MOV dword ptr [ESI + EAX*0x1 + 0x4],ECX
00411945  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00411948  A1 3C 4D 7F 00            MOV EAX,[0x007f4d3c]
0041194D  89 54 06 08               MOV dword ptr [ESI + EAX*0x1 + 0x8],EDX
00411951  8B 3D 3C 4D 7F 00         MOV EDI,dword ptr [0x007f4d3c]
LAB_00411957:
00411957  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0041195A  40                        INC EAX
0041195B  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0041195E  83 C6 14                  ADD ESI,0x14
00411961  3B 05 20 4D 7F 00         CMP EAX,dword ptr [0x007f4d20]
00411967  0F 8C F1 FE FF FF         JL 0x0041185e
LAB_0041196d:
0041196D  E8 1E D2 FF FF            CALL 0x0040eb90
00411972  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
LAB_00411975:
00411975  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00411978  51                        PUSH ECX
00411979  E8 12 45 29 00            CALL 0x006a5e90
0041197E  85 F6                     TEST ESI,ESI
00411980  74 2E                     JZ 0x004119b0
00411982  83 FE FC                  CMP ESI,-0x4
00411985  0F 84 FC 00 00 00         JZ 0x00411a87
0041198B  68 6E 0B 00 00            PUSH 0xb6e
00411990  68 A8 4C 7A 00            PUSH 0x7a4ca8
00411995  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0041199B  52                        PUSH EDX
0041199C  56                        PUSH ESI
0041199D  E8 9E 44 29 00            CALL 0x006a5e40
004119A2  8B C6                     MOV EAX,ESI
004119A4  E9 E3 00 00 00            JMP 0x00411a8c
LAB_004119a9:
004119A9  BE FC FF FF FF            MOV ESI,0xfffffffc
004119AE  EB C5                     JMP 0x00411975
LAB_004119b0:
004119B0  33 C0                     XOR EAX,EAX
004119B2  E9 D5 00 00 00            JMP 0x00411a8c
LAB_004119b7:
004119B7  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
004119BA  C1 E6 05                  SHL ESI,0x5
004119BD  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_004119c0:
004119C0  41                        INC ECX
004119C1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
004119C4  83 F9 09                  CMP ECX,0x9
004119C7  7C 67                     JL 0x00411a30
004119C9  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
004119D0  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004119D3  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
004119D6  8B 7D A0                  MOV EDI,dword ptr [EBP + -0x60]
004119D9  47                        INC EDI
004119DA  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
004119DD  83 C6 20                  ADD ESI,0x20
004119E0  56                        PUSH ESI
004119E1  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
004119E4  51                        PUSH ECX
004119E5  E8 66 B5 29 00            CALL 0x006acf50
004119EA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
004119ED  57                        PUSH EDI
004119EE  50                        PUSH EAX
004119EF  E8 FC 02 00 00            CALL 0x00411cf0
004119F4  8B D8                     MOV EBX,EAX
004119F6  8B CB                     MOV ECX,EBX
004119F8  0F AF 4D 1C               IMUL ECX,dword ptr [EBP + 0x1c]
004119FC  81 C1 B4 00 00 00         ADD ECX,0xb4
00411A02  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
00411A07  F7 E9                     IMUL ECX
00411A09  03 D1                     ADD EDX,ECX
00411A0B  C1 FA 08                  SAR EDX,0x8
00411A0E  8B C2                     MOV EAX,EDX
00411A10  C1 E8 1F                  SHR EAX,0x1f
00411A13  03 D0                     ADD EDX,EAX
00411A15  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
00411A18  3B D3                     CMP EDX,EBX
00411A1A  75 07                     JNZ 0x00411a23
00411A1C  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
LAB_00411a23:
00411A23  C7 45 D0 01 00 00 00      MOV dword ptr [EBP + -0x30],0x1
00411A2A  8B 7D A4                  MOV EDI,dword ptr [EBP + -0x5c]
00411A2D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
LAB_00411a30:
00411A30  8D 41 FF                  LEA EAX,[ECX + -0x1]
00411A33  83 F8 07                  CMP EAX,0x7
00411A36  77 2E                     JA 0x00411a66
switchD_00411a38::switchD:
00411A38  FF 24 85 A8 1A 41 00      JMP dword ptr [EAX*0x4 + 0x411aa8]
switchD_00411a38::caseD_1:
00411A3F  47                        INC EDI
00411A40  EB 21                     JMP 0x00411a63
switchD_00411a38::caseD_2:
00411A42  83 EF 02                  SUB EDI,0x2
00411A45  EB 1C                     JMP 0x00411a63
switchD_00411a38::caseD_3:
00411A47  83 C7 03                  ADD EDI,0x3
00411A4A  EB 17                     JMP 0x00411a63
switchD_00411a38::caseD_4:
00411A4C  83 EF 04                  SUB EDI,0x4
00411A4F  EB 12                     JMP 0x00411a63
switchD_00411a38::caseD_5:
00411A51  83 C7 05                  ADD EDI,0x5
00411A54  EB 0D                     JMP 0x00411a63
switchD_00411a38::caseD_6:
00411A56  83 EF 06                  SUB EDI,0x6
00411A59  EB 08                     JMP 0x00411a63
switchD_00411a38::caseD_7:
00411A5B  83 C7 07                  ADD EDI,0x7
00411A5E  EB 03                     JMP 0x00411a63
switchD_00411a38::caseD_8:
00411A60  83 EF 08                  SUB EDI,0x8
LAB_00411a63:
00411A63  89 7D A4                  MOV dword ptr [EBP + -0x5c],EDI
switchD_00411a38::default:
00411A66  85 FF                     TEST EDI,EDI
00411A68  0F 8C 52 FF FF FF         JL 0x004119c0
00411A6E  3B 3D 34 4D 7F 00         CMP EDI,dword ptr [0x007f4d34]
00411A74  0F 8D 46 FF FF FF         JGE 0x004119c0
00411A7A  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
00411A7D  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
00411A80  33 C9                     XOR ECX,ECX
00411A82  E9 7A F9 FF FF            JMP 0x00411401
LAB_00411a87:
00411A87  B8 FC FF FF FF            MOV EAX,0xfffffffc
LAB_00411a8c:
00411A8C  8D A5 40 FF FF FF         LEA ESP,[EBP + 0xffffff40]
00411A92  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00411A95  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00411A9C  5F                        POP EDI
00411A9D  5E                        POP ESI
00411A9E  5B                        POP EBX
00411A9F  8B E5                     MOV ESP,EBP
00411AA1  5D                        POP EBP
00411AA2  C2 18 00                  RET 0x18
