FUN_006b55f0:
006B55F0  55                        PUSH EBP
006B55F1  8B EC                     MOV EBP,ESP
006B55F3  83 EC 38                  SUB ESP,0x38
006B55F6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006B55F9  53                        PUSH EBX
006B55FA  56                        PUSH ESI
006B55FB  57                        PUSH EDI
006B55FC  85 C0                     TEST EAX,EAX
006B55FE  0F 8E 31 04 00 00         JLE 0x006b5a35
006B5604  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B5607  85 C0                     TEST EAX,EAX
006B5609  0F 8E 26 04 00 00         JLE 0x006b5a35
006B560F  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B5612  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006B5615  85 C0                     TEST EAX,EAX
006B5617  75 09                     JNZ 0x006b5622
006B5619  56                        PUSH ESI
006B561A  E8 81 F9 FF FF            CALL 0x006b4fa0
006B561F  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
LAB_006b5622:
006B5622  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B5625  33 DB                     XOR EBX,EBX
006B5627  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
006B562B  85 FF                     TEST EDI,EDI
006B562D  0F 84 E5 00 00 00         JZ 0x006b5718
006B5633  66 8B 4F 0E               MOV CX,word ptr [EDI + 0xe]
006B5637  8B D1                     MOV EDX,ECX
006B5639  81 E2 FF FF 00 00         AND EDX,0xffff
006B563F  3B D3                     CMP EDX,EBX
006B5641  0F 84 D1 00 00 00         JZ 0x006b5718
006B5647  83 FB 08                  CMP EBX,0x8
006B564A  75 70                     JNZ 0x006b56bc
006B564C  66 83 F9 10               CMP CX,0x10
006B5650  75 32                     JNZ 0x006b5684
006B5652  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B5655  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B5658  51                        PUSH ECX
006B5659  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B565C  52                        PUSH EDX
006B565D  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B5660  51                        PUSH ECX
006B5661  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B5664  52                        PUSH EDX
006B5665  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B5668  50                        PUSH EAX
006B5669  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B566C  56                        PUSH ESI
006B566D  50                        PUSH EAX
006B566E  51                        PUSH ECX
006B566F  52                        PUSH EDX
006B5670  57                        PUSH EDI
006B5671  E8 9A C3 01 00            CALL 0x006d1a10
006B5676  8B F8                     MOV EDI,EAX
006B5678  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B567B  5F                        POP EDI
006B567C  5E                        POP ESI
006B567D  5B                        POP EBX
006B567E  8B E5                     MOV ESP,EBP
006B5680  5D                        POP EBP
006B5681  C2 28 00                  RET 0x28
LAB_006b5684:
006B5684  66 83 F9 18               CMP CX,0x18
006B5688  75 6F                     JNZ 0x006b56f9
006B568A  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B568D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B5690  51                        PUSH ECX
006B5691  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5694  52                        PUSH EDX
006B5695  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B5698  51                        PUSH ECX
006B5699  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B569C  52                        PUSH EDX
006B569D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B56A0  50                        PUSH EAX
006B56A1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B56A4  56                        PUSH ESI
006B56A5  50                        PUSH EAX
006B56A6  51                        PUSH ECX
006B56A7  52                        PUSH EDX
006B56A8  57                        PUSH EDI
006B56A9  E8 A2 C3 01 00            CALL 0x006d1a50
006B56AE  8B F8                     MOV EDI,EAX
006B56B0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B56B3  5F                        POP EDI
006B56B4  5E                        POP ESI
006B56B5  5B                        POP EBX
006B56B6  8B E5                     MOV ESP,EBP
006B56B8  5D                        POP EBP
006B56B9  C2 28 00                  RET 0x28
LAB_006b56bc:
006B56BC  83 FB 18                  CMP EBX,0x18
006B56BF  75 38                     JNZ 0x006b56f9
006B56C1  66 83 F9 10               CMP CX,0x10
006B56C5  75 32                     JNZ 0x006b56f9
006B56C7  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B56CA  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B56CD  51                        PUSH ECX
006B56CE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B56D1  52                        PUSH EDX
006B56D2  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B56D5  51                        PUSH ECX
006B56D6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B56D9  52                        PUSH EDX
006B56DA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B56DD  50                        PUSH EAX
006B56DE  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B56E1  56                        PUSH ESI
006B56E2  50                        PUSH EAX
006B56E3  51                        PUSH ECX
006B56E4  52                        PUSH EDX
006B56E5  57                        PUSH EDI
006B56E6  E8 A5 C3 01 00            CALL 0x006d1a90
006B56EB  8B F8                     MOV EDI,EAX
006B56ED  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B56F0  5F                        POP EDI
006B56F1  5E                        POP ESI
006B56F2  5B                        POP EBX
006B56F3  8B E5                     MOV ESP,EBP
006B56F5  5D                        POP EBP
006B56F6  C2 28 00                  RET 0x28
LAB_006b56f9:
006B56F9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006B56FE  6A 30                     PUSH 0x30
006B5700  68 68 DB 7E 00            PUSH 0x7edb68
006B5705  50                        PUSH EAX
006B5706  6A D0                     PUSH -0x30
006B5708  E8 33 07 FF FF            CALL 0x006a5e40
006B570D  5F                        POP EDI
006B570E  5E                        POP ESI
006B570F  33 C0                     XOR EAX,EAX
006B5711  5B                        POP EBX
006B5712  8B E5                     MOV ESP,EBP
006B5714  5D                        POP EBP
006B5715  C2 28 00                  RET 0x28
LAB_006b5718:
006B5718  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B571B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006B571E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006B5721  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006B5724  03 C2                     ADD EAX,EDX
006B5726  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006B5729  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006B572C  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006B572F  03 C8                     ADD ECX,EAX
006B5731  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B5734  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B5737  0F AF C3                  IMUL EAX,EBX
006B573A  8B 76 08                  MOV ESI,dword ptr [ESI + 0x8]
006B573D  83 C0 1F                  ADD EAX,0x1f
006B5740  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006B5743  33 C9                     XOR ECX,ECX
006B5745  C1 E8 03                  SHR EAX,0x3
006B5748  25 FC FF FF 1F            AND EAX,0x1ffffffc
006B574D  3B F1                     CMP ESI,ECX
006B574F  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006B5752  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006B5755  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006B5758  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B575B  7D 0A                     JGE 0x006b5767
006B575D  F7 DE                     NEG ESI
006B575F  F7 D8                     NEG EAX
006B5761  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B5764  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006b5767:
006B5767  8D 4D C8                  LEA ECX,[EBP + -0x38]
006B576A  8D 55 D8                  LEA EDX,[EBP + -0x28]
006B576D  51                        PUSH ECX
006B576E  8D 45 E8                  LEA EAX,[EBP + -0x18]
006B5771  52                        PUSH EDX
006B5772  50                        PUSH EAX
006B5773  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006B5776  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006B577C  85 C0                     TEST EAX,EAX
006B577E  0F 84 B4 02 00 00         JZ 0x006b5a38
006B5784  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B5787  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006B578A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B578D  8B C8                     MOV ECX,EAX
006B578F  2B CE                     SUB ECX,ESI
006B5791  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006B5794  03 D1                     ADD EDX,ECX
006B5796  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006B5799  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006B579C  8B D1                     MOV EDX,ECX
006B579E  2B D6                     SUB EDX,ESI
006B57A0  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006B57A3  03 F2                     ADD ESI,EDX
006B57A5  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006B57A8  89 75 14                  MOV dword ptr [EBP + 0x14],ESI
006B57AB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006B57AE  2B F0                     SUB ESI,EAX
006B57B0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006B57B3  2B C1                     SUB EAX,ECX
006B57B5  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006B57B8  85 FF                     TEST EDI,EDI
006B57BA  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006B57BD  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006B57C0  75 54                     JNZ 0x006b5816
006B57C2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B57C5  50                        PUSH EAX
006B57C6  E8 45 F8 FF FF            CALL 0x006b5010
006B57CB  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B57CE  8B F8                     MOV EDI,EAX
006B57D0  C1 EF 02                  SHR EDI,0x2
006B57D3  6A 01                     PUSH 0x1
006B57D5  57                        PUSH EDI
006B57D6  53                        PUSH EBX
006B57D7  51                        PUSH ECX
006B57D8  56                        PUSH ESI
006B57D9  E8 12 B9 01 00            CALL 0x006d10f0
006B57DE  33 C9                     XOR ECX,ECX
006B57E0  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006B57E3  3B C1                     CMP EAX,ECX
006B57E5  0F 84 4A 02 00 00         JZ 0x006b5a35
006B57EB  8B D0                     MOV EDX,EAX
006B57ED  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
006B57F0  52                        PUSH EDX
006B57F1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006B57F4  E8 A7 F7 FF FF            CALL 0x006b4fa0
006B57F9  85 FF                     TEST EDI,EDI
006B57FB  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
006B57FE  74 13                     JZ 0x006b5813
006B5800  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006B5803  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006B5806  8B CF                     MOV ECX,EDI
006B5808  8D 70 28                  LEA ESI,[EAX + 0x28]
006B580B  8D 7A 28                  LEA EDI,[EDX + 0x28]
006B580E  F3 A5                     MOVSD.REP ES:EDI,ESI
006B5810  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
LAB_006b5813:
006B5813  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006b5816:
006B5816  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5819  85 C0                     TEST EAX,EAX
006B581B  75 09                     JNZ 0x006b5826
006B581D  57                        PUSH EDI
006B581E  E8 7D F7 FF FF            CALL 0x006b4fa0
006B5823  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_006b5826:
006B5826  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006B5829  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006B582C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006B582F  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006B5832  03 C2                     ADD EAX,EDX
006B5834  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006B5837  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006B583A  03 CE                     ADD ECX,ESI
006B583C  33 C0                     XOR EAX,EAX
006B583E  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006B5841  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006B5844  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
006B5847  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
006B584A  33 F6                     XOR ESI,ESI
006B584C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B584F  66 8B 77 0E               MOV SI,word ptr [EDI + 0xe]
006B5853  0F AF 77 04               IMUL ESI,dword ptr [EDI + 0x4]
006B5857  8B 7F 08                  MOV EDI,dword ptr [EDI + 0x8]
006B585A  83 C6 1F                  ADD ESI,0x1f
006B585D  C1 EE 03                  SHR ESI,0x3
006B5860  81 E6 FC FF FF 1F         AND ESI,0x1ffffffc
006B5866  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006B5869  85 FF                     TEST EDI,EDI
006B586B  7D 07                     JGE 0x006b5874
006B586D  F7 DF                     NEG EDI
006B586F  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
006B5872  F7 DE                     NEG ESI
LAB_006b5874:
006B5874  8D 4D C8                  LEA ECX,[EBP + -0x38]
006B5877  8D 55 D8                  LEA EDX,[EBP + -0x28]
006B587A  51                        PUSH ECX
006B587B  8D 45 E8                  LEA EAX,[EBP + -0x18]
006B587E  52                        PUSH EDX
006B587F  50                        PUSH EAX
006B5880  FF 15 50 BE 85 00         CALL dword ptr [0x0085be50]
006B5886  85 C0                     TEST EAX,EAX
006B5888  0F 84 A7 01 00 00         JZ 0x006b5a35
006B588E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B5891  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006B5894  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B5897  2B CA                     SUB ECX,EDX
006B5899  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006B589C  03 D1                     ADD EDX,ECX
006B589E  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006B58A1  2B C1                     SUB EAX,ECX
006B58A3  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B58A6  03 C8                     ADD ECX,EAX
006B58A8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006B58AB  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006B58AE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006B58B1  2B C1                     SUB EAX,ECX
006B58B3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006B58B6  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006B58B9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B58BC  2B C8                     SUB ECX,EAX
006B58BE  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B58C1  39 45 0C                  CMP dword ptr [EBP + 0xc],EAX
006B58C4  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006B58C7  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006B58CA  0F 85 A9 00 00 00         JNZ 0x006b5979
006B58D0  85 F6                     TEST ESI,ESI
006B58D2  7D 33                     JGE 0x006b5907
006B58D4  8B C3                     MOV EAX,EBX
006B58D6  0F AF C2                  IMUL EAX,EDX
006B58D9  99                        CDQ
006B58DA  83 E2 07                  AND EDX,0x7
006B58DD  F7 DE                     NEG ESI
006B58DF  03 C2                     ADD EAX,EDX
006B58E1  8B D6                     MOV EDX,ESI
006B58E3  0F AF 55 24               IMUL EDX,dword ptr [EBP + 0x24]
006B58E7  8B C8                     MOV ECX,EAX
006B58E9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B58EC  0F AF C3                  IMUL EAX,EBX
006B58EF  C1 F9 03                  SAR ECX,0x3
006B58F2  03 CA                     ADD ECX,EDX
006B58F4  99                        CDQ
006B58F5  83 E2 07                  AND EDX,0x7
006B58F8  03 C2                     ADD EAX,EDX
006B58FA  8B F8                     MOV EDI,EAX
006B58FC  8B C6                     MOV EAX,ESI
006B58FE  C1 FF 03                  SAR EDI,0x3
006B5901  0F AF 45 EC               IMUL EAX,dword ptr [EBP + -0x14]
006B5905  EB 3C                     JMP 0x006b5943
LAB_006b5907:
006B5907  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B590A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B590D  8B CF                     MOV ECX,EDI
006B590F  2B CA                     SUB ECX,EDX
006B5911  2B C8                     SUB ECX,EAX
006B5913  8B C3                     MOV EAX,EBX
006B5915  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006B5919  0F AF CE                  IMUL ECX,ESI
006B591C  99                        CDQ
006B591D  83 E2 07                  AND EDX,0x7
006B5920  03 C2                     ADD EAX,EDX
006B5922  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B5925  C1 F8 03                  SAR EAX,0x3
006B5928  03 C8                     ADD ECX,EAX
006B592A  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B592D  2B FA                     SUB EDI,EDX
006B592F  2B F8                     SUB EDI,EAX
006B5931  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B5934  0F AF C3                  IMUL EAX,EBX
006B5937  0F AF FE                  IMUL EDI,ESI
006B593A  99                        CDQ
006B593B  83 E2 07                  AND EDX,0x7
006B593E  03 C2                     ADD EAX,EDX
006B5940  C1 F8 03                  SAR EAX,0x3
LAB_006b5943:
006B5943  03 F8                     ADD EDI,EAX
006B5945  8B C3                     MOV EAX,EBX
006B5947  0F AF 45 28               IMUL EAX,dword ptr [EBP + 0x28]
006B594B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006B594E  52                        PUSH EDX
006B594F  99                        CDQ
006B5950  83 E2 07                  AND EDX,0x7
006B5953  03 C2                     ADD EAX,EDX
006B5955  C1 F8 03                  SAR EAX,0x3
006B5958  50                        PUSH EAX
006B5959  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B595C  03 C8                     ADD ECX,EAX
006B595E  56                        PUSH ESI
006B595F  51                        PUSH ECX
006B5960  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006B5963  03 F9                     ADD EDI,ECX
006B5965  57                        PUSH EDI
006B5966  E8 A5 BC 01 00            CALL 0x006d1610
006B596B  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006B596E  8B C7                     MOV EAX,EDI
006B5970  5F                        POP EDI
006B5971  5E                        POP ESI
006B5972  5B                        POP EBX
006B5973  8B E5                     MOV ESP,EBP
006B5975  5D                        POP EBP
006B5976  C2 28 00                  RET 0x28
LAB_006b5979:
006B5979  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B597C  85 C0                     TEST EAX,EAX
006B597E  7D 23                     JGE 0x006b59a3
006B5980  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006B5983  8D 4C 08 FF               LEA ECX,[EAX + ECX*0x1 + -0x1]
006B5987  8B C3                     MOV EAX,EBX
006B5989  0F AF C2                  IMUL EAX,EDX
006B598C  0F AF 4D FC               IMUL ECX,dword ptr [EBP + -0x4]
006B5990  99                        CDQ
006B5991  83 E2 07                  AND EDX,0x7
006B5994  03 C2                     ADD EAX,EDX
006B5996  C1 F8 03                  SAR EAX,0x3
006B5999  2B C1                     SUB EAX,ECX
006B599B  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B599E  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
006B59A1  EB 28                     JMP 0x006b59cb
LAB_006b59a3:
006B59A3  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
006B59A6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006B59A9  2B C2                     SUB EAX,EDX
006B59AB  2B C1                     SUB EAX,ECX
006B59AD  0F AF 45 FC               IMUL EAX,dword ptr [EBP + -0x4]
006B59B1  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
006B59B4  8B C3                     MOV EAX,EBX
006B59B6  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006B59BA  99                        CDQ
006B59BB  83 E2 07                  AND EDX,0x7
006B59BE  03 D0                     ADD EDX,EAX
006B59C0  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B59C3  C1 FA 03                  SAR EDX,0x3
006B59C6  03 C2                     ADD EAX,EDX
006B59C8  89 45 24                  MOV dword ptr [EBP + 0x24],EAX
LAB_006b59cb:
006B59CB  85 F6                     TEST ESI,ESI
006B59CD  7D 21                     JGE 0x006b59f0
006B59CF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006B59D2  8D 7C 08 FF               LEA EDI,[EAX + ECX*0x1 + -0x1]
006B59D6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B59D9  0F AF C3                  IMUL EAX,EBX
006B59DC  0F AF FE                  IMUL EDI,ESI
006B59DF  99                        CDQ
006B59E0  83 E2 07                  AND EDX,0x7
006B59E3  03 C2                     ADD EAX,EDX
006B59E5  8B D7                     MOV EDX,EDI
006B59E7  8B F8                     MOV EDI,EAX
006B59E9  C1 FF 03                  SAR EDI,0x3
006B59EC  2B FA                     SUB EDI,EDX
006B59EE  EB 1B                     JMP 0x006b5a0b
LAB_006b59f0:
006B59F0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006B59F3  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006B59F6  0F AF C3                  IMUL EAX,EBX
006B59F9  2B FA                     SUB EDI,EDX
006B59FB  2B F9                     SUB EDI,ECX
006B59FD  0F AF FE                  IMUL EDI,ESI
006B5A00  99                        CDQ
006B5A01  83 E2 07                  AND EDX,0x7
006B5A04  03 C2                     ADD EAX,EDX
006B5A06  C1 F8 03                  SAR EAX,0x3
006B5A09  03 F8                     ADD EDI,EAX
LAB_006b5a0b:
006B5A0B  8B C3                     MOV EAX,EBX
006B5A0D  51                        PUSH ECX
006B5A0E  0F AF 45 28               IMUL EAX,dword ptr [EBP + 0x28]
006B5A12  99                        CDQ
006B5A13  83 E2 07                  AND EDX,0x7
006B5A16  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006B5A19  03 C2                     ADD EAX,EDX
006B5A1B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006B5A1E  C1 F8 03                  SAR EAX,0x3
006B5A21  50                        PUSH EAX
006B5A22  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006B5A25  50                        PUSH EAX
006B5A26  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B5A29  03 CA                     ADD ECX,EDX
006B5A2B  03 F8                     ADD EDI,EAX
006B5A2D  51                        PUSH ECX
006B5A2E  56                        PUSH ESI
006B5A2F  57                        PUSH EDI
006B5A30  E8 2B 90 01 00            CALL 0x006cea60
LAB_006b5a35:
006B5A35  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
LAB_006b5a38:
006B5A38  8B C7                     MOV EAX,EDI
006B5A3A  5F                        POP EDI
006B5A3B  5E                        POP ESI
006B5A3C  5B                        POP EBX
006B5A3D  8B E5                     MOV ESP,EBP
006B5A3F  5D                        POP EBP
006B5A40  C2 28 00                  RET 0x28
