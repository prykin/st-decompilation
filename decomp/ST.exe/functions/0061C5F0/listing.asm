FUN_0061c5f0:
0061C5F0  55                        PUSH EBP
0061C5F1  8B EC                     MOV EBP,ESP
0061C5F3  83 EC 14                  SUB ESP,0x14
0061C5F6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061C5F9  53                        PUSH EBX
0061C5FA  56                        PUSH ESI
0061C5FB  8B F1                     MOV ESI,ECX
0061C5FD  33 DB                     XOR EBX,EBX
0061C5FF  57                        PUSH EDI
0061C600  89 18                     MOV dword ptr [EAX],EBX
0061C602  8A 86 4B 01 00 00         MOV AL,byte ptr [ESI + 0x14b]
0061C608  84 C0                     TEST AL,AL
0061C60A  0F 84 52 02 00 00         JZ 0x0061c862
0061C610  66 81 BE 49 01 00 00 FF FF  CMP word ptr [ESI + 0x149],0xffff
0061C619  0F 84 43 02 00 00         JZ 0x0061c862
0061C61F  8B 8E 23 01 00 00         MOV ECX,dword ptr [ESI + 0x123]
0061C625  51                        PUSH ECX
0061C626  8D 4E 20                  LEA ECX,[ESI + 0x20]
0061C629  E8 24 7A DE FF            CALL 0x00404052
0061C62E  66 8B 96 49 01 00 00      MOV DX,word ptr [ESI + 0x149]
0061C635  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0061C63B  50                        PUSH EAX
0061C63C  8A 86 1F 01 00 00         MOV AL,byte ptr [ESI + 0x11f]
0061C642  52                        PUSH EDX
0061C643  50                        PUSH EAX
0061C644  E8 71 62 DE FF            CALL 0x004028ba
0061C649  8B F8                     MOV EDI,EAX
0061C64B  85 FF                     TEST EDI,EDI
0061C64D  0F 84 0F 02 00 00         JZ 0x0061c862
0061C653  8D 4D F4                  LEA ECX,[EBP + -0xc]
0061C656  8D 55 F6                  LEA EDX,[EBP + -0xa]
0061C659  51                        PUSH ECX
0061C65A  8D 45 FA                  LEA EAX,[EBP + -0x6]
0061C65D  52                        PUSH EDX
0061C65E  50                        PUSH EAX
0061C65F  8B CF                     MOV ECX,EDI
0061C661  89 BE 39 01 00 00         MOV dword ptr [ESI + 0x139],EDI
0061C667  E8 59 52 DE FF            CALL 0x004018c5
0061C66C  8B 8E 27 01 00 00         MOV ECX,dword ptr [ESI + 0x127]
0061C672  B8 79 19 8C 02            MOV EAX,0x28c1979
0061C677  85 C9                     TEST ECX,ECX
0061C679  7C 13                     JL 0x0061c68e
0061C67B  F7 E9                     IMUL ECX
0061C67D  D1 FA                     SAR EDX,0x1
0061C67F  8B CA                     MOV ECX,EDX
0061C681  C1 E9 1F                  SHR ECX,0x1f
0061C684  03 D1                     ADD EDX,ECX
0061C686  0F BF CA                  MOVSX ECX,DX
0061C689  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0061C68C  EB 14                     JMP 0x0061c6a2
LAB_0061c68e:
0061C68E  F7 E9                     IMUL ECX
0061C690  D1 FA                     SAR EDX,0x1
0061C692  8B C2                     MOV EAX,EDX
0061C694  C1 E8 1F                  SHR EAX,0x1f
0061C697  03 D0                     ADD EDX,EAX
0061C699  0F BF C2                  MOVSX EAX,DX
0061C69C  48                        DEC EAX
0061C69D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0061C6A0  8B C8                     MOV ECX,EAX
LAB_0061c6a2:
0061C6A2  8B 96 2B 01 00 00         MOV EDX,dword ptr [ESI + 0x12b]
0061C6A8  B8 79 19 8C 02            MOV EAX,0x28c1979
0061C6AD  85 D2                     TEST EDX,EDX
0061C6AF  7C 10                     JL 0x0061c6c1
0061C6B1  F7 EA                     IMUL EDX
0061C6B3  D1 FA                     SAR EDX,0x1
0061C6B5  8B C2                     MOV EAX,EDX
0061C6B7  C1 E8 1F                  SHR EAX,0x1f
0061C6BA  03 D0                     ADD EDX,EAX
0061C6BC  0F BF DA                  MOVSX EBX,DX
0061C6BF  EB 0F                     JMP 0x0061c6d0
LAB_0061c6c1:
0061C6C1  F7 EA                     IMUL EDX
0061C6C3  D1 FA                     SAR EDX,0x1
0061C6C5  8B C2                     MOV EAX,EDX
0061C6C7  C1 E8 1F                  SHR EAX,0x1f
0061C6CA  03 D0                     ADD EDX,EAX
0061C6CC  0F BF DA                  MOVSX EBX,DX
0061C6CF  4B                        DEC EBX
LAB_0061c6d0:
0061C6D0  8B 96 2F 01 00 00         MOV EDX,dword ptr [ESI + 0x12f]
0061C6D6  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061C6DB  85 D2                     TEST EDX,EDX
0061C6DD  7C 14                     JL 0x0061c6f3
0061C6DF  F7 EA                     IMUL EDX
0061C6E1  C1 FA 06                  SAR EDX,0x6
0061C6E4  8B C2                     MOV EAX,EDX
0061C6E6  C1 E8 1F                  SHR EAX,0x1f
0061C6E9  03 D0                     ADD EDX,EAX
0061C6EB  0F BF D2                  MOVSX EDX,DX
0061C6EE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0061C6F1  EB 13                     JMP 0x0061c706
LAB_0061c6f3:
0061C6F3  F7 EA                     IMUL EDX
0061C6F5  C1 FA 06                  SAR EDX,0x6
0061C6F8  8B C2                     MOV EAX,EDX
0061C6FA  C1 E8 1F                  SHR EAX,0x1f
0061C6FD  03 D0                     ADD EDX,EAX
0061C6FF  0F BF C2                  MOVSX EAX,DX
0061C702  48                        DEC EAX
0061C703  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0061c706:
0061C706  8B 46 7D                  MOV EAX,dword ptr [ESI + 0x7d]
0061C709  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
0061C70D  F7 D8                     NEG EAX
0061C70F  1B C0                     SBB EAX,EAX
0061C711  83 E0 04                  AND EAX,0x4
0061C714  40                        INC EAX
0061C715  2B D0                     SUB EDX,EAX
0061C717  3B CA                     CMP ECX,EDX
0061C719  0F 8C 38 01 00 00         JL 0x0061c857
0061C71F  0F BF 55 FA               MOVSX EDX,word ptr [EBP + -0x6]
0061C723  03 D0                     ADD EDX,EAX
0061C725  3B CA                     CMP ECX,EDX
0061C727  0F 8D 2A 01 00 00         JGE 0x0061c857
0061C72D  0F BF 4D F6               MOVSX ECX,word ptr [EBP + -0xa]
0061C731  8B D1                     MOV EDX,ECX
0061C733  2B D0                     SUB EDX,EAX
0061C735  3B DA                     CMP EBX,EDX
0061C737  0F 8C 1A 01 00 00         JL 0x0061c857
0061C73D  03 C8                     ADD ECX,EAX
0061C73F  3B D9                     CMP EBX,ECX
0061C741  0F 8D 10 01 00 00         JGE 0x0061c857
0061C747  8D 45 F8                  LEA EAX,[EBP + -0x8]
0061C74A  8D 4D FE                  LEA ECX,[EBP + -0x2]
0061C74D  50                        PUSH EAX
0061C74E  8D 55 FC                  LEA EDX,[EBP + -0x4]
0061C751  51                        PUSH ECX
0061C752  52                        PUSH EDX
0061C753  8B CF                     MOV ECX,EDI
0061C755  E8 89 6A DE FF            CALL 0x004031e3
0061C75A  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0061C75E  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0061C762  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061C768  50                        PUSH EAX
0061C769  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061C76F  51                        PUSH ECX
0061C770  52                        PUSH EDX
0061C771  50                        PUSH EAX
0061C772  E8 61 07 09 00            CALL 0x006aced8
0061C777  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0061C77B  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0061C77F  0F BF 55 FE               MOVSX EDX,word ptr [EBP + -0x2]
0061C783  89 8E 27 01 00 00         MOV dword ptr [ESI + 0x127],ECX
0061C789  89 86 2F 01 00 00         MOV dword ptr [ESI + 0x12f],EAX
0061C78F  0F BF 8E 33 01 00 00      MOVSX ECX,word ptr [ESI + 0x133]
0061C796  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0061C799  83 C4 10                  ADD ESP,0x10
0061C79C  3B C1                     CMP EAX,ECX
0061C79E  89 96 2B 01 00 00         MOV dword ptr [ESI + 0x12b],EDX
0061C7A4  75 0B                     JNZ 0x0061c7b1
0061C7A6  0F BF 96 35 01 00 00      MOVSX EDX,word ptr [ESI + 0x135]
0061C7AD  3B DA                     CMP EBX,EDX
0061C7AF  74 09                     JZ 0x0061c7ba
LAB_0061c7b1:
0061C7B1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0061C7B4  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
LAB_0061c7ba:
0061C7BA  66 8B 55 EC               MOV DX,word ptr [EBP + -0x14]
0061C7BE  66 89 86 33 01 00 00      MOV word ptr [ESI + 0x133],AX
0061C7C5  66 89 9E 35 01 00 00      MOV word ptr [ESI + 0x135],BX
0061C7CC  66 89 96 37 01 00 00      MOV word ptr [ESI + 0x137],DX
0061C7D3  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
0061C7D6  89 86 45 01 00 00         MOV dword ptr [ESI + 0x145],EAX
0061C7DC  66 8B 4F 32               MOV CX,word ptr [EDI + 0x32]
0061C7E0  66 89 8E 49 01 00 00      MOV word ptr [ESI + 0x149],CX
0061C7E7  8B 17                     MOV EDX,dword ptr [EDI]
0061C7E9  8B CF                     MOV ECX,EDI
0061C7EB  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0061C7EE  0F BF 4D FE               MOVSX ECX,word ptr [EBP + -0x2]
0061C7F2  0F BF 55 FC               MOVSX EDX,word ptr [EBP + -0x4]
0061C7F6  89 86 23 01 00 00         MOV dword ptr [ESI + 0x123],EAX
0061C7FC  0F BF 45 F8               MOVSX EAX,word ptr [EBP + -0x8]
0061C800  50                        PUSH EAX
0061C801  8B 86 A7 00 00 00         MOV EAX,dword ptr [ESI + 0xa7]
0061C807  51                        PUSH ECX
0061C808  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061C80E  52                        PUSH EDX
0061C80F  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061C815  50                        PUSH EAX
0061C816  51                        PUSH ECX
0061C817  52                        PUSH EDX
0061C818  E8 F0 06 09 00            CALL 0x006acf0d
0061C81D  0F BF 4D FC               MOVSX ECX,word ptr [EBP + -0x4]
0061C821  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061C827  89 86 3D 01 00 00         MOV dword ptr [ESI + 0x13d],EAX
0061C82D  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
0061C831  50                        PUSH EAX
0061C832  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061C838  51                        PUSH ECX
0061C839  52                        PUSH EDX
0061C83A  50                        PUSH EAX
0061C83B  E8 98 06 09 00            CALL 0x006aced8
0061C840  83 C4 28                  ADD ESP,0x28
0061C843  89 86 41 01 00 00         MOV dword ptr [ESI + 0x141],EAX
0061C849  B8 01 00 00 00            MOV EAX,0x1
0061C84E  5F                        POP EDI
0061C84F  5E                        POP ESI
0061C850  5B                        POP EBX
0061C851  8B E5                     MOV ESP,EBP
0061C853  5D                        POP EBP
0061C854  C2 04 00                  RET 0x4
LAB_0061c857:
0061C857  5F                        POP EDI
0061C858  5E                        POP ESI
0061C859  33 C0                     XOR EAX,EAX
0061C85B  5B                        POP EBX
0061C85C  8B E5                     MOV ESP,EBP
0061C85E  5D                        POP EBP
0061C85F  C2 04 00                  RET 0x4
LAB_0061c862:
0061C862  5F                        POP EDI
0061C863  8B C3                     MOV EAX,EBX
0061C865  5E                        POP ESI
0061C866  5B                        POP EBX
0061C867  8B E5                     MOV ESP,EBP
0061C869  5D                        POP EBP
0061C86A  C2 04 00                  RET 0x4
