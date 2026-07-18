FUN_006ae7d0:
006AE7D0  55                        PUSH EBP
006AE7D1  8B EC                     MOV EBP,ESP
006AE7D3  81 EC 8C 00 00 00         SUB ESP,0x8c
006AE7D9  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006AE7DC  53                        PUSH EBX
006AE7DD  56                        PUSH ESI
006AE7DE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006AE7E1  85 F6                     TEST ESI,ESI
006AE7E3  57                        PUSH EDI
006AE7E4  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006AE7EA  0F 8C 98 09 00 00         JL 0x006af188
006AE7F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AE7F3  3B F0                     CMP ESI,EAX
006AE7F5  0F 8D 8D 09 00 00         JGE 0x006af188
006AE7FB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AE7FE  85 D2                     TEST EDX,EDX
006AE800  0F 8C 82 09 00 00         JL 0x006af188
006AE806  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AE809  3B D1                     CMP EDX,ECX
006AE80B  0F 8D 77 09 00 00         JGE 0x006af188
006AE811  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006AE814  85 DB                     TEST EBX,EBX
006AE816  0F 8C 6C 09 00 00         JL 0x006af188
006AE81C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006AE81F  3B DF                     CMP EBX,EDI
006AE821  0F 8D 61 09 00 00         JGE 0x006af188
006AE827  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AE82A  85 D2                     TEST EDX,EDX
006AE82C  0F 8C 56 09 00 00         JL 0x006af188
006AE832  3B D0                     CMP EDX,EAX
006AE834  0F 8D 4E 09 00 00         JGE 0x006af188
006AE83A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AE83D  85 D2                     TEST EDX,EDX
006AE83F  0F 8C 43 09 00 00         JL 0x006af188
006AE845  3B D1                     CMP EDX,ECX
006AE847  0F 8D 3B 09 00 00         JGE 0x006af188
006AE84D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AE850  85 D2                     TEST EDX,EDX
006AE852  0F 8C 30 09 00 00         JL 0x006af188
006AE858  3B D7                     CMP EDX,EDI
006AE85A  0F 8D 28 09 00 00         JGE 0x006af188
006AE860  0F AF C1                  IMUL EAX,ECX
006AE863  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006AE866  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AE869  2B C6                     SUB EAX,ESI
006AE86B  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
006AE86E  99                        CDQ
006AE86F  8B C8                     MOV ECX,EAX
006AE871  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AE874  33 CA                     XOR ECX,EDX
006AE876  2B CA                     SUB ECX,EDX
006AE878  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AE87B  2B C2                     SUB EAX,EDX
006AE87D  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
006AE880  89 45 90                  MOV dword ptr [EBP + -0x70],EAX
006AE883  99                        CDQ
006AE884  8B F8                     MOV EDI,EAX
006AE886  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AE889  33 FA                     XOR EDI,EDX
006AE88B  2B C3                     SUB EAX,EBX
006AE88D  2B FA                     SUB EDI,EDX
006AE88F  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
006AE892  99                        CDQ
006AE893  33 C2                     XOR EAX,EDX
006AE895  89 BD 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDI
006AE89B  2B C2                     SUB EAX,EDX
006AE89D  3B CF                     CMP ECX,EDI
006AE89F  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
006AE8A5  7C 09                     JL 0x006ae8b0
006AE8A7  3B C8                     CMP ECX,EAX
006AE8A9  7C 0C                     JL 0x006ae8b7
006AE8AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006AE8AE  EB 0A                     JMP 0x006ae8ba
LAB_006ae8b0:
006AE8B0  3B F8                     CMP EDI,EAX
006AE8B2  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006AE8B5  7D 03                     JGE 0x006ae8ba
LAB_006ae8b7:
006AE8B7  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006ae8ba:
006AE8BA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AE8BD  83 C0 02                  ADD EAX,0x2
006AE8C0  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006AE8C3  8D 0C C5 00 00 00 00      LEA ECX,[EAX*0x8 + 0x0]
006AE8CA  51                        PUSH ECX
006AE8CB  E8 A0 C3 FF FF            CALL 0x006aac70
006AE8D0  33 C9                     XOR ECX,ECX
006AE8D2  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006AE8D5  3B C1                     CMP EAX,ECX
006AE8D7  0F 84 AD 08 00 00         JZ 0x006af18a
006AE8DD  66 89 30                  MOV word ptr [EAX],SI
006AE8E0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE8E3  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AE8E6  C7 45 B0 01 00 00 00      MOV dword ptr [EBP + -0x50],0x1
006AE8ED  66 89 42 02               MOV word ptr [EDX + 0x2],AX
006AE8F1  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE8F4  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AE8F7  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
006AE8FA  66 89 5A 04               MOV word ptr [EDX + 0x4],BX
006AE8FE  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE901  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006AE904  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006AE907  66 89 4A 06               MOV word ptr [EDX + 0x6],CX
006AE90B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AE90E  3B F2                     CMP ESI,EDX
006AE910  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006AE913  75 36                     JNZ 0x006ae94b
006AE915  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006AE918  3B C7                     CMP EAX,EDI
006AE91A  75 2F                     JNZ 0x006ae94b
006AE91C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AE91F  3B D8                     CMP EBX,EAX
006AE921  75 28                     JNZ 0x006ae94b
006AE923  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006AE926  C7 45 B0 02 00 00 00      MOV dword ptr [EBP + -0x50],0x2
006AE92D  66 89 56 08               MOV word ptr [ESI + 0x8],DX
006AE931  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE934  66 89 7A 0A               MOV word ptr [EDX + 0xa],DI
006AE938  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AE93B  66 89 42 0C               MOV word ptr [EDX + 0xc],AX
006AE93F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AE942  66 89 48 0E               MOV word ptr [EAX + 0xe],CX
006AE946  E9 2C 12 00 00            JMP 0x006afb77
LAB_006ae94b:
006AE94B  39 4D 34                  CMP dword ptr [EBP + 0x34],ECX
006AE94E  0F 84 0D 0F 00 00         JZ 0x006af861
006AE954  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006AE957  85 C0                     TEST EAX,EAX
006AE959  0F 8E 02 0F 00 00         JLE 0x006af861
006AE95F  8B D0                     MOV EDX,EAX
006AE961  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
006AE964  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006AE967  8D 44 12 01               LEA EAX,[EDX + EDX*0x1 + 0x1]
006AE96B  8B C8                     MOV ECX,EAX
006AE96D  0F AF C8                  IMUL ECX,EAX
006AE970  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006AE973  8D 7C 01 01               LEA EDI,[ECX + EAX*0x1 + 0x1]
006AE977  0F AF FA                  IMUL EDI,EDX
006AE97A  8D 3C 7B                  LEA EDI,[EBX + EDI*0x2]
006AE97D  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
006AE980  3B DA                     CMP EBX,EDX
006AE982  89 7D B8                  MOV dword ptr [EBP + -0x48],EDI
006AE985  7F 37                     JG 0x006ae9be
006AE987  39 95 78 FF FF FF         CMP dword ptr [EBP + 0xffffff78],EDX
006AE98D  7F 2F                     JG 0x006ae9be
006AE98F  39 95 7C FF FF FF         CMP dword ptr [EBP + 0xffffff7c],EDX
006AE995  7F 27                     JG 0x006ae9be
006AE997  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006AE99A  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
006AE99D  0F AF D1                  IMUL EDX,ECX
006AE9A0  8B 4D 90                  MOV ECX,dword ptr [EBP + -0x70]
006AE9A3  0F AF C8                  IMUL ECX,EAX
006AE9A6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AE9A9  03 D1                     ADD EDX,ECX
006AE9AB  2B D0                     SUB EDX,EAX
006AE9AD  03 D3                     ADD EDX,EBX
006AE9AF  66 83 3C 57 FD            CMP word ptr [EDI + EDX*0x2],-0x3
006AE9B4  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
006AE9B7  75 05                     JNZ 0x006ae9be
006AE9B9  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_006ae9be:
006AE9BE  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_006ae9c1:
006AE9C1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AE9C4  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AE9C7  8D 55 BC                  LEA EDX,[EBP + -0x44]
006AE9CA  52                        PUSH EDX
006AE9CB  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AE9CE  50                        PUSH EAX
006AE9CF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AE9D2  51                        PUSH ECX
006AE9D3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AE9D6  52                        PUSH EDX
006AE9D7  50                        PUSH EAX
006AE9D8  51                        PUSH ECX
006AE9D9  56                        PUSH ESI
006AE9DA  E8 41 75 FF FF            CALL 0x006a5f20
006AE9DF  0F BF 14 C5 70 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed570]
006AE9E7  0F BF 0C C5 72 D5 7E 00   MOVSX ECX,word ptr [EAX*0x8 + 0x7ed572]
006AE9EF  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006AE9F2  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006AE9F5  0F BF 14 C5 74 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed574]
006AE9FD  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006AEA00  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006AEA03  85 C0                     TEST EAX,EAX
006AEA05  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006AEA08  0F 8E CC 04 00 00         JLE 0x006aeeda
006AEA0E  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
006AEA11  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AEA14  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006AEA18  8B CF                     MOV ECX,EDI
006AEA1A  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006AEA20  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AEA24  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006AEA27  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006AEA2A  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006AEA2D  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006AEA30  03 D6                     ADD EDX,ESI
006AEA32  8D 44 00 01               LEA EAX,[EAX + EAX*0x1 + 0x1]
006AEA36  8B C8                     MOV ECX,EAX
006AEA38  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
006AEA3B  0F AF 4D 1C               IMUL ECX,dword ptr [EBP + 0x1c]
006AEA3F  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006AEA42  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AEA45  0F AF 4D F4               IMUL ECX,dword ptr [EBP + -0xc]
006AEA49  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006AEA4C  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AEA4F  0F AF 4D 20               IMUL ECX,dword ptr [EBP + 0x20]
006AEA53  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006AEA56  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AEA59  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AEA5D  8B D8                     MOV EBX,EAX
006AEA5F  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
006AEA63  89 4D C4                  MOV dword ptr [EBP + -0x3c],ECX
006AEA66  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AEA69  0F AF 4D C0               IMUL ECX,dword ptr [EBP + -0x40]
006AEA6D  0F AF DF                  IMUL EBX,EDI
006AEA70  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AEA73  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006AEA76  0F AF 45 E4               IMUL EAX,dword ptr [EBP + -0x1c]
006AEA7A  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006AEA7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AEA80  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006AEA83  8D 04 CD 50 00 00 00      LEA EAX,[ECX*0x8 + 0x50]
006AEA8A  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006AEA8D  EB 06                     JMP 0x006aea95
LAB_006aea8f:
006AEA8F  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006AEA92  8B 5D 8C                  MOV EBX,dword ptr [EBP + -0x74]
LAB_006aea95:
006AEA95  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AEA98  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006AEA9B  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
006AEA9E  2B C1                     SUB EAX,ECX
006AEAA0  8B CB                     MOV ECX,EBX
006AEAA2  2B CF                     SUB ECX,EDI
006AEAA4  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006AEAA7  2B C7                     SUB EAX,EDI
006AEAA9  03 C1                     ADD EAX,ECX
006AEAAB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006AEAAE  03 C6                     ADD EAX,ESI
006AEAB0  8D 3C 41                  LEA EDI,[ECX + EAX*0x2]
006AEAB3  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006AEAB6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AEAB9  03 F0                     ADD ESI,EAX
006AEABB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006AEABE  03 C8                     ADD ECX,EAX
006AEAC0  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006AEAC3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AEAC6  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AEAC9  03 D9                     ADD EBX,ECX
006AEACB  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AEACE  03 C1                     ADD EAX,ECX
006AEAD0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AEAD3  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006AEAD6  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AEAD9  03 C8                     ADD ECX,EAX
006AEADB  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AEADE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006AEAE1  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006AEAE4  03 C1                     ADD EAX,ECX
006AEAE6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AEAE9  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006AEAEC  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006AEAF2  03 C1                     ADD EAX,ECX
006AEAF4  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006AEAF7  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
006AEAFD  03 C1                     ADD EAX,ECX
006AEAFF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AEB02  03 C6                     ADD EAX,ESI
006AEB04  89 5D 8C                  MOV dword ptr [EBP + -0x74],EBX
006AEB07  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
006AEB0C  8D 04 41                  LEA EAX,[ECX + EAX*0x2]
006AEB0F  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006AEB12  0F 8C CF 03 00 00         JL 0x006aeee7
006AEB18  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AEB1B  8B 4D 9C                  MOV ECX,dword ptr [EBP + -0x64]
006AEB1E  2B C1                     SUB EAX,ECX
006AEB20  8B CB                     MOV ECX,EBX
006AEB22  8B 5D 98                  MOV EBX,dword ptr [EBP + -0x68]
006AEB25  2B CB                     SUB ECX,EBX
006AEB27  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006AEB2A  2B C3                     SUB EAX,EBX
006AEB2C  03 C1                     ADD EAX,ECX
006AEB2E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006AEB31  03 C6                     ADD EAX,ESI
006AEB33  66 83 3C 41 00            CMP word ptr [ECX + EAX*0x2],0x0
006AEB38  0F 8C A9 03 00 00         JL 0x006aeee7
006AEB3E  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006AEB41  66 8B 1C C5 76 D5 7E 00   MOV BX,word ptr [EAX*0x8 + 0x7ed576]
006AEB49  8D 04 C5 76 D5 7E 00      LEA EAX,[EAX*0x8 + 0x7ed576]
006AEB50  F6 C3 01                  TEST BL,0x1
006AEB53  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006AEB56  89 5D 88                  MOV dword ptr [EBP + -0x78],EBX
006AEB59  0F 84 35 02 00 00         JZ 0x006aed94
006AEB5F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006AEB62  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
006AEB66  81 E1 00 C0 00 00         AND ECX,0xc000
006AEB6C  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEB72  0F 84 6F 03 00 00         JZ 0x006aeee7
006AEB78  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AEB7B  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006AEB7F  81 E1 00 C0 00 00         AND ECX,0xc000
006AEB85  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEB8B  0F 84 56 03 00 00         JZ 0x006aeee7
006AEB91  66 8B 0C 47               MOV CX,word ptr [EDI + EAX*0x2]
006AEB95  81 E1 00 C0 00 00         AND ECX,0xc000
006AEB9B  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEBA1  0F 84 40 03 00 00         JZ 0x006aeee7
006AEBA7  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AEBAA  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006AEBAE  81 E1 00 C0 00 00         AND ECX,0xc000
006AEBB4  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEBBA  0F 84 27 03 00 00         JZ 0x006aeee7
006AEBC0  8B CB                     MOV ECX,EBX
006AEBC2  81 E1 00 40 00 00         AND ECX,0x4000
006AEBC8  66 85 C9                  TEST CX,CX
006AEBCB  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006AEBCE  0F 84 E5 00 00 00         JZ 0x006aecb9
006AEBD4  03 C9                     ADD ECX,ECX
006AEBD6  8B DA                     MOV EBX,EDX
006AEBD8  2B D9                     SUB EBX,ECX
006AEBDA  66 8B 0B                  MOV CX,word ptr [EBX]
006AEBDD  81 E1 00 C0 00 00         AND ECX,0xc000
006AEBE3  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEBE9  0F 84 F8 02 00 00         JZ 0x006aeee7
006AEBEF  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006AEBF2  8B D8                     MOV EBX,EAX
006AEBF4  2B D9                     SUB EBX,ECX
006AEBF6  66 8B 1C 5A               MOV BX,word ptr [EDX + EBX*0x2]
006AEBFA  81 E3 00 C0 00 00         AND EBX,0xc000
006AEC00  81 FB 00 C0 00 00         CMP EBX,0xc000
006AEC06  0F 84 DB 02 00 00         JZ 0x006aeee7
006AEC0C  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
006AEC0F  2B D9                     SUB EBX,ECX
006AEC11  66 8B 0C 5A               MOV CX,word ptr [EDX + EBX*0x2]
006AEC15  81 E1 00 C0 00 00         AND ECX,0xc000
006AEC1B  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEC21  0F 84 C0 02 00 00         JZ 0x006aeee7
006AEC27  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AEC2A  03 C8                     ADD ECX,EAX
006AEC2C  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006AEC30  81 E1 00 C0 00 00         AND ECX,0xc000
006AEC36  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEC3C  0F 84 A5 02 00 00         JZ 0x006aeee7
006AEC42  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AEC45  8B DF                     MOV EBX,EDI
006AEC47  03 C9                     ADD ECX,ECX
006AEC49  2B D9                     SUB EBX,ECX
006AEC4B  66 8B 0B                  MOV CX,word ptr [EBX]
006AEC4E  81 E1 00 C0 00 00         AND ECX,0xc000
006AEC54  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEC5A  0F 84 87 02 00 00         JZ 0x006aeee7
006AEC60  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AEC63  8B D8                     MOV EBX,EAX
006AEC65  2B D9                     SUB EBX,ECX
006AEC67  66 8B 1C 5F               MOV BX,word ptr [EDI + EBX*0x2]
006AEC6B  81 E3 00 C0 00 00         AND EBX,0xc000
006AEC71  81 FB 00 C0 00 00         CMP EBX,0xc000
006AEC77  0F 84 6A 02 00 00         JZ 0x006aeee7
006AEC7D  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
006AEC80  2B D9                     SUB EBX,ECX
006AEC82  66 8B 0C 5F               MOV CX,word ptr [EDI + EBX*0x2]
006AEC86  81 E1 00 C0 00 00         AND ECX,0xc000
006AEC8C  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEC92  0F 84 4F 02 00 00         JZ 0x006aeee7
006AEC98  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AEC9B  03 C8                     ADD ECX,EAX
006AEC9D  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006AECA1  81 E1 00 C0 00 00         AND ECX,0xc000
006AECA7  81 F9 00 C0 00 00         CMP ECX,0xc000
006AECAD  0F 84 34 02 00 00         JZ 0x006aeee7
006AECB3  8B 5D 88                  MOV EBX,dword ptr [EBP + -0x78]
006AECB6  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
LAB_006aecb9:
006AECB9  81 E3 00 20 00 00         AND EBX,0x2000
006AECBF  66 85 DB                  TEST BX,BX
006AECC2  0F 84 71 01 00 00         JZ 0x006aee39
006AECC8  66 8B 1C 4A               MOV BX,word ptr [EDX + ECX*0x2]
006AECCC  81 E3 00 C0 00 00         AND EBX,0xc000
006AECD2  81 FB 00 C0 00 00         CMP EBX,0xc000
006AECD8  0F 84 09 02 00 00         JZ 0x006aeee7
006AECDE  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
006AECE1  66 8B 1C 5A               MOV BX,word ptr [EDX + EBX*0x2]
006AECE5  81 E3 00 C0 00 00         AND EBX,0xc000
006AECEB  81 FB 00 C0 00 00         CMP EBX,0xc000
006AECF1  0F 84 F0 01 00 00         JZ 0x006aeee7
006AECF7  8B 5D C4                  MOV EBX,dword ptr [EBP + -0x3c]
006AECFA  03 CB                     ADD ECX,EBX
006AECFC  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006AED00  81 E1 00 C0 00 00         AND ECX,0xc000
006AED06  81 F9 00 C0 00 00         CMP ECX,0xc000
006AED0C  0F 84 D5 01 00 00         JZ 0x006aeee7
006AED12  03 D8                     ADD EBX,EAX
006AED14  66 8B 14 5A               MOV DX,word ptr [EDX + EBX*0x2]
006AED18  81 E2 00 C0 00 00         AND EDX,0xc000
006AED1E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AED24  0F 84 BD 01 00 00         JZ 0x006aeee7
006AED2A  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AED2D  66 8B 14 4F               MOV DX,word ptr [EDI + ECX*0x2]
006AED31  81 E2 00 C0 00 00         AND EDX,0xc000
006AED37  81 FA 00 C0 00 00         CMP EDX,0xc000
006AED3D  0F 84 A4 01 00 00         JZ 0x006aeee7
006AED43  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006AED46  66 8B 14 57               MOV DX,word ptr [EDI + EDX*0x2]
006AED4A  81 E2 00 C0 00 00         AND EDX,0xc000
006AED50  81 FA 00 C0 00 00         CMP EDX,0xc000
006AED56  0F 84 8B 01 00 00         JZ 0x006aeee7
006AED5C  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006AED5F  03 CA                     ADD ECX,EDX
006AED61  66 8B 0C 4F               MOV CX,word ptr [EDI + ECX*0x2]
006AED65  81 E1 00 C0 00 00         AND ECX,0xc000
006AED6B  81 F9 00 C0 00 00         CMP ECX,0xc000
006AED71  0F 84 70 01 00 00         JZ 0x006aeee7
006AED77  03 D0                     ADD EDX,EAX
006AED79  66 8B 14 57               MOV DX,word ptr [EDI + EDX*0x2]
LAB_006aed7d:
006AED7D  81 E2 00 C0 00 00         AND EDX,0xc000
006AED83  81 FA 00 C0 00 00         CMP EDX,0xc000
006AED89  0F 84 58 01 00 00         JZ 0x006aeee7
006AED8F  E9 A5 00 00 00            JMP 0x006aee39
LAB_006aed94:
006AED94  8B C3                     MOV EAX,EBX
006AED96  25 00 60 00 00            AND EAX,0x6000
006AED9B  66 85 C0                  TEST AX,AX
006AED9E  0F 84 95 00 00 00         JZ 0x006aee39
006AEDA4  80 E7 9F                  AND BH,0x9f
006AEDA7  66 81 FB FE 0F            CMP BX,0xffe
006AEDAC  0F 84 87 00 00 00         JZ 0x006aee39
006AEDB2  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AEDB5  66 8B 04 4A               MOV AX,word ptr [EDX + ECX*0x2]
006AEDB9  25 00 C0 00 00            AND EAX,0xc000
006AEDBE  3D 00 C0 00 00            CMP EAX,0xc000
006AEDC3  0F 84 1E 01 00 00         JZ 0x006aeee7
006AEDC9  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006AEDCC  66 8B 04 4F               MOV AX,word ptr [EDI + ECX*0x2]
006AEDD0  25 00 C0 00 00            AND EAX,0xc000
006AEDD5  3D 00 C0 00 00            CMP EAX,0xc000
006AEDDA  0F 84 07 01 00 00         JZ 0x006aeee7
006AEDE0  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006AEDE3  85 C0                     TEST EAX,EAX
006AEDE5  75 22                     JNZ 0x006aee09
006AEDE7  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006AEDEA  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
006AEDEE  81 E1 00 C0 00 00         AND ECX,0xc000
006AEDF4  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEDFA  0F 84 E7 00 00 00         JZ 0x006aeee7
006AEE00  66 8B 14 47               MOV DX,word ptr [EDI + EAX*0x2]
006AEE04  E9 74 FF FF FF            JMP 0x006aed7d
LAB_006aee09:
006AEE09  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006AEE0C  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
006AEE10  81 E1 00 C0 00 00         AND ECX,0xc000
006AEE16  81 F9 00 C0 00 00         CMP ECX,0xc000
006AEE1C  0F 84 C5 00 00 00         JZ 0x006aeee7
006AEE22  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006AEE25  66 8B 04 57               MOV AX,word ptr [EDI + EDX*0x2]
006AEE29  25 00 C0 00 00            AND EAX,0xc000
006AEE2E  3D 00 C0 00 00            CMP EAX,0xc000
006AEE33  0F 84 AE 00 00 00         JZ 0x006aeee7
LAB_006aee39:
006AEE39  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
006AEE3C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AEE3F  3B F8                     CMP EDI,EAX
006AEE41  7C 2C                     JL 0x006aee6f
006AEE43  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006AEE46  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AEE49  51                        PUSH ECX
006AEE4A  52                        PUSH EDX
006AEE4B  E8 00 E1 FF FF            CALL 0x006acf50
006AEE50  85 C0                     TEST EAX,EAX
006AEE52  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006AEE55  0F 84 2F 03 00 00         JZ 0x006af18a
006AEE5B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AEE5E  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006AEE61  83 C2 0A                  ADD EDX,0xa
006AEE64  83 C1 50                  ADD ECX,0x50
006AEE67  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006AEE6A  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006AEE6D  EB 03                     JMP 0x006aee72
LAB_006aee6f:
006AEE6F  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_006aee72:
006AEE72  66 89 34 F8               MOV word ptr [EAX + EDI*0x8],SI
006AEE76  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006AEE79  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AEE7C  66 89 44 F9 02            MOV word ptr [ECX + EDI*0x8 + 0x2],AX
006AEE81  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AEE84  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AEE87  66 89 4C FA 04            MOV word ptr [EDX + EDI*0x8 + 0x4],CX
006AEE8C  8B 55 94                  MOV EDX,dword ptr [EBP + -0x6c]
006AEE8F  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006AEE92  47                        INC EDI
006AEE93  66 8B 12                  MOV DX,word ptr [EDX]
006AEE96  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
006AEE99  66 89 54 FB FE            MOV word ptr [EBX + EDI*0x8 + -0x2],DX
006AEE9E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AEEA1  3B F2                     CMP ESI,EDX
006AEEA3  75 0E                     JNZ 0x006aeeb3
006AEEA5  3B 45 28                  CMP EAX,dword ptr [EBP + 0x28]
006AEEA8  75 09                     JNZ 0x006aeeb3
006AEEAA  3B 4D 2C                  CMP ECX,dword ptr [EBP + 0x2c]
006AEEAD  0F 84 C4 0C 00 00         JZ 0x006afb77
LAB_006aeeb3:
006AEEB3  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006AEEB6  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006AEEB9  4A                        DEC EDX
006AEEBA  4F                        DEC EDI
006AEEBB  85 FF                     TEST EDI,EDI
006AEEBD  C7 45 A4 00 00 00 00      MOV dword ptr [EBP + -0x5c],0x0
006AEEC4  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006AEEC7  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
006AEECA  0F 8E 91 09 00 00         JLE 0x006af861
006AEED0  8B C2                     MOV EAX,EDX
006AEED2  85 C0                     TEST EAX,EAX
006AEED4  0F 8F B5 FB FF FF         JG 0x006aea8f
LAB_006aeeda:
006AEEDA  85 FF                     TEST EDI,EDI
006AEEDC  0F 8E 7F 09 00 00         JLE 0x006af861
006AEEE2  E9 DA FA FF FF            JMP 0x006ae9c1
LAB_006aeee7:
006AEEE7  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006AEEEA  8D 45 F0                  LEA EAX,[EBP + -0x10]
006AEEED  50                        PUSH EAX
006AEEEE  E8 6D C1 FF FF            CALL 0x006ab060
006AEEF3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AEEF6  8B C6                     MOV EAX,ESI
006AEEF8  3B CE                     CMP ECX,ESI
006AEEFA  7D 02                     JGE 0x006aeefe
006AEEFC  8B C1                     MOV EAX,ECX
LAB_006aeefe:
006AEEFE  F7 D8                     NEG EAX
006AEF00  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006AEF03  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006AEF06  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
006AEF09  3B D0                     CMP EDX,EAX
006AEF0B  7D 05                     JGE 0x006aef12
006AEF0D  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006AEF10  EB 06                     JMP 0x006aef18
LAB_006aef12:
006AEF12  2B C1                     SUB EAX,ECX
006AEF14  48                        DEC EAX
006AEF15  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006aef18:
006AEF18  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AEF1B  8B C6                     MOV EAX,ESI
006AEF1D  3B CE                     CMP ECX,ESI
006AEF1F  7D 02                     JGE 0x006aef23
006AEF21  8B C1                     MOV EAX,ECX
LAB_006aef23:
006AEF23  F7 D8                     NEG EAX
006AEF25  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006AEF28  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AEF2B  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
006AEF2E  3B D0                     CMP EDX,EAX
006AEF30  7D 05                     JGE 0x006aef37
006AEF32  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006AEF35  EB 06                     JMP 0x006aef3d
LAB_006aef37:
006AEF37  2B C1                     SUB EAX,ECX
006AEF39  48                        DEC EAX
006AEF3A  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
LAB_006aef3d:
006AEF3D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AEF40  8B DE                     MOV EBX,ESI
006AEF42  3B CE                     CMP ECX,ESI
006AEF44  7D 02                     JGE 0x006aef48
006AEF46  8B D9                     MOV EBX,ECX
LAB_006aef48:
006AEF48  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AEF4B  8D 14 31                  LEA EDX,[ECX + ESI*0x1]
006AEF4E  F7 DB                     NEG EBX
006AEF50  3B D0                     CMP EDX,EAX
006AEF52  89 5D B4                  MOV dword ptr [EBP + -0x4c],EBX
006AEF55  7D 07                     JGE 0x006aef5e
006AEF57  8B FE                     MOV EDI,ESI
006AEF59  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006AEF5C  EB 08                     JMP 0x006aef66
LAB_006aef5e:
006AEF5E  2B C1                     SUB EAX,ECX
006AEF60  48                        DEC EAX
006AEF61  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006AEF64  8B F8                     MOV EDI,EAX
LAB_006aef66:
006AEF66  8B C3                     MOV EAX,EBX
006AEF68  F7 D8                     NEG EAX
006AEF6A  3B C6                     CMP EAX,ESI
006AEF6C  7D 16                     JGE 0x006aef84
006AEF6E  8D 0C 33                  LEA ECX,[EBX + ESI*0x1]
006AEF71  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006AEF74  0F AF 4D CC               IMUL ECX,dword ptr [EBP + -0x34]
006AEF78  68 FF FF 00 00            PUSH 0xffff
006AEF7D  51                        PUSH ECX
006AEF7E  52                        PUSH EDX
006AEF7F  E8 3C F7 01 00            CALL 0x006ce6c0
LAB_006aef84:
006AEF84  3B FE                     CMP EDI,ESI
006AEF86  7D 23                     JGE 0x006aefab
006AEF88  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006AEF8B  8B CE                     MOV ECX,ESI
006AEF8D  2B CF                     SUB ECX,EDI
006AEF8F  8D 54 37 01               LEA EDX,[EDI + ESI*0x1 + 0x1]
006AEF93  0F AF C8                  IMUL ECX,EAX
006AEF96  0F AF D0                  IMUL EDX,EAX
006AEF99  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006AEF9C  68 FF FF 00 00            PUSH 0xffff
006AEFA1  51                        PUSH ECX
006AEFA2  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AEFA5  51                        PUSH ECX
006AEFA6  E8 15 F7 01 00            CALL 0x006ce6c0
LAB_006aefab:
006AEFAB  3B DF                     CMP EBX,EDI
006AEFAD  0F 8F A0 01 00 00         JG 0x006af153
006AEFB3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AEFB6  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006AEFB9  8B C1                     MOV EAX,ECX
006AEFBB  8B F9                     MOV EDI,ECX
006AEFBD  F7 D8                     NEG EAX
006AEFBF  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
006AEFC2  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006AEFC5  89 45 8C                  MOV dword ptr [EBP + -0x74],EAX
006AEFC8  8B D3                     MOV EDX,EBX
006AEFCA  0F AF 55 CC               IMUL EDX,dword ptr [EBP + -0x34]
006AEFCE  8D 44 36 01               LEA EAX,[ESI + ESI*0x1 + 0x1]
006AEFD2  0F AF F8                  IMUL EDI,EAX
006AEFD5  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AEFD8  03 D7                     ADD EDX,EDI
006AEFDA  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006AEFDD  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006AEFE0  8D 04 33                  LEA EAX,[EBX + ESI*0x1]
006AEFE3  0F AF 45 CC               IMUL EAX,dword ptr [EBP + -0x34]
006AEFE7  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006AEFEA  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006AEFED  2B FB                     SUB EDI,EBX
006AEFEF  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006AEFF2  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006AEFF5  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006AEFF8  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
006AEFFB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AEFFE  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006AF002  03 CA                     ADD ECX,EDX
006AF004  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AF007  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AF00B  03 D0                     ADD EDX,EAX
006AF00D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006AF010  03 CA                     ADD ECX,EDX
006AF012  47                        INC EDI
006AF013  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
006AF016  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
006AF019  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
LAB_006af01c:
006AF01C  8B 45 94                  MOV EAX,dword ptr [EBP + -0x6c]
006AF01F  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
006AF022  3B C6                     CMP EAX,ESI
006AF024  7D 1B                     JGE 0x006af041
006AF026  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF029  8D 44 36 01               LEA EAX,[ESI + ESI*0x1 + 0x1]
006AF02D  03 D6                     ADD EDX,ESI
006AF02F  68 FF FF 00 00            PUSH 0xffff
006AF034  0F AF D0                  IMUL EDX,EAX
006AF037  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AF03A  52                        PUSH EDX
006AF03B  50                        PUSH EAX
006AF03C  E8 7F F6 01 00            CALL 0x006ce6c0
LAB_006af041:
006AF041  3B DE                     CMP EBX,ESI
006AF043  7D 24                     JGE 0x006af069
006AF045  8B CE                     MOV ECX,ESI
006AF047  8D 44 36 01               LEA EAX,[ESI + ESI*0x1 + 0x1]
006AF04B  2B CB                     SUB ECX,EBX
006AF04D  8D 54 33 01               LEA EDX,[EBX + ESI*0x1 + 0x1]
006AF051  0F AF C8                  IMUL ECX,EAX
006AF054  0F AF D0                  IMUL EDX,EAX
006AF057  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AF05A  68 FF FF 00 00            PUSH 0xffff
006AF05F  51                        PUSH ECX
006AF060  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
006AF063  51                        PUSH ECX
006AF064  E8 57 F6 01 00            CALL 0x006ce6c0
LAB_006af069:
006AF069  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AF06C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AF06F  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006AF072  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006AF075  3B C8                     CMP ECX,EAX
006AF077  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
006AF07A  0F 8F A6 00 00 00         JG 0x006af126
006AF080  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
006AF083  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AF086  2B C7                     SUB EAX,EDI
006AF088  F7 D9                     NEG ECX
006AF08A  40                        INC EAX
006AF08B  89 4D 88                  MOV dword ptr [EBP + -0x78],ECX
006AF08E  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006AF091  EB 03                     JMP 0x006af096
LAB_006af093:
006AF093  8B 4D 88                  MOV ECX,dword ptr [EBP + -0x78]
LAB_006af096:
006AF096  3B CE                     CMP ECX,ESI
006AF098  7D 1C                     JGE 0x006af0b6
006AF09A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AF09D  8B C6                     MOV EAX,ESI
006AF09F  F7 D8                     NEG EAX
006AF0A1  3B C1                     CMP EAX,ECX
006AF0A3  7D 11                     JGE 0x006af0b6
006AF0A5  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
006AF0A8  2B C8                     SUB ECX,EAX
006AF0AA  83 C8 FF                  OR EAX,0xffffffff
006AF0AD  D1 E9                     SHR ECX,0x1
006AF0AF  F3 AB                     STOSD.REP ES:EDI
006AF0B1  13 C9                     ADC ECX,ECX
006AF0B3  66 F3 AB                  STOSW.REP ES:EDI
LAB_006af0b6:
006AF0B6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF0B9  3B C6                     CMP EAX,ESI
006AF0BB  7D 19                     JGE 0x006af0d6
006AF0BD  40                        INC EAX
006AF0BE  3B C6                     CMP EAX,ESI
006AF0C0  7F 14                     JG 0x006af0d6
006AF0C2  8B CE                     MOV ECX,ESI
006AF0C4  8D 3C 42                  LEA EDI,[EDX + EAX*0x2]
006AF0C7  2B C8                     SUB ECX,EAX
006AF0C9  83 C8 FF                  OR EAX,0xffffffff
006AF0CC  41                        INC ECX
006AF0CD  D1 E9                     SHR ECX,0x1
006AF0CF  F3 AB                     STOSD.REP ES:EDI
006AF0D1  13 C9                     ADC ECX,ECX
006AF0D3  66 F3 AB                  STOSW.REP ES:EDI
LAB_006af0d6:
006AF0D6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AF0D9  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006AF0DC  3B C1                     CMP EAX,ECX
006AF0DE  7F 26                     JG 0x006af106
006AF0E0  8D 0C 42                  LEA ECX,[EDX + EAX*0x2]
006AF0E3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF0E6  8B FB                     MOV EDI,EBX
006AF0E8  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AF0EB  2B C3                     SUB EAX,EBX
006AF0ED  2B FA                     SUB EDI,EDX
006AF0EF  40                        INC EAX
LAB_006af0f0:
006AF0F0  66 83 39 00               CMP word ptr [ECX],0x0
006AF0F4  75 07                     JNZ 0x006af0fd
006AF0F6  66 8B 1C 0F               MOV BX,word ptr [EDI + ECX*0x1]
006AF0FA  66 89 19                  MOV word ptr [ECX],BX
LAB_006af0fd:
006AF0FD  83 C1 02                  ADD ECX,0x2
006AF100  48                        DEC EAX
006AF101  75 ED                     JNZ 0x006af0f0
006AF103  8B 5D AC                  MOV EBX,dword ptr [EBP + -0x54]
LAB_006af106:
006AF106  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006AF109  8D 44 36 01               LEA EAX,[ESI + ESI*0x1 + 0x1]
006AF10D  8D 14 42                  LEA EDX,[EDX + EAX*0x2]
006AF110  8B 45 98                  MOV EAX,dword ptr [EBP + -0x68]
006AF113  8D 1C 4B                  LEA EBX,[EBX + ECX*0x2]
006AF116  48                        DEC EAX
006AF117  89 5D AC                  MOV dword ptr [EBP + -0x54],EBX
006AF11A  89 45 98                  MOV dword ptr [EBP + -0x68],EAX
006AF11D  0F 85 70 FF FF FF         JNZ 0x006af093
006AF123  8B 7D 9C                  MOV EDI,dword ptr [EBP + -0x64]
LAB_006af126:
006AF126  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
006AF129  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006AF12C  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006AF12F  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006AF132  03 DA                     ADD EBX,EDX
006AF134  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AF137  03 C0                     ADD EAX,EAX
006AF139  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
006AF13C  03 D0                     ADD EDX,EAX
006AF13E  03 C8                     ADD ECX,EAX
006AF140  4F                        DEC EDI
006AF141  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006AF144  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006AF147  89 7D 9C                  MOV dword ptr [EBP + -0x64],EDI
006AF14A  0F 85 CC FE FF FF         JNZ 0x006af01c
006AF150  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
LAB_006af153:
006AF153  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006AF156  6A FF                     PUSH -0x1
006AF158  6A FF                     PUSH -0x1
006AF15A  6A FF                     PUSH -0x1
006AF15C  56                        PUSH ESI
006AF15D  56                        PUSH ESI
006AF15E  8D 7C 36 01               LEA EDI,[ESI + ESI*0x1 + 0x1]
006AF162  56                        PUSH ESI
006AF163  57                        PUSH EDI
006AF164  57                        PUSH EDI
006AF165  57                        PUSH EDI
006AF166  51                        PUSH ECX
006AF167  E8 24 BF FF FF            CALL 0x006ab090
006AF16C  85 C0                     TEST EAX,EAX
006AF16E  74 23                     JZ 0x006af193
006AF170  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006AF176  68 87 01 00 00            PUSH 0x187
006AF17B  68 5C DA 7E 00            PUSH 0x7eda5c
006AF180  52                        PUSH EDX
006AF181  6A FE                     PUSH -0x2
006AF183  E8 B8 6C FF FF            CALL 0x006a5e40
LAB_006af188:
006AF188  33 C0                     XOR EAX,EAX
LAB_006af18a:
006AF18A  5F                        POP EDI
006AF18B  5E                        POP ESI
006AF18C  5B                        POP EBX
006AF18D  8B E5                     MOV ESP,EBP
006AF18F  5D                        POP EBP
006AF190  C2 34 00                  RET 0x34
LAB_006af193:
006AF193  8B 45 90                  MOV EAX,dword ptr [EBP + -0x70]
006AF196  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
006AF199  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
006AF19C  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AF19F  8B C1                     MOV EAX,ECX
006AF1A1  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006AF1A4  99                        CDQ
006AF1A5  33 C2                     XOR EAX,EDX
006AF1A7  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006AF1AA  2B C2                     SUB EAX,EDX
006AF1AC  3B C6                     CMP EAX,ESI
006AF1AE  7F 4B                     JG 0x006af1fb
006AF1B0  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006AF1B3  99                        CDQ
006AF1B4  33 C2                     XOR EAX,EDX
006AF1B6  2B C2                     SUB EAX,EDX
006AF1B8  3B C6                     CMP EAX,ESI
006AF1BA  7F 3F                     JG 0x006af1fb
006AF1BC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AF1BF  99                        CDQ
006AF1C0  33 C2                     XOR EAX,EDX
006AF1C2  2B C2                     SUB EAX,EDX
006AF1C4  3B C6                     CMP EAX,ESI
006AF1C6  7F 33                     JG 0x006af1fb
006AF1C8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AF1CB  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006AF1CE  0F AF 45 CC               IMUL EAX,dword ptr [EBP + -0x34]
006AF1D2  0F AF D7                  IMUL EDX,EDI
006AF1D5  03 C8                     ADD ECX,EAX
006AF1D7  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AF1DA  03 D1                     ADD EDX,ECX
006AF1DC  66 83 3C 50 00            CMP word ptr [EAX + EDX*0x2],0x0
006AF1E1  0F 8E 90 09 00 00         JLE 0x006afb77
006AF1E7  33 DB                     XOR EBX,EBX
006AF1E9  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
006AF1F0  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
006AF1F3  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
006AF1F6  E9 5E 05 00 00            JMP 0x006af759
LAB_006af1fb:
006AF1FB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AF1FE  33 C0                     XOR EAX,EAX
006AF200  BE 00 7D 00 00            MOV ESI,0x7d00
006AF205  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006AF208  8D 3C 0B                  LEA EDI,[EBX + ECX*0x1]
006AF20B  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
006AF20E  3B F8                     CMP EDI,EAX
006AF210  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AF213  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006AF216  89 7D 90                  MOV dword ptr [EBP + -0x70],EDI
006AF219  7E 08                     JLE 0x006af223
006AF21B  8D 53 01                  LEA EDX,[EBX + 0x1]
006AF21E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006AF221  EB 03                     JMP 0x006af226
LAB_006af223:
006AF223  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
LAB_006af226:
006AF226  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006AF229  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
006AF22C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006AF22F  49                        DEC ECX
006AF230  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006AF233  3B C1                     CMP EAX,ECX
006AF235  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006AF238  7D 01                     JGE 0x006af23b
006AF23A  4A                        DEC EDX
LAB_006af23b:
006AF23B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF23E  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
006AF241  3B C2                     CMP EAX,EDX
006AF243  0F 8F 32 03 00 00         JG 0x006af57b
006AF249  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AF24C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006AF24F  99                        CDQ
006AF250  33 C2                     XOR EAX,EDX
006AF252  2B C2                     SUB EAX,EDX
006AF254  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AF257  03 CA                     ADD ECX,EDX
006AF259  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
006AF25C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AF25F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006AF262  0F AF CA                  IMUL ECX,EDX
006AF265  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006AF268  EB 03                     JMP 0x006af26d
LAB_006af26a:
006AF26A  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
LAB_006af26d:
006AF26D  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006AF270  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006AF273  3B C1                     CMP EAX,ECX
006AF275  0F 85 9E 00 00 00         JNZ 0x006af319
006AF27B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF27E  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006AF282  0F AF D0                  IMUL EDX,EAX
006AF285  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AF288  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AF28B  03 D0                     ADD EDX,EAX
006AF28D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AF290  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006AF293  8B D3                     MOV EDX,EBX
006AF295  3B 55 FC                  CMP EDX,dword ptr [EBP + -0x4]
006AF298  7F 7F                     JG 0x006af319
006AF29A  8B CB                     MOV ECX,EBX
006AF29C  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
006AF29F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_006af2a2:
006AF2A2  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006AF2A5  0F BF 38                  MOVSX EDI,word ptr [EAX]
006AF2A8  85 FF                     TEST EDI,EDI
006AF2AA  7E 56                     JLE 0x006af302
006AF2AC  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006AF2AF  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006AF2B2  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AF2B5  51                        PUSH ECX
006AF2B6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AF2B9  52                        PUSH EDX
006AF2BA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF2BD  50                        PUSH EAX
006AF2BE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AF2C1  51                        PUSH ECX
006AF2C2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006AF2C5  03 D0                     ADD EDX,EAX
006AF2C7  52                        PUSH EDX
006AF2C8  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
006AF2CB  52                        PUSH EDX
006AF2CC  E8 8F BB FF FF            CALL 0x006aae60
006AF2D1  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF2D5  3B C6                     CMP EAX,ESI
006AF2D7  7C 15                     JL 0x006af2ee
006AF2D9  75 27                     JNZ 0x006af302
006AF2DB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF2DE  3B F9                     CMP EDI,ECX
006AF2E0  7C 0C                     JL 0x006af2ee
006AF2E2  75 1E                     JNZ 0x006af302
006AF2E4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AF2E7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AF2EA  3B D1                     CMP EDX,ECX
006AF2EC  7E 14                     JLE 0x006af302
LAB_006af2ee:
006AF2EE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF2F1  8B F0                     MOV ESI,EAX
006AF2F3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF2F6  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF2F9  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006AF2FC  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006AF2FF  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006af302:
006AF302  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006AF305  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF308  43                        INC EBX
006AF309  83 C1 02                  ADD ECX,0x2
006AF30C  3B D8                     CMP EBX,EAX
006AF30E  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006AF311  7E 8F                     JLE 0x006af2a2
006AF313  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006AF316  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
LAB_006af319:
006AF319  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006AF31C  99                        CDQ
006AF31D  33 C2                     XOR EAX,EDX
006AF31F  2B C2                     SUB EAX,EDX
006AF321  3B C1                     CMP EAX,ECX
006AF323  0F 85 B8 00 00 00         JNZ 0x006af3e1
006AF329  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF32C  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006AF32F  8D 42 01                  LEA EAX,[EDX + 0x1]
006AF332  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AF335  8B D0                     MOV EDX,EAX
006AF337  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006AF33B  0F AF D0                  IMUL EDX,EAX
006AF33E  03 D3                     ADD EDX,EBX
006AF340  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
006AF343  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
006AF346  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006AF349  3B DF                     CMP EBX,EDI
006AF34B  0F 8D 90 00 00 00         JGE 0x006af3e1
006AF351  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AF354  03 C0                     ADD EAX,EAX
006AF356  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006AF359  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
006AF35C  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AF35F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006AF362  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006AF365  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006AF368  8B C2                     MOV EAX,EDX
LAB_006af36a:
006AF36A  0F BF 38                  MOVSX EDI,word ptr [EAX]
006AF36D  85 FF                     TEST EDI,EDI
006AF36F  7E 53                     JLE 0x006af3c4
006AF371  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AF374  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AF377  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AF37A  50                        PUSH EAX
006AF37B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF37E  51                        PUSH ECX
006AF37F  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006AF382  52                        PUSH EDX
006AF383  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AF386  50                        PUSH EAX
006AF387  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006AF38A  51                        PUSH ECX
006AF38B  03 C2                     ADD EAX,EDX
006AF38D  50                        PUSH EAX
006AF38E  E8 CD BA FF FF            CALL 0x006aae60
006AF393  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF397  3B C6                     CMP EAX,ESI
006AF399  7C 15                     JL 0x006af3b0
006AF39B  75 27                     JNZ 0x006af3c4
006AF39D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF3A0  3B F9                     CMP EDI,ECX
006AF3A2  7C 0C                     JL 0x006af3b0
006AF3A4  75 1E                     JNZ 0x006af3c4
006AF3A6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AF3A9  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AF3AC  3B D1                     CMP EDX,ECX
006AF3AE  7E 14                     JLE 0x006af3c4
LAB_006af3b0:
006AF3B0  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006AF3B3  8B F0                     MOV ESI,EAX
006AF3B5  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF3B8  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF3BB  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006AF3BE  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006AF3C1  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006af3c4:
006AF3C4  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006AF3C7  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF3CA  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006AF3CD  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006AF3D0  03 C1                     ADD EAX,ECX
006AF3D2  43                        INC EBX
006AF3D3  42                        INC EDX
006AF3D4  3B DF                     CMP EBX,EDI
006AF3D6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AF3D9  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006AF3DC  7C 8C                     JL 0x006af36a
006AF3DE  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
LAB_006af3e1:
006AF3E1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF3E4  99                        CDQ
006AF3E5  33 C2                     XOR EAX,EDX
006AF3E7  2B C2                     SUB EAX,EDX
006AF3E9  3B C1                     CMP EAX,ECX
006AF3EB  0F 85 B8 00 00 00         JNZ 0x006af4a9
006AF3F1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006AF3F4  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006AF3F7  8D 42 01                  LEA EAX,[EDX + 0x1]
006AF3FA  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AF3FD  8B D0                     MOV EDX,EAX
006AF3FF  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006AF403  0F AF D0                  IMUL EDX,EAX
006AF406  03 D3                     ADD EDX,EBX
006AF408  8B 5D B8                  MOV EBX,dword ptr [EBP + -0x48]
006AF40B  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
006AF40E  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006AF411  3B DF                     CMP EBX,EDI
006AF413  0F 8D 90 00 00 00         JGE 0x006af4a9
006AF419  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AF41C  03 C0                     ADD EAX,EAX
006AF41E  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006AF421  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
006AF424  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AF427  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006AF42A  8D 14 4A                  LEA EDX,[EDX + ECX*0x2]
006AF42D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006AF430  8B C2                     MOV EAX,EDX
LAB_006af432:
006AF432  0F BF 38                  MOVSX EDI,word ptr [EAX]
006AF435  85 FF                     TEST EDI,EDI
006AF437  7E 53                     JLE 0x006af48c
006AF439  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AF43C  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AF43F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AF442  50                        PUSH EAX
006AF443  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF446  51                        PUSH ECX
006AF447  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006AF44A  52                        PUSH EDX
006AF44B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AF44E  50                        PUSH EAX
006AF44F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF452  51                        PUSH ECX
006AF453  03 C2                     ADD EAX,EDX
006AF455  50                        PUSH EAX
006AF456  E8 05 BA FF FF            CALL 0x006aae60
006AF45B  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF45F  3B C6                     CMP EAX,ESI
006AF461  7C 15                     JL 0x006af478
006AF463  75 27                     JNZ 0x006af48c
006AF465  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF468  3B F9                     CMP EDI,ECX
006AF46A  7C 0C                     JL 0x006af478
006AF46C  75 1E                     JNZ 0x006af48c
006AF46E  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AF471  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AF474  3B D1                     CMP EDX,ECX
006AF476  7E 14                     JLE 0x006af48c
LAB_006af478:
006AF478  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AF47B  8B F0                     MOV ESI,EAX
006AF47D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF480  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF483  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006AF486  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
006AF489  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006af48c:
006AF48C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006AF48F  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF492  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006AF495  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006AF498  03 C1                     ADD EAX,ECX
006AF49A  43                        INC EBX
006AF49B  42                        INC EDX
006AF49C  3B DF                     CMP EBX,EDI
006AF49E  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006AF4A1  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006AF4A4  7C 8C                     JL 0x006af432
006AF4A6  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
LAB_006af4a9:
006AF4A9  8B C7                     MOV EAX,EDI
006AF4AB  99                        CDQ
006AF4AC  33 C2                     XOR EAX,EDX
006AF4AE  2B C2                     SUB EAX,EDX
006AF4B0  3B C1                     CMP EAX,ECX
006AF4B2  0F 85 99 00 00 00         JNZ 0x006af551
006AF4B8  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006AF4BB  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AF4BE  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AF4C1  8D 44 12 01               LEA EAX,[EDX + EDX*0x1 + 0x1]
006AF4C5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AF4C8  0F AF C8                  IMUL ECX,EAX
006AF4CB  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AF4CE  03 CA                     ADD ECX,EDX
006AF4D0  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
006AF4D3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006AF4D6  3B D9                     CMP EBX,ECX
006AF4D8  7F 77                     JG 0x006af551
006AF4DA  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006AF4DD  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006af4e0:
006AF4E0  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006AF4E3  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006AF4E6  85 FF                     TEST EDI,EDI
006AF4E8  7E 56                     JLE 0x006af540
006AF4EA  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AF4ED  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AF4F0  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AF4F3  50                        PUSH EAX
006AF4F4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF4F7  51                        PUSH ECX
006AF4F8  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AF4FB  52                        PUSH EDX
006AF4FC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AF4FF  50                        PUSH EAX
006AF500  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AF503  03 CA                     ADD ECX,EDX
006AF505  51                        PUSH ECX
006AF506  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006AF509  51                        PUSH ECX
006AF50A  E8 51 B9 FF FF            CALL 0x006aae60
006AF50F  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF513  3B C6                     CMP EAX,ESI
006AF515  7C 15                     JL 0x006af52c
006AF517  75 27                     JNZ 0x006af540
006AF519  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF51C  3B F9                     CMP EDI,ECX
006AF51E  7C 0C                     JL 0x006af52c
006AF520  75 1E                     JNZ 0x006af540
006AF522  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AF525  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AF528  3B CA                     CMP ECX,EDX
006AF52A  7E 14                     JLE 0x006af540
LAB_006af52c:
006AF52C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AF52F  8B F0                     MOV ESI,EAX
006AF531  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AF534  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF537  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006AF53A  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AF53D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006af540:
006AF540  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF543  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF546  43                        INC EBX
006AF547  83 C1 02                  ADD ECX,0x2
006AF54A  3B D8                     CMP EBX,EAX
006AF54C  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006AF54F  7E 8F                     JLE 0x006af4e0
LAB_006af551:
006AF551  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006AF554  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006AF557  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF55A  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006AF55D  03 FA                     ADD EDI,EDX
006AF55F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AF562  40                        INC EAX
006AF563  42                        INC EDX
006AF564  3B C1                     CMP EAX,ECX
006AF566  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006AF569  89 7D 14                  MOV dword ptr [EBP + 0x14],EDI
006AF56C  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006AF56F  0F 8E F5 FC FF FF         JLE 0x006af26a
006AF575  8B 7D 90                  MOV EDI,dword ptr [EBP + -0x70]
006AF578  8B 5D B4                  MOV EBX,dword ptr [EBP + -0x4c]
LAB_006af57b:
006AF57B  85 FF                     TEST EDI,EDI
006AF57D  0F 8E D2 00 00 00         JLE 0x006af655
006AF583  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006AF586  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AF589  0F AF 5D CC               IMUL EBX,dword ptr [EBP + -0x34]
006AF58D  8B D0                     MOV EDX,EAX
006AF58F  8D 4C 09 01               LEA ECX,[ECX + ECX*0x1 + 0x1]
006AF593  0F AF D1                  IMUL EDX,ECX
006AF596  03 DA                     ADD EBX,EDX
006AF598  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006AF59B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AF59E  8D 0C 5A                  LEA ECX,[EDX + EBX*0x2]
006AF5A1  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006AF5A4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AF5A7  3B C1                     CMP EAX,ECX
006AF5A9  0F 8F A6 00 00 00         JG 0x006af655
LAB_006af5af:
006AF5AF  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AF5B2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF5B5  3B D8                     CMP EBX,EAX
006AF5B7  7F 7A                     JG 0x006af633
006AF5B9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AF5BC  8D 04 5A                  LEA EAX,[EDX + EBX*0x2]
006AF5BF  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006af5c2:
006AF5C2  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF5C5  0F BF 39                  MOVSX EDI,word ptr [ECX]
006AF5C8  85 FF                     TEST EDI,EDI
006AF5CA  7E 56                     JLE 0x006af622
006AF5CC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AF5CF  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AF5D2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AF5D5  52                        PUSH EDX
006AF5D6  8B 55 90                  MOV EDX,dword ptr [EBP + -0x70]
006AF5D9  50                        PUSH EAX
006AF5DA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF5DD  51                        PUSH ECX
006AF5DE  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006AF5E1  52                        PUSH EDX
006AF5E2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006AF5E5  03 C1                     ADD EAX,ECX
006AF5E7  50                        PUSH EAX
006AF5E8  8D 04 13                  LEA EAX,[EBX + EDX*0x1]
006AF5EB  50                        PUSH EAX
006AF5EC  E8 6F B8 FF FF            CALL 0x006aae60
006AF5F1  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF5F5  3B C6                     CMP EAX,ESI
006AF5F7  7C 15                     JL 0x006af60e
006AF5F9  75 27                     JNZ 0x006af622
006AF5FB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF5FE  3B F9                     CMP EDI,ECX
006AF600  7C 0C                     JL 0x006af60e
006AF602  75 1E                     JNZ 0x006af622
006AF604  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006AF607  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
006AF60A  3B D1                     CMP EDX,ECX
006AF60C  7E 14                     JLE 0x006af622
LAB_006af60e:
006AF60E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006AF611  8B F0                     MOV ESI,EAX
006AF613  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006AF616  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF619  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006AF61C  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006AF61F  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_006af622:
006AF622  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF625  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF628  43                        INC EBX
006AF629  83 C1 02                  ADD ECX,0x2
006AF62C  3B D8                     CMP EBX,EAX
006AF62E  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006AF631  7E 8F                     JLE 0x006af5c2
LAB_006af633:
006AF633  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006AF636  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006AF639  8D 44 09 01               LEA EAX,[ECX + ECX*0x1 + 0x1]
006AF63D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AF640  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
006AF643  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006AF646  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF649  40                        INC EAX
006AF64A  3B C1                     CMP EAX,ECX
006AF64C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AF64F  0F 8E 5A FF FF FF         JLE 0x006af5af
LAB_006af655:
006AF655  8B 4D 94                  MOV ECX,dword ptr [EBP + -0x6c]
006AF658  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006AF65B  3B C1                     CMP EAX,ECX
006AF65D  0F 8D D5 00 00 00         JGE 0x006af738
006AF663  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006AF666  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AF669  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006AF66C  8B F9                     MOV EDI,ECX
006AF66E  0F AF 55 CC               IMUL EDX,dword ptr [EBP + -0x34]
006AF672  8D 44 00 01               LEA EAX,[EAX + EAX*0x1 + 0x1]
006AF676  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006AF679  0F AF F8                  IMUL EDI,EAX
006AF67C  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AF67F  03 D7                     ADD EDX,EDI
006AF681  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
006AF684  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006AF687  3B C8                     CMP ECX,EAX
006AF689  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006AF68C  0F 8F A6 00 00 00         JG 0x006af738
LAB_006af692:
006AF692  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006AF695  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF698  3B D8                     CMP EBX,EAX
006AF69A  7F 7A                     JG 0x006af716
006AF69C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006AF69F  8D 0C 58                  LEA ECX,[EAX + EBX*0x2]
006AF6A2  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
LAB_006af6a5:
006AF6A5  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
006AF6A8  0F BF 3A                  MOVSX EDI,word ptr [EDX]
006AF6AB  85 FF                     TEST EDI,EDI
006AF6AD  7E 56                     JLE 0x006af705
006AF6AF  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AF6B2  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AF6B5  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006AF6B8  50                        PUSH EAX
006AF6B9  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006AF6BC  51                        PUSH ECX
006AF6BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AF6C0  52                        PUSH EDX
006AF6C1  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AF6C4  50                        PUSH EAX
006AF6C5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AF6C8  03 CA                     ADD ECX,EDX
006AF6CA  51                        PUSH ECX
006AF6CB  8D 0C 03                  LEA ECX,[EBX + EAX*0x1]
006AF6CE  51                        PUSH ECX
006AF6CF  E8 8C B7 FF FF            CALL 0x006aae60
006AF6D4  8D 44 38 FF               LEA EAX,[EAX + EDI*0x1 + -0x1]
006AF6D8  3B C6                     CMP EAX,ESI
006AF6DA  7C 15                     JL 0x006af6f1
006AF6DC  75 27                     JNZ 0x006af705
006AF6DE  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AF6E1  3B F9                     CMP EDI,ECX
006AF6E3  7C 0C                     JL 0x006af6f1
006AF6E5  75 1E                     JNZ 0x006af705
006AF6E7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AF6EA  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AF6ED  3B CA                     CMP ECX,EDX
006AF6EF  7E 14                     JLE 0x006af705
LAB_006af6f1:
006AF6F1  8B 4D C4                  MOV ECX,dword ptr [EBP + -0x3c]
006AF6F4  8B F0                     MOV ESI,EAX
006AF6F6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF6F9  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006AF6FC  89 5D D8                  MOV dword ptr [EBP + -0x28],EBX
006AF6FF  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006AF702  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006af705:
006AF705  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006AF708  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF70B  43                        INC EBX
006AF70C  83 C1 02                  ADD ECX,0x2
006AF70F  3B D8                     CMP EBX,EAX
006AF711  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006AF714  7E 8F                     JLE 0x006af6a5
LAB_006af716:
006AF716  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006AF719  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006AF71C  8D 44 12 01               LEA EAX,[EDX + EDX*0x1 + 0x1]
006AF720  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
006AF723  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF726  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006AF729  40                        INC EAX
006AF72A  3B C1                     CMP EAX,ECX
006AF72C  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006AF72F  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006AF732  0F 8E 5A FF FF FF         JLE 0x006af692
LAB_006af738:
006AF738  81 FE 30 75 00 00         CMP ESI,0x7530
006AF73E  0F 8D 33 04 00 00         JGE 0x006afb77
006AF744  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006AF74A  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
006AF750  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
006AF753  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006AF756  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_006af759:
006AF759  8B 75 38                  MOV ESI,dword ptr [EBP + 0x38]
006AF75C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AF75F  0F AF 55 CC               IMUL EDX,dword ptr [EBP + -0x34]
006AF763  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006AF766  8D 7C 36 01               LEA EDI,[ESI + ESI*0x1 + 0x1]
006AF76A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006AF76D  0F AF CF                  IMUL ECX,EDI
006AF770  03 C2                     ADD EAX,EDX
006AF772  03 C8                     ADD ECX,EAX
006AF774  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006AF777  0F BF 0C 48               MOVSX ECX,word ptr [EAX + ECX*0x2]
006AF77B  0F BF 10                  MOVSX EDX,word ptr [EAX]
006AF77E  2B CA                     SUB ECX,EDX
006AF780  B8 56 55 55 55            MOV EAX,0x55555556
006AF785  83 C1 02                  ADD ECX,0x2
006AF788  F7 E9                     IMUL ECX
006AF78A  8B C2                     MOV EAX,EDX
006AF78C  C1 E8 1F                  SHR EAX,0x1f
006AF78F  03 D0                     ADD EDX,EAX
006AF791  8B CA                     MOV ECX,EDX
006AF793  8B C1                     MOV EAX,ECX
006AF795  99                        CDQ
006AF796  2B C2                     SUB EAX,EDX
006AF798  D1 F8                     SAR EAX,0x1
006AF79A  03 C8                     ADD ECX,EAX
006AF79C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006AF79F  3B D8                     CMP EBX,EAX
006AF7A1  7C 09                     JL 0x006af7ac
006AF7A3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006AF7A6  3B D8                     CMP EBX,EAX
006AF7A8  7D 0E                     JGE 0x006af7b8
006AF7AA  EB 0A                     JMP 0x006af7b6
LAB_006af7ac:
006AF7AC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006AF7AF  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006AF7B2  3B C3                     CMP EAX,EBX
006AF7B4  7C 02                     JL 0x006af7b8
LAB_006af7b6:
006AF7B6  8B D8                     MOV EBX,EAX
LAB_006af7b8:
006AF7B8  8D 5C 19 02               LEA EBX,[ECX + EBX*0x1 + 0x2]
006AF7BC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006AF7BF  8D 0C DD 00 00 00 00      LEA ECX,[EBX*0x8 + 0x0]
006AF7C6  51                        PUSH ECX
006AF7C7  E8 A4 B4 FF FF            CALL 0x006aac70
006AF7CC  85 C0                     TEST EAX,EAX
006AF7CE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006AF7D1  0F 84 B3 F9 FF FF         JZ 0x006af18a
006AF7D7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006AF7DA  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AF7DD  53                        PUSH EBX
006AF7DE  50                        PUSH EAX
006AF7DF  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006AF7E2  03 D6                     ADD EDX,ESI
006AF7E4  03 C6                     ADD EAX,ESI
006AF7E6  52                        PUSH EDX
006AF7E7  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006AF7EA  03 CE                     ADD ECX,ESI
006AF7EC  50                        PUSH EAX
006AF7ED  51                        PUSH ECX
006AF7EE  56                        PUSH ESI
006AF7EF  56                        PUSH ESI
006AF7F0  56                        PUSH ESI
006AF7F1  57                        PUSH EDI
006AF7F2  57                        PUSH EDI
006AF7F3  57                        PUSH EDI
006AF7F4  52                        PUSH EDX
006AF7F5  E8 B6 EB FF FF            CALL 0x006ae3b0
006AF7FA  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006AF7FD  8B C8                     MOV ECX,EAX
006AF7FF  33 C0                     XOR EAX,EAX
006AF801  85 C9                     TEST ECX,ECX
006AF803  7C 2A                     JL 0x006af82f
LAB_006af805:
006AF805  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006AF808  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AF80B  2B DE                     SUB EBX,ESI
006AF80D  66 01 1C C2               ADD word ptr [EDX + EAX*0x8],BX
006AF811  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006AF814  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AF817  2B DE                     SUB EBX,ESI
006AF819  66 01 5C C2 02            ADD word ptr [EDX + EAX*0x8 + 0x2],BX
006AF81E  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AF821  8B DF                     MOV EBX,EDI
006AF823  2B DE                     SUB EBX,ESI
006AF825  66 01 5C C2 04            ADD word ptr [EDX + EAX*0x8 + 0x4],BX
006AF82A  40                        INC EAX
006AF82B  3B C1                     CMP EAX,ECX
006AF82D  7E D6                     JLE 0x006af805
LAB_006af82f:
006AF82F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006AF832  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AF835  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
006AF83C  8D 34 02                  LEA ESI,[EDX + EAX*0x1]
006AF83F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006AF842  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006AF845  03 D0                     ADD EDX,EAX
006AF847  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006AF84A  03 C7                     ADD EAX,EDI
006AF84C  41                        INC ECX
006AF84D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006AF850  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006AF853  85 C0                     TEST EAX,EAX
006AF855  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006AF858  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006AF85B  0F 85 16 03 00 00         JNZ 0x006afb77
LAB_006af861:
006AF861  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
LAB_006af864:
006AF864  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006AF867  85 C9                     TEST ECX,ECX
006AF869  7F 21                     JG 0x006af88c
006AF86B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006AF86E  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006AF871  8D 4D BC                  LEA ECX,[EBP + -0x44]
006AF874  51                        PUSH ECX
006AF875  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006AF878  52                        PUSH EDX
006AF879  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006AF87C  50                        PUSH EAX
006AF87D  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AF880  51                        PUSH ECX
006AF881  52                        PUSH EDX
006AF882  50                        PUSH EAX
006AF883  56                        PUSH ESI
006AF884  E8 97 66 FF FF            CALL 0x006a5f20
006AF889  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_006af88c:
006AF88C  0F BF 0C C5 70 D5 7E 00   MOVSX ECX,word ptr [EAX*0x8 + 0x7ed570]
006AF894  0F BF 14 C5 72 D5 7E 00   MOVSX EDX,word ptr [EAX*0x8 + 0x7ed572]
006AF89C  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006AF89F  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006AF8A2  0F BF 0C C5 74 D5 7E 00   MOVSX ECX,word ptr [EAX*0x8 + 0x7ed574]
006AF8AA  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006AF8AD  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
006AF8B0  49                        DEC ECX
006AF8B1  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006AF8B4  0F 88 A8 02 00 00         JS 0x006afb62
006AF8BA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006AF8BD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006AF8C0  0F AF 45 C0               IMUL EAX,dword ptr [EBP + -0x40]
006AF8C4  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006AF8C8  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006AF8CB  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
006AF8CE  03 D6                     ADD EDX,ESI
006AF8D0  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006AF8D3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AF8D6  8D 1C 57                  LEA EBX,[EDI + EDX*0x2]
006AF8D9  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
006AF8DC  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006AF8E0  8B D1                     MOV EDX,ECX
006AF8E2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006AF8E5  0F AF 4D C0               IMUL ECX,dword ptr [EBP + -0x40]
006AF8E9  8D 04 C5 50 00 00 00      LEA EAX,[EAX*0x8 + 0x50]
006AF8F0  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006AF8F3  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006AF8F6  EB 06                     JMP 0x006af8fe
LAB_006af8f8:
006AF8F8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006AF8FB  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
LAB_006af8fe:
006AF8FE  8B C3                     MOV EAX,EBX
006AF900  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006AF903  03 F3                     ADD ESI,EBX
006AF905  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006AF908  01 5D F8                  ADD dword ptr [EBP + -0x8],EBX
006AF90B  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
006AF90E  01 5D F4                  ADD dword ptr [EBP + -0xc],EBX
006AF911  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006AF914  03 D9                     ADD EBX,ECX
006AF916  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006AF919  03 D7                     ADD EDX,EDI
006AF91B  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006AF91E  03 DA                     ADD EBX,EDX
006AF920  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006AF923  03 DE                     ADD EBX,ESI
006AF925  66 83 3C 59 00            CMP word ptr [ECX + EBX*0x2],0x0
006AF92A  8D 1C 59                  LEA EBX,[ECX + EBX*0x2]
006AF92D  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006AF930  0F 8C 38 02 00 00         JL 0x006afb6e
006AF936  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006AF939  66 8B 0C D5 76 D5 7E 00   MOV CX,word ptr [EDX*0x8 + 0x7ed576]
006AF941  F6 C1 01                  TEST CL,0x1
006AF944  0F 84 0F 01 00 00         JZ 0x006afa59
006AF94A  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006AF94D  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AF951  81 E2 00 C0 00 00         AND EDX,0xc000
006AF957  81 FA 00 C0 00 00         CMP EDX,0xc000
006AF95D  0F 84 0B 02 00 00         JZ 0x006afb6e
006AF963  66 8B 14 78               MOV DX,word ptr [EAX + EDI*0x2]
006AF967  81 E2 00 C0 00 00         AND EDX,0xc000
006AF96D  81 FA 00 C0 00 00         CMP EDX,0xc000
006AF973  0F 84 F5 01 00 00         JZ 0x006afb6e
006AF979  8B D1                     MOV EDX,ECX
006AF97B  81 E2 00 40 00 00         AND EDX,0x4000
006AF981  66 85 D2                  TEST DX,DX
006AF984  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006AF987  74 71                     JZ 0x006af9fa
006AF989  03 D2                     ADD EDX,EDX
006AF98B  8B D8                     MOV EBX,EAX
006AF98D  2B DA                     SUB EBX,EDX
006AF98F  66 8B 13                  MOV DX,word ptr [EBX]
006AF992  81 E2 00 C0 00 00         AND EDX,0xc000
006AF998  81 FA 00 C0 00 00         CMP EDX,0xc000
006AF99E  0F 84 CA 01 00 00         JZ 0x006afb6e
006AF9A4  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006AF9A7  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006AF9AA  2B DA                     SUB EBX,EDX
006AF9AC  66 8B 1C 58               MOV BX,word ptr [EAX + EBX*0x2]
006AF9B0  81 E3 00 C0 00 00         AND EBX,0xc000
006AF9B6  81 FB 00 C0 00 00         CMP EBX,0xc000
006AF9BC  0F 84 AC 01 00 00         JZ 0x006afb6e
006AF9C2  8B DF                     MOV EBX,EDI
006AF9C4  2B DA                     SUB EBX,EDX
006AF9C6  66 8B 1C 58               MOV BX,word ptr [EAX + EBX*0x2]
006AF9CA  81 E3 00 C0 00 00         AND EBX,0xc000
006AF9D0  81 FB 00 C0 00 00         CMP EBX,0xc000
006AF9D6  0F 84 92 01 00 00         JZ 0x006afb6e
006AF9DC  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006AF9DF  03 DF                     ADD EBX,EDI
006AF9E1  66 8B 1C 58               MOV BX,word ptr [EAX + EBX*0x2]
006AF9E5  81 E3 00 C0 00 00         AND EBX,0xc000
006AF9EB  81 FB 00 C0 00 00         CMP EBX,0xc000
006AF9F1  0F 84 77 01 00 00         JZ 0x006afb6e
006AF9F7  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_006af9fa:
006AF9FA  81 E1 00 20 00 00         AND ECX,0x2000
006AFA00  66 85 C9                  TEST CX,CX
006AFA03  0F 84 B6 00 00 00         JZ 0x006afabf
006AFA09  66 8B 0C 50               MOV CX,word ptr [EAX + EDX*0x2]
006AFA0D  81 E1 00 C0 00 00         AND ECX,0xc000
006AFA13  81 F9 00 C0 00 00         CMP ECX,0xc000
006AFA19  0F 84 4F 01 00 00         JZ 0x006afb6e
006AFA1F  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006AFA22  03 D1                     ADD EDX,ECX
006AFA24  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AFA28  81 E2 00 C0 00 00         AND EDX,0xc000
006AFA2E  81 FA 00 C0 00 00         CMP EDX,0xc000
006AFA34  0F 84 34 01 00 00         JZ 0x006afb6e
006AFA3A  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006AFA3D  03 D7                     ADD EDX,EDI
006AFA3F  66 8B 14 50               MOV DX,word ptr [EAX + EDX*0x2]
006AFA43  81 E2 00 C0 00 00         AND EDX,0xc000
006AFA49  81 FA 00 C0 00 00         CMP EDX,0xc000
006AFA4F  0F 84 19 01 00 00         JZ 0x006afb6e
006AFA55  03 CF                     ADD ECX,EDI
006AFA57  EB 3A                     JMP 0x006afa93
LAB_006afa59:
006AFA59  8B D1                     MOV EDX,ECX
006AFA5B  81 E2 00 60 00 00         AND EDX,0x6000
006AFA61  66 85 D2                  TEST DX,DX
006AFA64  74 59                     JZ 0x006afabf
006AFA66  80 E5 9F                  AND CH,0x9f
006AFA69  66 81 F9 FE 0F            CMP CX,0xffe
006AFA6E  74 4F                     JZ 0x006afabf
006AFA70  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006AFA73  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AFA77  81 E2 00 C0 00 00         AND EDX,0xc000
006AFA7D  81 FA 00 C0 00 00         CMP EDX,0xc000
006AFA83  0F 84 E5 00 00 00         JZ 0x006afb6e
006AFA89  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006AFA8C  85 C9                     TEST ECX,ECX
006AFA8E  75 1B                     JNZ 0x006afaab
006AFA90  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
LAB_006afa93:
006AFA93  66 8B 14 48               MOV DX,word ptr [EAX + ECX*0x2]
006AFA97  81 E2 00 C0 00 00         AND EDX,0xc000
006AFA9D  81 FA 00 C0 00 00         CMP EDX,0xc000
006AFAA3  0F 84 C5 00 00 00         JZ 0x006afb6e
006AFAA9  EB 14                     JMP 0x006afabf
LAB_006afaab:
006AFAAB  66 8B 04 78               MOV AX,word ptr [EAX + EDI*0x2]
006AFAAF  25 00 C0 00 00            AND EAX,0xc000
006AFAB4  3D 00 C0 00 00            CMP EAX,0xc000
006AFAB9  0F 84 AF 00 00 00         JZ 0x006afb6e
LAB_006afabf:
006AFABF  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006AFAC2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006AFAC5  3B C8                     CMP ECX,EAX
006AFAC7  7C 2C                     JL 0x006afaf5
006AFAC9  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
006AFACC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AFACF  52                        PUSH EDX
006AFAD0  50                        PUSH EAX
006AFAD1  E8 7A D4 FF FF            CALL 0x006acf50
006AFAD6  85 C0                     TEST EAX,EAX
006AFAD8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006AFADB  0F 84 A9 F6 FF FF         JZ 0x006af18a
006AFAE1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006AFAE4  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
006AFAE7  83 C2 0A                  ADD EDX,0xa
006AFAEA  83 C1 50                  ADD ECX,0x50
006AFAED  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006AFAF0  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
006AFAF3  EB 03                     JMP 0x006afaf8
LAB_006afaf5:
006AFAF5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_006afaf8:
006AFAF8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006AFAFB  66 89 34 C8               MOV word ptr [EAX + ECX*0x8],SI
006AFAFF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AFB02  66 8B 45 F8               MOV AX,word ptr [EBP + -0x8]
006AFB06  66 89 44 CA 02            MOV word ptr [EDX + ECX*0x8 + 0x2],AX
006AFB0B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AFB0E  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
006AFB12  66 89 44 CA 04            MOV word ptr [EDX + ECX*0x8 + 0x4],AX
006AFB17  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
006AFB1A  41                        INC ECX
006AFB1B  66 8B 04 D5 76 D5 7E 00   MOV AX,word ptr [EDX*0x8 + 0x7ed576]
006AFB23  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006AFB26  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006AFB29  66 89 44 CA FE            MOV word ptr [EDX + ECX*0x8 + -0x2],AX
006AFB2E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006AFB31  3B F0                     CMP ESI,EAX
006AFB33  75 14                     JNZ 0x006afb49
006AFB35  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006AFB38  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006AFB3B  3B C1                     CMP EAX,ECX
006AFB3D  75 0A                     JNZ 0x006afb49
006AFB3F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006AFB42  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006AFB45  3B C8                     CMP ECX,EAX
006AFB47  74 2E                     JZ 0x006afb77
LAB_006afb49:
006AFB49  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006AFB4C  C7 45 A4 00 00 00 00      MOV dword ptr [EBP + -0x5c],0x0
006AFB53  48                        DEC EAX
006AFB54  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006AFB57  0F 89 9B FD FF FF         JNS 0x006af8f8
006AFB5D  E9 FF FC FF FF            JMP 0x006af861
LAB_006afb62:
006AFB62  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006AFB65  85 C9                     TEST ECX,ECX
006AFB67  75 0E                     JNZ 0x006afb77
006AFB69  E9 F6 FC FF FF            JMP 0x006af864
LAB_006afb6e:
006AFB6E  8D 55 F0                  LEA EDX,[EBP + -0x10]
006AFB71  52                        PUSH EDX
006AFB72  E8 E9 B4 FF FF            CALL 0x006ab060
LAB_006afb77:
006AFB77  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006AFB7A  85 C0                     TEST EAX,EAX
006AFB7C  0F 84 08 F6 FF FF         JZ 0x006af18a
006AFB82  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006AFB85  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006AFB88  5F                        POP EDI
006AFB89  5E                        POP ESI
006AFB8A  89 0A                     MOV dword ptr [EDX],ECX
006AFB8C  5B                        POP EBX
006AFB8D  8B E5                     MOV ESP,EBP
006AFB8F  5D                        POP EBP
006AFB90  C2 34 00                  RET 0x34
