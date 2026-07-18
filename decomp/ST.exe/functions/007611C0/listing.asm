FUN_007611c0:
007611C0  55                        PUSH EBP
007611C1  8B EC                     MOV EBP,ESP
007611C3  81 EC 9C 00 00 00         SUB ESP,0x9c
007611C9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007611CC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007611CF  53                        PUSH EBX
007611D0  56                        PUSH ESI
007611D1  8B 80 32 01 00 00         MOV EAX,dword ptr [EAX + 0x132]
007611D7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007611DA  57                        PUSH EDI
007611DB  8B 79 50                  MOV EDI,dword ptr [ECX + 0x50]
007611DE  05 80 00 00 00            ADD EAX,0x80
007611E3  B9 08 00 00 00            MOV ECX,0x8
007611E8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007611EB  8B C7                     MOV EAX,EDI
007611ED  2B C7                     SUB EAX,EDI
007611EF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007611F2  8D 54 05 84               LEA EDX,[EBP + EAX*0x1 + -0x7c]
007611F6  8D 84 30 C0 00 00 00      LEA EAX,[EAX + ESI*0x1 + 0xc0]
007611FD  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00761200  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_00761203:
00761203  83 F9 04                  CMP ECX,0x4
00761206  0F 84 6E 01 00 00         JZ 0x0076137a
0076120C  8B 58 80                  MOV EBX,dword ptr [EAX + -0x80]
0076120F  8B 48 E0                  MOV ECX,dword ptr [EAX + -0x20]
00761212  8B 70 20                  MOV ESI,dword ptr [EAX + 0x20]
00761215  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00761218  8B 98 60 FF FF FF         MOV EBX,dword ptr [EAX + 0xffffff60]
0076121E  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00761221  8B 48 A0                  MOV ECX,dword ptr [EAX + -0x60]
00761224  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00761227  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0076122A  0B D9                     OR EBX,ECX
0076122C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0076122F  0B D9                     OR EBX,ECX
00761231  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00761234  0B DE                     OR EBX,ESI
00761236  0B D9                     OR EBX,ECX
00761238  8B CB                     MOV ECX,EBX
0076123A  8B 18                     MOV EBX,dword ptr [EAX]
0076123C  0B CB                     OR ECX,EBX
0076123E  75 1C                     JNZ 0x0076125c
00761240  8B 88 40 FF FF FF         MOV ECX,dword ptr [EAX + 0xffffff40]
00761246  0F AF 0F                  IMUL ECX,dword ptr [EDI]
00761249  C1 E1 02                  SHL ECX,0x2
0076124C  89 4A E0                  MOV dword ptr [EDX + -0x20],ECX
0076124F  89 0A                     MOV dword ptr [EDX],ECX
00761251  89 4A 20                  MOV dword ptr [EDX + 0x20],ECX
00761254  89 4A 40                  MOV dword ptr [EDX + 0x40],ECX
00761257  E9 1E 01 00 00            JMP 0x0076137a
LAB_0076125c:
0076125C  8B 8F C0 00 00 00         MOV ECX,dword ptr [EDI + 0xc0]
00761262  8B 80 40 FF FF FF         MOV EAX,dword ptr [EAX + 0xffffff40]
00761268  0F AF CB                  IMUL ECX,EBX
0076126B  0F AF 07                  IMUL EAX,dword ptr [EDI]
0076126E  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
00761271  C1 E2 04                  SHL EDX,0x4
00761274  03 D1                     ADD EDX,ECX
00761276  C1 E2 06                  SHL EDX,0x6
00761279  2B D1                     SUB EDX,ECX
0076127B  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
0076127E  0F AF 4D 08               IMUL ECX,dword ptr [EBP + 0x8]
00761282  8B D9                     MOV EBX,ECX
00761284  C1 E3 04                  SHL EBX,0x4
00761287  2B D9                     SUB EBX,ECX
00761289  C1 E3 02                  SHL EBX,0x2
0076128C  2B D9                     SUB EBX,ECX
0076128E  D1 E2                     SHL EDX,0x1
00761290  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
00761293  C1 E3 05                  SHL EBX,0x5
00761296  03 CB                     ADD ECX,EBX
00761298  C1 E0 0E                  SHL EAX,0xe
0076129B  2B CA                     SUB ECX,EDX
0076129D  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
007612A0  2B C1                     SUB EAX,ECX
007612A2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007612A5  8B 97 E0 00 00 00         MOV EDX,dword ptr [EDI + 0xe0]
007612AB  0F AF D6                  IMUL EDX,ESI
007612AE  8B 77 60                  MOV ESI,dword ptr [EDI + 0x60]
007612B1  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007612B4  8B 87 A0 00 00 00         MOV EAX,dword ptr [EDI + 0xa0]
007612BA  0F AF 75 EC               IMUL ESI,dword ptr [EBP + -0x14]
007612BE  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
007612C2  8B 4F 20                  MOV ECX,dword ptr [EDI + 0x20]
007612C5  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
007612C8  0F AF 4D E4               IMUL ECX,dword ptr [EBP + -0x1c]
007612CC  8B DE                     MOV EBX,ESI
007612CE  8B F0                     MOV ESI,EAX
007612D0  C1 E6 05                  SHL ESI,0x5
007612D3  69 DB 87 45 00 00         IMUL EBX,EBX,0x4587
007612D9  2B F0                     SUB ESI,EAX
007612DB  C1 E6 05                  SHL ESI,0x5
007612DE  2B F0                     SUB ESI,EAX
007612E0  8D 34 76                  LEA ESI,[ESI + ESI*0x2]
007612E3  8D 34 B0                  LEA ESI,[EAX + ESI*0x4]
007612E6  2B F3                     SUB ESI,EBX
007612E8  8B D9                     MOV EBX,ECX
007612EA  C1 E3 04                  SHL EBX,0x4
007612ED  03 D9                     ADD EBX,ECX
007612EF  C1 E3 06                  SHL EBX,0x6
007612F2  2B D9                     SUB EBX,ECX
007612F4  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
007612F7  03 F3                     ADD ESI,EBX
007612F9  8D 1C 52                  LEA EBX,[EDX + EDX*0x2]
007612FC  8D 1C DB                  LEA EBX,[EBX + EBX*0x8]
007612FF  C1 E3 05                  SHL EBX,0x5
00761302  03 DA                     ADD EBX,EDX
00761304  69 D2 50 10 00 00         IMUL EDX,EDX,0x1050
0076130A  D1 E3                     SHL EBX,0x1
0076130C  2B F3                     SUB ESI,EBX
0076130E  8D 1C 89                  LEA EBX,[ECX + ECX*0x4]
00761311  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
00761314  C1 E3 08                  SHL EBX,0x8
00761317  03 D9                     ADD EBX,ECX
00761319  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
0076131C  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0076131F  69 DB CD 1C 00 00         IMUL EBX,EBX,0x1ccd
00761325  03 CB                     ADD ECX,EBX
00761327  8D 1C C0                  LEA EBX,[EAX + EAX*0x8]
0076132A  8D 1C 58                  LEA EBX,[EAX + EBX*0x2]
0076132D  8D 1C 98                  LEA EBX,[EAX + EBX*0x4]
00761330  C1 E3 05                  SHL EBX,0x5
00761333  2B D8                     SUB EBX,EAX
00761335  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00761338  D1 E3                     SHL EBX,0x1
0076133A  2B CB                     SUB ECX,EBX
0076133C  2B CA                     SUB ECX,EDX
0076133E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00761341  8D 9C 08 00 08 00 00      LEA EBX,[EAX + ECX*0x1 + 0x800]
00761348  C1 FB 0C                  SAR EBX,0xc
0076134B  89 5A E0                  MOV dword ptr [EDX + -0x20],EBX
0076134E  2B C1                     SUB EAX,ECX
00761350  05 00 08 00 00            ADD EAX,0x800
00761355  C1 F8 0C                  SAR EAX,0xc
00761358  89 42 40                  MOV dword ptr [EDX + 0x40],EAX
0076135B  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0076135E  8D 8C 30 00 08 00 00      LEA ECX,[EAX + ESI*0x1 + 0x800]
00761365  2B C6                     SUB EAX,ESI
00761367  05 00 08 00 00            ADD EAX,0x800
0076136C  C1 F9 0C                  SAR ECX,0xc
0076136F  C1 F8 0C                  SAR EAX,0xc
00761372  89 42 20                  MOV dword ptr [EDX + 0x20],EAX
00761375  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00761378  89 0A                     MOV dword ptr [EDX],ECX
LAB_0076137a:
0076137A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0076137D  83 C7 04                  ADD EDI,0x4
00761380  83 C0 04                  ADD EAX,0x4
00761383  83 C2 04                  ADD EDX,0x4
00761386  49                        DEC ECX
00761387  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0076138A  85 C9                     TEST ECX,ECX
0076138C  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0076138F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00761392  0F 8F 6B FE FF FF         JG 0x00761203
00761398  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0076139B  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
007613A1  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
007613A4  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007613A7  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
LAB_007613ae:
007613AE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
007613B1  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007613B4  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
007613B7  8B 39                     MOV EDI,dword ptr [ECX]
007613B9  8B 4A 18                  MOV ECX,dword ptr [EDX + 0x18]
007613BC  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
007613BF  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
007613C2  03 C7                     ADD EAX,EDI
007613C4  8B 7A 08                  MOV EDI,dword ptr [EDX + 0x8]
007613C7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007613CA  8B 42 1C                  MOV EAX,dword ptr [EDX + 0x1c]
007613CD  8B D9                     MOV EBX,ECX
007613CF  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007613D2  8B 42 14                  MOV EAX,dword ptr [EDX + 0x14]
007613D5  0B DF                     OR EBX,EDI
007613D7  0B DE                     OR EBX,ESI
007613D9  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
007613DC  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
007613DF  0B D8                     OR EBX,EAX
007613E1  0B DE                     OR EBX,ESI
007613E3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007613E6  0B DE                     OR EBX,ESI
007613E8  75 26                     JNZ 0x00761410
007613EA  8B 02                     MOV EAX,dword ptr [EDX]
007613EC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007613EF  83 C0 10                  ADD EAX,0x10
007613F2  C1 F8 05                  SAR EAX,0x5
007613F5  25 FF 03 00 00            AND EAX,0x3ff
007613FA  8A 04 08                  MOV AL,byte ptr [EAX + ECX*0x1]
007613FD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00761400  88 01                     MOV byte ptr [ECX],AL
00761402  88 41 01                  MOV byte ptr [ECX + 0x1],AL
00761405  88 41 02                  MOV byte ptr [ECX + 0x2],AL
00761408  88 41 03                  MOV byte ptr [ECX + 0x3],AL
0076140B  E9 12 01 00 00            JMP 0x00761522
LAB_00761410:
00761410  8B 32                     MOV ESI,dword ptr [EDX]
00761412  8B D7                     MOV EDX,EDI
00761414  C1 E2 04                  SHL EDX,0x4
00761417  2B D7                     SUB EDX,EDI
00761419  C1 E2 02                  SHL EDX,0x2
0076141C  2B D7                     SUB EDX,EDI
0076141E  C1 E6 0E                  SHL ESI,0xe
00761421  8D 14 D7                  LEA EDX,[EDI + EDX*0x8]
00761424  C1 E2 05                  SHL EDX,0x5
00761427  03 FA                     ADD EDI,EDX
00761429  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0076142C  8D 1C 52                  LEA EBX,[EDX + EDX*0x2]
0076142F  C1 E3 04                  SHL EBX,0x4
00761432  03 DA                     ADD EBX,EDX
00761434  C1 E3 06                  SHL EBX,0x6
00761437  2B DA                     SUB EBX,EDX
00761439  D1 E3                     SHL EBX,0x1
0076143B  2B FB                     SUB EDI,EBX
0076143D  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00761440  69 DB 87 45 00 00         IMUL EBX,EBX,0x4587
00761446  8D 14 37                  LEA EDX,[EDI + ESI*0x1]
00761449  2B F7                     SUB ESI,EDI
0076144B  8B F8                     MOV EDI,EAX
0076144D  C1 E7 05                  SHL EDI,0x5
00761450  2B F8                     SUB EDI,EAX
00761452  C1 E7 05                  SHL EDI,0x5
00761455  2B F8                     SUB EDI,EAX
00761457  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
0076145A  8D 3C B8                  LEA EDI,[EAX + EDI*0x4]
0076145D  2B FB                     SUB EDI,EBX
0076145F  8B D9                     MOV EBX,ECX
00761461  C1 E3 04                  SHL EBX,0x4
00761464  03 D9                     ADD EBX,ECX
00761466  C1 E3 06                  SHL EBX,0x6
00761469  2B D9                     SUB EBX,ECX
0076146B  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
0076146E  03 FB                     ADD EDI,EBX
00761470  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
00761473  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00761476  8D 1C 7F                  LEA EBX,[EDI + EDI*0x2]
00761479  8D 1C DB                  LEA EBX,[EBX + EBX*0x8]
0076147C  C1 E3 05                  SHL EBX,0x5
0076147F  03 DF                     ADD EBX,EDI
00761481  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00761484  D1 E3                     SHL EBX,0x1
00761486  2B FB                     SUB EDI,EBX
00761488  8D 1C 89                  LEA EBX,[ECX + ECX*0x4]
0076148B  8D 1C D9                  LEA EBX,[ECX + EBX*0x8]
0076148E  C1 E3 08                  SHL EBX,0x8
00761491  03 D9                     ADD EBX,ECX
00761493  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
00761496  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00761499  69 DB CD 1C 00 00         IMUL EBX,EBX,0x1ccd
0076149F  03 CB                     ADD ECX,EBX
007614A1  8D 1C C0                  LEA EBX,[EAX + EAX*0x8]
007614A4  8D 1C 58                  LEA EBX,[EAX + EBX*0x2]
007614A7  8D 1C 98                  LEA EBX,[EAX + EBX*0x4]
007614AA  C1 E3 05                  SHL EBX,0x5
007614AD  2B D8                     SUB EBX,EAX
007614AF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007614B2  69 C0 50 10 00 00         IMUL EAX,EAX,0x1050
007614B8  D1 E3                     SHL EBX,0x1
007614BA  2B CB                     SUB ECX,EBX
007614BC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
007614BF  2B C8                     SUB ECX,EAX
007614C1  8D 84 0A 00 00 04 00      LEA EAX,[EDX + ECX*0x1 + 0x40000]
007614C8  2B D1                     SUB EDX,ECX
007614CA  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007614CD  81 C2 00 00 04 00         ADD EDX,0x40000
007614D3  C1 F8 13                  SAR EAX,0x13
007614D6  25 FF 03 00 00            AND EAX,0x3ff
007614DB  C1 FA 13                  SAR EDX,0x13
007614DE  8A 1C 18                  MOV BL,byte ptr [EAX + EBX*0x1]
007614E1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007614E4  81 E2 FF 03 00 00         AND EDX,0x3ff
007614EA  88 18                     MOV byte ptr [EAX],BL
007614EC  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
007614EF  88 50 03                  MOV byte ptr [EAX + 0x3],DL
007614F2  8D 94 3E 00 00 04 00      LEA EDX,[ESI + EDI*0x1 + 0x40000]
007614F9  C1 FA 13                  SAR EDX,0x13
007614FC  81 E2 FF 03 00 00         AND EDX,0x3ff
00761502  8A 14 0A                  MOV DL,byte ptr [EDX + ECX*0x1]
00761505  2B F7                     SUB ESI,EDI
00761507  81 C6 00 00 04 00         ADD ESI,0x40000
0076150D  88 50 01                  MOV byte ptr [EAX + 0x1],DL
00761510  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00761513  C1 FE 13                  SAR ESI,0x13
00761516  81 E6 FF 03 00 00         AND ESI,0x3ff
0076151C  8A 0C 0E                  MOV CL,byte ptr [ESI + ECX*0x1]
0076151F  88 48 02                  MOV byte ptr [EAX + 0x2],CL
LAB_00761522:
00761522  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00761525  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00761528  83 C2 20                  ADD EDX,0x20
0076152B  83 C1 04                  ADD ECX,0x4
0076152E  48                        DEC EAX
0076152F  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00761532  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
00761535  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00761538  0F 85 70 FE FF FF         JNZ 0x007613ae
0076153E  5F                        POP EDI
0076153F  5E                        POP ESI
00761540  5B                        POP EBX
00761541  8B E5                     MOV ESP,EBP
00761543  5D                        POP EBP
00761544  C2 14 00                  RET 0x14
