FUN_0058f1e0:
0058F1E0  55                        PUSH EBP
0058F1E1  8B EC                     MOV EBP,ESP
0058F1E3  53                        PUSH EBX
0058F1E4  56                        PUSH ESI
0058F1E5  8B F1                     MOV ESI,ECX
0058F1E7  57                        PUSH EDI
0058F1E8  66 8B 56 47               MOV DX,word ptr [ESI + 0x47]
0058F1EC  8B 86 7F 02 00 00         MOV EAX,dword ptr [ESI + 0x27f]
0058F1F2  0F BF CA                  MOVSX ECX,DX
0058F1F5  3B C8                     CMP ECX,EAX
0058F1F7  0F 8C 92 00 00 00         JL 0x0058f28f
0058F1FD  3B 8E 87 02 00 00         CMP ECX,dword ptr [ESI + 0x287]
0058F203  0F 8F 86 00 00 00         JG 0x0058f28f
0058F209  66 8B 7E 49               MOV DI,word ptr [ESI + 0x49]
0058F20D  8B 9E 83 02 00 00         MOV EBX,dword ptr [ESI + 0x283]
0058F213  0F BF CF                  MOVSX ECX,DI
0058F216  3B CB                     CMP ECX,EBX
0058F218  7C 75                     JL 0x0058f28f
0058F21A  3B 8E 8B 02 00 00         CMP ECX,dword ptr [ESI + 0x28b]
0058F220  7F 6D                     JG 0x0058f28f
0058F222  66 3B 96 31 02 00 00      CMP DX,word ptr [ESI + 0x231]
0058F229  8D 86 31 02 00 00         LEA EAX,[ESI + 0x231]
0058F22F  75 16                     JNZ 0x0058f247
0058F231  66 3B BE 33 02 00 00      CMP DI,word ptr [ESI + 0x233]
0058F238  75 0D                     JNZ 0x0058f247
0058F23A  66 8B 4E 4B               MOV CX,word ptr [ESI + 0x4b]
0058F23E  66 3B 8E 35 02 00 00      CMP CX,word ptr [ESI + 0x235]
0058F245  74 07                     JZ 0x0058f24e
LAB_0058f247:
0058F247  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0058F24A  85 C9                     TEST ECX,ECX
0058F24C  74 37                     JZ 0x0058f285
LAB_0058f24e:
0058F24E  8D 96 37 02 00 00         LEA EDX,[ESI + 0x237]
0058F254  8D 8E 35 02 00 00         LEA ECX,[ESI + 0x235]
0058F25A  52                        PUSH EDX
0058F25B  8D 96 33 02 00 00         LEA EDX,[ESI + 0x233]
0058F261  51                        PUSH ECX
0058F262  52                        PUSH EDX
0058F263  50                        PUSH EAX
0058F264  8B CE                     MOV ECX,ESI
0058F266  E8 E1 26 E7 FF            CALL 0x0040194c
0058F26B  8B F8                     MOV EDI,EAX
0058F26D  83 FF 02                  CMP EDI,0x2
0058F270  0F 85 D4 00 00 00         JNZ 0x0058f34a
0058F276  C7 86 53 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x253],0x0
0058F280  E9 C5 00 00 00            JMP 0x0058f34a
LAB_0058f285:
0058F285  BF 02 00 00 00            MOV EDI,0x2
0058F28A  E9 BB 00 00 00            JMP 0x0058f34a
LAB_0058f28f:
0058F28F  8B 8E 87 02 00 00         MOV ECX,dword ptr [ESI + 0x287]
0058F295  8B 9E 83 02 00 00         MOV EBX,dword ptr [ESI + 0x283]
0058F29B  2B C8                     SUB ECX,EAX
0058F29D  8D 41 FF                  LEA EAX,[ECX + -0x1]
0058F2A0  99                        CDQ
0058F2A1  8B F8                     MOV EDI,EAX
0058F2A3  8B 86 8B 02 00 00         MOV EAX,dword ptr [ESI + 0x28b]
0058F2A9  33 FA                     XOR EDI,EDX
0058F2AB  2B C3                     SUB EAX,EBX
0058F2AD  2B FA                     SUB EDI,EDX
0058F2AF  48                        DEC EAX
0058F2B0  99                        CDQ
0058F2B1  8B D8                     MOV EBX,EAX
0058F2B3  33 DA                     XOR EBX,EDX
0058F2B5  2B DA                     SUB EBX,EDX
0058F2B7  85 C9                     TEST ECX,ECX
0058F2B9  7E 07                     JLE 0x0058f2c2
0058F2BB  B9 01 00 00 00            MOV ECX,0x1
0058F2C0  EB 04                     JMP 0x0058f2c6
LAB_0058f2c2:
0058F2C2  F7 D9                     NEG ECX
0058F2C4  1B C9                     SBB ECX,ECX
LAB_0058f2c6:
0058F2C6  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0058F2C9  33 D2                     XOR EDX,EDX
0058F2CB  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0058F2D1  05 39 30 00 00            ADD EAX,0x3039
0058F2D6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F2D9  C1 E8 10                  SHR EAX,0x10
0058F2DC  47                        INC EDI
0058F2DD  F7 F7                     DIV EDI
0058F2DF  8B 86 8B 02 00 00         MOV EAX,dword ptr [ESI + 0x28b]
0058F2E5  0F AF D1                  IMUL EDX,ECX
0058F2E8  66 03 96 7F 02 00 00      ADD DX,word ptr [ESI + 0x27f]
0058F2EF  66 89 96 31 02 00 00      MOV word ptr [ESI + 0x231],DX
0058F2F6  8B 96 83 02 00 00         MOV EDX,dword ptr [ESI + 0x283]
0058F2FC  2B C2                     SUB EAX,EDX
0058F2FE  85 C0                     TEST EAX,EAX
0058F300  7E 07                     JLE 0x0058f309
0058F302  B9 01 00 00 00            MOV ECX,0x1
0058F307  EB 06                     JMP 0x0058f30f
LAB_0058f309:
0058F309  F7 D8                     NEG EAX
0058F30B  1B C0                     SBB EAX,EAX
0058F30D  8B C8                     MOV ECX,EAX
LAB_0058f30f:
0058F30F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0058F312  BF 03 00 00 00            MOV EDI,0x3
0058F317  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0058F31D  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0058F323  33 D2                     XOR EDX,EDX
0058F325  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0058F328  C1 E8 10                  SHR EAX,0x10
0058F32B  43                        INC EBX
0058F32C  F7 F3                     DIV EBX
0058F32E  66 8B 46 4B               MOV AX,word ptr [ESI + 0x4b]
0058F332  66 89 86 35 02 00 00      MOV word ptr [ESI + 0x235],AX
0058F339  0F AF D1                  IMUL EDX,ECX
0058F33C  66 03 96 83 02 00 00      ADD DX,word ptr [ESI + 0x283]
0058F343  66 89 96 33 02 00 00      MOV word ptr [ESI + 0x233],DX
LAB_0058f34a:
0058F34A  8D 47 FF                  LEA EAX,[EDI + -0x1]
0058F34D  83 F8 05                  CMP EAX,0x5
0058F350  77 37                     JA 0x0058f389
switchD_0058f352::switchD:
0058F352  FF 24 85 94 F3 58 00      JMP dword ptr [EAX*0x4 + 0x58f394]
switchD_0058f352::caseD_1:
0058F359  8B CE                     MOV ECX,ESI
0058F35B  E8 DE 5B E7 FF            CALL 0x00404f3e
0058F360  85 C0                     TEST EAX,EAX
0058F362  75 25                     JNZ 0x0058f389
0058F364  33 FF                     XOR EDI,EDI
0058F366  8B C7                     MOV EAX,EDI
0058F368  5F                        POP EDI
0058F369  5E                        POP ESI
0058F36A  5B                        POP EBX
0058F36B  5D                        POP EBP
0058F36C  C2 04 00                  RET 0x4
switchD_0058f352::caseD_6:
0058F36F  66 8B 8E 37 02 00 00      MOV CX,word ptr [ESI + 0x237]
0058F376  66 8B 56 6C               MOV DX,word ptr [ESI + 0x6c]
0058F37A  51                        PUSH ECX
0058F37B  52                        PUSH EDX
0058F37C  8B CE                     MOV ECX,ESI
0058F37E  E8 66 2E E7 FF            CALL 0x004021e9
0058F383  85 C0                     TEST EAX,EAX
0058F385  74 02                     JZ 0x0058f389
0058F387  33 FF                     XOR EDI,EDI
switchD_0058f352::caseD_4:
0058F389  8B C7                     MOV EAX,EDI
0058F38B  5F                        POP EDI
0058F38C  5E                        POP ESI
0058F38D  5B                        POP EBX
0058F38E  5D                        POP EBP
0058F38F  C2 04 00                  RET 0x4
