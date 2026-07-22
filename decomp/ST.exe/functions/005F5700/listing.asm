STBHEShellC::sub_005F5700:
005F5700  55                        PUSH EBP
005F5701  8B EC                     MOV EBP,ESP
005F5703  83 EC 1C                  SUB ESP,0x1c
005F5706  53                        PUSH EBX
005F5707  56                        PUSH ESI
005F5708  8B F1                     MOV ESI,ECX
005F570A  57                        PUSH EDI
005F570B  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
005F5712  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5717  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
005F571D  85 C9                     TEST ECX,ECX
005F571F  7C 10                     JL 0x005f5731
005F5721  F7 E9                     IMUL ECX
005F5723  D1 FA                     SAR EDX,0x1
005F5725  8B C2                     MOV EAX,EDX
005F5727  C1 E8 1F                  SHR EAX,0x1f
005F572A  03 D0                     ADD EDX,EAX
005F572C  0F BF DA                  MOVSX EBX,DX
005F572F  EB 0F                     JMP 0x005f5740
LAB_005f5731:
005F5731  F7 E9                     IMUL ECX
005F5733  D1 FA                     SAR EDX,0x1
005F5735  8B CA                     MOV ECX,EDX
005F5737  C1 E9 1F                  SHR ECX,0x1f
005F573A  03 D1                     ADD EDX,ECX
005F573C  0F BF DA                  MOVSX EBX,DX
005F573F  4B                        DEC EBX
LAB_005f5740:
005F5740  8B 8E 15 01 00 00         MOV ECX,dword ptr [ESI + 0x115]
005F5746  B8 79 19 8C 02            MOV EAX,0x28c1979
005F574B  85 C9                     TEST ECX,ECX
005F574D  7C 10                     JL 0x005f575f
005F574F  F7 E9                     IMUL ECX
005F5751  D1 FA                     SAR EDX,0x1
005F5753  8B C2                     MOV EAX,EDX
005F5755  C1 E8 1F                  SHR EAX,0x1f
005F5758  03 D0                     ADD EDX,EAX
005F575A  0F BF FA                  MOVSX EDI,DX
005F575D  EB 0F                     JMP 0x005f576e
LAB_005f575f:
005F575F  F7 E9                     IMUL ECX
005F5761  D1 FA                     SAR EDX,0x1
005F5763  8B CA                     MOV ECX,EDX
005F5765  C1 E9 1F                  SHR ECX,0x1f
005F5768  03 D1                     ADD EDX,ECX
005F576A  0F BF FA                  MOVSX EDI,DX
005F576D  4F                        DEC EDI
LAB_005f576e:
005F576E  B8 79 19 8C 02            MOV EAX,0x28c1979
005F5773  8B CF                     MOV ECX,EDI
005F5775  F7 6D 0C                  IMUL dword ptr [EBP + 0xc]
005F5778  D1 FA                     SAR EDX,0x1
005F577A  8B C2                     MOV EAX,EDX
005F577C  C1 E8 1F                  SHR EAX,0x1f
005F577F  8D 44 02 01               LEA EAX,[EDX + EAX*0x1 + 0x1]
005F5783  8B D3                     MOV EDX,EBX
005F5785  2B C8                     SUB ECX,EAX
005F5787  2B D0                     SUB EDX,EAX
005F5789  8D 7C 38 01               LEA EDI,[EAX + EDI*0x1 + 0x1]
005F578D  8D 5C 18 01               LEA EBX,[EAX + EBX*0x1 + 0x1]
005F5791  85 C9                     TEST ECX,ECX
005F5793  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005F5796  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
005F5799  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005F579C  7D 02                     JGE 0x005f57a0
005F579E  33 C9                     XOR ECX,ECX
LAB_005f57a0:
005F57A0  85 D2                     TEST EDX,EDX
005F57A2  7D 07                     JGE 0x005f57ab
005F57A4  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
LAB_005f57ab:
005F57AB  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
005F57B2  3B F8                     CMP EDI,EAX
005F57B4  7E 03                     JLE 0x005f57b9
005F57B6  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
LAB_005f57b9:
005F57B9  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005F57C0  0F BF C7                  MOVSX EAX,DI
005F57C3  3B D8                     CMP EBX,EAX
005F57C5  7E 03                     JLE 0x005f57ca
005F57C7  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_005f57ca:
005F57CA  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005F57CD  83 FB 04                  CMP EBX,0x4
005F57D0  0F 8F E6 01 00 00         JG 0x005f59bc
005F57D6  85 DB                     TEST EBX,EBX
005F57D8  0F 8C DE 01 00 00         JL 0x005f59bc
005F57DE  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F57E1  8B D1                     MOV EDX,ECX
005F57E3  3B C8                     CMP ECX,EAX
005F57E5  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F57E8  0F 8D C2 01 00 00         JGE 0x005f59b0
005F57EE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
LAB_005f57f1:
005F57F1  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
005F57F4  3B C1                     CMP EAX,ECX
005F57F6  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F57F9  0F 8D A2 01 00 00         JGE 0x005f59a1
LAB_005f57ff:
005F57FF  66 85 C0                  TEST AX,AX
005F5802  0F 8C 7D 01 00 00         JL 0x005f5985
005F5808  66 3B C7                  CMP AX,DI
005F580B  0F 8D 74 01 00 00         JGE 0x005f5985
005F5811  66 85 D2                  TEST DX,DX
005F5814  0F 8C 6B 01 00 00         JL 0x005f5985
005F581A  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
005F5821  0F 8D 5E 01 00 00         JGE 0x005f5985
005F5827  66 85 DB                  TEST BX,BX
005F582A  0F 8C 55 01 00 00         JL 0x005f5985
005F5830  66 3B 1D 44 B2 7F 00      CMP BX,word ptr [0x007fb244]
005F5837  0F 8D 48 01 00 00         JGE 0x005f5985
005F583D  0F BF CA                  MOVSX ECX,DX
005F5840  0F BF D7                  MOVSX EDX,DI
005F5843  0F AF CA                  IMUL ECX,EDX
005F5846  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
005F584D  0F BF FB                  MOVSX EDI,BX
005F5850  0F AF D7                  IMUL EDX,EDI
005F5853  0F BF C0                  MOVSX EAX,AX
005F5856  03 CA                     ADD ECX,EDX
005F5858  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
005F585E  03 C8                     ADD ECX,EAX
005F5860  8B 3C CA                  MOV EDI,dword ptr [EDX + ECX*0x8]
005F5863  85 FF                     TEST EDI,EDI
005F5865  0F 84 1A 01 00 00         JZ 0x005f5985
005F586B  8D 45 FC                  LEA EAX,[EBP + -0x4]
005F586E  8D 4D 0A                  LEA ECX,[EBP + 0xa]
005F5871  50                        PUSH EAX
005F5872  8D 55 FE                  LEA EDX,[EBP + -0x2]
005F5875  51                        PUSH ECX
005F5876  52                        PUSH EDX
005F5877  8B CF                     MOV ECX,EDI
005F5879  E8 65 D9 E0 FF            CALL 0x004031e3
005F587E  8B 47 2C                  MOV EAX,dword ptr [EDI + 0x2c]
005F5881  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
005F5887  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
005F588B  83 F8 01                  CMP EAX,0x1
005F588E  8B 86 15 01 00 00         MOV EAX,dword ptr [ESI + 0x115]
005F5894  50                        PUSH EAX
005F5895  51                        PUSH ECX
005F5896  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F589A  52                        PUSH EDX
005F589B  50                        PUSH EAX
005F589C  0F 85 96 00 00 00         JNZ 0x005f5938
005F58A2  E8 31 76 0B 00            CALL 0x006aced8
005F58A7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F58AA  83 C4 10                  ADD ESP,0x10
005F58AD  3B C1                     CMP EAX,ECX
005F58AF  0F 8C 92 00 00 00         JL 0x005f5947
005F58B5  8B 86 15 01 00 00         MOV EAX,dword ptr [ESI + 0x115]
005F58BB  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
005F58C1  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
005F58C5  50                        PUSH EAX
005F58C6  51                        PUSH ECX
005F58C7  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F58CB  83 C0 64                  ADD EAX,0x64
005F58CE  52                        PUSH EDX
005F58CF  50                        PUSH EAX
005F58D0  E8 03 76 0B 00            CALL 0x006aced8
005F58D5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F58D8  83 C4 10                  ADD ESP,0x10
005F58DB  3B C1                     CMP EAX,ECX
005F58DD  7C 68                     JL 0x005f5947
005F58DF  8B 86 15 01 00 00         MOV EAX,dword ptr [ESI + 0x115]
005F58E5  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
005F58EB  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
005F58EF  50                        PUSH EAX
005F58F0  83 C2 64                  ADD EDX,0x64
005F58F3  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F58F7  51                        PUSH ECX
005F58F8  52                        PUSH EDX
005F58F9  50                        PUSH EAX
005F58FA  E8 D9 75 0B 00            CALL 0x006aced8
005F58FF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F5902  83 C4 10                  ADD ESP,0x10
005F5905  3B C1                     CMP EAX,ECX
005F5907  7C 3E                     JL 0x005f5947
005F5909  8B 86 15 01 00 00         MOV EAX,dword ptr [ESI + 0x115]
005F590F  8B 8E 11 01 00 00         MOV ECX,dword ptr [ESI + 0x111]
005F5915  0F BF 55 0A               MOVSX EDX,word ptr [EBP + 0xa]
005F5919  50                        PUSH EAX
005F591A  83 C2 64                  ADD EDX,0x64
005F591D  0F BF 45 FE               MOVSX EAX,word ptr [EBP + -0x2]
005F5921  51                        PUSH ECX
005F5922  83 C0 64                  ADD EAX,0x64
005F5925  52                        PUSH EDX
005F5926  50                        PUSH EAX
005F5927  E8 AC 75 0B 00            CALL 0x006aced8
005F592C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F592F  83 C4 10                  ADD ESP,0x10
005F5932  3B C1                     CMP EAX,ECX
005F5934  7D 4F                     JGE 0x005f5985
005F5936  EB 0F                     JMP 0x005f5947
LAB_005f5938:
005F5938  E8 9B 75 0B 00            CALL 0x006aced8
005F593D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005F5940  83 C4 10                  ADD ESP,0x10
005F5943  3B C1                     CMP EAX,ECX
005F5945  7D 3E                     JGE 0x005f5985
LAB_005f5947:
005F5947  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
005F594A  66 8B 8E 85 00 00 00      MOV CX,word ptr [ESI + 0x85]
005F5951  8B 46 7D                  MOV EAX,dword ptr [ESI + 0x7d]
005F5954  42                        INC EDX
005F5955  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005F5958  8B 96 81 00 00 00         MOV EDX,dword ptr [ESI + 0x81]
005F595E  68 10 01 00 00            PUSH 0x110
005F5963  68 B5 00 00 00            PUSH 0xb5
005F5968  51                        PUSH ECX
005F5969  52                        PUSH EDX
005F596A  C1 E0 02                  SHL EAX,0x2
005F596D  B9 08 00 00 00            MOV ECX,0x8
005F5972  57                        PUSH EDI
005F5973  99                        CDQ
005F5974  2B CB                     SUB ECX,EBX
005F5976  F7 F9                     IDIV ECX
005F5978  8B 56 51                  MOV EDX,dword ptr [ESI + 0x51]
005F597B  8D 4E 20                  LEA ECX,[ESI + 0x20]
005F597E  50                        PUSH EAX
005F597F  52                        PUSH EDX
005F5980  E8 9D E4 E0 FF            CALL 0x00403e22
STBHEShellC::sub_005F5700::cf_continue_loop_005F5985:
005F5985  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
005F5988  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
005F598B  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
005F598E  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
005F5995  40                        INC EAX
005F5996  3B C1                     CMP EAX,ECX
005F5998  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005F599B  0F 8C 5E FE FF FF         JL 0x005f57ff
LAB_005f59a1:
005F59A1  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
005F59A4  42                        INC EDX
005F59A5  3B D0                     CMP EDX,EAX
005F59A7  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F59AA  0F 8C 41 FE FF FF         JL 0x005f57f1
LAB_005f59b0:
005F59B0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005F59B3  5F                        POP EDI
005F59B4  5E                        POP ESI
005F59B5  5B                        POP EBX
005F59B6  8B E5                     MOV ESP,EBP
005F59B8  5D                        POP EBP
005F59B9  C2 08 00                  RET 0x8
LAB_005f59bc:
005F59BC  5F                        POP EDI
005F59BD  5E                        POP ESI
005F59BE  33 C0                     XOR EAX,EAX
005F59C0  5B                        POP EBX
005F59C1  8B E5                     MOV ESP,EBP
005F59C3  5D                        POP EBP
005F59C4  C2 08 00                  RET 0x8
