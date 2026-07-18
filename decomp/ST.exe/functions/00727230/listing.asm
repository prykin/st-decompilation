FUN_00727230:
00727230  55                        PUSH EBP
00727231  8B EC                     MOV EBP,ESP
00727233  83 EC 10                  SUB ESP,0x10
00727236  A1 EC 70 85 00            MOV EAX,[0x008570ec]
0072723B  53                        PUSH EBX
0072723C  56                        PUSH ESI
0072723D  57                        PUSH EDI
0072723E  8B 3D 64 70 85 00         MOV EDI,dword ptr [0x00857064]
00727244  33 C9                     XOR ECX,ECX
00727246  2B C7                     SUB EAX,EDI
00727248  BE 01 00 00 00            MOV ESI,0x1
0072724D  85 C0                     TEST EAX,EAX
0072724F  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00727252  0F 8E 49 07 00 00         JLE 0x007279a1
LAB_00727258:
00727258  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0072725B  8B 5A 10                  MOV EBX,dword ptr [EDX + 0x10]
0072725E  85 DB                     TEST EBX,EBX
00727260  75 17                     JNZ 0x00727279
00727262  41                        INC ECX
00727263  83 C2 20                  ADD EDX,0x20
00727266  3B C8                     CMP ECX,EAX
00727268  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0072726B  7C EB                     JL 0x00727258
0072726D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00727270  5F                        POP EDI
00727271  5E                        POP ESI
00727272  5B                        POP EBX
00727273  8B E5                     MOV ESP,EBP
00727275  5D                        POP EBP
00727276  C2 04 00                  RET 0x4
LAB_00727279:
00727279  8B 5A 18                  MOV EBX,dword ptr [EDX + 0x18]
0072727C  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0072727F  85 DB                     TEST EBX,EBX
00727281  7D 03                     JGE 0x00727286
00727283  83 CE FF                  OR ESI,0xffffffff
LAB_00727286:
00727286  3B C8                     CMP ECX,EAX
00727288  0F 8D 13 07 00 00         JGE 0x007279a1
0072728E  03 F9                     ADD EDI,ECX
00727290  2B C1                     SUB EAX,ECX
00727292  0F AF 3D 90 70 85 00      IMUL EDI,dword ptr [0x00857090]
00727299  8B 0D 8C 70 85 00         MOV ECX,dword ptr [0x0085708c]
0072729F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007272A2  03 F9                     ADD EDI,ECX
007272A4  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007272A7  85 F6                     TEST ESI,ESI
007272A9  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
007272AC  0F 8C 84 03 00 00         JL 0x00727636
007272B2  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_007272b5:
007272B5  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
007272B8  89 0D F0 70 85 00         MOV dword ptr [0x008570f0],ECX
007272BE  0B C9                     OR ECX,ECX
007272C0  0F 8E 49 03 00 00         JLE 0x0072760f
007272C6  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
007272C9  A3 E0 70 85 00            MOV [0x008570e0],EAX
007272CE  C1 F8 10                  SAR EAX,0x10
007272D1  A3 74 70 85 00            MOV [0x00857074],EAX
007272D6  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
007272D9  A3 F4 70 85 00            MOV [0x008570f4],EAX
007272DE  8B 35 9C 70 85 00         MOV ESI,dword ptr [0x0085709c]
007272E4  23 C0                     AND EAX,EAX
007272E6  79 0D                     JNS 0x007272f5
007272E8  F7 DE                     NEG ESI
007272EA  66 3D 00 00               CMP AX,0x0
007272EE  74 05                     JZ 0x007272f5
007272F0  05 00 00 01 00            ADD EAX,0x10000
LAB_007272f5:
007272F5  8B 15 9C 70 85 00         MOV EDX,dword ptr [0x0085709c]
007272FB  C1 F8 10                  SAR EAX,0x10
007272FE  89 35 84 70 85 00         MOV dword ptr [0x00857084],ESI
00727304  C7 05 88 70 85 00 00 00 00 00  MOV dword ptr [0x00857088],0x0
0072730E  F7 EA                     IMUL EDX
00727310  01 05 74 70 85 00         ADD dword ptr [0x00857074],EAX
00727316  8B 35 E0 70 85 00         MOV ESI,dword ptr [0x008570e0]
0072731C  A1 F4 70 85 00            MOV EAX,[0x008570f4]
00727321  D1 FE                     SAR ESI,0x1
00727323  D1 F8                     SAR EAX,0x1
00727325  03 73 08                  ADD ESI,dword ptr [EBX + 0x8]
00727328  03 43 0C                  ADD EAX,dword ptr [EBX + 0xc]
0072732B  8B 3B                     MOV EDI,dword ptr [EBX]
0072732D  03 7D F4                  ADD EDI,dword ptr [EBP + -0xc]
00727330  55                        PUSH EBP
00727331  8B EE                     MOV EBP,ESI
00727333  8B D8                     MOV EBX,EAX
00727335  C1 F8 10                  SAR EAX,0x10
00727338  F7 25 9C 70 85 00         MUL dword ptr [0x0085709c]
0072733E  C1 FE 10                  SAR ESI,0x10
00727341  03 F0                     ADD ESI,EAX
00727343  03 35 00 71 85 00         ADD ESI,dword ptr [0x00857100]
00727349  83 3D 84 70 85 00 00      CMP dword ptr [0x00857084],0x0
00727350  7D 08                     JGE 0x0072735a
00727352  F7 1D F4 70 85 00         NEG dword ptr [0x008570f4]
00727358  F7 D3                     NOT EBX
LAB_0072735a:
0072735A  8B 15 74 70 85 00         MOV EDX,dword ptr [0x00857074]
00727360  A1 E0 70 85 00            MOV EAX,[0x008570e0]
00727365  01 15 84 70 85 00         ADD dword ptr [0x00857084],EDX
0072736B  01 15 88 70 85 00         ADD dword ptr [0x00857088],EDX
00727371  8B 15 F4 70 85 00         MOV EDX,dword ptr [0x008570f4]
00727377  C1 E0 10                  SHL EAX,0x10
0072737A  C1 E2 10                  SHL EDX,0x10
0072737D  A3 E0 70 85 00            MOV [0x008570e0],EAX
00727382  89 15 F4 70 85 00         MOV dword ptr [0x008570f4],EDX
00727388  C1 E5 10                  SHL EBP,0x10
0072738B  C1 E3 10                  SHL EBX,0x10
0072738E  83 F9 10                  CMP ECX,0x10
00727391  0F 82 86 01 00 00         JC 0x0072751d
LAB_00727397:
00727397  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072739D  1B D2                     SBB EDX,EDX
0072739F  8B 0D E0 70 85 00         MOV ECX,dword ptr [0x008570e0]
007273A5  8A 06                     MOV AL,byte ptr [ESI]
007273A7  03 E9                     ADD EBP,ECX
007273A9  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007273B0  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007273B6  1B D2                     SBB EDX,EDX
007273B8  88 07                     MOV byte ptr [EDI],AL
007273BA  8A 06                     MOV AL,byte ptr [ESI]
007273BC  03 E9                     ADD EBP,ECX
007273BE  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007273C5  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007273CB  1B D2                     SBB EDX,EDX
007273CD  88 47 01                  MOV byte ptr [EDI + 0x1],AL
007273D0  8A 06                     MOV AL,byte ptr [ESI]
007273D2  03 E9                     ADD EBP,ECX
007273D4  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007273DB  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007273E1  1B D2                     SBB EDX,EDX
007273E3  88 47 02                  MOV byte ptr [EDI + 0x2],AL
007273E6  8A 06                     MOV AL,byte ptr [ESI]
007273E8  03 E9                     ADD EBP,ECX
007273EA  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007273F1  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007273F7  1B D2                     SBB EDX,EDX
007273F9  88 47 03                  MOV byte ptr [EDI + 0x3],AL
007273FC  8A 06                     MOV AL,byte ptr [ESI]
007273FE  03 E9                     ADD EBP,ECX
00727400  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727407  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072740D  1B D2                     SBB EDX,EDX
0072740F  88 47 04                  MOV byte ptr [EDI + 0x4],AL
00727412  8A 06                     MOV AL,byte ptr [ESI]
00727414  03 E9                     ADD EBP,ECX
00727416  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072741D  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727423  1B D2                     SBB EDX,EDX
00727425  88 47 05                  MOV byte ptr [EDI + 0x5],AL
00727428  8A 06                     MOV AL,byte ptr [ESI]
0072742A  03 E9                     ADD EBP,ECX
0072742C  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727433  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727439  1B D2                     SBB EDX,EDX
0072743B  88 47 06                  MOV byte ptr [EDI + 0x6],AL
0072743E  8A 06                     MOV AL,byte ptr [ESI]
00727440  03 E9                     ADD EBP,ECX
00727442  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727449  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072744F  1B D2                     SBB EDX,EDX
00727451  88 47 07                  MOV byte ptr [EDI + 0x7],AL
00727454  8A 06                     MOV AL,byte ptr [ESI]
00727456  03 E9                     ADD EBP,ECX
00727458  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072745F  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727465  1B D2                     SBB EDX,EDX
00727467  88 47 08                  MOV byte ptr [EDI + 0x8],AL
0072746A  8A 06                     MOV AL,byte ptr [ESI]
0072746C  03 E9                     ADD EBP,ECX
0072746E  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727475  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072747B  1B D2                     SBB EDX,EDX
0072747D  88 47 09                  MOV byte ptr [EDI + 0x9],AL
00727480  8A 06                     MOV AL,byte ptr [ESI]
00727482  03 E9                     ADD EBP,ECX
00727484  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072748B  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727491  1B D2                     SBB EDX,EDX
00727493  88 47 0A                  MOV byte ptr [EDI + 0xa],AL
00727496  8A 06                     MOV AL,byte ptr [ESI]
00727498  03 E9                     ADD EBP,ECX
0072749A  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007274A1  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007274A7  1B D2                     SBB EDX,EDX
007274A9  88 47 0B                  MOV byte ptr [EDI + 0xb],AL
007274AC  8A 06                     MOV AL,byte ptr [ESI]
007274AE  03 E9                     ADD EBP,ECX
007274B0  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007274B7  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007274BD  1B D2                     SBB EDX,EDX
007274BF  88 47 0C                  MOV byte ptr [EDI + 0xc],AL
007274C2  8A 06                     MOV AL,byte ptr [ESI]
007274C4  03 E9                     ADD EBP,ECX
007274C6  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007274CD  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007274D3  1B D2                     SBB EDX,EDX
007274D5  88 47 0D                  MOV byte ptr [EDI + 0xd],AL
007274D8  8A 06                     MOV AL,byte ptr [ESI]
007274DA  03 E9                     ADD EBP,ECX
007274DC  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007274E3  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007274E9  1B D2                     SBB EDX,EDX
007274EB  88 47 0E                  MOV byte ptr [EDI + 0xe],AL
007274EE  8A 06                     MOV AL,byte ptr [ESI]
007274F0  03 E9                     ADD EBP,ECX
007274F2  88 47 0F                  MOV byte ptr [EDI + 0xf],AL
007274F5  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007274FC  8B 0D F0 70 85 00         MOV ECX,dword ptr [0x008570f0]
00727502  83 C7 10                  ADD EDI,0x10
00727505  83 E9 10                  SUB ECX,0x10
00727508  0F 84 00 01 00 00         JZ 0x0072760e
0072750E  89 0D F0 70 85 00         MOV dword ptr [0x008570f0],ECX
00727514  83 F9 10                  CMP ECX,0x10
00727517  0F 83 7A FE FF FF         JNC 0x00727397
LAB_0072751d:
0072751D  83 F9 08                  CMP ECX,0x8
00727520  0F 82 CA 00 00 00         JC 0x007275f0
00727526  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072752C  1B D2                     SBB EDX,EDX
0072752E  8B 0D E0 70 85 00         MOV ECX,dword ptr [0x008570e0]
00727534  8A 06                     MOV AL,byte ptr [ESI]
00727536  03 E9                     ADD EBP,ECX
00727538  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072753F  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727545  1B D2                     SBB EDX,EDX
00727547  88 07                     MOV byte ptr [EDI],AL
00727549  8A 06                     MOV AL,byte ptr [ESI]
0072754B  03 E9                     ADD EBP,ECX
0072754D  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727554  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072755A  1B D2                     SBB EDX,EDX
0072755C  88 47 01                  MOV byte ptr [EDI + 0x1],AL
0072755F  8A 06                     MOV AL,byte ptr [ESI]
00727561  03 E9                     ADD EBP,ECX
00727563  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072756A  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727570  1B D2                     SBB EDX,EDX
00727572  88 47 02                  MOV byte ptr [EDI + 0x2],AL
00727575  8A 06                     MOV AL,byte ptr [ESI]
00727577  03 E9                     ADD EBP,ECX
00727579  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727580  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727586  1B D2                     SBB EDX,EDX
00727588  88 47 03                  MOV byte ptr [EDI + 0x3],AL
0072758B  8A 06                     MOV AL,byte ptr [ESI]
0072758D  03 E9                     ADD EBP,ECX
0072758F  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
00727596  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072759C  1B D2                     SBB EDX,EDX
0072759E  88 47 04                  MOV byte ptr [EDI + 0x4],AL
007275A1  8A 06                     MOV AL,byte ptr [ESI]
007275A3  03 E9                     ADD EBP,ECX
007275A5  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007275AC  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007275B2  1B D2                     SBB EDX,EDX
007275B4  88 47 05                  MOV byte ptr [EDI + 0x5],AL
007275B7  8A 06                     MOV AL,byte ptr [ESI]
007275B9  03 E9                     ADD EBP,ECX
007275BB  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007275C2  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007275C8  1B D2                     SBB EDX,EDX
007275CA  88 47 06                  MOV byte ptr [EDI + 0x6],AL
007275CD  8A 06                     MOV AL,byte ptr [ESI]
007275CF  03 E9                     ADD EBP,ECX
007275D1  88 47 07                  MOV byte ptr [EDI + 0x7],AL
007275D4  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
007275DB  8B 0D F0 70 85 00         MOV ECX,dword ptr [0x008570f0]
007275E1  83 C7 08                  ADD EDI,0x8
007275E4  83 E9 08                  SUB ECX,0x8
007275E7  74 25                     JZ 0x0072760e
007275E9  8D A4 24 00 00 00 00      LEA ESP,[ESP]
LAB_007275f0:
007275F0  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007275F6  47                        INC EDI
007275F7  1B D2                     SBB EDX,EDX
007275F9  8A 06                     MOV AL,byte ptr [ESI]
007275FB  03 2D E0 70 85 00         ADD EBP,dword ptr [0x008570e0]
00727601  88 47 FF                  MOV byte ptr [EDI + -0x1],AL
00727604  13 34 95 88 70 85 00      ADC ESI,dword ptr [EDX*0x4 + 0x857088]
0072760B  49                        DEC ECX
0072760C  7F E2                     JG 0x007275f0
LAB_0072760e:
0072760E  5D                        POP EBP
LAB_0072760f:
0072760F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00727612  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00727615  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00727618  03 05 90 70 85 00         ADD EAX,dword ptr [0x00857090]
0072761E  83 C3 20                  ADD EBX,0x20
00727621  49                        DEC ECX
00727622  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00727625  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
00727628  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072762B  0F 8F 84 FC FF FF         JG 0x007272b5
00727631  E9 BA 02 00 00            JMP 0x007278f0
LAB_00727636:
00727636  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00727639:
00727639  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
0072763C  89 0D F0 70 85 00         MOV dword ptr [0x008570f0],ECX
00727642  0B C9                     OR ECX,ECX
00727644  0F 8E 84 02 00 00         JLE 0x007278ce
0072764A  8B 43 18                  MOV EAX,dword ptr [EBX + 0x18]
0072764D  A3 E0 70 85 00            MOV [0x008570e0],EAX
00727652  66 0B C0                  OR AX,AX
00727655  74 05                     JZ 0x0072765c
00727657  05 00 00 01 00            ADD EAX,0x10000
LAB_0072765c:
0072765C  C1 F8 10                  SAR EAX,0x10
0072765F  A3 74 70 85 00            MOV [0x00857074],EAX
00727664  8B 43 1C                  MOV EAX,dword ptr [EBX + 0x1c]
00727667  A3 F4 70 85 00            MOV [0x008570f4],EAX
0072766C  8B 35 9C 70 85 00         MOV ESI,dword ptr [0x0085709c]
00727672  23 C0                     AND EAX,EAX
00727674  79 0C                     JNS 0x00727682
00727676  F7 DE                     NEG ESI
00727678  66 0B C0                  OR AX,AX
0072767B  74 05                     JZ 0x00727682
0072767D  05 00 00 01 00            ADD EAX,0x10000
LAB_00727682:
00727682  8B 15 9C 70 85 00         MOV EDX,dword ptr [0x0085709c]
00727688  C1 F8 10                  SAR EAX,0x10
0072768B  89 35 84 70 85 00         MOV dword ptr [0x00857084],ESI
00727691  C7 05 88 70 85 00 00 00 00 00  MOV dword ptr [0x00857088],0x0
0072769B  F7 EA                     IMUL EDX
0072769D  01 05 74 70 85 00         ADD dword ptr [0x00857074],EAX
007276A3  8B 35 E0 70 85 00         MOV ESI,dword ptr [0x008570e0]
007276A9  A1 F4 70 85 00            MOV EAX,[0x008570f4]
007276AE  D1 FE                     SAR ESI,0x1
007276B0  D1 F8                     SAR EAX,0x1
007276B2  03 73 08                  ADD ESI,dword ptr [EBX + 0x8]
007276B5  03 43 0C                  ADD EAX,dword ptr [EBX + 0xc]
007276B8  8B 3B                     MOV EDI,dword ptr [EBX]
007276BA  03 7D F4                  ADD EDI,dword ptr [EBP + -0xc]
007276BD  55                        PUSH EBP
007276BE  8B EE                     MOV EBP,ESI
007276C0  8B D8                     MOV EBX,EAX
007276C2  C1 F8 10                  SAR EAX,0x10
007276C5  F7 25 9C 70 85 00         MUL dword ptr [0x0085709c]
007276CB  C1 FE 10                  SAR ESI,0x10
007276CE  03 F0                     ADD ESI,EAX
007276D0  03 35 00 71 85 00         ADD ESI,dword ptr [0x00857100]
007276D6  83 3D 84 70 85 00 00      CMP dword ptr [0x00857084],0x0
007276DD  7D 08                     JGE 0x007276e7
007276DF  F7 1D F4 70 85 00         NEG dword ptr [0x008570f4]
007276E5  F7 D3                     NOT EBX
LAB_007276e7:
007276E7  F7 1D 84 70 85 00         NEG dword ptr [0x00857084]
007276ED  8B 15 74 70 85 00         MOV EDX,dword ptr [0x00857074]
007276F3  A1 E0 70 85 00            MOV EAX,[0x008570e0]
007276F8  29 15 84 70 85 00         SUB dword ptr [0x00857084],EDX
007276FE  29 15 88 70 85 00         SUB dword ptr [0x00857088],EDX
00727704  8B 15 F4 70 85 00         MOV EDX,dword ptr [0x008570f4]
0072770A  F7 D8                     NEG EAX
0072770C  C1 E2 10                  SHL EDX,0x10
0072770F  C1 E0 10                  SHL EAX,0x10
00727712  89 15 F4 70 85 00         MOV dword ptr [0x008570f4],EDX
00727718  A3 E0 70 85 00            MOV [0x008570e0],EAX
0072771D  F7 D5                     NOT EBP
0072771F  C1 E3 10                  SHL EBX,0x10
00727722  C1 E5 10                  SHL EBP,0x10
00727725  83 F9 10                  CMP ECX,0x10
00727728  0F 82 82 01 00 00         JC 0x007278b0
LAB_0072772e:
0072772E  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727734  1B D2                     SBB EDX,EDX
00727736  8B 0D E0 70 85 00         MOV ECX,dword ptr [0x008570e0]
0072773C  8A 06                     MOV AL,byte ptr [ESI]
0072773E  03 E9                     ADD EBP,ECX
00727740  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727747  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072774D  1B D2                     SBB EDX,EDX
0072774F  88 07                     MOV byte ptr [EDI],AL
00727751  8A 06                     MOV AL,byte ptr [ESI]
00727753  03 E9                     ADD EBP,ECX
00727755  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
0072775C  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727762  1B D2                     SBB EDX,EDX
00727764  88 47 01                  MOV byte ptr [EDI + 0x1],AL
00727767  8A 06                     MOV AL,byte ptr [ESI]
00727769  03 E9                     ADD EBP,ECX
0072776B  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727772  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727778  1B D2                     SBB EDX,EDX
0072777A  88 47 02                  MOV byte ptr [EDI + 0x2],AL
0072777D  8A 06                     MOV AL,byte ptr [ESI]
0072777F  03 E9                     ADD EBP,ECX
00727781  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727788  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072778E  1B D2                     SBB EDX,EDX
00727790  88 47 03                  MOV byte ptr [EDI + 0x3],AL
00727793  8A 06                     MOV AL,byte ptr [ESI]
00727795  03 E9                     ADD EBP,ECX
00727797  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
0072779E  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007277A4  1B D2                     SBB EDX,EDX
007277A6  88 47 04                  MOV byte ptr [EDI + 0x4],AL
007277A9  8A 06                     MOV AL,byte ptr [ESI]
007277AB  03 E9                     ADD EBP,ECX
007277AD  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
007277B4  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007277BA  1B D2                     SBB EDX,EDX
007277BC  88 47 05                  MOV byte ptr [EDI + 0x5],AL
007277BF  8A 06                     MOV AL,byte ptr [ESI]
007277C1  03 E9                     ADD EBP,ECX
007277C3  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
007277CA  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007277D0  1B D2                     SBB EDX,EDX
007277D2  88 47 06                  MOV byte ptr [EDI + 0x6],AL
007277D5  8A 06                     MOV AL,byte ptr [ESI]
007277D7  03 E9                     ADD EBP,ECX
007277D9  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
007277E0  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007277E6  1B D2                     SBB EDX,EDX
007277E8  88 47 07                  MOV byte ptr [EDI + 0x7],AL
007277EB  8A 06                     MOV AL,byte ptr [ESI]
007277ED  03 E9                     ADD EBP,ECX
007277EF  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
007277F6  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007277FC  1B D2                     SBB EDX,EDX
007277FE  88 47 08                  MOV byte ptr [EDI + 0x8],AL
00727801  8A 06                     MOV AL,byte ptr [ESI]
00727803  03 E9                     ADD EBP,ECX
00727805  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
0072780C  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727812  1B D2                     SBB EDX,EDX
00727814  88 47 09                  MOV byte ptr [EDI + 0x9],AL
00727817  8A 06                     MOV AL,byte ptr [ESI]
00727819  03 E9                     ADD EBP,ECX
0072781B  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727822  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727828  1B D2                     SBB EDX,EDX
0072782A  88 47 0A                  MOV byte ptr [EDI + 0xa],AL
0072782D  8A 06                     MOV AL,byte ptr [ESI]
0072782F  03 E9                     ADD EBP,ECX
00727831  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727838  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072783E  1B D2                     SBB EDX,EDX
00727840  88 47 0B                  MOV byte ptr [EDI + 0xb],AL
00727843  8A 06                     MOV AL,byte ptr [ESI]
00727845  03 E9                     ADD EBP,ECX
00727847  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
0072784E  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727854  1B D2                     SBB EDX,EDX
00727856  88 47 0C                  MOV byte ptr [EDI + 0xc],AL
00727859  8A 06                     MOV AL,byte ptr [ESI]
0072785B  03 E9                     ADD EBP,ECX
0072785D  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727864  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
0072786A  1B D2                     SBB EDX,EDX
0072786C  88 47 0D                  MOV byte ptr [EDI + 0xd],AL
0072786F  8A 06                     MOV AL,byte ptr [ESI]
00727871  03 E9                     ADD EBP,ECX
00727873  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
0072787A  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
00727880  1B D2                     SBB EDX,EDX
00727882  88 47 0E                  MOV byte ptr [EDI + 0xe],AL
00727885  8A 06                     MOV AL,byte ptr [ESI]
00727887  03 E9                     ADD EBP,ECX
00727889  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
00727890  88 47 0F                  MOV byte ptr [EDI + 0xf],AL
00727893  8B 0D F0 70 85 00         MOV ECX,dword ptr [0x008570f0]
00727899  83 C7 10                  ADD EDI,0x10
0072789C  83 E9 10                  SUB ECX,0x10
0072789F  74 2C                     JZ 0x007278cd
007278A1  89 0D F0 70 85 00         MOV dword ptr [0x008570f0],ECX
007278A7  83 F9 10                  CMP ECX,0x10
007278AA  0F 83 7E FE FF FF         JNC 0x0072772e
LAB_007278b0:
007278B0  03 1D F4 70 85 00         ADD EBX,dword ptr [0x008570f4]
007278B6  1B D2                     SBB EDX,EDX
007278B8  8A 06                     MOV AL,byte ptr [ESI]
007278BA  03 2D E0 70 85 00         ADD EBP,dword ptr [0x008570e0]
007278C0  88 07                     MOV byte ptr [EDI],AL
007278C2  47                        INC EDI
007278C3  1B 34 95 88 70 85 00      SBB ESI,dword ptr [EDX*0x4 + 0x857088]
007278CA  49                        DEC ECX
007278CB  7F E3                     JG 0x007278b0
LAB_007278cd:
007278CD  5D                        POP EBP
LAB_007278ce:
007278CE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
007278D1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007278D4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007278D7  03 05 90 70 85 00         ADD EAX,dword ptr [0x00857090]
007278DD  83 C3 20                  ADD EBX,0x20
007278E0  49                        DEC ECX
007278E1  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
007278E4  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
007278E7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007278EA  0F 8F 49 FD FF FF         JG 0x00727639
LAB_007278f0:
007278F0  8B 15 EC 70 85 00         MOV EDX,dword ptr [0x008570ec]
007278F6  A1 64 70 85 00            MOV EAX,[0x00857064]
007278FB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
007278FE  2B D0                     SUB EDX,EAX
00727900  03 C1                     ADD EAX,ECX
00727902  2B D1                     SUB EDX,ECX
00727904  0F AF 05 90 70 85 00      IMUL EAX,dword ptr [0x00857090]
0072790B  8B 0D 7C 70 85 00         MOV ECX,dword ptr [0x0085707c]
00727911  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00727914  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00727917  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0072791A  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0072791D  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
00727920  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
LAB_00727923:
00727923  8B 3B                     MOV EDI,dword ptr [EBX]
00727925  8B 4B 10                  MOV ECX,dword ptr [EBX + 0x10]
00727928  D1 E7                     SHL EDI,0x1
0072792A  03 7D 08                  ADD EDI,dword ptr [EBP + 0x8]
0072792D  0B C9                     OR ECX,ECX
0072792F  7E 4C                     JLE 0x0072797d
00727931  8B 53 04                  MOV EDX,dword ptr [EBX + 0x4]
00727934  8B 5B 14                  MOV EBX,dword ptr [EBX + 0x14]
00727937  F7 C7 02 00 00 00         TEST EDI,0x2
0072793D  74 10                     JZ 0x0072794f
0072793F  8B C2                     MOV EAX,EDX
00727941  C1 E8 10                  SHR EAX,0x10
00727944  66 89 07                  MOV word ptr [EDI],AX
00727947  83 C7 02                  ADD EDI,0x2
0072794A  03 D3                     ADD EDX,EBX
0072794C  49                        DEC ECX
0072794D  7E 2E                     JLE 0x0072797d
LAB_0072794f:
0072794F  83 E9 02                  SUB ECX,0x2
00727952  7C 1E                     JL 0x00727972
LAB_00727954:
00727954  8B C2                     MOV EAX,EDX
00727956  03 D3                     ADD EDX,EBX
00727958  83 C7 04                  ADD EDI,0x4
0072795B  8B F2                     MOV ESI,EDX
0072795D  C1 E8 10                  SHR EAX,0x10
00727960  81 E6 00 00 FF FF         AND ESI,0xffff0000
00727966  03 D3                     ADD EDX,EBX
00727968  0B C6                     OR EAX,ESI
0072796A  83 E9 02                  SUB ECX,0x2
0072796D  89 47 FC                  MOV dword ptr [EDI + -0x4],EAX
00727970  7D E2                     JGE 0x00727954
LAB_00727972:
00727972  F6 C1 01                  TEST CL,0x1
00727975  74 06                     JZ 0x0072797d
00727977  C1 EA 10                  SHR EDX,0x10
0072797A  66 89 17                  MOV word ptr [EDI],DX
LAB_0072797d:
0072797D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00727980  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00727983  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00727986  03 05 90 70 85 00         ADD EAX,dword ptr [0x00857090]
0072798C  83 C3 20                  ADD EBX,0x20
0072798F  03 05 90 70 85 00         ADD EAX,dword ptr [0x00857090]
00727995  49                        DEC ECX
00727996  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00727999  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
0072799C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072799F  7F 82                     JG 0x00727923
LAB_007279a1:
007279A1  5F                        POP EDI
007279A2  5E                        POP ESI
007279A3  5B                        POP EBX
007279A4  8B E5                     MOV ESP,EBP
007279A6  5D                        POP EBP
007279A7  C2 04 00                  RET 0x4
