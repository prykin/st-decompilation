FUN_00727da0:
00727DA0  55                        PUSH EBP
00727DA1  8B EC                     MOV EBP,ESP
00727DA3  83 EC 5C                  SUB ESP,0x5c
00727DA6  53                        PUSH EBX
00727DA7  56                        PUSH ESI
00727DA8  57                        PUSH EDI
00727DA9  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00727DAC  8B F1                     MOV ESI,ECX
00727DAE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00727DB1  8D 04 FD 00 00 00 00      LEA EAX,[EDI*0x8 + 0x0]
00727DB8  2B C7                     SUB EAX,EDI
00727DBA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00727DBD  8B 51 28                  MOV EDX,dword ptr [ECX + 0x28]
00727DC0  33 C9                     XOR ECX,ECX
00727DC2  8A 4C 82 01               MOV CL,byte ptr [EDX + EAX*0x4 + 0x1]
00727DC6  8D 04 82                  LEA EAX,[EDX + EAX*0x4]
00727DC9  8B D1                     MOV EDX,ECX
00727DCB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00727DCE  C1 E2 04                  SHL EDX,0x4
00727DD1  03 D1                     ADD EDX,ECX
00727DD3  8B 1A                     MOV EBX,dword ptr [EDX]
00727DD5  89 1D A8 70 85 00         MOV dword ptr [0x008570a8],EBX
00727DDB  8B 5A 04                  MOV EBX,dword ptr [EDX + 0x4]
00727DDE  89 1D AC 70 85 00         MOV dword ptr [0x008570ac],EBX
00727DE4  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
00727DE7  89 1D B0 70 85 00         MOV dword ptr [0x008570b0],EBX
00727DED  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00727DF0  89 15 B4 70 85 00         MOV dword ptr [0x008570b4],EDX
00727DF6  33 D2                     XOR EDX,EDX
00727DF8  8A 50 02                  MOV DL,byte ptr [EAX + 0x2]
00727DFB  C1 E2 04                  SHL EDX,0x4
00727DFE  03 D1                     ADD EDX,ECX
00727E00  8B 1A                     MOV EBX,dword ptr [EDX]
00727E02  89 1D B8 70 85 00         MOV dword ptr [0x008570b8],EBX
00727E08  8B 5A 04                  MOV EBX,dword ptr [EDX + 0x4]
00727E0B  89 1D BC 70 85 00         MOV dword ptr [0x008570bc],EBX
00727E11  8B 5A 08                  MOV EBX,dword ptr [EDX + 0x8]
00727E14  89 1D C0 70 85 00         MOV dword ptr [0x008570c0],EBX
00727E1A  8B 52 0C                  MOV EDX,dword ptr [EDX + 0xc]
00727E1D  89 15 C4 70 85 00         MOV dword ptr [0x008570c4],EDX
00727E23  33 D2                     XOR EDX,EDX
00727E25  8A 50 03                  MOV DL,byte ptr [EAX + 0x3]
00727E28  C1 E2 04                  SHL EDX,0x4
00727E2B  03 D1                     ADD EDX,ECX
00727E2D  8B 02                     MOV EAX,dword ptr [EDX]
00727E2F  A3 C8 70 85 00            MOV [0x008570c8],EAX
00727E34  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
00727E37  89 0D CC 70 85 00         MOV dword ptr [0x008570cc],ECX
00727E3D  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00727E40  A3 D0 70 85 00            MOV [0x008570d0],EAX
00727E45  8B 4A 0C                  MOV ECX,dword ptr [EDX + 0xc]
00727E48  89 0D D4 70 85 00         MOV dword ptr [0x008570d4],ECX
00727E4E  8B 86 24 01 00 00         MOV EAX,dword ptr [ESI + 0x124]
00727E54  83 F8 02                  CMP EAX,0x2
00727E57  75 18                     JNZ 0x00727e71
00727E59  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00727E5C  33 C9                     XOR ECX,ECX
00727E5E  0F BF 42 08               MOVSX EAX,word ptr [EDX + 0x8]
00727E62  8A 8C 30 38 04 00 00      MOV CL,byte ptr [EAX + ESI*0x1 + 0x438]
00727E69  89 0D F8 70 85 00         MOV dword ptr [0x008570f8],ECX
00727E6F  EB 64                     JMP 0x00727ed5
LAB_00727e71:
00727E71  83 F8 06                  CMP EAX,0x6
00727E74  75 4B                     JNZ 0x00727ec1
00727E76  89 3D F8 70 85 00         MOV dword ptr [0x008570f8],EDI
00727E7C  8B 8E A8 00 00 00         MOV ECX,dword ptr [ESI + 0xa8]
00727E82  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00727E85  B2 01                     MOV DL,0x1
00727E87  D1 E1                     SHL ECX,0x1
00727E89  D2 E2                     SHL DL,CL
00727E8B  88 15 A0 70 85 00         MOV byte ptr [0x008570a0],DL
00727E91  8B 48 3C                  MOV ECX,dword ptr [EAX + 0x3c]
00727E94  89 0D D8 70 85 00         MOV dword ptr [0x008570d8],ECX
00727E9A  8B 86 E4 02 00 00         MOV EAX,dword ptr [ESI + 0x2e4]
00727EA0  99                        CDQ
00727EA1  83 E2 03                  AND EDX,0x3
00727EA4  03 C2                     ADD EAX,EDX
00727EA6  C1 F8 02                  SAR EAX,0x2
00727EA9  3D 00 00 02 00            CMP EAX,0x20000
00727EAE  A3 78 70 85 00            MOV [0x00857078],EAX
00727EB3  7D 20                     JGE 0x00727ed5
00727EB5  C7 05 78 70 85 00 00 00 02 00  MOV dword ptr [0x00857078],0x20000
00727EBF  EB 14                     JMP 0x00727ed5
LAB_00727ec1:
00727EC1  33 D2                     XOR EDX,EDX
00727EC3  83 F8 03                  CMP EAX,0x3
00727EC6  0F 95 C2                  SETNZ DL
00727EC9  81 C2 FE 00 00 00         ADD EDX,0xfe
00727ECF  89 15 F8 70 85 00         MOV dword ptr [0x008570f8],EDX
LAB_00727ed5:
00727ED5  33 C9                     XOR ECX,ECX
00727ED7  BB 00 00 00 80            MOV EBX,0x80000000
00727EDC  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
00727EDF  BA 00 00 FF 7F            MOV EDX,0x7fff0000
00727EE4  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
00727EE7  BF AC 70 85 00            MOV EDI,0x8570ac
LAB_00727eec:
00727EEC  8B 07                     MOV EAX,dword ptr [EDI]
00727EEE  3B C2                     CMP EAX,EDX
00727EF0  7D 08                     JGE 0x00727efa
00727EF2  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00727EF5  8B D0                     MOV EDX,EAX
00727EF7  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_00727efa:
00727EFA  3B C3                     CMP EAX,EBX
00727EFC  7E 0B                     JLE 0x00727f09
00727EFE  8B D8                     MOV EBX,EAX
00727F00  89 0D 70 70 85 00         MOV dword ptr [0x00857070],ECX
00727F06  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
LAB_00727f09:
00727F09  83 C7 10                  ADD EDI,0x10
00727F0C  41                        INC ECX
00727F0D  81 FF DC 70 85 00         CMP EDI,0x8570dc
00727F13  7C D7                     JL 0x00727eec
00727F15  3B D3                     CMP EDX,EBX
00727F17  0F 8D 46 02 00 00         JGE 0x00728163
00727F1D  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00727F20  8D 45 D0                  LEA EAX,[EBP + -0x30]
00727F23  C1 FA 10                  SAR EDX,0x10
00727F26  57                        PUSH EDI
00727F27  50                        PUSH EAX
00727F28  8B CE                     MOV ECX,ESI
00727F2A  89 15 98 70 85 00         MOV dword ptr [0x00857098],EDX
00727F30  C7 45 D0 FF FF FF FF      MOV dword ptr [EBP + -0x30],0xffffffff
00727F37  E8 44 FD FF FF            CALL 0x00727c80
00727F3C  85 C0                     TEST EAX,EAX
00727F3E  0F 84 1F 02 00 00         JZ 0x00728163
00727F44  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00727F47  57                        PUSH EDI
00727F48  51                        PUSH ECX
00727F49  8B CE                     MOV ECX,ESI
00727F4B  C7 45 A4 01 00 00 00      MOV dword ptr [EBP + -0x5c],0x1
00727F52  E8 29 FD FF FF            CALL 0x00727c80
00727F57  85 C0                     TEST EAX,EAX
00727F59  0F 84 04 02 00 00         JZ 0x00728163
00727F5F  83 BE 24 01 00 00 06      CMP dword ptr [ESI + 0x124],0x6
00727F66  0F 85 A6 01 00 00         JNZ 0x00728112
00727F6C  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
00727F6F  8B 0D 98 70 85 00         MOV ECX,dword ptr [0x00857098]
00727F75  0F AF C1                  IMUL EAX,ECX
00727F78  8B 56 0C                  MOV EDX,dword ptr [ESI + 0xc]
00727F7B  03 D0                     ADD EDX,EAX
00727F7D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00727F80  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
00727F83  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
00727F86  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00727F89  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00727F8C  3B C8                     CMP ECX,EAX
00727F8E  0F 8D CF 01 00 00         JGE 0x00728163
LAB_00727f94:
00727F94  3B 4E 34                  CMP ECX,dword ptr [ESI + 0x34]
00727F97  0F 8C D0 00 00 00         JL 0x0072806d
00727F9D  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
00727FA0  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00727FA3  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
00727FA6  81 E6 00 00 FF FF         AND ESI,0xffff0000
00727FAC  2B 45 EC                  SUB EAX,dword ptr [EBP + -0x14]
00727FAF  81 E7 00 00 FF FF         AND EDI,0xffff0000
00727FB5  99                        CDQ
00727FB6  2B F7                     SUB ESI,EDI
00727FB8  0F 8E AC 00 00 00         JLE 0x0072806a
00727FBE  C1 EE 10                  SHR ESI,0x10
00727FC1  F7 FE                     IDIV ESI
00727FC3  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
00727FC6  A3 68 70 85 00            MOV [0x00857068],EAX
00727FCB  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00727FCE  81 E1 00 00 FF FF         AND ECX,0xffff0000
00727FD4  3B 0D 5C 70 85 00         CMP ECX,dword ptr [0x0085705c]
00727FDA  7C 06                     JL 0x00727fe2
00727FDC  8B 0D 5C 70 85 00         MOV ECX,dword ptr [0x0085705c]
LAB_00727fe2:
00727FE2  3B 3D DC 70 85 00         CMP EDI,dword ptr [0x008570dc]
00727FE8  7D 1C                     JGE 0x00728006
00727FEA  F7 DF                     NEG EDI
00727FEC  03 3D DC 70 85 00         ADD EDI,dword ptr [0x008570dc]
00727FF2  57                        PUSH EDI
00727FF3  FF 35 68 70 85 00         PUSH dword ptr [0x00857068]
00727FF9  E8 F2 35 FB FF            CALL 0x006db5f0
00727FFE  03 F0                     ADD ESI,EAX
00728000  8B 3D DC 70 85 00         MOV EDI,dword ptr [0x008570dc]
LAB_00728006:
00728006  2B CF                     SUB ECX,EDI
00728008  7E 60                     JLE 0x0072806a
0072800A  8B D6                     MOV EDX,ESI
0072800C  C1 EF 10                  SHR EDI,0x10
0072800F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00728012  C1 E9 10                  SHR ECX,0x10
00728015  03 F7                     ADD ESI,EDI
00728017  D1 E7                     SHL EDI,0x1
00728019  33 DB                     XOR EBX,EBX
0072801B  03 7D 0C                  ADD EDI,dword ptr [EBP + 0xc]
0072801E  56                        PUSH ESI
0072801F  51                        PUSH ECX
00728020  55                        PUSH EBP
00728021  8B 2D D8 70 85 00         MOV EBP,dword ptr [0x008570d8]
00728027  8A 1D A0 70 85 00         MOV BL,byte ptr [0x008570a0]
LAB_0072802d:
0072802D  80 3E FF                  CMP byte ptr [ESI],0xff
00728030  74 14                     JZ 0x00728046
00728032  8B 47 FE                  MOV EAX,dword ptr [EDI + -0x2]
00728035  2B C2                     SUB EAX,EDX
00728037  3B 05 78 70 85 00         CMP EAX,dword ptr [0x00857078]
0072803D  7E 07                     JLE 0x00728046
0072803F  0F B6 06                  MOVZX EAX,byte ptr [ESI]
00728042  08 5C 05 00               OR byte ptr [EBP + EAX*0x1],BL
LAB_00728046:
00728046  8B C2                     MOV EAX,EDX
00728048  83 C7 02                  ADD EDI,0x2
0072804B  03 15 68 70 85 00         ADD EDX,dword ptr [0x00857068]
00728051  C1 E8 10                  SHR EAX,0x10
00728054  46                        INC ESI
00728055  66 89 47 FE               MOV word ptr [EDI + -0x2],AX
00728059  49                        DEC ECX
0072805A  7F D1                     JG 0x0072802d
0072805C  5D                        POP EBP
0072805D  59                        POP ECX
0072805E  5F                        POP EDI
0072805F  A0 F8 70 85 00            MOV AL,[0x008570f8]
LAB_00728064:
00728064  88 07                     MOV byte ptr [EDI],AL
00728066  47                        INC EDI
00728067  49                        DEC ECX
00728068  7F FA                     JG 0x00728064
LAB_0072806a:
0072806A  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_0072806d:
0072806D  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00728070  48                        DEC EAX
00728071  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00728074  75 19                     JNZ 0x0072808f
00728076  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
00728079  8D 55 D0                  LEA EDX,[EBP + -0x30]
0072807C  51                        PUSH ECX
0072807D  52                        PUSH EDX
0072807E  8B CE                     MOV ECX,ESI
00728080  E8 FB FB FF FF            CALL 0x00727c80
00728085  85 C0                     TEST EAX,EAX
00728087  0F 84 D6 00 00 00         JZ 0x00728163
0072808D  EB 16                     JMP 0x007280a5
LAB_0072808f:
0072808F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00728092  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00728095  03 C8                     ADD ECX,EAX
00728097  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0072809A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0072809D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007280A0  03 C1                     ADD EAX,ECX
007280A2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_007280a5:
007280A5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
007280A8  48                        DEC EAX
007280A9  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
007280AC  75 19                     JNZ 0x007280c7
007280AE  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
007280B1  8D 45 A4                  LEA EAX,[EBP + -0x5c]
007280B4  52                        PUSH EDX
007280B5  50                        PUSH EAX
007280B6  8B CE                     MOV ECX,ESI
007280B8  E8 C3 FB FF FF            CALL 0x00727c80
007280BD  85 C0                     TEST EAX,EAX
007280BF  0F 84 9E 00 00 00         JZ 0x00728163
007280C5  EB 16                     JMP 0x007280dd
LAB_007280c7:
007280C7  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
007280CA  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
007280CD  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
007280D0  03 D1                     ADD EDX,ECX
007280D2  89 55 C8                  MOV dword ptr [EBP + -0x38],EDX
007280D5  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
007280D8  03 C2                     ADD EAX,EDX
007280DA  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
LAB_007280dd:
007280DD  8B 0D 98 70 85 00         MOV ECX,dword ptr [0x00857098]
007280E3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007280E6  41                        INC ECX
007280E7  89 0D 98 70 85 00         MOV dword ptr [0x00857098],ECX
007280ED  8B 46 28                  MOV EAX,dword ptr [ESI + 0x28]
007280F0  03 D0                     ADD EDX,EAX
007280F2  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
007280F5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007280F8  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
007280FB  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
007280FE  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
00728101  3B C8                     CMP ECX,EAX
00728103  0F 8C 8B FE FF FF         JL 0x00727f94
00728109  5F                        POP EDI
0072810A  5E                        POP ESI
0072810B  5B                        POP EBX
0072810C  8B E5                     MOV ESP,EBP
0072810E  5D                        POP EBP
0072810F  C2 0C 00                  RET 0xc
LAB_00728112:
00728112  A1 98 70 85 00            MOV EAX,[0x00857098]
00728117  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0072811A  3B C1                     CMP EAX,ECX
0072811C  7D 45                     JGE 0x00728163
LAB_0072811e:
0072811E  3B 46 34                  CMP EAX,dword ptr [ESI + 0x34]
00728121  7C 10                     JL 0x00728133
00728123  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00728126  8D 55 D0                  LEA EDX,[EBP + -0x30]
00728129  51                        PUSH ECX
0072812A  52                        PUSH EDX
0072812B  E8 40 00 00 00            CALL 0x00728170
00728130  83 C4 08                  ADD ESP,0x8
LAB_00728133:
00728133  8D 45 D0                  LEA EAX,[EBP + -0x30]
00728136  8B CE                     MOV ECX,ESI
00728138  50                        PUSH EAX
00728139  E8 12 FC FF FF            CALL 0x00727d50
0072813E  85 C0                     TEST EAX,EAX
00728140  74 21                     JZ 0x00728163
00728142  8D 4D A4                  LEA ECX,[EBP + -0x5c]
00728145  51                        PUSH ECX
00728146  8B CE                     MOV ECX,ESI
00728148  E8 03 FC FF FF            CALL 0x00727d50
0072814D  85 C0                     TEST EAX,EAX
0072814F  74 12                     JZ 0x00728163
00728151  A1 98 70 85 00            MOV EAX,[0x00857098]
00728156  40                        INC EAX
00728157  A3 98 70 85 00            MOV [0x00857098],EAX
0072815C  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
0072815F  3B C1                     CMP EAX,ECX
00728161  7C BB                     JL 0x0072811e
LAB_00728163:
00728163  5F                        POP EDI
00728164  5E                        POP ESI
00728165  5B                        POP EBX
00728166  8B E5                     MOV ESP,EBP
00728168  5D                        POP EBP
00728169  C2 0C 00                  RET 0xc
