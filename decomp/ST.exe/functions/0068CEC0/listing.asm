FUN_0068cec0:
0068CEC0  55                        PUSH EBP
0068CEC1  8B EC                     MOV EBP,ESP
0068CEC3  B8 B8 10 00 00            MOV EAX,0x10b8
0068CEC8  E8 73 0B 0A 00            CALL 0x0072da40
0068CECD  53                        PUSH EBX
0068CECE  B8 B4 88 84 00            MOV EAX,0x8488b4
0068CED3  33 DB                     XOR EBX,EBX
0068CED5  83 C9 FF                  OR ECX,0xffffffff
0068CED8  56                        PUSH ESI
0068CED9  57                        PUSH EDI
0068CEDA  85 C0                     TEST EAX,EAX
0068CEDC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0068CEDF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0068CEE2  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
0068CEE5  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0068CEE8  74 28                     JZ 0x0068cf12
0068CEEA  BA A0 16 80 00            MOV EDX,0x8016a0
0068CEEF  85 D2                     TEST EDX,EDX
0068CEF1  74 1F                     JZ 0x0068cf12
0068CEF3  8B FA                     MOV EDI,EDX
0068CEF5  33 C0                     XOR EAX,EAX
0068CEF7  F2 AE                     SCASB.REPNE ES:EDI
0068CEF9  F7 D1                     NOT ECX
0068CEFB  2B F9                     SUB EDI,ECX
0068CEFD  8B C1                     MOV EAX,ECX
0068CEFF  8B F7                     MOV ESI,EDI
0068CF01  BF B4 88 84 00            MOV EDI,0x8488b4
0068CF06  C1 E9 02                  SHR ECX,0x2
0068CF09  F3 A5                     MOVSD.REP ES:EDI,ESI
0068CF0B  8B C8                     MOV ECX,EAX
0068CF0D  83 E1 03                  AND ECX,0x3
0068CF10  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068cf12:
0068CF12  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0068CF18  8D 85 50 FF FF FF         LEA EAX,[EBP + 0xffffff50]
0068CF1E  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0068CF24  53                        PUSH EBX
0068CF25  50                        PUSH EAX
0068CF26  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
0068CF2C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068CF32  E8 B9 08 0A 00            CALL 0x0072d7f0
0068CF37  8B F0                     MOV ESI,EAX
0068CF39  83 C4 08                  ADD ESP,0x8
0068CF3C  3B F3                     CMP ESI,EBX
0068CF3E  0F 85 AE 08 00 00         JNZ 0x0068d7f2
0068CF44  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0068CF47  3B F3                     CMP ESI,EBX
0068CF49  75 18                     JNZ 0x0068cf63
0068CF4B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068CF51  68 39 0A 00 00            PUSH 0xa39
0068CF56  68 04 56 7D 00            PUSH 0x7d5604
0068CF5B  51                        PUSH ECX
0068CF5C  6A FA                     PUSH -0x6
0068CF5E  E8 DD 8E 01 00            CALL 0x006a5e40
LAB_0068cf63:
0068CF63  68 A8 3F 7D 00            PUSH 0x7d3fa8
0068CF68  56                        PUSH ESI
0068CF69  E8 B8 74 D7 FF            CALL 0x00404426
0068CF6E  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
0068CF74  8D 4D 94                  LEA ECX,[EBP + -0x6c]
0068CF77  8D 45 90                  LEA EAX,[EBP + -0x70]
0068CF7A  53                        PUSH EBX
0068CF7B  51                        PUSH ECX
0068CF7C  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
0068CF7F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068CF84  E8 67 08 0A 00            CALL 0x0072d7f0
0068CF89  8B D0                     MOV EDX,EAX
0068CF8B  83 C4 08                  ADD ESP,0x8
0068CF8E  3B D3                     CMP EDX,EBX
0068CF90  0F 85 62 07 00 00         JNZ 0x0068d6f8
0068CF96  6A 01                     PUSH 0x1
0068CF98  E8 65 57 D7 FF            CALL 0x00402702
0068CF9D  6A 01                     PUSH 0x1
0068CF9F  E8 A0 79 D7 FF            CALL 0x00404944
0068CFA4  53                        PUSH EBX
0068CFA5  E8 CD 5F D7 FF            CALL 0x00402f77
0068CFAA  53                        PUSH EBX
0068CFAB  E8 4C 44 D7 FF            CALL 0x004013fc
0068CFB0  6A 01                     PUSH 0x1
0068CFB2  E8 D6 5D D7 FF            CALL 0x00402d8d
0068CFB7  6A 01                     PUSH 0x1
0068CFB9  E8 13 8D D7 FF            CALL 0x00405cd1
0068CFBE  68 78 3F 7D 00            PUSH 0x7d3f78
0068CFC3  E8 80 61 D7 FF            CALL 0x00403148
0068CFC8  E8 72 79 D7 FF            CALL 0x0040493f
0068CFCD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0068CFD0  3B F3                     CMP ESI,EBX
0068CFD2  75 18                     JNZ 0x0068cfec
0068CFD4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068CFDA  68 55 0A 00 00            PUSH 0xa55
0068CFDF  68 04 56 7D 00            PUSH 0x7d5604
0068CFE4  52                        PUSH EDX
0068CFE5  6A CC                     PUSH -0x34
0068CFE7  E8 54 8E 01 00            CALL 0x006a5e40
LAB_0068cfec:
0068CFEC  53                        PUSH EBX
0068CFED  56                        PUSH ESI
0068CFEE  68 74 56 7D 00            PUSH 0x7d5674
0068CFF3  E8 48 5F D7 FF            CALL 0x00402f40
0068CFF8  83 C4 0C                  ADD ESP,0xc
0068CFFB  85 C0                     TEST EAX,EAX
0068CFFD  75 17                     JNZ 0x0068d016
0068CFFF  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068D004  68 56 0A 00 00            PUSH 0xa56
0068D009  68 04 56 7D 00            PUSH 0x7d5604
0068D00E  50                        PUSH EAX
0068D00F  6A FE                     PUSH -0x2
0068D011  E8 2A 8E 01 00            CALL 0x006a5e40
LAB_0068d016:
0068D016  8D 8E 04 01 00 00         LEA ECX,[ESI + 0x104]
0068D01C  53                        PUSH EBX
0068D01D  51                        PUSH ECX
0068D01E  68 68 56 7D 00            PUSH 0x7d5668
0068D023  E8 18 5F D7 FF            CALL 0x00402f40
0068D028  83 C4 0C                  ADD ESP,0xc
0068D02B  85 C0                     TEST EAX,EAX
0068D02D  75 18                     JNZ 0x0068d047
0068D02F  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D035  68 57 0A 00 00            PUSH 0xa57
0068D03A  68 04 56 7D 00            PUSH 0x7d5604
0068D03F  52                        PUSH EDX
0068D040  6A FE                     PUSH -0x2
0068D042  E8 F9 8D 01 00            CALL 0x006a5e40
LAB_0068d047:
0068D047  8D 86 08 02 00 00         LEA EAX,[ESI + 0x208]
0068D04D  53                        PUSH EBX
0068D04E  50                        PUSH EAX
0068D04F  68 58 56 7D 00            PUSH 0x7d5658
0068D054  E8 E7 5E D7 FF            CALL 0x00402f40
0068D059  83 C4 0C                  ADD ESP,0xc
0068D05C  85 C0                     TEST EAX,EAX
0068D05E  75 18                     JNZ 0x0068d078
0068D060  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068D066  68 58 0A 00 00            PUSH 0xa58
0068D06B  68 04 56 7D 00            PUSH 0x7d5604
0068D070  51                        PUSH ECX
0068D071  6A FE                     PUSH -0x2
0068D073  E8 C8 8D 01 00            CALL 0x006a5e40
LAB_0068d078:
0068D078  8B 96 0C 03 00 00         MOV EDX,dword ptr [ESI + 0x30c]
0068D07E  52                        PUSH EDX
0068D07F  68 4C 56 7D 00            PUSH 0x7d564c
0068D084  E8 96 7A D7 FF            CALL 0x00404b1f
0068D089  83 C4 08                  ADD ESP,0x8
0068D08C  85 C0                     TEST EAX,EAX
0068D08E  7D 17                     JGE 0x0068d0a7
0068D090  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068D095  68 59 0A 00 00            PUSH 0xa59
0068D09A  68 04 56 7D 00            PUSH 0x7d5604
0068D09F  50                        PUSH EAX
0068D0A0  6A FE                     PUSH -0x2
0068D0A2  E8 99 8D 01 00            CALL 0x006a5e40
LAB_0068d0a7:
0068D0A7  8B 8E 10 03 00 00         MOV ECX,dword ptr [ESI + 0x310]
0068D0AD  51                        PUSH ECX
0068D0AE  68 40 56 7D 00            PUSH 0x7d5640
0068D0B3  E8 67 7A D7 FF            CALL 0x00404b1f
0068D0B8  83 C4 08                  ADD ESP,0x8
0068D0BB  85 C0                     TEST EAX,EAX
0068D0BD  7D 18                     JGE 0x0068d0d7
0068D0BF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D0C5  68 5A 0A 00 00            PUSH 0xa5a
0068D0CA  68 04 56 7D 00            PUSH 0x7d5604
0068D0CF  52                        PUSH EDX
0068D0D0  6A FE                     PUSH -0x2
0068D0D2  E8 69 8D 01 00            CALL 0x006a5e40
LAB_0068d0d7:
0068D0D7  8B 86 14 03 00 00         MOV EAX,dword ptr [ESI + 0x314]
0068D0DD  50                        PUSH EAX
0068D0DE  68 34 56 7D 00            PUSH 0x7d5634
0068D0E3  E8 37 7A D7 FF            CALL 0x00404b1f
0068D0E8  83 C4 08                  ADD ESP,0x8
0068D0EB  85 C0                     TEST EAX,EAX
0068D0ED  7D 18                     JGE 0x0068d107
0068D0EF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068D0F5  68 5B 0A 00 00            PUSH 0xa5b
0068D0FA  68 04 56 7D 00            PUSH 0x7d5604
0068D0FF  51                        PUSH ECX
0068D100  6A FE                     PUSH -0x2
0068D102  E8 39 8D 01 00            CALL 0x006a5e40
LAB_0068d107:
0068D107  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0068D10A  53                        PUSH EBX
0068D10B  68 8C 86 84 00            PUSH 0x84868c
0068D110  68 04 01 00 00            PUSH 0x104
0068D115  52                        PUSH EDX
0068D116  FF 15 A8 BB 85 00         CALL dword ptr [0x0085bba8]
0068D11C  68 90 19 81 00            PUSH 0x811990
0068D121  68 8C 85 84 00            PUSH 0x84858c
0068D126  68 90 87 84 00            PUSH 0x848790
0068D12B  68 A8 78 84 00            PUSH 0x8478a8
0068D130  68 8C 86 84 00            PUSH 0x84868c
0068D135  E8 F6 15 0A 00            CALL 0x0072e730
0068D13A  53                        PUSH EBX
0068D13B  53                        PUSH EBX
0068D13C  68 90 87 84 00            PUSH 0x848790
0068D141  68 A8 78 84 00            PUSH 0x8478a8
0068D146  68 8C 86 84 00            PUSH 0x84868c
0068D14B  E8 C0 1F 0A 00            CALL 0x0072f110
0068D150  53                        PUSH EBX
0068D151  68 8C 86 84 00            PUSH 0x84868c
0068D156  68 F4 55 7D 00            PUSH 0x7d55f4
0068D15B  E8 E0 5D D7 FF            CALL 0x00402f40
0068D160  83 C4 34                  ADD ESP,0x34
0068D163  85 C0                     TEST EAX,EAX
0068D165  75 17                     JNZ 0x0068d17e
0068D167  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068D16C  68 5F 0A 00 00            PUSH 0xa5f
0068D171  68 04 56 7D 00            PUSH 0x7d5604
0068D176  50                        PUSH EAX
0068D177  6A FE                     PUSH -0x2
0068D179  E8 C2 8C 01 00            CALL 0x006a5e40
LAB_0068d17e:
0068D17E  8B 0D 24 8A 84 00         MOV ECX,dword ptr [0x00848a24]
0068D184  53                        PUSH EBX
0068D185  68 8C 86 84 00            PUSH 0x84868c
0068D18A  51                        PUSH ECX
0068D18B  E8 15 49 D7 FF            CALL 0x00401aa5
0068D190  83 C4 04                  ADD ESP,0x4
0068D193  50                        PUSH EAX
0068D194  E8 A7 5D D7 FF            CALL 0x00402f40
0068D199  83 C4 0C                  ADD ESP,0xc
0068D19C  85 C0                     TEST EAX,EAX
0068D19E  75 18                     JNZ 0x0068d1b8
0068D1A0  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D1A6  68 60 0A 00 00            PUSH 0xa60
0068D1AB  68 04 56 7D 00            PUSH 0x7d5604
0068D1B0  52                        PUSH EDX
0068D1B1  6A FE                     PUSH -0x2
0068D1B3  E8 88 8C 01 00            CALL 0x006a5e40
LAB_0068d1b8:
0068D1B8  6A 32                     PUSH 0x32
0068D1BA  6A 32                     PUSH 0x32
0068D1BC  53                        PUSH EBX
0068D1BD  E8 2E 83 02 00            CALL 0x006b54f0
0068D1C2  8B F0                     MOV ESI,EAX
0068D1C4  68 B4 56 7D 00            PUSH 0x7d56b4
0068D1C9  56                        PUSH ESI
0068D1CA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0068D1CD  E8 CE 88 02 00            CALL 0x006b5aa0
0068D1D2  68 88 56 7D 00            PUSH 0x7d5688
0068D1D7  56                        PUSH ESI
0068D1D8  E8 C3 88 02 00            CALL 0x006b5aa0
0068D1DD  68 A0 16 80 00            PUSH 0x8016a0
0068D1E2  56                        PUSH ESI
0068D1E3  E8 B8 88 02 00            CALL 0x006b5aa0
0068D1E8  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
FUN_0068cec0::cf_continue_loop_0068D1EB:
0068D1EB  E8 8F 4B D7 FF            CALL 0x00401d7f
0068D1F0  33 F6                     XOR ESI,ESI
0068D1F2  3B C6                     CMP EAX,ESI
0068D1F4  7D 17                     JGE 0x0068d20d
0068D1F6  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068D1FC  68 68 0A 00 00            PUSH 0xa68
0068D201  68 04 56 7D 00            PUSH 0x7d5604
0068D206  51                        PUSH ECX
0068D207  50                        PUSH EAX
0068D208  E8 33 8C 01 00            CALL 0x006a5e40
LAB_0068d20d:
0068D20D  39 75 14                  CMP dword ptr [EBP + 0x14],ESI
0068D210  0F 84 C6 00 00 00         JZ 0x0068d2dc
0068D216  8B 15 54 75 85 00         MOV EDX,dword ptr [0x00857554]
0068D21C  B9 06 00 00 00            MOV ECX,0x6
0068D221  33 C0                     XOR EAX,EAX
0068D223  8D 7D D4                  LEA EDI,[EBP + -0x2c]
0068D226  68 90 19 81 00            PUSH 0x811990
0068D22B  56                        PUSH ESI
0068D22C  F3 AB                     STOSD.REP ES:EDI
0068D22E  A1 3C 75 85 00            MOV EAX,[0x0085753c]
0068D233  56                        PUSH ESI
0068D234  56                        PUSH ESI
0068D235  50                        PUSH EAX
0068D236  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
0068D239  E8 F2 14 0A 00            CALL 0x0072e730
0068D23E  A0 90 19 81 00            MOV AL,[0x00811990]
0068D243  83 C4 14                  ADD ESP,0x14
0068D246  84 C0                     TEST AL,AL
0068D248  74 15                     JZ 0x0068d25f
0068D24A  B9 0C 79 84 00            MOV ECX,0x84790c
0068D24F  85 C9                     TEST ECX,ECX
0068D251  74 3E                     JZ 0x0068d291
0068D253  8B 3D 3C 75 85 00         MOV EDI,dword ptr [0x0085753c]
0068D259  3B FE                     CMP EDI,ESI
0068D25B  74 34                     JZ 0x0068d291
0068D25D  EB 12                     JMP 0x0068d271
LAB_0068d25f:
0068D25F  B8 0C 79 84 00            MOV EAX,0x84790c
0068D264  85 C0                     TEST EAX,EAX
0068D266  74 29                     JZ 0x0068d291
0068D268  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068D26B  3B C6                     CMP EAX,ESI
0068D26D  74 22                     JZ 0x0068d291
0068D26F  8B F8                     MOV EDI,EAX
LAB_0068d271:
0068D271  83 C9 FF                  OR ECX,0xffffffff
0068D274  33 C0                     XOR EAX,EAX
0068D276  F2 AE                     SCASB.REPNE ES:EDI
0068D278  F7 D1                     NOT ECX
0068D27A  2B F9                     SUB EDI,ECX
0068D27C  8B D1                     MOV EDX,ECX
0068D27E  8B F7                     MOV ESI,EDI
0068D280  BF 0C 79 84 00            MOV EDI,0x84790c
0068D285  C1 E9 02                  SHR ECX,0x2
0068D288  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D28A  8B CA                     MOV ECX,EDX
0068D28C  83 E1 03                  AND ECX,0x3
0068D28F  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068d291:
0068D291  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068D296  68 FE 03 00 00            PUSH 0x3fe
0068D29B  50                        PUSH EAX
0068D29C  68 0C 7D 84 00            PUSH 0x847d0c
0068D2A1  C7 45 D4 0C 79 84 00      MOV dword ptr [EBP + -0x2c],0x84790c
0068D2A8  E8 93 10 0A 00            CALL 0x0072e340
0068D2AD  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0068D2B0  C7 45 DC 0C 7D 84 00      MOV dword ptr [EBP + -0x24],0x847d0c
0068D2B7  51                        PUSH ECX
0068D2B8  FF 55 14                  CALL dword ptr [EBP + 0x14]
0068D2BB  33 F6                     XOR ESI,ESI
0068D2BD  83 C4 10                  ADD ESP,0x10
0068D2C0  3B C6                     CMP EAX,ESI
0068D2C2  74 18                     JZ 0x0068d2dc
0068D2C4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D2CA  68 74 0A 00 00            PUSH 0xa74
0068D2CF  68 04 56 7D 00            PUSH 0x7d5604
0068D2D4  52                        PUSH EDX
0068D2D5  6A 9B                     PUSH -0x65
0068D2D7  E8 64 8B 01 00            CALL 0x006a5e40
LAB_0068d2dc:
0068D2DC  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068D2E1  83 F8 1C                  CMP EAX,0x1c
0068D2E4  0F 84 C6 03 00 00         JZ 0x0068d6b0
0068D2EA  05 47 FC FF FF            ADD EAX,0xfffffc47
0068D2EF  3D 94 00 00 00            CMP EAX,0x94
0068D2F4  0F 87 67 03 00 00         JA 0x0068d661
0068D2FA  33 C9                     XOR ECX,ECX
0068D2FC  8A 88 B0 D8 68 00         MOV CL,byte ptr [EAX + 0x68d8b0]
switchD_0068d302::switchD:
0068D302  FF 24 8D 9C D8 68 00      JMP dword ptr [ECX*0x4 + 0x68d89c]
switchD_0068d302::caseD_44c:
0068D309  81 7D F8 B9 03 00 00      CMP dword ptr [EBP + -0x8],0x3b9
0068D310  0F 84 4B 03 00 00         JZ 0x0068d661
0068D316  3B DE                     CMP EBX,ESI
0068D318  7C 1B                     JL 0x0068d335
0068D31A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D320  68 7A 0A 00 00            PUSH 0xa7a
0068D325  68 04 56 7D 00            PUSH 0x7d5604
0068D32A  52                        PUSH EDX
0068D32B  68 74 FF FF FF            PUSH 0xffffff74
0068D330  E8 0B 8B 01 00            CALL 0x006a5e40
LAB_0068d335:
0068D335  8B 15 44 75 85 00         MOV EDX,dword ptr [0x00857544]
0068D33B  C6 85 48 EF FF FF 00      MOV byte ptr [EBP + 0xffffef48],0x0
0068D342  3B D6                     CMP EDX,ESI
0068D344  7E 3C                     JLE 0x0068d382
0068D346  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
LAB_0068d349:
0068D349  BF 5C 3B 7C 00            MOV EDI,0x7c3b5c
0068D34E  83 C9 FF                  OR ECX,0xffffffff
0068D351  33 C0                     XOR EAX,EAX
0068D353  8D 9D 48 EF FF FF         LEA EBX,[EBP + 0xffffef48]
0068D359  F2 AE                     SCASB.REPNE ES:EDI
0068D35B  F7 D1                     NOT ECX
0068D35D  2B F9                     SUB EDI,ECX
0068D35F  8B F7                     MOV ESI,EDI
0068D361  8B FB                     MOV EDI,EBX
0068D363  8B D9                     MOV EBX,ECX
0068D365  83 C9 FF                  OR ECX,0xffffffff
0068D368  F2 AE                     SCASB.REPNE ES:EDI
0068D36A  8B CB                     MOV ECX,EBX
0068D36C  4F                        DEC EDI
0068D36D  C1 E9 02                  SHR ECX,0x2
0068D370  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D372  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0068D375  8B CB                     MOV ECX,EBX
0068D377  83 E1 03                  AND ECX,0x3
0068D37A  48                        DEC EAX
0068D37B  F3 A4                     MOVSB.REP ES:EDI,ESI
0068D37D  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0068D380  75 C7                     JNZ 0x0068d349
LAB_0068d382:
0068D382  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
0068D388  B8 02 10 00 00            MOV EAX,0x1002
0068D38D  2B C2                     SUB EAX,EDX
0068D38F  03 D1                     ADD EDX,ECX
0068D391  50                        PUSH EAX
0068D392  52                        PUSH EDX
0068D393  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D399  52                        PUSH EDX
0068D39A  E8 B1 19 0A 00            CALL 0x0072ed50
0068D39F  8B 1D 54 75 85 00         MOV EBX,dword ptr [0x00857554]
0068D3A5  A1 44 75 85 00            MOV EAX,[0x00857544]
0068D3AA  83 C4 0C                  ADD ESP,0xc
0068D3AD  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0068D3B0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0068D3B3  C7 45 F8 4C 04 00 00      MOV dword ptr [EBP + -0x8],0x44c
0068D3BA  E9 2C FE FF FF            JMP 0x0068d1eb
switchD_0068d302::caseD_44d:
0068D3BF  81 7D F8 B9 03 00 00      CMP dword ptr [EBP + -0x8],0x3b9
0068D3C6  0F 84 95 02 00 00         JZ 0x0068d661
0068D3CC  3B DE                     CMP EBX,ESI
0068D3CE  7D 1B                     JGE 0x0068d3eb
0068D3D0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068D3D6  68 85 0A 00 00            PUSH 0xa85
0068D3DB  68 04 56 7D 00            PUSH 0x7d5604
0068D3E0  51                        PUSH ECX
0068D3E1  68 73 FF FF FF            PUSH 0xffffff73
0068D3E6  E8 55 8A 01 00            CALL 0x006a5e40
LAB_0068d3eb:
0068D3EB  39 1D 54 75 85 00         CMP dword ptr [0x00857554],EBX
0068D3F1  7E 36                     JLE 0x0068d429
0068D3F3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068D3F6  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D3FC  52                        PUSH EDX
0068D3FD  50                        PUSH EAX
0068D3FE  E8 9D 86 02 00            CALL 0x006b5aa0
0068D403  8B 0D 5C 75 85 00         MOV ECX,dword ptr [0x0085755c]
0068D409  68 00 10 00 00            PUSH 0x1000
0068D40E  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D414  51                        PUSH ECX
0068D415  52                        PUSH EDX
0068D416  E8 25 0F 0A 00            CALL 0x0072e340
0068D41B  A1 54 75 85 00            MOV EAX,[0x00857554]
0068D420  83 C4 0C                  ADD ESP,0xc
0068D423  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0068D426  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0068d429:
0068D429  8B 0D 44 75 85 00         MOV ECX,dword ptr [0x00857544]
0068D42F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0068D432  2B CA                     SUB ECX,EDX
0068D434  C6 84 0D 48 EF FF FF 00   MOV byte ptr [EBP + ECX*0x1 + 0xffffef48],0x0
0068D43C  8B 15 18 2D 7D 00         MOV EDX,dword ptr [0x007d2d18]
0068D442  52                        PUSH EDX
0068D443  E8 93 83 D7 FF            CALL 0x004057db
0068D448  8B F8                     MOV EDI,EAX
0068D44A  83 C9 FF                  OR ECX,0xffffffff
0068D44D  33 C0                     XOR EAX,EAX
0068D44F  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D455  F2 AE                     SCASB.REPNE ES:EDI
0068D457  F7 D1                     NOT ECX
0068D459  2B F9                     SUB EDI,ECX
0068D45B  8B F7                     MOV ESI,EDI
0068D45D  8B D9                     MOV EBX,ECX
0068D45F  8B FA                     MOV EDI,EDX
0068D461  83 C9 FF                  OR ECX,0xffffffff
0068D464  F2 AE                     SCASB.REPNE ES:EDI
0068D466  8B CB                     MOV ECX,EBX
0068D468  4F                        DEC EDI
0068D469  C1 E9 02                  SHR ECX,0x2
0068D46C  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D46E  8B CB                     MOV ECX,EBX
0068D470  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D476  83 E1 03                  AND ECX,0x3
0068D479  F3 A4                     MOVSB.REP ES:EDI,ESI
0068D47B  BF 84 56 7D 00            MOV EDI,0x7d5684
0068D480  83 C9 FF                  OR ECX,0xffffffff
0068D483  F2 AE                     SCASB.REPNE ES:EDI
0068D485  F7 D1                     NOT ECX
0068D487  2B F9                     SUB EDI,ECX
0068D489  8B F7                     MOV ESI,EDI
0068D48B  8B D9                     MOV EBX,ECX
0068D48D  8B FA                     MOV EDI,EDX
0068D48F  83 C9 FF                  OR ECX,0xffffffff
0068D492  F2 AE                     SCASB.REPNE ES:EDI
0068D494  8B CB                     MOV ECX,EBX
0068D496  4F                        DEC EDI
0068D497  C1 E9 02                  SHR ECX,0x2
0068D49A  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D49C  8B CB                     MOV ECX,EBX
0068D49E  8D 85 48 EF FF FF         LEA EAX,[EBP + 0xffffef48]
0068D4A4  83 E1 03                  AND ECX,0x3
0068D4A7  50                        PUSH EAX
0068D4A8  F3 A4                     MOVSB.REP ES:EDI,ESI
0068D4AA  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068D4AD  56                        PUSH ESI
0068D4AE  E8 ED 85 02 00            CALL 0x006b5aa0
0068D4B3  68 A0 16 80 00            PUSH 0x8016a0
0068D4B8  56                        PUSH ESI
0068D4B9  E8 E2 85 02 00            CALL 0x006b5aa0
0068D4BE  83 CB FF                  OR EBX,0xffffffff
0068D4C1  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0068D4C8  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0068D4CB  E9 1B FD FF FF            JMP 0x0068d1eb
switchD_0068d302::caseD_3b9:
0068D4D0  81 7D F8 4C 04 00 00      CMP dword ptr [EBP + -0x8],0x44c
0068D4D7  0F 84 84 01 00 00         JZ 0x0068d661
0068D4DD  3B DE                     CMP EBX,ESI
0068D4DF  7C 1B                     JL 0x0068d4fc
0068D4E1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0068D4E7  68 9A 0A 00 00            PUSH 0xa9a
0068D4EC  68 04 56 7D 00            PUSH 0x7d5604
0068D4F1  51                        PUSH ECX
0068D4F2  68 70 FF FF FF            PUSH 0xffffff70
0068D4F7  E8 44 89 01 00            CALL 0x006a5e40
LAB_0068d4fc:
0068D4FC  8B 15 44 75 85 00         MOV EDX,dword ptr [0x00857544]
0068D502  C6 85 48 EF FF FF 00      MOV byte ptr [EBP + 0xffffef48],0x0
0068D509  3B D6                     CMP EDX,ESI
0068D50B  7E 39                     JLE 0x0068d546
LAB_0068d50d:
0068D50D  BF 5C 3B 7C 00            MOV EDI,0x7c3b5c
0068D512  83 C9 FF                  OR ECX,0xffffffff
0068D515  33 C0                     XOR EAX,EAX
0068D517  8D 9D 48 EF FF FF         LEA EBX,[EBP + 0xffffef48]
0068D51D  F2 AE                     SCASB.REPNE ES:EDI
0068D51F  F7 D1                     NOT ECX
0068D521  2B F9                     SUB EDI,ECX
0068D523  8B F7                     MOV ESI,EDI
0068D525  8B FB                     MOV EDI,EBX
0068D527  8B D9                     MOV EBX,ECX
0068D529  83 C9 FF                  OR ECX,0xffffffff
0068D52C  F2 AE                     SCASB.REPNE ES:EDI
0068D52E  8B CB                     MOV ECX,EBX
0068D530  4F                        DEC EDI
0068D531  C1 E9 02                  SHR ECX,0x2
0068D534  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D536  8B CB                     MOV ECX,EBX
0068D538  83 E1 03                  AND ECX,0x3
0068D53B  4A                        DEC EDX
0068D53C  F3 A4                     MOVSB.REP ES:EDI,ESI
0068D53E  75 CD                     JNZ 0x0068d50d
0068D540  8B 15 44 75 85 00         MOV EDX,dword ptr [0x00857544]
LAB_0068d546:
0068D546  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068D54B  68 00 10 00 00            PUSH 0x1000
0068D550  03 D0                     ADD EDX,EAX
0068D552  8D 8D 48 EF FF FF         LEA ECX,[EBP + 0xffffef48]
0068D558  52                        PUSH EDX
0068D559  51                        PUSH ECX
0068D55A  E8 F1 17 0A 00            CALL 0x0072ed50
0068D55F  8B 1D 54 75 85 00         MOV EBX,dword ptr [0x00857554]
0068D565  8B 15 44 75 85 00         MOV EDX,dword ptr [0x00857544]
0068D56B  83 C4 0C                  ADD ESP,0xc
0068D56E  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0068D571  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0068D574  C7 45 F8 B9 03 00 00      MOV dword ptr [EBP + -0x8],0x3b9
0068D57B  E9 6B FC FF FF            JMP 0x0068d1eb
switchD_0068d302::caseD_3ba:
0068D580  81 7D F8 4C 04 00 00      CMP dword ptr [EBP + -0x8],0x44c
0068D587  0F 84 D4 00 00 00         JZ 0x0068d661
0068D58D  3B DE                     CMP EBX,ESI
0068D58F  7D 1A                     JGE 0x0068d5ab
0068D591  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0068D596  68 A5 0A 00 00            PUSH 0xaa5
0068D59B  68 04 56 7D 00            PUSH 0x7d5604
0068D5A0  50                        PUSH EAX
0068D5A1  68 71 FF FF FF            PUSH 0xffffff71
0068D5A6  E8 95 88 01 00            CALL 0x006a5e40
LAB_0068d5ab:
0068D5AB  39 1D 54 75 85 00         CMP dword ptr [0x00857554],EBX
0068D5B1  7E 36                     JLE 0x0068d5e9
0068D5B3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068D5B6  8D 8D 48 EF FF FF         LEA ECX,[EBP + 0xffffef48]
0068D5BC  51                        PUSH ECX
0068D5BD  52                        PUSH EDX
0068D5BE  E8 DD 84 02 00            CALL 0x006b5aa0
0068D5C3  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068D5C8  68 00 10 00 00            PUSH 0x1000
0068D5CD  8D 8D 48 EF FF FF         LEA ECX,[EBP + 0xffffef48]
0068D5D3  50                        PUSH EAX
0068D5D4  51                        PUSH ECX
0068D5D5  E8 66 0D 0A 00            CALL 0x0072e340
0068D5DA  8B 15 54 75 85 00         MOV EDX,dword ptr [0x00857554]
0068D5E0  83 C4 0C                  ADD ESP,0xc
0068D5E3  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0068D5E6  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
LAB_0068d5e9:
0068D5E9  A1 44 75 85 00            MOV EAX,[0x00857544]
0068D5EE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0068D5F1  2B C1                     SUB EAX,ECX
0068D5F3  C6 84 05 48 EF FF FF 00   MOV byte ptr [EBP + EAX*0x1 + 0xffffef48],0x0
0068D5FB  8B 0D 18 2D 7D 00         MOV ECX,dword ptr [0x007d2d18]
0068D601  51                        PUSH ECX
0068D602  E8 D4 81 D7 FF            CALL 0x004057db
0068D607  8B F8                     MOV EDI,EAX
0068D609  83 C9 FF                  OR ECX,0xffffffff
0068D60C  33 C0                     XOR EAX,EAX
0068D60E  8D 95 48 EF FF FF         LEA EDX,[EBP + 0xffffef48]
0068D614  F2 AE                     SCASB.REPNE ES:EDI
0068D616  F7 D1                     NOT ECX
0068D618  2B F9                     SUB EDI,ECX
0068D61A  8B F7                     MOV ESI,EDI
0068D61C  8B D9                     MOV EBX,ECX
0068D61E  8B FA                     MOV EDI,EDX
0068D620  83 C9 FF                  OR ECX,0xffffffff
0068D623  F2 AE                     SCASB.REPNE ES:EDI
0068D625  8B CB                     MOV ECX,EBX
0068D627  4F                        DEC EDI
0068D628  C1 E9 02                  SHR ECX,0x2
0068D62B  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D62D  8B CB                     MOV ECX,EBX
0068D62F  8D 85 48 EF FF FF         LEA EAX,[EBP + 0xffffef48]
0068D635  83 E1 03                  AND ECX,0x3
0068D638  50                        PUSH EAX
0068D639  F3 A4                     MOVSB.REP ES:EDI,ESI
0068D63B  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068D63E  56                        PUSH ESI
0068D63F  E8 5C 84 02 00            CALL 0x006b5aa0
0068D644  68 A0 16 80 00            PUSH 0x8016a0
0068D649  56                        PUSH ESI
0068D64A  E8 51 84 02 00            CALL 0x006b5aa0
0068D64F  83 CB FF                  OR EBX,0xffffffff
0068D652  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0068D659  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0068D65C  E9 8A FB FF FF            JMP 0x0068d1eb
switchD_0068d302::caseD_3bb:
0068D661  3B DE                     CMP EBX,ESI
0068D663  0F 8C 82 FB FF FF         JL 0x0068d1eb
0068D669  39 1D 54 75 85 00         CMP dword ptr [0x00857554],EBX
0068D66F  0F 8E 76 FB FF FF         JLE 0x0068d1eb
0068D675  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068D678  8D 8D 48 EF FF FF         LEA ECX,[EBP + 0xffffef48]
0068D67E  51                        PUSH ECX
0068D67F  52                        PUSH EDX
0068D680  E8 1B 84 02 00            CALL 0x006b5aa0
0068D685  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068D68A  68 00 10 00 00            PUSH 0x1000
0068D68F  8D 8D 48 EF FF FF         LEA ECX,[EBP + 0xffffef48]
0068D695  50                        PUSH EAX
0068D696  51                        PUSH ECX
0068D697  E8 A4 0C 0A 00            CALL 0x0072e340
0068D69C  8B 1D 54 75 85 00         MOV EBX,dword ptr [0x00857554]
0068D6A2  83 C4 0C                  ADD ESP,0xc
0068D6A5  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
0068D6A8  89 75 F0                  MOV dword ptr [EBP + -0x10],ESI
0068D6AB  E9 3B FB FF FF            JMP 0x0068d1eb
LAB_0068d6b0:
0068D6B0  3B DE                     CMP EBX,ESI
0068D6B2  7E 1B                     JLE 0x0068d6cf
0068D6B4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0068D6BA  68 C2 0A 00 00            PUSH 0xac2
0068D6BF  68 04 56 7D 00            PUSH 0x7d5604
0068D6C4  52                        PUSH EDX
0068D6C5  68 73 FF FF FF            PUSH 0xffffff73
0068D6CA  E8 71 87 01 00            CALL 0x006a5e40
LAB_0068d6cf:
0068D6CF  E8 12 67 D7 FF            CALL 0x00403de6
0068D6D4  E8 B7 76 D7 FF            CALL 0x00404d90
0068D6D9  85 C0                     TEST EAX,EAX
0068D6DB  74 09                     JZ 0x0068d6e6
LAB_0068d6dd:
0068D6DD  E8 AE 76 D7 FF            CALL 0x00404d90
0068D6E2  85 C0                     TEST EAX,EAX
0068D6E4  75 F7                     JNZ 0x0068d6dd
LAB_0068d6e6:
0068D6E6  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
0068D6E9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068D6EE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068D6F1  5F                        POP EDI
0068D6F2  5E                        POP ESI
0068D6F3  5B                        POP EBX
0068D6F4  8B E5                     MOV ESP,EBP
0068D6F6  5D                        POP EBP
0068D6F7  C3                        RET
LAB_0068d6f8:
0068D6F8  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0068D6FB  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
0068D6FE  85 DB                     TEST EBX,EBX
0068D700  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068D706  0F 84 B0 00 00 00         JZ 0x0068d7bc
0068D70C  B9 06 00 00 00            MOV ECX,0x6
0068D711  33 C0                     XOR EAX,EAX
0068D713  8B FB                     MOV EDI,EBX
0068D715  68 90 19 81 00            PUSH 0x811990
0068D71A  F3 AB                     STOSD.REP ES:EDI
0068D71C  89 13                     MOV dword ptr [EBX],EDX
0068D71E  8B 15 54 75 85 00         MOV EDX,dword ptr [0x00857554]
0068D724  50                        PUSH EAX
0068D725  50                        PUSH EAX
0068D726  89 53 08                  MOV dword ptr [EBX + 0x8],EDX
0068D729  50                        PUSH EAX
0068D72A  A1 3C 75 85 00            MOV EAX,[0x0085753c]
0068D72F  50                        PUSH EAX
0068D730  E8 FB 0F 0A 00            CALL 0x0072e730
0068D735  A0 90 19 81 00            MOV AL,[0x00811990]
0068D73A  83 C4 14                  ADD ESP,0x14
0068D73D  84 C0                     TEST AL,AL
0068D73F  74 15                     JZ 0x0068d756
0068D741  B9 0C 79 84 00            MOV ECX,0x84790c
0068D746  85 C9                     TEST ECX,ECX
0068D748  74 3C                     JZ 0x0068d786
0068D74A  8B 3D 3C 75 85 00         MOV EDI,dword ptr [0x0085753c]
0068D750  85 FF                     TEST EDI,EDI
0068D752  74 32                     JZ 0x0068d786
0068D754  EB 10                     JMP 0x0068d766
LAB_0068d756:
0068D756  B8 0C 79 84 00            MOV EAX,0x84790c
0068D75B  85 C0                     TEST EAX,EAX
0068D75D  74 27                     JZ 0x0068d786
0068D75F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068D762  85 FF                     TEST EDI,EDI
0068D764  74 20                     JZ 0x0068d786
LAB_0068d766:
0068D766  83 C9 FF                  OR ECX,0xffffffff
0068D769  33 C0                     XOR EAX,EAX
0068D76B  F2 AE                     SCASB.REPNE ES:EDI
0068D76D  F7 D1                     NOT ECX
0068D76F  2B F9                     SUB EDI,ECX
0068D771  8B D1                     MOV EDX,ECX
0068D773  8B F7                     MOV ESI,EDI
0068D775  BF 0C 79 84 00            MOV EDI,0x84790c
0068D77A  C1 E9 02                  SHR ECX,0x2
0068D77D  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D77F  8B CA                     MOV ECX,EDX
0068D781  83 E1 03                  AND ECX,0x3
0068D784  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068d786:
0068D786  C7 43 04 0C 79 84 00      MOV dword ptr [EBX + 0x4],0x84790c
0068D78D  A1 5C 75 85 00            MOV EAX,[0x0085755c]
0068D792  68 FE 03 00 00            PUSH 0x3fe
0068D797  50                        PUSH EAX
0068D798  68 0C 7D 84 00            PUSH 0x847d0c
0068D79D  E8 9E 0B 0A 00            CALL 0x0072e340
0068D7A2  C7 43 0C 0C 7D 84 00      MOV dword ptr [EBX + 0xc],0x847d0c
0068D7A9  C7 43 10 B4 88 84 00      MOV dword ptr [EBX + 0x10],0x8488b4
0068D7B0  8B 0D 44 75 85 00         MOV ECX,dword ptr [0x00857544]
0068D7B6  83 C4 0C                  ADD ESP,0xc
0068D7B9  89 4B 14                  MOV dword ptr [EBX + 0x14],ECX
LAB_0068d7bc:
0068D7BC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0068D7BF  85 C0                     TEST EAX,EAX
0068D7C1  74 06                     JZ 0x0068d7c9
0068D7C3  50                        PUSH EAX
0068D7C4  E8 A7 7D 02 00            CALL 0x006b5570
LAB_0068d7c9:
0068D7C9  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0068D7D0  E8 11 66 D7 FF            CALL 0x00403de6
0068D7D5  E8 B6 75 D7 FF            CALL 0x00404d90
0068D7DA  85 C0                     TEST EAX,EAX
0068D7DC  0F 84 B0 00 00 00         JZ 0x0068d892
LAB_0068d7e2:
0068D7E2  E8 A9 75 D7 FF            CALL 0x00404d90
0068D7E7  85 C0                     TEST EAX,EAX
0068D7E9  75 F7                     JNZ 0x0068d7e2
0068D7EB  5F                        POP EDI
0068D7EC  5E                        POP ESI
0068D7ED  5B                        POP EBX
0068D7EE  8B E5                     MOV ESP,EBP
0068D7F0  5D                        POP EBP
0068D7F1  C3                        RET
LAB_0068d7f2:
0068D7F2  8B 95 4C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff4c]
0068D7F8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068D7FE  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0068D801  3B D3                     CMP EDX,EBX
0068D803  0F 84 89 00 00 00         JZ 0x0068d892
0068D809  B9 06 00 00 00            MOV ECX,0x6
0068D80E  33 C0                     XOR EAX,EAX
0068D810  8B FA                     MOV EDI,EDX
0068D812  F3 AB                     STOSD.REP ES:EDI
0068D814  B8 0C 79 84 00            MOV EAX,0x84790c
0068D819  89 32                     MOV dword ptr [EDX],ESI
0068D81B  85 C0                     TEST EAX,EAX
0068D81D  89 5A 08                  MOV dword ptr [EDX + 0x8],EBX
0068D820  74 27                     JZ 0x0068d849
0068D822  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068D825  3B FB                     CMP EDI,EBX
0068D827  74 20                     JZ 0x0068d849
0068D829  83 C9 FF                  OR ECX,0xffffffff
0068D82C  33 C0                     XOR EAX,EAX
0068D82E  F2 AE                     SCASB.REPNE ES:EDI
0068D830  F7 D1                     NOT ECX
0068D832  2B F9                     SUB EDI,ECX
0068D834  8B C1                     MOV EAX,ECX
0068D836  8B F7                     MOV ESI,EDI
0068D838  BF 0C 79 84 00            MOV EDI,0x84790c
0068D83D  C1 E9 02                  SHR ECX,0x2
0068D840  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D842  8B C8                     MOV ECX,EAX
0068D844  83 E1 03                  AND ECX,0x3
0068D847  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068d849:
0068D849  B9 0C 7D 84 00            MOV ECX,0x847d0c
0068D84E  C7 42 04 0C 79 84 00      MOV dword ptr [EDX + 0x4],0x84790c
0068D855  85 C9                     TEST ECX,ECX
0068D857  74 2B                     JZ 0x0068d884
0068D859  B8 A0 16 80 00            MOV EAX,0x8016a0
0068D85E  85 C0                     TEST EAX,EAX
0068D860  74 22                     JZ 0x0068d884
0068D862  8B F8                     MOV EDI,EAX
0068D864  83 C9 FF                  OR ECX,0xffffffff
0068D867  33 C0                     XOR EAX,EAX
0068D869  F2 AE                     SCASB.REPNE ES:EDI
0068D86B  F7 D1                     NOT ECX
0068D86D  2B F9                     SUB EDI,ECX
0068D86F  8B C1                     MOV EAX,ECX
0068D871  8B F7                     MOV ESI,EDI
0068D873  BF 0C 7D 84 00            MOV EDI,0x847d0c
0068D878  C1 E9 02                  SHR ECX,0x2
0068D87B  F3 A5                     MOVSD.REP ES:EDI,ESI
0068D87D  8B C8                     MOV ECX,EAX
0068D87F  83 E1 03                  AND ECX,0x3
0068D882  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_0068d884:
0068D884  C7 42 0C 0C 7D 84 00      MOV dword ptr [EDX + 0xc],0x847d0c
0068D88B  C7 42 10 B4 88 84 00      MOV dword ptr [EDX + 0x10],0x8488b4
LAB_0068d892:
0068D892  5F                        POP EDI
0068D893  5E                        POP ESI
0068D894  33 C0                     XOR EAX,EAX
0068D896  5B                        POP EBX
0068D897  8B E5                     MOV ESP,EBP
0068D899  5D                        POP EBP
0068D89A  C3                        RET
