FUN_00761550:
00761550  55                        PUSH EBP
00761551  8B EC                     MOV EBP,ESP
00761553  83 EC 48                  SUB ESP,0x48
00761556  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00761559  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0076155C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0076155F  53                        PUSH EBX
00761560  8B 80 32 01 00 00         MOV EAX,dword ptr [EAX + 0x132]
00761566  56                        PUSH ESI
00761567  8B 71 50                  MOV ESI,dword ptr [ECX + 0x50]
0076156A  05 80 00 00 00            ADD EAX,0x80
0076156F  8D 5D B8                  LEA EBX,[EBP + -0x48]
00761572  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00761575  8D 4A 60                  LEA ECX,[EDX + 0x60]
00761578  83 C6 60                  ADD ESI,0x60
0076157B  B8 08 00 00 00            MOV EAX,0x8
00761580  2B D3                     SUB EDX,EBX
00761582  57                        PUSH EDI
00761583  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00761586  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00761589  8D 7D B8                  LEA EDI,[EBP + -0x48]
0076158C  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
LAB_0076158f:
0076158F  83 F8 06                  CMP EAX,0x6
00761592  0F 84 D0 00 00 00         JZ 0x00761668
00761598  83 F8 04                  CMP EAX,0x4
0076159B  0F 84 C7 00 00 00         JZ 0x00761668
007615A1  83 F8 02                  CMP EAX,0x2
007615A4  0F 84 BE 00 00 00         JZ 0x00761668
007615AA  8B 99 80 00 00 00         MOV EBX,dword ptr [ECX + 0x80]
007615B0  8B 51 40                  MOV EDX,dword ptr [ECX + 0x40]
007615B3  8B 49 C0                  MOV ECX,dword ptr [ECX + -0x40]
007615B6  8B C3                     MOV EAX,EBX
007615B8  0B C2                     OR EAX,EDX
007615BA  0B C1                     OR EAX,ECX
007615BC  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007615BF  0B 01                     OR EAX,dword ptr [ECX]
007615C1  75 14                     JNZ 0x007615d7
007615C3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
007615C6  8B 04 3A                  MOV EAX,dword ptr [EDX + EDI*0x1]
007615C9  0F AF 46 A0               IMUL EAX,dword ptr [ESI + -0x60]
007615CD  C1 E0 02                  SHL EAX,0x2
007615D0  89 07                     MOV dword ptr [EDI],EAX
007615D2  E9 88 00 00 00            JMP 0x0076165f
LAB_007615d7:
007615D7  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
007615DA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007615DD  0F AF CA                  IMUL ECX,EDX
007615E0  8B D1                     MOV EDX,ECX
007615E2  8B 04 38                  MOV EAX,dword ptr [EAX + EDI*0x1]
007615E5  C1 E2 07                  SHL EDX,0x7
007615E8  0F AF 46 A0               IMUL EAX,dword ptr [ESI + -0x60]
007615EC  03 D1                     ADD EDX,ECX
007615EE  C1 E0 0F                  SHL EAX,0xf
007615F1  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
007615F4  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
007615F7  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
007615FA  8B D1                     MOV EDX,ECX
007615FC  8B 8E 80 00 00 00         MOV ECX,dword ptr [ESI + 0x80]
00761602  0F AF CB                  IMUL ECX,EBX
00761605  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00761608  8D 1C 89                  LEA EBX,[ECX + ECX*0x4]
0076160B  8D 14 D9                  LEA EDX,[ECX + EBX*0x8]
0076160E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00761611  8D 14 D2                  LEA EDX,[EDX + EDX*0x8]
00761614  8D 0C D1                  LEA ECX,[ECX + EDX*0x8]
00761617  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0076161A  D1 E1                     SHL ECX,0x1
0076161C  2B D1                     SUB EDX,ECX
0076161E  8B 4E C0                  MOV ECX,dword ptr [ESI + -0x40]
00761621  0F AF 4B C0               IMUL ECX,dword ptr [EBX + -0x40]
00761625  8D 1C CD 00 00 00 00      LEA EBX,[ECX*0x8 + 0x0]
0076162C  2B D9                     SUB EBX,ECX
0076162E  8D 1C 99                  LEA EBX,[ECX + EBX*0x4]
00761631  C1 E3 08                  SHL EBX,0x8
00761634  2B D9                     SUB EBX,ECX
00761636  8D 0C 9A                  LEA ECX,[EDX + EBX*0x4]
00761639  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0076163C  8B 16                     MOV EDX,dword ptr [ESI]
0076163E  0F AF 13                  IMUL EDX,dword ptr [EBX]
00761641  69 D2 BA 28 00 00         IMUL EDX,EDX,0x28ba
00761647  2B CA                     SUB ECX,EDX
00761649  8D 94 01 00 10 00 00      LEA EDX,[ECX + EAX*0x1 + 0x1000]
00761650  2B C1                     SUB EAX,ECX
00761652  C1 FA 0D                  SAR EDX,0xd
00761655  05 00 10 00 00            ADD EAX,0x1000
0076165A  89 17                     MOV dword ptr [EDI],EDX
0076165C  C1 F8 0D                  SAR EAX,0xd
LAB_0076165f:
0076165F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00761662  89 47 20                  MOV dword ptr [EDI + 0x20],EAX
00761665  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_00761668:
00761668  83 C1 04                  ADD ECX,0x4
0076166B  83 C6 04                  ADD ESI,0x4
0076166E  83 C7 04                  ADD EDI,0x4
00761671  48                        DEC EAX
00761672  85 C0                     TEST EAX,EAX
00761674  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
00761677  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0076167A  0F 8F 0F FF FF FF         JG 0x0076158f
00761680  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00761683  8D 7D B8                  LEA EDI,[EBP + -0x48]
00761686  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00761689  C7 45 10 02 00 00 00      MOV dword ptr [EBP + 0x10],0x2
LAB_00761690:
00761690  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00761693  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00761696  8B 77 04                  MOV ESI,dword ptr [EDI + 0x4]
00761699  8B 5F 14                  MOV EBX,dword ptr [EDI + 0x14]
0076169C  8B 11                     MOV EDX,dword ptr [ECX]
0076169E  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
007616A1  03 C2                     ADD EAX,EDX
007616A3  8B 57 1C                  MOV EDX,dword ptr [EDI + 0x1c]
007616A6  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007616A9  8B C6                     MOV EAX,ESI
007616AB  0B C1                     OR EAX,ECX
007616AD  0B C3                     OR EAX,EBX
007616AF  0B C2                     OR EAX,EDX
007616B1  75 1E                     JNZ 0x007616d1
007616B3  8B 0F                     MOV ECX,dword ptr [EDI]
007616B5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007616B8  83 C1 10                  ADD ECX,0x10
007616BB  C1 F9 05                  SAR ECX,0x5
007616BE  81 E1 FF 03 00 00         AND ECX,0x3ff
007616C4  8A 04 11                  MOV AL,byte ptr [ECX + EDX*0x1]
007616C7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007616CA  88 01                     MOV byte ptr [ECX],AL
007616CC  88 41 01                  MOV byte ptr [ECX + 0x1],AL
007616CF  EB 79                     JMP 0x0076174a
LAB_007616d1:
007616D1  69 C9 BA 28 00 00         IMUL ECX,ECX,0x28ba
007616D7  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
007616DA  8B CB                     MOV ECX,EBX
007616DC  C1 E1 07                  SHL ECX,0x7
007616DF  03 CB                     ADD ECX,EBX
007616E1  8B 07                     MOV EAX,dword ptr [EDI]
007616E3  C1 E0 0F                  SHL EAX,0xf
007616E6  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
007616E9  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
007616EC  8D 0C 4B                  LEA ECX,[EBX + ECX*0x2]
007616EF  8B D9                     MOV EBX,ECX
007616F1  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007616F4  2B D9                     SUB EBX,ECX
007616F6  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
007616F9  8D 0C CA                  LEA ECX,[EDX + ECX*0x8]
007616FC  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
007616FF  8D 14 CA                  LEA EDX,[EDX + ECX*0x8]
00761702  8D 0C F5 00 00 00 00      LEA ECX,[ESI*0x8 + 0x0]
00761709  D1 E2                     SHL EDX,0x1
0076170B  2B CE                     SUB ECX,ESI
0076170D  2B DA                     SUB EBX,EDX
0076170F  8D 14 8E                  LEA EDX,[ESI + ECX*0x4]
00761712  C1 E2 08                  SHL EDX,0x8
00761715  2B D6                     SUB EDX,ESI
00761717  8D 0C 93                  LEA ECX,[EBX + EDX*0x4]
0076171A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0076171D  8D B4 01 00 00 08 00      LEA ESI,[ECX + EAX*0x1 + 0x80000]
00761724  2B C1                     SUB EAX,ECX
00761726  C1 FE 14                  SAR ESI,0x14
00761729  81 E6 FF 03 00 00         AND ESI,0x3ff
0076172F  05 00 00 08 00            ADD EAX,0x80000
00761734  C1 F8 14                  SAR EAX,0x14
00761737  8A 1C 16                  MOV BL,byte ptr [ESI + EDX*0x1]
0076173A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0076173D  25 FF 03 00 00            AND EAX,0x3ff
00761742  88 1E                     MOV byte ptr [ESI],BL
00761744  8A 04 10                  MOV AL,byte ptr [EAX + EDX*0x1]
00761747  88 46 01                  MOV byte ptr [ESI + 0x1],AL
LAB_0076174a:
0076174A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0076174D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00761750  83 C7 20                  ADD EDI,0x20
00761753  83 C1 04                  ADD ECX,0x4
00761756  48                        DEC EAX
00761757  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0076175A  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0076175D  0F 85 2D FF FF FF         JNZ 0x00761690
00761763  5F                        POP EDI
00761764  5E                        POP ESI
00761765  5B                        POP EBX
00761766  8B E5                     MOV ESP,EBP
00761768  5D                        POP EBP
00761769  C2 14 00                  RET 0x14
