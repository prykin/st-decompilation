FUN_0060ef40:
0060EF40  55                        PUSH EBP
0060EF41  8B EC                     MOV EBP,ESP
0060EF43  6A FF                     PUSH -0x1
0060EF45  68 98 CE 79 00            PUSH 0x79ce98
0060EF4A  68 64 D9 72 00            PUSH 0x72d964
0060EF4F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0060EF55  50                        PUSH EAX
0060EF56  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0060EF5D  81 EC A8 00 00 00         SUB ESP,0xa8
0060EF63  53                        PUSH EBX
0060EF64  56                        PUSH ESI
0060EF65  57                        PUSH EDI
0060EF66  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060EF69  8B D9                     MOV EBX,ECX
0060EF6B  89 9D 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],EBX
0060EF71  0F BF B3 15 02 00 00      MOVSX ESI,word ptr [EBX + 0x215]
0060EF78  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0060EF7B  0F BF BB 17 02 00 00      MOVSX EDI,word ptr [EBX + 0x217]
0060EF82  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
0060EF85  0F BF 83 19 02 00 00      MOVSX EAX,word ptr [EBX + 0x219]
0060EF8C  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0060EF8F  6A 00                     PUSH 0x0
0060EF91  6A 00                     PUSH 0x0
0060EF93  8D 4D 90                  LEA ECX,[EBP + -0x70]
0060EF96  51                        PUSH ECX
0060EF97  8D 95 4C FF FF FF         LEA EDX,[EBP + 0xffffff4c]
0060EF9D  52                        PUSH EDX
0060EF9E  0F BF 83 F5 01 00 00      MOVSX EAX,word ptr [EBX + 0x1f5]
0060EFA5  50                        PUSH EAX
0060EFA6  8B CB                     MOV ECX,EBX
0060EFA8  E8 C1 25 DF FF            CALL 0x0040156e
0060EFAD  8B 8D 4C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff4c]
0060EFB3  03 F1                     ADD ESI,ECX
0060EFB5  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
0060EFB8  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
0060EFBB  03 FA                     ADD EDI,EDX
0060EFBD  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
0060EFC0  66 8B 83 EF 01 00 00      MOV AX,word ptr [EBX + 0x1ef]
0060EFC7  66 85 C0                  TEST AX,AX
0060EFCA  0F BF C8                  MOVSX ECX,AX
0060EFCD  B8 79 19 8C 02            MOV EAX,0x28c1979
0060EFD2  7C 13                     JL 0x0060efe7
0060EFD4  F7 E9                     IMUL ECX
0060EFD6  D1 FA                     SAR EDX,0x1
0060EFD8  8B C2                     MOV EAX,EDX
0060EFDA  C1 E8 1F                  SHR EAX,0x1f
0060EFDD  03 D0                     ADD EDX,EAX
0060EFDF  0F BF CA                  MOVSX ECX,DX
0060EFE2  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0060EFE5  EB 12                     JMP 0x0060eff9
LAB_0060efe7:
0060EFE7  F7 E9                     IMUL ECX
0060EFE9  D1 FA                     SAR EDX,0x1
0060EFEB  8B C2                     MOV EAX,EDX
0060EFED  C1 E8 1F                  SHR EAX,0x1f
0060EFF0  03 D0                     ADD EDX,EAX
0060EFF2  0F BF C2                  MOVSX EAX,DX
0060EFF5  48                        DEC EAX
0060EFF6  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
LAB_0060eff9:
0060EFF9  66 8B 83 F1 01 00 00      MOV AX,word ptr [EBX + 0x1f1]
0060F000  66 85 C0                  TEST AX,AX
0060F003  0F BF C8                  MOVSX ECX,AX
0060F006  B8 79 19 8C 02            MOV EAX,0x28c1979
0060F00B  7C 16                     JL 0x0060f023
0060F00D  F7 E9                     IMUL ECX
0060F00F  D1 FA                     SAR EDX,0x1
0060F011  8B CA                     MOV ECX,EDX
0060F013  C1 E9 1F                  SHR ECX,0x1f
0060F016  03 D1                     ADD EDX,ECX
0060F018  0F BF D2                  MOVSX EDX,DX
0060F01B  89 95 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EDX
0060F021  EB 15                     JMP 0x0060f038
LAB_0060f023:
0060F023  F7 E9                     IMUL ECX
0060F025  D1 FA                     SAR EDX,0x1
0060F027  8B C2                     MOV EAX,EDX
0060F029  C1 E8 1F                  SHR EAX,0x1f
0060F02C  03 D0                     ADD EDX,EAX
0060F02E  0F BF C2                  MOVSX EAX,DX
0060F031  48                        DEC EAX
0060F032  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
LAB_0060f038:
0060F038  66 8B 83 F3 01 00 00      MOV AX,word ptr [EBX + 0x1f3]
0060F03F  66 85 C0                  TEST AX,AX
0060F042  0F BF C8                  MOVSX ECX,AX
0060F045  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0060F04A  7C 14                     JL 0x0060f060
0060F04C  F7 E9                     IMUL ECX
0060F04E  C1 FA 06                  SAR EDX,0x6
0060F051  8B CA                     MOV ECX,EDX
0060F053  C1 E9 1F                  SHR ECX,0x1f
0060F056  03 D1                     ADD EDX,ECX
0060F058  0F BF D2                  MOVSX EDX,DX
0060F05B  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0060F05E  EB 13                     JMP 0x0060f073
LAB_0060f060:
0060F060  F7 E9                     IMUL ECX
0060F062  C1 FA 06                  SAR EDX,0x6
0060F065  8B C2                     MOV EAX,EDX
0060F067  C1 E8 1F                  SHR EAX,0x1f
0060F06A  03 D0                     ADD EDX,EAX
0060F06C  0F BF C2                  MOVSX EAX,DX
0060F06F  48                        DEC EAX
0060F070  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_0060f073:
0060F073  8B CF                     MOV ECX,EDI
0060F075  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060F078  2B CA                     SUB ECX,EDX
0060F07A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
0060F07D  2B F2                     SUB ESI,EDX
0060F07F  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0060F082  8D 44 17 01               LEA EAX,[EDI + EDX*0x1 + 0x1]
0060F086  89 85 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EAX
0060F08C  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
0060F08F  8D 54 17 01               LEA EDX,[EDI + EDX*0x1 + 0x1]
0060F093  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
0060F096  33 FF                     XOR EDI,EDI
0060F098  3B CF                     CMP ECX,EDI
0060F09A  7D 05                     JGE 0x0060f0a1
0060F09C  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
0060F09F  8B CF                     MOV ECX,EDI
LAB_0060f0a1:
0060F0A1  3B F7                     CMP ESI,EDI
0060F0A3  7D 05                     JGE 0x0060f0aa
0060F0A5  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0060F0A8  8B F7                     MOV ESI,EDI
LAB_0060f0aa:
0060F0AA  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
0060F0B1  3B C7                     CMP EAX,EDI
0060F0B3  7E 08                     JLE 0x0060f0bd
0060F0B5  89 BD 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDI
0060F0BB  8B C7                     MOV EAX,EDI
LAB_0060f0bd:
0060F0BD  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0060F0C4  3B D7                     CMP EDX,EDI
0060F0C6  7E 05                     JLE 0x0060f0cd
0060F0C8  89 7D 80                  MOV dword ptr [EBP + -0x80],EDI
0060F0CB  8B D7                     MOV EDX,EDI
LAB_0060f0cd:
0060F0CD  2B D6                     SUB EDX,ESI
0060F0CF  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
0060F0D5  2B C1                     SUB EAX,ECX
0060F0D7  0F AF C2                  IMUL EAX,EDX
0060F0DA  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
0060F0E0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0060F0E7  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0060F0EA  D1 E7                     SHL EDI,0x1
0060F0EC  8B C7                     MOV EAX,EDI
0060F0EE  83 C0 03                  ADD EAX,0x3
0060F0F1  24 FC                     AND AL,0xfc
0060F0F3  E8 48 E9 11 00            CALL 0x0072da40
0060F0F8  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0060F0FB  8B C4                     MOV EAX,ESP
0060F0FD  8B D0                     MOV EDX,EAX
0060F0FF  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0060F102  8B CF                     MOV ECX,EDI
0060F104  33 C0                     XOR EAX,EAX
0060F106  8B FA                     MOV EDI,EDX
0060F108  8B D1                     MOV EDX,ECX
0060F10A  C1 E9 02                  SHR ECX,0x2
0060F10D  F3 AB                     STOSD.REP ES:EDI
0060F10F  8B CA                     MOV ECX,EDX
0060F111  83 E1 03                  AND ECX,0x3
0060F114  F3 AA                     STOSB.REP ES:EDI
0060F116  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0060F11D  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
LAB_0060f124:
0060F124  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0060F127  0F AF 8D 78 FF FF FF      IMUL ECX,dword ptr [EBP + 0xffffff78]
0060F12E  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
0060F134  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
0060F137  8B D7                     MOV EDX,EDI
0060F139  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0060F13C  3B BD 70 FF FF FF         CMP EDI,dword ptr [EBP + 0xffffff70]
0060F142  0F 8D 1D 01 00 00         JGE 0x0060f265
0060F148  EB 03                     JMP 0x0060f14d
LAB_0060f14a:
0060F14A  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
LAB_0060f14d:
0060F14D  8B C2                     MOV EAX,EDX
0060F14F  2B C7                     SUB EAX,EDI
0060F151  0F AF 85 68 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff68]
0060F158  03 C1                     ADD EAX,ECX
0060F15A  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0060F160  8B FE                     MOV EDI,ESI
0060F162  3B 75 80                  CMP ESI,dword ptr [EBP + -0x80]
0060F165  0F 8D EA 00 00 00         JGE 0x0060f255
0060F16B  EB 09                     JMP 0x0060f176
LAB_0060f16d:
0060F16D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0060F170  8B 85 6C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff6c]
LAB_0060f176:
0060F176  8B CF                     MOV ECX,EDI
0060F178  2B CE                     SUB ECX,ESI
0060F17A  03 C8                     ADD ECX,EAX
0060F17C  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0060F182  66 85 FF                  TEST DI,DI
0060F185  7C 51                     JL 0x0060f1d8
0060F187  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0060F18D  66 3B F8                  CMP DI,AX
0060F190  7D 46                     JGE 0x0060f1d8
0060F192  66 85 D2                  TEST DX,DX
0060F195  7C 41                     JL 0x0060f1d8
0060F197  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0060F19E  7D 38                     JGE 0x0060f1d8
0060F1A0  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0060F1A3  66 85 C9                  TEST CX,CX
0060F1A6  7C 30                     JL 0x0060f1d8
0060F1A8  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0060F1AF  7D 27                     JGE 0x0060f1d8
0060F1B1  0F BF C9                  MOVSX ECX,CX
0060F1B4  0F BF 35 46 B2 7F 00      MOVSX ESI,word ptr [0x007fb246]
0060F1BB  0F AF CE                  IMUL ECX,ESI
0060F1BE  0F BF F2                  MOVSX ESI,DX
0060F1C1  0F BF C0                  MOVSX EAX,AX
0060F1C4  0F AF F0                  IMUL ESI,EAX
0060F1C7  03 CE                     ADD ECX,ESI
0060F1C9  0F BF C7                  MOVSX EAX,DI
0060F1CC  03 C8                     ADD ECX,EAX
0060F1CE  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0060F1D3  8B 34 C8                  MOV ESI,dword ptr [EAX + ECX*0x8]
0060F1D6  EB 02                     JMP 0x0060f1da
LAB_0060f1d8:
0060F1D8  33 F6                     XOR ESI,ESI
LAB_0060f1da:
0060F1DA  85 F6                     TEST ESI,ESI
0060F1DC  74 3D                     JZ 0x0060f21b
0060F1DE  8B 16                     MOV EDX,dword ptr [ESI]
0060F1E0  8B CE                     MOV ECX,ESI
0060F1E2  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
0060F1E8  85 C0                     TEST EAX,EAX
0060F1EA  74 2C                     JZ 0x0060f218
0060F1EC  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
0060F1EF  83 F8 08                  CMP EAX,0x8
0060F1F2  73 24                     JNC 0x0060f218
0060F1F4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0060F1FA  85 C9                     TEST ECX,ECX
0060F1FC  74 0D                     JZ 0x0060f20b
0060F1FE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0060F201  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
0060F209  73 0D                     JNC 0x0060f218
LAB_0060f20b:
0060F20B  8B 83 D1 02 00 00         MOV EAX,dword ptr [EBX + 0x2d1]
0060F211  3B 46 18                  CMP EAX,dword ptr [ESI + 0x18]
0060F214  74 29                     JZ 0x0060f23f
0060F216  EB 18                     JMP 0x0060f230
LAB_0060f218:
0060F218  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
LAB_0060f21b:
0060F21B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0060F21E  50                        PUSH EAX
0060F21F  52                        PUSH EDX
0060F220  57                        PUSH EDI
0060F221  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0060F227  E8 0F 5B DF FF            CALL 0x00404d3b
0060F22C  85 C0                     TEST EAX,EAX
0060F22E  75 0F                     JNZ 0x0060f23f
LAB_0060f230:
0060F230  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0060F233  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
0060F239  66 C7 04 51 FF BF         MOV word ptr [ECX + EDX*0x2],0xbfff
LAB_0060f23f:
0060F23F  47                        INC EDI
0060F240  3B 7D 80                  CMP EDI,dword ptr [EBP + -0x80]
0060F243  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0060F246  0F 8C 21 FF FF FF         JL 0x0060f16d
0060F24C  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
0060F252  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
LAB_0060f255:
0060F255  42                        INC EDX
0060F256  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
0060F259  3B 95 70 FF FF FF         CMP EDX,dword ptr [EBP + 0xffffff70]
0060F25F  0F 8C E5 FE FF FF         JL 0x0060f14a
LAB_0060f265:
0060F265  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0060F268  40                        INC EAX
0060F269  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0060F26C  83 F8 05                  CMP EAX,0x5
0060F26F  0F 8C AF FE FF FF         JL 0x0060f124
0060F275  8D 45 A4                  LEA EAX,[EBP + -0x5c]
0060F278  50                        PUSH EAX
0060F279  6A 01                     PUSH 0x1
0060F27B  6A 00                     PUSH 0x0
0060F27D  6A 00                     PUSH 0x0
0060F27F  0F BF 8B F5 01 00 00      MOVSX ECX,word ptr [EBX + 0x1f5]
0060F286  51                        PUSH ECX
0060F287  8B CB                     MOV ECX,EBX
0060F289  E8 E0 22 DF FF            CALL 0x0040156e
0060F28E  33 D2                     XOR EDX,EDX
LAB_0060f290:
0060F290  0F BF 44 95 A4            MOVSX EAX,word ptr [EBP + EDX*0x4 + -0x5c]
0060F295  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0060F298  03 C8                     ADD ECX,EAX
0060F29A  85 C9                     TEST ECX,ECX
0060F29C  0F 8C 8A 00 00 00         JL 0x0060f32c
0060F2A2  0F BF 44 95 A6            MOVSX EAX,word ptr [EBP + EDX*0x4 + -0x5a]
0060F2A7  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0060F2AA  03 C7                     ADD EAX,EDI
0060F2AC  85 C0                     TEST EAX,EAX
0060F2AE  7C 7C                     JL 0x0060f32c
0060F2B0  0F BF 3D 40 B2 7F 00      MOVSX EDI,word ptr [0x007fb240]
0060F2B7  3B CF                     CMP ECX,EDI
0060F2B9  7D 71                     JGE 0x0060f32c
0060F2BB  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
0060F2C2  3B C1                     CMP EAX,ECX
0060F2C4  7D 66                     JGE 0x0060f32c
0060F2C6  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
0060F2C9  8D 47 FF                  LEA EAX,[EDI + -0x1]
0060F2CC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0060F2CF  8D 4F 01                  LEA ECX,[EDI + 0x1]
0060F2D2  3B C1                     CMP EAX,ECX
0060F2D4  7F 56                     JG 0x0060f32c
LAB_0060f2d6:
0060F2D6  85 C0                     TEST EAX,EAX
0060F2D8  7C 47                     JL 0x0060f321
0060F2DA  83 F8 05                  CMP EAX,0x5
0060F2DD  7D 42                     JGE 0x0060f321
0060F2DF  0F BF 4C 95 A4            MOVSX ECX,word ptr [EBP + EDX*0x4 + -0x5c]
0060F2E4  03 4D E4                  ADD ECX,dword ptr [EBP + -0x1c]
0060F2E7  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
0060F2ED  0F BF 44 95 A6            MOVSX EAX,word ptr [EBP + EDX*0x4 + -0x5a]
0060F2F2  03 45 D8                  ADD EAX,dword ptr [EBP + -0x28]
0060F2F5  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
0060F2F8  2B 45 CC                  SUB EAX,dword ptr [EBP + -0x34]
0060F2FB  0F AF 85 68 FF FF FF      IMUL EAX,dword ptr [EBP + 0xffffff68]
0060F302  8B 7D B8                  MOV EDI,dword ptr [EBP + -0x48]
0060F305  0F AF BD 78 FF FF FF      IMUL EDI,dword ptr [EBP + 0xffffff78]
0060F30C  03 C7                     ADD EAX,EDI
0060F30E  2B C6                     SUB EAX,ESI
0060F310  03 C1                     ADD EAX,ECX
0060F312  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0060F315  66 C7 04 41 FF BF         MOV word ptr [ECX + EAX*0x2],0xbfff
0060F31B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0060F31E  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
LAB_0060f321:
0060F321  40                        INC EAX
0060F322  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0060F325  8D 4F 01                  LEA ECX,[EDI + 0x1]
0060F328  3B C1                     CMP EAX,ECX
0060F32A  7E AA                     JLE 0x0060f2d6
LAB_0060f32c:
0060F32C  42                        INC EDX
0060F32D  83 FA 03                  CMP EDX,0x3
0060F330  0F 8C 5A FF FF FF         JL 0x0060f290
0060F336  6A 02                     PUSH 0x2
0060F338  8D 55 9C                  LEA EDX,[EBP + -0x64]
0060F33B  52                        PUSH EDX
0060F33C  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0060F33F  50                        PUSH EAX
0060F340  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
0060F346  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0060F349  2B C1                     SUB EAX,ECX
0060F34B  50                        PUSH EAX
0060F34C  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0060F34F  2B C6                     SUB EAX,ESI
0060F351  50                        PUSH EAX
0060F352  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
0060F355  52                        PUSH EDX
0060F356  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0060F359  2B C1                     SUB EAX,ECX
0060F35B  50                        PUSH EAX
0060F35C  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0060F35F  2B D6                     SUB EDX,ESI
0060F361  52                        PUSH EDX
0060F362  6A 05                     PUSH 0x5
0060F364  8B 85 70 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff70]
0060F36A  2B C1                     SUB EAX,ECX
0060F36C  50                        PUSH EAX
0060F36D  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
0060F370  2B C6                     SUB EAX,ESI
0060F372  50                        PUSH EAX
0060F373  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0060F376  50                        PUSH EAX
0060F377  E8 24 08 0A 00            CALL 0x006afba0
0060F37C  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
0060F37F  85 C0                     TEST EAX,EAX
0060F381  0F 84 52 03 00 00         JZ 0x0060f6d9
0060F387  8D B3 DD 02 00 00         LEA ESI,[EBX + 0x2dd]
0060F38D  83 3E 00                  CMP dword ptr [ESI],0x0
0060F390  74 20                     JZ 0x0060f3b2
0060F392  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0060F395  39 93 D5 02 00 00         CMP dword ptr [EBX + 0x2d5],EDX
0060F39B  7F 09                     JG 0x0060f3a6
0060F39D  56                        PUSH ESI
0060F39E  E8 BD BC 09 00            CALL 0x006ab060
0060F3A3  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
LAB_0060f3a6:
0060F3A6  C7 83 D5 02 00 00 00 00 00 00  MOV dword ptr [EBX + 0x2d5],0x0
0060F3B0  EB 1D                     JMP 0x0060f3cf
LAB_0060f3b2:
0060F3B2  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
0060F3B5  8D 41 01                  LEA EAX,[ECX + 0x1]
0060F3B8  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0060F3BF  2B D0                     SUB EDX,EAX
0060F3C1  C1 E2 02                  SHL EDX,0x2
0060F3C4  52                        PUSH EDX
0060F3C5  E8 A6 B8 09 00            CALL 0x006aac70
0060F3CA  89 06                     MOV dword ptr [ESI],EAX
0060F3CC  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
LAB_0060f3cf:
0060F3CF  B9 01 00 00 00            MOV ECX,0x1
0060F3D4  3B D1                     CMP EDX,ECX
0060F3D6  0F 8E C0 00 00 00         JLE 0x0060f49c
LAB_0060f3dc:
0060F3DC  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0060F3E3  2B C1                     SUB EAX,ECX
0060F3E5  C1 E0 02                  SHL EAX,0x2
0060F3E8  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0060F3EB  66 8B 54 CA F8            MOV DX,word ptr [EDX + ECX*0x8 + -0x8]
0060F3F0  66 03 55 E0               ADD DX,word ptr [EBP + -0x20]
0060F3F4  8B 3E                     MOV EDI,dword ptr [ESI]
0060F3F6  66 89 14 07               MOV word ptr [EDI + EAX*0x1],DX
0060F3FA  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0060F3FD  66 8B 54 CA FA            MOV DX,word ptr [EDX + ECX*0x8 + -0x6]
0060F402  66 03 55 CC               ADD DX,word ptr [EBP + -0x34]
0060F406  8B 3E                     MOV EDI,dword ptr [ESI]
0060F408  66 89 54 07 02            MOV word ptr [EDI + EAX*0x1 + 0x2],DX
0060F40D  8B 16                     MOV EDX,dword ptr [ESI]
0060F40F  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
0060F412  66 8B 7C CF FC            MOV DI,word ptr [EDI + ECX*0x8 + -0x4]
0060F417  66 89 7C 02 04            MOV word ptr [EDX + EAX*0x1 + 0x4],DI
0060F41C  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0060F41F  0F BF 5C CA FC            MOVSX EBX,word ptr [EDX + ECX*0x8 + -0x4]
0060F424  0F BF 7C CA 04            MOVSX EDI,word ptr [EDX + ECX*0x8 + 0x4]
0060F429  2B FB                     SUB EDI,EBX
0060F42B  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
0060F42E  0F BF 5C CA FA            MOVSX EBX,word ptr [EDX + ECX*0x8 + -0x6]
0060F433  2B FB                     SUB EDI,EBX
0060F435  0F BF 5C CA 02            MOVSX EBX,word ptr [EDX + ECX*0x8 + 0x2]
0060F43A  03 FB                     ADD EDI,EBX
0060F43C  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
0060F43F  0F BF 5C CA F8            MOVSX EBX,word ptr [EDX + ECX*0x8 + -0x8]
0060F444  2B FB                     SUB EDI,EBX
0060F446  0F BF 14 CA               MOVSX EDX,word ptr [EDX + ECX*0x8]
0060F44A  03 FA                     ADD EDI,EDX
0060F44C  8B 16                     MOV EDX,dword ptr [ESI]
0060F44E  8B 1D 6C D5 7E 00         MOV EBX,dword ptr [0x007ed56c]
0060F454  66 8B 3C BB               MOV DI,word ptr [EBX + EDI*0x4]
0060F458  66 89 7C 02 06            MOV word ptr [EDX + EAX*0x1 + 0x6],DI
0060F45D  8B 16                     MOV EDX,dword ptr [ESI]
0060F45F  8D 3C 02                  LEA EDI,[EDX + EAX*0x1]
0060F462  0F BF 47 06               MOVSX EAX,word ptr [EDI + 0x6]
0060F466  8B 04 85 74 FE 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cfe74]
0060F46D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060F470  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060F473  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0060F476  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0060F47B  F7 EA                     IMUL EDX
0060F47D  C1 FA 06                  SAR EDX,0x6
0060F480  8B C2                     MOV EAX,EDX
0060F482  C1 E8 1F                  SHR EAX,0x1f
0060F485  03 D0                     ADD EDX,EAX
0060F487  89 57 08                  MOV dword ptr [EDI + 0x8],EDX
0060F48A  41                        INC ECX
0060F48B  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0060F48E  3B CA                     CMP ECX,EDX
0060F490  0F 8C 46 FF FF FF         JL 0x0060f3dc
0060F496  8B 9D 48 FF FF FF         MOV EBX,dword ptr [EBP + 0xffffff48]
LAB_0060f49c:
0060F49C  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
0060F4A3  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
0060F4AA  2B C2                     SUB EAX,EDX
0060F4AC  C1 E0 02                  SHL EAX,0x2
0060F4AF  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0060F4B2  66 8B 54 11 F8            MOV DX,word ptr [ECX + EDX*0x1 + -0x8]
0060F4B7  66 03 55 E0               ADD DX,word ptr [EBP + -0x20]
0060F4BB  8B 3E                     MOV EDI,dword ptr [ESI]
0060F4BD  66 89 14 07               MOV word ptr [EDI + EAX*0x1],DX
0060F4C1  8B 55 98                  MOV EDX,dword ptr [EBP + -0x68]
0060F4C4  66 8B 54 0A FA            MOV DX,word ptr [EDX + ECX*0x1 + -0x6]
0060F4C9  66 03 55 CC               ADD DX,word ptr [EBP + -0x34]
0060F4CD  8B 3E                     MOV EDI,dword ptr [ESI]
0060F4CF  66 89 54 07 02            MOV word ptr [EDI + EAX*0x1 + 0x2],DX
0060F4D4  8B 16                     MOV EDX,dword ptr [ESI]
0060F4D6  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
0060F4D9  66 8B 4C 0F FC            MOV CX,word ptr [EDI + ECX*0x1 + -0x4]
0060F4DE  66 89 4C 02 04            MOV word ptr [EDX + EAX*0x1 + 0x4],CX
0060F4E3  8B 16                     MOV EDX,dword ptr [ESI]
0060F4E5  03 C2                     ADD EAX,EDX
0060F4E7  66 8B 48 EA               MOV CX,word ptr [EAX + -0x16]
0060F4EB  66 89 48 06               MOV word ptr [EAX + 0x6],CX
0060F4EF  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0060F4F2  8D 50 01                  LEA EDX,[EAX + 0x1]
0060F4F5  89 93 D5 02 00 00         MOV dword ptr [EBX + 0x2d5],EDX
0060F4FB  B9 01 00 00 00            MOV ECX,0x1
0060F500  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0060F503  8D 50 FF                  LEA EDX,[EAX + -0x1]
0060F506  3B D1                     CMP EDX,ECX
0060F508  7E 68                     JLE 0x0060f572
0060F50A  EB 03                     JMP 0x0060f50f
LAB_0060f50c:
0060F50C  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
LAB_0060f50f:
0060F50F  8D 3C CD 00 00 00 00      LEA EDI,[ECX*0x8 + 0x0]
0060F516  2B F9                     SUB EDI,ECX
0060F518  C1 E7 02                  SHL EDI,0x2
0060F51B  8B 06                     MOV EAX,dword ptr [ESI]
0060F51D  03 C7                     ADD EAX,EDI
0060F51F  6A 00                     PUSH 0x0
0060F521  6A 00                     PUSH 0x0
0060F523  6A 00                     PUSH 0x0
0060F525  6A 00                     PUSH 0x0
0060F527  6A 00                     PUSH 0x0
0060F529  6A 00                     PUSH 0x0
0060F52B  6A 00                     PUSH 0x0
0060F52D  6A 00                     PUSH 0x0
0060F52F  6A 00                     PUSH 0x0
0060F531  6A 00                     PUSH 0x0
0060F533  6A 00                     PUSH 0x0
0060F535  6A 01                     PUSH 0x1
0060F537  50                        PUSH EAX
0060F538  0F BF 48 22               MOVSX ECX,word ptr [EAX + 0x22]
0060F53C  51                        PUSH ECX
0060F53D  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
0060F541  52                        PUSH EDX
0060F542  8B CB                     MOV ECX,EBX
0060F544  E8 B6 39 DF FF            CALL 0x00402eff
0060F549  8B 0E                     MOV ECX,dword ptr [ESI]
0060F54B  89 44 39 18               MOV dword ptr [ECX + EDI*0x1 + 0x18],EAX
0060F54F  8B 16                     MOV EDX,dword ptr [ESI]
0060F551  8B 44 3A 18               MOV EAX,dword ptr [EDX + EDI*0x1 + 0x18]
0060F555  85 C0                     TEST EAX,EAX
0060F557  7C 13                     JL 0x0060f56c
0060F559  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
0060F55C  41                        INC ECX
0060F55D  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
0060F560  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0060F563  8D 50 FF                  LEA EDX,[EAX + -0x1]
0060F566  3B CA                     CMP ECX,EDX
0060F568  7C A2                     JL 0x0060f50c
0060F56A  EB 06                     JMP 0x0060f572
LAB_0060f56c:
0060F56C  83 C8 FF                  OR EAX,0xffffffff
0060F56F  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
LAB_0060f572:
0060F572  83 F8 01                  CMP EAX,0x1
0060F575  0F 8E 63 01 00 00         JLE 0x0060f6de
0060F57B  8B 06                     MOV EAX,dword ptr [ESI]
0060F57D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0060F580  66 89 08                  MOV word ptr [EAX],CX
0060F583  8B 06                     MOV EAX,dword ptr [ESI]
0060F585  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0060F588  66 89 50 02               MOV word ptr [EAX + 0x2],DX
0060F58C  8B 06                     MOV EAX,dword ptr [ESI]
0060F58E  66 8B 7D C4               MOV DI,word ptr [EBP + -0x3c]
0060F592  66 89 78 04               MOV word ptr [EAX + 0x4],DI
0060F596  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
0060F599  2B C2                     SUB EAX,EDX
0060F59B  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
0060F59E  2B D1                     SUB EDX,ECX
0060F5A0  03 55 C8                  ADD EDX,dword ptr [EBP + -0x38]
0060F5A3  8B 06                     MOV EAX,dword ptr [ESI]
0060F5A5  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
0060F5AB  66 8B 14 91               MOV DX,word ptr [ECX + EDX*0x4]
0060F5AF  66 89 50 06               MOV word ptr [EAX + 0x6],DX
0060F5B3  8B 0E                     MOV ECX,dword ptr [ESI]
0060F5B5  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
0060F5B9  8B 04 85 74 FE 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7cfe74]
0060F5C0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060F5C3  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060F5C6  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
0060F5C9  B8 D3 4D 62 10            MOV EAX,0x10624dd3
0060F5CE  F7 EA                     IMUL EDX
0060F5D0  C1 FA 06                  SAR EDX,0x6
0060F5D3  8B C2                     MOV EAX,EDX
0060F5D5  C1 E8 1F                  SHR EAX,0x1f
0060F5D8  03 D0                     ADD EDX,EAX
0060F5DA  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0060F5DD  8B 06                     MOV EAX,dword ptr [ESI]
0060F5DF  6A 00                     PUSH 0x0
0060F5E1  6A 00                     PUSH 0x0
0060F5E3  6A 00                     PUSH 0x0
0060F5E5  6A 00                     PUSH 0x0
0060F5E7  6A 00                     PUSH 0x0
0060F5E9  6A 00                     PUSH 0x0
0060F5EB  6A 00                     PUSH 0x0
0060F5ED  6A 00                     PUSH 0x0
0060F5EF  6A 00                     PUSH 0x0
0060F5F1  6A 00                     PUSH 0x0
0060F5F3  6A 00                     PUSH 0x0
0060F5F5  6A 01                     PUSH 0x1
0060F5F7  50                        PUSH EAX
0060F5F8  0F BF 48 22               MOVSX ECX,word ptr [EAX + 0x22]
0060F5FC  51                        PUSH ECX
0060F5FD  0F BF 50 06               MOVSX EDX,word ptr [EAX + 0x6]
0060F601  52                        PUSH EDX
0060F602  8B CB                     MOV ECX,EBX
0060F604  E8 F6 38 DF FF            CALL 0x00402eff
0060F609  8B 0E                     MOV ECX,dword ptr [ESI]
0060F60B  89 41 18                  MOV dword ptr [ECX + 0x18],EAX
0060F60E  8B 16                     MOV EDX,dword ptr [ESI]
0060F610  66 8B 83 E9 01 00 00      MOV AX,word ptr [EBX + 0x1e9]
0060F617  66 89 02                  MOV word ptr [EDX],AX
0060F61A  8B 0E                     MOV ECX,dword ptr [ESI]
0060F61C  66 8B 93 EB 01 00 00      MOV DX,word ptr [EBX + 0x1eb]
0060F623  66 89 51 02               MOV word ptr [ECX + 0x2],DX
0060F627  8B 06                     MOV EAX,dword ptr [ESI]
0060F629  66 8B 8B ED 01 00 00      MOV CX,word ptr [EBX + 0x1ed]
0060F630  66 89 48 04               MOV word ptr [EAX + 0x4],CX
0060F634  8D 55 94                  LEA EDX,[EBP + -0x6c]
0060F637  52                        PUSH EDX
0060F638  8D 45 C0                  LEA EAX,[EBP + -0x40]
0060F63B  50                        PUSH EAX
0060F63C  8D 4D D4                  LEA ECX,[EBP + -0x2c]
0060F63F  51                        PUSH ECX
0060F640  0F BF 93 F5 01 00 00      MOVSX EDX,word ptr [EBX + 0x1f5]
0060F647  52                        PUSH EDX
0060F648  8B CB                     MOV ECX,EBX
0060F64A  E8 60 51 DF FF            CALL 0x004047af
0060F64F  8B 36                     MOV ESI,dword ptr [ESI]
0060F651  0F BF 46 20               MOVSX EAX,word ptr [ESI + 0x20]
0060F655  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0060F658  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0060F65B  0F BF 83 F3 01 00 00      MOVSX EAX,word ptr [EBX + 0x1f3]
0060F662  99                        CDQ
0060F663  BF C8 00 00 00            MOV EDI,0xc8
0060F668  F7 FF                     IDIV EDI
0060F66A  8D 14 CA                  LEA EDX,[EDX + ECX*0x8]
0060F66D  52                        PUSH EDX
0060F66E  0F BF 46 1E               MOVSX EAX,word ptr [ESI + 0x1e]
0060F672  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0060F675  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0060F678  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
0060F67B  0F BF 83 F1 01 00 00      MOVSX EAX,word ptr [EBX + 0x1f1]
0060F682  99                        CDQ
0060F683  BF C9 00 00 00            MOV EDI,0xc9
0060F688  F7 FF                     IDIV EDI
0060F68A  03 CA                     ADD ECX,EDX
0060F68C  51                        PUSH ECX
0060F68D  0F BF 46 1C               MOVSX EAX,word ptr [ESI + 0x1c]
0060F691  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0060F694  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0060F697  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0060F69A  0F BF 83 EF 01 00 00      MOVSX EAX,word ptr [EBX + 0x1ef]
0060F6A1  99                        CDQ
0060F6A2  8B F7                     MOV ESI,EDI
0060F6A4  F7 FE                     IDIV ESI
0060F6A6  03 CA                     ADD ECX,EDX
0060F6A8  51                        PUSH ECX
0060F6A9  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
0060F6AC  52                        PUSH EDX
0060F6AD  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0060F6B0  50                        PUSH EAX
0060F6B1  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0060F6B4  51                        PUSH ECX
0060F6B5  0F BF 93 ED 01 00 00      MOVSX EDX,word ptr [EBX + 0x1ed]
0060F6BC  52                        PUSH EDX
0060F6BD  0F BF 83 EB 01 00 00      MOVSX EAX,word ptr [EBX + 0x1eb]
0060F6C4  50                        PUSH EAX
0060F6C5  0F BF 8B E9 01 00 00      MOVSX ECX,word ptr [EBX + 0x1e9]
0060F6CC  51                        PUSH ECX
0060F6CD  8B CB                     MOV ECX,EBX
0060F6CF  E8 27 41 DF FF            CALL 0x004037fb
0060F6D4  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0060F6D7  EB 05                     JMP 0x0060f6de
LAB_0060f6d9:
0060F6D9  33 C0                     XOR EAX,EAX
0060F6DB  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
LAB_0060f6de:
0060F6DE  8B 4D 98                  MOV ECX,dword ptr [EBP + -0x68]
0060F6E1  85 C9                     TEST ECX,ECX
0060F6E3  74 3A                     JZ 0x0060f71f
0060F6E5  8D 55 98                  LEA EDX,[EBP + -0x68]
0060F6E8  52                        PUSH EDX
0060F6E9  E8 72 B9 09 00            CALL 0x006ab060
0060F6EE  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0060F6F1  EB 2C                     JMP 0x0060f71f
LAB_0060f71f:
0060F71F  8D A5 3C FF FF FF         LEA ESP,[EBP + 0xffffff3c]
0060F725  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0060F728  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0060F72F  5F                        POP EDI
0060F730  5E                        POP ESI
0060F731  5B                        POP EBX
0060F732  8B E5                     MOV ESP,EBP
0060F734  5D                        POP EBP
0060F735  C2 04 00                  RET 0x4
