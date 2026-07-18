SettMapTy::CreateCtrls:
005C6030  55                        PUSH EBP
005C6031  8B EC                     MOV EBP,ESP
005C6033  81 EC F0 0E 00 00         SUB ESP,0xef0
005C6039  53                        PUSH EBX
005C603A  56                        PUSH ESI
005C603B  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005C603E  57                        PUSH EDI
005C603F  B9 F6 00 00 00            MOV ECX,0xf6
005C6044  33 C0                     XOR EAX,EAX
005C6046  8D BD B0 FB FF FF         LEA EDI,[EBP + 0xfffffbb0]
005C604C  8D 55 8C                  LEA EDX,[EBP + -0x74]
005C604F  F3 AB                     STOSD.REP ES:EDI
005C6051  B9 23 02 00 00            MOV ECX,0x223
005C6056  8D BD 10 F1 FF FF         LEA EDI,[EBP + 0xfffff110]
005C605C  F3 AB                     STOSD.REP ES:EDI
005C605E  B9 5F 00 00 00            MOV ECX,0x5f
005C6063  8D BD 34 FA FF FF         LEA EDI,[EBP + 0xfffffa34]
005C6069  F3 AB                     STOSD.REP ES:EDI
005C606B  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005C6070  8D 4D 88                  LEA ECX,[EBP + -0x78]
005C6073  6A 00                     PUSH 0x0
005C6075  52                        PUSH EDX
005C6076  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
005C6079  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C607F  E8 6C 77 16 00            CALL 0x0072d7f0
005C6084  8B F0                     MOV ESI,EAX
005C6086  83 C4 08                  ADD ESP,0x8
005C6089  85 F6                     TEST ESI,ESI
005C608B  0F 85 A6 09 00 00         JNZ 0x005c6a37
005C6091  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005C6094  84 C0                     TEST AL,AL
005C6096  0F 85 B5 00 00 00         JNZ 0x005c6151
005C609C  8A 1D 7E 87 80 00         MOV BL,byte ptr [0x0080877e]
005C60A2  8B 0D 80 67 80 00         MOV ECX,dword ptr [0x00806780]
005C60A8  33 C0                     XOR EAX,EAX
005C60AA  6A 01                     PUSH 0x1
005C60AC  84 DB                     TEST BL,BL
005C60AE  56                        PUSH ESI
005C60AF  68 FC D1 7C 00            PUSH 0x7cd1fc
005C60B4  0F 95 C0                  SETNZ AL
005C60B7  51                        PUSH ECX
005C60B8  89 B5 38 FA FF FF         MOV dword ptr [EBP + 0xfffffa38],ESI
005C60BE  89 85 34 FA FF FF         MOV dword ptr [EBP + 0xfffffa34],EAX
005C60C4  C7 85 3C FA FF FF 15 00 00 00  MOV dword ptr [EBP + 0xfffffa3c],0x15
005C60CE  C7 85 40 FA FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffffa40],0x14
005C60D8  E8 93 49 14 00            CALL 0x0070aa70
005C60DD  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005C60E3  6A 01                     PUSH 0x1
005C60E5  68 FC D1 7C 00            PUSH 0x7cd1fc
005C60EA  6A 12                     PUSH 0x12
005C60EC  52                        PUSH EDX
005C60ED  89 85 58 FB FF FF         MOV dword ptr [EBP + 0xfffffb58],EAX
005C60F3  E8 F8 45 14 00            CALL 0x0070a6f0
005C60F8  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005C60FB  89 85 5C FB FF FF         MOV dword ptr [EBP + 0xfffffb5c],EAX
005C6101  89 85 48 FA FF FF         MOV dword ptr [EBP + 0xfffffa48],EAX
005C6107  89 85 44 FA FF FF         MOV dword ptr [EBP + 0xfffffa44],EAX
005C610D  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005C6110  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C6113  83 C4 20                  ADD ESP,0x20
005C6116  89 85 54 FA FF FF         MOV dword ptr [EBP + 0xfffffa54],EAX
005C611C  8D 85 34 FA FF FF         LEA EAX,[EBP + 0xfffffa34]
005C6122  C7 85 58 FA FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffa58],0x2
005C612C  56                        PUSH ESI
005C612D  50                        PUSH EAX
005C612E  8D 83 5D 21 00 00         LEA EAX,[EBX + 0x215d]
005C6134  C7 85 5C FA FF FF 4D 65 00 00  MOV dword ptr [EBP + 0xfffffa5c],0x654d
005C613E  8B 11                     MOV EDX,dword ptr [ECX]
005C6140  56                        PUSH ESI
005C6141  50                        PUSH EAX
005C6142  6A 02                     PUSH 0x2
005C6144  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C6147  BE 01 00 00 00            MOV ESI,0x1
005C614C  E9 9C 08 00 00            JMP 0x005c69ed
LAB_005c6151:
005C6151  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
005C6154  8B 83 6F 1C 00 00         MOV EAX,dword ptr [EBX + 0x1c6f]
005C615A  83 F8 FF                  CMP EAX,-0x1
005C615D  74 1D                     JZ 0x005c617c
005C615F  8B 8B 8B 1C 00 00         MOV ECX,dword ptr [EBX + 0x1c8b]
005C6165  8B 93 87 1C 00 00         MOV EDX,dword ptr [EBX + 0x1c87]
005C616B  51                        PUSH ECX
005C616C  52                        PUSH EDX
005C616D  6A FE                     PUSH -0x2
005C616F  50                        PUSH EAX
005C6170  8B 83 B3 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cb3]
005C6176  50                        PUSH EAX
005C6177  E8 54 D3 0E 00            CALL 0x006b34d0
LAB_005c617c:
005C617C  8B 83 00 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d00]
005C6182  83 F8 FF                  CMP EAX,-0x1
005C6185  74 1D                     JZ 0x005c61a4
005C6187  8B 8B 1C 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d1c]
005C618D  8B 93 18 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d18]
005C6193  51                        PUSH ECX
005C6194  52                        PUSH EDX
005C6195  6A FE                     PUSH -0x2
005C6197  50                        PUSH EAX
005C6198  8B 83 44 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d44]
005C619E  50                        PUSH EAX
005C619F  E8 2C D3 0E 00            CALL 0x006b34d0
LAB_005c61a4:
005C61A4  8B 83 91 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d91]
005C61AA  83 F8 FF                  CMP EAX,-0x1
005C61AD  74 1D                     JZ 0x005c61cc
005C61AF  8B 8B AD 1D 00 00         MOV ECX,dword ptr [EBX + 0x1dad]
005C61B5  8B 93 A9 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da9]
005C61BB  51                        PUSH ECX
005C61BC  52                        PUSH EDX
005C61BD  6A FE                     PUSH -0x2
005C61BF  50                        PUSH EAX
005C61C0  8B 83 D5 1D 00 00         MOV EAX,dword ptr [EBX + 0x1dd5]
005C61C6  50                        PUSH EAX
005C61C7  E8 04 D3 0E 00            CALL 0x006b34d0
LAB_005c61cc:
005C61CC  8D B3 CC 20 00 00         LEA ESI,[EBX + 0x20cc]
005C61D2  BF 0A 00 00 00            MOV EDI,0xa
LAB_005c61d7:
005C61D7  8B 0E                     MOV ECX,dword ptr [ESI]
005C61D9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005C61DF  51                        PUSH ECX
005C61E0  52                        PUSH EDX
005C61E1  E8 4A D2 0E 00            CALL 0x006b3430
005C61E6  83 C6 04                  ADD ESI,0x4
005C61E9  4F                        DEC EDI
005C61EA  75 EB                     JNZ 0x005c61d7
005C61EC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005C61EF  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005C61F2  C7 45 F4 41 00 00 00      MOV dword ptr [EBP + -0xc],0x41
005C61F9  C7 45 EC FF 69 00 00      MOV dword ptr [EBP + -0x14],0x69ff
LAB_005c6200:
005C6200  33 D2                     XOR EDX,EDX
005C6202  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_005c6205:
005C6205  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C620B  3C 06                     CMP AL,0x6
005C620D  74 0D                     JZ 0x005c621c
005C620F  3C 01                     CMP AL,0x1
005C6211  74 09                     JZ 0x005c621c
005C6213  3C 02                     CMP AL,0x2
005C6215  B9 08 00 00 00            MOV ECX,0x8
005C621A  75 05                     JNZ 0x005c6221
LAB_005c621c:
005C621C  B9 06 00 00 00            MOV ECX,0x6
LAB_005c6221:
005C6221  3B D1                     CMP EDX,ECX
005C6223  0F 8D EE 00 00 00         JGE 0x005c6317
005C6229  83 FA 07                  CMP EDX,0x7
005C622C  0F 87 A7 00 00 00         JA 0x005c62d9
switchD_005c6232::switchD:
005C6232  FF 24 95 80 6A 5C 00      JMP dword ptr [EDX*0x4 + 0x5c6a80]
switchD_005c6232::caseD_0:
005C6239  BE 16 01 00 00            MOV ESI,0x116
005C623E  BF 14 00 00 00            MOV EDI,0x14
005C6243  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C6246  E9 8B 00 00 00            JMP 0x005c62d6
switchD_005c6232::caseD_1:
005C624B  BE 2C 01 00 00            MOV ESI,0x12c
005C6250  BF 14 00 00 00            MOV EDI,0x14
005C6255  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C6258  EB 7C                     JMP 0x005c62d6
switchD_005c6232::caseD_2:
005C625A  BE 41 01 00 00            MOV ESI,0x141
005C625F  BF 18 00 00 00            MOV EDI,0x18
005C6264  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C6267  EB 6D                     JMP 0x005c62d6
switchD_005c6232::caseD_3:
005C6269  BE 5B 01 00 00            MOV ESI,0x15b
005C626E  BF 5F 00 00 00            MOV EDI,0x5f
005C6273  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C6276  EB 5E                     JMP 0x005c62d6
switchD_005c6232::caseD_4:
005C6278  BE BC 01 00 00            MOV ESI,0x1bc
005C627D  3C 06                     CMP AL,0x6
005C627F  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C6282  74 0F                     JZ 0x005c6293
005C6284  3C 01                     CMP AL,0x1
005C6286  74 0B                     JZ 0x005c6293
005C6288  3C 02                     CMP AL,0x2
005C628A  74 07                     JZ 0x005c6293
005C628C  BF AD 00 00 00            MOV EDI,0xad
005C6291  EB 43                     JMP 0x005c62d6
LAB_005c6293:
005C6293  BF ED 00 00 00            MOV EDI,0xed
005C6298  EB 3C                     JMP 0x005c62d6
switchD_005c6232::caseD_5:
005C629A  3C 06                     CMP AL,0x6
005C629C  74 0D                     JZ 0x005c62ab
005C629E  3C 01                     CMP AL,0x1
005C62A0  74 09                     JZ 0x005c62ab
005C62A2  3C 02                     CMP AL,0x2
005C62A4  BE 6B 02 00 00            MOV ESI,0x26b
005C62A9  75 05                     JNZ 0x005c62b0
LAB_005c62ab:
005C62AB  BE AB 02 00 00            MOV ESI,0x2ab
LAB_005c62b0:
005C62B0  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C62B3  BF 3E 00 00 00            MOV EDI,0x3e
005C62B8  EB 1C                     JMP 0x005c62d6
switchD_005c6232::caseD_6:
005C62BA  BE AB 02 00 00            MOV ESI,0x2ab
005C62BF  BF 2C 00 00 00            MOV EDI,0x2c
005C62C4  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
005C62C7  EB 0D                     JMP 0x005c62d6
switchD_005c6232::caseD_7:
005C62C9  BE D9 02 00 00            MOV ESI,0x2d9
005C62CE  BF 17 00 00 00            MOV EDI,0x17
005C62D3  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_005c62d6:
005C62D6  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
switchD_005c6232::default:
005C62D9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
005C62DC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005C62DF  8D 94 08 80 00 00 00      LEA EDX,[EAX + ECX*0x1 + 0x80]
005C62E6  03 C1                     ADD EAX,ECX
005C62E8  52                        PUSH EDX
005C62E9  50                        PUSH EAX
005C62EA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005C62ED  6A 14                     PUSH 0x14
005C62EF  57                        PUSH EDI
005C62F0  50                        PUSH EAX
005C62F1  56                        PUSH ESI
005C62F2  6A 00                     PUSH 0x0
005C62F4  6A 01                     PUSH 0x1
005C62F6  8B CB                     MOV ECX,EBX
005C62F8  E8 1E D3 E3 FF            CALL 0x0040361b
005C62FD  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005C6300  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005C6303  03 D1                     ADD EDX,ECX
005C6305  41                        INC ECX
005C6306  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
005C6309  89 84 93 90 77 FE FF      MOV dword ptr [EBX + EDX*0x4 + 0xfffe7790],EAX
005C6310  8B D1                     MOV EDX,ECX
005C6312  E9 EE FE FF FF            JMP 0x005c6205
LAB_005c6317:
005C6317  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005C631A  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005C631D  83 C0 19                  ADD EAX,0x19
005C6320  83 C2 08                  ADD EDX,0x8
005C6323  3D 3B 01 00 00            CMP EAX,0x13b
005C6328  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005C632B  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005C632E  0F 8C CC FE FF FF         JL 0x005c6200
005C6334  8B 93 18 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d18]
005C633A  8B BB 87 1C 00 00         MOV EDI,dword ptr [EBX + 0x1c87]
005C6340  89 95 C0 FB FF FF         MOV dword ptr [EBP + 0xfffffbc0],EDX
005C6346  8B 93 1C 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d1c]
005C634C  89 95 C4 FB FF FF         MOV dword ptr [EBP + 0xfffffbc4],EDX
005C6352  8B 93 20 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d20]
005C6358  89 95 C8 FB FF FF         MOV dword ptr [EBP + 0xfffffbc8],EDX
005C635E  8B 93 24 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d24]
005C6364  89 BD 40 FD FF FF         MOV dword ptr [EBP + 0xfffffd40],EDI
005C636A  8B BB 8B 1C 00 00         MOV EDI,dword ptr [EBX + 0x1c8b]
005C6370  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
005C6373  89 95 CC FB FF FF         MOV dword ptr [EBP + 0xfffffbcc],EDX
005C6379  BA 32 00 00 00            MOV EDX,0x32
005C637E  89 BD 44 FD FF FF         MOV dword ptr [EBP + 0xfffffd44],EDI
005C6384  8B BB 8F 1C 00 00         MOV EDI,dword ptr [EBX + 0x1c8f]
005C638A  89 95 CC FC FF FF         MOV dword ptr [EBP + 0xfffffccc],EDX
005C6390  89 95 4C FE FF FF         MOV dword ptr [EBP + 0xfffffe4c],EDX
005C6396  8B 93 A9 1D 00 00         MOV EDX,dword ptr [EBX + 0x1da9]
005C639C  89 BD 48 FD FF FF         MOV dword ptr [EBP + 0xfffffd48],EDI
005C63A2  8B BB 93 1C 00 00         MOV EDI,dword ptr [EBX + 0x1c93]
005C63A8  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
005C63AE  8B 93 AD 1D 00 00         MOV EDX,dword ptr [EBX + 0x1dad]
005C63B4  B9 02 00 00 00            MOV ECX,0x2
005C63B9  33 F6                     XOR ESI,ESI
005C63BB  89 BD 4C FD FF FF         MOV dword ptr [EBP + 0xfffffd4c],EDI
005C63C1  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
005C63C7  89 8D B4 FB FF FF         MOV dword ptr [EBP + 0xfffffbb4],ECX
005C63CD  89 8D BC FB FF FF         MOV dword ptr [EBP + 0xfffffbbc],ECX
005C63D3  89 8D 1C FC FF FF         MOV dword ptr [EBP + 0xfffffc1c],ECX
005C63D9  89 8D 34 FD FF FF         MOV dword ptr [EBP + 0xfffffd34],ECX
005C63DF  89 8D 3C FD FF FF         MOV dword ptr [EBP + 0xfffffd3c],ECX
005C63E5  89 8D 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],ECX
005C63EB  89 95 C8 FE FF FF         MOV dword ptr [EBP + 0xfffffec8],EDX
005C63F1  8B 93 B1 1D 00 00         MOV EDX,dword ptr [EBX + 0x1db1]
005C63F7  89 8D 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],ECX
005C63FD  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
005C6400  8D BD B0 FB FF FF         LEA EDI,[EBP + 0xfffffbb0]
005C6406  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
005C640C  89 85 18 FC FF FF         MOV dword ptr [EBP + 0xfffffc18],EAX
005C6412  89 85 98 FD FF FF         MOV dword ptr [EBP + 0xfffffd98],EAX
005C6418  89 85 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EAX
005C641E  56                        PUSH ESI
005C641F  8D 83 1D 21 00 00         LEA EAX,[EBX + 0x211d]
005C6425  57                        PUSH EDI
005C6426  89 B5 B0 FB FF FF         MOV dword ptr [EBP + 0xfffffbb0],ESI
005C642C  89 B5 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ESI
005C6432  89 B5 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],ESI
005C6438  C7 85 60 FF FF FF 00 62 00 00  MOV dword ptr [EBP + 0xffffff60],0x6200
005C6442  89 B5 B8 FB FF FF         MOV dword ptr [EBP + 0xfffffbb8],ESI
005C6448  C7 85 C8 FC FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffcc8],0x1f4
005C6452  C7 85 20 FC FF FF 02 62 00 00  MOV dword ptr [EBP + 0xfffffc20],0x6202
005C645C  89 B5 38 FD FF FF         MOV dword ptr [EBP + 0xfffffd38],ESI
005C6462  C7 85 48 FE FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffe48],0x1f4
005C646C  C7 85 A0 FD FF FF 01 62 00 00  MOV dword ptr [EBP + 0xfffffda0],0x6201
005C6476  C7 85 B4 FE FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffeb4],0x3
005C6480  C7 85 B8 FE FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffffeb8],0x1
005C648A  89 B5 C0 FE FF FF         MOV dword ptr [EBP + 0xfffffec0],ESI
005C6490  89 95 CC FE FF FF         MOV dword ptr [EBP + 0xfffffecc],EDX
005C6496  C7 85 D0 FE FF FF BE 00 00 00  MOV dword ptr [EBP + 0xfffffed0],0xbe
005C64A0  C7 85 D4 FE FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xfffffed4],0xe
005C64AA  C7 85 10 FF FF FF 03 62 00 00  MOV dword ptr [EBP + 0xffffff10],0x6203
005C64B4  8B 11                     MOV EDX,dword ptr [ECX]
005C64B6  56                        PUSH ESI
005C64B7  50                        PUSH EAX
005C64B8  6A 04                     PUSH 0x4
005C64BA  FF 52 08                  CALL dword ptr [EDX + 0x8]
005C64BD  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C64C3  3C 06                     CMP AL,0x6
005C64C5  0F 84 D8 00 00 00         JZ 0x005c65a3
005C64CB  3C 07                     CMP AL,0x7
005C64CD  0F 84 D0 00 00 00         JZ 0x005c65a3
005C64D3  3C 0E                     CMP AL,0xe
005C64D5  0F 84 C8 00 00 00         JZ 0x005c65a3
005C64DB  8B 83 3F 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f3f]
005C64E1  3B C6                     CMP EAX,ESI
005C64E3  74 09                     JZ 0x005c64ee
005C64E5  50                        PUSH EAX
005C64E6  E8 85 AC 12 00            CALL 0x006f1170
005C64EB  83 C4 04                  ADD ESP,0x4
LAB_005c64ee:
005C64EE  56                        PUSH ESI
005C64EF  56                        PUSH ESI
005C64F0  56                        PUSH ESI
005C64F1  68 16 ED 80 00            PUSH 0x80ed16
005C64F6  68 45 03 00 00            PUSH 0x345
005C64FB  E8 C0 A9 12 00            CALL 0x006f0ec0
005C6500  89 83 3F 1F 00 00         MOV dword ptr [EBX + 0x1f3f],EAX
005C6506  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C650B  83 C4 14                  ADD ESP,0x14
005C650E  84 C0                     TEST AL,AL
005C6510  0F 85 81 00 00 00         JNZ 0x005c6597
005C6516  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C651B  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005C6521  3B C6                     CMP EAX,ESI
005C6523  74 06                     JZ 0x005c652b
005C6525  50                        PUSH EAX
005C6526  E8 45 F0 0E 00            CALL 0x006b5570
LAB_005c652b:
005C652B  6A 0A                     PUSH 0xa
005C652D  6A 0A                     PUSH 0xa
005C652F  6A 00                     PUSH 0x0
005C6531  E8 BA EF 0E 00            CALL 0x006b54f0
005C6536  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C653C  BE 60 99 80 00            MOV ESI,0x809960
005C6541  8D BD E8 F9 FF FF         LEA EDI,[EBP + 0xfffff9e8]
005C6547  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005C654D  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005C6553  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C6559  B9 08 00 00 00            MOV ECX,0x8
005C655E  89 95 2C FA FF FF         MOV dword ptr [EBP + 0xfffffa2c],EDX
005C6564  50                        PUSH EAX
005C6565  F3 A5                     MOVSD.REP ES:EDI,ESI
005C6567  8B 8B 3F 1F 00 00         MOV ECX,dword ptr [EBX + 0x1f3f]
005C656D  51                        PUSH ECX
005C656E  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C6574  E8 9D C1 E3 FF            CALL 0x00402716
005C6579  8B 95 2C FA FF FF         MOV EDX,dword ptr [EBP + 0xfffffa2c]
005C657F  B9 08 00 00 00            MOV ECX,0x8
005C6584  8D B5 E8 F9 FF FF         LEA ESI,[EBP + 0xfffff9e8]
005C658A  BF 60 99 80 00            MOV EDI,0x809960
005C658F  89 15 5C 99 80 00         MOV dword ptr [0x0080995c],EDX
005C6595  F3 A5                     MOVSD.REP ES:EDI,ESI
LAB_005c6597:
005C6597  8B 03                     MOV EAX,dword ptr [EBX]
005C6599  8B CB                     MOV ECX,EBX
005C659B  FF 50 28                  CALL dword ptr [EAX + 0x28]
005C659E  E9 BA 00 00 00            JMP 0x005c665d
LAB_005c65a3:
005C65A3  BF FF 68 00 00            MOV EDI,0x68ff
005C65A8  C7 45 F4 CB 00 00 00      MOV dword ptr [EBP + -0xc],0xcb
005C65AF  8D B3 60 1F 00 00         LEA ESI,[EBX + 0x1f60]
LAB_005c65b5:
005C65B5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005C65B8  8D 8F 80 00 00 00         LEA ECX,[EDI + 0x80]
005C65BE  51                        PUSH ECX
005C65BF  57                        PUSH EDI
005C65C0  6A 14                     PUSH 0x14
005C65C2  68 E0 00 00 00            PUSH 0xe0
005C65C7  52                        PUSH EDX
005C65C8  6A 1A                     PUSH 0x1a
005C65CA  6A 01                     PUSH 0x1
005C65CC  6A 01                     PUSH 0x1
005C65CE  8B CB                     MOV ECX,EBX
005C65D0  E8 46 D0 E3 FF            CALL 0x0040361b
005C65D5  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005C65D8  89 06                     MOV dword ptr [ESI],EAX
005C65DA  83 C6 04                  ADD ESI,0x4
005C65DD  47                        INC EDI
005C65DE  83 C2 28                  ADD EDX,0x28
005C65E1  8D 87 01 97 FF FF         LEA EAX,[EDI + 0xffff9701]
005C65E7  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005C65EA  83 F8 06                  CMP EAX,0x6
005C65ED  7C C6                     JL 0x005c65b5
005C65EF  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C65F4  84 C0                     TEST AL,AL
005C65F6  74 32                     JZ 0x005c662a
005C65F8  68 85 69 00 00            PUSH 0x6985
005C65FD  68 05 69 00 00            PUSH 0x6905
005C6602  6A 1E                     PUSH 0x1e
005C6604  68 CC 00 00 00            PUSH 0xcc
005C6609  68 B4 01 00 00            PUSH 0x1b4
005C660E  6A 24                     PUSH 0x24
005C6610  6A 01                     PUSH 0x1
005C6612  6A 01                     PUSH 0x1
005C6614  8B CB                     MOV ECX,EBX
005C6616  E8 00 D0 E3 FF            CALL 0x0040361b
005C661B  89 83 78 1F 00 00         MOV dword ptr [EBX + 0x1f78],EAX
005C6621  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C6626  84 C0                     TEST AL,AL
005C6628  75 33                     JNZ 0x005c665d
LAB_005c662a:
005C662A  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005C6631  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005C6638  8D BB 60 1F 00 00         LEA EDI,[EBX + 0x1f60]
005C663E  BE 07 00 00 00            MOV ESI,0x7
LAB_005c6643:
005C6643  8B 07                     MOV EAX,dword ptr [EDI]
005C6645  85 C0                     TEST EAX,EAX
005C6647  74 0E                     JZ 0x005c6657
005C6649  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
005C664C  51                        PUSH ECX
005C664D  50                        PUSH EAX
005C664E  6A 02                     PUSH 0x2
005C6650  8B CB                     MOV ECX,EBX
005C6652  E8 29 FA 11 00            CALL 0x006e6080
LAB_005c6657:
005C6657  83 C7 04                  ADD EDI,0x4
005C665A  4E                        DEC ESI
005C665B  75 E6                     JNZ 0x005c6643
LAB_005c665d:
005C665D  8B 83 1D 21 00 00         MOV EAX,dword ptr [EBX + 0x211d]
005C6663  85 C0                     TEST EAX,EAX
005C6665  74 72                     JZ 0x005c66d9
005C6667  8D 7B 1D                  LEA EDI,[EBX + 0x1d]
005C666A  8B CB                     MOV ECX,EBX
005C666C  57                        PUSH EDI
005C666D  50                        PUSH EAX
005C666E  6A 02                     PUSH 0x2
005C6670  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005C6677  C7 43 31 01 00 00 00      MOV dword ptr [EBX + 0x31],0x1
005C667E  E8 FD F9 11 00            CALL 0x006e6080
005C6683  8B 93 1D 21 00 00         MOV EDX,dword ptr [EBX + 0x211d]
005C6689  57                        PUSH EDI
005C668A  33 C0                     XOR EAX,EAX
005C668C  52                        PUSH EDX
005C668D  6A 02                     PUSH 0x2
005C668F  8B CB                     MOV ECX,EBX
005C6691  C7 43 2D 22 00 00 00      MOV dword ptr [EBX + 0x2d],0x22
005C6698  89 83 88 1F 00 00         MOV dword ptr [EBX + 0x1f88],EAX
005C669E  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005C66A1  E8 DA F9 11 00            CALL 0x006e6080
005C66A6  8B 83 84 1F 00 00         MOV EAX,dword ptr [EBX + 0x1f84]
005C66AC  C7 43 2D 28 00 00 00      MOV dword ptr [EBX + 0x2d],0x28
005C66B3  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
005C66B6  83 F8 0A                  CMP EAX,0xa
005C66B9  77 07                     JA 0x005c66c2
005C66BB  B8 01 00 00 00            MOV EAX,0x1
005C66C0  EB 03                     JMP 0x005c66c5
LAB_005c66c2:
005C66C2  83 C0 F7                  ADD EAX,-0x9
LAB_005c66c5:
005C66C5  8B 8B 1D 21 00 00         MOV ECX,dword ptr [EBX + 0x211d]
005C66CB  57                        PUSH EDI
005C66CC  51                        PUSH ECX
005C66CD  6A 02                     PUSH 0x2
005C66CF  8B CB                     MOV ECX,EBX
005C66D1  89 43 31                  MOV dword ptr [EBX + 0x31],EAX
005C66D4  E8 A7 F9 11 00            CALL 0x006e6080
LAB_005c66d9:
005C66D9  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C66DF  8A 0D 00 34 80 00         MOV CL,byte ptr [0x00803400]
005C66E5  3C 02                     CMP AL,0x2
005C66E7  BA 13 00 00 00            MOV EDX,0x13
005C66EC  74 26                     JZ 0x005c6714
005C66EE  3C 05                     CMP AL,0x5
005C66F0  74 22                     JZ 0x005c6714
005C66F2  3C 0F                     CMP AL,0xf
005C66F4  74 1E                     JZ 0x005c6714
005C66F6  3C 0C                     CMP AL,0xc
005C66F8  74 1A                     JZ 0x005c6714
005C66FA  3C 10                     CMP AL,0x10
005C66FC  74 16                     JZ 0x005c6714
005C66FE  39 93 27 1E 00 00         CMP dword ptr [EBX + 0x1e27],EDX
005C6704  75 0A                     JNZ 0x005c6710
005C6706  80 F9 14                  CMP CL,0x14
005C6709  74 09                     JZ 0x005c6714
005C670B  80 F9 15                  CMP CL,0x15
005C670E  74 04                     JZ 0x005c6714
LAB_005c6710:
005C6710  33 F6                     XOR ESI,ESI
005C6712  EB 05                     JMP 0x005c6719
LAB_005c6714:
005C6714  BE 01 00 00 00            MOV ESI,0x1
LAB_005c6719:
005C6719  3C 06                     CMP AL,0x6
005C671B  74 14                     JZ 0x005c6731
005C671D  3C 01                     CMP AL,0x1
005C671F  74 10                     JZ 0x005c6731
005C6721  3C 04                     CMP AL,0x4
005C6723  74 0C                     JZ 0x005c6731
005C6725  3C 07                     CMP AL,0x7
005C6727  74 08                     JZ 0x005c6731
005C6729  3C 0D                     CMP AL,0xd
005C672B  74 04                     JZ 0x005c6731
005C672D  3C 0E                     CMP AL,0xe
005C672F  75 3E                     JNZ 0x005c676f
LAB_005c6731:
005C6731  39 93 27 1E 00 00         CMP dword ptr [EBX + 0x1e27],EDX
005C6737  75 0A                     JNZ 0x005c6743
005C6739  80 F9 14                  CMP CL,0x14
005C673C  74 31                     JZ 0x005c676f
005C673E  80 F9 15                  CMP CL,0x15
005C6741  74 2C                     JZ 0x005c676f
LAB_005c6743:
005C6743  68 7F 65 00 00            PUSH 0x657f
005C6748  68 3F 65 00 00            PUSH 0x653f
005C674D  6A 14                     PUSH 0x14
005C674F  68 4A 01 00 00            PUSH 0x14a
005C6754  68 4E 01 00 00            PUSH 0x14e
005C6759  68 C4 01 00 00            PUSH 0x1c4
005C675E  6A 01                     PUSH 0x1
005C6760  6A 01                     PUSH 0x1
005C6762  8B CB                     MOV ECX,EBX
005C6764  E8 B2 CE E3 FF            CALL 0x0040361b
005C6769  89 83 25 21 00 00         MOV dword ptr [EBX + 0x2125],EAX
LAB_005c676f:
005C676F  68 82 65 00 00            PUSH 0x6582
005C6774  68 42 65 00 00            PUSH 0x6542
005C6779  6A 14                     PUSH 0x14
005C677B  6A 50                     PUSH 0x50
005C677D  68 64 01 00 00            PUSH 0x164
005C6782  68 C4 01 00 00            PUSH 0x1c4
005C6787  6A 01                     PUSH 0x1
005C6789  6A 01                     PUSH 0x1
005C678B  8B CB                     MOV ECX,EBX
005C678D  E8 89 CE E3 FF            CALL 0x0040361b
005C6792  68 83 65 00 00            PUSH 0x6583
005C6797  68 43 65 00 00            PUSH 0x6543
005C679C  6A 14                     PUSH 0x14
005C679E  6A 50                     PUSH 0x50
005C67A0  68 64 01 00 00            PUSH 0x164
005C67A5  68 BE 02 00 00            PUSH 0x2be
005C67AA  6A 01                     PUSH 0x1
005C67AC  6A 01                     PUSH 0x1
005C67AE  8B CB                     MOV ECX,EBX
005C67B0  89 83 31 21 00 00         MOV dword ptr [EBX + 0x2131],EAX
005C67B6  E8 60 CE E3 FF            CALL 0x0040361b
005C67BB  68 84 65 00 00            PUSH 0x6584
005C67C0  68 44 65 00 00            PUSH 0x6544
005C67C5  6A 14                     PUSH 0x14
005C67C7  6A 50                     PUSH 0x50
005C67C9  68 7A 01 00 00            PUSH 0x17a
005C67CE  68 C4 01 00 00            PUSH 0x1c4
005C67D3  6A 01                     PUSH 0x1
005C67D5  6A 01                     PUSH 0x1
005C67D7  8B CB                     MOV ECX,EBX
005C67D9  89 83 35 21 00 00         MOV dword ptr [EBX + 0x2135],EAX
005C67DF  E8 37 CE E3 FF            CALL 0x0040361b
005C67E4  68 85 65 00 00            PUSH 0x6585
005C67E9  68 45 65 00 00            PUSH 0x6545
005C67EE  6A 14                     PUSH 0x14
005C67F0  6A 50                     PUSH 0x50
005C67F2  68 7A 01 00 00            PUSH 0x17a
005C67F7  68 BE 02 00 00            PUSH 0x2be
005C67FC  6A 01                     PUSH 0x1
005C67FE  6A 01                     PUSH 0x1
005C6800  8B CB                     MOV ECX,EBX
005C6802  89 83 39 21 00 00         MOV dword ptr [EBX + 0x2139],EAX
005C6808  E8 0E CE E3 FF            CALL 0x0040361b
005C680D  68 86 65 00 00            PUSH 0x6586
005C6812  68 46 65 00 00            PUSH 0x6546
005C6817  6A 14                     PUSH 0x14
005C6819  6A 50                     PUSH 0x50
005C681B  68 90 01 00 00            PUSH 0x190
005C6820  68 C4 01 00 00            PUSH 0x1c4
005C6825  6A 01                     PUSH 0x1
005C6827  6A 01                     PUSH 0x1
005C6829  8B CB                     MOV ECX,EBX
005C682B  89 83 3D 21 00 00         MOV dword ptr [EBX + 0x213d],EAX
005C6831  E8 E5 CD E3 FF            CALL 0x0040361b
005C6836  68 87 65 00 00            PUSH 0x6587
005C683B  68 47 65 00 00            PUSH 0x6547
005C6840  6A 14                     PUSH 0x14
005C6842  6A 50                     PUSH 0x50
005C6844  68 90 01 00 00            PUSH 0x190
005C6849  68 BE 02 00 00            PUSH 0x2be
005C684E  6A 01                     PUSH 0x1
005C6850  6A 01                     PUSH 0x1
005C6852  8B CB                     MOV ECX,EBX
005C6854  89 83 41 21 00 00         MOV dword ptr [EBX + 0x2141],EAX
005C685A  E8 BC CD E3 FF            CALL 0x0040361b
005C685F  68 88 65 00 00            PUSH 0x6588
005C6864  68 48 65 00 00            PUSH 0x6548
005C6869  6A 14                     PUSH 0x14
005C686B  6A 16                     PUSH 0x16
005C686D  68 A6 01 00 00            PUSH 0x1a6
005C6872  68 8A 01 00 00            PUSH 0x18a
005C6877  6A 01                     PUSH 0x1
005C6879  6A 01                     PUSH 0x1
005C687B  8B CB                     MOV ECX,EBX
005C687D  89 83 45 21 00 00         MOV dword ptr [EBX + 0x2145],EAX
005C6883  E8 93 CD E3 FF            CALL 0x0040361b
005C6888  68 89 65 00 00            PUSH 0x6589
005C688D  68 49 65 00 00            PUSH 0x6549
005C6892  6A 14                     PUSH 0x14
005C6894  89 83 49 21 00 00         MOV dword ptr [EBX + 0x2149],EAX
005C689A  6A 16                     PUSH 0x16
005C689C  68 A6 01 00 00            PUSH 0x1a6
005C68A1  68 34 02 00 00            PUSH 0x234
005C68A6  6A 01                     PUSH 0x1
005C68A8  6A 01                     PUSH 0x1
005C68AA  8B CB                     MOV ECX,EBX
005C68AC  E8 6A CD E3 FF            CALL 0x0040361b
005C68B1  68 8A 65 00 00            PUSH 0x658a
005C68B6  68 4A 65 00 00            PUSH 0x654a
005C68BB  6A 14                     PUSH 0x14
005C68BD  6A 16                     PUSH 0x16
005C68BF  68 A6 01 00 00            PUSH 0x1a6
005C68C4  68 F8 02 00 00            PUSH 0x2f8
005C68C9  6A 01                     PUSH 0x1
005C68CB  6A 01                     PUSH 0x1
005C68CD  8B CB                     MOV ECX,EBX
005C68CF  89 83 4D 21 00 00         MOV dword ptr [EBX + 0x214d],EAX
005C68D5  E8 41 CD E3 FF            CALL 0x0040361b
005C68DA  89 83 51 21 00 00         MOV dword ptr [EBX + 0x2151],EAX
005C68E0  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C68E6  3C 06                     CMP AL,0x6
005C68E8  74 5A                     JZ 0x005c6944
005C68EA  3C 01                     CMP AL,0x1
005C68EC  74 56                     JZ 0x005c6944
005C68EE  3C 02                     CMP AL,0x2
005C68F0  74 52                     JZ 0x005c6944
005C68F2  68 8B 65 00 00            PUSH 0x658b
005C68F7  68 4B 65 00 00            PUSH 0x654b
005C68FC  6A 14                     PUSH 0x14
005C68FE  6A 16                     PUSH 0x16
005C6900  68 BC 01 00 00            PUSH 0x1bc
005C6905  68 FE 01 00 00            PUSH 0x1fe
005C690A  6A 01                     PUSH 0x1
005C690C  6A 01                     PUSH 0x1
005C690E  8B CB                     MOV ECX,EBX
005C6910  E8 06 CD E3 FF            CALL 0x0040361b
005C6915  68 8C 65 00 00            PUSH 0x658c
005C691A  68 4C 65 00 00            PUSH 0x654c
005C691F  6A 14                     PUSH 0x14
005C6921  6A 16                     PUSH 0x16
005C6923  68 BC 01 00 00            PUSH 0x1bc
005C6928  68 F8 02 00 00            PUSH 0x2f8
005C692D  6A 01                     PUSH 0x1
005C692F  6A 01                     PUSH 0x1
005C6931  8B CB                     MOV ECX,EBX
005C6933  89 83 55 21 00 00         MOV dword ptr [EBX + 0x2155],EAX
005C6939  E8 DD CC E3 FF            CALL 0x0040361b
005C693E  89 83 59 21 00 00         MOV dword ptr [EBX + 0x2159],EAX
LAB_005c6944:
005C6944  A0 7E 87 80 00            MOV AL,[0x0080877e]
005C6949  84 C0                     TEST AL,AL
005C694B  74 04                     JZ 0x005c6951
005C694D  85 F6                     TEST ESI,ESI
005C694F  74 33                     JZ 0x005c6984
LAB_005c6951:
005C6951  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005C6958  C7 43 31 00 00 00 00      MOV dword ptr [EBX + 0x31],0x0
005C695F  8D BB 25 21 00 00         LEA EDI,[EBX + 0x2125]
005C6965  BE 0E 00 00 00            MOV ESI,0xe
LAB_005c696a:
005C696A  8B 07                     MOV EAX,dword ptr [EDI]
005C696C  85 C0                     TEST EAX,EAX
005C696E  74 0E                     JZ 0x005c697e
005C6970  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C6973  8B CB                     MOV ECX,EBX
005C6975  52                        PUSH EDX
005C6976  50                        PUSH EAX
005C6977  6A 02                     PUSH 0x2
005C6979  E8 02 F7 11 00            CALL 0x006e6080
LAB_005c697e:
005C697E  83 C7 04                  ADD EDI,0x4
005C6981  4E                        DEC ESI
005C6982  75 E6                     JNZ 0x005c696a
LAB_005c6984:
005C6984  8B 83 22 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e22]
005C698A  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005C6990  50                        PUSH EAX
005C6991  51                        PUSH ECX
005C6992  E8 99 CA 0E 00            CALL 0x006b3430
005C6997  8A 83 26 1E 00 00         MOV AL,byte ptr [EBX + 0x1e26]
005C699D  3C 06                     CMP AL,0x6
005C699F  74 32                     JZ 0x005c69d3
005C69A1  3C 07                     CMP AL,0x7
005C69A3  74 2E                     JZ 0x005c69d3
005C69A5  3C 0E                     CMP AL,0xe
005C69A7  74 2A                     JZ 0x005c69d3
005C69A9  BE 01 00 00 00            MOV ESI,0x1
005C69AE  C7 43 2D 20 00 00 00      MOV dword ptr [EBX + 0x2d],0x20
005C69B5  89 73 31                  MOV dword ptr [EBX + 0x31],ESI
005C69B8  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005C69BD  8D 53 1D                  LEA EDX,[EBX + 0x1d]
005C69C0  8B 88 89 03 00 00         MOV ECX,dword ptr [EAX + 0x389]
005C69C6  52                        PUSH EDX
005C69C7  51                        PUSH ECX
005C69C8  6A 02                     PUSH 0x2
005C69CA  8B CB                     MOV ECX,EBX
005C69CC  E8 AF F6 11 00            CALL 0x006e6080
005C69D1  EB 05                     JMP 0x005c69d8
LAB_005c69d3:
005C69D3  BE 01 00 00 00            MOV ESI,0x1
LAB_005c69d8:
005C69D8  8A 83 E2 21 00 00         MOV AL,byte ptr [EBX + 0x21e2]
005C69DE  84 C0                     TEST AL,AL
005C69E0  74 0B                     JZ 0x005c69ed
005C69E2  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005C69E8  E8 5D C0 E3 FF            CALL 0x00402a4a
LAB_005c69ed:
005C69ED  8B 9B 5B 1A 00 00         MOV EBX,dword ptr [EBX + 0x1a5b]
005C69F3  8B 83 E6 02 00 00         MOV EAX,dword ptr [EBX + 0x2e6]
005C69F9  85 C0                     TEST EAX,EAX
005C69FB  74 29                     JZ 0x005c6a26
005C69FD  B9 06 00 00 00            MOV ECX,0x6
005C6A02  33 C0                     XOR EAX,EAX
005C6A04  8D 7D CC                  LEA EDI,[EBP + -0x34]
005C6A07  8D 55 CC                  LEA EDX,[EBP + -0x34]
005C6A0A  F3 AB                     STOSD.REP ES:EDI
005C6A0C  66 AB                     STOSW ES:EDI
005C6A0E  66 89 75 D8               MOV word ptr [EBP + -0x28],SI
005C6A12  66 89 75 D6               MOV word ptr [EBP + -0x2a],SI
005C6A16  66 89 75 CE               MOV word ptr [EBP + -0x32],SI
005C6A1A  8B 8B E6 02 00 00         MOV ECX,dword ptr [EBX + 0x2e6]
005C6A20  52                        PUSH EDX
005C6A21  E8 2B E1 E3 FF            CALL 0x00404b51
LAB_005c6a26:
005C6A26  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
005C6A29  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005C6A2E  5F                        POP EDI
005C6A2F  5E                        POP ESI
005C6A30  5B                        POP EBX
005C6A31  8B E5                     MOV ESP,EBP
005C6A33  5D                        POP EBP
005C6A34  C2 04 00                  RET 0x4
LAB_005c6a37:
005C6A37  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
005C6A3A  68 E0 D1 7C 00            PUSH 0x7cd1e0
005C6A3F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005C6A44  56                        PUSH ESI
005C6A45  6A 00                     PUSH 0x0
005C6A47  68 4D 03 00 00            PUSH 0x34d
005C6A4C  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C6A51  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005C6A57  E8 74 6A 0E 00            CALL 0x006ad4d0
005C6A5C  83 C4 18                  ADD ESP,0x18
005C6A5F  85 C0                     TEST EAX,EAX
005C6A61  74 01                     JZ 0x005c6a64
005C6A63  CC                        INT3
LAB_005c6a64:
005C6A64  68 4D 03 00 00            PUSH 0x34d
005C6A69  68 E8 D0 7C 00            PUSH 0x7cd0e8
005C6A6E  6A 00                     PUSH 0x0
005C6A70  56                        PUSH ESI
005C6A71  E8 CA F3 0D 00            CALL 0x006a5e40
005C6A76  5F                        POP EDI
005C6A77  5E                        POP ESI
005C6A78  5B                        POP EBX
005C6A79  8B E5                     MOV ESP,EBP
005C6A7B  5D                        POP EBP
005C6A7C  C2 04 00                  RET 0x4
