FUN_006a76d0:
006A76D0  55                        PUSH EBP
006A76D1  8B EC                     MOV EBP,ESP
006A76D3  83 EC 4C                  SUB ESP,0x4c
006A76D6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006A76D9  56                        PUSH ESI
006A76DA  0F AF 45 10               IMUL EAX,dword ptr [EBP + 0x10]
006A76DE  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006A76E1  B8 FF FF FF 7F            MOV EAX,0x7fffffff
006A76E6  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A76E9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A76EC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A76EF  57                        PUSH EDI
006A76F0  33 FF                     XOR EDI,EDI
006A76F2  33 F6                     XOR ESI,ESI
006A76F4  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006A76F7  B8 67 66 66 66            MOV EAX,0x66666667
006A76FC  F7 E9                     IMUL ECX
006A76FE  D1 FA                     SAR EDX,0x1
006A7700  8B C2                     MOV EAX,EDX
006A7702  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006A7705  C1 E8 1F                  SHR EAX,0x1f
006A7708  03 D0                     ADD EDX,EAX
006A770A  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A770D  3B D0                     CMP EDX,EAX
006A770F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
006A7712  0F 8F 20 06 00 00         JG 0x006a7d38
006A7718  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006A771B  53                        PUSH EBX
006A771C  EB 08                     JMP 0x006a7726
LAB_006a771e:
006A771E  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A7721  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006A7724  33 FF                     XOR EDI,EDI
LAB_006a7726:
006A7726  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A7729  8B C1                     MOV EAX,ECX
006A772B  2B C2                     SUB EAX,EDX
006A772D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A7730  79 03                     JNS 0x006a7735
006A7732  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
LAB_006a7735:
006A7735  8B C6                     MOV EAX,ESI
006A7737  2B C2                     SUB EAX,EDX
006A7739  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006A773C  79 03                     JNS 0x006a7741
006A773E  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
LAB_006a7741:
006A7741  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006A7744  8B FB                     MOV EDI,EBX
006A7746  2B FA                     SUB EDI,EDX
006A7748  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006A774B  79 05                     JNS 0x006a7752
006A774D  33 FF                     XOR EDI,EDI
006A774F  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_006a7752:
006A7752  8D 04 0A                  LEA EAX,[EDX + ECX*0x1]
006A7755  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A7758  3B C1                     CMP EAX,ECX
006A775A  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A775D  7C 04                     JL 0x006a7763
006A775F  49                        DEC ECX
006A7760  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
LAB_006a7763:
006A7763  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006A7766  8D 04 32                  LEA EAX,[EDX + ESI*0x1]
006A7769  3B C1                     CMP EAX,ECX
006A776B  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A776E  7C 04                     JL 0x006a7774
006A7770  49                        DEC ECX
006A7771  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
LAB_006a7774:
006A7774  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A7777  8D 04 1A                  LEA EAX,[EDX + EBX*0x1]
006A777A  3B C1                     CMP EAX,ECX
006A777C  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006A777F  7C 06                     JL 0x006a7787
006A7781  8D 41 FF                  LEA EAX,[ECX + -0x1]
006A7784  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
LAB_006a7787:
006A7787  8B F3                     MOV ESI,EBX
006A7789  2B F7                     SUB ESI,EDI
006A778B  3B F2                     CMP ESI,EDX
006A778D  89 75 B8                  MOV dword ptr [EBP + -0x48],ESI
006A7790  7C 01                     JL 0x006a7793
006A7792  47                        INC EDI
LAB_006a7793:
006A7793  8B C8                     MOV ECX,EAX
006A7795  2B CB                     SUB ECX,EBX
006A7797  3B CA                     CMP ECX,EDX
006A7799  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
006A779C  7C 01                     JL 0x006a779f
006A779E  48                        DEC EAX
LAB_006a779f:
006A779F  3B F8                     CMP EDI,EAX
006A77A1  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A77A4  0F 8F 7E 03 00 00         JG 0x006a7b28
006A77AA  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A77AD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A77B0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A77B3  2B CA                     SUB ECX,EDX
006A77B5  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A77B8  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006A77BB  2B D0                     SUB EDX,EAX
006A77BD  8B C7                     MOV EAX,EDI
006A77BF  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006A77C3  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006A77C6  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A77C9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A77CC  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A77CF  EB 0F                     JMP 0x006a77e0
LAB_006a77d1:
006A77D1  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
006A77D4  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
006A77D7  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A77DA  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A77DD  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
LAB_006a77e0:
006A77E0  3B 4D E8                  CMP ECX,dword ptr [EBP + -0x18]
006A77E3  7C 08                     JL 0x006a77ed
006A77E5  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006A77E8  85 C9                     TEST ECX,ECX
006A77EA  74 01                     JZ 0x006a77ed
006A77EC  4E                        DEC ESI
LAB_006a77ed:
006A77ED  3B 55 E8                  CMP EDX,dword ptr [EBP + -0x18]
006A77F0  0F 8C BE 00 00 00         JL 0x006a78b4
006A77F6  8B CE                     MOV ECX,ESI
006A77F8  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A77FB  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A77FF  03 C8                     ADD ECX,EAX
006A7801  03 CB                     ADD ECX,EBX
006A7803  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006A7806  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A7809  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A780C  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A780F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7812  51                        PUSH ECX
006A7813  52                        PUSH EDX
006A7814  50                        PUSH EAX
006A7815  57                        PUSH EDI
006A7816  56                        PUSH ESI
006A7817  53                        PUSH EBX
006A7818  E8 43 36 00 00            CALL 0x006aae60
006A781D  8B C8                     MOV ECX,EAX
006A781F  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A7822  3B F0                     CMP ESI,EAX
006A7824  0F 8C 85 00 00 00         JL 0x006a78af
006A782A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A782D  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006A7830  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_006a7833:
006A7833  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7836  66 8B 1A                  MOV BX,word ptr [EDX]
006A7839  66 85 DB                  TEST BX,BX
006A783C  7E 50                     JLE 0x006a788e
006A783E  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7841  7F 4B                     JG 0x006a788e
006A7843  B8 56 55 55 55            MOV EAX,0x55555556
006A7848  F7 E9                     IMUL ECX
006A784A  8B C2                     MOV EAX,EDX
006A784C  C1 E8 1F                  SHR EAX,0x1f
006A784F  03 D0                     ADD EDX,EAX
006A7851  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A7854  3B D0                     CMP EDX,EAX
006A7856  7C 36                     JL 0x006a788e
006A7858  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A785B  7F 31                     JG 0x006a788e
006A785D  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7860  7C 0A                     JL 0x006a786c
006A7862  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7865  0F BF D3                  MOVSX EDX,BX
006A7868  3B D0                     CMP EDX,EAX
006A786A  7D 22                     JGE 0x006a788e
LAB_006a786c:
006A786C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A786F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7872  0F BF C3                  MOVSX EAX,BX
006A7875  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7878  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A787B  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A7882  89 10                     MOV dword ptr [EAX],EDX
006A7884  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006A7887  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A788A  89 32                     MOV dword ptr [EDX],ESI
006A788C  89 38                     MOV dword ptr [EAX],EDI
LAB_006a788e:
006A788E  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
006A7891  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
006A7894  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A7897  2B DA                     SUB EBX,EDX
006A7899  3B F0                     CMP ESI,EAX
006A789B  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006A789E  7E 03                     JLE 0x006a78a3
006A78A0  49                        DEC ECX
006A78A1  EB 01                     JMP 0x006a78a4
LAB_006a78a3:
006A78A3  41                        INC ECX
LAB_006a78a4:
006A78A4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A78A7  4E                        DEC ESI
006A78A8  3B F0                     CMP ESI,EAX
006A78AA  7D 87                     JGE 0x006a7833
006A78AC  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
LAB_006a78af:
006A78AF  8D 73 FF                  LEA ESI,[EBX + -0x1]
006A78B2  EB 02                     JMP 0x006a78b6
LAB_006a78b4:
006A78B4  8B F3                     MOV ESI,EBX
LAB_006a78b6:
006A78B6  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A78B9  85 C0                     TEST EAX,EAX
006A78BB  0F 84 4D 02 00 00         JZ 0x006a7b0e
006A78C1  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A78C4  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006A78C7  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006A78CA  2B C3                     SUB EAX,EBX
006A78CC  3B C1                     CMP EAX,ECX
006A78CE  0F 8C AE 00 00 00         JL 0x006a7982
006A78D4  8B CB                     MOV ECX,EBX
006A78D6  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A78D9  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A78DD  03 CA                     ADD ECX,EDX
006A78DF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A78E2  03 CE                     ADD ECX,ESI
006A78E4  8D 04 4A                  LEA EAX,[EDX + ECX*0x2]
006A78E7  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A78EA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A78ED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A78F0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A78F3  51                        PUSH ECX
006A78F4  52                        PUSH EDX
006A78F5  50                        PUSH EAX
006A78F6  57                        PUSH EDI
006A78F7  53                        PUSH EBX
006A78F8  56                        PUSH ESI
006A78F9  E8 62 35 00 00            CALL 0x006aae60
006A78FE  8B C8                     MOV ECX,EAX
006A7900  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A7903  3B F0                     CMP ESI,EAX
006A7905  7C 76                     JL 0x006a797d
LAB_006a7907:
006A7907  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A790A  66 83 3A 00               CMP word ptr [EDX],0x0
006A790E  7E 51                     JLE 0x006a7961
006A7910  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7913  7F 4C                     JG 0x006a7961
006A7915  B8 56 55 55 55            MOV EAX,0x55555556
006A791A  F7 E9                     IMUL ECX
006A791C  8B C2                     MOV EAX,EDX
006A791E  C1 E8 1F                  SHR EAX,0x1f
006A7921  03 D0                     ADD EDX,EAX
006A7923  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A7926  3B D0                     CMP EDX,EAX
006A7928  7C 37                     JL 0x006a7961
006A792A  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A792D  7F 32                     JG 0x006a7961
006A792F  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7932  7C 0B                     JL 0x006a793f
006A7934  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7937  0F BF 02                  MOVSX EAX,word ptr [EDX]
006A793A  3B 45 F4                  CMP EAX,dword ptr [EBP + -0xc]
006A793D  7D 22                     JGE 0x006a7961
LAB_006a793f:
006A793F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7942  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7945  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A794C  0F BF 02                  MOVSX EAX,word ptr [EDX]
006A794F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A7952  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7955  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A7958  89 32                     MOV dword ptr [EDX],ESI
006A795A  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006A795D  89 18                     MOV dword ptr [EAX],EBX
006A795F  89 3A                     MOV dword ptr [EDX],EDI
LAB_006a7961:
006A7961  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7964  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7967  83 EA 02                  SUB EDX,0x2
006A796A  3B F0                     CMP ESI,EAX
006A796C  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A796F  7E 03                     JLE 0x006a7974
006A7971  49                        DEC ECX
006A7972  EB 01                     JMP 0x006a7975
LAB_006a7974:
006A7974  41                        INC ECX
LAB_006a7975:
006A7975  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A7978  4E                        DEC ESI
006A7979  3B F0                     CMP ESI,EAX
006A797B  7D 8A                     JGE 0x006a7907
LAB_006a797d:
006A797D  8D 73 01                  LEA ESI,[EBX + 0x1]
006A7980  EB 02                     JMP 0x006a7984
LAB_006a7982:
006A7982  8B F3                     MOV ESI,EBX
LAB_006a7984:
006A7984  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A7987  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A798A  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A798D  2B C8                     SUB ECX,EAX
006A798F  3B CA                     CMP ECX,EDX
006A7991  0F 8C BA 00 00 00         JL 0x006a7a51
006A7997  8B D6                     MOV EDX,ESI
006A7999  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A799C  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006A79A0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A79A3  03 D0                     ADD EDX,EAX
006A79A5  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A79A8  03 D0                     ADD EDX,EAX
006A79AA  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006A79AD  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A79B0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A79B3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A79B6  51                        PUSH ECX
006A79B7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A79BA  52                        PUSH EDX
006A79BB  51                        PUSH ECX
006A79BC  57                        PUSH EDI
006A79BD  56                        PUSH ESI
006A79BE  50                        PUSH EAX
006A79BF  E8 9C 34 00 00            CALL 0x006aae60
006A79C4  8B C8                     MOV ECX,EAX
006A79C6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A79C9  3B F0                     CMP ESI,EAX
006A79CB  7F 7C                     JG 0x006a7a49
LAB_006a79cd:
006A79CD  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A79D0  66 8B 1A                  MOV BX,word ptr [EDX]
006A79D3  66 85 DB                  TEST BX,BX
006A79D6  7E 50                     JLE 0x006a7a28
006A79D8  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A79DB  7F 4B                     JG 0x006a7a28
006A79DD  B8 56 55 55 55            MOV EAX,0x55555556
006A79E2  F7 E9                     IMUL ECX
006A79E4  8B C2                     MOV EAX,EDX
006A79E6  C1 E8 1F                  SHR EAX,0x1f
006A79E9  03 D0                     ADD EDX,EAX
006A79EB  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A79EE  3B D0                     CMP EDX,EAX
006A79F0  7C 36                     JL 0x006a7a28
006A79F2  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A79F5  7F 31                     JG 0x006a7a28
006A79F7  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A79FA  7C 0A                     JL 0x006a7a06
006A79FC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A79FF  0F BF D3                  MOVSX EDX,BX
006A7A02  3B D0                     CMP EDX,EAX
006A7A04  7D 22                     JGE 0x006a7a28
LAB_006a7a06:
006A7A06  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A7A09  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7A0C  0F BF C3                  MOVSX EAX,BX
006A7A0F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7A12  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A7A15  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A7A1C  89 10                     MOV dword ptr [EAX],EDX
006A7A1E  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006A7A21  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A7A24  89 32                     MOV dword ptr [EDX],ESI
006A7A26  89 38                     MOV dword ptr [EAX],EDI
LAB_006a7a28:
006A7A28  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7A2B  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006A7A2E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7A31  03 D0                     ADD EDX,EAX
006A7A33  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A7A36  3B F0                     CMP ESI,EAX
006A7A38  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7A3B  7D 03                     JGE 0x006a7a40
006A7A3D  49                        DEC ECX
006A7A3E  EB 01                     JMP 0x006a7a41
LAB_006a7a40:
006A7A40  41                        INC ECX
LAB_006a7a41:
006A7A41  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A7A44  46                        INC ESI
006A7A45  3B F0                     CMP ESI,EAX
006A7A47  7E 84                     JLE 0x006a79cd
LAB_006a7a49:
006A7A49  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A7A4C  8D 70 01                  LEA ESI,[EAX + 0x1]
006A7A4F  EB 02                     JMP 0x006a7a53
LAB_006a7a51:
006A7A51  8B F0                     MOV ESI,EAX
LAB_006a7a53:
006A7A53  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A7A56  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A7A59  3B C8                     CMP ECX,EAX
006A7A5B  0F 8C AD 00 00 00         JL 0x006a7b0e
006A7A61  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A7A64  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A7A67  8B D0                     MOV EDX,EAX
006A7A69  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006A7A6D  03 D1                     ADD EDX,ECX
006A7A6F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A7A72  03 D6                     ADD EDX,ESI
006A7A74  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006A7A77  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A7A7A  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7A7D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7A80  51                        PUSH ECX
006A7A81  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A7A84  52                        PUSH EDX
006A7A85  51                        PUSH ECX
006A7A86  57                        PUSH EDI
006A7A87  50                        PUSH EAX
006A7A88  56                        PUSH ESI
006A7A89  E8 D2 33 00 00            CALL 0x006aae60
006A7A8E  8B C8                     MOV ECX,EAX
006A7A90  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7A93  3B F0                     CMP ESI,EAX
006A7A95  7F 77                     JG 0x006a7b0e
LAB_006a7a97:
006A7A97  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7A9A  66 8B 1A                  MOV BX,word ptr [EDX]
006A7A9D  66 85 DB                  TEST BX,BX
006A7AA0  7E 50                     JLE 0x006a7af2
006A7AA2  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7AA5  7F 4B                     JG 0x006a7af2
006A7AA7  B8 56 55 55 55            MOV EAX,0x55555556
006A7AAC  F7 E9                     IMUL ECX
006A7AAE  8B C2                     MOV EAX,EDX
006A7AB0  C1 E8 1F                  SHR EAX,0x1f
006A7AB3  03 D0                     ADD EDX,EAX
006A7AB5  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A7AB8  3B D0                     CMP EDX,EAX
006A7ABA  7C 36                     JL 0x006a7af2
006A7ABC  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A7ABF  7F 31                     JG 0x006a7af2
006A7AC1  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7AC4  7C 0A                     JL 0x006a7ad0
006A7AC6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7AC9  0F BF D3                  MOVSX EDX,BX
006A7ACC  3B D0                     CMP EDX,EAX
006A7ACE  7D 22                     JGE 0x006a7af2
LAB_006a7ad0:
006A7AD0  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A7AD3  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7AD6  0F BF C3                  MOVSX EAX,BX
006A7AD9  89 32                     MOV dword ptr [EDX],ESI
006A7ADB  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006A7ADE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7AE1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A7AE4  89 02                     MOV dword ptr [EDX],EAX
006A7AE6  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A7AE9  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A7AF0  89 38                     MOV dword ptr [EAX],EDI
LAB_006a7af2:
006A7AF2  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7AF5  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7AF8  83 C2 02                  ADD EDX,0x2
006A7AFB  3B F0                     CMP ESI,EAX
006A7AFD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7B00  7D 03                     JGE 0x006a7b05
006A7B02  49                        DEC ECX
006A7B03  EB 01                     JMP 0x006a7b06
LAB_006a7b05:
006A7B05  41                        INC ECX
LAB_006a7b06:
006A7B06  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7B09  46                        INC ESI
006A7B0A  3B F0                     CMP ESI,EAX
006A7B0C  7E 89                     JLE 0x006a7a97
LAB_006a7b0e:
006A7B0E  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
006A7B11  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006A7B14  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006A7B17  47                        INC EDI
006A7B18  03 D1                     ADD EDX,ECX
006A7B1A  3B F8                     CMP EDI,EAX
006A7B1C  89 55 D8                  MOV dword ptr [EBP + -0x28],EDX
006A7B1F  0F 8E AC FC FF FF         JLE 0x006a77d1
006A7B25  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
LAB_006a7b28:
006A7B28  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006A7B2B  85 C9                     TEST ECX,ECX
006A7B2D  0F 84 E7 01 00 00         JZ 0x006a7d1a
006A7B33  3B F1                     CMP ESI,ECX
006A7B35  0F 8C EA 00 00 00         JL 0x006a7c25
006A7B3B  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A7B3E  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006A7B41  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A7B44  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006A7B48  3B DA                     CMP EBX,EDX
006A7B4A  0F 8F D5 00 00 00         JG 0x006a7c25
006A7B50  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A7B53  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006A7B56  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006A7B59  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006A7B5C  8B D3                     MOV EDX,EBX
006A7B5E  0F AF D1                  IMUL EDX,ECX
006A7B61  03 D0                     ADD EDX,EAX
006A7B63  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A7B66  03 D6                     ADD EDX,ESI
006A7B68  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006A7B6B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
LAB_006a7b6e:
006A7B6E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A7B71  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7B74  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A7B77  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7B7A  51                        PUSH ECX
006A7B7B  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006A7B7E  52                        PUSH EDX
006A7B7F  50                        PUSH EAX
006A7B80  51                        PUSH ECX
006A7B81  53                        PUSH EBX
006A7B82  56                        PUSH ESI
006A7B83  E8 D8 32 00 00            CALL 0x006aae60
006A7B88  8B C8                     MOV ECX,EAX
006A7B8A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7B8D  3B F0                     CMP ESI,EAX
006A7B8F  7F 7A                     JG 0x006a7c0b
LAB_006a7b91:
006A7B91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7B94  66 8B 3A                  MOV DI,word ptr [EDX]
006A7B97  66 85 FF                  TEST DI,DI
006A7B9A  7E 50                     JLE 0x006a7bec
006A7B9C  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7B9F  7F 4B                     JG 0x006a7bec
006A7BA1  B8 56 55 55 55            MOV EAX,0x55555556
006A7BA6  F7 E9                     IMUL ECX
006A7BA8  8B C2                     MOV EAX,EDX
006A7BAA  C1 E8 1F                  SHR EAX,0x1f
006A7BAD  03 D0                     ADD EDX,EAX
006A7BAF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A7BB2  3B D0                     CMP EDX,EAX
006A7BB4  7C 36                     JL 0x006a7bec
006A7BB6  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A7BB9  7F 31                     JG 0x006a7bec
006A7BBB  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7BBE  7C 0A                     JL 0x006a7bca
006A7BC0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7BC3  0F BF D7                  MOVSX EDX,DI
006A7BC6  3B D0                     CMP EDX,EAX
006A7BC8  7D 22                     JGE 0x006a7bec
LAB_006a7bca:
006A7BCA  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A7BCD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7BD0  0F BF C7                  MOVSX EAX,DI
006A7BD3  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7BD6  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A7BD9  89 32                     MOV dword ptr [EDX],ESI
006A7BDB  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A7BDE  89 18                     MOV dword ptr [EAX],EBX
006A7BE0  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A7BE3  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A7BEA  89 10                     MOV dword ptr [EAX],EDX
LAB_006a7bec:
006A7BEC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7BEF  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7BF2  83 C2 02                  ADD EDX,0x2
006A7BF5  3B F0                     CMP ESI,EAX
006A7BF7  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7BFA  7D 03                     JGE 0x006a7bff
006A7BFC  49                        DEC ECX
006A7BFD  EB 01                     JMP 0x006a7c00
LAB_006a7bff:
006A7BFF  41                        INC ECX
LAB_006a7c00:
006A7C00  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7C03  46                        INC ESI
006A7C04  3B F0                     CMP ESI,EAX
006A7C06  7E 89                     JLE 0x006a7b91
006A7C08  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_006a7c0b:
006A7C0B  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006A7C0E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006A7C11  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A7C14  43                        INC EBX
006A7C15  03 C2                     ADD EAX,EDX
006A7C17  3B D9                     CMP EBX,ECX
006A7C19  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A7C1C  0F 8E 4C FF FF FF         JLE 0x006a7b6e
006A7C22  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
LAB_006a7c25:
006A7C25  39 4D B4                  CMP dword ptr [EBP + -0x4c],ECX
006A7C28  0F 8C EC 00 00 00         JL 0x006a7d1a
006A7C2E  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A7C31  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
006A7C34  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A7C37  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
006A7C3B  3B D8                     CMP EBX,EAX
006A7C3D  0F 8F D7 00 00 00         JG 0x006a7d1a
006A7C43  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006A7C46  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006A7C49  8D 04 12                  LEA EAX,[EDX + EDX*0x1]
006A7C4C  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006A7C4F  8B C3                     MOV EAX,EBX
006A7C51  0F AF C2                  IMUL EAX,EDX
006A7C54  03 C1                     ADD EAX,ECX
006A7C56  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A7C59  03 C6                     ADD EAX,ESI
006A7C5B  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
006A7C5E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A7C61  EB 03                     JMP 0x006a7c66
LAB_006a7c63:
006A7C63  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_006a7c66:
006A7C66  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A7C69  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A7C6C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A7C6F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A7C72  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7C75  51                        PUSH ECX
006A7C76  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
006A7C79  52                        PUSH EDX
006A7C7A  50                        PUSH EAX
006A7C7B  51                        PUSH ECX
006A7C7C  53                        PUSH EBX
006A7C7D  56                        PUSH ESI
006A7C7E  E8 DD 31 00 00            CALL 0x006aae60
006A7C83  8B C8                     MOV ECX,EAX
006A7C85  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7C88  3B F0                     CMP ESI,EAX
006A7C8A  7F 77                     JG 0x006a7d03
LAB_006a7c8c:
006A7C8C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7C8F  66 8B 3A                  MOV DI,word ptr [EDX]
006A7C92  66 85 FF                  TEST DI,DI
006A7C95  7E 50                     JLE 0x006a7ce7
006A7C97  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7C9A  7F 4B                     JG 0x006a7ce7
006A7C9C  B8 56 55 55 55            MOV EAX,0x55555556
006A7CA1  F7 E9                     IMUL ECX
006A7CA3  8B C2                     MOV EAX,EDX
006A7CA5  C1 E8 1F                  SHR EAX,0x1f
006A7CA8  03 D0                     ADD EDX,EAX
006A7CAA  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A7CAD  3B D0                     CMP EDX,EAX
006A7CAF  7C 36                     JL 0x006a7ce7
006A7CB1  3B 55 28                  CMP EDX,dword ptr [EBP + 0x28]
006A7CB4  7F 31                     JG 0x006a7ce7
006A7CB6  3B 4D F8                  CMP ECX,dword ptr [EBP + -0x8]
006A7CB9  7C 0A                     JL 0x006a7cc5
006A7CBB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7CBE  0F BF D7                  MOVSX EDX,DI
006A7CC1  3B D0                     CMP EDX,EAX
006A7CC3  7D 22                     JGE 0x006a7ce7
LAB_006a7cc5:
006A7CC5  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A7CC8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7CCB  0F BF C7                  MOVSX EAX,DI
006A7CCE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7CD1  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A7CD4  89 32                     MOV dword ptr [EDX],ESI
006A7CD6  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A7CD9  89 18                     MOV dword ptr [EAX],EBX
006A7CDB  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A7CDE  C7 45 DC 01 00 00 00      MOV dword ptr [EBP + -0x24],0x1
006A7CE5  89 10                     MOV dword ptr [EAX],EDX
LAB_006a7ce7:
006A7CE7  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7CEA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A7CED  83 C2 02                  ADD EDX,0x2
006A7CF0  3B F0                     CMP ESI,EAX
006A7CF2  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7CF5  7D 03                     JGE 0x006a7cfa
006A7CF7  49                        DEC ECX
006A7CF8  EB 01                     JMP 0x006a7cfb
LAB_006a7cfa:
006A7CFA  41                        INC ECX
LAB_006a7cfb:
006A7CFB  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A7CFE  46                        INC ESI
006A7CFF  3B F0                     CMP ESI,EAX
006A7D01  7E 89                     JLE 0x006a7c8c
LAB_006a7d03:
006A7D03  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
006A7D06  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
006A7D09  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A7D0C  43                        INC EBX
006A7D0D  03 D1                     ADD EDX,ECX
006A7D0F  3B D8                     CMP EBX,EAX
006A7D11  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A7D14  0F 8E 49 FF FF FF         JLE 0x006a7c63
LAB_006a7d1a:
006A7D1A  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A7D1D  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A7D20  40                        INC EAX
006A7D21  3B C1                     CMP EAX,ECX
006A7D23  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A7D26  0F 8E F2 F9 FF FF         JLE 0x006a771e
006A7D2C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A7D2F  5B                        POP EBX
006A7D30  5F                        POP EDI
006A7D31  5E                        POP ESI
006A7D32  8B E5                     MOV ESP,EBP
006A7D34  5D                        POP EBP
006A7D35  C2 30 00                  RET 0x30
LAB_006a7d38:
006A7D38  8B C6                     MOV EAX,ESI
006A7D3A  5F                        POP EDI
006A7D3B  5E                        POP ESI
006A7D3C  8B E5                     MOV ESP,EBP
006A7D3E  5D                        POP EBP
006A7D3F  C2 30 00                  RET 0x30
