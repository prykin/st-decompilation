FUN_00709470:
00709470  55                        PUSH EBP
00709471  8B EC                     MOV EBP,ESP
00709473  81 EC 10 04 00 00         SUB ESP,0x410
00709479  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070947C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0070947F  53                        PUSH EBX
00709480  56                        PUSH ESI
00709481  33 F6                     XOR ESI,ESI
00709483  57                        PUSH EDI
00709484  3B C6                     CMP EAX,ESI
00709486  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00709489  0F 84 87 00 00 00         JZ 0x00709516
0070948F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709492  BF 00 7D 00 00            MOV EDI,0x7d00
00709497  B9 00 83 FF FF            MOV ECX,0xffff8300
0070949C  3B C6                     CMP EAX,ESI
0070949E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
007094A1  89 7D 10                  MOV dword ptr [EBP + 0x10],EDI
007094A4  8B D9                     MOV EBX,ECX
007094A6  7E 63                     JLE 0x0070950b
007094A8  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
007094AB  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_007094ae:
007094AE  8B 02                     MOV EAX,dword ptr [EDX]
007094B0  85 C0                     TEST EAX,EAX
007094B2  74 42                     JZ 0x007094f6
007094B4  66 8B 70 12               MOV SI,word ptr [EAX + 0x12]
007094B8  66 85 F6                  TEST SI,SI
007094BB  7E 39                     JLE 0x007094f6
007094BD  66 8B 50 14               MOV DX,word ptr [EAX + 0x14]
007094C1  66 85 D2                  TEST DX,DX
007094C4  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007094C7  7E 2D                     JLE 0x007094f6
007094C9  0F BF 50 0E               MOVSX EDX,word ptr [EAX + 0xe]
007094CD  3B FA                     CMP EDI,EDX
007094CF  7E 02                     JLE 0x007094d3
007094D1  8B FA                     MOV EDI,EDX
LAB_007094d3:
007094D3  0F BF F6                  MOVSX ESI,SI
007094D6  03 D6                     ADD EDX,ESI
007094D8  3B CA                     CMP ECX,EDX
007094DA  7D 02                     JGE 0x007094de
007094DC  8B CA                     MOV ECX,EDX
LAB_007094de:
007094DE  0F BF 40 10               MOVSX EAX,word ptr [EAX + 0x10]
007094E2  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
007094E5  7E 03                     JLE 0x007094ea
007094E7  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
LAB_007094ea:
007094EA  0F BF 55 F4               MOVSX EDX,word ptr [EBP + -0xc]
007094EE  03 C2                     ADD EAX,EDX
007094F0  3B D8                     CMP EBX,EAX
007094F2  7D 02                     JGE 0x007094f6
007094F4  8B D8                     MOV EBX,EAX
LAB_007094f6:
007094F6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007094F9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
007094FC  83 C2 04                  ADD EDX,0x4
007094FF  48                        DEC EAX
00709500  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00709503  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00709506  75 A6                     JNZ 0x007094ae
00709508  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0070950b:
0070950B  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070950E  2B CF                     SUB ECX,EDI
00709510  8B F9                     MOV EDI,ECX
00709512  2B D8                     SUB EBX,EAX
00709514  EB 3B                     JMP 0x00709551
LAB_00709516:
00709516  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709519  33 FF                     XOR EDI,EDI
0070951B  33 DB                     XOR EBX,EBX
0070951D  3B C6                     CMP EAX,ESI
0070951F  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00709522  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00709525  7E 2A                     JLE 0x00709551
00709527  8B CA                     MOV ECX,EDX
00709529  8B F0                     MOV ESI,EAX
LAB_0070952b:
0070952B  8B 01                     MOV EAX,dword ptr [ECX]
0070952D  85 C0                     TEST EAX,EAX
0070952F  74 1A                     JZ 0x0070954b
00709531  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
00709534  85 D2                     TEST EDX,EDX
00709536  7E 13                     JLE 0x0070954b
00709538  8B 40 08                  MOV EAX,dword ptr [EAX + 0x8]
0070953B  85 C0                     TEST EAX,EAX
0070953D  7E 0C                     JLE 0x0070954b
0070953F  3B FA                     CMP EDI,EDX
00709541  7D 02                     JGE 0x00709545
00709543  8B FA                     MOV EDI,EDX
LAB_00709545:
00709545  3B D8                     CMP EBX,EAX
00709547  7D 02                     JGE 0x0070954b
00709549  8B D8                     MOV EBX,EAX
LAB_0070954b:
0070954B  83 C1 04                  ADD ECX,0x4
0070954E  4E                        DEC ESI
0070954F  75 DA                     JNZ 0x0070952b
LAB_00709551:
00709551  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00709554  68 00 01 00 00            PUSH 0x100
00709559  8D 85 F0 FB FF FF         LEA EAX,[EBP + 0xfffffbf0]
0070955F  6A 00                     PUSH 0x0
00709561  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
00709564  50                        PUSH EAX
00709565  52                        PUSH EDX
00709566  E8 35 76 FA FF            CALL 0x006b0ba0
0070956B  8D 85 F2 FB FF FF         LEA EAX,[EBP + 0xfffffbf2]
00709571  BE 00 01 00 00            MOV ESI,0x100
LAB_00709576:
00709576  8A 10                     MOV DL,byte ptr [EAX]
00709578  33 C9                     XOR ECX,ECX
0070957A  8A 48 FE                  MOV CL,byte ptr [EAX + -0x2]
0070957D  88 50 FE                  MOV byte ptr [EAX + -0x2],DL
00709580  88 08                     MOV byte ptr [EAX],CL
00709582  83 C0 04                  ADD EAX,0x4
00709585  4E                        DEC ESI
00709586  75 EE                     JNZ 0x00709576
00709588  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070958B  8D 0C 47                  LEA ECX,[EDI + EAX*0x2]
0070958E  85 C9                     TEST ECX,ECX
00709590  0F 8E C3 00 00 00         JLE 0x00709659
00709596  8D 04 43                  LEA EAX,[EBX + EAX*0x2]
00709599  85 C0                     TEST EAX,EAX
0070959B  0F 8E B8 00 00 00         JLE 0x00709659
007095A1  8D 95 F0 FB FF FF         LEA EDX,[EBP + 0xfffffbf0]
007095A7  6A 01                     PUSH 0x1
007095A9  52                        PUSH EDX
007095AA  68 00 01 00 00            PUSH 0x100
007095AF  6A 08                     PUSH 0x8
007095B1  50                        PUSH EAX
007095B2  51                        PUSH ECX
007095B3  E8 08 BB FA FF            CALL 0x006b50c0
007095B8  8B F0                     MOV ESI,EAX
007095BA  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
007095BD  85 DB                     TEST EBX,EBX
007095BF  75 18                     JNZ 0x007095d9
007095C1  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
007095C5  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
007095C9  83 C3 1F                  ADD EBX,0x1f
007095CC  C1 EB 03                  SHR EBX,0x3
007095CF  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
007095D5  0F AF 5E 08               IMUL EBX,dword ptr [ESI + 0x8]
LAB_007095d9:
007095D9  56                        PUSH ESI
007095DA  E8 C1 B9 FA FF            CALL 0x006b4fa0
007095DF  8B F8                     MOV EDI,EAX
007095E1  8A 45 18                  MOV AL,byte ptr [EBP + 0x18]
007095E4  8B CB                     MOV ECX,EBX
007095E6  8A D8                     MOV BL,AL
007095E8  8A FB                     MOV BH,BL
007095EA  8B D1                     MOV EDX,ECX
007095EC  8B C3                     MOV EAX,EBX
007095EE  C1 E0 10                  SHL EAX,0x10
007095F1  66 8B C3                  MOV AX,BX
007095F4  C1 E9 02                  SHR ECX,0x2
007095F7  F3 AB                     STOSD.REP ES:EDI
007095F9  8B CA                     MOV ECX,EDX
007095FB  83 E1 03                  AND ECX,0x3
007095FE  F3 AA                     STOSB.REP ES:EDI
00709600  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709603  48                        DEC EAX
00709604  85 C0                     TEST EAX,EAX
00709606  7C 46                     JL 0x0070964e
00709608  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0070960B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0070960E  8D 1C 81                  LEA EBX,[ECX + EAX*0x4]
00709611  40                        INC EAX
00709612  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_00709615:
00709615  8B 03                     MOV EAX,dword ptr [EBX]
00709617  85 C0                     TEST EAX,EAX
00709619  74 27                     JZ 0x00709642
0070961B  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0070961E  85 C9                     TEST ECX,ECX
00709620  7E 20                     JLE 0x00709642
00709622  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00709625  85 C9                     TEST ECX,ECX
00709627  7E 19                     JLE 0x00709642
00709629  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070962C  8B D7                     MOV EDX,EDI
0070962E  50                        PUSH EAX
0070962F  2B D1                     SUB EDX,ECX
00709631  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00709634  8B C7                     MOV EAX,EDI
00709636  2B C1                     SUB EAX,ECX
00709638  52                        PUSH EDX
00709639  50                        PUSH EAX
0070963A  6A 00                     PUSH 0x0
0070963C  56                        PUSH ESI
0070963D  E8 8E EE FA FF            CALL 0x006b84d0
LAB_00709642:
00709642  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00709645  83 EB 04                  SUB EBX,0x4
00709648  48                        DEC EAX
00709649  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0070964C  75 C7                     JNZ 0x00709615
LAB_0070964e:
0070964E  8B C6                     MOV EAX,ESI
00709650  5F                        POP EDI
00709651  5E                        POP ESI
00709652  5B                        POP EBX
00709653  8B E5                     MOV ESP,EBP
00709655  5D                        POP EBP
00709656  C2 14 00                  RET 0x14
LAB_00709659:
00709659  5F                        POP EDI
0070965A  5E                        POP ESI
0070965B  33 C0                     XOR EAX,EAX
0070965D  5B                        POP EBX
0070965E  8B E5                     MOV ESP,EBP
00709660  5D                        POP EBP
00709661  C2 14 00                  RET 0x14
