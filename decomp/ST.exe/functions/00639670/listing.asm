FUN_00639670:
00639670  55                        PUSH EBP
00639671  8B EC                     MOV EBP,ESP
00639673  83 EC 10                  SUB ESP,0x10
00639676  53                        PUSH EBX
00639677  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0063967A  56                        PUSH ESI
0063967B  8B F1                     MOV ESI,ECX
0063967D  C7 45 F0 00 00 00 00      MOV dword ptr [EBP + -0x10],0x0
00639684  2B 9E A3 02 00 00         SUB EBX,dword ptr [ESI + 0x2a3]
0063968A  75 0A                     JNZ 0x00639696
0063968C  5E                        POP ESI
0063968D  33 C0                     XOR EAX,EAX
0063968F  5B                        POP EBX
00639690  8B E5                     MOV ESP,EBP
00639692  5D                        POP EBP
00639693  C2 04 00                  RET 0x4
LAB_00639696:
00639696  57                        PUSH EDI
00639697  8B FB                     MOV EDI,EBX
00639699  0F AF FB                  IMUL EDI,EBX
0063969C  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0063969F  8D 3C 7F                  LEA EDI,[EDI + EDI*0x2]
006396A2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006396A5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006396A8  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
006396AD  C1 E1 03                  SHL ECX,0x3
006396B0  F7 E9                     IMUL ECX
006396B2  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006396B5  8B CA                     MOV ECX,EDX
006396B7  03 4D 08                  ADD ECX,dword ptr [EBP + 0x8]
006396BA  C1 F9 09                  SAR ECX,0x9
006396BD  8B C1                     MOV EAX,ECX
006396BF  C1 E8 1F                  SHR EAX,0x1f
006396C2  03 C8                     ADD ECX,EAX
006396C4  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
006396C7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
006396CA  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006396CD  B8 89 88 88 88            MOV EAX,0x88888889
006396D2  C1 E2 02                  SHL EDX,0x2
006396D5  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006396D8  F7 EA                     IMUL EDX
006396DA  03 55 08                  ADD EDX,dword ptr [EBP + 0x8]
006396DD  C1 FA 04                  SAR EDX,0x4
006396E0  8B C2                     MOV EAX,EDX
006396E2  03 D1                     ADD EDX,ECX
006396E4  C1 E8 1F                  SHR EAX,0x1f
006396E7  03 C2                     ADD EAX,EDX
006396E9  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
006396EC  B8 67 66 66 66            MOV EAX,0x66666667
006396F1  F7 6D 08                  IMUL dword ptr [EBP + 0x8]
006396F4  8B 86 7A 02 00 00         MOV EAX,dword ptr [ESI + 0x27a]
006396FA  C1 FA 02                  SAR EDX,0x2
006396FD  8B CA                     MOV ECX,EDX
006396FF  89 86 86 02 00 00         MOV dword ptr [ESI + 0x286],EAX
00639705  8B 86 82 02 00 00         MOV EAX,dword ptr [ESI + 0x282]
0063970B  C1 E9 1F                  SHR ECX,0x1f
0063970E  89 86 8E 02 00 00         MOV dword ptr [ESI + 0x28e],EAX
00639714  8B 86 5F 02 00 00         MOV EAX,dword ptr [ESI + 0x25f]
0063971A  03 D1                     ADD EDX,ECX
0063971C  8B 8E 7E 02 00 00         MOV ECX,dword ptr [ESI + 0x27e]
00639722  0F AF C2                  IMUL EAX,EDX
00639725  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00639728  89 8E 8A 02 00 00         MOV dword ptr [ESI + 0x28a],ECX
0063972E  8B 8E 67 02 00 00         MOV ECX,dword ptr [ESI + 0x267]
00639734  99                        CDQ
00639735  F7 F9                     IDIV ECX
00639737  0F BF 96 45 02 00 00      MOVSX EDX,word ptr [ESI + 0x245]
0063973E  03 C2                     ADD EAX,EDX
00639740  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00639743  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
00639749  8B 86 63 02 00 00         MOV EAX,dword ptr [ESI + 0x263]
0063974F  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
00639753  99                        CDQ
00639754  F7 F9                     IDIV ECX
00639756  0F BF 8E 47 02 00 00      MOVSX ECX,word ptr [ESI + 0x247]
0063975D  03 C8                     ADD ECX,EAX
0063975F  8B 86 6B 02 00 00         MOV EAX,dword ptr [ESI + 0x26b]
00639765  0F AF C3                  IMUL EAX,EBX
00639768  89 8E 7E 02 00 00         MOV dword ptr [ESI + 0x27e],ECX
0063976E  8D 1C 80                  LEA EBX,[EAX + EAX*0x4]
00639771  B8 89 88 88 88            MOV EAX,0x88888889
00639776  D1 E3                     SHL EBX,0x1
00639778  F7 EB                     IMUL EBX
0063977A  03 D3                     ADD EDX,EBX
0063977C  C1 FA 04                  SAR EDX,0x4
0063977F  8B C2                     MOV EAX,EDX
00639781  C1 E8 1F                  SHR EAX,0x1f
00639784  03 D0                     ADD EDX,EAX
00639786  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00639789  8B DA                     MOV EBX,EDX
0063978B  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0063978E  B8 C5 B3 A2 91            MOV EAX,0x91a2b3c5
00639793  C1 E7 02                  SHL EDI,0x2
00639796  F7 EF                     IMUL EDI
00639798  03 D7                     ADD EDX,EDI
0063979A  C1 FA 09                  SAR EDX,0x9
0063979D  8B C2                     MOV EAX,EDX
0063979F  66 8B BE 59 02 00 00      MOV DI,word ptr [ESI + 0x259]
006397A6  C1 E8 1F                  SHR EAX,0x1f
006397A9  03 D0                     ADD EDX,EAX
006397AB  B8 67 66 66 66            MOV EAX,0x66666667
006397B0  2B DA                     SUB EBX,EDX
006397B2  6A 00                     PUSH 0x0
006397B4  F7 EB                     IMUL EBX
006397B6  C1 FA 02                  SAR EDX,0x2
006397B9  8B C2                     MOV EAX,EDX
006397BB  6A 00                     PUSH 0x0
006397BD  C1 E8 1F                  SHR EAX,0x1f
006397C0  03 D0                     ADD EDX,EAX
006397C2  68 0C 01 00 00            PUSH 0x10c
006397C7  0F BF 86 49 02 00 00      MOVSX EAX,word ptr [ESI + 0x249]
006397CE  57                        PUSH EDI
006397CF  8B BE 5B 02 00 00         MOV EDI,dword ptr [ESI + 0x25b]
006397D5  57                        PUSH EDI
006397D6  8B BE 55 02 00 00         MOV EDI,dword ptr [ESI + 0x255]
006397DC  2B C2                     SUB EAX,EDX
006397DE  8B 96 86 02 00 00         MOV EDX,dword ptr [ESI + 0x286]
006397E4  68 5C 03 00 00            PUSH 0x35c
006397E9  57                        PUSH EDI
006397EA  52                        PUSH EDX
006397EB  52                        PUSH EDX
006397EC  52                        PUSH EDX
006397ED  50                        PUSH EAX
006397EE  51                        PUSH ECX
006397EF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006397F2  51                        PUSH ECX
006397F3  8D 8E AB 02 00 00         LEA ECX,[ESI + 0x2ab]
006397F9  89 86 82 02 00 00         MOV dword ptr [ESI + 0x282],EAX
006397FF  E8 12 AD DC FF            CALL 0x00404516
00639804  85 C0                     TEST EAX,EAX
00639806  0F 8E CD 00 00 00         JLE 0x006398d9
0063980C  83 F8 01                  CMP EAX,0x1
0063980F  8B F8                     MOV EDI,EAX
00639811  75 39                     JNZ 0x0063984c
00639813  8B 86 CF 02 00 00         MOV EAX,dword ptr [ESI + 0x2cf]
00639819  8B 96 CB 02 00 00         MOV EDX,dword ptr [ESI + 0x2cb]
0063981F  8B 8E D3 02 00 00         MOV ECX,dword ptr [ESI + 0x2d3]
00639825  89 86 7E 02 00 00         MOV dword ptr [ESI + 0x27e],EAX
0063982B  8B C7                     MOV EAX,EDI
0063982D  89 96 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EDX
00639833  89 8E 82 02 00 00         MOV dword ptr [ESI + 0x282],ECX
00639839  C7 86 BF 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x2bf],0x0
00639843  5F                        POP EDI
00639844  5E                        POP ESI
00639845  5B                        POP EBX
00639846  8B E5                     MOV ESP,EBP
00639848  5D                        POP EBP
00639849  C2 04 00                  RET 0x4
LAB_0063984c:
0063984C  83 F8 05                  CMP EAX,0x5
0063984F  75 12                     JNZ 0x00639863
LAB_00639851:
00639851  8B CE                     MOV ECX,ESI
00639853  E8 2C BC DC FF            CALL 0x00405484
00639858  8B C7                     MOV EAX,EDI
0063985A  5F                        POP EDI
0063985B  5E                        POP ESI
0063985C  5B                        POP EBX
0063985D  8B E5                     MOV ESP,EBP
0063985F  5D                        POP EBP
00639860  C2 04 00                  RET 0x4
LAB_00639863:
00639863  83 F8 02                  CMP EAX,0x2
00639866  75 74                     JNZ 0x006398dc
00639868  8B 8E BF 02 00 00         MOV ECX,dword ptr [ESI + 0x2bf]
0063986E  85 C9                     TEST ECX,ECX
00639870  74 DF                     JZ 0x00639851
00639872  8D 45 F4                  LEA EAX,[EBP + -0xc]
00639875  8B 11                     MOV EDX,dword ptr [ECX]
00639877  50                        PUSH EAX
00639878  8D 45 FA                  LEA EAX,[EBP + -0x6]
0063987B  50                        PUSH EAX
0063987C  8D 45 FE                  LEA EAX,[EBP + -0x2]
0063987F  50                        PUSH EAX
00639880  8D 45 0A                  LEA EAX,[EBP + 0xa]
00639883  50                        PUSH EAX
00639884  8B 86 C3 02 00 00         MOV EAX,dword ptr [ESI + 0x2c3]
0063988A  50                        PUSH EAX
0063988B  FF 92 E0 00 00 00         CALL dword ptr [EDX + 0xe0]
00639891  85 C0                     TEST EAX,EAX
00639893  74 BC                     JZ 0x00639851
00639895  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
00639899  0F BF 45 0A               MOVSX EAX,word ptr [EBP + 0xa]
0063989D  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
006398A1  89 8E CF 02 00 00         MOV dword ptr [ESI + 0x2cf],ECX
006398A7  89 8E 7E 02 00 00         MOV dword ptr [ESI + 0x27e],ECX
006398AD  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006398B0  89 86 CB 02 00 00         MOV dword ptr [ESI + 0x2cb],EAX
006398B6  89 86 7A 02 00 00         MOV dword ptr [ESI + 0x27a],EAX
006398BC  8B C7                     MOV EAX,EDI
006398BE  89 96 D3 02 00 00         MOV dword ptr [ESI + 0x2d3],EDX
006398C4  89 96 82 02 00 00         MOV dword ptr [ESI + 0x282],EDX
006398CA  89 8E C7 02 00 00         MOV dword ptr [ESI + 0x2c7],ECX
006398D0  5F                        POP EDI
006398D1  5E                        POP ESI
006398D2  5B                        POP EBX
006398D3  8B E5                     MOV ESP,EBP
006398D5  5D                        POP EBP
006398D6  C2 04 00                  RET 0x4
LAB_006398d9:
006398D9  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_006398dc:
006398DC  8B C7                     MOV EAX,EDI
006398DE  5F                        POP EDI
006398DF  5E                        POP ESI
006398E0  5B                        POP EBX
006398E1  8B E5                     MOV ESP,EBP
006398E3  5D                        POP EBP
006398E4  C2 04 00                  RET 0x4
