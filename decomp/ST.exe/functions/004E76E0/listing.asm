FUN_004e76e0:
004E76E0  55                        PUSH EBP
004E76E1  8B EC                     MOV EBP,ESP
004E76E3  83 EC 0C                  SUB ESP,0xc
004E76E6  53                        PUSH EBX
004E76E7  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E76EA  85 DB                     TEST EBX,EBX
004E76EC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004E76EF  0F 8C F0 01 00 00         JL 0x004e78e5
004E76F5  83 FB 08                  CMP EBX,0x8
004E76F8  0F 8D E7 01 00 00         JGE 0x004e78e5
004E76FE  56                        PUSH ESI
004E76FF  57                        PUSH EDI
004E7700  53                        PUSH EBX
004E7701  E8 B1 D2 F1 FF            CALL 0x004049b7
004E7706  25 FF 00 00 00            AND EAX,0xff
004E770B  B9 C3 00 00 00            MOV ECX,0xc3
004E7710  48                        DEC EAX
004E7711  BF 20 10 80 00            MOV EDI,0x801020
004E7716  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004E7719  33 C0                     XOR EAX,EAX
004E771B  F3 AB                     STOSD.REP ES:EDI
004E771D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004E7720  8A 4D 10                  MOV CL,byte ptr [EBP + 0x10]
004E7723  A3 20 10 80 00            MOV [0x00801020],EAX
004E7728  88 0D 24 10 80 00         MOV byte ptr [0x00801024],CL
LAB_004e772e:
004E772E  B9 C3 00 00 00            MOV ECX,0xc3
004E7733  33 C0                     XOR EAX,EAX
004E7735  BF D0 0B 80 00            MOV EDI,0x800bd0
004E773A  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
004E7741  F3 AB                     STOSD.REP ES:EDI
004E7743  A1 20 10 80 00            MOV EAX,[0x00801020]
004E7748  85 C0                     TEST EAX,EAX
004E774A  0F 84 8A 01 00 00         JZ 0x004e78da
004E7750  B8 20 10 80 00            MOV EAX,0x801020
004E7755  8B F0                     MOV ESI,EAX
004E7757  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
LAB_004e775a:
004E775A  8B 00                     MOV EAX,dword ptr [EAX]
004E775C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004E775F  33 D2                     XOR EDX,EDX
004E7761  8A 56 04                  MOV DL,byte ptr [ESI + 0x4]
004E7764  52                        PUSH EDX
004E7765  50                        PUSH EAX
004E7766  53                        PUSH EBX
004E7767  E8 BB B7 F1 FF            CALL 0x00402f27
004E776C  B8 D4 0D 7C 00            MOV EAX,0x7c0dd4
LAB_004e7771:
004E7771  8A 50 01                  MOV DL,byte ptr [EAX + 0x1]
004E7774  B9 01 00 00 00            MOV ECX,0x1
004E7779  84 D2                     TEST DL,DL
004E777B  74 3B                     JZ 0x004e77b8
LAB_004e777d:
004E777D  83 F9 03                  CMP ECX,0x3
004E7780  7D 36                     JGE 0x004e77b8
004E7782  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E7785  33 D2                     XOR EDX,EDX
004E7787  8A 14 08                  MOV DL,byte ptr [EAX + ECX*0x1]
004E778A  3B 16                     CMP EDX,dword ptr [ESI]
004E778C  74 0B                     JZ 0x004e7799
004E778E  8A 54 08 01               MOV DL,byte ptr [EAX + ECX*0x1 + 0x1]
004E7792  41                        INC ECX
004E7793  84 D2                     TEST DL,DL
004E7795  75 E6                     JNZ 0x004e777d
004E7797  EB 1F                     JMP 0x004e77b8
LAB_004e7799:
004E7799  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
004E779C  33 C9                     XOR ECX,ECX
004E779E  8A 08                     MOV CL,byte ptr [EAX]
004E77A0  8D 14 D3                  LEA EDX,[EBX + EDX*0x8]
004E77A3  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
004E77A6  C1 E2 04                  SHL EDX,0x4
004E77A9  03 D3                     ADD EDX,EBX
004E77AB  D1 E2                     SHL EDX,0x1
004E77AD  C7 84 8A B3 53 7F 00 00 00 00 00  MOV dword ptr [EDX + ECX*0x4 + 0x7f53b3],0x0
LAB_004e77b8:
004E77B8  83 C0 03                  ADD EAX,0x3
004E77BB  3D 4C 0E 7C 00            CMP EAX,0x7c0e4c
004E77C0  7C AF                     JL 0x004e7771
004E77C2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E77C5  BE 42 00 00 00            MOV ESI,0x42
004E77CA  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
004E77CD  C1 E1 04                  SHL ECX,0x4
004E77D0  03 C8                     ADD ECX,EAX
004E77D2  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E77D5  8D 0C 55 4C 0E 7C 00      LEA ECX,[EDX*0x2 + 0x7c0e4c]
LAB_004e77dc:
004E77DC  8A 51 01                  MOV DL,byte ptr [ECX + 0x1]
004E77DF  B8 01 00 00 00            MOV EAX,0x1
004E77E4  84 D2                     TEST DL,DL
004E77E6  74 3B                     JZ 0x004e7823
LAB_004e77e8:
004E77E8  83 F8 03                  CMP EAX,0x3
004E77EB  7D 36                     JGE 0x004e7823
004E77ED  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
004E77F0  33 D2                     XOR EDX,EDX
004E77F2  8A 14 01                  MOV DL,byte ptr [ECX + EAX*0x1]
004E77F5  3B 17                     CMP EDX,dword ptr [EDI]
004E77F7  74 0B                     JZ 0x004e7804
004E77F9  8A 54 01 01               MOV DL,byte ptr [ECX + EAX*0x1 + 0x1]
004E77FD  40                        INC EAX
004E77FE  84 D2                     TEST DL,DL
004E7800  75 E6                     JNZ 0x004e77e8
004E7802  EB 1F                     JMP 0x004e7823
LAB_004e7804:
004E7804  8D 14 9B                  LEA EDX,[EBX + EBX*0x4]
004E7807  33 C0                     XOR EAX,EAX
004E7809  8A 01                     MOV AL,byte ptr [ECX]
004E780B  8D 14 D3                  LEA EDX,[EBX + EDX*0x8]
004E780E  8D 14 53                  LEA EDX,[EBX + EDX*0x2]
004E7811  C1 E2 04                  SHL EDX,0x4
004E7814  03 D3                     ADD EDX,EBX
004E7816  D1 E2                     SHL EDX,0x1
004E7818  C7 84 82 B3 53 7F 00 00 00 00 00  MOV dword ptr [EDX + EAX*0x4 + 0x7f53b3],0x0
LAB_004e7823:
004E7823  83 C1 03                  ADD ECX,0x3
004E7826  4E                        DEC ESI
004E7827  75 B3                     JNZ 0x004e77dc
004E7829  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004E782C  8B 04 85 C8 0D 7C 00      MOV EAX,dword ptr [EAX*0x4 + 0x7c0dc8]
004E7833  83 38 00                  CMP dword ptr [EAX],0x0
004E7836  74 71                     JZ 0x004e78a9
004E7838  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E783B  8B F0                     MOV ESI,EAX
004E783D  8D 78 05                  LEA EDI,[EAX + 0x5]
004E7840  8D 8C 89 D0 0B 80 00      LEA ECX,[ECX + ECX*0x4 + 0x800bd0]
004E7847  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_004e784a:
004E784A  8B 07                     MOV EAX,dword ptr [EDI]
004E784C  33 C9                     XOR ECX,ECX
004E784E  85 C0                     TEST EAX,EAX
004E7850  74 4A                     JZ 0x004e789c
004E7852  8D 46 05                  LEA EAX,[ESI + 0x5]
LAB_004e7855:
004E7855  83 F9 04                  CMP ECX,0x4
004E7858  7D 42                     JGE 0x004e789c
004E785A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E785D  8B 18                     MOV EBX,dword ptr [EAX]
004E785F  3B 1A                     CMP EBX,dword ptr [EDX]
004E7861  75 08                     JNZ 0x004e786b
004E7863  8A 58 04                  MOV BL,byte ptr [EAX + 0x4]
004E7866  3A 5A 04                  CMP BL,byte ptr [EDX + 0x4]
004E7869  74 10                     JZ 0x004e787b
LAB_004e786b:
004E786B  8B 50 05                  MOV EDX,dword ptr [EAX + 0x5]
004E786E  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E7871  83 C0 05                  ADD EAX,0x5
004E7874  41                        INC ECX
004E7875  85 D2                     TEST EDX,EDX
004E7877  75 DC                     JNZ 0x004e7855
004E7879  EB 21                     JMP 0x004e789c
LAB_004e787b:
004E787B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004E787E  8B D6                     MOV EDX,ESI
004E7880  8B C8                     MOV ECX,EAX
004E7882  8B 1A                     MOV EBX,dword ptr [EDX]
004E7884  89 19                     MOV dword ptr [ECX],EBX
004E7886  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
004E7889  8A 52 04                  MOV DL,byte ptr [EDX + 0x4]
004E788C  88 51 04                  MOV byte ptr [ECX + 0x4],DL
004E788F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004E7892  42                        INC EDX
004E7893  83 C0 05                  ADD EAX,0x5
004E7896  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
004E7899  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004e789c:
004E789C  8B 46 19                  MOV EAX,dword ptr [ESI + 0x19]
004E789F  83 C6 19                  ADD ESI,0x19
004E78A2  83 C7 19                  ADD EDI,0x19
004E78A5  85 C0                     TEST EAX,EAX
004E78A7  75 A1                     JNZ 0x004e784a
LAB_004e78a9:
004E78A9  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E78AC  83 C6 05                  ADD ESI,0x5
004E78AF  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
004E78B2  8B C6                     MOV EAX,ESI
004E78B4  83 3E 00                  CMP dword ptr [ESI],0x0
004E78B7  0F 85 9D FE FF FF         JNZ 0x004e775a
004E78BD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E78C0  85 C0                     TEST EAX,EAX
004E78C2  74 16                     JZ 0x004e78da
004E78C4  B9 C3 00 00 00            MOV ECX,0xc3
004E78C9  BE D0 0B 80 00            MOV ESI,0x800bd0
004E78CE  BF 20 10 80 00            MOV EDI,0x801020
004E78D3  F3 A5                     MOVSD.REP ES:EDI,ESI
004E78D5  E9 54 FE FF FF            JMP 0x004e772e
LAB_004e78da:
004E78DA  5F                        POP EDI
004E78DB  5E                        POP ESI
004E78DC  33 C0                     XOR EAX,EAX
004E78DE  5B                        POP EBX
004E78DF  8B E5                     MOV ESP,EBP
004E78E1  5D                        POP EBP
004E78E2  C2 0C 00                  RET 0xc
LAB_004e78e5:
004E78E5  33 C0                     XOR EAX,EAX
004E78E7  5B                        POP EBX
004E78E8  8B E5                     MOV ESP,EBP
004E78EA  5D                        POP EBP
004E78EB  C2 0C 00                  RET 0xc
