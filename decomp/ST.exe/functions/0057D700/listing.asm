STFishC::sub_0057D700:
0057D700  55                        PUSH EBP
0057D701  8B EC                     MOV EBP,ESP
0057D703  83 EC 18                  SUB ESP,0x18
0057D706  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0057D70D  53                        PUSH EBX
0057D70E  56                        PUSH ESI
0057D70F  57                        PUSH EDI
0057D710  33 FF                     XOR EDI,EDI
0057D712  33 DB                     XOR EBX,EBX
0057D714  48                        DEC EAX
0057D715  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0057D718  8B F1                     MOV ESI,ECX
0057D71A  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0057D721  48                        DEC EAX
0057D722  8D 4D FC                  LEA ECX,[EBP + -0x4]
0057D725  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0057D728  8D 45 FE                  LEA EAX,[EBP + -0x2]
0057D72B  50                        PUSH EAX
0057D72C  8D 55 FA                  LEA EDX,[EBP + -0x6]
0057D72F  51                        PUSH ECX
0057D730  52                        PUSH EDX
0057D731  8B CE                     MOV ECX,ESI
0057D733  E8 8D 41 E8 FF            CALL 0x004018c5
0057D738  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0057D73D  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0057D743  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0057D747  83 E1 01                  AND ECX,0x1
0057D74A  2B C1                     SUB EAX,ECX
0057D74C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0057D74F  79 07                     JNS 0x0057d758
0057D751  C7 45 EC 01 00 00 00      MOV dword ptr [EBP + -0x14],0x1
LAB_0057d758:
0057D758  8B 86 67 02 00 00         MOV EAX,dword ptr [ESI + 0x267]
0057D75E  05 19 FF FF FF            ADD EAX,0xffffff19
0057D763  83 F8 04                  CMP EAX,0x4
0057D766  0F 87 DE 03 00 00         JA 0x0057db4a
switchD_0057d76c::switchD:
0057D76C  FF 24 85 40 DD 57 00      JMP dword ptr [EAX*0x4 + 0x57dd40]
switchD_0057d76c::caseD_e7:
0057D773  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D776  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0057D779  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D77F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057D785  33 D2                     XOR EDX,EDX
0057D787  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D78A  C1 E8 10                  SHR EAX,0x10
0057D78D  41                        INC ECX
0057D78E  F7 F1                     DIV ECX
0057D790  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0057D793  8B FA                     MOV EDI,EDX
0057D795  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D798  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D79E  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057D7A4  33 D2                     XOR EDX,EDX
0057D7A6  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D7A9  C1 E8 10                  SHR EAX,0x10
0057D7AC  41                        INC ECX
0057D7AD  F7 F1                     DIV ECX
0057D7AF  8B DA                     MOV EBX,EDX
0057D7B1  E9 94 03 00 00            JMP 0x0057db4a
switchD_0057d76c::caseD_e8:
0057D7B6  66 8B 4E 47               MOV CX,word ptr [ESI + 0x47]
0057D7BA  66 85 C9                  TEST CX,CX
0057D7BD  7F 16                     JG 0x0057d7d5
0057D7BF  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0057D7C3  66 3D E1 00               CMP AX,0xe1
0057D7C7  74 6D                     JZ 0x0057d836
0057D7C9  66 3D B4 00               CMP AX,0xb4
0057D7CD  74 67                     JZ 0x0057d836
0057D7CF  66 3D 87 00               CMP AX,0x87
0057D7D3  74 61                     JZ 0x0057d836
LAB_0057d7d5:
0057D7D5  0F BF C1                  MOVSX EAX,CX
0057D7D8  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0057D7DB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0057D7DE  3B C1                     CMP EAX,ECX
0057D7E0  7C 15                     JL 0x0057d7f7
0057D7E2  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0057D7E6  66 3D 2D 00               CMP AX,0x2d
0057D7EA  74 4A                     JZ 0x0057d836
0057D7EC  66 85 C0                  TEST AX,AX
0057D7EF  74 45                     JZ 0x0057d836
0057D7F1  66 3D 3B 01               CMP AX,0x13b
0057D7F5  74 3F                     JZ 0x0057d836
LAB_0057d7f7:
0057D7F7  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
0057D7FB  66 85 C9                  TEST CX,CX
0057D7FE  7F 16                     JG 0x0057d816
0057D800  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0057D804  66 3D 87 00               CMP AX,0x87
0057D808  74 2C                     JZ 0x0057d836
0057D80A  66 3D 5A 00               CMP AX,0x5a
0057D80E  74 26                     JZ 0x0057d836
0057D810  66 3D 2D 00               CMP AX,0x2d
0057D814  74 20                     JZ 0x0057d836
LAB_0057d816:
0057D816  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0057D819  0F BF C9                  MOVSX ECX,CX
0057D81C  3B C8                     CMP ECX,EAX
0057D81E  7C 4B                     JL 0x0057d86b
0057D820  66 8B 46 6C               MOV AX,word ptr [ESI + 0x6c]
0057D824  66 3D E1 00               CMP AX,0xe1
0057D828  74 0C                     JZ 0x0057d836
0057D82A  66 3D 0E 01               CMP AX,0x10e
0057D82E  74 06                     JZ 0x0057d836
0057D830  66 3D 3B 01               CMP AX,0x13b
0057D834  75 35                     JNZ 0x0057d86b
LAB_0057d836:
0057D836  0F BF C0                  MOVSX EAX,AX
0057D839  83 C0 2D                  ADD EAX,0x2d
0057D83C  B9 68 01 00 00            MOV ECX,0x168
0057D841  99                        CDQ
0057D842  F7 F9                     IDIV ECX
0057D844  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0057D847  85 D2                     TEST EDX,EDX
0057D849  89 10                     MOV dword ptr [EAX],EDX
0057D84B  0F 8D DF 04 00 00         JGE 0x0057dd30
LAB_0057d851:
0057D851  8B 08                     MOV ECX,dword ptr [EAX]
0057D853  81 C1 68 01 00 00         ADD ECX,0x168
0057D859  89 08                     MOV dword ptr [EAX],ECX
0057D85B  78 F4                     JS 0x0057d851
0057D85D  5F                        POP EDI
0057D85E  5E                        POP ESI
0057D85F  B8 02 00 00 00            MOV EAX,0x2
0057D864  5B                        POP EBX
0057D865  8B E5                     MOV ESP,EBP
0057D867  5D                        POP EBP
0057D868  C2 10 00                  RET 0x10
LAB_0057d86b:
0057D86B  0F BF 56 6C               MOVSX EDX,word ptr [ESI + 0x6c]
0057D86F  B8 B7 60 0B B6            MOV EAX,0xb60b60b7
0057D874  F7 EA                     IMUL EDX
0057D876  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0057D87A  03 D0                     ADD EDX,EAX
0057D87C  C1 FA 05                  SAR EDX,0x5
0057D87F  8B C2                     MOV EAX,EDX
0057D881  C1 E8 1F                  SHR EAX,0x1f
0057D884  03 D0                     ADD EDX,EAX
0057D886  83 FA 07                  CMP EDX,0x7
0057D889  0F 87 A3 02 00 00         JA 0x0057db32
switchD_0057d88f::switchD:
0057D88F  FF 24 95 54 DD 57 00      JMP dword ptr [EDX*0x4 + 0x57dd54]
switchD_0057d88f::caseD_0:
0057D896  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0057D899  85 C0                     TEST EAX,EAX
0057D89B  7D 11                     JGE 0x0057d8ae
0057D89D  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0057D8A0  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0057D8A6  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0057D8AC  EB 0F                     JMP 0x0057d8bd
LAB_0057d8ae:
0057D8AE  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D8B1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D8B7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0057d8bd:
0057D8BD  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0057D8C0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0057D8C3  2B F9                     SUB EDI,ECX
0057D8C5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D8C8  47                        INC EDI
0057D8C9  33 D2                     XOR EDX,EDX
0057D8CB  C1 E8 10                  SHR EAX,0x10
0057D8CE  F7 F7                     DIV EDI
0057D8D0  8B FA                     MOV EDI,EDX
0057D8D2  03 F9                     ADD EDI,ECX
0057D8D4  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057D8D8  8B C7                     MOV EAX,EDI
0057D8DA  2B C1                     SUB EAX,ECX
0057D8DC  E9 CC 00 00 00            JMP 0x0057d9ad
switchD_0057d88f::caseD_1:
0057D8E1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D8E4  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D8EA  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057D8F0  33 D2                     XOR EDX,EDX
0057D8F2  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D8F5  C1 E8 10                  SHR EAX,0x10
0057D8F8  41                        INC ECX
0057D8F9  F7 F1                     DIV ECX
0057D8FB  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057D8FF  85 C9                     TEST ECX,ECX
0057D901  8B DA                     MOV EBX,EDX
0057D903  0F 8C 01 02 00 00         JL 0x0057db0a
0057D909  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D90C  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D912  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057D918  E9 FB 01 00 00            JMP 0x0057db18
switchD_0057d88f::caseD_2:
0057D91D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057D920  33 D2                     XOR EDX,EDX
0057D922  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057D928  05 39 30 00 00            ADD EAX,0x3039
0057D92D  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D930  C1 E8 10                  SHR EAX,0x10
0057D933  41                        INC ECX
0057D934  F7 F1                     DIV ECX
0057D936  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
0057D93A  8B DA                     MOV EBX,EDX
0057D93C  2B C3                     SUB EAX,EBX
0057D93E  E9 45 01 00 00            JMP 0x0057da88
switchD_0057d88f::caseD_3:
0057D943  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0057D946  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0057D949  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0057D94F  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0057D955  8D 4A 01                  LEA ECX,[EDX + 0x1]
0057D958  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D95B  33 D2                     XOR EDX,EDX
0057D95D  C1 E8 10                  SHR EAX,0x10
0057D960  F7 F1                     DIV ECX
0057D962  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0057D966  8B FA                     MOV EDI,EDX
0057D968  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D96B  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D971  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057D977  33 D2                     XOR EDX,EDX
0057D979  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D97C  C1 E8 10                  SHR EAX,0x10
0057D97F  41                        INC ECX
0057D980  F7 F1                     DIV ECX
0057D982  8B DA                     MOV EBX,EDX
0057D984  E9 A3 01 00 00            JMP 0x0057db2c
switchD_0057d88f::caseD_4:
0057D989  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057D98C  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0057D98F  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057D995  05 39 30 00 00            ADD EAX,0x3039
0057D99A  33 D2                     XOR EDX,EDX
0057D99C  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D99F  C1 E8 10                  SHR EAX,0x10
0057D9A2  41                        INC ECX
0057D9A3  F7 F1                     DIV ECX
0057D9A5  0F BF 46 47               MOVSX EAX,word ptr [ESI + 0x47]
0057D9A9  8B FA                     MOV EDI,EDX
0057D9AB  2B C7                     SUB EAX,EDI
LAB_0057d9ad:
0057D9AD  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0057D9B1  8D 1C 01                  LEA EBX,[ECX + EAX*0x1]
0057D9B4  2B C8                     SUB ECX,EAX
0057D9B6  79 25                     JNS 0x0057d9dd
0057D9B8  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D9BB  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D9C1  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0057d9c7:
0057D9C7  2B D9                     SUB EBX,ECX
0057D9C9  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057D9CC  43                        INC EBX
0057D9CD  33 D2                     XOR EDX,EDX
0057D9CF  C1 E8 10                  SHR EAX,0x10
0057D9D2  F7 F3                     DIV EBX
0057D9D4  8B DA                     MOV EBX,EDX
0057D9D6  03 D9                     ADD EBX,ECX
0057D9D8  E9 4F 01 00 00            JMP 0x0057db2c
LAB_0057d9dd:
0057D9DD  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057D9E0  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057D9E6  05 39 30 00 00            ADD EAX,0x3039
0057D9EB  EB DA                     JMP 0x0057d9c7
switchD_0057d88f::caseD_5:
0057D9ED  85 C9                     TEST ECX,ECX
0057D9EF  7D 11                     JGE 0x0057da02
0057D9F1  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057D9F4  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057D9FA  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057DA00  EB 0E                     JMP 0x0057da10
LAB_0057da02:
0057DA02  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DA05  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DA0B  05 39 30 00 00            ADD EAX,0x3039
LAB_0057da10:
0057DA10  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0057DA13  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DA16  2B F9                     SUB EDI,ECX
0057DA18  33 D2                     XOR EDX,EDX
0057DA1A  47                        INC EDI
0057DA1B  C1 E8 10                  SHR EAX,0x10
0057DA1E  F7 F7                     DIV EDI
0057DA20  8B DA                     MOV EBX,EDX
0057DA22  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057DA25  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057DA2B  03 D9                     ADD EBX,ECX
0057DA2D  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057DA31  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057DA37  33 D2                     XOR EDX,EDX
0057DA39  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DA3C  C1 E8 10                  SHR EAX,0x10
0057DA3F  41                        INC ECX
0057DA40  F7 F1                     DIV ECX
0057DA42  8B FA                     MOV EDI,EDX
0057DA44  E9 E3 00 00 00            JMP 0x0057db2c
switchD_0057d88f::caseD_6:
0057DA49  85 C9                     TEST ECX,ECX
0057DA4B  7D 10                     JGE 0x0057da5d
0057DA4D  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DA50  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DA56  05 39 30 00 00            ADD EAX,0x3039
0057DA5B  EB 0F                     JMP 0x0057da6c
LAB_0057da5d:
0057DA5D  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057DA60  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057DA66  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
LAB_0057da6c:
0057DA6C  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0057DA6F  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DA72  2B F9                     SUB EDI,ECX
0057DA74  33 D2                     XOR EDX,EDX
0057DA76  47                        INC EDI
0057DA77  C1 E8 10                  SHR EAX,0x10
0057DA7A  F7 F7                     DIV EDI
0057DA7C  8B DA                     MOV EBX,EDX
0057DA7E  03 D9                     ADD EBX,ECX
0057DA80  0F BF 4E 49               MOVSX ECX,word ptr [ESI + 0x49]
0057DA84  8B C3                     MOV EAX,EBX
0057DA86  2B C1                     SUB EAX,ECX
LAB_0057da88:
0057DA88  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057DA8C  8D 3C 01                  LEA EDI,[ECX + EAX*0x1]
0057DA8F  2B C8                     SUB ECX,EAX
0057DA91  79 14                     JNS 0x0057daa7
0057DA93  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057DA96  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057DA9C  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057DAA2  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DAA5  EB 77                     JMP 0x0057db1e
LAB_0057daa7:
0057DAA7  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DAAA  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DAB0  05 39 30 00 00            ADD EAX,0x3039
0057DAB5  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DAB8  EB 64                     JMP 0x0057db1e
switchD_0057d88f::caseD_7:
0057DABA  85 C9                     TEST ECX,ECX
0057DABC  7D 11                     JGE 0x0057dacf
0057DABE  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057DAC1  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057DAC7  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057DACD  EB 0E                     JMP 0x0057dadd
LAB_0057dacf:
0057DACF  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DAD2  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DAD8  05 39 30 00 00            ADD EAX,0x3039
LAB_0057dadd:
0057DADD  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0057DAE0  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DAE3  2B F9                     SUB EDI,ECX
0057DAE5  33 D2                     XOR EDX,EDX
0057DAE7  47                        INC EDI
0057DAE8  C1 E8 10                  SHR EAX,0x10
0057DAEB  F7 F7                     DIV EDI
0057DAED  8B DA                     MOV EBX,EDX
0057DAEF  03 D9                     ADD EBX,ECX
0057DAF1  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057DAF5  85 C9                     TEST ECX,ECX
0057DAF7  7D 11                     JGE 0x0057db0a
0057DAF9  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0057DAFC  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0057DB02  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0057DB08  EB 0E                     JMP 0x0057db18
LAB_0057db0a:
0057DB0A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DB0D  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DB13  05 39 30 00 00            ADD EAX,0x3039
LAB_0057db18:
0057DB18  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0057DB1B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
LAB_0057db1e:
0057DB1E  2B F9                     SUB EDI,ECX
0057DB20  33 D2                     XOR EDX,EDX
0057DB22  47                        INC EDI
0057DB23  C1 E8 10                  SHR EAX,0x10
0057DB26  F7 F7                     DIV EDI
0057DB28  8B FA                     MOV EDI,EDX
0057DB2A  03 F9                     ADD EDI,ECX
LAB_0057db2c:
0057DB2C  85 FF                     TEST EDI,EDI
0057DB2E  7D 02                     JGE 0x0057db32
0057DB30  33 FF                     XOR EDI,EDI
switchD_0057d88f::default:
0057DB32  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0057DB35  3B F8                     CMP EDI,EAX
0057DB37  7C 02                     JL 0x0057db3b
0057DB39  8B F8                     MOV EDI,EAX
LAB_0057db3b:
0057DB3B  85 DB                     TEST EBX,EBX
0057DB3D  7D 02                     JGE 0x0057db41
0057DB3F  33 DB                     XOR EBX,EBX
LAB_0057db41:
0057DB41  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0057DB44  3B D8                     CMP EBX,EAX
0057DB46  7C 02                     JL 0x0057db4a
0057DB48  8B D8                     MOV EBX,EAX
switchD_0057d76c::default:
0057DB4A  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057DB4E  3B F9                     CMP EDI,ECX
0057DB50  0F 85 93 00 00 00         JNZ 0x0057dbe9
0057DB56  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0057DB5A  3B DA                     CMP EBX,EDX
0057DB5C  0F 85 87 00 00 00         JNZ 0x0057dbe9
0057DB62  8B 86 67 02 00 00         MOV EAX,dword ptr [ESI + 0x267]
0057DB68  3D EB 00 00 00            CMP EAX,0xeb
0057DB6D  74 3E                     JZ 0x0057dbad
0057DB6F  3D E8 00 00 00            CMP EAX,0xe8
0057DB74  74 37                     JZ 0x0057dbad
0057DB76  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0057DB79  33 D2                     XOR EDX,EDX
0057DB7B  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0057DB81  05 39 30 00 00            ADD EAX,0x3039
0057DB86  B9 05 00 00 00            MOV ECX,0x5
0057DB8B  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0057DB8E  C1 E8 10                  SHR EAX,0x10
0057DB91  F7 F1                     DIV ECX
0057DB93  0F BF 46 4B               MOVSX EAX,word ptr [ESI + 0x4b]
0057DB97  0F BF D2                  MOVSX EDX,DX
0057DB9A  2B C2                     SUB EAX,EDX
0057DB9C  79 02                     JNS 0x0057dba0
0057DB9E  F7 D8                     NEG EAX
LAB_0057dba0:
0057DBA0  99                        CDQ
0057DBA1  B9 05 00 00 00            MOV ECX,0x5
0057DBA6  F7 F9                     IDIV ECX
0057DBA8  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0057DBAB  EB 3C                     JMP 0x0057dbe9
LAB_0057dbad:
0057DBAD  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0057DBB1  83 C0 2D                  ADD EAX,0x2d
0057DBB4  B9 68 01 00 00            MOV ECX,0x168
0057DBB9  99                        CDQ
0057DBBA  F7 F9                     IDIV ECX
0057DBBC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0057DBBF  85 D2                     TEST EDX,EDX
0057DBC1  89 10                     MOV dword ptr [EAX],EDX
0057DBC3  0F 8D 67 01 00 00         JGE 0x0057dd30
LAB_0057dbc9:
0057DBC9  8B 08                     MOV ECX,dword ptr [EAX]
0057DBCB  81 C1 68 01 00 00         ADD ECX,0x168
0057DBD1  89 08                     MOV dword ptr [EAX],ECX
0057DBD3  78 F4                     JS 0x0057dbc9
0057DBD5  5F                        POP EDI
0057DBD6  5E                        POP ESI
0057DBD7  B8 02 00 00 00            MOV EAX,0x2
0057DBDC  5B                        POP EBX
0057DBDD  8B E5                     MOV ESP,EBP
0057DBDF  5D                        POP EBP
0057DBE0  C2 10 00                  RET 0x10
LAB_0057dbe3:
0057DBE3  0F 88 23 01 00 00         JS 0x0057dd0c
STFishC::sub_0057D700::cf_continue_loop_0057DBE9:
0057DBE9  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
0057DBEC  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
0057DBF2  52                        PUSH EDX
0057DBF3  53                        PUSH EBX
0057DBF4  57                        PUSH EDI
0057DBF5  E8 41 71 E8 FF            CALL 0x00404d3b
0057DBFA  85 C0                     TEST EAX,EAX
0057DBFC  0F 84 B6 00 00 00         JZ 0x0057dcb8
0057DC02  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
0057DC09  66 85 FF                  TEST DI,DI
0057DC0C  7C 53                     JL 0x0057dc61
0057DC0E  66 3B F9                  CMP DI,CX
0057DC11  7D 4E                     JGE 0x0057dc61
0057DC13  66 85 DB                  TEST BX,BX
0057DC16  7C 49                     JL 0x0057dc61
0057DC18  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0057DC1F  7D 40                     JGE 0x0057dc61
0057DC21  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0057DC24  66 85 C0                  TEST AX,AX
0057DC27  7C 3B                     JL 0x0057dc64
0057DC29  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0057DC30  7D 32                     JGE 0x0057dc64
0057DC32  0F BF D3                  MOVSX EDX,BX
0057DC35  0F BF C9                  MOVSX ECX,CX
0057DC38  0F AF D1                  IMUL EDX,ECX
0057DC3B  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0057DC42  0F BF C0                  MOVSX EAX,AX
0057DC45  0F AF C8                  IMUL ECX,EAX
0057DC48  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0057DC4D  03 D1                     ADD EDX,ECX
0057DC4F  0F BF CF                  MOVSX ECX,DI
0057DC52  03 D1                     ADD EDX,ECX
0057DC54  83 3C D0 00               CMP dword ptr [EAX + EDX*0x8],0x0
0057DC58  75 5E                     JNZ 0x0057dcb8
0057DC5A  66 8B 0D 40 B2 7F 00      MOV CX,word ptr [0x007fb240]
LAB_0057dc61:
0057DC61  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_0057dc64:
0057DC64  66 85 FF                  TEST DI,DI
0057DC67  0F 8C 82 00 00 00         JL 0x0057dcef
0057DC6D  66 3B F9                  CMP DI,CX
0057DC70  7D 7D                     JGE 0x0057dcef
0057DC72  66 85 DB                  TEST BX,BX
0057DC75  7C 78                     JL 0x0057dcef
0057DC77  66 3B 1D 42 B2 7F 00      CMP BX,word ptr [0x007fb242]
0057DC7E  7D 6F                     JGE 0x0057dcef
0057DC80  66 85 C0                  TEST AX,AX
0057DC83  7C 6A                     JL 0x0057dcef
0057DC85  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
0057DC8C  7D 61                     JGE 0x0057dcef
0057DC8E  0F BF D3                  MOVSX EDX,BX
0057DC91  0F BF C9                  MOVSX ECX,CX
0057DC94  0F AF D1                  IMUL EDX,ECX
0057DC97  0F BF 0D 46 B2 7F 00      MOVSX ECX,word ptr [0x007fb246]
0057DC9E  0F BF C0                  MOVSX EAX,AX
0057DCA1  0F AF C8                  IMUL ECX,EAX
0057DCA4  A1 48 B2 7F 00            MOV EAX,[0x007fb248]
0057DCA9  03 D1                     ADD EDX,ECX
0057DCAB  0F BF CF                  MOVSX ECX,DI
0057DCAE  03 D1                     ADD EDX,ECX
0057DCB0  8B 4C D0 04               MOV ECX,dword ptr [EAX + EDX*0x8 + 0x4]
0057DCB4  85 C9                     TEST ECX,ECX
0057DCB6  74 34                     JZ 0x0057dcec
LAB_0057dcb8:
0057DCB8  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0057DCBC  8B C7                     MOV EAX,EDI
0057DCBE  2B C1                     SUB EAX,ECX
0057DCC0  85 C0                     TEST EAX,EAX
0057DCC2  7E 06                     JLE 0x0057dcca
0057DCC4  4F                        DEC EDI
0057DCC5  E9 19 FF FF FF            JMP 0x0057dbe3
LAB_0057dcca:
0057DCCA  7D 06                     JGE 0x0057dcd2
0057DCCC  47                        INC EDI
0057DCCD  E9 17 FF FF FF            JMP 0x0057dbe9
LAB_0057dcd2:
0057DCD2  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0057DCD6  8B C3                     MOV EAX,EBX
0057DCD8  2B C2                     SUB EAX,EDX
0057DCDA  85 C0                     TEST EAX,EAX
0057DCDC  7E 06                     JLE 0x0057dce4
0057DCDE  4B                        DEC EBX
0057DCDF  E9 FF FE FF FF            JMP 0x0057dbe3
LAB_0057dce4:
0057DCE4  7D 26                     JGE 0x0057dd0c
0057DCE6  43                        INC EBX
0057DCE7  E9 FD FE FF FF            JMP 0x0057dbe9
LAB_0057dcec:
0057DCEC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
LAB_0057dcef:
0057DCEF  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057DCF2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0057DCF5  89 39                     MOV dword ptr [ECX],EDI
0057DCF7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0057DCFA  89 1A                     MOV dword ptr [EDX],EBX
0057DCFC  5F                        POP EDI
0057DCFD  89 01                     MOV dword ptr [ECX],EAX
0057DCFF  5E                        POP ESI
0057DD00  B8 01 00 00 00            MOV EAX,0x1
0057DD05  5B                        POP EBX
0057DD06  8B E5                     MOV ESP,EBP
0057DD08  5D                        POP EBP
0057DD09  C2 10 00                  RET 0x10
LAB_0057dd0c:
0057DD0C  0F BF 46 6C               MOVSX EAX,word ptr [ESI + 0x6c]
0057DD10  83 C0 2D                  ADD EAX,0x2d
0057DD13  B9 68 01 00 00            MOV ECX,0x168
0057DD18  99                        CDQ
0057DD19  F7 F9                     IDIV ECX
0057DD1B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0057DD1E  85 D2                     TEST EDX,EDX
0057DD20  89 10                     MOV dword ptr [EAX],EDX
0057DD22  7D 0C                     JGE 0x0057dd30
LAB_0057dd24:
0057DD24  8B 08                     MOV ECX,dword ptr [EAX]
0057DD26  81 C1 68 01 00 00         ADD ECX,0x168
0057DD2C  89 08                     MOV dword ptr [EAX],ECX
0057DD2E  78 F4                     JS 0x0057dd24
LAB_0057dd30:
0057DD30  5F                        POP EDI
0057DD31  5E                        POP ESI
0057DD32  B8 02 00 00 00            MOV EAX,0x2
0057DD37  5B                        POP EBX
0057DD38  8B E5                     MOV ESP,EBP
0057DD3A  5D                        POP EBP
0057DD3B  C2 10 00                  RET 0x10
