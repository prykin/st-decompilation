FUN_004732f0:
004732F0  55                        PUSH EBP
004732F1  8B EC                     MOV EBP,ESP
004732F3  83 EC 3C                  SUB ESP,0x3c
004732F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004732F9  33 D2                     XOR EDX,EDX
004732FB  53                        PUSH EBX
004732FC  56                        PUSH ESI
004732FD  3B C2                     CMP EAX,EDX
004732FF  57                        PUSH EDI
00473300  8B F1                     MOV ESI,ECX
00473302  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00473305  74 09                     JZ 0x00473310
00473307  83 F8 01                  CMP EAX,0x1
0047330A  0F 85 AA 01 00 00         JNZ 0x004734ba
LAB_00473310:
00473310  B9 17 00 00 00            MOV ECX,0x17
00473315  33 C0                     XOR EAX,EAX
00473317  8D BE CC 02 00 00         LEA EDI,[ESI + 0x2cc]
0047331D  F3 AB                     STOSD.REP ES:EDI
0047331F  8B 86 CA 07 00 00         MOV EAX,dword ptr [ESI + 0x7ca]
00473325  89 96 C4 02 00 00         MOV dword ptr [ESI + 0x2c4],EDX
0047332B  3B C2                     CMP EAX,EDX
0047332D  0F 85 79 10 00 00         JNZ 0x004743ac
00473333  66 8B 86 BA 03 00 00      MOV AX,word ptr [ESI + 0x3ba]
0047333A  66 8B 8E BC 03 00 00      MOV CX,word ptr [ESI + 0x3bc]
00473341  66 8B 96 BE 03 00 00      MOV DX,word ptr [ESI + 0x3be]
00473348  8B 9E C0 03 00 00         MOV EBX,dword ptr [ESI + 0x3c0]
0047334E  8D BE 88 05 00 00         LEA EDI,[ESI + 0x588]
00473354  66 89 8E 8A 05 00 00      MOV word ptr [ESI + 0x58a],CX
0047335B  66 85 C0                  TEST AX,AX
0047335E  66 89 07                  MOV word ptr [EDI],AX
00473361  66 89 96 8C 05 00 00      MOV word ptr [ESI + 0x58c],DX
00473368  89 5D 08                  MOV dword ptr [EBP + 0x8],EBX
0047336B  89 9E 8E 05 00 00         MOV dword ptr [ESI + 0x58e],EBX
00473371  7C 50                     JL 0x004733c3
00473373  66 8B 1D 40 B2 7F 00      MOV BX,word ptr [0x007fb240]
0047337A  66 3B C3                  CMP AX,BX
0047337D  7D 44                     JGE 0x004733c3
0047337F  66 85 C9                  TEST CX,CX
00473382  7C 3F                     JL 0x004733c3
00473384  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
0047338B  7D 36                     JGE 0x004733c3
0047338D  66 85 D2                  TEST DX,DX
00473390  7C 31                     JL 0x004733c3
00473392  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00473399  7D 28                     JGE 0x004733c3
0047339B  0F BF C9                  MOVSX ECX,CX
0047339E  0F BF DB                  MOVSX EBX,BX
004733A1  0F AF CB                  IMUL ECX,EBX
004733A4  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004733AB  0F BF D2                  MOVSX EDX,DX
004733AE  0F AF DA                  IMUL EBX,EDX
004733B1  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004733B7  03 CB                     ADD ECX,EBX
004733B9  0F BF C0                  MOVSX EAX,AX
004733BC  03 C8                     ADD ECX,EAX
004733BE  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004733C1  EB 02                     JMP 0x004733c5
LAB_004733c3:
004733C3  33 C0                     XOR EAX,EAX
LAB_004733c5:
004733C5  85 C0                     TEST EAX,EAX
004733C7  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004733CA  74 0A                     JZ 0x004733d6
004733CC  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004733CF  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004733D2  3B CA                     CMP ECX,EDX
004733D4  74 36                     JZ 0x0047340c
LAB_004733d6:
004733D6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004733D9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004733DF  8D 55 F8                  LEA EDX,[EBP + -0x8]
004733E2  52                        PUSH EDX
004733E3  50                        PUSH EAX
004733E4  E8 E7 2E 27 00            CALL 0x006e62d0
004733E9  83 F8 FC                  CMP EAX,-0x4
004733EC  0F 84 BA 0F 00 00         JZ 0x004743ac
004733F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004733F5  8D 86 8C 05 00 00         LEA EAX,[ESI + 0x58c]
004733FB  50                        PUSH EAX
004733FC  8D 86 8A 05 00 00         LEA EAX,[ESI + 0x58a]
00473402  50                        PUSH EAX
00473403  57                        PUSH EDI
00473404  E8 02 2B F9 FF            CALL 0x00405f0b
00473409  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_0047340c:
0047340C  8B 10                     MOV EDX,dword ptr [EAX]
0047340E  8B C8                     MOV ECX,EAX
00473410  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
00473416  85 C0                     TEST EAX,EAX
00473418  0F 84 8E 0F 00 00         JZ 0x004743ac
0047341E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00473421  8B 01                     MOV EAX,dword ptr [ECX]
00473423  FF 90 A4 00 00 00         CALL dword ptr [EAX + 0xa4]
00473429  83 F8 01                  CMP EAX,0x1
0047342C  0F 84 7A 0F 00 00         JZ 0x004743ac
00473432  8D 4D F4                  LEA ECX,[EBP + -0xc]
00473435  8D 55 F0                  LEA EDX,[EBP + -0x10]
00473438  51                        PUSH ECX
00473439  8D 45 EC                  LEA EAX,[EBP + -0x14]
0047343C  52                        PUSH EDX
0047343D  8D 4D 0A                  LEA ECX,[EBP + 0xa]
00473440  50                        PUSH EAX
00473441  8D 55 FC                  LEA EDX,[EBP + -0x4]
00473444  51                        PUSH ECX
00473445  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
0047344C  8D 45 FE                  LEA EAX,[EBP + -0x2]
0047344F  52                        PUSH EDX
00473450  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
00473457  50                        PUSH EAX
00473458  66 8B 07                  MOV AX,word ptr [EDI]
0047345B  51                        PUSH ECX
0047345C  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00473460  52                        PUSH EDX
00473461  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
00473465  50                        PUSH EAX
00473466  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
0047346A  51                        PUSH ECX
0047346B  52                        PUSH EDX
0047346C  50                        PUSH EAX
0047346D  8B CE                     MOV ECX,ESI
0047346F  E8 88 F8 F8 FF            CALL 0x00402cfc
00473474  8B F8                     MOV EDI,EAX
00473476  83 FF FE                  CMP EDI,-0x2
00473479  0F 84 2D 0F 00 00         JZ 0x004743ac
0047347F  8B CE                     MOV ECX,ESI
00473481  E8 0B F0 F8 FF            CALL 0x00402491
00473486  66 8B 45 FE               MOV AX,word ptr [EBP + -0x2]
0047348A  66 8B 4D 0A               MOV CX,word ptr [EBP + 0xa]
0047348E  66 39 46 5B               CMP word ptr [ESI + 0x5b],AX
00473492  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00473496  0F 85 C9 0E 00 00         JNZ 0x00474365
0047349C  66 39 56 5D               CMP word ptr [ESI + 0x5d],DX
004734A0  0F 85 BF 0E 00 00         JNZ 0x00474365
004734A6  66 39 4E 5F               CMP word ptr [ESI + 0x5f],CX
004734AA  0F 85 B5 0E 00 00         JNZ 0x00474365
004734B0  C7 86 96 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x596],0x1
LAB_004734ba:
004734BA  8B 86 96 05 00 00         MOV EAX,dword ptr [ESI + 0x596]
004734C0  85 C0                     TEST EAX,EAX
004734C2  0F 85 CF 01 00 00         JNZ 0x00473697
004734C8  6A 02                     PUSH 0x2
004734CA  8B CE                     MOV ECX,ESI
004734CC  E8 0D FD F8 FF            CALL 0x004031de
004734D1  40                        INC EAX
004734D2  83 F8 04                  CMP EAX,0x4
004734D5  0F 87 BC 01 00 00         JA 0x00473697
switchD_004734db::switchD:
004734DB  FF 24 85 B8 43 47 00      JMP dword ptr [EAX*0x4 + 0x4743b8]
switchD_004734db::caseD_ffffffff:
004734E2  68 48 AE 7A 00            PUSH 0x7aae48
004734E7  68 CC 4C 7A 00            PUSH 0x7a4ccc
004734EC  6A 00                     PUSH 0x0
004734EE  6A 00                     PUSH 0x0
004734F0  68 03 2E 00 00            PUSH 0x2e03
004734F5  68 3C 9D 7A 00            PUSH 0x7a9d3c
004734FA  E8 D1 9F 23 00            CALL 0x006ad4d0
004734FF  83 C4 18                  ADD ESP,0x18
00473502  85 C0                     TEST EAX,EAX
00473504  74 01                     JZ 0x00473507
00473506  CC                        INT3
LAB_00473507:
00473507  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0047350D  68 03 2E 00 00            PUSH 0x2e03
00473512  68 3C 9D 7A 00            PUSH 0x7a9d3c
00473517  51                        PUSH ECX
00473518  68 FF FF 00 00            PUSH 0xffff
0047351D  E8 1E 29 23 00            CALL 0x006a5e40
00473522  B8 FF FF 00 00            MOV EAX,0xffff
00473527  5F                        POP EDI
00473528  5E                        POP ESI
00473529  5B                        POP EBX
0047352A  8B E5                     MOV ESP,EBP
0047352C  5D                        POP EBP
0047352D  C2 04 00                  RET 0x4
switchD_004734db::caseD_0:
00473530  8B CE                     MOV ECX,ESI
00473532  E8 1E 03 F9 FF            CALL 0x00403855
00473537  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
0047353E  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
00473545  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
0047354C  8D BE 8C 05 00 00         LEA EDI,[ESI + 0x58c]
00473552  66 85 C0                  TEST AX,AX
00473555  7C 51                     JL 0x004735a8
00473557  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0047355E  7D 48                     JGE 0x004735a8
00473560  66 85 D2                  TEST DX,DX
00473563  7C 43                     JL 0x004735a8
00473565  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047356C  7D 3A                     JGE 0x004735a8
0047356E  66 85 C9                  TEST CX,CX
00473571  7C 35                     JL 0x004735a8
00473573  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
0047357A  7D 2C                     JGE 0x004735a8
0047357C  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00473583  0F BF C9                  MOVSX ECX,CX
00473586  0F AF CB                  IMUL ECX,EBX
00473589  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
00473590  0F BF D2                  MOVSX EDX,DX
00473593  0F AF D3                  IMUL EDX,EBX
00473596  0F BF C0                  MOVSX EAX,AX
00473599  03 CA                     ADD ECX,EDX
0047359B  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004735A1  03 C8                     ADD ECX,EAX
004735A3  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004735A6  EB 02                     JMP 0x004735aa
LAB_004735a8:
004735A8  33 C0                     XOR EAX,EAX
LAB_004735aa:
004735AA  85 C0                     TEST EAX,EAX
004735AC  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004735AF  74 0D                     JZ 0x004735be
004735B1  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004735B4  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
004735BA  3B CA                     CMP ECX,EDX
004735BC  74 22                     JZ 0x004735e0
LAB_004735be:
004735BE  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
004735C4  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004735CA  8D 55 F8                  LEA EDX,[EBP + -0x8]
004735CD  52                        PUSH EDX
004735CE  50                        PUSH EAX
004735CF  E8 FC 2C 27 00            CALL 0x006e62d0
004735D4  83 F8 FC                  CMP EAX,-0x4
004735D7  0F 84 C8 0D 00 00         JZ 0x004743a5
004735DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004735e0:
004735E0  8B 10                     MOV EDX,dword ptr [EAX]
004735E2  8B C8                     MOV ECX,EAX
004735E4  FF 92 A4 00 00 00         CALL dword ptr [EDX + 0xa4]
004735EA  83 F8 01                  CMP EAX,0x1
004735ED  0F 84 B2 0D 00 00         JZ 0x004743a5
004735F3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004735F6  8B 01                     MOV EAX,dword ptr [ECX]
004735F8  FF 90 C0 00 00 00         CALL dword ptr [EAX + 0xc0]
004735FE  83 F8 01                  CMP EAX,0x1
00473601  0F 84 9E 0D 00 00         JZ 0x004743a5
00473607  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0047360A  8D 9E 8A 05 00 00         LEA EBX,[ESI + 0x58a]
00473610  57                        PUSH EDI
00473611  8D 86 88 05 00 00         LEA EAX,[ESI + 0x588]
00473617  53                        PUSH EBX
00473618  50                        PUSH EAX
00473619  E8 ED 28 F9 FF            CALL 0x00405f0b
0047361E  8D 4D F4                  LEA ECX,[EBP + -0xc]
00473621  8D 55 F0                  LEA EDX,[EBP + -0x10]
00473624  51                        PUSH ECX
00473625  8D 45 EC                  LEA EAX,[EBP + -0x14]
00473628  52                        PUSH EDX
00473629  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0047362C  50                        PUSH EAX
0047362D  8D 55 FC                  LEA EDX,[EBP + -0x4]
00473630  51                        PUSH ECX
00473631  66 8B 0F                  MOV CX,word ptr [EDI]
00473634  8D 45 FE                  LEA EAX,[EBP + -0x2]
00473637  52                        PUSH EDX
00473638  66 8B 13                  MOV DX,word ptr [EBX]
0047363B  50                        PUSH EAX
0047363C  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00473643  51                        PUSH ECX
00473644  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00473648  52                        PUSH EDX
00473649  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
0047364D  50                        PUSH EAX
0047364E  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00473652  51                        PUSH ECX
00473653  52                        PUSH EDX
00473654  50                        PUSH EAX
00473655  8B CE                     MOV ECX,ESI
00473657  E8 A0 F6 F8 FF            CALL 0x00402cfc
0047365C  83 F8 FE                  CMP EAX,-0x2
0047365F  0F 84 40 0D 00 00         JZ 0x004743a5
00473665  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00473669  66 8B 55 0A               MOV DX,word ptr [EBP + 0xa]
0047366D  66 39 4E 5B               CMP word ptr [ESI + 0x5b],CX
00473671  66 8B 7D FC               MOV DI,word ptr [EBP + -0x4]
00473675  75 49                     JNZ 0x004736c0
00473677  66 39 7E 5D               CMP word ptr [ESI + 0x5d],DI
0047367B  75 43                     JNZ 0x004736c0
0047367D  66 39 56 5F               CMP word ptr [ESI + 0x5f],DX
00473681  75 3D                     JNZ 0x004736c0
00473683  C7 86 96 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x596],0x1
0047368D  C7 86 92 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x592],0x0
switchD_004734db::default:
00473697  8B 86 96 05 00 00         MOV EAX,dword ptr [ESI + 0x596]
0047369D  83 F8 01                  CMP EAX,0x1
004736A0  0F 85 B4 02 00 00         JNZ 0x0047395a
004736A6  8B 16                     MOV EDX,dword ptr [ESI]
004736A8  8B CE                     MOV ECX,ESI
004736AA  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
004736B0  85 C0                     TEST EAX,EAX
004736B2  74 4C                     JZ 0x00473700
004736B4  83 C8 FF                  OR EAX,0xffffffff
004736B7  5F                        POP EDI
004736B8  5E                        POP ESI
004736B9  5B                        POP EBX
004736BA  8B E5                     MOV ESP,EBP
004736BC  5D                        POP EBP
004736BD  C2 04 00                  RET 0x4
LAB_004736c0:
004736C0  83 F8 FF                  CMP EAX,-0x1
004736C3  75 11                     JNZ 0x004736d6
004736C5  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
004736C9  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
004736CD  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
004736D1  51                        PUSH ECX
004736D2  52                        PUSH EDX
004736D3  50                        PUSH EAX
004736D4  EB 0C                     JMP 0x004736e2
LAB_004736d6:
004736D6  0F BF D2                  MOVSX EDX,DX
004736D9  0F BF C7                  MOVSX EAX,DI
004736DC  0F BF C9                  MOVSX ECX,CX
004736DF  52                        PUSH EDX
004736E0  50                        PUSH EAX
004736E1  51                        PUSH ECX
LAB_004736e2:
004736E2  8B CE                     MOV ECX,ESI
004736E4  E8 82 18 F9 FF            CALL 0x00404f6b
004736E9  6A 00                     PUSH 0x0
004736EB  8B CE                     MOV ECX,ESI
004736ED  E8 EC FA F8 FF            CALL 0x004031de
004736F2  B8 02 00 00 00            MOV EAX,0x2
004736F7  5F                        POP EDI
004736F8  5E                        POP ESI
004736F9  5B                        POP EBX
004736FA  8B E5                     MOV ESP,EBP
004736FC  5D                        POP EBP
004736FD  C2 04 00                  RET 0x4
LAB_00473700:
00473700  8B 86 92 05 00 00         MOV EAX,dword ptr [ESI + 0x592]
00473706  B9 28 00 00 00            MOV ECX,0x28
0047370B  99                        CDQ
0047370C  F7 F9                     IDIV ECX
0047370E  85 D2                     TEST EDX,EDX
00473710  0F 85 1E 02 00 00         JNZ 0x00473934
00473716  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
0047371D  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
00473724  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
0047372B  8D BE 8C 05 00 00         LEA EDI,[ESI + 0x58c]
00473731  66 85 C0                  TEST AX,AX
00473734  7C 51                     JL 0x00473787
00473736  66 3B 05 40 B2 7F 00      CMP AX,word ptr [0x007fb240]
0047373D  7D 48                     JGE 0x00473787
0047373F  66 85 D2                  TEST DX,DX
00473742  7C 43                     JL 0x00473787
00473744  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
0047374B  7D 3A                     JGE 0x00473787
0047374D  66 85 C9                  TEST CX,CX
00473750  7C 35                     JL 0x00473787
00473752  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00473759  7D 2C                     JGE 0x00473787
0047375B  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00473762  0F BF C9                  MOVSX ECX,CX
00473765  0F AF CB                  IMUL ECX,EBX
00473768  0F BF 1D 40 B2 7F 00      MOVSX EBX,word ptr [0x007fb240]
0047376F  0F BF D2                  MOVSX EDX,DX
00473772  0F AF D3                  IMUL EDX,EBX
00473775  0F BF C0                  MOVSX EAX,AX
00473778  03 CA                     ADD ECX,EDX
0047377A  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00473780  03 C8                     ADD ECX,EAX
00473782  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00473785  EB 02                     JMP 0x00473789
LAB_00473787:
00473787  33 C0                     XOR EAX,EAX
LAB_00473789:
00473789  85 C0                     TEST EAX,EAX
0047378B  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0047378E  74 0D                     JZ 0x0047379d
00473790  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
00473793  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
00473799  3B CA                     CMP ECX,EDX
0047379B  74 22                     JZ 0x004737bf
LAB_0047379d:
0047379D  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
004737A3  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004737A9  8D 55 F8                  LEA EDX,[EBP + -0x8]
004737AC  52                        PUSH EDX
004737AD  50                        PUSH EAX
004737AE  E8 1D 2B 27 00            CALL 0x006e62d0
004737B3  83 F8 FC                  CMP EAX,-0x4
004737B6  0F 84 F0 0B 00 00         JZ 0x004743ac
004737BC  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_004737bf:
004737BF  8B 10                     MOV EDX,dword ptr [EAX]
004737C1  8B C8                     MOV ECX,EAX
004737C3  FF 92 A4 00 00 00         CALL dword ptr [EDX + 0xa4]
004737C9  83 F8 01                  CMP EAX,0x1
004737CC  0F 84 D3 0B 00 00         JZ 0x004743a5
004737D2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004737D5  8B 01                     MOV EAX,dword ptr [ECX]
004737D7  FF 90 C0 00 00 00         CALL dword ptr [EAX + 0xc0]
004737DD  83 F8 01                  CMP EAX,0x1
004737E0  0F 84 BF 0B 00 00         JZ 0x004743a5
004737E6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004737E9  8D 9E 8A 05 00 00         LEA EBX,[ESI + 0x58a]
004737EF  57                        PUSH EDI
004737F0  8D 86 88 05 00 00         LEA EAX,[ESI + 0x588]
004737F6  53                        PUSH EBX
004737F7  50                        PUSH EAX
004737F8  E8 0E 27 F9 FF            CALL 0x00405f0b
004737FD  8D 4D F4                  LEA ECX,[EBP + -0xc]
00473800  8D 55 F0                  LEA EDX,[EBP + -0x10]
00473803  51                        PUSH ECX
00473804  8D 45 EC                  LEA EAX,[EBP + -0x14]
00473807  52                        PUSH EDX
00473808  8D 4D 0A                  LEA ECX,[EBP + 0xa]
0047380B  50                        PUSH EAX
0047380C  8D 55 FC                  LEA EDX,[EBP + -0x4]
0047380F  51                        PUSH ECX
00473810  66 8B 0F                  MOV CX,word ptr [EDI]
00473813  8D 45 FE                  LEA EAX,[EBP + -0x2]
00473816  52                        PUSH EDX
00473817  66 8B 13                  MOV DX,word ptr [EBX]
0047381A  50                        PUSH EAX
0047381B  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00473822  51                        PUSH ECX
00473823  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00473827  52                        PUSH EDX
00473828  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
0047382C  50                        PUSH EAX
0047382D  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
00473831  51                        PUSH ECX
00473832  52                        PUSH EDX
00473833  50                        PUSH EAX
00473834  8B CE                     MOV ECX,ESI
00473836  E8 C1 F4 F8 FF            CALL 0x00402cfc
0047383B  83 F8 FE                  CMP EAX,-0x2
0047383E  0F 84 61 0B 00 00         JZ 0x004743a5
00473844  66 8B 4D FE               MOV CX,word ptr [EBP + -0x2]
00473848  66 8B 55 0A               MOV DX,word ptr [EBP + 0xa]
0047384C  66 39 4E 5B               CMP word ptr [ESI + 0x5b],CX
00473850  66 8B 7D FC               MOV DI,word ptr [EBP + -0x4]
00473854  0F 85 A6 00 00 00         JNZ 0x00473900
0047385A  66 39 7E 5D               CMP word ptr [ESI + 0x5d],DI
0047385E  0F 85 9C 00 00 00         JNZ 0x00473900
00473864  66 39 56 5F               CMP word ptr [ESI + 0x5f],DX
00473868  0F 85 92 00 00 00         JNZ 0x00473900
0047386E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00473871  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
00473874  50                        PUSH EAX
00473875  8B 11                     MOV EDX,dword ptr [ECX]
00473877  FF 92 A8 00 00 00         CALL dword ptr [EDX + 0xa8]
0047387D  83 F8 01                  CMP EAX,0x1
00473880  0F 85 AE 00 00 00         JNZ 0x00473934
00473886  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00473889  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0047388C  C7 86 96 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x596],0x2
00473896  8B 16                     MOV EDX,dword ptr [ESI]
00473898  8B 39                     MOV EDI,dword ptr [ECX]
0047389A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0047389D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004738A0  8D 0C C5 64 00 00 00      LEA ECX,[EAX*0x8 + 0x64]
004738A7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004738AA  51                        PUSH ECX
004738AB  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004738AE  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004738B1  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
004738B5  50                        PUSH EAX
004738B6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004738B9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004738BC  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
004738BF  8D 44 C8 64               LEA EAX,[EAX + ECX*0x8 + 0x64]
004738C3  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004738C7  50                        PUSH EAX
004738C8  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
004738CC  51                        PUSH ECX
004738CD  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
004738D1  50                        PUSH EAX
004738D2  51                        PUSH ECX
004738D3  8B CE                     MOV ECX,ESI
004738D5  FF 52 10                  CALL dword ptr [EDX + 0x10]
004738D8  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004738DB  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004738DE  50                        PUSH EAX
004738DF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004738E2  52                        PUSH EDX
004738E3  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
004738E6  50                        PUSH EAX
004738E7  51                        PUSH ECX
004738E8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004738EB  52                        PUSH EDX
004738EC  FF 97 B0 00 00 00         CALL dword ptr [EDI + 0xb0]
004738F2  B8 02 00 00 00            MOV EAX,0x2
004738F7  5F                        POP EDI
004738F8  5E                        POP ESI
004738F9  5B                        POP EBX
004738FA  8B E5                     MOV ESP,EBP
004738FC  5D                        POP EBP
004738FD  C2 04 00                  RET 0x4
LAB_00473900:
00473900  83 F8 FF                  CMP EAX,-0x1
00473903  C7 86 96 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x596],0x0
0047390D  75 14                     JNZ 0x00473923
0047390F  0F BF 45 F4               MOVSX EAX,word ptr [EBP + -0xc]
00473913  0F BF 4D F0               MOVSX ECX,word ptr [EBP + -0x10]
00473917  0F BF 55 EC               MOVSX EDX,word ptr [EBP + -0x14]
0047391B  50                        PUSH EAX
0047391C  51                        PUSH ECX
0047391D  52                        PUSH EDX
0047391E  E9 BF FD FF FF            JMP 0x004736e2
LAB_00473923:
00473923  0F BF C2                  MOVSX EAX,DX
00473926  50                        PUSH EAX
00473927  0F BF D7                  MOVSX EDX,DI
0047392A  0F BF C1                  MOVSX EAX,CX
0047392D  52                        PUSH EDX
0047392E  50                        PUSH EAX
0047392F  E9 AE FD FF FF            JMP 0x004736e2
LAB_00473934:
00473934  8B 86 96 05 00 00         MOV EAX,dword ptr [ESI + 0x596]
0047393A  83 F8 01                  CMP EAX,0x1
0047393D  75 1B                     JNZ 0x0047395a
0047393F  8B 86 92 05 00 00         MOV EAX,dword ptr [ESI + 0x592]
00473945  40                        INC EAX
00473946  89 86 92 05 00 00         MOV dword ptr [ESI + 0x592],EAX
0047394C  B8 02 00 00 00            MOV EAX,0x2
00473951  5F                        POP EDI
00473952  5E                        POP ESI
00473953  5B                        POP EBX
00473954  8B E5                     MOV ESP,EBP
00473956  5D                        POP EBP
00473957  C2 04 00                  RET 0x4
LAB_0047395a:
0047395A  83 F8 02                  CMP EAX,0x2
0047395D  0F 85 E3 00 00 00         JNZ 0x00473a46
00473963  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
0047396A  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
00473971  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
00473978  66 85 C0                  TEST AX,AX
0047397B  7C 50                     JL 0x004739cd
0047397D  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00473984  66 3B C7                  CMP AX,DI
00473987  7D 44                     JGE 0x004739cd
00473989  66 85 D2                  TEST DX,DX
0047398C  7C 3F                     JL 0x004739cd
0047398E  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00473995  7D 36                     JGE 0x004739cd
00473997  66 85 C9                  TEST CX,CX
0047399A  7C 31                     JL 0x004739cd
0047399C  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004739A3  7D 28                     JGE 0x004739cd
004739A5  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
004739AC  0F BF C9                  MOVSX ECX,CX
004739AF  0F BF D2                  MOVSX EDX,DX
004739B2  0F AF CB                  IMUL ECX,EBX
004739B5  0F BF FF                  MOVSX EDI,DI
004739B8  0F AF D7                  IMUL EDX,EDI
004739BB  0F BF C0                  MOVSX EAX,AX
004739BE  03 CA                     ADD ECX,EDX
004739C0  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004739C6  03 C8                     ADD ECX,EAX
004739C8  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004739CB  EB 02                     JMP 0x004739cf
LAB_004739cd:
004739CD  33 C0                     XOR EAX,EAX
LAB_004739cf:
004739CF  85 C0                     TEST EAX,EAX
004739D1  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004739D4  74 0D                     JZ 0x004739e3
004739D6  8B 48 18                  MOV ECX,dword ptr [EAX + 0x18]
004739D9  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
004739DF  3B CA                     CMP ECX,EDX
004739E1  74 22                     JZ 0x00473a05
LAB_004739e3:
004739E3  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
004739E9  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004739EF  8D 55 F8                  LEA EDX,[EBP + -0x8]
004739F2  52                        PUSH EDX
004739F3  50                        PUSH EAX
004739F4  E8 D7 28 27 00            CALL 0x006e62d0
004739F9  83 F8 FC                  CMP EAX,-0x4
004739FC  0F 84 AA 09 00 00         JZ 0x004743ac
00473A02  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
LAB_00473a05:
00473A05  8B 10                     MOV EDX,dword ptr [EAX]
00473A07  8B C8                     MOV ECX,EAX
00473A09  FF 92 A4 00 00 00         CALL dword ptr [EDX + 0xa4]
00473A0F  83 F8 01                  CMP EAX,0x1
00473A12  74 14                     JZ 0x00473a28
00473A14  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00473A17  8B 01                     MOV EAX,dword ptr [ECX]
00473A19  FF 90 C0 00 00 00         CALL dword ptr [EAX + 0xc0]
00473A1F  83 F8 01                  CMP EAX,0x1
00473A22  0F 85 35 06 00 00         JNZ 0x0047405d
LAB_00473a28:
00473A28  8B CE                     MOV ECX,ESI
00473A2A  E8 9B ED F8 FF            CALL 0x004027ca
00473A2F  8B 06                     MOV EAX,dword ptr [ESI]
00473A31  8B CE                     MOV ECX,ESI
00473A33  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00473A39  F7 D8                     NEG EAX
00473A3B  1B C0                     SBB EAX,EAX
00473A3D  5F                        POP EDI
00473A3E  5E                        POP ESI
00473A3F  5B                        POP EBX
00473A40  8B E5                     MOV ESP,EBP
00473A42  5D                        POP EBP
00473A43  C2 04 00                  RET 0x4
LAB_00473a46:
00473A46  83 F8 03                  CMP EAX,0x3
00473A49  0F 85 1D 01 00 00         JNZ 0x00473b6c
00473A4F  8B 86 9A 05 00 00         MOV EAX,dword ptr [ESI + 0x59a]
00473A55  85 C0                     TEST EAX,EAX
00473A57  0F 85 DC 00 00 00         JNZ 0x00473b39
00473A5D  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00473A64  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
00473A6B  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
00473A72  66 85 C0                  TEST AX,AX
00473A75  7C 50                     JL 0x00473ac7
00473A77  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00473A7E  66 3B C7                  CMP AX,DI
00473A81  7D 44                     JGE 0x00473ac7
00473A83  66 85 D2                  TEST DX,DX
00473A86  7C 3F                     JL 0x00473ac7
00473A88  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00473A8F  7D 36                     JGE 0x00473ac7
00473A91  66 85 C9                  TEST CX,CX
00473A94  7C 31                     JL 0x00473ac7
00473A96  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00473A9D  7D 28                     JGE 0x00473ac7
00473A9F  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00473AA6  0F BF C9                  MOVSX ECX,CX
00473AA9  0F BF D2                  MOVSX EDX,DX
00473AAC  0F AF CB                  IMUL ECX,EBX
00473AAF  0F BF FF                  MOVSX EDI,DI
00473AB2  0F AF D7                  IMUL EDX,EDI
00473AB5  0F BF C0                  MOVSX EAX,AX
00473AB8  03 CA                     ADD ECX,EDX
00473ABA  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00473AC0  03 C8                     ADD ECX,EAX
00473AC2  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
00473AC5  EB 02                     JMP 0x00473ac9
LAB_00473ac7:
00473AC7  33 C0                     XOR EAX,EAX
LAB_00473ac9:
00473AC9  8B 80 ED 01 00 00         MOV EAX,dword ptr [EAX + 0x1ed]
00473ACF  8B 8E ED 01 00 00         MOV ECX,dword ptr [ESI + 0x1ed]
00473AD5  50                        PUSH EAX
00473AD6  51                        PUSH ECX
00473AD7  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00473ADD  E8 FE 68 27 00            CALL 0x006ea3e0
00473AE2  66 8B 86 8C 05 00 00      MOV AX,word ptr [ESI + 0x58c]
00473AE9  66 8B 8E 8A 05 00 00      MOV CX,word ptr [ESI + 0x58a]
00473AF0  66 69 C0 C8 00            IMUL AX,AX,0xc8
00473AF5  66 69 C9 C9 00            IMUL CX,CX,0xc9
00473AFA  83 C0 64                  ADD EAX,0x64
00473AFD  8B 16                     MOV EDX,dword ptr [ESI]
00473AFF  50                        PUSH EAX
00473B00  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00473B07  66 69 C0 C9 00            IMUL AX,AX,0xc9
00473B0C  83 C1 64                  ADD ECX,0x64
00473B0F  83 C0 64                  ADD EAX,0x64
00473B12  51                        PUSH ECX
00473B13  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00473B17  50                        PUSH EAX
00473B18  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00473B1C  51                        PUSH ECX
00473B1D  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00473B21  50                        PUSH EAX
00473B22  51                        PUSH ECX
00473B23  8B CE                     MOV ECX,ESI
00473B25  FF 52 10                  CALL dword ptr [EDX + 0x10]
00473B28  66 89 86 9E 05 00 00      MOV word ptr [ESI + 0x59e],AX
00473B2F  C7 86 9A 05 00 00 01 00 00 00  MOV dword ptr [ESI + 0x59a],0x1
LAB_00473b39:
00473B39  83 BE 9A 05 00 00 01      CMP dword ptr [ESI + 0x59a],0x1
00473B40  75 77                     JNZ 0x00473bb9
00473B42  66 8B 96 9E 05 00 00      MOV DX,word ptr [ESI + 0x59e]
00473B49  8B CE                     MOV ECX,ESI
00473B4B  52                        PUSH EDX
00473B4C  E8 61 F5 F8 FF            CALL 0x004030b2
00473B51  50                        PUSH EAX
00473B52  8B CE                     MOV ECX,ESI
00473B54  E8 A3 E7 F8 FF            CALL 0x004022fc
00473B59  83 F8 FF                  CMP EAX,-0x1
00473B5C  74 2A                     JZ 0x00473b88
00473B5E  85 C0                     TEST EAX,EAX
00473B60  75 57                     JNZ 0x00473bb9
00473B62  C7 86 9A 05 00 00 02 00 00 00  MOV dword ptr [ESI + 0x59a],0x2
LAB_00473b6c:
00473B6C  8B 06                     MOV EAX,dword ptr [ESI]
00473B6E  8B CE                     MOV ECX,ESI
00473B70  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00473B76  F7 D8                     NEG EAX
00473B78  1B C0                     SBB EAX,EAX
00473B7A  24 FD                     AND AL,0xfd
00473B7C  83 C0 02                  ADD EAX,0x2
00473B7F  5F                        POP EDI
00473B80  5E                        POP ESI
00473B81  5B                        POP EBX
00473B82  8B E5                     MOV ESP,EBP
00473B84  5D                        POP EBP
00473B85  C2 04 00                  RET 0x4
LAB_00473b88:
00473B88  68 10 AE 7A 00            PUSH 0x7aae10
00473B8D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00473B92  6A 00                     PUSH 0x0
00473B94  6A 00                     PUSH 0x0
00473B96  68 7D 2E 00 00            PUSH 0x2e7d
00473B9B  68 3C 9D 7A 00            PUSH 0x7a9d3c
00473BA0  E8 2B 99 23 00            CALL 0x006ad4d0
00473BA5  83 C4 18                  ADD ESP,0x18
00473BA8  85 C0                     TEST EAX,EAX
00473BAA  74 01                     JZ 0x00473bad
00473BAC  CC                        INT3
LAB_00473bad:
00473BAD  83 C8 FF                  OR EAX,0xffffffff
00473BB0  5F                        POP EDI
00473BB1  5E                        POP ESI
00473BB2  5B                        POP EBX
00473BB3  8B E5                     MOV ESP,EBP
00473BB5  5D                        POP EBP
00473BB6  C2 04 00                  RET 0x4
LAB_00473bb9:
00473BB9  83 BE 9A 05 00 00 02      CMP dword ptr [ESI + 0x59a],0x2
00473BC0  75 54                     JNZ 0x00473c16
00473BC2  8A 4E 61                  MOV CL,byte ptr [ESI + 0x61]
00473BC5  66 8B 96 8C 05 00 00      MOV DX,word ptr [ESI + 0x58c]
00473BCC  66 8B 86 8A 05 00 00      MOV AX,word ptr [ESI + 0x58a]
00473BD3  51                        PUSH ECX
00473BD4  66 8B 8E 88 05 00 00      MOV CX,word ptr [ESI + 0x588]
00473BDB  66 69 D2 C8 00            IMUL DX,DX,0xc8
00473BE0  66 69 C0 C9 00            IMUL AX,AX,0xc9
00473BE5  66 69 C9 C9 00            IMUL CX,CX,0xc9
00473BEA  83 C2 64                  ADD EDX,0x64
00473BED  83 C0 64                  ADD EAX,0x64
00473BF0  52                        PUSH EDX
00473BF1  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00473BF5  83 C1 64                  ADD ECX,0x64
00473BF8  50                        PUSH EAX
00473BF9  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00473BFD  51                        PUSH ECX
00473BFE  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00473C02  52                        PUSH EDX
00473C03  50                        PUSH EAX
00473C04  51                        PUSH ECX
00473C05  8B CE                     MOV ECX,ESI
00473C07  E8 49 E8 F8 FF            CALL 0x00402455
00473C0C  C7 86 9A 05 00 00 03 00 00 00  MOV dword ptr [ESI + 0x59a],0x3
LAB_00473c16:
00473C16  8B 86 9A 05 00 00         MOV EAX,dword ptr [ESI + 0x59a]
00473C1C  BF 06 00 00 00            MOV EDI,0x6
00473C21  83 F8 03                  CMP EAX,0x3
00473C24  0F 85 EE 01 00 00         JNZ 0x00473e18
00473C2A  8D 55 DC                  LEA EDX,[EBP + -0x24]
00473C2D  8D 45 D8                  LEA EAX,[EBP + -0x28]
00473C30  52                        PUSH EDX
00473C31  50                        PUSH EAX
00473C32  8B CE                     MOV ECX,ESI
00473C34  E8 0E EC F8 FF            CALL 0x00402847
00473C39  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00473C3F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00473C42  84 C9                     TEST CL,CL
00473C44  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
00473C4B  0F 86 B0 01 00 00         JBE 0x00473e01
00473C51  8D 8E B3 02 00 00         LEA ECX,[ESI + 0x2b3]
00473C57  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
LAB_00473c5a:
00473C5A  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
00473C5E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00473C61  52                        PUSH EDX
00473C62  8B 10                     MOV EDX,dword ptr [EAX]
00473C64  83 EC 08                  SUB ESP,0x8
00473C67  8B CC                     MOV ECX,ESP
00473C69  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00473C6D  89 11                     MOV dword ptr [ECX],EDX
00473C6F  66 89 41 04               MOV word ptr [ECX + 0x4],AX
00473C73  8D 4D C4                  LEA ECX,[EBP + -0x3c]
00473C76  51                        PUSH ECX
00473C77  8B CE                     MOV ECX,ESI
00473C79  E8 AE F7 F8 FF            CALL 0x0040342c
00473C7E  8B 10                     MOV EDX,dword ptr [EAX]
00473C80  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
00473C83  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
00473C87  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
00473C8B  A1 2C 73 80 00            MOV EAX,[0x0080732c]
00473C90  83 F8 01                  CMP EAX,0x1
00473C93  0F 85 98 00 00 00         JNZ 0x00473d31
00473C99  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00473C9C  6A 00                     PUSH 0x0
00473C9E  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00473CA4  6A 00                     PUSH 0x0
00473CA6  6A FF                     PUSH -0x1
00473CA8  8D B9 39 30 00 00         LEA EDI,[ECX + 0x3039]
00473CAE  6A 00                     PUSH 0x0
00473CB0  8B D7                     MOV EDX,EDI
00473CB2  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00473CB5  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00473CBB  6A 00                     PUSH 0x0
00473CBD  6A 00                     PUSH 0x0
00473CBF  8D 9A 39 30 00 00         LEA EBX,[EDX + 0x3039]
00473CC5  6A 00                     PUSH 0x0
00473CC7  8B C3                     MOV EAX,EBX
00473CC9  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
00473CCC  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00473CD2  05 39 30 00 00            ADD EAX,0x3039
00473CD7  6A 00                     PUSH 0x0
00473CD9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00473CDC  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
00473CDF  D9 46 70                  FLD float ptr [ESI + 0x70]
00473CE2  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
00473CE8  6A 00                     PUSH 0x0
00473CEA  E8 99 A5 2B 00            CALL 0x0072e288
00473CEF  0F BF C8                  MOVSX ECX,AX
00473CF2  8B C7                     MOV EAX,EDI
00473CF4  33 D2                     XOR EDX,EDX
00473CF6  C1 E8 10                  SHR EAX,0x10
00473CF9  BF 07 00 00 00            MOV EDI,0x7
00473CFE  F7 F7                     DIV EDI
00473D00  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00473D04  03 CA                     ADD ECX,EDX
00473D06  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
00473D0A  03 CA                     ADD ECX,EDX
00473D0C  33 D2                     XOR EDX,EDX
00473D0E  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
00473D12  8B C3                     MOV EAX,EBX
00473D14  51                        PUSH ECX
00473D15  8B CF                     MOV ECX,EDI
00473D17  C1 E8 10                  SHR EAX,0x10
00473D1A  F7 F1                     DIV ECX
00473D1C  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00473D20  0F BF 4D CE               MOVSX ECX,word ptr [EBP + -0x32]
00473D24  03 D0                     ADD EDX,EAX
00473D26  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
00473D29  2B D1                     SUB EDX,ECX
00473D2B  83 EA 03                  SUB EDX,0x3
00473D2E  52                        PUSH EDX
00473D2F  EB 7D                     JMP 0x00473dae
LAB_00473d31:
00473D31  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00473D34  BB 07 00 00 00            MOV EBX,0x7
00473D39  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00473D3F  05 39 30 00 00            ADD EAX,0x3039
00473D44  6A 00                     PUSH 0x0
00473D46  8B C8                     MOV ECX,EAX
00473D48  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
00473D4B  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00473D51  81 C1 39 30 00 00         ADD ECX,0x3039
00473D57  6A 00                     PUSH 0x0
00473D59  8B D1                     MOV EDX,ECX
00473D5B  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
00473D5E  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00473D64  C1 E8 10                  SHR EAX,0x10
00473D67  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
00473D6D  33 D2                     XOR EDX,EDX
00473D6F  F7 F3                     DIV EBX
00473D71  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00473D74  6A FF                     PUSH -0x1
00473D76  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00473D7A  6A 00                     PUSH 0x0
00473D7C  6A 00                     PUSH 0x0
00473D7E  6A 00                     PUSH 0x0
00473D80  6A 00                     PUSH 0x0
00473D82  6A 00                     PUSH 0x0
00473D84  6A 00                     PUSH 0x0
00473D86  03 D0                     ADD EDX,EAX
00473D88  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
00473D8C  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
00473D90  8B C1                     MOV EAX,ECX
00473D92  52                        PUSH EDX
00473D93  33 D2                     XOR EDX,EDX
00473D95  C1 E8 10                  SHR EAX,0x10
00473D98  8B CB                     MOV ECX,EBX
00473D9A  F7 F1                     DIV ECX
00473D9C  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00473DA0  0F BF 4D CE               MOVSX ECX,word ptr [EBP + -0x32]
00473DA4  03 D0                     ADD EDX,EAX
00473DA6  8B C7                     MOV EAX,EDI
00473DA8  2B D1                     SUB EDX,ECX
00473DAA  83 EA 03                  SUB EDX,0x3
00473DAD  52                        PUSH EDX
LAB_00473dae:
00473DAE  C1 E8 10                  SHR EAX,0x10
00473DB1  33 D2                     XOR EDX,EDX
00473DB3  B9 07 00 00 00            MOV ECX,0x7
00473DB8  F7 F1                     DIV ECX
00473DBA  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00473DBE  0F BF 4D CC               MOVSX ECX,word ptr [EBP + -0x34]
00473DC2  03 D0                     ADD EDX,EAX
00473DC4  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
00473DC8  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00473DCE  52                        PUSH EDX
00473DCF  6A 07                     PUSH 0x7
00473DD1  6A 02                     PUSH 0x2
00473DD3  6A 01                     PUSH 0x1
00473DD5  E8 59 D6 F8 FF            CALL 0x00401433
00473DDA  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
00473DDD  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00473DE0  33 C9                     XOR ECX,ECX
00473DE2  BF 06 00 00 00            MOV EDI,0x6
00473DE7  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00473DED  40                        INC EAX
00473DEE  03 DF                     ADD EBX,EDI
00473DF0  3B C1                     CMP EAX,ECX
00473DF2  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00473DF5  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00473DF8  0F 8C 5C FE FF FF         JL 0x00473c5a
00473DFE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_00473e01:
00473E01  83 F8 FF                  CMP EAX,-0x1
00473E04  0F 84 96 00 00 00         JZ 0x00473ea0
00473E0A  85 C0                     TEST EAX,EAX
00473E0C  75 0A                     JNZ 0x00473e18
00473E0E  C7 86 9A 05 00 00 04 00 00 00  MOV dword ptr [ESI + 0x59a],0x4
LAB_00473e18:
00473E18  8B 86 9A 05 00 00         MOV EAX,dword ptr [ESI + 0x59a]
00473E1E  83 F8 04                  CMP EAX,0x4
00473E21  0F 85 B5 01 00 00         JNZ 0x00473fdc
00473E27  66 83 7E 6E 2F            CMP word ptr [ESI + 0x6e],0x2f
00473E2C  0F 85 AA 01 00 00         JNZ 0x00473fdc
00473E32  66 8B 86 88 05 00 00      MOV AX,word ptr [ESI + 0x588]
00473E39  66 8B 8E 8C 05 00 00      MOV CX,word ptr [ESI + 0x58c]
00473E40  66 8B 96 8A 05 00 00      MOV DX,word ptr [ESI + 0x58a]
00473E47  66 85 C0                  TEST AX,AX
00473E4A  0F 8C 81 00 00 00         JL 0x00473ed1
00473E50  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00473E57  66 3B C7                  CMP AX,DI
00473E5A  7D 75                     JGE 0x00473ed1
00473E5C  66 85 D2                  TEST DX,DX
00473E5F  7C 70                     JL 0x00473ed1
00473E61  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
00473E68  7D 67                     JGE 0x00473ed1
00473E6A  66 85 C9                  TEST CX,CX
00473E6D  7C 62                     JL 0x00473ed1
00473E6F  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
00473E76  7D 59                     JGE 0x00473ed1
00473E78  0F BF 1D 46 B2 7F 00      MOVSX EBX,word ptr [0x007fb246]
00473E7F  0F BF C9                  MOVSX ECX,CX
00473E82  0F BF D2                  MOVSX EDX,DX
00473E85  0F AF CB                  IMUL ECX,EBX
00473E88  0F BF FF                  MOVSX EDI,DI
00473E8B  0F AF D7                  IMUL EDX,EDI
00473E8E  0F BF C0                  MOVSX EAX,AX
00473E91  03 CA                     ADD ECX,EDX
00473E93  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00473E99  03 C8                     ADD ECX,EAX
00473E9B  8B 0C CA                  MOV ECX,dword ptr [EDX + ECX*0x8]
00473E9E  EB 33                     JMP 0x00473ed3
LAB_00473ea0:
00473EA0  68 D8 AD 7A 00            PUSH 0x7aadd8
00473EA5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00473EAA  6A 00                     PUSH 0x0
00473EAC  6A 00                     PUSH 0x0
00473EAE  68 A3 2E 00 00            PUSH 0x2ea3
00473EB3  68 3C 9D 7A 00            PUSH 0x7a9d3c
00473EB8  E8 13 96 23 00            CALL 0x006ad4d0
00473EBD  83 C4 18                  ADD ESP,0x18
00473EC0  85 C0                     TEST EAX,EAX
00473EC2  74 01                     JZ 0x00473ec5
00473EC4  CC                        INT3
LAB_00473ec5:
00473EC5  83 C8 FF                  OR EAX,0xffffffff
00473EC8  5F                        POP EDI
00473EC9  5E                        POP ESI
00473ECA  5B                        POP EBX
00473ECB  8B E5                     MOV ESP,EBP
00473ECD  5D                        POP EBP
00473ECE  C2 04 00                  RET 0x4
LAB_00473ed1:
00473ED1  33 C9                     XOR ECX,ECX
LAB_00473ed3:
00473ED3  85 C9                     TEST ECX,ECX
00473ED5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00473ED8  0F 84 CE 00 00 00         JZ 0x00473fac
00473EDE  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
00473EE1  8B 96 8E 05 00 00         MOV EDX,dword ptr [ESI + 0x58e]
00473EE7  3B C2                     CMP EAX,EDX
00473EE9  0F 85 BD 00 00 00         JNZ 0x00473fac
00473EEF  8B 11                     MOV EDX,dword ptr [ECX]
00473EF1  FF 92 A4 00 00 00         CALL dword ptr [EDX + 0xa4]
00473EF7  83 F8 01                  CMP EAX,0x1
00473EFA  0F 84 AC 00 00 00         JZ 0x00473fac
00473F00  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00473F03  8B 01                     MOV EAX,dword ptr [ECX]
00473F05  FF 90 C0 00 00 00         CALL dword ptr [EAX + 0xc0]
00473F0B  83 F8 01                  CMP EAX,0x1
00473F0E  0F 84 98 00 00 00         JZ 0x00473fac
00473F14  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00473F17  8B 11                     MOV EDX,dword ptr [ECX]
00473F19  FF 92 B4 00 00 00         CALL dword ptr [EDX + 0xb4]
00473F1F  8B 86 8E 05 00 00         MOV EAX,dword ptr [ESI + 0x58e]
00473F25  8B CE                     MOV ECX,ESI
00473F27  89 86 CA 07 00 00         MOV dword ptr [ESI + 0x7ca],EAX
00473F2D  C7 86 CE 07 00 00 00 00 00 00  MOV dword ptr [ESI + 0x7ce],0x0
00473F37  E8 10 07 F9 FF            CALL 0x0040464c
00473F3C  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00473F3F  66 8B 56 5F               MOV DX,word ptr [ESI + 0x5f]
00473F43  66 8B 46 5D               MOV AX,word ptr [ESI + 0x5d]
00473F47  51                        PUSH ECX
00473F48  66 8B 4E 5B               MOV CX,word ptr [ESI + 0x5b]
00473F4C  56                        PUSH ESI
00473F4D  6A 00                     PUSH 0x0
00473F4F  52                        PUSH EDX
00473F50  50                        PUSH EAX
00473F51  51                        PUSH ECX
00473F52  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00473F58  E8 64 0F F9 FF            CALL 0x00404ec1
00473F5D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
00473F60  66 8B 86 8C 05 00 00      MOV AX,word ptr [ESI + 0x58c]
00473F67  66 8B 8E 8A 05 00 00      MOV CX,word ptr [ESI + 0x58a]
00473F6E  52                        PUSH EDX
00473F6F  66 8B 96 88 05 00 00      MOV DX,word ptr [ESI + 0x588]
00473F76  56                        PUSH ESI
00473F77  6A 00                     PUSH 0x0
00473F79  50                        PUSH EAX
00473F7A  51                        PUSH ECX
00473F7B  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
00473F81  52                        PUSH EDX
00473F82  E8 9E D3 F8 FF            CALL 0x00401325
00473F87  8B 86 0A 07 00 00         MOV EAX,dword ptr [ESI + 0x70a]
00473F8D  8B CE                     MOV ECX,ESI
00473F8F  50                        PUSH EAX
00473F90  E8 0C E4 F8 FF            CALL 0x004023a1
00473F95  8B 16                     MOV EDX,dword ptr [ESI]
00473F97  8B CE                     MOV ECX,ESI
00473F99  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00473F9F  F7 D8                     NEG EAX
00473FA1  1B C0                     SBB EAX,EAX
00473FA3  5F                        POP EDI
00473FA4  5E                        POP ESI
00473FA5  5B                        POP EBX
00473FA6  8B E5                     MOV ESP,EBP
00473FA8  5D                        POP EBP
00473FA9  C2 04 00                  RET 0x4
LAB_00473fac:
00473FAC  8B CE                     MOV ECX,ESI
00473FAE  E8 17 E8 F8 FF            CALL 0x004027ca
00473FB3  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00473FB8  8D 55 D4                  LEA EDX,[EBP + -0x2c]
00473FBB  52                        PUSH EDX
00473FBC  6A 03                     PUSH 0x3
00473FBE  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00473FC4  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00473FC7  8B CE                     MOV ECX,ESI
00473FC9  E8 58 E1 F8 FF            CALL 0x00402126
switchD_004734db::caseD_2:
00473FCE  B8 02 00 00 00            MOV EAX,0x2
00473FD3  5F                        POP EDI
00473FD4  5E                        POP ESI
00473FD5  5B                        POP EBX
00473FD6  8B E5                     MOV ESP,EBP
00473FD8  5D                        POP EBP
00473FD9  C2 04 00                  RET 0x4
LAB_00473fdc:
00473FDC  83 F8 05                  CMP EAX,0x5
00473FDF  75 4A                     JNZ 0x0047402b
00473FE1  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
00473FE5  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
00473FE9  66 69 C9 C8 00            IMUL CX,CX,0xc8
00473FEE  66 69 D2 C9 00            IMUL DX,DX,0xc9
00473FF3  83 C1 64                  ADD ECX,0x64
00473FF6  8B 06                     MOV EAX,dword ptr [ESI]
00473FF8  51                        PUSH ECX
00473FF9  66 8B 4E 5B               MOV CX,word ptr [ESI + 0x5b]
00473FFD  66 69 C9 C9 00            IMUL CX,CX,0xc9
00474002  83 C2 64                  ADD EDX,0x64
00474005  83 C1 64                  ADD ECX,0x64
00474008  52                        PUSH EDX
00474009  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
0047400D  51                        PUSH ECX
0047400E  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00474012  52                        PUSH EDX
00474013  66 8B 56 41               MOV DX,word ptr [ESI + 0x41]
00474017  51                        PUSH ECX
00474018  52                        PUSH EDX
00474019  8B CE                     MOV ECX,ESI
0047401B  FF 50 10                  CALL dword ptr [EAX + 0x10]
0047401E  66 89 86 9E 05 00 00      MOV word ptr [ESI + 0x59e],AX
00474025  89 BE 9A 05 00 00         MOV dword ptr [ESI + 0x59a],EDI
LAB_0047402b:
0047402B  39 BE 9A 05 00 00         CMP dword ptr [ESI + 0x59a],EDI
00474031  75 77                     JNZ 0x004740aa
00474033  66 8B 86 9E 05 00 00      MOV AX,word ptr [ESI + 0x59e]
0047403A  8B CE                     MOV ECX,ESI
0047403C  50                        PUSH EAX
0047403D  E8 70 F0 F8 FF            CALL 0x004030b2
00474042  50                        PUSH EAX
00474043  8B CE                     MOV ECX,ESI
00474045  E8 B2 E2 F8 FF            CALL 0x004022fc
0047404A  83 F8 FF                  CMP EAX,-0x1
0047404D  74 2A                     JZ 0x00474079
0047404F  85 C0                     TEST EAX,EAX
00474051  75 57                     JNZ 0x004740aa
00474053  C7 86 9A 05 00 00 07 00 00 00  MOV dword ptr [ESI + 0x59a],0x7
LAB_0047405d:
0047405D  8B 16                     MOV EDX,dword ptr [ESI]
0047405F  8B CE                     MOV ECX,ESI
00474061  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00474067  F7 D8                     NEG EAX
00474069  1B C0                     SBB EAX,EAX
0047406B  24 FD                     AND AL,0xfd
0047406D  83 C0 02                  ADD EAX,0x2
00474070  5F                        POP EDI
00474071  5E                        POP ESI
00474072  5B                        POP EBX
00474073  8B E5                     MOV ESP,EBP
00474075  5D                        POP EBP
00474076  C2 04 00                  RET 0x4
LAB_00474079:
00474079  68 A0 AD 7A 00            PUSH 0x7aada0
0047407E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00474083  6A 00                     PUSH 0x0
00474085  6A 00                     PUSH 0x0
00474087  68 D4 2E 00 00            PUSH 0x2ed4
0047408C  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474091  E8 3A 94 23 00            CALL 0x006ad4d0
00474096  83 C4 18                  ADD ESP,0x18
00474099  85 C0                     TEST EAX,EAX
0047409B  74 01                     JZ 0x0047409e
0047409D  CC                        INT3
LAB_0047409e:
0047409E  83 C8 FF                  OR EAX,0xffffffff
004740A1  5F                        POP EDI
004740A2  5E                        POP ESI
004740A3  5B                        POP EBX
004740A4  8B E5                     MOV ESP,EBP
004740A6  5D                        POP EBP
004740A7  C2 04 00                  RET 0x4
LAB_004740aa:
004740AA  8B 86 9A 05 00 00         MOV EAX,dword ptr [ESI + 0x59a]
004740B0  BF 08 00 00 00            MOV EDI,0x8
004740B5  83 F8 07                  CMP EAX,0x7
004740B8  75 47                     JNZ 0x00474101
004740BA  8A 46 61                  MOV AL,byte ptr [ESI + 0x61]
004740BD  66 8B 4E 5F               MOV CX,word ptr [ESI + 0x5f]
004740C1  66 8B 56 5D               MOV DX,word ptr [ESI + 0x5d]
004740C5  50                        PUSH EAX
004740C6  66 8B 46 5B               MOV AX,word ptr [ESI + 0x5b]
004740CA  66 69 C9 C8 00            IMUL CX,CX,0xc8
004740CF  66 69 D2 C9 00            IMUL DX,DX,0xc9
004740D4  66 69 C0 C9 00            IMUL AX,AX,0xc9
004740D9  83 C1 64                  ADD ECX,0x64
004740DC  83 C2 64                  ADD EDX,0x64
004740DF  51                        PUSH ECX
004740E0  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
004740E4  83 C0 64                  ADD EAX,0x64
004740E7  52                        PUSH EDX
004740E8  66 8B 56 43               MOV DX,word ptr [ESI + 0x43]
004740EC  50                        PUSH EAX
004740ED  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
004740F1  51                        PUSH ECX
004740F2  52                        PUSH EDX
004740F3  50                        PUSH EAX
004740F4  8B CE                     MOV ECX,ESI
004740F6  E8 5A E3 F8 FF            CALL 0x00402455
004740FB  89 BE 9A 05 00 00         MOV dword ptr [ESI + 0x59a],EDI
LAB_00474101:
00474101  39 BE 9A 05 00 00         CMP dword ptr [ESI + 0x59a],EDI
00474107  0F 85 34 02 00 00         JNZ 0x00474341
0047410D  8D 4D D8                  LEA ECX,[EBP + -0x28]
00474110  8D 55 DC                  LEA EDX,[EBP + -0x24]
00474113  51                        PUSH ECX
00474114  52                        PUSH EDX
00474115  8B CE                     MOV ECX,ESI
00474117  E8 2B E7 F8 FF            CALL 0x00402847
0047411C  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00474122  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00474125  84 C9                     TEST CL,CL
00474127  C7 45 E8 00 00 00 00      MOV dword ptr [EBP + -0x18],0x0
0047412E  0F 86 AA 01 00 00         JBE 0x004742de
00474134  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047413A  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0047413d:
0047413D  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00474141  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00474144  51                        PUSH ECX
00474145  8B 0A                     MOV ECX,dword ptr [EDX]
00474147  83 EC 08                  SUB ESP,0x8
0047414A  8B C4                     MOV EAX,ESP
0047414C  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
00474150  89 08                     MOV dword ptr [EAX],ECX
00474152  8B CE                     MOV ECX,ESI
00474154  66 89 50 04               MOV word ptr [EAX + 0x4],DX
00474158  8D 45 C4                  LEA EAX,[EBP + -0x3c]
0047415B  50                        PUSH EAX
0047415C  E8 CB F2 F8 FF            CALL 0x0040342c
00474161  8B 08                     MOV ECX,dword ptr [EAX]
00474163  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
00474166  66 8B 50 04               MOV DX,word ptr [EAX + 0x4]
0047416A  A1 2C 73 80 00            MOV EAX,[0x0080732c]
0047416F  83 F8 01                  CMP EAX,0x1
00474172  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00474175  66 89 55 D0               MOV word ptr [EBP + -0x30],DX
00474179  0F 85 96 00 00 00         JNZ 0x00474215
0047417F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
00474185  6A 00                     PUSH 0x0
00474187  6A 00                     PUSH 0x0
00474189  8D B8 39 30 00 00         LEA EDI,[EAX + 0x3039]
0047418F  6A FF                     PUSH -0x1
00474191  8B CF                     MOV ECX,EDI
00474193  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00474196  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0047419C  6A 00                     PUSH 0x0
0047419E  6A 00                     PUSH 0x0
004741A0  8D 99 39 30 00 00         LEA EBX,[ECX + 0x3039]
004741A6  6A 00                     PUSH 0x0
004741A8  8B D3                     MOV EDX,EBX
004741AA  89 5E 1C                  MOV dword ptr [ESI + 0x1c],EBX
004741AD  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004741B3  6A 00                     PUSH 0x0
004741B5  6A 00                     PUSH 0x0
004741B7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
004741BD  6A 00                     PUSH 0x0
004741BF  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004741C2  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
004741C5  D9 46 70                  FLD float ptr [ESI + 0x70]
004741C8  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004741CE  E8 B5 A0 2B 00            CALL 0x0072e288
004741D3  0F BF C8                  MOVSX ECX,AX
004741D6  8B C7                     MOV EAX,EDI
004741D8  33 D2                     XOR EDX,EDX
004741DA  C1 E8 10                  SHR EAX,0x10
004741DD  BF 07 00 00 00            MOV EDI,0x7
004741E2  F7 F7                     DIV EDI
004741E4  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
004741E8  03 CA                     ADD ECX,EDX
004741EA  0F BF 56 45               MOVSX EDX,word ptr [ESI + 0x45]
004741EE  03 CA                     ADD ECX,EDX
004741F0  33 D2                     XOR EDX,EDX
004741F2  8D 4C 01 FD               LEA ECX,[ECX + EAX*0x1 + -0x3]
004741F6  8B C3                     MOV EAX,EBX
004741F8  51                        PUSH ECX
004741F9  8B CF                     MOV ECX,EDI
004741FB  C1 E8 10                  SHR EAX,0x10
004741FE  F7 F1                     DIV ECX
00474200  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00474204  0F BF 4D CE               MOVSX ECX,word ptr [EBP + -0x32]
00474208  03 D0                     ADD EDX,EAX
0047420A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0047420D  2B D1                     SUB EDX,ECX
0047420F  83 EA 03                  SUB EDX,0x3
00474212  52                        PUSH EDX
00474213  EB 7A                     JMP 0x0047428f
LAB_00474215:
00474215  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0047421B  05 39 30 00 00            ADD EAX,0x3039
00474220  BB 07 00 00 00            MOV EBX,0x7
00474225  8B C8                     MOV ECX,EAX
00474227  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047422A  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
00474230  81 C1 39 30 00 00         ADD ECX,0x3039
00474236  6A 00                     PUSH 0x0
00474238  8B D1                     MOV EDX,ECX
0047423A  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
0047423D  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
00474243  C1 E8 10                  SHR EAX,0x10
00474246  8D BA 39 30 00 00         LEA EDI,[EDX + 0x3039]
0047424C  33 D2                     XOR EDX,EDX
0047424E  F7 F3                     DIV EBX
00474250  89 7E 1C                  MOV dword ptr [ESI + 0x1c],EDI
00474253  6A 00                     PUSH 0x0
00474255  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
00474259  6A FF                     PUSH -0x1
0047425B  6A 00                     PUSH 0x0
0047425D  6A 00                     PUSH 0x0
0047425F  6A 00                     PUSH 0x0
00474261  6A 00                     PUSH 0x0
00474263  6A 00                     PUSH 0x0
00474265  6A 00                     PUSH 0x0
00474267  03 D0                     ADD EDX,EAX
00474269  0F BF 45 D0               MOVSX EAX,word ptr [EBP + -0x30]
0047426D  8D 54 02 FD               LEA EDX,[EDX + EAX*0x1 + -0x3]
00474271  8B C1                     MOV EAX,ECX
00474273  52                        PUSH EDX
00474274  33 D2                     XOR EDX,EDX
00474276  C1 E8 10                  SHR EAX,0x10
00474279  8B CB                     MOV ECX,EBX
0047427B  F7 F1                     DIV ECX
0047427D  0F BF 46 43               MOVSX EAX,word ptr [ESI + 0x43]
00474281  0F BF 4D CE               MOVSX ECX,word ptr [EBP + -0x32]
00474285  03 D0                     ADD EDX,EAX
00474287  8B C7                     MOV EAX,EDI
00474289  2B D1                     SUB EDX,ECX
0047428B  83 EA 03                  SUB EDX,0x3
0047428E  52                        PUSH EDX
LAB_0047428f:
0047428F  C1 E8 10                  SHR EAX,0x10
00474292  33 D2                     XOR EDX,EDX
00474294  B9 07 00 00 00            MOV ECX,0x7
00474299  F7 F1                     DIV ECX
0047429B  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047429F  0F BF 4D CC               MOVSX ECX,word ptr [EBP + -0x34]
004742A3  03 D0                     ADD EDX,EAX
004742A5  8D 54 0A FD               LEA EDX,[EDX + ECX*0x1 + -0x3]
004742A9  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
004742AF  52                        PUSH EDX
004742B0  6A 07                     PUSH 0x7
004742B2  6A 02                     PUSH 0x2
004742B4  6A 01                     PUSH 0x1
004742B6  E8 78 D1 F8 FF            CALL 0x00401433
004742BB  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
004742BE  8B 7D E4                  MOV EDI,dword ptr [EBP + -0x1c]
004742C1  33 C9                     XOR ECX,ECX
004742C3  40                        INC EAX
004742C4  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
004742CA  83 C7 06                  ADD EDI,0x6
004742CD  3B C1                     CMP EAX,ECX
004742CF  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004742D2  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004742D5  0F 8C 62 FE FF FF         JL 0x0047413d
004742DB  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
LAB_004742de:
004742DE  83 F8 FF                  CMP EAX,-0x1
004742E1  74 2D                     JZ 0x00474310
004742E3  85 C0                     TEST EAX,EAX
004742E5  75 5A                     JNZ 0x00474341
004742E7  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
004742ED  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
004742F3  52                        PUSH EDX
004742F4  E8 F7 5F 27 00            CALL 0x006ea2f0
004742F9  8B 06                     MOV EAX,dword ptr [ESI]
004742FB  8B CE                     MOV ECX,ESI
004742FD  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
00474303  F7 D8                     NEG EAX
00474305  1B C0                     SBB EAX,EAX
00474307  5F                        POP EDI
00474308  5E                        POP ESI
00474309  5B                        POP EBX
0047430A  8B E5                     MOV ESP,EBP
0047430C  5D                        POP EBP
0047430D  C2 04 00                  RET 0x4
LAB_00474310:
00474310  68 68 AD 7A 00            PUSH 0x7aad68
00474315  68 CC 4C 7A 00            PUSH 0x7a4ccc
0047431A  6A 00                     PUSH 0x0
0047431C  6A 00                     PUSH 0x0
0047431E  68 FA 2E 00 00            PUSH 0x2efa
00474323  68 3C 9D 7A 00            PUSH 0x7a9d3c
00474328  E8 A3 91 23 00            CALL 0x006ad4d0
0047432D  83 C4 18                  ADD ESP,0x18
00474330  85 C0                     TEST EAX,EAX
00474332  74 01                     JZ 0x00474335
00474334  CC                        INT3
LAB_00474335:
00474335  83 C8 FF                  OR EAX,0xffffffff
00474338  5F                        POP EDI
00474339  5E                        POP ESI
0047433A  5B                        POP EBX
0047433B  8B E5                     MOV ESP,EBP
0047433D  5D                        POP EBP
0047433E  C2 04 00                  RET 0x4
LAB_00474341:
00474341  83 BE 9A 05 00 00 09      CMP dword ptr [ESI + 0x59a],0x9
00474348  0F 85 1E F8 FF FF         JNZ 0x00473b6c
0047434E  8B 16                     MOV EDX,dword ptr [ESI]
00474350  8B CE                     MOV ECX,ESI
00474352  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00474358  F7 D8                     NEG EAX
0047435A  1B C0                     SBB EAX,EAX
0047435C  5F                        POP EDI
0047435D  5E                        POP ESI
0047435E  5B                        POP EBX
0047435F  8B E5                     MOV ESP,EBP
00474361  5D                        POP EBP
00474362  C2 04 00                  RET 0x4
LAB_00474365:
00474365  83 FF FF                  CMP EDI,-0x1
00474368  C7 86 96 05 00 00 00 00 00 00  MOV dword ptr [ESI + 0x596],0x0
00474372  75 10                     JNZ 0x00474384
00474374  0F BF 4D F4               MOVSX ECX,word ptr [EBP + -0xc]
00474378  0F BF 55 F0               MOVSX EDX,word ptr [EBP + -0x10]
0047437C  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
00474380  51                        PUSH ECX
00474381  52                        PUSH EDX
00474382  EB 0B                     JMP 0x0047438f
LAB_00474384:
00474384  0F BF C9                  MOVSX ECX,CX
00474387  0F BF D2                  MOVSX EDX,DX
0047438A  51                        PUSH ECX
0047438B  52                        PUSH EDX
0047438C  0F BF C0                  MOVSX EAX,AX
LAB_0047438f:
0047438F  50                        PUSH EAX
00474390  8B CE                     MOV ECX,ESI
00474392  E8 D4 0B F9 FF            CALL 0x00404f6b
00474397  6A 00                     PUSH 0x0
00474399  8B CE                     MOV ECX,ESI
0047439B  E8 3E EE F8 FF            CALL 0x004031de
004743A0  E9 B8 FC FF FF            JMP 0x0047405d
LAB_004743a5:
004743A5  8B CE                     MOV ECX,ESI
004743A7  E8 1E E4 F8 FF            CALL 0x004027ca
LAB_004743ac:
004743AC  5F                        POP EDI
004743AD  5E                        POP ESI
004743AE  33 C0                     XOR EAX,EAX
004743B0  5B                        POP EBX
004743B1  8B E5                     MOV ESP,EBP
004743B3  5D                        POP EBP
004743B4  C2 04 00                  RET 0x4
