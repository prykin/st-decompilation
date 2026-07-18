FUN_0069e4d0:
0069E4D0  55                        PUSH EBP
0069E4D1  8B EC                     MOV EBP,ESP
0069E4D3  81 EC CC 00 00 00         SUB ESP,0xcc
0069E4D9  53                        PUSH EBX
0069E4DA  56                        PUSH ESI
0069E4DB  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
0069E4DE  57                        PUSH EDI
0069E4DF  B9 09 00 00 00            MOV ECX,0x9
0069E4E4  33 C0                     XOR EAX,EAX
0069E4E6  8D 7D 94                  LEA EDI,[EBP + -0x6c]
0069E4E9  F3 AB                     STOSD.REP ES:EDI
0069E4EB  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0069E4EE  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0069E4F1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0069E4F4  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0069E4F7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0069E4FA  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_0069e4fd:
0069E4FD  E8 BE 01 09 00            CALL 0x0072e6c0
0069E502  99                        CDQ
0069E503  B9 09 00 00 00            MOV ECX,0x9
0069E508  F7 F9                     IDIV ECX
0069E50A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069E50D  8D 74 02 F8               LEA ESI,[EDX + EAX*0x1 + -0x8]
0069E511  56                        PUSH ESI
0069E512  E8 39 1A 01 00            CALL 0x006aff50
0069E517  56                        PUSH ESI
0069E518  8B F8                     MOV EDI,EAX
0069E51A  E8 3C 1A 01 00            CALL 0x006aff5b
0069E51F  83 C4 08                  ADD ESP,0x8
0069E522  8B F0                     MOV ESI,EAX
0069E524  E8 97 01 09 00            CALL 0x0072e6c0
0069E529  99                        CDQ
0069E52A  B9 33 00 00 00            MOV ECX,0x33
0069E52F  F7 F9                     IDIV ECX
0069E531  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E536  8B CA                     MOV ECX,EDX
0069E538  81 C1 B4 00 00 00         ADD ECX,0xb4
0069E53E  8B D1                     MOV EDX,ECX
0069E540  0F AF CE                  IMUL ECX,ESI
0069E543  0F AF D7                  IMUL EDX,EDI
0069E546  F7 EA                     IMUL EDX
0069E548  C1 FA 0C                  SAR EDX,0xc
0069E54B  8B C2                     MOV EAX,EDX
0069E54D  C1 E8 1F                  SHR EAX,0x1f
0069E550  03 D0                     ADD EDX,EAX
0069E552  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E557  8B FA                     MOV EDI,EDX
0069E559  F7 E9                     IMUL ECX
0069E55B  C1 FA 0C                  SAR EDX,0xc
0069E55E  8B CA                     MOV ECX,EDX
0069E560  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E565  C1 E9 1F                  SHR ECX,0x1f
0069E568  03 D1                     ADD EDX,ECX
0069E56A  8B F2                     MOV ESI,EDX
0069E56C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069E56F  8D 1C 17                  LEA EBX,[EDI + EDX*0x1]
0069E572  F7 EB                     IMUL EBX
0069E574  C1 FA 05                  SAR EDX,0x5
0069E577  8B C2                     MOV EAX,EDX
0069E579  C1 E8 1F                  SHR EAX,0x1f
0069E57C  03 D0                     ADD EDX,EAX
0069E57E  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E583  8B CA                     MOV ECX,EDX
0069E585  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069E588  03 D6                     ADD EDX,ESI
0069E58A  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
0069E58D  F7 EA                     IMUL EDX
0069E58F  C1 FA 05                  SAR EDX,0x5
0069E592  8B C2                     MOV EAX,EDX
0069E594  C1 E8 1F                  SHR EAX,0x1f
0069E597  03 D0                     ADD EDX,EAX
0069E599  85 C9                     TEST ECX,ECX
0069E59B  0F 8E F8 00 00 00         JLE 0x0069e699
0069E5A1  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069E5A4  48                        DEC EAX
0069E5A5  3B C8                     CMP ECX,EAX
0069E5A7  0F 8D EC 00 00 00         JGE 0x0069e699
0069E5AD  85 D2                     TEST EDX,EDX
0069E5AF  0F 8E E4 00 00 00         JLE 0x0069e699
0069E5B5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0069E5B8  48                        DEC EAX
0069E5B9  3B D0                     CMP EDX,EAX
0069E5BB  0F 8D D8 00 00 00         JGE 0x0069e699
0069E5C1  0F AF 55 14               IMUL EDX,dword ptr [EBP + 0x14]
0069E5C5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069E5C8  03 D1                     ADD EDX,ECX
0069E5CA  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
0069E5D1  2B CA                     SUB ECX,EDX
0069E5D3  8D 44 48 06               LEA EAX,[EAX + ECX*0x2 + 0x6]
0069E5D7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0069E5DA  83 38 00                  CMP dword ptr [EAX],0x0
0069E5DD  0F 8D B6 00 00 00         JGE 0x0069e699
0069E5E3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0069E5E6  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0069E5EC  6A 00                     PUSH 0x0
0069E5EE  51                        PUSH ECX
0069E5EF  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069E5F2  50                        PUSH EAX
0069E5F3  52                        PUSH EDX
0069E5F4  E8 88 76 D6 FF            CALL 0x00405c81
0069E5F9  33 D2                     XOR EDX,EDX
0069E5FB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0069E5FE  85 C0                     TEST EAX,EAX
0069E600  7E 32                     JLE 0x0069e634
0069E602  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0069E608  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0069e60b:
0069E60B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069E60E  8B 08                     MOV ECX,dword ptr [EAX]
0069E610  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0069E617  2B C1                     SUB EAX,ECX
0069E619  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069E61C  83 7C 41 02 00            CMP dword ptr [ECX + EAX*0x2 + 0x2],0x0
0069E621  75 76                     JNZ 0x0069e699
0069E623  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069E626  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0069E629  42                        INC EDX
0069E62A  83 C1 04                  ADD ECX,0x4
0069E62D  3B D0                     CMP EDX,EAX
0069E62F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069E632  7C D7                     JL 0x0069e60b
LAB_0069e634:
0069E634  E8 87 00 09 00            CALL 0x0072e6c0
0069E639  25 03 00 00 80            AND EAX,0x80000003
0069E63E  79 05                     JNS 0x0069e645
0069E640  48                        DEC EAX
0069E641  83 C8 FC                  OR EAX,0xfffffffc
0069E644  40                        INC EAX
LAB_0069e645:
0069E645  85 C0                     TEST EAX,EAX
0069E647  7E 50                     JLE 0x0069e699
0069E649  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0069E64C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069E64F  C7 44 15 94 01 00 00 00   MOV dword ptr [EBP + EDX*0x1 + -0x6c],0x1
0069E657  C7 00 EF 03 00 00         MOV dword ptr [EAX],0x3ef
0069E65D  E8 5E 00 09 00            CALL 0x0072e6c0
0069E662  8B 0D 4C 93 7D 00         MOV ECX,dword ptr [0x007d934c]
0069E668  33 D2                     XOR EDX,EDX
0069E66A  83 C1 FE                  ADD ECX,-0x2
0069E66D  F7 F1                     DIV ECX
0069E66F  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069E672  52                        PUSH EDX
0069E673  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
0069E676  68 EF 03 00 00            PUSH 0x3ef
0069E67B  6A 00                     PUSH 0x0
0069E67D  52                        PUSH EDX
0069E67E  53                        PUSH EBX
0069E67F  E8 D2 41 D6 FF            CALL 0x00402856
0069E684  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069E687  66 89 BC 05 40 FF FF FF   MOV word ptr [EBP + EAX*0x1 + 0xffffff40],DI
0069E68F  66 89 B4 05 42 FF FF FF   MOV word ptr [EBP + EAX*0x1 + 0xffffff42],SI
0069E697  EB 03                     JMP 0x0069e69c
LAB_0069e699:
0069E699  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
LAB_0069e69c:
0069E69C  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0069E69F  83 C0 04                  ADD EAX,0x4
0069E6A2  83 C6 28                  ADD ESI,0x28
0069E6A5  83 F8 24                  CMP EAX,0x24
0069E6A8  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0069E6AB  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069E6AE  0F 8C 49 FE FF FF         JL 0x0069e4fd
0069E6B4  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
0069E6BB  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0069e6c2:
0069E6C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069E6C5  85 C0                     TEST EAX,EAX
0069E6C7  0F 8E 3B 02 00 00         JLE 0x0069e908
0069E6CD  E8 EE FF 08 00            CALL 0x0072e6c0
0069E6D2  99                        CDQ
0069E6D3  B9 09 00 00 00            MOV ECX,0x9
0069E6D8  F7 F9                     IDIV ECX
0069E6DA  8B 44 95 94               MOV EAX,dword ptr [EBP + EDX*0x4 + -0x6c]
0069E6DE  85 C0                     TEST EAX,EAX
0069E6E0  75 18                     JNZ 0x0069e6fa
0069E6E2  33 C0                     XOR EAX,EAX
LAB_0069e6e4:
0069E6E4  42                        INC EDX
0069E6E5  83 FA 09                  CMP EDX,0x9
0069E6E8  7C 02                     JL 0x0069e6ec
0069E6EA  33 D2                     XOR EDX,EDX
LAB_0069e6ec:
0069E6EC  8B 4C 95 94               MOV ECX,dword ptr [EBP + EDX*0x4 + -0x6c]
0069E6F0  85 C9                     TEST ECX,ECX
0069E6F2  7F 06                     JG 0x0069e6fa
0069E6F4  40                        INC EAX
0069E6F5  83 F8 09                  CMP EAX,0x9
0069E6F8  7C EA                     JL 0x0069e6e4
LAB_0069e6fa:
0069E6FA  8B 4C 95 94               MOV ECX,dword ptr [EBP + EDX*0x4 + -0x6c]
0069E6FE  8D 44 95 94               LEA EAX,[EBP + EDX*0x4 + -0x6c]
0069E702  85 C9                     TEST ECX,ECX
0069E704  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0069E707  0F 8E E8 01 00 00         JLE 0x0069e8f5
0069E70D  0F BF 84 95 40 FF FF FF   MOVSX EAX,word ptr [EBP + EDX*0x4 + 0xffffff40]
0069E715  0F BF 8C 95 42 FF FF FF   MOVSX ECX,word ptr [EBP + EDX*0x4 + 0xffffff42]
0069E71D  8D 34 92                  LEA ESI,[EDX + EDX*0x4]
0069E720  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0069E727  C1 E6 03                  SHL ESI,0x3
0069E72A  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0069E72D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0069E730  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
LAB_0069e733:
0069E733  E8 88 FF 08 00            CALL 0x0072e6c0
0069E738  99                        CDQ
0069E739  B9 79 00 00 00            MOV ECX,0x79
0069E73E  F7 F9                     IDIV ECX
0069E740  8D 7C 32 C4               LEA EDI,[EDX + ESI*0x1 + -0x3c]
0069E744  E8 77 FF 08 00            CALL 0x0072e6c0
0069E749  99                        CDQ
0069E74A  B9 29 00 00 00            MOV ECX,0x29
0069E74F  57                        PUSH EDI
0069E750  F7 F9                     IDIV ECX
0069E752  8B F2                     MOV ESI,EDX
0069E754  81 C6 AA 00 00 00         ADD ESI,0xaa
0069E75A  E8 F1 17 01 00            CALL 0x006aff50
0069E75F  8B CE                     MOV ECX,ESI
0069E761  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0069E764  0F AF C8                  IMUL ECX,EAX
0069E767  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E76C  57                        PUSH EDI
0069E76D  F7 E9                     IMUL ECX
0069E76F  C1 FA 0C                  SAR EDX,0xc
0069E772  8B C2                     MOV EAX,EDX
0069E774  C1 E8 1F                  SHR EAX,0x1f
0069E777  03 D0                     ADD EDX,EAX
0069E779  03 D3                     ADD EDX,EBX
0069E77B  8B DA                     MOV EBX,EDX
0069E77D  E8 D9 17 01 00            CALL 0x006aff5b
0069E782  8B C8                     MOV ECX,EAX
0069E784  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E789  0F AF CE                  IMUL ECX,ESI
0069E78C  F7 E9                     IMUL ECX
0069E78E  C1 FA 0C                  SAR EDX,0xc
0069E791  8B CA                     MOV ECX,EDX
0069E793  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E798  C1 E9 1F                  SHR ECX,0x1f
0069E79B  03 D1                     ADD EDX,ECX
0069E79D  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0069E7A0  03 D1                     ADD EDX,ECX
0069E7A2  83 C4 08                  ADD ESP,0x8
0069E7A5  8B FA                     MOV EDI,EDX
0069E7A7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069E7AA  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
0069E7AD  F7 E9                     IMUL ECX
0069E7AF  C1 FA 05                  SAR EDX,0x5
0069E7B2  8B C2                     MOV EAX,EDX
0069E7B4  C1 E8 1F                  SHR EAX,0x1f
0069E7B7  03 D0                     ADD EDX,EAX
0069E7B9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E7BE  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0069E7C1  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069E7C4  8D 34 17                  LEA ESI,[EDI + EDX*0x1]
0069E7C7  F7 EE                     IMUL ESI
0069E7C9  C1 FA 05                  SAR EDX,0x5
0069E7CC  8B C2                     MOV EAX,EDX
0069E7CE  C1 E8 1F                  SHR EAX,0x1f
0069E7D1  03 D0                     ADD EDX,EAX
0069E7D3  85 C9                     TEST ECX,ECX
0069E7D5  0F 8E 98 00 00 00         JLE 0x0069e873
0069E7DB  85 F6                     TEST ESI,ESI
0069E7DD  0F 8E 90 00 00 00         JLE 0x0069e873
0069E7E3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069E7E6  85 C0                     TEST EAX,EAX
0069E7E8  0F 8C 85 00 00 00         JL 0x0069e873
0069E7EE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0069E7F1  3B C1                     CMP EAX,ECX
0069E7F3  7D 7E                     JGE 0x0069e873
0069E7F5  85 D2                     TEST EDX,EDX
0069E7F7  7C 7A                     JL 0x0069e873
0069E7F9  3B 55 18                  CMP EDX,dword ptr [EBP + 0x18]
0069E7FC  7D 75                     JGE 0x0069e873
0069E7FE  0F AF D1                  IMUL EDX,ECX
0069E801  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0069E804  03 D0                     ADD EDX,EAX
0069E806  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0069E809  8D 04 D5 00 00 00 00      LEA EAX,[EDX*0x8 + 0x0]
0069E810  2B C2                     SUB EAX,EDX
0069E812  8D 04 46                  LEA EAX,[ESI + EAX*0x2]
0069E815  8B 70 06                  MOV ESI,dword ptr [EAX + 0x6]
0069E818  85 F6                     TEST ESI,ESI
0069E81A  7D 57                     JGE 0x0069e873
0069E81C  8B 70 02                  MOV ESI,dword ptr [EAX + 0x2]
0069E81F  85 F6                     TEST ESI,ESI
0069E821  75 50                     JNZ 0x0069e873
0069E823  8D 85 64 FF FF FF         LEA EAX,[EBP + 0xffffff64]
0069E829  6A 00                     PUSH 0x0
0069E82B  50                        PUSH EAX
0069E82C  51                        PUSH ECX
0069E82D  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069E830  52                        PUSH EDX
0069E831  E8 4B 74 D6 FF            CALL 0x00405c81
0069E836  8B C8                     MOV ECX,EAX
0069E838  33 C0                     XOR EAX,EAX
0069E83A  85 C9                     TEST ECX,ECX
0069E83C  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069E83F  7E 46                     JLE 0x0069e887
0069E841  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
LAB_0069e847:
0069E847  8B 0A                     MOV ECX,dword ptr [EDX]
0069E849  8D 34 CD 00 00 00 00      LEA ESI,[ECX*0x8 + 0x0]
0069E850  2B F1                     SUB ESI,ECX
0069E852  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069E855  8D 0C 71                  LEA ECX,[ECX + ESI*0x2]
0069E858  8B 71 02                  MOV ESI,dword ptr [ECX + 0x2]
0069E85B  85 F6                     TEST ESI,ESI
0069E85D  74 07                     JZ 0x0069e866
0069E85F  8B 71 06                  MOV ESI,dword ptr [ECX + 0x6]
0069E862  85 F6                     TEST ESI,ESI
0069E864  7F 0D                     JG 0x0069e873
LAB_0069e866:
0069E866  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0069E869  40                        INC EAX
0069E86A  83 C2 04                  ADD EDX,0x4
0069E86D  3B C1                     CMP EAX,ECX
0069E86F  7D 16                     JGE 0x0069e887
0069E871  EB D4                     JMP 0x0069e847
LAB_0069e873:
0069E873  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069E876  40                        INC EAX
0069E877  83 F8 05                  CMP EAX,0x5
0069E87A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069E87D  7D 76                     JGE 0x0069e8f5
0069E87F  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
0069E882  E9 AC FE FF FF            JMP 0x0069e733
LAB_0069e887:
0069E887  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069E88A  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0069E88D  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0069E894  C7 44 35 C8 01 00 00 00   MOV dword ptr [EBP + ESI*0x1 + -0x38],0x1
0069E89C  2B D0                     SUB EDX,EAX
0069E89E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069E8A1  C7 44 50 06 EF 03 00 00   MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef
0069E8A9  E8 12 FE 08 00            CALL 0x0072e6c0
0069E8AE  8B 0D 4C 93 7D 00         MOV ECX,dword ptr [0x007d934c]
0069E8B4  33 D2                     XOR EDX,EDX
0069E8B6  83 C1 FC                  ADD ECX,-0x4
0069E8B9  F7 F1                     DIV ECX
0069E8BB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069E8BE  83 C2 04                  ADD EDX,0x4
0069E8C1  52                        PUSH EDX
0069E8C2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069E8C5  68 EF 03 00 00            PUSH 0x3ef
0069E8CA  6A 00                     PUSH 0x0
0069E8CC  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0069E8CF  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
0069E8D2  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069E8D5  50                        PUSH EAX
0069E8D6  52                        PUSH EDX
0069E8D7  E8 7A 3F D6 FF            CALL 0x00402856
0069E8DC  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0069E8DF  66 89 5C 35 B8            MOV word ptr [EBP + ESI*0x1 + -0x48],BX
0069E8E4  66 89 7C 35 BA            MOV word ptr [EBP + ESI*0x1 + -0x46],DI
0069E8E9  83 C6 04                  ADD ESI,0x4
0069E8EC  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0069E8EF  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
LAB_0069e8f5:
0069E8F5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069E8F8  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069E8FB  49                        DEC ECX
0069E8FC  83 F8 10                  CMP EAX,0x10
0069E8FF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069E902  0F 8C BA FD FF FF         JL 0x0069e6c2
LAB_0069e908:
0069E908  C7 45 FC 0A 00 00 00      MOV dword ptr [EBP + -0x4],0xa
0069E90F  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
LAB_0069e916:
0069E916  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0069E919  85 C0                     TEST EAX,EAX
0069E91B  0F 8E 13 02 00 00         JLE 0x0069eb34
0069E921  E8 9A FD 08 00            CALL 0x0072e6c0
0069E926  25 03 00 00 80            AND EAX,0x80000003
0069E92B  79 05                     JNS 0x0069e932
0069E92D  48                        DEC EAX
0069E92E  83 C8 FC                  OR EAX,0xfffffffc
0069E931  40                        INC EAX
LAB_0069e932:
0069E932  8B 4C 85 94               MOV ECX,dword ptr [EBP + EAX*0x4 + -0x6c]
0069E936  85 C9                     TEST ECX,ECX
0069E938  75 18                     JNZ 0x0069e952
0069E93A  33 C9                     XOR ECX,ECX
LAB_0069e93c:
0069E93C  40                        INC EAX
0069E93D  83 F8 04                  CMP EAX,0x4
0069E940  7C 02                     JL 0x0069e944
0069E942  33 C0                     XOR EAX,EAX
LAB_0069e944:
0069E944  8B 54 85 94               MOV EDX,dword ptr [EBP + EAX*0x4 + -0x6c]
0069E948  85 D2                     TEST EDX,EDX
0069E94A  7F 06                     JG 0x0069e952
0069E94C  41                        INC ECX
0069E94D  83 F9 04                  CMP ECX,0x4
0069E950  7C EA                     JL 0x0069e93c
LAB_0069e952:
0069E952  8B 4C 85 C8               MOV ECX,dword ptr [EBP + EAX*0x4 + -0x38]
0069E956  85 C9                     TEST ECX,ECX
0069E958  0F 8E C3 01 00 00         JLE 0x0069eb21
0069E95E  0F BF 4C 85 B8            MOVSX ECX,word ptr [EBP + EAX*0x4 + -0x48]
0069E963  0F BF 54 85 BA            MOVSX EDX,word ptr [EBP + EAX*0x4 + -0x46]
0069E968  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0069E96F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0069E972  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_0069e975:
0069E975  E8 46 FD 08 00            CALL 0x0072e6c0
0069E97A  99                        CDQ
0069E97B  B9 69 01 00 00            MOV ECX,0x169
0069E980  F7 F9                     IDIV ECX
0069E982  8B FA                     MOV EDI,EDX
0069E984  E8 37 FD 08 00            CALL 0x0072e6c0
0069E989  99                        CDQ
0069E98A  B9 1F 00 00 00            MOV ECX,0x1f
0069E98F  57                        PUSH EDI
0069E990  F7 F9                     IDIV ECX
0069E992  8B F2                     MOV ESI,EDX
0069E994  81 C6 8C 00 00 00         ADD ESI,0x8c
0069E99A  E8 B1 15 01 00            CALL 0x006aff50
0069E99F  8B CE                     MOV ECX,ESI
0069E9A1  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0069E9A4  0F AF C8                  IMUL ECX,EAX
0069E9A7  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E9AC  57                        PUSH EDI
0069E9AD  F7 E9                     IMUL ECX
0069E9AF  C1 FA 0C                  SAR EDX,0xc
0069E9B2  8B C2                     MOV EAX,EDX
0069E9B4  C1 E8 1F                  SHR EAX,0x1f
0069E9B7  03 D0                     ADD EDX,EAX
0069E9B9  03 D3                     ADD EDX,EBX
0069E9BB  8B DA                     MOV EBX,EDX
0069E9BD  E8 99 15 01 00            CALL 0x006aff5b
0069E9C2  8B C8                     MOV ECX,EAX
0069E9C4  B8 AD 8B DB 68            MOV EAX,0x68db8bad
0069E9C9  0F AF CE                  IMUL ECX,ESI
0069E9CC  F7 E9                     IMUL ECX
0069E9CE  C1 FA 0C                  SAR EDX,0xc
0069E9D1  8B CA                     MOV ECX,EDX
0069E9D3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E9D8  C1 E9 1F                  SHR ECX,0x1f
0069E9DB  03 D1                     ADD EDX,ECX
0069E9DD  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0069E9E0  03 D1                     ADD EDX,ECX
0069E9E2  83 C4 08                  ADD ESP,0x8
0069E9E5  8B F2                     MOV ESI,EDX
0069E9E7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0069E9EA  8D 0C 13                  LEA ECX,[EBX + EDX*0x1]
0069E9ED  F7 E9                     IMUL ECX
0069E9EF  C1 FA 05                  SAR EDX,0x5
0069E9F2  8B C2                     MOV EAX,EDX
0069E9F4  C1 E8 1F                  SHR EAX,0x1f
0069E9F7  03 D0                     ADD EDX,EAX
0069E9F9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0069E9FE  8B CA                     MOV ECX,EDX
0069EA00  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069EA03  03 D6                     ADD EDX,ESI
0069EA05  F7 EA                     IMUL EDX
0069EA07  C1 FA 05                  SAR EDX,0x5
0069EA0A  8B C2                     MOV EAX,EDX
0069EA0C  C1 E8 1F                  SHR EAX,0x1f
0069EA0F  03 D0                     ADD EDX,EAX
0069EA11  85 C9                     TEST ECX,ECX
0069EA13  0F 8E 8F 00 00 00         JLE 0x0069eaa8
0069EA19  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0069EA1C  8D 47 FF                  LEA EAX,[EDI + -0x1]
0069EA1F  3B C8                     CMP ECX,EAX
0069EA21  0F 8D 81 00 00 00         JGE 0x0069eaa8
0069EA27  85 D2                     TEST EDX,EDX
0069EA29  7E 7D                     JLE 0x0069eaa8
0069EA2B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0069EA2E  48                        DEC EAX
0069EA2F  3B D0                     CMP EDX,EAX
0069EA31  7D 75                     JGE 0x0069eaa8
0069EA33  0F AF D7                  IMUL EDX,EDI
0069EA36  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069EA39  03 D1                     ADD EDX,ECX
0069EA3B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0069EA3E  8D 0C D5 00 00 00 00      LEA ECX,[EDX*0x8 + 0x0]
0069EA45  2B CA                     SUB ECX,EDX
0069EA47  8D 04 48                  LEA EAX,[EAX + ECX*0x2]
0069EA4A  8B 48 06                  MOV ECX,dword ptr [EAX + 0x6]
0069EA4D  85 C9                     TEST ECX,ECX
0069EA4F  7D 57                     JGE 0x0069eaa8
0069EA51  8B 48 02                  MOV ECX,dword ptr [EAX + 0x2]
0069EA54  85 C9                     TEST ECX,ECX
0069EA56  75 50                     JNZ 0x0069eaa8
0069EA58  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
0069EA5E  6A 00                     PUSH 0x0
0069EA60  51                        PUSH ECX
0069EA61  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069EA64  57                        PUSH EDI
0069EA65  52                        PUSH EDX
0069EA66  E8 16 72 D6 FF            CALL 0x00405c81
0069EA6B  8B C8                     MOV ECX,EAX
0069EA6D  33 C0                     XOR EAX,EAX
0069EA6F  85 C9                     TEST ECX,ECX
0069EA71  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0069EA74  7E 43                     JLE 0x0069eab9
0069EA76  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
LAB_0069ea7c:
0069EA7C  8B 0A                     MOV ECX,dword ptr [EDX]
0069EA7E  8D 3C CD 00 00 00 00      LEA EDI,[ECX*0x8 + 0x0]
0069EA85  2B F9                     SUB EDI,ECX
0069EA87  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0069EA8A  8D 0C 79                  LEA ECX,[ECX + EDI*0x2]
0069EA8D  8B 79 02                  MOV EDI,dword ptr [ECX + 0x2]
0069EA90  85 FF                     TEST EDI,EDI
0069EA92  74 07                     JZ 0x0069ea9b
0069EA94  8B 79 06                  MOV EDI,dword ptr [ECX + 0x6]
0069EA97  85 FF                     TEST EDI,EDI
0069EA99  7F 0D                     JG 0x0069eaa8
LAB_0069ea9b:
0069EA9B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0069EA9E  40                        INC EAX
0069EA9F  83 C2 04                  ADD EDX,0x4
0069EAA2  3B C1                     CMP EAX,ECX
0069EAA4  7D 13                     JGE 0x0069eab9
0069EAA6  EB D4                     JMP 0x0069ea7c
LAB_0069eaa8:
0069EAA8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0069EAAB  40                        INC EAX
0069EAAC  83 F8 05                  CMP EAX,0x5
0069EAAF  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0069EAB2  7D 6D                     JGE 0x0069eb21
0069EAB4  E9 BC FE FF FF            JMP 0x0069e975
LAB_0069eab9:
0069EAB9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0069EABC  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0069EABF  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
0069EAC6  C7 84 3D 34 FF FF FF 01 00 00 00  MOV dword ptr [EBP + EDI*0x1 + 0xffffff34],0x1
0069EAD1  2B D0                     SUB EDX,EAX
0069EAD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069EAD6  C7 44 50 06 EF 03 00 00   MOV dword ptr [EAX + EDX*0x2 + 0x6],0x3ef
0069EADE  E8 DD FB 08 00            CALL 0x0072e6c0
0069EAE3  8B 0D 4C 93 7D 00         MOV ECX,dword ptr [0x007d934c]
0069EAE9  33 D2                     XOR EDX,EDX
0069EAEB  83 C1 FB                  ADD ECX,-0x5
0069EAEE  F7 F1                     DIV ECX
0069EAF0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0069EAF3  83 C2 05                  ADD EDX,0x5
0069EAF6  52                        PUSH EDX
0069EAF7  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0069EAFA  68 EF 03 00 00            PUSH 0x3ef
0069EAFF  6A 00                     PUSH 0x0
0069EB01  8D 04 16                  LEA EAX,[ESI + EDX*0x1]
0069EB04  8D 14 0B                  LEA EDX,[EBX + ECX*0x1]
0069EB07  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0069EB0A  50                        PUSH EAX
0069EB0B  52                        PUSH EDX
0069EB0C  E8 45 3D D6 FF            CALL 0x00402856
0069EB11  66 89 5C 3D 88            MOV word ptr [EBP + EDI*0x1 + -0x78],BX
0069EB16  66 89 74 3D 8A            MOV word ptr [EBP + EDI*0x1 + -0x76],SI
0069EB1B  83 C7 04                  ADD EDI,0x4
0069EB1E  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_0069eb21:
0069EB21  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0069EB24  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0069EB27  49                        DEC ECX
0069EB28  83 F8 0C                  CMP EAX,0xc
0069EB2B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0069EB2E  0F 8C E2 FD FF FF         JL 0x0069e916
LAB_0069eb34:
0069EB34  5F                        POP EDI
0069EB35  5E                        POP ESI
0069EB36  5B                        POP EBX
0069EB37  8B E5                     MOV ESP,EBP
0069EB39  5D                        POP EBP
0069EB3A  C2 14 00                  RET 0x14
