FUN_0060e680:
0060E680  55                        PUSH EBP
0060E681  8B EC                     MOV EBP,ESP
0060E683  83 EC 10                  SUB ESP,0x10
0060E686  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060E689  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0060E68C  99                        CDQ
0060E68D  53                        PUSH EBX
0060E68E  8B D8                     MOV EBX,EAX
0060E690  33 DA                     XOR EBX,EDX
0060E692  56                        PUSH ESI
0060E693  8B 31                     MOV ESI,dword ptr [ECX]
0060E695  2B DA                     SUB EBX,EDX
0060E697  57                        PUSH EDI
0060E698  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
0060E69B  3B DE                     CMP EBX,ESI
0060E69D  0F 8D A2 02 00 00         JGE 0x0060e945
0060E6A3  8B C7                     MOV EAX,EDI
0060E6A5  99                        CDQ
0060E6A6  33 C2                     XOR EAX,EDX
0060E6A8  2B C2                     SUB EAX,EDX
0060E6AA  3B C6                     CMP EAX,ESI
0060E6AC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060E6AF  0F 8D 90 02 00 00         JGE 0x0060e945
0060E6B5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E6B8  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
0060E6BB  99                        CDQ
0060E6BC  33 C2                     XOR EAX,EDX
0060E6BE  2B C2                     SUB EAX,EDX
0060E6C0  3B C1                     CMP EAX,ECX
0060E6C2  0F 8D 7D 02 00 00         JGE 0x0060e945
0060E6C8  0F AF C8                  IMUL ECX,EAX
0060E6CB  0F AF F3                  IMUL ESI,EBX
0060E6CE  0F AF C8                  IMUL ECX,EAX
0060E6D1  0F AF F3                  IMUL ESI,EBX
0060E6D4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060E6D7  03 CE                     ADD ECX,ESI
0060E6D9  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0060E6DC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060E6DF  0F AF D0                  IMUL EDX,EAX
0060E6E2  0F AF D0                  IMUL EDX,EAX
0060E6E5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060E6E8  03 CA                     ADD ECX,EDX
0060E6EA  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0060E6ED  0F 8D 52 02 00 00         JGE 0x0060e945
0060E6F3  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060E6F6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0060E6F9  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0060E6FC  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E6FF  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0060E702  51                        PUSH ECX
0060E703  52                        PUSH EDX
0060E704  53                        PUSH EBX
0060E705  50                        PUSH EAX
0060E706  57                        PUSH EDI
0060E707  56                        PUSH ESI
0060E708  E8 00 E8 09 00            CALL 0x006acf0d
0060E70D  8B C8                     MOV ECX,EAX
0060E70F  83 C4 18                  ADD ESP,0x18
0060E712  81 F9 C9 00 00 00         CMP ECX,0xc9
0060E718  7E 42                     JLE 0x0060e75c
0060E71A  2B DE                     SUB EBX,ESI
0060E71C  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0060E71F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060E722  8D 04 D3                  LEA EAX,[EBX + EDX*0x8]
0060E725  99                        CDQ
0060E726  F7 F9                     IDIV ECX
0060E728  03 C6                     ADD EAX,ESI
0060E72A  8B D8                     MOV EBX,EAX
0060E72C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060E72F  2B C7                     SUB EAX,EDI
0060E731  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060E734  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060E737  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0060E73A  99                        CDQ
0060E73B  F7 F9                     IDIV ECX
0060E73D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E740  03 C7                     ADD EAX,EDI
0060E742  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0060E745  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060E748  2B C2                     SUB EAX,EDX
0060E74A  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0060E74D  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0060E750  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
0060E753  99                        CDQ
0060E754  F7 F9                     IDIV ECX
0060E756  03 45 1C                  ADD EAX,dword ptr [EBP + 0x1c]
0060E759  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_0060e75c:
0060E75C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
0060E75F  8B C3                     MOV EAX,EBX
0060E761  99                        CDQ
0060E762  8B 09                     MOV ECX,dword ptr [ECX]
0060E764  33 C2                     XOR EAX,EDX
0060E766  2B C2                     SUB EAX,EDX
0060E768  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0060E76B  3B C1                     CMP EAX,ECX
0060E76D  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060E770  0F 8D A1 00 00 00         JGE 0x0060e817
0060E776  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060E779  99                        CDQ
0060E77A  33 C2                     XOR EAX,EDX
0060E77C  2B C2                     SUB EAX,EDX
0060E77E  3B C1                     CMP EAX,ECX
0060E780  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060E783  0F 8D 8E 00 00 00         JGE 0x0060e817
0060E789  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060E78C  99                        CDQ
0060E78D  33 C2                     XOR EAX,EDX
0060E78F  2B C2                     SUB EAX,EDX
0060E791  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0060E794  8B 4A 08                  MOV ECX,dword ptr [EDX + 0x8]
0060E797  3B C1                     CMP EAX,ECX
0060E799  7D 7C                     JGE 0x0060e817
0060E79B  0F AF C8                  IMUL ECX,EAX
0060E79E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060E7A1  0F AF C8                  IMUL ECX,EAX
0060E7A4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060E7A7  0F AF D0                  IMUL EDX,EAX
0060E7AA  0F AF D0                  IMUL EDX,EAX
0060E7AD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060E7B0  03 CA                     ADD ECX,EDX
0060E7B2  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0060E7B5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060E7B8  0F AF D0                  IMUL EDX,EAX
0060E7BB  0F AF D0                  IMUL EDX,EAX
0060E7BE  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060E7C1  03 CA                     ADD ECX,EDX
0060E7C3  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0060E7C6  7D 4F                     JGE 0x0060e817
0060E7C8  8B C6                     MOV EAX,ESI
0060E7CA  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
0060E7CD  2B C3                     SUB EAX,EBX
0060E7CF  99                        CDQ
0060E7D0  83 E2 07                  AND EDX,0x7
0060E7D3  03 C2                     ADD EAX,EDX
0060E7D5  C1 F8 03                  SAR EAX,0x3
0060E7D8  03 C3                     ADD EAX,EBX
0060E7DA  89 01                     MOV dword ptr [ECX],EAX
0060E7DC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060E7DF  8B C7                     MOV EAX,EDI
0060E7E1  5F                        POP EDI
0060E7E2  2B C1                     SUB EAX,ECX
0060E7E4  5E                        POP ESI
0060E7E5  99                        CDQ
0060E7E6  83 E2 07                  AND EDX,0x7
0060E7E9  5B                        POP EBX
0060E7EA  03 C2                     ADD EAX,EDX
0060E7EC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0060E7EF  C1 F8 03                  SAR EAX,0x3
0060E7F2  03 C1                     ADD EAX,ECX
0060E7F4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0060E7F7  89 02                     MOV dword ptr [EDX],EAX
0060E7F9  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E7FC  2B C1                     SUB EAX,ECX
0060E7FE  99                        CDQ
0060E7FF  83 E2 07                  AND EDX,0x7
0060E802  03 C2                     ADD EAX,EDX
0060E804  C1 F8 03                  SAR EAX,0x3
0060E807  03 C1                     ADD EAX,ECX
0060E809  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
0060E80C  89 01                     MOV dword ptr [ECX],EAX
0060E80E  B8 01 00 00 00            MOV EAX,0x1
0060E813  8B E5                     MOV ESP,EBP
0060E815  5D                        POP EBP
0060E816  C3                        RET
LAB_0060e817:
0060E817  8B C6                     MOV EAX,ESI
0060E819  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060E81C  2B C3                     SUB EAX,EBX
0060E81E  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0060E821  99                        CDQ
0060E822  2B C2                     SUB EAX,EDX
0060E824  8B F0                     MOV ESI,EAX
0060E826  8B C7                     MOV EAX,EDI
0060E828  2B C1                     SUB EAX,ECX
0060E82A  99                        CDQ
0060E82B  2B C2                     SUB EAX,EDX
0060E82D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060E830  8B F8                     MOV EDI,EAX
0060E832  8B C1                     MOV EAX,ECX
0060E834  D1 FF                     SAR EDI,0x1
0060E836  03 F8                     ADD EDI,EAX
0060E838  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0060E83B  2B C2                     SUB EAX,EDX
0060E83D  99                        CDQ
0060E83E  2B C2                     SUB EAX,EDX
0060E840  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0060E843  8B C8                     MOV ECX,EAX
0060E845  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060E848  D1 FE                     SAR ESI,0x1
0060E84A  D1 F9                     SAR ECX,0x1
0060E84C  03 F3                     ADD ESI,EBX
0060E84E  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0060E851  03 C8                     ADD ECX,EAX
0060E853  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0060E856  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E859  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0060E85C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E85F  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
0060E862  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0060E865  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0060E868  C7 45 14 07 00 00 00      MOV dword ptr [EBP + 0x14],0x7
LAB_0060e86f:
0060E86F  8B C6                     MOV EAX,ESI
0060E871  99                        CDQ
0060E872  33 C2                     XOR EAX,EDX
0060E874  2B C2                     SUB EAX,EDX
0060E876  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060E879  3B C2                     CMP EAX,EDX
0060E87B  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
0060E87E  7D 5F                     JGE 0x0060e8df
0060E880  8B C7                     MOV EAX,EDI
0060E882  99                        CDQ
0060E883  33 C2                     XOR EAX,EDX
0060E885  2B C2                     SUB EAX,EDX
0060E887  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0060E88A  3B C2                     CMP EAX,EDX
0060E88C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0060E88F  7D 4E                     JGE 0x0060e8df
0060E891  8B C1                     MOV EAX,ECX
0060E893  99                        CDQ
0060E894  33 C2                     XOR EAX,EDX
0060E896  2B C2                     SUB EAX,EDX
0060E898  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0060E89B  8B 52 08                  MOV EDX,dword ptr [EDX + 0x8]
0060E89E  3B C2                     CMP EAX,EDX
0060E8A0  7D 3D                     JGE 0x0060e8df
0060E8A2  0F AF D0                  IMUL EDX,EAX
0060E8A5  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0060E8A8  0F AF D0                  IMUL EDX,EAX
0060E8AB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060E8AE  0F AF D8                  IMUL EBX,EAX
0060E8B1  0F AF D8                  IMUL EBX,EAX
0060E8B4  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0060E8B7  03 D3                     ADD EDX,EBX
0060E8B9  8B 58 04                  MOV EBX,dword ptr [EAX + 0x4]
0060E8BC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0060E8BF  0F AF D8                  IMUL EBX,EAX
0060E8C2  0F AF D8                  IMUL EBX,EAX
0060E8C5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0060E8C8  03 D3                     ADD EDX,EBX
0060E8CA  3B 50 0C                  CMP EDX,dword ptr [EAX + 0xc]
0060E8CD  7D 0D                     JGE 0x0060e8dc
0060E8CF  8B DE                     MOV EBX,ESI
0060E8D1  89 7D 0C                  MOV dword ptr [EBP + 0xc],EDI
0060E8D4  89 5D 10                  MOV dword ptr [EBP + 0x10],EBX
0060E8D7  89 4D 1C                  MOV dword ptr [EBP + 0x1c],ECX
0060E8DA  EB 0C                     JMP 0x0060e8e8
LAB_0060e8dc:
0060E8DC  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
LAB_0060e8df:
0060E8DF  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0060E8E2  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0060E8E5  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0060e8e8:
0060E8E8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0060E8EB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060E8EE  2B C3                     SUB EAX,EBX
0060E8F0  99                        CDQ
0060E8F1  2B C2                     SUB EAX,EDX
0060E8F3  8B F0                     MOV ESI,EAX
0060E8F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060E8F8  2B C1                     SUB EAX,ECX
0060E8FA  99                        CDQ
0060E8FB  2B C2                     SUB EAX,EDX
0060E8FD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E900  8B F8                     MOV EDI,EAX
0060E902  8B C1                     MOV EAX,ECX
0060E904  D1 FF                     SAR EDI,0x1
0060E906  03 F8                     ADD EDI,EAX
0060E908  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060E90B  2B C2                     SUB EAX,EDX
0060E90D  99                        CDQ
0060E90E  2B C2                     SUB EAX,EDX
0060E910  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
0060E913  8B C8                     MOV ECX,EAX
0060E915  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0060E918  D1 FE                     SAR ESI,0x1
0060E91A  D1 F9                     SAR ECX,0x1
0060E91C  03 F3                     ADD ESI,EBX
0060E91E  03 CA                     ADD ECX,EDX
0060E920  48                        DEC EAX
0060E921  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0060E924  0F 85 45 FF FF FF         JNZ 0x0060e86f
0060E92A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
0060E92D  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0060E930  89 32                     MOV dword ptr [EDX],ESI
0060E932  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0060E935  89 38                     MOV dword ptr [EAX],EDI
0060E937  5F                        POP EDI
0060E938  5E                        POP ESI
0060E939  89 0A                     MOV dword ptr [EDX],ECX
0060E93B  B8 01 00 00 00            MOV EAX,0x1
0060E940  5B                        POP EBX
0060E941  8B E5                     MOV ESP,EBP
0060E943  5D                        POP EBP
0060E944  C3                        RET
LAB_0060e945:
0060E945  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
0060E948  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060E94B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
0060E94E  89 08                     MOV dword ptr [EAX],ECX
0060E950  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
0060E953  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
0060E956  89 3A                     MOV dword ptr [EDX],EDI
0060E958  5F                        POP EDI
0060E959  89 08                     MOV dword ptr [EAX],ECX
0060E95B  5E                        POP ESI
0060E95C  33 C0                     XOR EAX,EAX
0060E95E  5B                        POP EBX
0060E95F  8B E5                     MOV ESP,EBP
0060E961  5D                        POP EBP
0060E962  C3                        RET
