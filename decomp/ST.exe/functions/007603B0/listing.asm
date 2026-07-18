FUN_007603b0:
007603B0  55                        PUSH EBP
007603B1  8B EC                     MOV EBP,ESP
007603B3  81 EC 30 01 00 00         SUB ESP,0x130
007603B9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007603BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007603BF  53                        PUSH EBX
007603C0  56                        PUSH ESI
007603C1  8B 98 32 01 00 00         MOV EBX,dword ptr [EAX + 0x132]
007603C7  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007603CA  57                        PUSH EDI
007603CB  8B 79 50                  MOV EDI,dword ptr [ECX + 0x50]
007603CE  81 C3 80 00 00 00         ADD EBX,0x80
007603D4  8D 85 D0 FE FF FF         LEA EAX,[EBP + 0xfffffed0]
007603DA  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
007603DD  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
007603E0  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
007603E3  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
007603E6  C7 45 E8 08 00 00 00      MOV dword ptr [EBP + -0x18],0x8
LAB_007603ed:
007603ED  8B 8E A0 00 00 00         MOV ECX,dword ptr [ESI + 0xa0]
007603F3  8B 96 E0 00 00 00         MOV EDX,dword ptr [ESI + 0xe0]
007603F9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007603FC  8B 4E 60                  MOV ECX,dword ptr [ESI + 0x60]
007603FF  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00760402  8B 96 80 00 00 00         MOV EDX,dword ptr [ESI + 0x80]
00760408  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0076040B  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
0076040E  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
00760411  8B 56 40                  MOV EDX,dword ptr [ESI + 0x40]
00760414  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00760417  0B CA                     OR ECX,EDX
00760419  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0076041C  0B CA                     OR ECX,EDX
0076041E  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00760421  0B CA                     OR ECX,EDX
00760423  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00760426  0B CA                     OR ECX,EDX
00760428  8B 96 C0 00 00 00         MOV EDX,dword ptr [ESI + 0xc0]
0076042E  0B CA                     OR ECX,EDX
00760430  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00760433  0B CA                     OR ECX,EDX
00760435  75 42                     JNZ 0x00760479
00760437  8B 0E                     MOV ECX,dword ptr [ESI]
00760439  83 C6 04                  ADD ESI,0x4
0076043C  0F AF 0F                  IMUL ECX,dword ptr [EDI]
0076043F  C1 E1 02                  SHL ECX,0x2
00760442  89 08                     MOV dword ptr [EAX],ECX
00760444  89 48 20                  MOV dword ptr [EAX + 0x20],ECX
00760447  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
0076044A  89 48 60                  MOV dword ptr [EAX + 0x60],ECX
0076044D  89 88 80 00 00 00         MOV dword ptr [EAX + 0x80],ECX
00760453  89 88 A0 00 00 00         MOV dword ptr [EAX + 0xa0],ECX
00760459  89 88 C0 00 00 00         MOV dword ptr [EAX + 0xc0],ECX
0076045F  89 88 E0 00 00 00         MOV dword ptr [EAX + 0xe0],ECX
00760465  83 C7 04                  ADD EDI,0x4
00760468  83 C0 04                  ADD EAX,0x4
0076046B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0076046E  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00760471  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00760474  E9 11 02 00 00            JMP 0x0076068a
LAB_00760479:
00760479  8B 4F 40                  MOV ECX,dword ptr [EDI + 0x40]
0076047C  8B 87 C0 00 00 00         MOV EAX,dword ptr [EDI + 0xc0]
00760482  0F AF 86 C0 00 00 00      IMUL EAX,dword ptr [ESI + 0xc0]
00760489  0F AF 4E 40               IMUL ECX,dword ptr [ESI + 0x40]
0076048D  8D 14 08                  LEA EDX,[EAX + ECX*0x1]
00760490  8D 1C 52                  LEA EBX,[EDX + EDX*0x2]
00760493  C1 E3 03                  SHL EBX,0x3
00760496  2B DA                     SUB EBX,EDX
00760498  8D 1C 5B                  LEA EBX,[EBX + EBX*0x2]
0076049B  8D 1C 9A                  LEA EBX,[EDX + EBX*0x4]
0076049E  C1 E3 04                  SHL EBX,0x4
007604A1  03 DA                     ADD EBX,EDX
007604A3  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
007604A6  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
007604A9  C1 E2 02                  SHL EDX,0x2
007604AC  2B D0                     SUB EDX,EAX
007604AE  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
007604B1  C1 E2 05                  SHL EDX,0x5
007604B4  03 C2                     ADD EAX,EDX
007604B6  8B D3                     MOV EDX,EBX
007604B8  2B D0                     SUB EDX,EAX
007604BA  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
007604BD  C1 E0 04                  SHL EAX,0x4
007604C0  03 C1                     ADD EAX,ECX
007604C2  C1 E0 06                  SHL EAX,0x6
007604C5  2B C1                     SUB EAX,ECX
007604C7  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
007604CA  8B 06                     MOV EAX,dword ptr [ESI]
007604CC  8B 9F 80 00 00 00         MOV EBX,dword ptr [EDI + 0x80]
007604D2  0F AF 07                  IMUL EAX,dword ptr [EDI]
007604D5  0F AF 5D 10               IMUL EBX,dword ptr [EBP + 0x10]
007604D9  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
007604DC  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
007604DF  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
007604E2  C1 E1 0D                  SHL ECX,0xd
007604E5  2B C3                     SUB EAX,EBX
007604E7  8D 1C 31                  LEA EBX,[ECX + ESI*0x1]
007604EA  2B CE                     SUB ECX,ESI
007604EC  8B 77 60                  MOV ESI,dword ptr [EDI + 0x60]
007604EF  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
007604F2  C1 E0 0D                  SHL EAX,0xd
007604F5  0F AF 75 F8               IMUL ESI,dword ptr [EBP + -0x8]
007604F9  8D 0C 10                  LEA ECX,[EAX + EDX*0x1]
007604FC  2B C2                     SUB EAX,EDX
007604FE  8B 97 A0 00 00 00         MOV EDX,dword ptr [EDI + 0xa0]
00760504  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00760507  8B 8F E0 00 00 00         MOV ECX,dword ptr [EDI + 0xe0]
0076050D  8B 7F 20                  MOV EDI,dword ptr [EDI + 0x20]
00760510  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
00760514  0F AF 7D D4               IMUL EDI,dword ptr [EBP + -0x2c]
00760518  0F AF 55 FC               IMUL EDX,dword ptr [EBP + -0x4]
0076051C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0076051F  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
00760522  8D 04 39                  LEA EAX,[ECX + EDI*0x1]
00760525  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00760528  03 FA                     ADD EDI,EDX
0076052A  8D 1C 31                  LEA EBX,[ECX + ESI*0x1]
0076052D  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
00760530  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
00760533  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
00760536  03 FB                     ADD EDI,EBX
00760538  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0076053B  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0076053E  C1 E0 06                  SHL EAX,0x6
00760541  03 C7                     ADD EAX,EDI
00760543  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00760546  8D 3C 47                  LEA EDI,[EDI + EAX*0x2]
00760549  8D 04 7F                  LEA EAX,[EDI + EDI*0x2]
0076054C  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0076054F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00760552  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00760555  69 C0 33 E3 FF FF         IMUL EAX,EAX,-0x1ccd
0076055B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0076055E  8B C7                     MOV EAX,EDI
00760560  F7 D8                     NEG EAX
00760562  C1 E0 02                  SHL EAX,0x2
00760565  2B C7                     SUB EAX,EDI
00760567  C1 E0 03                  SHL EAX,0x3
0076056A  2B C7                     SUB EAX,EDI
0076056C  C1 E0 08                  SHL EAX,0x8
0076056F  2B C7                     SUB EAX,EDI
00760571  D1 E0                     SHL EAX,0x1
00760573  69 F6 54 62 00 00         IMUL ESI,ESI,0x6254
00760579  2B C7                     SUB EAX,EDI
0076057B  8B FB                     MOV EDI,EBX
0076057D  C1 E7 06                  SHL EDI,0x6
00760580  69 D2 B3 41 00 00         IMUL EDX,EDX,0x41b3
00760586  2B FB                     SUB EDI,EBX
00760588  69 C9 8E 09 00 00         IMUL ECX,ECX,0x98e
0076058E  C1 E7 02                  SHL EDI,0x2
00760591  2B FB                     SUB EDI,EBX
00760593  C1 E7 04                  SHL EDI,0x4
00760596  03 FB                     ADD EDI,EBX
00760598  8D 3C BB                  LEA EDI,[EBX + EDI*0x4]
0076059B  8B DF                     MOV EBX,EDI
0076059D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
007605A0  2B FB                     SUB EDI,EBX
007605A2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
007605A5  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
007605A8  03 75 FC                  ADD ESI,dword ptr [EBP + -0x4]
007605AB  8D 1C 7F                  LEA EBX,[EDI + EDI*0x2]
007605AE  03 F0                     ADD ESI,EAX
007605B0  8D 1C DF                  LEA EBX,[EDI + EBX*0x8]
007605B3  C1 E3 05                  SHL EBX,0x5
007605B6  2B DF                     SUB EBX,EDI
007605B8  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
007605BB  C1 E3 02                  SHL EBX,0x2
007605BE  2B FB                     SUB EDI,EBX
007605C0  8B DF                     MOV EBX,EDI
007605C2  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007605C5  03 D3                     ADD EDX,EBX
007605C7  03 CF                     ADD ECX,EDI
007605C9  03 4D FC                  ADD ECX,dword ptr [EBP + -0x4]
007605CC  03 D0                     ADD EDX,EAX
007605CE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
007605D1  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
007605D4  03 D8                     ADD EBX,EAX
007605D6  8D 34 40                  LEA ESI,[EAX + EAX*0x2]
007605D9  C1 E6 09                  SHL ESI,0x9
007605DC  03 F0                     ADD ESI,EAX
007605DE  8D 34 B0                  LEA ESI,[EAX + ESI*0x4]
007605E1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007605E4  8D 1C 73                  LEA EBX,[EBX + ESI*0x2]
007605E7  03 DF                     ADD EBX,EDI
007605E9  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
007605EC  8D B4 1F 00 04 00 00      LEA ESI,[EDI + EBX*0x1 + 0x400]
007605F3  2B FB                     SUB EDI,EBX
007605F5  81 C7 00 04 00 00         ADD EDI,0x400
007605FB  C1 FE 0B                  SAR ESI,0xb
007605FE  C1 FF 0B                  SAR EDI,0xb
00760601  89 30                     MOV dword ptr [EAX],ESI
00760603  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00760606  89 B8 E0 00 00 00         MOV dword ptr [EAX + 0xe0],EDI
0076060C  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
0076060F  8D 9C 37 00 04 00 00      LEA EBX,[EDI + ESI*0x1 + 0x400]
00760616  2B FE                     SUB EDI,ESI
00760618  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0076061B  81 C7 00 04 00 00         ADD EDI,0x400
00760621  C1 FF 0B                  SAR EDI,0xb
00760624  89 B8 C0 00 00 00         MOV dword ptr [EAX + 0xc0],EDI
0076062A  8D BC 16 00 04 00 00      LEA EDI,[ESI + EDX*0x1 + 0x400]
00760631  2B F2                     SUB ESI,EDX
00760633  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
00760636  81 C6 00 04 00 00         ADD ESI,0x400
0076063C  C1 FE 0B                  SAR ESI,0xb
0076063F  89 B0 A0 00 00 00         MOV dword ptr [EAX + 0xa0],ESI
00760645  8D B4 0A 00 04 00 00      LEA ESI,[EDX + ECX*0x1 + 0x400]
0076064C  C1 FE 0B                  SAR ESI,0xb
0076064F  2B D1                     SUB EDX,ECX
00760651  89 70 60                  MOV dword ptr [EAX + 0x60],ESI
00760654  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
00760657  81 C2 00 04 00 00         ADD EDX,0x400
0076065D  C1 FF 0B                  SAR EDI,0xb
00760660  89 78 40                  MOV dword ptr [EAX + 0x40],EDI
00760663  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00760666  C1 FB 0B                  SAR EBX,0xb
00760669  C1 FA 0B                  SAR EDX,0xb
0076066C  83 C6 04                  ADD ESI,0x4
0076066F  89 58 20                  MOV dword ptr [EAX + 0x20],EBX
00760672  89 90 80 00 00 00         MOV dword ptr [EAX + 0x80],EDX
00760678  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0076067B  83 C7 04                  ADD EDI,0x4
0076067E  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00760681  83 C0 04                  ADD EAX,0x4
00760684  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00760687  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
LAB_0076068a:
0076068A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0076068D  49                        DEC ECX
0076068E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
00760691  0F 85 56 FD FF FF         JNZ 0x007603ed
00760697  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0076069A  8D B5 D0 FE FF FF         LEA ESI,[EBP + 0xfffffed0]
007606A0  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
007606A3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007606A6  C7 45 EC 08 00 00 00      MOV dword ptr [EBP + -0x14],0x8
LAB_007606ad:
007606AD  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007606B0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
007606B3  8B 7E 08                  MOV EDI,dword ptr [ESI + 0x8]
007606B6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
007606B9  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
007606BC  8B 0A                     MOV ECX,dword ptr [EDX]
007606BE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
007606C1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007606C4  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
007606C7  03 CA                     ADD ECX,EDX
007606C9  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
007606CC  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007606CF  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007606D2  8B 76 04                  MOV ESI,dword ptr [ESI + 0x4]
007606D5  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
007606D8  0B F7                     OR ESI,EDI
007606DA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
007606DD  0B F0                     OR ESI,EAX
007606DF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007606E2  0B F0                     OR ESI,EAX
007606E4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
007606E7  0B F0                     OR ESI,EAX
007606E9  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007606EC  0B F2                     OR ESI,EDX
007606EE  0B F0                     OR ESI,EAX
007606F0  75 30                     JNZ 0x00760722
007606F2  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007606F5  8B 16                     MOV EDX,dword ptr [ESI]
007606F7  83 C2 10                  ADD EDX,0x10
007606FA  C1 FA 05                  SAR EDX,0x5
007606FD  81 E2 FF 03 00 00         AND EDX,0x3ff
00760703  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
00760706  88 01                     MOV byte ptr [ECX],AL
00760708  88 41 01                  MOV byte ptr [ECX + 0x1],AL
0076070B  88 41 02                  MOV byte ptr [ECX + 0x2],AL
0076070E  88 41 03                  MOV byte ptr [ECX + 0x3],AL
00760711  88 41 04                  MOV byte ptr [ECX + 0x4],AL
00760714  88 41 05                  MOV byte ptr [ECX + 0x5],AL
00760717  88 41 06                  MOV byte ptr [ECX + 0x6],AL
0076071A  88 41 07                  MOV byte ptr [ECX + 0x7],AL
0076071D  E9 1B 02 00 00            JMP 0x0076093d
LAB_00760722:
00760722  8D 34 3A                  LEA ESI,[EDX + EDI*0x1]
00760725  8D 1C 76                  LEA EBX,[ESI + ESI*0x2]
00760728  C1 E3 03                  SHL EBX,0x3
0076072B  2B DE                     SUB EBX,ESI
0076072D  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
00760730  8D 1C 86                  LEA EBX,[ESI + EAX*0x4]
00760733  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
00760736  C1 E3 04                  SHL EBX,0x4
00760739  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0076073C  03 DE                     ADD EBX,ESI
0076073E  C1 E0 02                  SHL EAX,0x2
00760741  2B C2                     SUB EAX,EDX
00760743  8D 04 C2                  LEA EAX,[EDX + EAX*0x8]
00760746  C1 E0 05                  SHL EAX,0x5
00760749  03 D0                     ADD EDX,EAX
0076074B  8B C3                     MOV EAX,EBX
0076074D  2B C2                     SUB EAX,EDX
0076074F  8D 14 7F                  LEA EDX,[EDI + EDI*0x2]
00760752  C1 E2 04                  SHL EDX,0x4
00760755  03 D7                     ADD EDX,EDI
00760757  C1 E2 06                  SHL EDX,0x6
0076075A  2B D7                     SUB EDX,EDI
0076075C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0076075F  8D 1C 53                  LEA EBX,[EBX + EDX*0x2]
00760762  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00760765  8B 12                     MOV EDX,dword ptr [EDX]
00760767  8D 34 3A                  LEA ESI,[EDX + EDI*0x1]
0076076A  2B D7                     SUB EDX,EDI
0076076C  C1 E6 0D                  SHL ESI,0xd
0076076F  C1 E2 0D                  SHL EDX,0xd
00760772  8B FA                     MOV EDI,EDX
00760774  8D 14 1E                  LEA EDX,[ESI + EBX*0x1]
00760777  2B F3                     SUB ESI,EBX
00760779  8D 1C 07                  LEA EBX,[EDI + EAX*0x1]
0076077C  2B F8                     SUB EDI,EAX
0076077E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00760781  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00760784  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00760787  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0076078A  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0076078D  03 F8                     ADD EDI,EAX
0076078F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00760792  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
00760795  8D 3C 18                  LEA EDI,[EAX + EBX*0x1]
00760798  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0076079B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0076079E  03 FB                     ADD EDI,EBX
007607A0  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007607A3  03 C3                     ADD EAX,EBX
007607A5  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007607A8  8D 1C 38                  LEA EBX,[EAX + EDI*0x1]
007607AB  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
007607AE  C1 E0 06                  SHL EAX,0x6
007607B1  03 C3                     ADD EAX,EBX
007607B3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
007607B6  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
007607B9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007607BC  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
007607BF  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007607C2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007607C5  69 C0 33 E3 FF FF         IMUL EAX,EAX,-0x1ccd
007607CB  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
007607CE  8B C3                     MOV EAX,EBX
007607D0  F7 D8                     NEG EAX
007607D2  C1 E0 02                  SHL EAX,0x2
007607D5  2B C3                     SUB EAX,EBX
007607D7  C1 E0 03                  SHL EAX,0x3
007607DA  2B C3                     SUB EAX,EBX
007607DC  C1 E0 08                  SHL EAX,0x8
007607DF  2B C3                     SUB EAX,EBX
007607E1  D1 E0                     SHL EAX,0x1
007607E3  2B C3                     SUB EAX,EBX
007607E5  8B DF                     MOV EBX,EDI
007607E7  C1 E3 06                  SHL EBX,0x6
007607EA  2B DF                     SUB EBX,EDI
007607EC  C1 E3 02                  SHL EBX,0x2
007607EF  2B DF                     SUB EBX,EDI
007607F1  C1 E3 04                  SHL EBX,0x4
007607F4  03 DF                     ADD EBX,EDI
007607F6  8D 3C 9F                  LEA EDI,[EDI + EBX*0x4]
007607F9  8B DF                     MOV EBX,EDI
007607FB  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
007607FE  2B FB                     SUB EDI,EBX
00760800  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00760803  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00760806  8D 1C 7F                  LEA EBX,[EDI + EDI*0x2]
00760809  8D 1C DF                  LEA EBX,[EDI + EBX*0x8]
0076080C  C1 E3 05                  SHL EBX,0x5
0076080F  2B DF                     SUB EBX,EDI
00760811  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00760814  C1 E3 02                  SHL EBX,0x2
00760817  2B FB                     SUB EDI,EBX
00760819  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0076081C  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0076081F  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00760822  69 FF 8E 09 00 00         IMUL EDI,EDI,0x98e
00760828  03 FB                     ADD EDI,EBX
0076082A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0076082D  03 FB                     ADD EDI,EBX
0076082F  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00760832  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00760835  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00760838  69 FF B3 41 00 00         IMUL EDI,EDI,0x41b3
0076083E  03 FB                     ADD EDI,EBX
00760840  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00760843  03 F8                     ADD EDI,EAX
00760845  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
00760848  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
0076084B  69 FF 54 62 00 00         IMUL EDI,EDI,0x6254
00760851  03 FB                     ADD EDI,EBX
00760853  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00760856  03 F8                     ADD EDI,EAX
00760858  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0076085B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0076085E  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00760861  03 D8                     ADD EBX,EAX
00760863  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
00760866  C1 E7 09                  SHL EDI,0x9
00760869  03 F8                     ADD EDI,EAX
0076086B  8D 3C B8                  LEA EDI,[EAX + EDI*0x4]
0076086E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00760871  8D 3C 7B                  LEA EDI,[EBX + EDI*0x2]
00760874  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
00760877  03 F8                     ADD EDI,EAX
00760879  8D 84 3A 00 00 02 00      LEA EAX,[EDX + EDI*0x1 + 0x20000]
00760880  2B D7                     SUB EDX,EDI
00760882  C1 F8 12                  SAR EAX,0x12
00760885  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00760888  81 C2 00 00 02 00         ADD EDX,0x20000
0076088E  25 FF 03 00 00            AND EAX,0x3ff
00760893  C1 FA 12                  SAR EDX,0x12
00760896  8A 04 18                  MOV AL,byte ptr [EAX + EBX*0x1]
00760899  81 E2 FF 03 00 00         AND EDX,0x3ff
0076089F  88 01                     MOV byte ptr [ECX],AL
007608A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007608A4  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
007608A7  88 51 07                  MOV byte ptr [ECX + 0x7],DL
007608AA  8D 94 07 00 00 02 00      LEA EDX,[EDI + EAX*0x1 + 0x20000]
007608B1  2B F8                     SUB EDI,EAX
007608B3  C1 FA 12                  SAR EDX,0x12
007608B6  81 C7 00 00 02 00         ADD EDI,0x20000
007608BC  81 E2 FF 03 00 00         AND EDX,0x3ff
007608C2  C1 FF 12                  SAR EDI,0x12
007608C5  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
007608C8  81 E7 FF 03 00 00         AND EDI,0x3ff
007608CE  88 51 01                  MOV byte ptr [ECX + 0x1],DL
007608D1  8A 04 1F                  MOV AL,byte ptr [EDI + EBX*0x1]
007608D4  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
007608D7  88 41 06                  MOV byte ptr [ECX + 0x6],AL
007608DA  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007608DD  8D 94 07 00 00 02 00      LEA EDX,[EDI + EAX*0x1 + 0x20000]
007608E4  2B F8                     SUB EDI,EAX
007608E6  C1 FA 12                  SAR EDX,0x12
007608E9  81 C7 00 00 02 00         ADD EDI,0x20000
007608EF  81 E2 FF 03 00 00         AND EDX,0x3ff
007608F5  C1 FF 12                  SAR EDI,0x12
007608F8  8A 14 1A                  MOV DL,byte ptr [EDX + EBX*0x1]
007608FB  81 E7 FF 03 00 00         AND EDI,0x3ff
00760901  88 51 02                  MOV byte ptr [ECX + 0x2],DL
00760904  8A 04 1F                  MOV AL,byte ptr [EDI + EBX*0x1]
00760907  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
0076090A  88 41 05                  MOV byte ptr [ECX + 0x5],AL
0076090D  8D 94 3E 00 00 02 00      LEA EDX,[ESI + EDI*0x1 + 0x20000]
00760914  2B F7                     SUB ESI,EDI
00760916  C1 FA 12                  SAR EDX,0x12
00760919  81 C6 00 00 02 00         ADD ESI,0x20000
0076091F  81 E2 FF 03 00 00         AND EDX,0x3ff
00760925  C1 FE 12                  SAR ESI,0x12
00760928  8A 04 1A                  MOV AL,byte ptr [EDX + EBX*0x1]
0076092B  81 E6 FF 03 00 00         AND ESI,0x3ff
00760931  88 41 03                  MOV byte ptr [ECX + 0x3],AL
00760934  8A 14 1E                  MOV DL,byte ptr [ESI + EBX*0x1]
00760937  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0076093A  88 51 04                  MOV byte ptr [ECX + 0x4],DL
LAB_0076093d:
0076093D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00760940  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00760943  83 C6 20                  ADD ESI,0x20
00760946  83 C1 04                  ADD ECX,0x4
00760949  48                        DEC EAX
0076094A  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
0076094D  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00760950  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00760953  0F 85 54 FD FF FF         JNZ 0x007606ad
00760959  5F                        POP EDI
0076095A  5E                        POP ESI
0076095B  5B                        POP EBX
0076095C  8B E5                     MOV ESP,EBP
0076095E  5D                        POP EBP
0076095F  C2 14 00                  RET 0x14
