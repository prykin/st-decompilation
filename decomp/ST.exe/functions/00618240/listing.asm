FUN_00618240:
00618240  55                        PUSH EBP
00618241  8B EC                     MOV EBP,ESP
00618243  6A FF                     PUSH -0x1
00618245  68 C0 CE 79 00            PUSH 0x79cec0
0061824A  68 64 D9 72 00            PUSH 0x72d964
0061824F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00618255  50                        PUSH EAX
00618256  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0061825D  81 EC 88 00 00 00         SUB ESP,0x88
00618263  53                        PUSH EBX
00618264  56                        PUSH ESI
00618265  57                        PUSH EDI
00618266  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00618269  89 8D 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],ECX
0061826F  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
00618276  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00618279  85 C0                     TEST EAX,EAX
0061827B  75 07                     JNZ 0x00618284
0061827D  33 C0                     XOR EAX,EAX
0061827F  E9 AA 04 00 00            JMP 0x0061872e
LAB_00618284:
00618284  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00618287  85 C9                     TEST ECX,ECX
00618289  B8 79 19 8C 02            MOV EAX,0x28c1979
0061828E  7C 10                     JL 0x006182a0
00618290  F7 E9                     IMUL ECX
00618292  D1 FA                     SAR EDX,0x1
00618294  8B C2                     MOV EAX,EDX
00618296  C1 E8 1F                  SHR EAX,0x1f
00618299  03 D0                     ADD EDX,EAX
0061829B  0F BF FA                  MOVSX EDI,DX
0061829E  EB 0F                     JMP 0x006182af
LAB_006182a0:
006182A0  F7 E9                     IMUL ECX
006182A2  D1 FA                     SAR EDX,0x1
006182A4  8B CA                     MOV ECX,EDX
006182A6  C1 E9 1F                  SHR ECX,0x1f
006182A9  03 D1                     ADD EDX,ECX
006182AB  0F BF FA                  MOVSX EDI,DX
006182AE  4F                        DEC EDI
LAB_006182af:
006182AF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006182B2  85 C9                     TEST ECX,ECX
006182B4  B8 79 19 8C 02            MOV EAX,0x28c1979
006182B9  7C 10                     JL 0x006182cb
006182BB  F7 E9                     IMUL ECX
006182BD  D1 FA                     SAR EDX,0x1
006182BF  8B C2                     MOV EAX,EDX
006182C1  C1 E8 1F                  SHR EAX,0x1f
006182C4  03 D0                     ADD EDX,EAX
006182C6  0F BF CA                  MOVSX ECX,DX
006182C9  EB 0F                     JMP 0x006182da
LAB_006182cb:
006182CB  F7 E9                     IMUL ECX
006182CD  D1 FA                     SAR EDX,0x1
006182CF  8B CA                     MOV ECX,EDX
006182D1  C1 E9 1F                  SHR ECX,0x1f
006182D4  03 D1                     ADD EDX,ECX
006182D6  0F BF CA                  MOVSX ECX,DX
006182D9  49                        DEC ECX
LAB_006182da:
006182DA  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006182DD  85 D2                     TEST EDX,EDX
006182DF  B8 1F 85 EB 51            MOV EAX,0x51eb851f
006182E4  7C 11                     JL 0x006182f7
006182E6  F7 EA                     IMUL EDX
006182E8  C1 FA 06                  SAR EDX,0x6
006182EB  8B C2                     MOV EAX,EDX
006182ED  C1 E8 1F                  SHR EAX,0x1f
006182F0  03 D0                     ADD EDX,EAX
006182F2  0F BF C2                  MOVSX EAX,DX
006182F5  EB 10                     JMP 0x00618307
LAB_006182f7:
006182F7  F7 EA                     IMUL EDX
006182F9  C1 FA 06                  SAR EDX,0x6
006182FC  8B C2                     MOV EAX,EDX
006182FE  C1 E8 1F                  SHR EAX,0x1f
00618301  03 D0                     ADD EDX,EAX
00618303  0F BF C2                  MOVSX EAX,DX
00618306  48                        DEC EAX
LAB_00618307:
00618307  85 FF                     TEST EDI,EDI
00618309  0F 8C 1C 04 00 00         JL 0x0061872b
0061830F  85 C9                     TEST ECX,ECX
00618311  0F 8C 14 04 00 00         JL 0x0061872b
00618317  85 C0                     TEST EAX,EAX
00618319  0F 8C 0C 04 00 00         JL 0x0061872b
0061831F  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00618326  3B FB                     CMP EDI,EBX
00618328  0F 8D FD 03 00 00         JGE 0x0061872b
0061832E  0F BF 15 42 B2 7F 00      MOVSX EDX,word ptr [0x007fb242]
00618335  3B CA                     CMP ECX,EDX
00618337  0F 8D EE 03 00 00         JGE 0x0061872b
0061833D  83 F8 05                  CMP EAX,0x5
00618340  0F 8D E5 03 00 00         JGE 0x0061872b
00618346  8D 71 FB                  LEA ESI,[ECX + -0x5]
00618349  89 75 D8                  MOV dword ptr [EBP + -0x28],ESI
0061834C  85 F6                     TEST ESI,ESI
0061834E  7D 0A                     JGE 0x0061835a
00618350  C7 45 D8 00 00 00 00      MOV dword ptr [EBP + -0x28],0x0
00618357  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
LAB_0061835a:
0061835A  8D 47 FB                  LEA EAX,[EDI + -0x5]
0061835D  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00618360  85 C0                     TEST EAX,EAX
00618362  7D 07                     JGE 0x0061836b
00618364  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0061836b:
0061836B  83 C1 06                  ADD ECX,0x6
0061836E  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
00618371  3B CA                     CMP ECX,EDX
00618373  7E 05                     JLE 0x0061837a
00618375  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
00618378  8B CA                     MOV ECX,EDX
LAB_0061837a:
0061837A  83 C7 06                  ADD EDI,0x6
0061837D  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
00618380  3B FB                     CMP EDI,EBX
00618382  7E 05                     JLE 0x00618389
00618384  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
00618387  8B FB                     MOV EDI,EBX
LAB_00618389:
00618389  8B C7                     MOV EAX,EDI
0061838B  2B 45 E0                  SUB EAX,dword ptr [EBP + -0x20]
0061838E  2B CE                     SUB ECX,ESI
00618390  0F AF C1                  IMUL EAX,ECX
00618393  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
00618396  D1 E7                     SHL EDI,0x1
00618398  33 DB                     XOR EBX,EBX
0061839A  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061839D  8D 0C BF                  LEA ECX,[EDI + EDI*0x4]
006183A0  8D 04 4F                  LEA EAX,[EDI + ECX*0x2]
006183A3  C1 E0 02                  SHL EAX,0x2
006183A6  83 C0 03                  ADD EAX,0x3
006183A9  24 FC                     AND AL,0xfc
006183AB  E8 90 56 11 00            CALL 0x0072da40
006183B0  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006183B3  8B C4                     MOV EAX,ESP
006183B5  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006183B8  8D 04 BD 00 00 00 00      LEA EAX,[EDI*0x4 + 0x0]
006183BF  83 C0 03                  ADD EAX,0x3
006183C2  24 FC                     AND AL,0xfc
006183C4  E8 77 56 11 00            CALL 0x0072da40
006183C9  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006183CC  8B C4                     MOV EAX,ESP
006183CE  8B F8                     MOV EDI,EAX
006183D0  89 7D 98                  MOV dword ptr [EBP + -0x68],EDI
006183D3  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006183DA  33 D2                     XOR EDX,EDX
006183DC  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
LAB_006183df:
006183DF  8B CE                     MOV ECX,ESI
006183E1  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006183E4  3B 75 A0                  CMP ESI,dword ptr [EBP + -0x60]
006183E7  0F 8D 55 02 00 00         JGE 0x00618642
LAB_006183ed:
006183ED  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006183F0  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
006183F3  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
006183F6  8B FE                     MOV EDI,ESI
006183F8  3B F8                     CMP EDI,EAX
006183FA  0F 8D 2F 02 00 00         JGE 0x0061862f
LAB_00618400:
00618400  66 85 F6                  TEST SI,SI
00618403  7C 52                     JL 0x00618457
00618405  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
0061840B  66 3B F0                  CMP SI,AX
0061840E  7D 47                     JGE 0x00618457
00618410  66 85 C9                  TEST CX,CX
00618413  7C 42                     JL 0x00618457
00618415  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0061841C  7D 39                     JGE 0x00618457
0061841E  66 85 D2                  TEST DX,DX
00618421  7C 34                     JL 0x00618457
00618423  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
0061842A  7D 2B                     JGE 0x00618457
0061842C  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00618433  0F BF D2                  MOVSX EDX,DX
00618436  0F AF FA                  IMUL EDI,EDX
00618439  0F BF C0                  MOVSX EAX,AX
0061843C  0F BF D1                  MOVSX EDX,CX
0061843F  0F AF C2                  IMUL EAX,EDX
00618442  03 F8                     ADD EDI,EAX
00618444  0F BF C6                  MOVSX EAX,SI
00618447  03 F8                     ADD EDI,EAX
00618449  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0061844F  8B 3C FA                  MOV EDI,dword ptr [EDX + EDI*0x8]
00618452  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00618455  EB 02                     JMP 0x00618459
LAB_00618457:
00618457  33 FF                     XOR EDI,EDI
LAB_00618459:
00618459  85 FF                     TEST EDI,EDI
0061845B  0F 84 C1 01 00 00         JZ 0x00618622
00618461  8B 07                     MOV EAX,dword ptr [EDI]
00618463  8B CF                     MOV ECX,EDI
00618465  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
0061846B  85 C0                     TEST EAX,EAX
0061846D  0F 84 A9 01 00 00         JZ 0x0061861c
00618473  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00618476  83 F8 08                  CMP EAX,0x8
00618479  0F 83 9D 01 00 00         JNC 0x0061861c
0061847F  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00618485  85 C9                     TEST ECX,ECX
00618487  74 11                     JZ 0x0061849a
00618489  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
0061848C  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00618494  0F 83 82 01 00 00         JNC 0x0061861c
LAB_0061849a:
0061849A  8A 47 24                  MOV AL,byte ptr [EDI + 0x24]
0061849D  88 85 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],AL
006184A3  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006184A9  8A 49 20                  MOV CL,byte ptr [ECX + 0x20]
006184AC  88 8D 78 FF FF FF         MOV byte ptr [EBP + 0xffffff78],CL
006184B2  8A 15 8F 8A 80 00         MOV DL,byte ptr [0x00808a8f]
006184B8  84 D2                     TEST DL,DL
006184BA  74 39                     JZ 0x006184f5
006184BC  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
006184C2  25 FF 00 00 00            AND EAX,0xff
006184C7  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006184CA  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006184D0  25 FF 00 00 00            AND EAX,0xff
006184D5  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
006184D8  8A 94 C9 EA 87 80 00      MOV DL,byte ptr [ECX + ECX*0x8 + 0x8087ea]
006184DF  33 C9                     XOR ECX,ECX
006184E1  3A 94 C0 EA 87 80 00      CMP DL,byte ptr [EAX + EAX*0x8 + 0x8087ea]
006184E8  0F 95 C1                  SETNZ CL
006184EB  8B C1                     MOV EAX,ECX
006184ED  8B 75 84                  MOV ESI,dword ptr [EBP + -0x7c]
006184F0  E9 80 00 00 00            JMP 0x00618575
LAB_006184f5:
006184F5  3A C1                     CMP AL,CL
006184F7  74 71                     JZ 0x0061856a
006184F9  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
006184FF  25 FF 00 00 00            AND EAX,0xff
00618504  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0061850A  81 E1 FF 00 00 00         AND ECX,0xff
00618510  8A 94 C1 4F 8A 80 00      MOV DL,byte ptr [ECX + EAX*0x8 + 0x808a4f]
00618517  84 D2                     TEST DL,DL
00618519  75 10                     JNZ 0x0061852b
0061851B  38 94 C8 4F 8A 80 00      CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],DL
00618522  75 07                     JNZ 0x0061852b
00618524  B8 FE FF FF FF            MOV EAX,0xfffffffe
00618529  EB 41                     JMP 0x0061856c
LAB_0061852b:
0061852B  80 FA 01                  CMP DL,0x1
0061852E  75 0F                     JNZ 0x0061853f
00618530  80 BC C8 4F 8A 80 00 00   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x0
00618538  75 05                     JNZ 0x0061853f
0061853A  83 C8 FF                  OR EAX,0xffffffff
0061853D  EB 2D                     JMP 0x0061856c
LAB_0061853f:
0061853F  84 D2                     TEST DL,DL
00618541  75 11                     JNZ 0x00618554
00618543  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
0061854B  75 07                     JNZ 0x00618554
0061854D  B8 01 00 00 00            MOV EAX,0x1
00618552  EB 18                     JMP 0x0061856c
LAB_00618554:
00618554  80 FA 01                  CMP DL,0x1
00618557  75 11                     JNZ 0x0061856a
00618559  80 BC C8 4F 8A 80 00 01   CMP byte ptr [EAX + ECX*0x8 + 0x808a4f],0x1
00618561  75 07                     JNZ 0x0061856a
00618563  B8 02 00 00 00            MOV EAX,0x2
00618568  EB 02                     JMP 0x0061856c
LAB_0061856a:
0061856A  33 C0                     XOR EAX,EAX
LAB_0061856c:
0061856C  33 D2                     XOR EDX,EDX
0061856E  85 C0                     TEST EAX,EAX
00618570  0F 9C C2                  SETL DL
00618573  8B C2                     MOV EAX,EDX
LAB_00618575:
00618575  85 C0                     TEST EAX,EAX
00618577  0F 84 9F 00 00 00         JZ 0x0061861c
0061857D  8B 07                     MOV EAX,dword ptr [EDI]
0061857F  8B CF                     MOV ECX,EDI
00618581  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00618587  85 C0                     TEST EAX,EAX
00618589  0F 84 8D 00 00 00         JZ 0x0061861c
0061858F  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00618592  51                        PUSH ECX
00618593  8D 55 80                  LEA EDX,[EBP + -0x80]
00618596  52                        PUSH EDX
00618597  8D 45 B4                  LEA EAX,[EBP + -0x4c]
0061859A  50                        PUSH EAX
0061859B  8B CF                     MOV ECX,EDI
0061859D  E8 41 AC DE FF            CALL 0x004031e3
006185A2  8D 0C 9B                  LEA ECX,[EBX + EBX*0x4]
006185A5  8D 14 4B                  LEA EDX,[EBX + ECX*0x2]
006185A8  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006185AB  8D 34 90                  LEA ESI,[EAX + EDX*0x4]
006185AE  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
006185B1  89 0E                     MOV dword ptr [ESI],ECX
006185B3  8B 17                     MOV EDX,dword ptr [EDI]
006185B5  8B CF                     MOV ECX,EDI
006185B7  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
006185BA  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006185BD  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
006185C0  89 46 26                  MOV dword ptr [ESI + 0x26],EAX
006185C3  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
006185C7  66 89 4E 2A               MOV word ptr [ESI + 0x2a],CX
006185CB  89 7E 1A                  MOV dword ptr [ESI + 0x1a],EDI
006185CE  66 8B 55 84               MOV DX,word ptr [EBP + -0x7c]
006185D2  66 89 56 14               MOV word ptr [ESI + 0x14],DX
006185D6  66 8B 45 CC               MOV AX,word ptr [EBP + -0x34]
006185DA  66 89 46 16               MOV word ptr [ESI + 0x16],AX
006185DE  66 8B 4D D0               MOV CX,word ptr [EBP + -0x30]
006185E2  66 89 4E 18               MOV word ptr [ESI + 0x18],CX
006185E6  0F BF 55 B4               MOVSX EDX,word ptr [EBP + -0x4c]
006185EA  89 56 08                  MOV dword ptr [ESI + 0x8],EDX
006185ED  0F BF 45 80               MOVSX EAX,word ptr [EBP + -0x80]
006185F1  89 46 0C                  MOV dword ptr [ESI + 0xc],EAX
006185F4  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
006185F8  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
006185FB  0F BF 55 80               MOVSX EDX,word ptr [EBP + -0x80]
006185FF  52                        PUSH EDX
00618600  0F BF 45 B4               MOVSX EAX,word ptr [EBP + -0x4c]
00618604  50                        PUSH EAX
00618605  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00618608  51                        PUSH ECX
00618609  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0061860C  52                        PUSH EDX
0061860D  E8 C6 48 09 00            CALL 0x006aced8
00618612  83 C4 10                  ADD ESP,0x10
00618615  89 46 1E                  MOV dword ptr [ESI + 0x1e],EAX
00618618  43                        INC EBX
00618619  8B 75 84                  MOV ESI,dword ptr [EBP + -0x7c]
LAB_0061861c:
0061861C  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0061861F  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
LAB_00618622:
00618622  46                        INC ESI
00618623  89 75 84                  MOV dword ptr [EBP + -0x7c],ESI
00618626  3B 75 A8                  CMP ESI,dword ptr [EBP + -0x58]
00618629  0F 8C D1 FD FF FF         JL 0x00618400
LAB_0061862f:
0061862F  41                        INC ECX
00618630  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00618633  3B 4D A0                  CMP ECX,dword ptr [EBP + -0x60]
00618636  0F 8C B1 FD FF FF         JL 0x006183ed
0061863C  8B 75 D8                  MOV ESI,dword ptr [EBP + -0x28]
0061863F  8B 7D 98                  MOV EDI,dword ptr [EBP + -0x68]
LAB_00618642:
00618642  42                        INC EDX
00618643  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
00618646  83 FA 05                  CMP EDX,0x5
00618649  0F 8C 90 FD FF FF         JL 0x006183df
0061864F  85 DB                     TEST EBX,EBX
00618651  0F 8E D4 00 00 00         JLE 0x0061872b
00618657  33 C0                     XOR EAX,EAX
00618659  85 DB                     TEST EBX,EBX
0061865B  7E 08                     JLE 0x00618665
LAB_0061865d:
0061865D  89 04 87                  MOV dword ptr [EDI + EAX*0x4],EAX
00618660  40                        INC EAX
00618661  3B C3                     CMP EAX,EBX
00618663  7C F8                     JL 0x0061865d
LAB_00618665:
00618665  53                        PUSH EBX
00618666  57                        PUSH EDI
00618667  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
0061866A  50                        PUSH EAX
0061866B  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
00618671  E8 22 B0 DE FF            CALL 0x00403698
00618676  C7 45 AC E8 03 00 00      MOV dword ptr [EBP + -0x54],0x3e8
0061867D  33 FF                     XOR EDI,EDI
0061867F  85 DB                     TEST EBX,EBX
00618681  0F 8E A4 00 00 00         JLE 0x0061872b
LAB_00618687:
00618687  8D 4D AC                  LEA ECX,[EBP + -0x54]
0061868A  51                        PUSH ECX
0061868B  8B 75 98                  MOV ESI,dword ptr [EBP + -0x68]
0061868E  8B 04 BE                  MOV EAX,dword ptr [ESI + EDI*0x4]
00618691  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00618694  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
00618697  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
0061869A  8B 54 81 26               MOV EDX,dword ptr [ECX + EAX*0x4 + 0x26]
0061869E  52                        PUSH EDX
0061869F  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006186A5  E8 46 D0 DE FF            CALL 0x004056f0
006186AA  85 C0                     TEST EAX,EAX
006186AC  7D 6E                     JGE 0x0061871c
006186AE  33 C0                     XOR EAX,EAX
006186B0  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006186B3  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006186B6  8B 04 BE                  MOV EAX,dword ptr [ESI + EDI*0x4]
006186B9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
006186BC  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
006186BF  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006186C2  8B 44 91 26               MOV EAX,dword ptr [ECX + EDX*0x4 + 0x26]
006186C6  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006186C9  8B 04 BE                  MOV EAX,dword ptr [ESI + EDI*0x4]
006186CC  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
006186CF  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
006186D2  66 8B 4C 81 2A            MOV CX,word ptr [ECX + EAX*0x4 + 0x2a]
006186D7  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
006186DB  8B 95 68 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff68]
006186E1  8B 42 62                  MOV EAX,dword ptr [EDX + 0x62]
006186E4  85 C0                     TEST EAX,EAX
006186E6  75 16                     JNZ 0x006186fe
006186E8  6A 0A                     PUSH 0xa
006186EA  6A 08                     PUSH 0x8
006186EC  6A 07                     PUSH 0x7
006186EE  6A 00                     PUSH 0x0
006186F0  E8 9B 5B 09 00            CALL 0x006ae290
006186F5  8B 8D 68 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff68]
006186FB  89 41 62                  MOV dword ptr [ECX + 0x62],EAX
LAB_006186fe:
006186FE  8D 55 BC                  LEA EDX,[EBP + -0x44]
00618701  52                        PUSH EDX
00618702  8B 85 68 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff68]
00618708  8B 48 62                  MOV ECX,dword ptr [EAX + 0x62]
0061870B  51                        PUSH ECX
0061870C  E8 AF 5A 09 00            CALL 0x006ae1c0
00618711  C7 45 AC 00 00 00 00      MOV dword ptr [EBP + -0x54],0x0
00618718  85 C0                     TEST EAX,EAX
0061871A  7C 06                     JL 0x00618722
LAB_0061871c:
0061871C  83 7D AC 03               CMP dword ptr [EBP + -0x54],0x3
00618720  7C 25                     JL 0x00618747
LAB_00618722:
00618722  47                        INC EDI
00618723  3B FB                     CMP EDI,EBX
00618725  0F 8C 5C FF FF FF         JL 0x00618687
LAB_0061872b:
0061872B  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
LAB_0061872e:
0061872E  8D A5 5C FF FF FF         LEA ESP,[EBP + 0xffffff5c]
00618734  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00618737  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0061873E  5F                        POP EDI
0061873F  5E                        POP ESI
00618740  5B                        POP EBX
00618741  8B E5                     MOV ESP,EBP
00618743  5D                        POP EBP
00618744  C2 10 00                  RET 0x10
LAB_00618747:
00618747  B9 0B 00 00 00            MOV ECX,0xb
0061874C  8B 3C BE                  MOV EDI,dword ptr [ESI + EDI*0x4]
0061874F  8D 14 BF                  LEA EDX,[EDI + EDI*0x4]
00618752  8D 04 57                  LEA EAX,[EDI + EDX*0x2]
00618755  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
00618758  8D 34 82                  LEA ESI,[EDX + EAX*0x4]
0061875B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0061875E  F3 A5                     MOVSD.REP ES:EDI,ESI
00618760  C7 45 B8 01 00 00 00      MOV dword ptr [EBP + -0x48],0x1
00618767  EB C2                     JMP 0x0061872b
