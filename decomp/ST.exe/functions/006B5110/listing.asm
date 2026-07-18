FUN_006b5110:
006B5110  55                        PUSH EBP
006B5111  8B EC                     MOV EBP,ESP
006B5113  81 EC 34 04 00 00         SUB ESP,0x434
006B5119  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006B511C  53                        PUSH EBX
006B511D  56                        PUSH ESI
006B511E  57                        PUSH EDI
006B511F  85 C0                     TEST EAX,EAX
006B5121  0F 8E 0C 03 00 00         JLE 0x006b5433
006B5127  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006B512A  85 FF                     TEST EDI,EDI
006B512C  0F 8E 01 03 00 00         JLE 0x006b5433
006B5132  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006B5135  66 83 7B 0E 08            CMP word ptr [EBX + 0xe],0x8
006B513A  74 07                     JZ 0x006b5143
006B513C  6A 1D                     PUSH 0x1d
006B513E  E9 DE 02 00 00            JMP 0x006b5421
LAB_006b5143:
006B5143  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5146  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B5149  85 C0                     TEST EAX,EAX
006B514B  75 09                     JNZ 0x006b5156
006B514D  56                        PUSH ESI
006B514E  E8 4D FE FF FF            CALL 0x006b4fa0
006B5153  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b5156:
006B5156  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B5159  85 C0                     TEST EAX,EAX
006B515B  75 09                     JNZ 0x006b5166
006B515D  53                        PUSH EBX
006B515E  E8 3D FE FF FF            CALL 0x006b4fa0
006B5163  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006b5166:
006B5166  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B5169  33 DB                     XOR EBX,EBX
006B516B  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
006B516F  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006B5172  0F AF D8                  IMUL EBX,EAX
006B5175  83 C3 1F                  ADD EBX,0x1f
006B5178  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006B517B  C1 EB 03                  SHR EBX,0x3
006B517E  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
006B5184  85 C9                     TEST ECX,ECX
006B5186  7D 07                     JGE 0x006b518f
006B5188  F7 DB                     NEG EBX
006B518A  F7 D9                     NEG ECX
006B518C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006b518f:
006B518F  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B5192  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B5195  03 FE                     ADD EDI,ESI
006B5197  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
006B519A  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
006B519D  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006B51A0  03 D7                     ADD EDX,EDI
006B51A2  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006B51A5  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006B51A8  33 D2                     XOR EDX,EDX
006B51AA  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006B51AD  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006B51B0  8D 4D DC                  LEA ECX,[EBP + -0x24]
006B51B3  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006B51B6  8D 55 CC                  LEA EDX,[EBP + -0x34]
006B51B9  51                        PUSH ECX
006B51BA  8D 45 EC                  LEA EAX,[EBP + -0x14]
006B51BD  52                        PUSH EDX
006B51BE  50                        PUSH EAX
006B51BF  89 75 D0                  MOV dword ptr [EBP + -0x30],ESI
006B51C2  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006B51C8  85 C0                     TEST EAX,EAX
006B51CA  0F 84 63 02 00 00         JZ 0x006b5433
006B51D0  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006B51D3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B51D6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B51D9  8B D7                     MOV EDX,EDI
006B51DB  2B D1                     SUB EDX,ECX
006B51DD  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B51E0  03 CA                     ADD ECX,EDX
006B51E2  8B D0                     MOV EDX,EAX
006B51E4  2B D6                     SUB EDX,ESI
006B51E6  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006B51E9  03 F2                     ADD ESI,EDX
006B51EB  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B51EE  89 75 24                  MOV dword ptr [EBP + 0x24],ESI
006B51F1  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006B51F4  8B 72 04                  MOV ESI,dword ptr [EDX + 0x4]
006B51F7  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006B51FA  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B51FD  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006B5200  33 F6                     XOR ESI,ESI
006B5202  2B C8                     SUB ECX,EAX
006B5204  66 8B 72 0E               MOV SI,word ptr [EDX + 0xe]
006B5208  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
006B520B  0F AF 75 28               IMUL ESI,dword ptr [EBP + 0x28]
006B520F  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006B5212  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B5215  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006B5218  03 CA                     ADD ECX,EDX
006B521A  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006B521D  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006B5220  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B5223  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B5226  2B D7                     SUB EDX,EDI
006B5228  33 C0                     XOR EAX,EAX
006B522A  03 D1                     ADD EDX,ECX
006B522C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B522F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B5232  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B5235  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B5238  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006B523B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006B523E  8D 55 DC                  LEA EDX,[EBP + -0x24]
006B5241  83 C6 1F                  ADD ESI,0x1f
006B5244  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006B5247  8D 45 CC                  LEA EAX,[EBP + -0x34]
006B524A  52                        PUSH EDX
006B524B  8D 4D EC                  LEA ECX,[EBP + -0x14]
006B524E  50                        PUSH EAX
006B524F  C1 EE 03                  SHR ESI,0x3
006B5252  51                        PUSH ECX
006B5253  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006B5259  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006B525F  85 C0                     TEST EAX,EAX
006B5261  0F 84 CC 01 00 00         JZ 0x006b5433
006B5267  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B526A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B526D  2B D1                     SUB EDX,ECX
006B526F  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5272  03 FA                     ADD EDI,EDX
006B5274  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B5277  8B C2                     MOV EAX,EDX
006B5279  2B C1                     SUB EAX,ECX
006B527B  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B527E  03 C8                     ADD ECX,EAX
006B5280  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B5283  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B5286  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006B5289  2B C1                     SUB EAX,ECX
006B528B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006B528E  2B CA                     SUB ECX,EDX
006B5290  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006B5293  85 DB                     TEST EBX,EBX
006B5295  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006B5298  7D 11                     JGE 0x006b52ab
006B529A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B529D  8D 44 08 FF               LEA EAX,[EAX + ECX*0x1 + -0x1]
006B52A1  0F AF C3                  IMUL EAX,EBX
006B52A4  F7 D8                     NEG EAX
006B52A6  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006B52A9  EB 13                     JMP 0x006b52be
LAB_006b52ab:
006B52AB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B52AE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B52B1  2B C2                     SUB EAX,EDX
006B52B3  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006B52B6  2B C1                     SUB EAX,ECX
006B52B8  0F AF C3                  IMUL EAX,EBX
006B52BB  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_006b52be:
006B52BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006B52C1  2B C2                     SUB EAX,EDX
006B52C3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B52C6  2B C1                     SUB EAX,ECX
006B52C8  0F AF C6                  IMUL EAX,ESI
006B52CB  03 C2                     ADD EAX,EDX
006B52CD  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B52D0  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B52D3  66 8B 52 0E               MOV DX,word ptr [EDX + 0xe]
006B52D7  66 83 FA 08               CMP DX,0x8
006B52DB  75 2A                     JNZ 0x006b5307
006B52DD  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006B52E0  52                        PUSH EDX
006B52E1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B52E4  51                        PUSH ECX
006B52E5  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B52E8  51                        PUSH ECX
006B52E9  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B52EC  03 C2                     ADD EAX,EDX
006B52EE  56                        PUSH ESI
006B52EF  50                        PUSH EAX
006B52F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B52F3  03 C8                     ADD ECX,EAX
006B52F5  53                        PUSH EBX
006B52F6  03 CF                     ADD ECX,EDI
006B52F8  51                        PUSH ECX
006B52F9  E8 E2 98 01 00            CALL 0x006cebe0
006B52FE  5F                        POP EDI
006B52FF  5E                        POP ESI
006B5300  5B                        POP EBX
006B5301  8B E5                     MOV ESP,EBP
006B5303  5D                        POP EBP
006B5304  C2 2C 00                  RET 0x2c
LAB_006b5307:
006B5307  66 83 FA 10               CMP DX,0x10
006B530B  75 66                     JNZ 0x006b5373
006B530D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B5310  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
006B5314  75 05                     JNZ 0x006b531b
006B5316  83 C0 28                  ADD EAX,0x28
006B5319  EB 02                     JMP 0x006b531d
LAB_006b531b:
006B531B  33 C0                     XOR EAX,EAX
LAB_006b531d:
006B531D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5320  50                        PUSH EAX
006B5321  52                        PUSH EDX
006B5322  E8 B9 FC FF FF            CALL 0x006b4fe0
006B5327  50                        PUSH EAX
006B5328  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B532B  83 C0 28                  ADD EAX,0x28
006B532E  8D 8D CC FD FF FF         LEA ECX,[EBP + 0xfffffdcc]
006B5334  50                        PUSH EAX
006B5335  51                        PUSH ECX
006B5336  E8 85 C1 01 00            CALL 0x006d14c0
006B533B  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006B533E  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B5341  8D 85 CC FD FF FF         LEA EAX,[EBP + 0xfffffdcc]
006B5347  52                        PUSH EDX
006B5348  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B534B  50                        PUSH EAX
006B534C  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B534F  51                        PUSH ECX
006B5350  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B5353  52                        PUSH EDX
006B5354  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5357  03 C1                     ADD EAX,ECX
006B5359  56                        PUSH ESI
006B535A  50                        PUSH EAX
006B535B  8D 04 7A                  LEA EAX,[EDX + EDI*0x2]
006B535E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5361  03 C2                     ADD EAX,EDX
006B5363  53                        PUSH EBX
006B5364  50                        PUSH EAX
006B5365  E8 56 C0 01 00            CALL 0x006d13c0
006B536A  5F                        POP EDI
006B536B  5E                        POP ESI
006B536C  5B                        POP EBX
006B536D  8B E5                     MOV ESP,EBP
006B536F  5D                        POP EBP
006B5370  C2 2C 00                  RET 0x2c
LAB_006b5373:
006B5373  66 83 FA 18               CMP DX,0x18
006B5377  75 37                     JNZ 0x006b53b0
006B5379  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006B537C  52                        PUSH EDX
006B537D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B5380  51                        PUSH ECX
006B5381  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B5384  51                        PUSH ECX
006B5385  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006B5388  83 C2 28                  ADD EDX,0x28
006B538B  03 C1                     ADD EAX,ECX
006B538D  52                        PUSH EDX
006B538E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006B5391  56                        PUSH ESI
006B5392  50                        PUSH EAX
006B5393  8D 04 7A                  LEA EAX,[EDX + EDI*0x2]
006B5396  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5399  03 F8                     ADD EDI,EAX
006B539B  53                        PUSH EBX
006B539C  03 FA                     ADD EDI,EDX
006B539E  57                        PUSH EDI
006B539F  E8 AC BF 01 00            CALL 0x006d1350
006B53A4  83 C4 20                  ADD ESP,0x20
006B53A7  5F                        POP EDI
006B53A8  5E                        POP ESI
006B53A9  5B                        POP EBX
006B53AA  8B E5                     MOV ESP,EBP
006B53AC  5D                        POP EBP
006B53AD  C2 2C 00                  RET 0x2c
LAB_006b53b0:
006B53B0  66 83 FA 20               CMP DX,0x20
006B53B4  75 66                     JNZ 0x006b541c
006B53B6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B53B9  83 78 10 03               CMP dword ptr [EAX + 0x10],0x3
006B53BD  75 05                     JNZ 0x006b53c4
006B53BF  83 C0 28                  ADD EAX,0x28
006B53C2  EB 02                     JMP 0x006b53c6
LAB_006b53c4:
006B53C4  33 C0                     XOR EAX,EAX
LAB_006b53c6:
006B53C6  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006B53C9  50                        PUSH EAX
006B53CA  51                        PUSH ECX
006B53CB  E8 10 FC FF FF            CALL 0x006b4fe0
006B53D0  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006B53D3  50                        PUSH EAX
006B53D4  83 C2 28                  ADD EDX,0x28
006B53D7  8D 85 CC FB FF FF         LEA EAX,[EBP + 0xfffffbcc]
006B53DD  52                        PUSH EDX
006B53DE  50                        PUSH EAX
006B53DF  E8 6C BE 01 00            CALL 0x006d1250
006B53E4  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006B53E7  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B53EA  8D 95 CC FB FF FF         LEA EDX,[EBP + 0xfffffbcc]
006B53F0  51                        PUSH ECX
006B53F1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B53F4  52                        PUSH EDX
006B53F5  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B53F8  50                        PUSH EAX
006B53F9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B53FC  51                        PUSH ECX
006B53FD  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B5400  03 D0                     ADD EDX,EAX
006B5402  56                        PUSH ESI
006B5403  52                        PUSH EDX
006B5404  8D 14 B9                  LEA EDX,[ECX + EDI*0x4]
006B5407  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B540A  03 D1                     ADD EDX,ECX
006B540C  53                        PUSH EBX
006B540D  52                        PUSH EDX
006B540E  E8 DD BD 01 00            CALL 0x006d11f0
006B5413  5F                        POP EDI
006B5414  5E                        POP ESI
006B5415  5B                        POP EBX
006B5416  8B E5                     MOV ESP,EBP
006B5418  5D                        POP EBP
006B5419  C2 2C 00                  RET 0x2c
LAB_006b541c:
006B541C  68 85 00 00 00            PUSH 0x85
LAB_006b5421:
006B5421  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B5426  68 38 DB 7E 00            PUSH 0x7edb38
006B542B  50                        PUSH EAX
006B542C  6A D0                     PUSH -0x30
006B542E  E8 0D 0A FF FF            CALL 0x006a5e40
LAB_006b5433:
006B5433  5F                        POP EDI
006B5434  5E                        POP ESI
006B5435  5B                        POP EBX
006B5436  8B E5                     MOV ESP,EBP
006B5438  5D                        POP EBP
006B5439  C2 2C 00                  RET 0x2c
