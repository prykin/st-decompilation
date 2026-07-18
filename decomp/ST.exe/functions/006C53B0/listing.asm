FUN_006c53b0:
006C53B0  55                        PUSH EBP
006C53B1  8B EC                     MOV EBP,ESP
006C53B3  6A FF                     PUSH -0x1
006C53B5  68 B0 D9 79 00            PUSH 0x79d9b0
006C53BA  68 64 D9 72 00            PUSH 0x72d964
006C53BF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006C53C5  50                        PUSH EAX
006C53C6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006C53CD  83 EC 4C                  SUB ESP,0x4c
006C53D0  53                        PUSH EBX
006C53D1  56                        PUSH ESI
006C53D2  57                        PUSH EDI
006C53D3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006C53D6  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
006C53DD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C53E0  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C53E3  25 00 11 00 00            AND EAX,0x1100
006C53E8  3D 00 01 00 00            CMP EAX,0x100
006C53ED  0F 84 D3 05 00 00         JZ 0x006c59c6
006C53F3  8B 46 40                  MOV EAX,dword ptr [ESI + 0x40]
006C53F6  85 C0                     TEST EAX,EAX
006C53F8  0F 84 C8 05 00 00         JZ 0x006c59c6
006C53FE  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C5405  74 0D                     JZ 0x006c5414
006C5407  8D 8E F0 04 00 00         LEA ECX,[ESI + 0x4f0]
006C540D  51                        PUSH ECX
006C540E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
LAB_006c5414:
006C5414  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006C5417  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006C541A  03 C1                     ADD EAX,ECX
006C541C  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006C541F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006C5422  03 FA                     ADD EDI,EDX
006C5424  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
006C5427  01 4D 14                  ADD dword ptr [EBP + 0x14],ECX
006C542A  01 55 18                  ADD dword ptr [EBP + 0x18],EDX
006C542D  C7 45 C4 00 00 00 80      MOV dword ptr [EBP + -0x3c],0x80000000
006C5434  8B 96 A0 04 00 00         MOV EDX,dword ptr [ESI + 0x4a0]
006C543A  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
006C543D  8B 8E A4 04 00 00         MOV ECX,dword ptr [ESI + 0x4a4]
006C5443  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006C5446  8B D8                     MOV EBX,EAX
006C5448  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C544B  2B C8                     SUB ECX,EAX
006C544D  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006C5450  79 4A                     JNS 0x006c549c
006C5452  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C5455  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C5458  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C545B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C545E  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
006C5461  8B C1                     MOV EAX,ECX
006C5463  F7 D8                     NEG EAX
006C5465  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C5468  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006C546B  51                        PUSH ECX
006C546C  E8 6F 05 00 00            CALL 0x006c59e0
006C5471  83 C4 04                  ADD ESP,0x4
006C5474  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006C5477  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C547A  2B C7                     SUB EAX,EDI
006C547C  99                        CDQ
006C547D  33 C2                     XOR EAX,EDX
006C547F  2B C2                     SUB EAX,EDX
006C5481  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006C5484  3B C8                     CMP ECX,EAX
006C5486  7E 02                     JLE 0x006c548a
006C5488  8B C1                     MOV EAX,ECX
LAB_006c548a:
006C548A  83 E0 1F                  AND EAX,0x1f
006C548D  8B C8                     MOV ECX,EAX
006C548F  B8 01 00 00 00            MOV EAX,0x1
006C5494  D3 E0                     SHL EAX,CL
006C5496  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006C5499  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
LAB_006c549c:
006C549C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C549F  2B C7                     SUB EAX,EDI
006C54A1  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
006C54A4  0F 85 11 01 00 00         JNZ 0x006c55bb
006C54AA  3B BE 88 04 00 00         CMP EDI,dword ptr [ESI + 0x488]
006C54B0  0F 8C B5 04 00 00         JL 0x006c596b
006C54B6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C54B9  3B 96 90 04 00 00         CMP EDX,dword ptr [ESI + 0x490]
006C54BF  0F 8D A6 04 00 00         JGE 0x006c596b
006C54C5  8B 86 84 04 00 00         MOV EAX,dword ptr [ESI + 0x484]
006C54CB  3B D8                     CMP EBX,EAX
006C54CD  7D 02                     JGE 0x006c54d1
006C54CF  8B D8                     MOV EBX,EAX
LAB_006c54d1:
006C54D1  8B 86 8C 04 00 00         MOV EAX,dword ptr [ESI + 0x48c]
006C54D7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C54DA  3B C8                     CMP ECX,EAX
006C54DC  7C 06                     JL 0x006c54e4
006C54DE  8D 48 FF                  LEA ECX,[EAX + -0x1]
006C54E1  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_006c54e4:
006C54E4  3B CB                     CMP ECX,EBX
006C54E6  0F 8C 7F 04 00 00         JL 0x006c596b
006C54EC  F6 86 9C 04 00 00 01      TEST byte ptr [ESI + 0x49c],0x1
006C54F3  75 27                     JNZ 0x006c551c
006C54F5  F6 46 0C 04               TEST byte ptr [ESI + 0xc],0x4
006C54F9  74 21                     JZ 0x006c551c
006C54FB  83 BE 98 04 00 00 07      CMP dword ptr [ESI + 0x498],0x7
006C5502  74 18                     JZ 0x006c551c
006C5504  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C5507  50                        PUSH EAX
006C5508  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C550B  51                        PUSH ECX
006C550C  57                        PUSH EDI
006C550D  53                        PUSH EBX
006C550E  56                        PUSH ESI
006C550F  E8 FC FC FF FF            CALL 0x006c5210
006C5514  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C5517  E9 4F 04 00 00            JMP 0x006c596b
LAB_006c551c:
006C551C  56                        PUSH ESI
006C551D  E8 8E 63 FF FF            CALL 0x006bb8b0
006C5522  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C5525  85 C0                     TEST EAX,EAX
006C5527  0F 85 3E 04 00 00         JNZ 0x006c596b
006C552D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C5530  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C5533  2B CB                     SUB ECX,EBX
006C5535  41                        INC ECX
006C5536  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006C5539  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006C553D  75 39                     JNZ 0x006c5578
006C553F  8B 96 78 04 00 00         MOV EDX,dword ptr [ESI + 0x478]
006C5545  0F AF D7                  IMUL EDX,EDI
006C5548  03 96 74 04 00 00         ADD EDX,dword ptr [ESI + 0x474]
006C554E  8D 04 5A                  LEA EAX,[EDX + EBX*0x2]
006C5551  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C5554  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006C5557  52                        PUSH EDX
006C5558  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C555B  52                        PUSH EDX
006C555C  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C555F  52                        PUSH EDX
006C5560  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006C5563  52                        PUSH EDX
006C5564  51                        PUSH ECX
006C5565  50                        PUSH EAX
006C5566  56                        PUSH ESI
006C5567  E8 A4 04 00 00            CALL 0x006c5a10
006C556C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C5573  E9 ED 03 00 00            JMP 0x006c5965
LAB_006c5578:
006C5578  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C557E  0F AF C7                  IMUL EAX,EDI
006C5581  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006C5587  03 C3                     ADD EAX,EBX
006C5589  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C558C  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006C558F  52                        PUSH EDX
006C5590  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C5593  52                        PUSH EDX
006C5594  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C5597  52                        PUSH EDX
006C5598  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006C559B  52                        PUSH EDX
006C559C  51                        PUSH ECX
006C559D  50                        PUSH EAX
006C559E  56                        PUSH ESI
006C559F  E8 5C 05 00 00            CALL 0x006c5b00
006C55A4  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C55AB  E9 B5 03 00 00            JMP 0x006c5965
LAB_006c55bb:
006C55BB  85 C9                     TEST ECX,ECX
006C55BD  0F 85 2D 01 00 00         JNZ 0x006c56f0
006C55C3  3B 9E 84 04 00 00         CMP EBX,dword ptr [ESI + 0x484]
006C55C9  0F 8C 9C 03 00 00         JL 0x006c596b
006C55CF  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C55D2  3B 86 8C 04 00 00         CMP EAX,dword ptr [ESI + 0x48c]
006C55D8  0F 8D 8D 03 00 00         JGE 0x006c596b
006C55DE  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006C55E1  85 C0                     TEST EAX,EAX
006C55E3  7D 0B                     JGE 0x006c55f0
006C55E5  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006C55E8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C55EB  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006C55EE  EB 03                     JMP 0x006c55f3
LAB_006c55f0:
006C55F0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
LAB_006c55f3:
006C55F3  8B 86 88 04 00 00         MOV EAX,dword ptr [ESI + 0x488]
006C55F9  3B F8                     CMP EDI,EAX
006C55FB  7D 02                     JGE 0x006c55ff
006C55FD  8B F8                     MOV EDI,EAX
LAB_006c55ff:
006C55FF  8B 86 90 04 00 00         MOV EAX,dword ptr [ESI + 0x490]
006C5605  3B C8                     CMP ECX,EAX
006C5607  7C 06                     JL 0x006c560f
006C5609  8D 48 FF                  LEA ECX,[EAX + -0x1]
006C560C  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
LAB_006c560f:
006C560F  3B CF                     CMP ECX,EDI
006C5611  0F 8C 54 03 00 00         JL 0x006c596b
006C5617  F6 86 9C 04 00 00 01      TEST byte ptr [ESI + 0x49c],0x1
006C561E  75 27                     JNZ 0x006c5647
006C5620  F6 46 0C 04               TEST byte ptr [ESI + 0xc],0x4
006C5624  74 21                     JZ 0x006c5647
006C5626  83 BE 98 04 00 00 07      CMP dword ptr [ESI + 0x498],0x7
006C562D  74 18                     JZ 0x006c5647
006C562F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C5632  51                        PUSH ECX
006C5633  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C5636  52                        PUSH EDX
006C5637  57                        PUSH EDI
006C5638  53                        PUSH EBX
006C5639  56                        PUSH ESI
006C563A  E8 A1 FC FF FF            CALL 0x006c52e0
006C563F  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C5642  E9 24 03 00 00            JMP 0x006c596b
LAB_006c5647:
006C5647  56                        PUSH ESI
006C5648  E8 63 62 FF FF            CALL 0x006bb8b0
006C564D  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C5650  85 C0                     TEST EAX,EAX
006C5652  0F 85 13 03 00 00         JNZ 0x006c596b
006C5658  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
006C565F  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C5662  2B D7                     SUB EDX,EDI
006C5664  42                        INC EDX
006C5665  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006C5668  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006C566C  75 3C                     JNZ 0x006c56aa
006C566E  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C5674  8B C8                     MOV ECX,EAX
006C5676  0F AF CF                  IMUL ECX,EDI
006C5679  03 8E 74 04 00 00         ADD ECX,dword ptr [ESI + 0x474]
006C567F  8D 0C 59                  LEA ECX,[ECX + EBX*0x2]
006C5682  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C5685  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006C5688  57                        PUSH EDI
006C5689  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006C568C  57                        PUSH EDI
006C568D  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006C5690  57                        PUSH EDI
006C5691  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
006C5694  57                        PUSH EDI
006C5695  52                        PUSH EDX
006C5696  50                        PUSH EAX
006C5697  51                        PUSH ECX
006C5698  56                        PUSH ESI
006C5699  E8 52 05 00 00            CALL 0x006c5bf0
006C569E  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C56A5  E9 BB 02 00 00            JMP 0x006c5965
LAB_006c56aa:
006C56AA  8B 8E 78 04 00 00         MOV ECX,dword ptr [ESI + 0x478]
006C56B0  8B C1                     MOV EAX,ECX
006C56B2  0F AF C7                  IMUL EAX,EDI
006C56B5  03 86 74 04 00 00         ADD EAX,dword ptr [ESI + 0x474]
006C56BB  03 C3                     ADD EAX,EBX
006C56BD  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006C56C0  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006C56C3  57                        PUSH EDI
006C56C4  8B 7D 1C                  MOV EDI,dword ptr [EBP + 0x1c]
006C56C7  57                        PUSH EDI
006C56C8  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
006C56CB  57                        PUSH EDI
006C56CC  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
006C56CF  57                        PUSH EDI
006C56D0  52                        PUSH EDX
006C56D1  51                        PUSH ECX
006C56D2  50                        PUSH EAX
006C56D3  56                        PUSH ESI
006C56D4  E8 27 06 00 00            CALL 0x006c5d00
006C56D9  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C56E0  E9 80 02 00 00            JMP 0x006c5965
LAB_006c56f0:
006C56F0  56                        PUSH ESI
006C56F1  E8 BA 61 FF FF            CALL 0x006bb8b0
006C56F6  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006C56F9  85 C0                     TEST EAX,EAX
006C56FB  0F 85 6A 02 00 00         JNZ 0x006c596b
006C5701  8B 86 78 04 00 00         MOV EAX,dword ptr [ESI + 0x478]
006C5707  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006C570A  8B 4E 28                  MOV ECX,dword ptr [ESI + 0x28]
006C570D  0F AF CB                  IMUL ECX,EBX
006C5710  0F AF C7                  IMUL EAX,EDI
006C5713  03 C8                     ADD ECX,EAX
006C5715  03 8E 74 04 00 00         ADD ECX,dword ptr [ESI + 0x474]
006C571B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C571E  2B C3                     SUB EAX,EBX
006C5720  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C5723  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006C5726  99                        CDQ
006C5727  33 C2                     XOR EAX,EDX
006C5729  2B C2                     SUB EAX,EDX
006C572B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
006C572E  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006C5731  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006C5734  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
006C5737  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
006C573A  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
006C573D  39 7D 18                  CMP dword ptr [EBP + 0x18],EDI
006C5740  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006C5743  7F 02                     JG 0x006c5747
006C5745  F7 D8                     NEG EAX
LAB_006c5747:
006C5747  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006C574A  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C574D  3B C7                     CMP EAX,EDI
006C574F  7E 23                     JLE 0x006c5774
006C5751  8B 96 90 04 00 00         MOV EDX,dword ptr [ESI + 0x490]
006C5757  3B C2                     CMP EAX,EDX
006C5759  7C 06                     JL 0x006c5761
006C575B  8D 42 FF                  LEA EAX,[EDX + -0x1]
006C575E  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
LAB_006c5761:
006C5761  3B C7                     CMP EAX,EDI
006C5763  0F 8C FC 01 00 00         JL 0x006c5965
006C5769  8B 96 88 04 00 00         MOV EDX,dword ptr [ESI + 0x488]
006C576F  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
006C5772  EB 29                     JMP 0x006c579d
LAB_006c5774:
006C5774  8B 96 88 04 00 00         MOV EDX,dword ptr [ESI + 0x488]
006C577A  3B C2                     CMP EAX,EDX
006C577C  7D 02                     JGE 0x006c5780
006C577E  8B C2                     MOV EAX,EDX
LAB_006c5780:
006C5780  3B C7                     CMP EAX,EDI
006C5782  0F 8F DD 01 00 00         JG 0x006c5965
006C5788  F7 DF                     NEG EDI
006C578A  F7 D8                     NEG EAX
006C578C  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
006C578F  B8 01 00 00 00            MOV EAX,0x1
006C5794  2B 86 90 04 00 00         SUB EAX,dword ptr [ESI + 0x490]
006C579A  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_006c579d:
006C579D  8B 86 8C 04 00 00         MOV EAX,dword ptr [ESI + 0x48c]
006C57A3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C57A6  3B D0                     CMP EDX,EAX
006C57A8  7C 06                     JL 0x006c57b0
006C57AA  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C57AD  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
LAB_006c57b0:
006C57B0  3B D3                     CMP EDX,EBX
006C57B2  0F 8C AD 01 00 00         JL 0x006c5965
006C57B8  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
006C57BF  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006C57C2  3B 55 AC                  CMP EDX,dword ptr [EBP + -0x54]
006C57C5  0F 8C C4 00 00 00         JL 0x006c588f
006C57CB  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006C57CE  2B C2                     SUB EAX,EDX
006C57D0  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C57D3  8B 86 84 04 00 00         MOV EAX,dword ptr [ESI + 0x484]
006C57D9  39 45 14                  CMP dword ptr [EBP + 0x14],EAX
006C57DC  0F 8C 60 01 00 00         JL 0x006c5942
006C57E2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c57e5:
006C57E5  3B 9E 84 04 00 00         CMP EBX,dword ptr [ESI + 0x484]
006C57EB  7D 26                     JGE 0x006c5813
006C57ED  85 C0                     TEST EAX,EAX
006C57EF  7C 10                     JL 0x006c5801
006C57F1  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
006C57F4  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C57F7  2B 45 B0                  SUB EAX,dword ptr [EBP + -0x50]
006C57FA  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C57FD  47                        INC EDI
006C57FE  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
LAB_006c5801:
006C5801  03 4E 28                  ADD ECX,dword ptr [ESI + 0x28]
006C5804  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C5807  03 45 C0                  ADD EAX,dword ptr [EBP + -0x40]
006C580A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C580D  43                        INC EBX
006C580E  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006C5811  EB D2                     JMP 0x006c57e5
LAB_006c5813:
006C5813  3B 7D B4                  CMP EDI,dword ptr [EBP + -0x4c]
006C5816  7D 26                     JGE 0x006c583e
006C5818  85 C0                     TEST EAX,EAX
006C581A  7C 10                     JL 0x006c582c
006C581C  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
006C581F  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C5822  2B 45 B0                  SUB EAX,dword ptr [EBP + -0x50]
006C5825  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C5828  47                        INC EDI
006C5829  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
LAB_006c582c:
006C582C  03 4E 28                  ADD ECX,dword ptr [ESI + 0x28]
006C582F  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C5832  03 45 C0                  ADD EAX,dword ptr [EBP + -0x40]
006C5835  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C5838  43                        INC EBX
006C5839  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006C583C  EB D5                     JMP 0x006c5813
LAB_006c583e:
006C583E  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006C5842  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006C5845  52                        PUSH EDX
006C5846  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C5849  52                        PUSH EDX
006C584A  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C584D  52                        PUSH EDX
006C584E  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006C5851  52                        PUSH EDX
006C5852  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006C5855  52                        PUSH EDX
006C5856  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006C5859  52                        PUSH EDX
006C585A  50                        PUSH EAX
006C585B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C585E  50                        PUSH EAX
006C585F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C5862  52                        PUSH EDX
006C5863  57                        PUSH EDI
006C5864  53                        PUSH EBX
006C5865  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C5868  50                        PUSH EAX
006C5869  51                        PUSH ECX
006C586A  56                        PUSH ESI
006C586B  75 11                     JNZ 0x006c587e
006C586D  E8 8E 05 00 00            CALL 0x006c5e00
006C5872  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C5879  E9 E7 00 00 00            JMP 0x006c5965
LAB_006c587e:
006C587E  E8 0D 07 00 00            CALL 0x006c5f90
006C5883  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C588A  E9 D6 00 00 00            JMP 0x006c5965
LAB_006c588f:
006C588F  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006C5892  2B 45 AC                  SUB EAX,dword ptr [EBP + -0x54]
006C5895  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C5898  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C589B  3B 55 B4                  CMP EDX,dword ptr [EBP + -0x4c]
006C589E  0F 8C 9E 00 00 00         JL 0x006c5942
006C58A4  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_006c58a7:
006C58A7  3B 7D B4                  CMP EDI,dword ptr [EBP + -0x4c]
006C58AA  7D 26                     JGE 0x006c58d2
006C58AC  85 C0                     TEST EAX,EAX
006C58AE  7C 10                     JL 0x006c58c0
006C58B0  03 4E 28                  ADD ECX,dword ptr [ESI + 0x28]
006C58B3  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C58B6  2B 45 C0                  SUB EAX,dword ptr [EBP + -0x40]
006C58B9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C58BC  43                        INC EBX
006C58BD  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_006c58c0:
006C58C0  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
006C58C3  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C58C6  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006C58C9  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C58CC  47                        INC EDI
006C58CD  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
006C58D0  EB D5                     JMP 0x006c58a7
LAB_006c58d2:
006C58D2  3B 9E 84 04 00 00         CMP EBX,dword ptr [ESI + 0x484]
006C58D8  7D 26                     JGE 0x006c5900
006C58DA  85 C0                     TEST EAX,EAX
006C58DC  7C 10                     JL 0x006c58ee
006C58DE  03 4E 28                  ADD ECX,dword ptr [ESI + 0x28]
006C58E1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C58E4  2B 45 C0                  SUB EAX,dword ptr [EBP + -0x40]
006C58E7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C58EA  43                        INC EBX
006C58EB  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_006c58ee:
006C58EE  03 4D DC                  ADD ECX,dword ptr [EBP + -0x24]
006C58F1  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006C58F4  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
006C58F7  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C58FA  47                        INC EDI
006C58FB  89 7D CC                  MOV dword ptr [EBP + -0x34],EDI
006C58FE  EB D2                     JMP 0x006c58d2
LAB_006c5900:
006C5900  83 7E 20 10               CMP dword ptr [ESI + 0x20],0x10
006C5904  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006C5907  52                        PUSH EDX
006C5908  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C590B  52                        PUSH EDX
006C590C  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C590F  52                        PUSH EDX
006C5910  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006C5913  52                        PUSH EDX
006C5914  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006C5917  52                        PUSH EDX
006C5918  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006C591B  52                        PUSH EDX
006C591C  50                        PUSH EAX
006C591D  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C5920  50                        PUSH EAX
006C5921  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C5924  52                        PUSH EDX
006C5925  57                        PUSH EDI
006C5926  53                        PUSH EBX
006C5927  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C592A  50                        PUSH EAX
006C592B  51                        PUSH ECX
006C592C  56                        PUSH ESI
006C592D  75 0E                     JNZ 0x006c593d
006C592F  E8 CC 07 00 00            CALL 0x006c6100
006C5934  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C593B  EB 28                     JMP 0x006c5965
LAB_006c593d:
006C593D  E8 4E 09 00 00            CALL 0x006c6290
LAB_006c5942:
006C5942  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C5949  EB 1A                     JMP 0x006c5965
LAB_006c5965:
006C5965  56                        PUSH ESI
006C5966  E8 15 60 FF FF            CALL 0x006bb980
LAB_006c596b:
006C596B  F7 46 08 00 00 00 04      TEST dword ptr [ESI + 0x8],0x4000000
006C5972  74 0D                     JZ 0x006c5981
006C5974  81 C6 F0 04 00 00         ADD ESI,0x4f0
006C597A  56                        PUSH ESI
006C597B  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c5981:
006C5981  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
006C5984  81 FE A0 00 76 88         CMP ESI,0x887600a0
006C598A  74 08                     JZ 0x006c5994
006C598C  81 FE AE 01 76 88         CMP ESI,0x887601ae
006C5992  75 02                     JNZ 0x006c5996
LAB_006c5994:
006C5994  33 F6                     XOR ESI,ESI
LAB_006c5996:
006C5996  85 F6                     TEST ESI,ESI
006C5998  74 2C                     JZ 0x006c59c6
006C599A  68 FF 02 00 00            PUSH 0x2ff
006C599F  68 74 DF 7E 00            PUSH 0x7edf74
006C59A4  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C59AA  51                        PUSH ECX
006C59AB  56                        PUSH ESI
006C59AC  E8 8F 04 FE FF            CALL 0x006a5e40
006C59B1  8B C6                     MOV EAX,ESI
006C59B3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C59B6  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C59BD  5F                        POP EDI
006C59BE  5E                        POP ESI
006C59BF  5B                        POP EBX
006C59C0  8B E5                     MOV ESP,EBP
006C59C2  5D                        POP EBP
006C59C3  C2 18 00                  RET 0x18
LAB_006c59c6:
006C59C6  33 C0                     XOR EAX,EAX
006C59C8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C59CB  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006C59D2  5F                        POP EDI
006C59D3  5E                        POP ESI
006C59D4  5B                        POP EBX
006C59D5  8B E5                     MOV ESP,EBP
006C59D7  5D                        POP EBP
006C59D8  C2 18 00                  RET 0x18
