FUN_0063f790:
0063F790  55                        PUSH EBP
0063F791  8B EC                     MOV EBP,ESP
0063F793  83 EC 24                  SUB ESP,0x24
0063F796  57                        PUSH EDI
0063F797  8B F9                     MOV EDI,ECX
0063F799  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
0063F7A0  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063F7A6  85 C0                     TEST EAX,EAX
0063F7A8  75 08                     JNZ 0x0063f7b2
0063F7AA  83 C8 FF                  OR EAX,0xffffffff
0063F7AD  5F                        POP EDI
0063F7AE  8B E5                     MOV ESP,EBP
0063F7B0  5D                        POP EBP
0063F7B1  C3                        RET
LAB_0063f7b2:
0063F7B2  8B 8F C0 02 00 00         MOV ECX,dword ptr [EDI + 0x2c0]
0063F7B8  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0063F7BB  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0063F7BE  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0063F7C1  8D 51 08                  LEA EDX,[ECX + 0x8]
0063F7C4  53                        PUSH EBX
0063F7C5  0F BF 87 57 02 00 00      MOVSX EAX,word ptr [EDI + 0x257]
0063F7CC  0F AF D1                  IMUL EDX,ECX
0063F7CF  2B C2                     SUB EAX,EDX
0063F7D1  56                        PUSH ESI
0063F7D2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063F7D5  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0063F7DC  2B C1                     SUB EAX,ECX
0063F7DE  8B 8F B4 02 00 00         MOV ECX,dword ptr [EDI + 0x2b4]
0063F7E4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0063F7E7  03 C1                     ADD EAX,ECX
0063F7E9  33 C9                     XOR ECX,ECX
0063F7EB  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0063F7EE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0063f7f1:
0063F7F1  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063F7F7  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0063F7FA  0F 83 F6 00 00 00         JNC 0x0063f8f6
0063F800  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063F803  0F AF F1                  IMUL ESI,ECX
0063F806  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0063F809  85 F6                     TEST ESI,ESI
0063F80B  0F 84 E5 00 00 00         JZ 0x0063f8f6
0063F811  D9 46 28                  FLD float ptr [ESI + 0x28]
0063F814  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0063F817  D9 56 2C                  FST float ptr [ESI + 0x2c]
0063F81A  E8 69 EA 0E 00            CALL 0x0072e288
0063F81F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063F822  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0063F825  D9 C1                     FLD ST1
0063F827  D9 FF                     FCOS
0063F829  D8 C9                     FMUL ST1
0063F82B  E8 58 EA 0E 00            CALL 0x0072e288
0063F830  D9 C9                     FXCH
0063F832  D9 FE                     FSIN
0063F834  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0063F837  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
0063F83A  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
0063F83D  D8 C9                     FMUL ST1
0063F83F  D9 C9                     FXCH
0063F841  DD D8                     FSTP ST0
0063F843  E8 40 EA 0E 00            CALL 0x0072e288
0063F848  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0063F84B  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0063F84E  03 C2                     ADD EAX,EDX
0063F850  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F856  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0063F859  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F85F  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063F862  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063F868  0F AF 81 80 03 00 00      IMUL EAX,dword ptr [ECX + 0x380]
0063F86F  0F AF 99 80 03 00 00      IMUL EBX,dword ptr [ECX + 0x380]
0063F876  8B D0                     MOV EDX,EAX
0063F878  B8 79 19 8C 02            MOV EAX,0x28c1979
0063F87D  F7 EA                     IMUL EDX
0063F87F  D1 FA                     SAR EDX,0x1
0063F881  8B C2                     MOV EAX,EDX
0063F883  C1 E8 1F                  SHR EAX,0x1f
0063F886  03 D0                     ADD EDX,EAX
0063F888  B8 79 19 8C 02            MOV EAX,0x28c1979
0063F88D  52                        PUSH EDX
0063F88E  F7 EB                     IMUL EBX
0063F890  D1 FA                     SAR EDX,0x1
0063F892  8B C2                     MOV EAX,EDX
0063F894  C1 E8 1F                  SHR EAX,0x1f
0063F897  03 D0                     ADD EDX,EAX
0063F899  52                        PUSH EDX
0063F89A  E8 71 39 0A 00            CALL 0x006e3210
0063F89F  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0063F8A2  D9 46 10                  FLD float ptr [ESI + 0x10]
0063F8A5  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063F8A8  DF E0                     FNSTSW AX
0063F8AA  F6 C4 41                  TEST AH,0x41
0063F8AD  74 47                     JZ 0x0063f8f6
0063F8AF  D9 46 10                  FLD float ptr [ESI + 0x10]
0063F8B2  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063F8B5  DF E0                     FNSTSW AX
0063F8B7  F6 C4 01                  TEST AH,0x1
0063F8BA  74 1A                     JZ 0x0063f8d6
0063F8BC  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0063F8BF  51                        PUSH ECX
0063F8C0  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063F8C6  E8 D5 92 0A 00            CALL 0x006e8ba0
0063F8CB  83 C8 FF                  OR EAX,0xffffffff
0063F8CE  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0063F8D1  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0063F8D4  EB 20                     JMP 0x0063f8f6
LAB_0063f8d6:
0063F8D6  D9 45 FC                  FLD float ptr [EBP + -0x4]
0063F8D9  D8 25 A8 D4 79 00         FSUB float ptr [0x0079d4a8]
0063F8DF  D8 56 10                  FCOM float ptr [ESI + 0x10]
0063F8E2  DF E0                     FNSTSW AX
0063F8E4  F6 C4 01                  TEST AH,0x1
0063F8E7  74 05                     JZ 0x0063f8ee
0063F8E9  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063F8EC  EB 08                     JMP 0x0063f8f6
LAB_0063f8ee:
0063F8EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063F8F1  DD D8                     FSTP ST0
0063F8F3  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
LAB_0063f8f6:
0063F8F6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063F8F9  41                        INC ECX
0063F8FA  83 F9 32                  CMP ECX,0x32
0063F8FD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063F900  0F 8C EB FE FF FF         JL 0x0063f7f1
0063F906  B9 32 00 00 00            MOV ECX,0x32
0063F90B  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0063F912  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0063f915:
0063F915  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063F91B  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0063F91E  0F 83 F5 00 00 00         JNC 0x0063fa19
0063F924  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063F927  0F AF F1                  IMUL ESI,ECX
0063F92A  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
0063F92D  85 F6                     TEST ESI,ESI
0063F92F  0F 84 E4 00 00 00         JZ 0x0063fa19
0063F935  D9 46 28                  FLD float ptr [ESI + 0x28]
0063F938  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0063F93B  D9 56 2C                  FST float ptr [ESI + 0x2c]
0063F93E  E8 45 E9 0E 00            CALL 0x0072e288
0063F943  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063F946  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0063F949  D9 C1                     FLD ST1
0063F94B  D9 FF                     FCOS
0063F94D  D8 C9                     FMUL ST1
0063F94F  E8 34 E9 0E 00            CALL 0x0072e288
0063F954  D9 C9                     FXCH
0063F956  D9 FE                     FSIN
0063F958  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0063F95B  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
0063F95E  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
0063F961  D8 C9                     FMUL ST1
0063F963  D9 C9                     FXCH
0063F965  DD D8                     FSTP ST0
0063F967  E8 1C E9 0E 00            CALL 0x0072e288
0063F96C  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0063F96F  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0063F972  03 C2                     ADD EAX,EDX
0063F974  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063F97A  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0063F97D  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063F983  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063F986  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063F98C  0F AF 81 80 03 00 00      IMUL EAX,dword ptr [ECX + 0x380]
0063F993  0F AF 99 80 03 00 00      IMUL EBX,dword ptr [ECX + 0x380]
0063F99A  8B D0                     MOV EDX,EAX
0063F99C  B8 79 19 8C 02            MOV EAX,0x28c1979
0063F9A1  F7 EA                     IMUL EDX
0063F9A3  D1 FA                     SAR EDX,0x1
0063F9A5  8B C2                     MOV EAX,EDX
0063F9A7  C1 E8 1F                  SHR EAX,0x1f
0063F9AA  03 D0                     ADD EDX,EAX
0063F9AC  B8 79 19 8C 02            MOV EAX,0x28c1979
0063F9B1  52                        PUSH EDX
0063F9B2  F7 EB                     IMUL EBX
0063F9B4  D1 FA                     SAR EDX,0x1
0063F9B6  8B C2                     MOV EAX,EDX
0063F9B8  C1 E8 1F                  SHR EAX,0x1f
0063F9BB  03 D0                     ADD EDX,EAX
0063F9BD  52                        PUSH EDX
0063F9BE  E8 4D 38 0A 00            CALL 0x006e3210
0063F9C3  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0063F9C6  D9 46 10                  FLD float ptr [ESI + 0x10]
0063F9C9  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063F9CC  DF E0                     FNSTSW AX
0063F9CE  F6 C4 41                  TEST AH,0x41
0063F9D1  74 3F                     JZ 0x0063fa12
0063F9D3  D9 46 10                  FLD float ptr [ESI + 0x10]
0063F9D6  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063F9D9  DF E0                     FNSTSW AX
0063F9DB  F6 C4 01                  TEST AH,0x1
0063F9DE  74 1A                     JZ 0x0063f9fa
0063F9E0  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0063F9E3  51                        PUSH ECX
0063F9E4  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063F9EA  E8 B1 91 0A 00            CALL 0x006e8ba0
0063F9EF  83 C8 FF                  OR EAX,0xffffffff
0063F9F2  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0063F9F5  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0063F9F8  EB 1F                     JMP 0x0063fa19
LAB_0063f9fa:
0063F9FA  D9 45 FC                  FLD float ptr [EBP + -0x4]
0063F9FD  D8 25 A8 D4 79 00         FSUB float ptr [0x0079d4a8]
0063FA03  D8 56 10                  FCOM float ptr [ESI + 0x10]
0063FA06  DF E0                     FNSTSW AX
0063FA08  F6 C4 01                  TEST AH,0x1
0063FA0B  74 0A                     JZ 0x0063fa17
0063FA0D  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063FA10  EB 07                     JMP 0x0063fa19
LAB_0063fa12:
0063FA12  FF 45 F4                  INC dword ptr [EBP + -0xc]
0063FA15  EB 02                     JMP 0x0063fa19
LAB_0063fa17:
0063FA17  DD D8                     FSTP ST0
LAB_0063fa19:
0063FA19  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063FA1C  41                        INC ECX
0063FA1D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0063FA20  8D 51 CE                  LEA EDX,[ECX + -0x32]
0063FA23  83 FA 0A                  CMP EDX,0xa
0063FA26  0F 8C E9 FE FF FF         JL 0x0063f915
0063FA2C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063FA2F  85 C0                     TEST EAX,EAX
0063FA31  75 09                     JNZ 0x0063fa3c
0063FA33  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
0063FA3A  EB 5A                     JMP 0x0063fa96
LAB_0063fa3c:
0063FA3C  8B 87 7F 03 00 00         MOV EAX,dword ptr [EDI + 0x37f]
0063FA42  85 C0                     TEST EAX,EAX
0063FA44  74 50                     JZ 0x0063fa96
0063FA46  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0063FA49  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
0063FA4C  8B 8F 7F 03 00 00         MOV ECX,dword ptr [EDI + 0x37f]
0063FA52  8A 41 15                  MOV AL,byte ptr [ECX + 0x15]
0063FA55  3C 01                     CMP AL,0x1
0063FA57  73 3D                     JNC 0x0063fa96
0063FA59  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0063FA5F  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
0063FA66  75 2E                     JNZ 0x0063fa96
0063FA68  FE C0                     INC AL
0063FA6A  88 41 15                  MOV byte ptr [ECX + 0x15],AL
0063FA6D  8B 87 7F 03 00 00         MOV EAX,dword ptr [EDI + 0x37f]
0063FA73  8B 08                     MOV ECX,dword ptr [EAX]
0063FA75  85 C9                     TEST ECX,ECX
0063FA77  7C 1D                     JL 0x0063fa96
0063FA79  8B 1D B8 32 80 00         MOV EBX,dword ptr [0x008032b8]
0063FA7F  33 D2                     XOR EDX,EDX
0063FA81  8A 50 15                  MOV DL,byte ptr [EAX + 0x15]
0063FA84  C1 E2 08                  SHL EDX,0x8
0063FA87  03 D3                     ADD EDX,EBX
0063FA89  52                        PUSH EDX
0063FA8A  51                        PUSH ECX
0063FA8B  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FA91  E8 8A 9C 0A 00            CALL 0x006e9720
LAB_0063fa96:
0063FA96  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0063FA99  85 F6                     TEST ESI,ESI
0063FA9B  0F 8E E3 01 00 00         JLE 0x0063fc84
0063FAA1  8B 87 C0 02 00 00         MOV EAX,dword ptr [EDI + 0x2c0]
0063FAA7  B9 1E 00 00 00            MOV ECX,0x1e
0063FAAC  99                        CDQ
0063FAAD  F7 F9                     IDIV ECX
0063FAAF  8D 74 36 FF               LEA ESI,[ESI + ESI*0x1 + -0x1]
0063FAB3  8B C6                     MOV EAX,ESI
0063FAB5  0F AF C6                  IMUL EAX,ESI
0063FAB8  83 C2 06                  ADD EDX,0x6
0063FABB  8D 0C 92                  LEA ECX,[EDX + EDX*0x4]
0063FABE  99                        CDQ
0063FABF  83 E2 03                  AND EDX,0x3
0063FAC2  03 C2                     ADD EAX,EDX
0063FAC4  8B D8                     MOV EBX,EAX
0063FAC6  8B C6                     MOV EAX,ESI
0063FAC8  F7 D8                     NEG EAX
0063FACA  C1 E0 03                  SHL EAX,0x3
0063FACD  99                        CDQ
0063FACE  2B C2                     SUB EAX,EDX
0063FAD0  0F BF 97 57 02 00 00      MOVSX EDX,word ptr [EDI + 0x257]
0063FAD7  C1 FB 02                  SAR EBX,0x2
0063FADA  D1 F8                     SAR EAX,0x1
0063FADC  2B C3                     SUB EAX,EBX
0063FADE  D1 E1                     SHL ECX,0x1
0063FAE0  03 C2                     ADD EAX,EDX
0063FAE2  8B D9                     MOV EBX,ECX
0063FAE4  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0063FAE7  8D 41 0A                  LEA EAX,[ECX + 0xa]
0063FAEA  3B C8                     CMP ECX,EAX
0063FAEC  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0063FAEF  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
0063FAF2  0F 8D 8C 01 00 00         JGE 0x0063fc84
0063FAF8  BA 3C 00 00 00            MOV EDX,0x3c
0063FAFD  2B D1                     SUB EDX,ECX
0063FAFF  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0063FB02  EB 03                     JMP 0x0063fb07
LAB_0063fb04:
0063FB04  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
LAB_0063fb07:
0063FB07  8B 87 36 03 00 00         MOV EAX,dword ptr [EDI + 0x336]
0063FB0D  3B 58 0C                  CMP EBX,dword ptr [EAX + 0xc]
0063FB10  73 0D                     JNC 0x0063fb1f
0063FB12  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0063FB15  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0063FB18  0F AF F3                  IMUL ESI,EBX
0063FB1B  03 F1                     ADD ESI,ECX
0063FB1D  EB 02                     JMP 0x0063fb21
LAB_0063fb1f:
0063FB1F  33 F6                     XOR ESI,ESI
LAB_0063fb21:
0063FB21  83 7E 04 02               CMP dword ptr [ESI + 0x4],0x2
0063FB25  75 07                     JNZ 0x0063fb2e
0063FB27  C7 46 04 03 00 00 00      MOV dword ptr [ESI + 0x4],0x3
LAB_0063fb2e:
0063FB2E  85 F6                     TEST ESI,ESI
0063FB30  0F 84 3F 01 00 00         JZ 0x0063fc75
0063FB36  8B 8F 36 03 00 00         MOV ECX,dword ptr [EDI + 0x336]
0063FB3C  03 D3                     ADD EDX,EBX
0063FB3E  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
0063FB41  73 0B                     JNC 0x0063fb4e
0063FB43  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0063FB46  0F AF C2                  IMUL EAX,EDX
0063FB49  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0063FB4C  EB 02                     JMP 0x0063fb50
LAB_0063fb4e:
0063FB4E  33 C0                     XOR EAX,EAX
LAB_0063fb50:
0063FB50  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
0063FB53  85 C9                     TEST ECX,ECX
0063FB55  0F 8C 1A 01 00 00         JL 0x0063fc75
0063FB5B  8B 8F C0 02 00 00         MOV ECX,dword ptr [EDI + 0x2c0]
0063FB61  D9 46 28                  FLD float ptr [ESI + 0x28]
0063FB64  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0063FB6B  2B C1                     SUB EAX,ECX
0063FB6D  8B 8F B4 02 00 00         MOV ECX,dword ptr [EDI + 0x2b4]
0063FB73  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0063FB76  03 C1                     ADD EAX,ECX
0063FB78  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0063FB7B  DB 45 E8                  FILD dword ptr [EBP + -0x18]
0063FB7E  D9 56 2C                  FST float ptr [ESI + 0x2c]
0063FB81  E8 02 E7 0E 00            CALL 0x0072e288
0063FB86  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0063FB89  DB 45 FC                  FILD dword ptr [EBP + -0x4]
0063FB8C  D9 C1                     FLD ST1
0063FB8E  D9 FF                     FCOS
0063FB90  D8 C9                     FMUL ST1
0063FB92  E8 F1 E6 0E 00            CALL 0x0072e288
0063FB97  D9 C9                     FXCH
0063FB99  D9 FE                     FSIN
0063FB9B  8B 4E 14                  MOV ECX,dword ptr [ESI + 0x14]
0063FB9E  8D 1C 08                  LEA EBX,[EAX + ECX*0x1]
0063FBA1  89 5E 08                  MOV dword ptr [ESI + 0x8],EBX
0063FBA4  D8 C9                     FMUL ST1
0063FBA6  D9 C9                     FXCH
0063FBA8  DD D8                     FSTP ST0
0063FBAA  E8 D9 E6 0E 00            CALL 0x0072e288
0063FBAF  DB 45 EC                  FILD dword ptr [EBP + -0x14]
0063FBB2  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
0063FBB5  03 C2                     ADD EAX,EDX
0063FBB7  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
0063FBBD  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
0063FBC0  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
0063FBC6  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063FBC9  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FBCF  0F AF 81 80 03 00 00      IMUL EAX,dword ptr [ECX + 0x380]
0063FBD6  0F AF 99 80 03 00 00      IMUL EBX,dword ptr [ECX + 0x380]
0063FBDD  8B D0                     MOV EDX,EAX
0063FBDF  B8 79 19 8C 02            MOV EAX,0x28c1979
0063FBE4  F7 EA                     IMUL EDX
0063FBE6  D1 FA                     SAR EDX,0x1
0063FBE8  8B C2                     MOV EAX,EDX
0063FBEA  C1 E8 1F                  SHR EAX,0x1f
0063FBED  03 D0                     ADD EDX,EAX
0063FBEF  B8 79 19 8C 02            MOV EAX,0x28c1979
0063FBF4  52                        PUSH EDX
0063FBF5  F7 EB                     IMUL EBX
0063FBF7  D1 FA                     SAR EDX,0x1
0063FBF9  8B C2                     MOV EAX,EDX
0063FBFB  C1 E8 1F                  SHR EAX,0x1f
0063FBFE  03 D0                     ADD EDX,EAX
0063FC00  52                        PUSH EDX
0063FC01  E8 0A 36 0A 00            CALL 0x006e3210
0063FC06  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0063FC09  D9 46 10                  FLD float ptr [ESI + 0x10]
0063FC0C  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063FC0F  DF E0                     FNSTSW AX
0063FC11  F6 C4 41                  TEST AH,0x41
0063FC14  74 47                     JZ 0x0063fc5d
0063FC16  D9 46 10                  FLD float ptr [ESI + 0x10]
0063FC19  D8 5D FC                  FCOMP float ptr [EBP + -0x4]
0063FC1C  DF E0                     FNSTSW AX
0063FC1E  F6 C4 01                  TEST AH,0x1
0063FC21  74 1A                     JZ 0x0063fc3d
0063FC23  8B 4E 38                  MOV ECX,dword ptr [ESI + 0x38]
0063FC26  51                        PUSH ECX
0063FC27  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
0063FC2D  E8 6E 8F 0A 00            CALL 0x006e8ba0
0063FC32  83 C8 FF                  OR EAX,0xffffffff
0063FC35  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
0063FC38  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
0063FC3B  EB 35                     JMP 0x0063fc72
LAB_0063fc3d:
0063FC3D  D9 45 FC                  FLD float ptr [EBP + -0x4]
0063FC40  D8 25 A8 D4 79 00         FSUB float ptr [0x0079d4a8]
0063FC46  D8 56 10                  FCOM float ptr [ESI + 0x10]
0063FC49  DF E0                     FNSTSW AX
0063FC4B  F6 C4 01                  TEST AH,0x1
0063FC4E  74 05                     JZ 0x0063fc55
0063FC50  D9 5E 10                  FSTP float ptr [ESI + 0x10]
0063FC53  EB 08                     JMP 0x0063fc5d
LAB_0063fc55:
0063FC55  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063FC58  DD D8                     FSTP ST0
0063FC5A  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
LAB_0063fc5d:
0063FC5D  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0063FC62  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0063FC68  C7 46 20 0A 00 00 00      MOV dword ptr [ESI + 0x20],0xa
0063FC6F  89 4E 30                  MOV dword ptr [ESI + 0x30],ECX
LAB_0063fc72:
0063FC72  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_0063fc75:
0063FC75  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0063FC78  43                        INC EBX
0063FC79  3B D8                     CMP EBX,EAX
0063FC7B  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0063FC7E  0F 8C 80 FE FF FF         JL 0x0063fb04
LAB_0063fc84:
0063FC84  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063FC87  85 C0                     TEST EAX,EAX
0063FC89  74 45                     JZ 0x0063fcd0
0063FC8B  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0063FC8E  B9 3C 00 00 00            MOV ECX,0x3c
0063FC93  3B C1                     CMP EAX,ECX
0063FC95  7E 39                     JLE 0x0063fcd0
0063FC97  8B 97 36 03 00 00         MOV EDX,dword ptr [EDI + 0x336]
0063FC9D  8B 72 0C                  MOV ESI,dword ptr [EDX + 0xc]
LAB_0063fca0:
0063FCA0  3B CE                     CMP ECX,ESI
0063FCA2  73 1F                     JNC 0x0063fcc3
0063FCA4  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0063FCA7  8B 5A 1C                  MOV EBX,dword ptr [EDX + 0x1c]
0063FCAA  0F AF C1                  IMUL EAX,ECX
0063FCAD  03 C3                     ADD EAX,EBX
0063FCAF  85 C0                     TEST EAX,EAX
0063FCB1  74 10                     JZ 0x0063fcc3
0063FCB3  8B 58 34                  MOV EBX,dword ptr [EAX + 0x34]
0063FCB6  85 DB                     TEST EBX,EBX
0063FCB8  7C 09                     JL 0x0063fcc3
0063FCBA  8B 58 24                  MOV EBX,dword ptr [EAX + 0x24]
0063FCBD  4B                        DEC EBX
0063FCBE  39 58 20                  CMP dword ptr [EAX + 0x20],EBX
0063FCC1  7C 0A                     JL 0x0063fccd
LAB_0063fcc3:
0063FCC3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0063FCC6  41                        INC ECX
0063FCC7  3B C8                     CMP ECX,EAX
0063FCC9  7C D5                     JL 0x0063fca0
0063FCCB  EB 03                     JMP 0x0063fcd0
LAB_0063fccd:
0063FCCD  FF 45 F4                  INC dword ptr [EBP + -0xc]
LAB_0063fcd0:
0063FCD0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0063FCD3  85 C0                     TEST EAX,EAX
0063FCD5  75 03                     JNZ 0x0063fcda
0063FCD7  FF 45 F0                  INC dword ptr [EBP + -0x10]
LAB_0063fcda:
0063FCDA  8B B7 C0 02 00 00         MOV ESI,dword ptr [EDI + 0x2c0]
0063FCE0  46                        INC ESI
0063FCE1  8B CE                     MOV ECX,ESI
0063FCE3  89 B7 C0 02 00 00         MOV dword ptr [EDI + 0x2c0],ESI
0063FCE9  5E                        POP ESI
0063FCEA  5B                        POP EBX
0063FCEB  8D 04 CD 00 00 00 00      LEA EAX,[ECX*0x8 + 0x0]
0063FCF2  2B C1                     SUB EAX,ECX
0063FCF4  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0063FCF7  8B 87 B4 02 00 00         MOV EAX,dword ptr [EDI + 0x2b4]
0063FCFD  03 D0                     ADD EDX,EAX
0063FCFF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0063FD02  89 97 B8 02 00 00         MOV dword ptr [EDI + 0x2b8],EDX
0063FD08  5F                        POP EDI
0063FD09  8B E5                     MOV ESP,EBP
0063FD0B  5D                        POP EBP
0063FD0C  C3                        RET
