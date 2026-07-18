FUN_00561670:
00561670  55                        PUSH EBP
00561671  8B EC                     MOV EBP,ESP
00561673  83 EC 38                  SUB ESP,0x38
00561676  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00561679  53                        PUSH EBX
0056167A  85 C0                     TEST EAX,EAX
0056167C  56                        PUSH ESI
0056167D  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00561684  7F 08                     JG 0x0056168e
00561686  5E                        POP ESI
00561687  33 C0                     XOR EAX,EAX
00561689  5B                        POP EBX
0056168A  8B E5                     MOV ESP,EBP
0056168C  5D                        POP EBP
0056168D  C3                        RET
LAB_0056168e:
0056168E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00561691  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
00561694  8B C3                     MOV EAX,EBX
00561696  0F AF C6                  IMUL EAX,ESI
00561699  D1 E0                     SHL EAX,0x1
0056169B  50                        PUSH EAX
0056169C  E8 6F 95 14 00            CALL 0x006aac10
005616A1  85 C0                     TEST EAX,EAX
005616A3  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
005616A6  75 06                     JNZ 0x005616ae
005616A8  5E                        POP ESI
005616A9  5B                        POP EBX
005616AA  8B E5                     MOV ESP,EBP
005616AC  5D                        POP EBP
005616AD  C3                        RET
LAB_005616ae:
005616AE  85 F6                     TEST ESI,ESI
005616B0  57                        PUSH EDI
005616B1  7E 32                     JLE 0x005616e5
005616B3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005616B6  8B F8                     MOV EDI,EAX
005616B8  2B D0                     SUB EDX,EAX
005616BA  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
LAB_005616bd:
005616BD  85 DB                     TEST EBX,EBX
005616BF  7E 16                     JLE 0x005616d7
005616C1  8B C7                     MOV EAX,EDI
005616C3  8B CB                     MOV ECX,EBX
LAB_005616c5:
005616C5  66 83 3C 02 FF            CMP word ptr [EDX + EAX*0x1],-0x1
005616CA  75 05                     JNZ 0x005616d1
005616CC  66 C7 00 FF FF            MOV word ptr [EAX],0xffff
LAB_005616d1:
005616D1  83 C0 02                  ADD EAX,0x2
005616D4  49                        DEC ECX
005616D5  75 EE                     JNZ 0x005616c5
LAB_005616d7:
005616D7  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
005616DA  03 F8                     ADD EDI,EAX
005616DC  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005616DF  48                        DEC EAX
005616E0  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
005616E3  75 D8                     JNZ 0x005616bd
LAB_005616e5:
005616E5  8D 3C 33                  LEA EDI,[EBX + ESI*0x1]
005616E8  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
005616EB  D1 E7                     SHL EDI,0x1
005616ED  3B FE                     CMP EDI,ESI
005616EF  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
005616F2  7D 05                     JGE 0x005616f9
005616F4  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
005616F7  8B FE                     MOV EDI,ESI
LAB_005616f9:
005616F9  8B CF                     MOV ECX,EDI
005616FB  C1 E1 04                  SHL ECX,0x4
005616FE  51                        PUSH ECX
005616FF  E8 6C E4 15 00            CALL 0x006bfb70
00561704  85 C0                     TEST EAX,EAX
00561706  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00561709  0F 84 F0 04 00 00         JZ 0x00561bff
0056170F  8D 0C F8                  LEA ECX,[EAX + EDI*0x8]
00561712  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00561715  85 F6                     TEST ESI,ESI
00561717  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0056171A  C7 45 E4 00 00 00 00      MOV dword ptr [EBP + -0x1c],0x0
00561721  7E 57                     JLE 0x0056177a
00561723  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561726  8B F1                     MOV ESI,ECX
00561728  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0056172B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
LAB_0056172e:
0056172E  8B 3A                     MOV EDI,dword ptr [EDX]
00561730  85 FF                     TEST EDI,EDI
00561732  7C 37                     JL 0x0056176b
00561734  3B FB                     CMP EDI,EBX
00561736  7D 33                     JGE 0x0056176b
00561738  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0056173B  85 C0                     TEST EAX,EAX
0056173D  7C 2C                     JL 0x0056176b
0056173F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00561742  3B C3                     CMP EAX,EBX
00561744  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
00561747  7D 22                     JGE 0x0056176b
00561749  0F AF C3                  IMUL EAX,EBX
0056174C  03 C7                     ADD EAX,EDI
0056174E  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
00561751  66 C7 04 47 01 00         MOV word ptr [EDI + EAX*0x2],0x1
00561757  8B 02                     MOV EAX,dword ptr [EDX]
00561759  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
0056175C  89 06                     MOV dword ptr [ESI],EAX
0056175E  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
00561761  47                        INC EDI
00561762  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00561765  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
00561768  83 C6 08                  ADD ESI,0x8
LAB_0056176b:
0056176B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0056176E  83 C2 08                  ADD EDX,0x8
00561771  48                        DEC EAX
00561772  89 45 18                  MOV dword ptr [EBP + 0x18],EAX
00561775  75 B7                     JNZ 0x0056172e
LAB_00561777:
00561777  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
LAB_0056177a:
0056177A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0056177D  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00561780  33 C0                     XOR EAX,EAX
00561782  C7 45 18 00 00 00 00      MOV dword ptr [EBP + 0x18],0x0
00561789  85 D2                     TEST EDX,EDX
0056178B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0056178E  0F 8E 72 04 00 00         JLE 0x00561c06
00561794  8B D7                     MOV EDX,EDI
00561796  8D 3C FD 00 FC FF FF      LEA EDI,[EDI*0x8 + 0xfffffc00]
0056179D  C1 E2 04                  SHL EDX,0x4
005617A0  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
005617A3  C7 45 14 08 00 00 00      MOV dword ptr [EBP + 0x14],0x8
005617AA  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
005617AD  EB 06                     JMP 0x005617b5
LAB_005617af:
005617AF  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005617B2  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
LAB_005617b5:
005617B5  8B 1C C1                  MOV EBX,dword ptr [ECX + EAX*0x8]
005617B8  8B 44 C1 04               MOV EAX,dword ptr [ECX + EAX*0x8 + 0x4]
005617BC  8B F8                     MOV EDI,EAX
005617BE  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
005617C1  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
005617C5  03 FB                     ADD EDI,EBX
005617C7  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005617CA  D1 E7                     SHL EDI,0x1
005617CC  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
005617CF  0F BF 1C 0F               MOVSX EBX,word ptr [EDI + ECX*0x1]
005617D3  8D 04 0F                  LEA EAX,[EDI + ECX*0x1]
005617D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005617D9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005617DC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005617DF  03 F9                     ADD EDI,ECX
005617E1  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
005617E4  3B C1                     CMP EAX,ECX
005617E6  0F 8E 89 00 00 00         JLE 0x00561875
005617EC  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
005617EF  8B F1                     MOV ESI,ECX
005617F1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
005617F4  81 C2 00 08 00 00         ADD EDX,0x800
005617FA  81 C6 80 00 00 00         ADD ESI,0x80
00561800  05 00 04 00 00            ADD EAX,0x400
00561805  52                        PUSH EDX
00561806  51                        PUSH ECX
00561807  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0056180A  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
0056180D  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00561810  E8 3B E3 15 00            CALL 0x006bfb50
00561815  85 C0                     TEST EAX,EAX
00561817  0F 84 E2 03 00 00         JZ 0x00561bff
0056181D  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00561820  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00561823  2B D1                     SUB EDX,ECX
00561825  C1 FA 03                  SAR EDX,0x3
00561828  8D 34 D0                  LEA ESI,[EAX + EDX*0x8]
0056182B  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0056182E  2B D1                     SUB EDX,ECX
00561830  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00561833  C1 FA 03                  SAR EDX,0x3
00561836  3B F0                     CMP ESI,EAX
00561838  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0056183B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0056183E  75 0B                     JNZ 0x0056184b
00561840  81 C1 00 04 00 00         ADD ECX,0x400
00561846  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00561849  EB 09                     JMP 0x00561854
LAB_0056184b:
0056184B  81 C6 00 04 00 00         ADD ESI,0x400
00561851  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
LAB_00561854:
00561854  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561857  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0056185A  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0056185D  51                        PUSH ECX
0056185E  8D 34 D6                  LEA ESI,[ESI + EDX*0x8]
00561861  8D 14 01                  LEA EDX,[ECX + EAX*0x1]
00561864  8D 84 01 00 04 00 00      LEA EAX,[ECX + EAX*0x1 + 0x400]
0056186B  52                        PUSH EDX
0056186C  50                        PUSH EAX
0056186D  E8 FE C1 1C 00            CALL 0x0072da70
00561872  83 C4 0C                  ADD ESP,0xc
LAB_00561875:
00561875  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00561878  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0056187B  8D 48 FF                  LEA ECX,[EAX + -0x1]
0056187E  3B D1                     CMP EDX,ECX
00561880  7D 55                     JGE 0x005618d7
00561882  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00561885  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
00561889  66 85 C9                  TEST CX,CX
0056188C  74 13                     JZ 0x005618a1
0056188E  0F BF 57 02               MOVSX EDX,word ptr [EDI + 0x2]
00561892  03 15 20 33 80 00         ADD EDX,dword ptr [0x00803320]
00561898  0F BF C9                  MOVSX ECX,CX
0056189B  03 D3                     ADD EDX,EBX
0056189D  3B CA                     CMP ECX,EDX
0056189F  7E 36                     JLE 0x005618d7
LAB_005618a1:
005618A1  66 8B 57 02               MOV DX,word ptr [EDI + 0x2]
005618A5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005618A8  66 03 15 20 33 80 00      ADD DX,word ptr [0x00803320]
005618AF  83 C6 08                  ADD ESI,0x8
005618B2  03 D3                     ADD EDX,EBX
005618B4  66 89 51 02               MOV word ptr [ECX + 0x2],DX
005618B8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005618BB  42                        INC EDX
005618BC  0F BF CA                  MOVSX ECX,DX
005618BF  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
005618C3  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
005618C6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005618C9  89 4E F8                  MOV dword ptr [ESI + -0x8],ECX
005618CC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005618CF  42                        INC EDX
005618D0  41                        INC ECX
005618D1  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
005618D4  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_005618d7:
005618D7  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005618DA  85 C9                     TEST ECX,ECX
005618DC  7E 67                     JLE 0x00561945
005618DE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005618E1  8D 14 00                  LEA EDX,[EAX + EAX*0x1]
005618E4  2B CA                     SUB ECX,EDX
005618E6  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
005618E9  66 83 39 00               CMP word ptr [ECX],0x0
005618ED  74 1B                     JZ 0x0056190a
005618EF  8B CF                     MOV ECX,EDI
005618F1  2B CA                     SUB ECX,EDX
005618F3  0F BF 11                  MOVSX EDX,word ptr [ECX]
005618F6  8B 0D 20 33 80 00         MOV ECX,dword ptr [0x00803320]
005618FC  03 D1                     ADD EDX,ECX
005618FE  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
00561901  03 D3                     ADD EDX,EBX
00561903  0F BF 09                  MOVSX ECX,word ptr [ECX]
00561906  3B CA                     CMP ECX,EDX
00561908  7E 3B                     JLE 0x00561945
LAB_0056190a:
0056190A  8B D7                     MOV EDX,EDI
0056190C  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
0056190F  2B D1                     SUB EDX,ECX
00561911  83 C6 08                  ADD ESI,0x8
00561914  66 8B 0A                  MOV CX,word ptr [EDX]
00561917  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
0056191A  66 03 0D 20 33 80 00      ADD CX,word ptr [0x00803320]
00561921  03 CB                     ADD ECX,EBX
00561923  66 89 0A                  MOV word ptr [EDX],CX
00561926  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00561929  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0056192D  4A                        DEC EDX
0056192E  89 4E F8                  MOV dword ptr [ESI + -0x8],ECX
00561931  0F BF CA                  MOVSX ECX,DX
00561934  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561937  89 4E FC                  MOV dword ptr [ESI + -0x4],ECX
0056193A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0056193D  42                        INC EDX
0056193E  41                        INC ECX
0056193F  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00561942  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00561945:
00561945  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561948  85 C9                     TEST ECX,ECX
0056194A  7E 55                     JLE 0x005619a1
0056194C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0056194F  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
00561953  66 85 C9                  TEST CX,CX
00561956  74 13                     JZ 0x0056196b
00561958  0F BF 57 FE               MOVSX EDX,word ptr [EDI + -0x2]
0056195C  03 15 20 33 80 00         ADD EDX,dword ptr [0x00803320]
00561962  0F BF C9                  MOVSX ECX,CX
00561965  03 D3                     ADD EDX,EBX
00561967  3B CA                     CMP ECX,EDX
00561969  7E 36                     JLE 0x005619a1
LAB_0056196b:
0056196B  66 8B 57 FE               MOV DX,word ptr [EDI + -0x2]
0056196F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00561972  66 03 15 20 33 80 00      ADD DX,word ptr [0x00803320]
00561979  83 C6 08                  ADD ESI,0x8
0056197C  03 D3                     ADD EDX,EBX
0056197E  66 89 51 FE               MOV word ptr [ECX + -0x2],DX
00561982  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561985  4A                        DEC EDX
00561986  0F BF CA                  MOVSX ECX,DX
00561989  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
0056198D  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
00561990  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561993  89 4E F8                  MOV dword ptr [ESI + -0x8],ECX
00561996  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00561999  42                        INC EDX
0056199A  41                        INC ECX
0056199B  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
0056199E  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_005619a1:
005619A1  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005619A4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
005619A7  49                        DEC ECX
005619A8  3B D1                     CMP EDX,ECX
005619AA  7D 55                     JGE 0x00561a01
005619AC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005619AF  66 8B 0C 42               MOV CX,word ptr [EDX + EAX*0x2]
005619B3  66 85 C9                  TEST CX,CX
005619B6  74 13                     JZ 0x005619cb
005619B8  0F BF 14 47               MOVSX EDX,word ptr [EDI + EAX*0x2]
005619BC  03 15 20 33 80 00         ADD EDX,dword ptr [0x00803320]
005619C2  0F BF C9                  MOVSX ECX,CX
005619C5  03 D3                     ADD EDX,EBX
005619C7  3B CA                     CMP ECX,EDX
005619C9  7E 36                     JLE 0x00561a01
LAB_005619cb:
005619CB  66 8B 14 47               MOV DX,word ptr [EDI + EAX*0x2]
005619CF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005619D2  66 03 15 20 33 80 00      ADD DX,word ptr [0x00803320]
005619D9  83 C6 08                  ADD ESI,0x8
005619DC  03 D3                     ADD EDX,EBX
005619DE  66 89 14 41               MOV word ptr [ECX + EAX*0x2],DX
005619E2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005619E5  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
005619E9  41                        INC ECX
005619EA  89 56 F8                  MOV dword ptr [ESI + -0x8],EDX
005619ED  0F BF D1                  MOVSX EDX,CX
005619F0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
005619F3  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
005619F6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
005619F9  42                        INC EDX
005619FA  41                        INC ECX
005619FB  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
005619FE  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00561a01:
00561A01  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00561A04  85 C9                     TEST ECX,ECX
00561A06  0F 8E EC 00 00 00         JLE 0x00561af8
00561A0C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561A0F  8D 48 FF                  LEA ECX,[EAX + -0x1]
00561A12  3B D1                     CMP EDX,ECX
00561A14  7D 6F                     JGE 0x00561a85
00561A16  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561A19  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
00561A1C  2B D1                     SUB EDX,ECX
00561A1E  83 C2 02                  ADD EDX,0x2
00561A21  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00561A24  66 83 3A 00               CMP word ptr [EDX],0x0
00561A28  74 1C                     JZ 0x00561a46
00561A2A  8B D7                     MOV EDX,EDI
00561A2C  2B D1                     SUB EDX,ECX
00561A2E  0F BF 4A 02               MOVSX ECX,word ptr [EDX + 0x2]
00561A32  8B 15 24 33 80 00         MOV EDX,dword ptr [0x00803324]
00561A38  03 CA                     ADD ECX,EDX
00561A3A  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00561A3D  03 CB                     ADD ECX,EBX
00561A3F  0F BF 12                  MOVSX EDX,word ptr [EDX]
00561A42  3B D1                     CMP EDX,ECX
00561A44  7E 3F                     JLE 0x00561a85
LAB_00561a46:
00561A46  8B D7                     MOV EDX,EDI
00561A48  8D 0C 00                  LEA ECX,[EAX + EAX*0x1]
00561A4B  2B D1                     SUB EDX,ECX
00561A4D  83 C6 08                  ADD ESI,0x8
00561A50  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
00561A54  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00561A57  66 03 0D 24 33 80 00      ADD CX,word ptr [0x00803324]
00561A5E  03 CB                     ADD ECX,EBX
00561A60  66 89 0A                  MOV word ptr [EDX],CX
00561A63  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561A66  41                        INC ECX
00561A67  0F BF D1                  MOVSX EDX,CX
00561A6A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00561A6D  89 56 F8                  MOV dword ptr [ESI + -0x8],EDX
00561A70  49                        DEC ECX
00561A71  0F BF D1                  MOVSX EDX,CX
00561A74  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00561A77  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
00561A7A  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561A7D  42                        INC EDX
00561A7E  41                        INC ECX
00561A7F  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00561A82  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00561a85:
00561A85  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561A88  85 C9                     TEST ECX,ECX
00561A8A  7E 6C                     JLE 0x00561af8
00561A8C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561A8F  8D 4C 00 02               LEA ECX,[EAX + EAX*0x1 + 0x2]
00561A93  2B D1                     SUB EDX,ECX
00561A95  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00561A98  66 83 3A 00               CMP word ptr [EDX],0x0
00561A9C  74 1B                     JZ 0x00561ab9
00561A9E  8B D7                     MOV EDX,EDI
00561AA0  2B D1                     SUB EDX,ECX
00561AA2  0F BF 0A                  MOVSX ECX,word ptr [EDX]
00561AA5  8B 15 24 33 80 00         MOV EDX,dword ptr [0x00803324]
00561AAB  03 CA                     ADD ECX,EDX
00561AAD  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00561AB0  03 CB                     ADD ECX,EBX
00561AB2  0F BF 12                  MOVSX EDX,word ptr [EDX]
00561AB5  3B D1                     CMP EDX,ECX
00561AB7  7E 3F                     JLE 0x00561af8
LAB_00561ab9:
00561AB9  8B D7                     MOV EDX,EDI
00561ABB  8D 4C 00 02               LEA ECX,[EAX + EAX*0x1 + 0x2]
00561ABF  2B D1                     SUB EDX,ECX
00561AC1  83 C6 08                  ADD ESI,0x8
00561AC4  66 8B 0A                  MOV CX,word ptr [EDX]
00561AC7  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
00561ACA  66 03 0D 24 33 80 00      ADD CX,word ptr [0x00803324]
00561AD1  03 CB                     ADD ECX,EBX
00561AD3  66 89 0A                  MOV word ptr [EDX],CX
00561AD6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561AD9  49                        DEC ECX
00561ADA  0F BF D1                  MOVSX EDX,CX
00561ADD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00561AE0  89 56 F8                  MOV dword ptr [ESI + -0x8],EDX
00561AE3  49                        DEC ECX
00561AE4  0F BF D1                  MOVSX EDX,CX
00561AE7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00561AEA  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
00561AED  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561AF0  42                        INC EDX
00561AF1  41                        INC ECX
00561AF2  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00561AF5  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00561af8:
00561AF8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00561AFB  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00561AFE  49                        DEC ECX
00561AFF  3B D1                     CMP EDX,ECX
00561B01  0F 8D C9 00 00 00         JGE 0x00561bd0
00561B07  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00561B0A  85 C9                     TEST ECX,ECX
00561B0C  7E 5C                     JLE 0x00561b6a
00561B0E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561B11  66 8B 4C 42 FE            MOV CX,word ptr [EDX + EAX*0x2 + -0x2]
00561B16  66 85 C9                  TEST CX,CX
00561B19  74 14                     JZ 0x00561b2f
00561B1B  0F BF 54 47 FE            MOVSX EDX,word ptr [EDI + EAX*0x2 + -0x2]
00561B20  03 15 24 33 80 00         ADD EDX,dword ptr [0x00803324]
00561B26  0F BF C9                  MOVSX ECX,CX
00561B29  03 D3                     ADD EDX,EBX
00561B2B  3B CA                     CMP ECX,EDX
00561B2D  7E 3B                     JLE 0x00561b6a
LAB_00561b2f:
00561B2F  66 8B 54 47 FE            MOV DX,word ptr [EDI + EAX*0x2 + -0x2]
00561B34  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00561B37  66 03 15 24 33 80 00      ADD DX,word ptr [0x00803324]
00561B3E  83 C6 08                  ADD ESI,0x8
00561B41  03 D3                     ADD EDX,EBX
00561B43  66 89 54 41 FE            MOV word ptr [ECX + EAX*0x2 + -0x2],DX
00561B48  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561B4B  4A                        DEC EDX
00561B4C  0F BF CA                  MOVSX ECX,DX
00561B4F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00561B52  89 4E F8                  MOV dword ptr [ESI + -0x8],ECX
00561B55  42                        INC EDX
00561B56  0F BF CA                  MOVSX ECX,DX
00561B59  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00561B5C  89 4E FC                  MOV dword ptr [ESI + -0x4],ECX
00561B5F  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00561B62  42                        INC EDX
00561B63  41                        INC ECX
00561B64  89 55 18                  MOV dword ptr [EBP + 0x18],EDX
00561B67  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00561b6a:
00561B6A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561B6D  8D 48 FF                  LEA ECX,[EAX + -0x1]
00561B70  3B D1                     CMP EDX,ECX
00561B72  7D 5C                     JGE 0x00561bd0
00561B74  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00561B77  66 8B 4C 42 02            MOV CX,word ptr [EDX + EAX*0x2 + 0x2]
00561B7C  66 85 C9                  TEST CX,CX
00561B7F  74 14                     JZ 0x00561b95
00561B81  0F BF 54 47 02            MOVSX EDX,word ptr [EDI + EAX*0x2 + 0x2]
00561B86  03 15 24 33 80 00         ADD EDX,dword ptr [0x00803324]
00561B8C  0F BF C9                  MOVSX ECX,CX
00561B8F  03 D3                     ADD EDX,EBX
00561B91  3B CA                     CMP ECX,EDX
00561B93  7E 3B                     JLE 0x00561bd0
LAB_00561b95:
00561B95  66 8B 54 47 02            MOV DX,word ptr [EDI + EAX*0x2 + 0x2]
00561B9A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00561B9D  66 03 15 24 33 80 00      ADD DX,word ptr [0x00803324]
00561BA4  83 C6 08                  ADD ESI,0x8
00561BA7  03 D3                     ADD EDX,EBX
00561BA9  66 89 54 41 02            MOV word ptr [ECX + EAX*0x2 + 0x2],DX
00561BAE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00561BB1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00561BB4  42                        INC EDX
00561BB5  41                        INC ECX
00561BB6  0F BF C2                  MOVSX EAX,DX
00561BB9  0F BF D1                  MOVSX EDX,CX
00561BBC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00561BBF  89 46 F8                  MOV dword ptr [ESI + -0x8],EAX
00561BC2  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00561BC5  89 56 FC                  MOV dword ptr [ESI + -0x4],EDX
00561BC8  41                        INC ECX
00561BC9  40                        INC EAX
00561BCA  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
00561BCD  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_00561bd0:
00561BD0  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00561BD3  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00561BD6  40                        INC EAX
00561BD7  3B C1                     CMP EAX,ECX
00561BD9  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00561BDC  0F 8C CD FB FF FF         JL 0x005617af
00561BE2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00561BE5  85 C9                     TEST ECX,ECX
00561BE7  74 1D                     JZ 0x00561c06
00561BE9  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00561BEC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00561BEF  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
00561BF2  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00561BF5  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00561BF8  8B C8                     MOV ECX,EAX
00561BFA  E9 78 FB FF FF            JMP 0x00561777
LAB_00561bff:
00561BFF  C7 45 D8 FE FF FF FF      MOV dword ptr [EBP + -0x28],0xfffffffe
LAB_00561c06:
00561C06  8D 45 E0                  LEA EAX,[EBP + -0x20]
00561C09  50                        PUSH EAX
00561C0A  E8 51 94 14 00            CALL 0x006ab060
00561C0F  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00561C12  5F                        POP EDI
00561C13  85 C0                     TEST EAX,EAX
00561C15  74 1F                     JZ 0x00561c36
00561C17  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00561C1D  68 58 02 00 00            PUSH 0x258
00561C22  68 B0 96 7C 00            PUSH 0x7c96b0
00561C27  51                        PUSH ECX
00561C28  50                        PUSH EAX
00561C29  E8 12 42 14 00            CALL 0x006a5e40
00561C2E  5E                        POP ESI
00561C2F  33 C0                     XOR EAX,EAX
00561C31  5B                        POP EBX
00561C32  8B E5                     MOV ESP,EBP
00561C34  5D                        POP EBP
00561C35  C3                        RET
LAB_00561c36:
00561C36  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00561C39  5E                        POP ESI
00561C3A  5B                        POP EBX
00561C3B  8B E5                     MOV ESP,EBP
00561C3D  5D                        POP EBP
00561C3E  C3                        RET
