FUN_00475530:
00475530  55                        PUSH EBP
00475531  8B EC                     MOV EBP,ESP
00475533  83 EC 28                  SUB ESP,0x28
00475536  53                        PUSH EBX
00475537  56                        PUSH ESI
00475538  8B F1                     MOV ESI,ECX
0047553A  57                        PUSH EDI
0047553B  8B 8E C0 05 00 00         MOV ECX,dword ptr [ESI + 0x5c0]
00475541  85 C9                     TEST ECX,ECX
00475543  75 17                     JNZ 0x0047555c
LAB_00475545:
00475545  8B 06                     MOV EAX,dword ptr [ESI]
00475547  8B CE                     MOV ECX,ESI
00475549  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
0047554F  F7 D8                     NEG EAX
00475551  1B C0                     SBB EAX,EAX
00475553  5F                        POP EDI
00475554  5E                        POP ESI
00475555  5B                        POP EBX
00475556  8B E5                     MOV ESP,EBP
00475558  5D                        POP EBP
00475559  C2 04 00                  RET 0x4
LAB_0047555c:
0047555C  83 F9 01                  CMP ECX,0x1
0047555F  74 09                     JZ 0x0047556a
00475561  83 F9 02                  CMP ECX,0x2
00475564  0F 85 4F 02 00 00         JNZ 0x004757b9
LAB_0047556a:
0047556A  8B 86 C4 05 00 00         MOV EAX,dword ptr [ESI + 0x5c4]
00475570  85 C0                     TEST EAX,EAX
00475572  75 12                     JNZ 0x00475586
00475574  6A 02                     PUSH 0x2
00475576  8B CE                     MOV ECX,ESI
00475578  E8 73 E8 F8 FF            CALL 0x00403df0
0047557D  5F                        POP EDI
0047557E  5E                        POP ESI
0047557F  5B                        POP EBX
00475580  8B E5                     MOV ESP,EBP
00475582  5D                        POP EBP
00475583  C2 04 00                  RET 0x4
LAB_00475586:
00475586  83 F8 01                  CMP EAX,0x1
00475589  0F 84 72 02 00 00         JZ 0x00475801
0047558F  83 F8 02                  CMP EAX,0x2
00475592  0F 84 69 02 00 00         JZ 0x00475801
00475598  83 F8 03                  CMP EAX,0x3
0047559B  0F 84 60 02 00 00         JZ 0x00475801
004755A1  83 F8 05                  CMP EAX,0x5
004755A4  0F 84 57 02 00 00         JZ 0x00475801
004755AA  83 F8 06                  CMP EAX,0x6
004755AD  0F 84 4E 02 00 00         JZ 0x00475801
004755B3  83 F8 07                  CMP EAX,0x7
004755B6  0F 84 45 02 00 00         JZ 0x00475801
004755BC  83 F8 04                  CMP EAX,0x4
004755BF  0F 85 F4 01 00 00         JNZ 0x004757b9
004755C5  8D 4D F0                  LEA ECX,[EBP + -0x10]
004755C8  8D 55 EC                  LEA EDX,[EBP + -0x14]
004755CB  51                        PUSH ECX
004755CC  52                        PUSH EDX
004755CD  8B CE                     MOV ECX,ESI
004755CF  E8 73 D2 F8 FF            CALL 0x00402847
004755D4  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004755D7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
004755DA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
004755E0  05 39 30 00 00            ADD EAX,0x3039
004755E5  33 D2                     XOR EDX,EDX
004755E7  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
004755EA  B9 07 00 00 00            MOV ECX,0x7
004755EF  C1 E8 10                  SHR EAX,0x10
004755F2  F7 F1                     DIV ECX
004755F4  8B FA                     MOV EDI,EDX
004755F6  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
004755F9  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
004755FF  83 EF 03                  SUB EDI,0x3
00475602  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00475608  33 D2                     XOR EDX,EDX
0047560A  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047560D  C1 E8 10                  SHR EAX,0x10
00475610  F7 F1                     DIV ECX
00475612  8B DA                     MOV EBX,EDX
00475614  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00475617  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0047561D  83 EB 03                  SUB EBX,0x3
00475620  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
00475626  33 D2                     XOR EDX,EDX
00475628  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0047562B  C1 E8 10                  SHR EAX,0x10
0047562E  F7 F1                     DIV ECX
00475630  8B 8E 4A 07 00 00         MOV ECX,dword ptr [ESI + 0x74a]
00475636  83 EA 03                  SUB EDX,0x3
00475639  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0047563C  8B 15 24 67 80 00         MOV EDX,dword ptr [0x00806724]
00475642  0F BF 42 23               MOVSX EAX,word ptr [EDX + 0x23]
00475646  99                        CDQ
00475647  2B C2                     SUB EAX,EDX
00475649  D1 F8                     SAR EAX,0x1
0047564B  3B C8                     CMP ECX,EAX
0047564D  0F 8F 09 01 00 00         JG 0x0047575c
00475653  8A 86 BF 02 00 00         MOV AL,byte ptr [ESI + 0x2bf]
00475659  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
00475660  84 C0                     TEST AL,AL
00475662  0F 86 F4 00 00 00         JBE 0x0047575c
00475668  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0047566E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00475671:
00475671  66 8B 4E 6C               MOV CX,word ptr [ESI + 0x6c]
00475675  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00475678  51                        PUSH ECX
00475679  8B 0A                     MOV ECX,dword ptr [EDX]
0047567B  83 EC 08                  SUB ESP,0x8
0047567E  8B C4                     MOV EAX,ESP
00475680  66 8B 52 04               MOV DX,word ptr [EDX + 0x4]
00475684  89 08                     MOV dword ptr [EAX],ECX
00475686  8B CE                     MOV ECX,ESI
00475688  66 89 50 04               MOV word ptr [EAX + 0x4],DX
0047568C  8D 45 D8                  LEA EAX,[EBP + -0x28]
0047568F  50                        PUSH EAX
00475690  E8 97 DD F8 FF            CALL 0x0040342c
00475695  8B 08                     MOV ECX,dword ptr [EAX]
00475697  6A 00                     PUSH 0x0
00475699  6A 00                     PUSH 0x0
0047569B  6A FF                     PUSH -0x1
0047569D  66 8B 40 04               MOV AX,word ptr [EAX + 0x4]
004756A1  6A 00                     PUSH 0x0
004756A3  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
004756A6  8B 0D 2C 73 80 00         MOV ECX,dword ptr [0x0080732c]
004756AC  6A 00                     PUSH 0x0
004756AE  6A 00                     PUSH 0x0
004756B0  6A 00                     PUSH 0x0
004756B2  83 F9 01                  CMP ECX,0x1
004756B5  6A 00                     PUSH 0x0
004756B7  66 89 45 E4               MOV word ptr [EBP + -0x1c],AX
004756BB  6A 00                     PUSH 0x0
004756BD  75 41                     JNZ 0x00475700
004756BF  D9 46 70                  FLD float ptr [ESI + 0x70]
004756C2  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
004756C8  E8 BB 8B 2B 00            CALL 0x0072e288
004756CD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004756D0  0F BF D0                  MOVSX EDX,AX
004756D3  0F BF 46 45               MOVSX EAX,word ptr [ESI + 0x45]
004756D7  03 C1                     ADD EAX,ECX
004756D9  0F BF 4D E4               MOVSX ECX,word ptr [EBP + -0x1c]
004756DD  03 C2                     ADD EAX,EDX
004756DF  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
004756E3  03 C8                     ADD ECX,EAX
004756E5  0F BF 45 E2               MOVSX EAX,word ptr [EBP + -0x1e]
004756E9  2B D0                     SUB EDX,EAX
004756EB  51                        PUSH ECX
004756EC  0F BF 4E 41               MOVSX ECX,word ptr [ESI + 0x41]
004756F0  03 D3                     ADD EDX,EBX
004756F2  8B C7                     MOV EAX,EDI
004756F4  52                        PUSH EDX
004756F5  03 C1                     ADD EAX,ECX
004756F7  0F BF 55 E0               MOVSX EDX,word ptr [EBP + -0x20]
004756FB  03 D0                     ADD EDX,EAX
004756FD  52                        PUSH EDX
004756FE  EB 2B                     JMP 0x0047572b
LAB_00475700:
00475700  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00475704  0F BF D0                  MOVSX EDX,AX
00475707  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0047570A  03 C1                     ADD EAX,ECX
0047570C  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00475710  03 D0                     ADD EDX,EAX
00475712  52                        PUSH EDX
00475713  0F BF 55 E2               MOVSX EDX,word ptr [EBP + -0x1e]
00475717  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0047571B  2B CA                     SUB ECX,EDX
0047571D  8B D7                     MOV EDX,EDI
0047571F  03 CB                     ADD ECX,EBX
00475721  03 D0                     ADD EDX,EAX
00475723  51                        PUSH ECX
00475724  0F BF 4D E0               MOVSX ECX,word ptr [EBP + -0x20]
00475728  03 CA                     ADD ECX,EDX
0047572A  51                        PUSH ECX
LAB_0047572b:
0047572B  8B 0D 7C 2A 80 00         MOV ECX,dword ptr [0x00802a7c]
00475731  6A 07                     PUSH 0x7
00475733  6A 02                     PUSH 0x2
00475735  6A 01                     PUSH 0x1
00475737  E8 F7 BC F8 FF            CALL 0x00401433
0047573C  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0047573F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00475742  83 C1 06                  ADD ECX,0x6
00475745  40                        INC EAX
00475746  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00475749  33 C9                     XOR ECX,ECX
0047574B  8A 8E BF 02 00 00         MOV CL,byte ptr [ESI + 0x2bf]
00475751  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00475754  3B C1                     CMP EAX,ECX
00475756  0F 8C 15 FF FF FF         JL 0x00475671
LAB_0047575c:
0047575C  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0047575F  83 F8 FF                  CMP EAX,-0x1
00475762  74 24                     JZ 0x00475788
00475764  85 C0                     TEST EAX,EAX
00475766  0F 84 D9 FD FF FF         JZ 0x00475545
0047576C  8B 16                     MOV EDX,dword ptr [ESI]
0047576E  8B CE                     MOV ECX,ESI
00475770  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00475776  F7 D8                     NEG EAX
00475778  1B C0                     SBB EAX,EAX
0047577A  24 FD                     AND AL,0xfd
0047577C  83 C0 02                  ADD EAX,0x2
0047577F  5F                        POP EDI
00475780  5E                        POP ESI
00475781  5B                        POP EBX
00475782  8B E5                     MOV ESP,EBP
00475784  5D                        POP EBP
00475785  C2 04 00                  RET 0x4
LAB_00475788:
00475788  68 30 B0 7A 00            PUSH 0x7ab030
0047578D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00475792  6A 00                     PUSH 0x0
00475794  6A 00                     PUSH 0x0
00475796  68 3E 30 00 00            PUSH 0x303e
0047579B  68 3C 9D 7A 00            PUSH 0x7a9d3c
004757A0  E8 2B 7D 23 00            CALL 0x006ad4d0
004757A5  83 C4 18                  ADD ESP,0x18
004757A8  85 C0                     TEST EAX,EAX
004757AA  74 01                     JZ 0x004757ad
004757AC  CC                        INT3
LAB_004757ad:
004757AD  83 C8 FF                  OR EAX,0xffffffff
004757B0  5F                        POP EDI
004757B1  5E                        POP ESI
004757B2  5B                        POP EBX
004757B3  8B E5                     MOV ESP,EBP
004757B5  5D                        POP EBP
004757B6  C2 04 00                  RET 0x4
LAB_004757b9:
004757B9  83 F9 03                  CMP ECX,0x3
004757BC  75 12                     JNZ 0x004757d0
004757BE  6A 02                     PUSH 0x2
004757C0  8B CE                     MOV ECX,ESI
004757C2  E8 41 F6 F8 FF            CALL 0x00404e08
004757C7  5F                        POP EDI
004757C8  5E                        POP ESI
004757C9  5B                        POP EBX
004757CA  8B E5                     MOV ESP,EBP
004757CC  5D                        POP EBP
004757CD  C2 04 00                  RET 0x4
LAB_004757d0:
004757D0  68 F0 AF 7A 00            PUSH 0x7aaff0
004757D5  68 CC 4C 7A 00            PUSH 0x7a4ccc
004757DA  6A 00                     PUSH 0x0
004757DC  6A 00                     PUSH 0x0
004757DE  68 52 30 00 00            PUSH 0x3052
004757E3  68 3C 9D 7A 00            PUSH 0x7a9d3c
004757E8  E8 E3 7C 23 00            CALL 0x006ad4d0
004757ED  83 C4 18                  ADD ESP,0x18
004757F0  85 C0                     TEST EAX,EAX
004757F2  74 01                     JZ 0x004757f5
004757F4  CC                        INT3
LAB_004757f5:
004757F5  83 C8 FF                  OR EAX,0xffffffff
004757F8  5F                        POP EDI
004757F9  5E                        POP ESI
004757FA  5B                        POP EBX
004757FB  8B E5                     MOV ESP,EBP
004757FD  5D                        POP EBP
004757FE  C2 04 00                  RET 0x4
LAB_00475801:
00475801  8B 16                     MOV EDX,dword ptr [ESI]
00475803  8B CE                     MOV ECX,ESI
00475805  C7 46 76 01 00 00 00      MOV dword ptr [ESI + 0x76],0x1
0047580C  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00475812  F7 D8                     NEG EAX
00475814  5F                        POP EDI
00475815  5E                        POP ESI
00475816  1B C0                     SBB EAX,EAX
00475818  5B                        POP EBX
00475819  8B E5                     MOV ESP,EBP
0047581B  5D                        POP EBP
0047581C  C2 04 00                  RET 0x4
