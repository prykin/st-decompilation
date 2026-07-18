FUN_005845b0:
005845B0  55                        PUSH EBP
005845B1  8B EC                     MOV EBP,ESP
005845B3  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
005845B6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
005845B9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
005845BC  53                        PUSH EBX
005845BD  56                        PUSH ESI
005845BE  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
005845C1  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
005845C7  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
005845CD  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005845D0  8B C6                     MOV EAX,ESI
005845D2  C7 02 00 00 00 00         MOV dword ptr [EDX],0x0
005845D8  57                        PUSH EDI
005845D9  99                        CDQ
005845DA  33 C2                     XOR EAX,EDX
005845DC  2B C2                     SUB EAX,EDX
005845DE  3B C8                     CMP ECX,EAX
005845E0  7E 21                     JLE 0x00584603
005845E2  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
005845E5  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
005845EB  05 39 30 00 00            ADD EAX,0x3039
005845F0  A9 00 00 01 00            TEST EAX,0x10000
005845F5  74 6F                     JZ 0x00584666
005845F7  85 F6                     TEST ESI,ESI
005845F9  7F 34                     JG 0x0058462f
005845FB  8B CE                     MOV ECX,ESI
005845FD  F7 D9                     NEG ECX
005845FF  1B C9                     SBB ECX,ECX
00584601  EB 0D                     JMP 0x00584610
LAB_00584603:
00584603  85 F6                     TEST ESI,ESI
00584605  7F 25                     JG 0x0058462c
00584607  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
0058460A  8B CE                     MOV ECX,ESI
0058460C  F7 D9                     NEG ECX
0058460E  1B C9                     SBB ECX,ECX
LAB_00584610:
00584610  83 F9 FF                  CMP ECX,-0x1
00584613  0F 84 B1 00 00 00         JZ 0x005846ca
00584619  85 C9                     TEST ECX,ECX
0058461B  74 49                     JZ 0x00584666
0058461D  83 F9 01                  CMP ECX,0x1
00584620  74 0D                     JZ 0x0058462f
00584622  B8 C8 B5 7C 00            MOV EAX,0x7cb5c8
00584627  E9 CB 00 00 00            JMP 0x005846f7
LAB_0058462c:
0058462C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_0058462f:
0058462F  8B C8                     MOV ECX,EAX
00584631  C1 E1 05                  SHL ECX,0x5
00584634  2B C8                     SUB ECX,EAX
00584636  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00584639  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0058463C  D1 E1                     SHL ECX,0x1
0058463E  2B C8                     SUB ECX,EAX
00584640  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00584643  8D 94 88 39 30 00 00      LEA EDX,[EAX + ECX*0x4 + 0x3039]
0058464A  F7 C2 00 00 01 00         TEST EDX,0x10000
00584650  74 0A                     JZ 0x0058465c
00584652  B8 7C B6 7C 00            MOV EAX,0x7cb67c
00584657  E9 9B 00 00 00            JMP 0x005846f7
LAB_0058465c:
0058465C  B8 A0 B6 7C 00            MOV EAX,0x7cb6a0
00584661  E9 91 00 00 00            JMP 0x005846f7
LAB_00584666:
00584666  85 F6                     TEST ESI,ESI
00584668  8B C8                     MOV ECX,EAX
0058466A  7C 2F                     JL 0x0058469b
0058466C  C1 E1 05                  SHL ECX,0x5
0058466F  2B C8                     SUB ECX,EAX
00584671  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00584674  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
00584677  D1 E1                     SHL ECX,0x1
00584679  2B C8                     SUB ECX,EAX
0058467B  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
0058467E  8D 94 88 39 30 00 00      LEA EDX,[EAX + ECX*0x4 + 0x3039]
00584685  F7 C2 00 00 01 00         TEST EDX,0x10000
0058468B  74 07                     JZ 0x00584694
0058468D  B8 EC B5 7C 00            MOV EAX,0x7cb5ec
00584692  EB 63                     JMP 0x005846f7
LAB_00584694:
00584694  B8 34 B6 7C 00            MOV EAX,0x7cb634
00584699  EB 5C                     JMP 0x005846f7
LAB_0058469b:
0058469B  C1 E1 05                  SHL ECX,0x5
0058469E  2B C8                     SUB ECX,EAX
005846A0  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
005846A3  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005846A6  D1 E1                     SHL ECX,0x1
005846A8  2B C8                     SUB ECX,EAX
005846AA  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005846AD  8D 94 88 39 30 00 00      LEA EDX,[EAX + ECX*0x4 + 0x3039]
005846B4  F7 C2 00 00 01 00         TEST EDX,0x10000
005846BA  74 07                     JZ 0x005846c3
005846BC  B8 10 B6 7C 00            MOV EAX,0x7cb610
005846C1  EB 34                     JMP 0x005846f7
LAB_005846c3:
005846C3  B8 58 B6 7C 00            MOV EAX,0x7cb658
005846C8  EB 2D                     JMP 0x005846f7
LAB_005846ca:
005846CA  8B C8                     MOV ECX,EAX
005846CC  C1 E1 05                  SHL ECX,0x5
005846CF  2B C8                     SUB ECX,EAX
005846D1  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
005846D4  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005846D7  D1 E1                     SHL ECX,0x1
005846D9  2B C8                     SUB ECX,EAX
005846DB  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
005846DE  8D 94 88 39 30 00 00      LEA EDX,[EAX + ECX*0x4 + 0x3039]
005846E5  B8 C4 B6 7C 00            MOV EAX,0x7cb6c4
005846EA  F7 C2 00 00 01 00         TEST EDX,0x10000
005846F0  75 05                     JNZ 0x005846f7
005846F2  B8 E8 B6 7C 00            MOV EAX,0x7cb6e8
LAB_005846f7:
005846F7  85 C0                     TEST EAX,EAX
005846F9  75 05                     JNZ 0x00584700
005846FB  B8 C8 B5 7C 00            MOV EAX,0x7cb5c8
LAB_00584700:
00584700  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00584703  C7 45 2C 00 00 00 00      MOV dword ptr [EBP + 0x2c],0x0
0058470A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0058470D  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
00584710  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_00584713:
00584713  8B 00                     MOV EAX,dword ptr [EAX]
00584715  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00584718  03 C2                     ADD EAX,EDX
0058471A  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0058471D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00584720  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
00584723  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00584726  D1 E0                     SHL EAX,0x1
00584728  0F BF B0 18 B4 7C 00      MOVSX ESI,word ptr [EAX + 0x7cb418]
0058472F  0F BF 98 1C B4 7C 00      MOVSX EBX,word ptr [EAX + 0x7cb41c]
00584736  03 F7                     ADD ESI,EDI
00584738  03 D9                     ADD EBX,ECX
0058473A  0F BF B8 1A B4 7C 00      MOVSX EDI,word ptr [EAX + 0x7cb41a]
00584741  03 FA                     ADD EDI,EDX
00584743  85 F6                     TEST ESI,ESI
00584745  0F 8C 02 01 00 00         JL 0x0058484d
0058474B  85 FF                     TEST EDI,EDI
0058474D  0F 8C FA 00 00 00         JL 0x0058484d
00584753  85 DB                     TEST EBX,EBX
00584755  0F 8C F2 00 00 00         JL 0x0058484d
0058475B  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
00584762  3B F0                     CMP ESI,EAX
00584764  0F 8D E3 00 00 00         JGE 0x0058484d
0058476A  0F BF 0D 42 B2 7F 00      MOVSX ECX,word ptr [0x007fb242]
00584771  3B F9                     CMP EDI,ECX
00584773  0F 8D D4 00 00 00         JGE 0x0058484d
00584779  0F BF 15 44 B2 7F 00      MOVSX EDX,word ptr [0x007fb244]
00584780  3B DA                     CMP EBX,EDX
00584782  0F 8D C5 00 00 00         JGE 0x0058484d
00584788  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0058478E  53                        PUSH EBX
0058478F  57                        PUSH EDI
00584790  56                        PUSH ESI
00584791  E8 A5 05 E8 FF            CALL 0x00404d3b
00584796  85 C0                     TEST EAX,EAX
00584798  0F 84 AF 00 00 00         JZ 0x0058484d
0058479E  66 85 F6                  TEST SI,SI
005847A1  0F 8C C0 00 00 00         JL 0x00584867
005847A7  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
005847AD  66 3B F0                  CMP SI,AX
005847B0  0F 8D B1 00 00 00         JGE 0x00584867
005847B6  66 85 FF                  TEST DI,DI
005847B9  7C 46                     JL 0x00584801
005847BB  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
005847C2  7D 3D                     JGE 0x00584801
005847C4  66 85 DB                  TEST BX,BX
005847C7  7C 38                     JL 0x00584801
005847C9  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
005847D0  7D 2F                     JGE 0x00584801
005847D2  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
005847D9  0F BF D3                  MOVSX EDX,BX
005847DC  0F AF CA                  IMUL ECX,EDX
005847DF  0F BF C0                  MOVSX EAX,AX
005847E2  0F BF D7                  MOVSX EDX,DI
005847E5  0F AF C2                  IMUL EAX,EDX
005847E8  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005847EE  03 C8                     ADD ECX,EAX
005847F0  0F BF C6                  MOVSX EAX,SI
005847F3  03 C8                     ADD ECX,EAX
005847F5  83 3C CA 00               CMP dword ptr [EDX + ECX*0x8],0x0
005847F9  75 52                     JNZ 0x0058484d
005847FB  66 A1 40 B2 7F 00         MOV AX,[0x007fb240]
LAB_00584801:
00584801  66 3B F0                  CMP SI,AX
00584804  7D 61                     JGE 0x00584867
00584806  66 85 FF                  TEST DI,DI
00584809  7C 5C                     JL 0x00584867
0058480B  66 3B 3D 42 B2 7F 00      CMP DI,word ptr [0x007fb242]
00584812  7D 53                     JGE 0x00584867
00584814  66 85 DB                  TEST BX,BX
00584817  7C 4E                     JL 0x00584867
00584819  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
00584820  7D 45                     JGE 0x00584867
00584822  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
00584829  0F BF D3                  MOVSX EDX,BX
0058482C  0F AF CA                  IMUL ECX,EDX
0058482F  0F BF C0                  MOVSX EAX,AX
00584832  0F BF D7                  MOVSX EDX,DI
00584835  0F AF C2                  IMUL EAX,EDX
00584838  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
0058483E  03 C8                     ADD ECX,EAX
00584840  0F BF C6                  MOVSX EAX,SI
00584843  03 C8                     ADD ECX,EAX
00584845  8B 44 CA 04               MOV EAX,dword ptr [EDX + ECX*0x8 + 0x4]
00584849  85 C0                     TEST EAX,EAX
0058484B  74 1A                     JZ 0x00584867
LAB_0058484d:
0058484D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
00584850  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00584853  41                        INC ECX
00584854  83 C0 04                  ADD EAX,0x4
00584857  83 F9 09                  CMP ECX,0x9
0058485A  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
0058485D  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
00584860  7D 1E                     JGE 0x00584880
00584862  E9 AC FE FF FF            JMP 0x00584713
LAB_00584867:
00584867  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
0058486A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0058486D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00584870  89 30                     MOV dword ptr [EAX],ESI
00584872  89 39                     MOV dword ptr [ECX],EDI
00584874  5F                        POP EDI
00584875  89 1A                     MOV dword ptr [EDX],EBX
00584877  5E                        POP ESI
00584878  B8 01 00 00 00            MOV EAX,0x1
0058487D  5B                        POP EBX
0058487E  5D                        POP EBP
0058487F  C3                        RET
LAB_00584880:
00584880  5F                        POP EDI
00584881  5E                        POP ESI
00584882  33 C0                     XOR EAX,EAX
00584884  5B                        POP EBX
00584885  5D                        POP EBP
00584886  C3                        RET
