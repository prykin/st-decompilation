SettMapSTy::PrepPlList:
005D5160  55                        PUSH EBP
005D5161  8B EC                     MOV EBP,ESP
005D5163  81 EC B4 00 00 00         SUB ESP,0xb4
005D5169  A0 C6 87 80 00            MOV AL,[0x008087c6]
005D516E  53                        PUSH EBX
005D516F  56                        PUSH ESI
005D5170  88 81 1C 21 00 00         MOV byte ptr [ECX + 0x211c],AL
005D5176  57                        PUSH EDI
005D5177  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D517A  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
005D5180  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
005D5186  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
005D518C  6A 00                     PUSH 0x0
005D518E  50                        PUSH EAX
005D518F  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
005D5195  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D519B  E8 50 86 15 00            CALL 0x0072d7f0
005D51A0  8B F0                     MOV ESI,EAX
005D51A2  83 C4 08                  ADD ESP,0x8
005D51A5  85 F6                     TEST ESI,ESI
005D51A7  0F 85 99 02 00 00         JNZ 0x005d5446
005D51AD  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D51B0  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D51B7  75 0B                     JNZ 0x005d51c4
005D51B9  8B 8F 3F 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f3f]
005D51BF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
005D51C2  EB 09                     JMP 0x005d51cd
LAB_005d51c4:
005D51C4  8B 97 43 1F 00 00         MOV EDX,dword ptr [EDI + 0x1f43]
005D51CA  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
LAB_005d51cd:
005D51CD  8B 8F 84 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f84]
005D51D3  85 C9                     TEST ECX,ECX
005D51D5  74 47                     JZ 0x005d521e
005D51D7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D51DA  33 F6                     XOR ESI,ESI
005D51DC  85 C0                     TEST EAX,EAX
005D51DE  7E 32                     JLE 0x005d5212
005D51E0  3B F0                     CMP ESI,EAX
LAB_005d51e2:
005D51E2  73 0D                     JNC 0x005d51f1
005D51E4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D51E7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
005D51EA  0F AF C6                  IMUL EAX,ESI
005D51ED  03 C2                     ADD EAX,EDX
005D51EF  EB 02                     JMP 0x005d51f3
LAB_005d51f1:
005D51F1  33 C0                     XOR EAX,EAX
LAB_005d51f3:
005D51F3  85 C0                     TEST EAX,EAX
005D51F5  74 0D                     JZ 0x005d5204
005D51F7  8B 40 50                  MOV EAX,dword ptr [EAX + 0x50]
005D51FA  85 C0                     TEST EAX,EAX
005D51FC  74 06                     JZ 0x005d5204
005D51FE  50                        PUSH EAX
005D51FF  E8 0C 8F 0D 00            CALL 0x006ae110
LAB_005d5204:
005D5204  8B 8F 84 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f84]
005D520A  46                        INC ESI
005D520B  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
005D520E  3B F0                     CMP ESI,EAX
005D5210  7C D0                     JL 0x005d51e2
LAB_005d5212:
005D5212  8B 87 84 1F 00 00         MOV EAX,dword ptr [EDI + 0x1f84]
005D5218  50                        PUSH EAX
005D5219  E8 F2 8E 0D 00            CALL 0x006ae110
LAB_005d521e:
005D521E  6A 08                     PUSH 0x8
005D5220  6A 60                     PUSH 0x60
005D5222  6A 08                     PUSH 0x8
005D5224  6A 00                     PUSH 0x0
005D5226  E8 65 90 0D 00            CALL 0x006ae290
005D522B  BB E8 87 80 00            MOV EBX,0x8087e8
005D5230  89 87 84 1F 00 00         MOV dword ptr [EDI + 0x1f84],EAX
005D5236  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_005d5239:
005D5239  8A 43 01                  MOV AL,byte ptr [EBX + 0x1]
005D523C  3C FF                     CMP AL,0xff
005D523E  0F 84 5F 01 00 00         JZ 0x005d53a3
005D5244  8B 0D D1 7D 80 00         MOV ECX,dword ptr [0x00807dd1]
005D524A  C6 45 90 01               MOV byte ptr [EBP + -0x70],0x1
005D524E  81 E1 00 00 FF FF         AND ECX,0xffff0000
005D5254  C6 45 91 01               MOV byte ptr [EBP + -0x6f],0x1
005D5258  81 F9 00 00 DD D0         CMP ECX,0xd0dd0000
005D525E  88 45 92                  MOV byte ptr [EBP + -0x6e],AL
005D5261  75 0B                     JNZ 0x005d526e
005D5263  80 3B 03                  CMP byte ptr [EBX],0x3
005D5266  75 06                     JNZ 0x005d526e
005D5268  C6 45 93 01               MOV byte ptr [EBP + -0x6d],0x1
005D526C  EB 05                     JMP 0x005d5273
LAB_005d526e:
005D526E  8A 13                     MOV DL,byte ptr [EBX]
005D5270  88 55 93                  MOV byte ptr [EBP + -0x6d],DL
LAB_005d5273:
005D5273  80 BF 26 1E 00 00 02      CMP byte ptr [EDI + 0x1e26],0x2
005D527A  75 16                     JNZ 0x005d5292
005D527C  8B 45 92                  MOV EAX,dword ptr [EBP + -0x6e]
005D527F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005D5282  25 FF 00 00 00            AND EAX,0xff
005D5287  6A FF                     PUSH -0x1
005D5289  50                        PUSH EAX
005D528A  51                        PUSH ECX
005D528B  E8 DA F3 E2 FF            CALL 0x0040466a
005D5290  EB 19                     JMP 0x005d52ab
LAB_005d5292:
005D5292  8B 45 93                  MOV EAX,dword ptr [EBP + -0x6d]
005D5295  8B 15 5C 99 80 00         MOV EDX,dword ptr [0x0080995c]
005D529B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005D529E  25 FF 00 00 00            AND EAX,0xff
005D52A3  52                        PUSH EDX
005D52A4  50                        PUSH EAX
005D52A5  51                        PUSH ECX
005D52A6  E8 99 EC E2 FF            CALL 0x00403f44
LAB_005d52ab:
005D52AB  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005D52AE  BF DD 7D 80 00            MOV EDI,0x807ddd
005D52B3  83 C9 FF                  OR ECX,0xffffffff
005D52B6  33 C0                     XOR EAX,EAX
005D52B8  83 C4 0C                  ADD ESP,0xc
005D52BB  8D 55 9A                  LEA EDX,[EBP + -0x66]
005D52BE  F2 AE                     SCASB.REPNE ES:EDI
005D52C0  F7 D1                     NOT ECX
005D52C2  2B F9                     SUB EDI,ECX
005D52C4  8B C1                     MOV EAX,ECX
005D52C6  8B F7                     MOV ESI,EDI
005D52C8  8B FA                     MOV EDI,EDX
005D52CA  C1 E9 02                  SHR ECX,0x2
005D52CD  F3 A5                     MOVSD.REP ES:EDI,ESI
005D52CF  8B C8                     MOV ECX,EAX
005D52D1  8A 43 DF                  MOV AL,byte ptr [EBX + -0x21]
005D52D4  83 E1 03                  AND ECX,0x3
005D52D7  84 C0                     TEST AL,AL
005D52D9  F3 A4                     MOVSB.REP ES:EDI,ESI
005D52DB  75 06                     JNZ 0x005d52e3
005D52DD  C6 45 94 01               MOV byte ptr [EBP + -0x6c],0x1
005D52E1  EB 7E                     JMP 0x005d5361
LAB_005d52e3:
005D52E3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D52E6  C6 45 94 04               MOV byte ptr [EBP + -0x6c],0x4
005D52EA  C6 45 95 00               MOV byte ptr [EBP + -0x6b],0x0
005D52EE  80 B9 26 1E 00 00 02      CMP byte ptr [ECX + 0x1e26],0x2
005D52F5  75 6A                     JNZ 0x005d5361
005D52F7  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005D52FA  33 D2                     XOR EDX,EDX
005D52FC  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
005D52FF  85 FF                     TEST EDI,EDI
005D5301  7E 5E                     JLE 0x005d5361
005D5303  83 C3 E0                  ADD EBX,-0x20
005D5306  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005D5309  EB 03                     JMP 0x005d530e
LAB_005d530b:
005D530B  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_005d530e:
005D530E  3B D7                     CMP EDX,EDI
005D5310  73 0D                     JNC 0x005d531f
005D5312  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D5315  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
005D5318  0F AF C2                  IMUL EAX,EDX
005D531B  03 C6                     ADD EAX,ESI
005D531D  EB 02                     JMP 0x005d5321
LAB_005d531f:
005D531F  33 C0                     XOR EAX,EAX
LAB_005d5321:
005D5321  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
005D5324  83 C0 4C                  ADD EAX,0x4c
LAB_005d5327:
005D5327  8A 18                     MOV BL,byte ptr [EAX]
005D5329  8A CB                     MOV CL,BL
005D532B  3A 1E                     CMP BL,byte ptr [ESI]
005D532D  75 1C                     JNZ 0x005d534b
005D532F  84 C9                     TEST CL,CL
005D5331  74 14                     JZ 0x005d5347
005D5333  8A 58 01                  MOV BL,byte ptr [EAX + 0x1]
005D5336  8A CB                     MOV CL,BL
005D5338  3A 5E 01                  CMP BL,byte ptr [ESI + 0x1]
005D533B  75 0E                     JNZ 0x005d534b
005D533D  83 C0 02                  ADD EAX,0x2
005D5340  83 C6 02                  ADD ESI,0x2
005D5343  84 C9                     TEST CL,CL
005D5345  75 E0                     JNZ 0x005d5327
LAB_005d5347:
005D5347  33 C0                     XOR EAX,EAX
005D5349  EB 05                     JMP 0x005d5350
LAB_005d534b:
005D534B  1B C0                     SBB EAX,EAX
005D534D  83 D8 FF                  SBB EAX,-0x1
LAB_005d5350:
005D5350  85 C0                     TEST EAX,EAX
005D5352  74 07                     JZ 0x005d535b
005D5354  42                        INC EDX
005D5355  3B D7                     CMP EDX,EDI
005D5357  7C B2                     JL 0x005d530b
005D5359  EB 03                     JMP 0x005d535e
LAB_005d535b:
005D535B  88 55 95                  MOV byte ptr [EBP + -0x6b],DL
LAB_005d535e:
005D535E  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_005d5361:
005D5361  8B 15 7F 87 80 00         MOV EDX,dword ptr [0x0080877f]
005D5367  8A 43 02                  MOV AL,byte ptr [EBX + 0x2]
005D536A  8B 4B 03                  MOV ECX,dword ptr [EBX + 0x3]
005D536D  89 55 96                  MOV dword ptr [EBP + -0x6a],EDX
005D5370  8B 53 07                  MOV EDX,dword ptr [EBX + 0x7]
005D5373  88 45 DA                  MOV byte ptr [EBP + -0x26],AL
005D5376  8B 43 0B                  MOV EAX,dword ptr [EBX + 0xb]
005D5379  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
005D537C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005D537F  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
005D5382  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005D5385  8D 4D 90                  LEA ECX,[EBP + -0x70]
005D5388  8B 82 84 1F 00 00         MOV EAX,dword ptr [EDX + 0x1f84]
005D538E  51                        PUSH ECX
005D538F  50                        PUSH EAX
005D5390  C7 45 DB 00 00 00 00      MOV dword ptr [EBP + -0x25],0x0
005D5397  C6 45 DF 01               MOV byte ptr [EBP + -0x21],0x1
005D539B  E8 20 8E 0D 00            CALL 0x006ae1c0
005D53A0  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_005d53a3:
005D53A3  83 C3 51                  ADD EBX,0x51
005D53A6  81 FB 70 8A 80 00         CMP EBX,0x808a70
005D53AC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
005D53AF  0F 8C 84 FE FF FF         JL 0x005d5239
005D53B5  8B 97 84 1F 00 00         MOV EDX,dword ptr [EDI + 0x1f84]
005D53BB  33 C9                     XOR ECX,ECX
005D53BD  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
005D53C0  85 F6                     TEST ESI,ESI
005D53C2  7E 62                     JLE 0x005d5426
005D53C4  3B CE                     CMP ECX,ESI
LAB_005d53c6:
005D53C6  73 0D                     JNC 0x005d53d5
005D53C8  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
005D53CB  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
005D53CE  0F AF C1                  IMUL EAX,ECX
005D53D1  03 C3                     ADD EAX,EBX
005D53D3  EB 02                     JMP 0x005d53d7
LAB_005d53d5:
005D53D5  33 C0                     XOR EAX,EAX
LAB_005d53d7:
005D53D7  85 C0                     TEST EAX,EAX
005D53D9  74 06                     JZ 0x005d53e1
005D53DB  80 78 04 01               CMP byte ptr [EAX + 0x4],0x1
005D53DF  74 07                     JZ 0x005d53e8
LAB_005d53e1:
005D53E1  41                        INC ECX
005D53E2  3B CE                     CMP ECX,ESI
005D53E4  7C E0                     JL 0x005d53c6
005D53E6  EB 3E                     JMP 0x005d5426
LAB_005d53e8:
005D53E8  8A 48 02                  MOV CL,byte ptr [EAX + 0x2]
005D53EB  C6 40 04 02               MOV byte ptr [EAX + 0x4],0x2
005D53EF  88 0D 4D 87 80 00         MOV byte ptr [0x0080874d],CL
005D53F5  8A 50 03                  MOV DL,byte ptr [EAX + 0x3]
005D53F8  88 15 4E 87 80 00         MOV byte ptr [0x0080874e],DL
005D53FE  8D 50 0A                  LEA EDX,[EAX + 0xa]
005D5401  BF DD 7D 80 00            MOV EDI,0x807ddd
005D5406  83 C9 FF                  OR ECX,0xffffffff
005D5409  33 C0                     XOR EAX,EAX
005D540B  F2 AE                     SCASB.REPNE ES:EDI
005D540D  F7 D1                     NOT ECX
005D540F  2B F9                     SUB EDI,ECX
005D5411  8B C1                     MOV EAX,ECX
005D5413  8B F7                     MOV ESI,EDI
005D5415  8B FA                     MOV EDI,EDX
005D5417  C1 E9 02                  SHR ECX,0x2
005D541A  F3 A5                     MOVSD.REP ES:EDI,ESI
005D541C  8B C8                     MOV ECX,EAX
005D541E  83 E1 03                  AND ECX,0x3
005D5421  F3 A4                     MOVSB.REP ES:EDI,ESI
005D5423  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
LAB_005d5426:
005D5426  8B CF                     MOV ECX,EDI
005D5428  E8 6D D6 E2 FF            CALL 0x00402a9a
005D542D  8B 17                     MOV EDX,dword ptr [EDI]
005D542F  8B CF                     MOV ECX,EDI
005D5431  FF 52 20                  CALL dword ptr [EDX + 0x20]
005D5434  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
005D543A  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005D543F  5F                        POP EDI
005D5440  5E                        POP ESI
005D5441  5B                        POP EBX
005D5442  8B E5                     MOV ESP,EBP
005D5444  5D                        POP EBP
005D5445  C3                        RET
LAB_005d5446:
005D5446  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
005D544C  68 8C D5 7C 00            PUSH 0x7cd58c
005D5451  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D5456  56                        PUSH ESI
005D5457  6A 00                     PUSH 0x0
005D5459  68 86 00 00 00            PUSH 0x86
005D545E  68 44 D5 7C 00            PUSH 0x7cd544
005D5463  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D5469  E8 62 80 0D 00            CALL 0x006ad4d0
005D546E  83 C4 18                  ADD ESP,0x18
005D5471  85 C0                     TEST EAX,EAX
005D5473  74 01                     JZ 0x005d5476
005D5475  CC                        INT3
LAB_005d5476:
005D5476  68 86 00 00 00            PUSH 0x86
005D547B  68 44 D5 7C 00            PUSH 0x7cd544
005D5480  6A 00                     PUSH 0x0
005D5482  56                        PUSH ESI
005D5483  E8 B8 09 0D 00            CALL 0x006a5e40
005D5488  5F                        POP EDI
005D5489  5E                        POP ESI
005D548A  5B                        POP EBX
005D548B  8B E5                     MOV ESP,EBP
005D548D  5D                        POP EBP
005D548E  C3                        RET
