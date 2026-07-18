FUN_006c8ec0:
006C8EC0  55                        PUSH EBP
006C8EC1  8B EC                     MOV EBP,ESP
006C8EC3  83 EC 78                  SUB ESP,0x78
006C8EC6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C8EC9  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C8ECC  53                        PUSH EBX
006C8ECD  56                        PUSH ESI
006C8ECE  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006C8ED1  57                        PUSH EDI
006C8ED2  85 C0                     TEST EAX,EAX
006C8ED4  0F 8C 9E 57 00 00         JL 0x006ce678
006C8EDA  85 F6                     TEST ESI,ESI
006C8EDC  0F 8C 96 57 00 00         JL 0x006ce678
006C8EE2  85 D2                     TEST EDX,EDX
006C8EE4  0F 8C 8E 57 00 00         JL 0x006ce678
006C8EEA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C8EED  BB 72 D5 7E 00            MOV EBX,0x7ed572
006C8EF2  0F AF 4D 10               IMUL ECX,dword ptr [EBP + 0x10]
006C8EF6  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006C8EF9  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
006C8F00  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
LAB_006c8f03:
006C8F03  0F BF 4B FE               MOVSX ECX,word ptr [EBX + -0x2]
006C8F07  03 C8                     ADD ECX,EAX
006C8F09  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
006C8F0C  78 3A                     JS 0x006c8f48
006C8F0E  3B 4D 0C                  CMP ECX,dword ptr [EBP + 0xc]
006C8F11  7D 35                     JGE 0x006c8f48
006C8F13  0F BF 3B                  MOVSX EDI,word ptr [EBX]
006C8F16  03 FE                     ADD EDI,ESI
006C8F18  78 2E                     JS 0x006c8f48
006C8F1A  3B 7D 10                  CMP EDI,dword ptr [EBP + 0x10]
006C8F1D  7D 29                     JGE 0x006c8f48
006C8F1F  0F BF 4B 02               MOVSX ECX,word ptr [EBX + 0x2]
006C8F23  03 CA                     ADD ECX,EDX
006C8F25  78 21                     JS 0x006c8f48
006C8F27  3B 4D 14                  CMP ECX,dword ptr [EBP + 0x14]
006C8F2A  7D 19                     JGE 0x006c8f45
006C8F2C  0F AF 4D F0               IMUL ECX,dword ptr [EBP + -0x10]
006C8F30  0F AF 7D 0C               IMUL EDI,dword ptr [EBP + 0xc]
006C8F34  8B 5D 9C                  MOV EBX,dword ptr [EBP + -0x64]
006C8F37  03 D9                     ADD EBX,ECX
006C8F39  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C8F3C  03 FB                     ADD EDI,EBX
006C8F3E  66 83 3C 79 00            CMP word ptr [ECX + EDI*0x2],0x0
006C8F43  74 1A                     JZ 0x006c8f5f
LAB_006c8f45:
006C8F45  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
LAB_006c8f48:
006C8F48  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006C8F4B  83 C3 08                  ADD EBX,0x8
006C8F4E  41                        INC ECX
006C8F4F  81 FB 42 D6 7E 00         CMP EBX,0x7ed642
006C8F55  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006C8F58  89 5D 24                  MOV dword ptr [EBP + 0x24],EBX
006C8F5B  7C A6                     JL 0x006c8f03
006C8F5D  EB 06                     JMP 0x006c8f65
LAB_006c8f5f:
006C8F5F  83 7D B8 1A               CMP dword ptr [EBP + -0x48],0x1a
006C8F63  7C 2D                     JL 0x006c8f92
LAB_006c8f65:
006C8F65  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C8F68  52                        PUSH EDX
006C8F69  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C8F6C  56                        PUSH ESI
006C8F6D  50                        PUSH EAX
006C8F6E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C8F71  52                        PUSH EDX
006C8F72  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C8F75  50                        PUSH EAX
006C8F76  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C8F79  51                        PUSH ECX
006C8F7A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C8F7D  52                        PUSH EDX
006C8F7E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C8F81  50                        PUSH EAX
006C8F82  51                        PUSH ECX
006C8F83  52                        PUSH EDX
006C8F84  E8 07 21 FE FF            CALL 0x006ab090
006C8F89  5F                        POP EDI
006C8F8A  5E                        POP ESI
006C8F8B  5B                        POP EBX
006C8F8C  8B E5                     MOV ESP,EBP
006C8F8E  5D                        POP EBP
006C8F8F  C2 28 00                  RET 0x28
LAB_006c8f92:
006C8F92  8B C8                     MOV ECX,EAX
006C8F94  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C8F97  F7 D9                     NEG ECX
006C8F99  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
006C8F9C  8B CE                     MOV ECX,ESI
006C8F9E  F7 D9                     NEG ECX
006C8FA0  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
006C8FA3  8B CA                     MOV ECX,EDX
006C8FA5  F7 D9                     NEG ECX
006C8FA7  89 4D 8C                  MOV dword ptr [EBP + -0x74],ECX
006C8FAA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C8FAD  2B C8                     SUB ECX,EAX
006C8FAF  2B FA                     SUB EDI,EDX
006C8FB1  49                        DEC ECX
006C8FB2  89 7D 24                  MOV dword ptr [EBP + 0x24],EDI
006C8FB5  89 4D 98                  MOV dword ptr [EBP + -0x68],ECX
006C8FB8  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C8FBB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
006C8FBE  2B CE                     SUB ECX,ESI
006C8FC0  49                        DEC ECX
006C8FC1  0F AF FA                  IMUL EDI,EDX
006C8FC4  89 4D 94                  MOV dword ptr [EBP + -0x6c],ECX
006C8FC7  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C8FCA  2B CA                     SUB ECX,EDX
006C8FCC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C8FCF  0F AF D6                  IMUL EDX,ESI
006C8FD2  49                        DEC ECX
006C8FD3  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006C8FD6  89 4D 90                  MOV dword ptr [EBP + -0x70],ECX
006C8FD9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C8FDC  2B CE                     SUB ECX,ESI
006C8FDE  8B F0                     MOV ESI,EAX
006C8FE0  03 F7                     ADD ESI,EDI
006C8FE2  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006C8FE5  03 D6                     ADD EDX,ESI
006C8FE7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C8FEA  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006C8FEE  8D 14 56                  LEA EDX,[ESI + EDX*0x2]
006C8FF1  8B 75 24                  MOV ESI,dword ptr [EBP + 0x24]
006C8FF4  0F AF 75 F0               IMUL ESI,dword ptr [EBP + -0x10]
006C8FF8  2B D8                     SUB EBX,EAX
006C8FFA  C7 45 CC 00 00 00 00      MOV dword ptr [EBP + -0x34],0x0
006C9001  8B FB                     MOV EDI,EBX
006C9003  C7 45 B8 00 00 00 00      MOV dword ptr [EBP + -0x48],0x0
006C900A  03 FE                     ADD EDI,ESI
006C900C  89 55 AC                  MOV dword ptr [EBP + -0x54],EDX
006C900F  03 CF                     ADD ECX,EDI
006C9011  66 C7 04 4A 01 00         MOV word ptr [EDX + ECX*0x2],0x1
006C9017  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C901A  3B C8                     CMP ECX,EAX
006C901C  75 1F                     JNZ 0x006c903d
006C901E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006C9021  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C9024  3B F7                     CMP ESI,EDI
006C9026  75 15                     JNZ 0x006c903d
006C9028  8B 75 20                  MOV ESI,dword ptr [EBP + 0x20]
006C902B  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C902E  3B F7                     CMP ESI,EDI
006C9030  75 0B                     JNZ 0x006c903d
006C9032  5F                        POP EDI
006C9033  5E                        POP ESI
006C9034  33 C0                     XOR EAX,EAX
006C9036  5B                        POP EBX
006C9037  8B E5                     MOV ESP,EBP
006C9039  5D                        POP EBP
006C903A  C2 28 00                  RET 0x28
LAB_006c903d:
006C903D  0F BF 32                  MOVSX ESI,word ptr [EDX]
006C9040  85 F6                     TEST ESI,ESI
006C9042  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
006C9049  89 75 88                  MOV dword ptr [EBP + -0x78],ESI
006C904C  0F 84 84 00 00 00         JZ 0x006c90d6
006C9052  85 C0                     TEST EAX,EAX
006C9054  66 C7 02 00 00            MOV word ptr [EDX],0x0
006C9059  7E 07                     JLE 0x006c9062
006C905B  66 83 7A FE 00            CMP word ptr [EDX + -0x2],0x0
006C9060  74 64                     JZ 0x006c90c6
LAB_006c9062:
006C9062  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C9065  8D 7E FF                  LEA EDI,[ESI + -0x1]
006C9068  3B C7                     CMP EAX,EDI
006C906A  7D 07                     JGE 0x006c9073
006C906C  66 83 7A 02 00            CMP word ptr [EDX + 0x2],0x0
006C9071  74 53                     JZ 0x006c90c6
LAB_006c9073:
006C9073  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C9076  85 FF                     TEST EDI,EDI
006C9078  7E 0C                     JLE 0x006c9086
006C907A  03 F6                     ADD ESI,ESI
006C907C  8B FA                     MOV EDI,EDX
006C907E  2B FE                     SUB EDI,ESI
006C9080  66 83 3F 00               CMP word ptr [EDI],0x0
006C9084  74 40                     JZ 0x006c90c6
LAB_006c9086:
006C9086  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C9089  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
006C908C  4E                        DEC ESI
006C908D  3B FE                     CMP EDI,ESI
006C908F  7D 0A                     JGE 0x006c909b
006C9091  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C9094  66 83 3C 72 00            CMP word ptr [EDX + ESI*0x2],0x0
006C9099  74 2B                     JZ 0x006c90c6
LAB_006c909b:
006C909B  8B 75 2C                  MOV ESI,dword ptr [EBP + 0x2c]
006C909E  85 F6                     TEST ESI,ESI
006C90A0  7E 0F                     JLE 0x006c90b1
006C90A2  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006C90A5  8B FA                     MOV EDI,EDX
006C90A7  03 F6                     ADD ESI,ESI
006C90A9  2B FE                     SUB EDI,ESI
006C90AB  66 83 3F 00               CMP word ptr [EDI],0x0
006C90AF  74 15                     JZ 0x006c90c6
LAB_006c90b1:
006C90B1  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
006C90B4  8B 7D 2C                  MOV EDI,dword ptr [EBP + 0x2c]
006C90B7  4E                        DEC ESI
006C90B8  3B FE                     CMP EDI,ESI
006C90BA  7D 13                     JGE 0x006c90cf
006C90BC  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
006C90BF  66 83 3C 72 00            CMP word ptr [EDX + ESI*0x2],0x0
006C90C4  75 09                     JNZ 0x006c90cf
LAB_006c90c6:
006C90C6  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
006C90CD  EB 07                     JMP 0x006c90d6
LAB_006c90cf:
006C90CF  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_006c90d6:
006C90D6  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C90D9  8B 75 28                  MOV ESI,dword ptr [EBP + 0x28]
006C90DC  52                        PUSH EDX
006C90DD  56                        PUSH ESI
006C90DE  50                        PUSH EAX
006C90DF  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006C90E2  52                        PUSH EDX
006C90E3  50                        PUSH EAX
006C90E4  51                        PUSH ECX
006C90E5  E8 76 1D FE FF            CALL 0x006aae60
006C90EA  8B F8                     MOV EDI,EAX
006C90EC  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C90EF  99                        CDQ
006C90F0  33 C2                     XOR EAX,EDX
006C90F2  2B C2                     SUB EAX,EDX
006C90F4  03 F8                     ADD EDI,EAX
006C90F6  8D 44 3F 0A               LEA EAX,[EDI + EDI*0x1 + 0xa]
006C90FA  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006C90FD  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
006C9104  51                        PUSH ECX
006C9105  E8 C6 73 FE FF            CALL 0x006b04d0
006C910A  85 C0                     TEST EAX,EAX
006C910C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C910F  0F 84 25 55 00 00         JZ 0x006ce63a
006C9115  68 84 3E 00 00            PUSH 0x3e84
006C911A  E8 51 6A FF FF            CALL 0x006bfb70
006C911F  85 C0                     TEST EAX,EAX
006C9121  0F 84 13 55 00 00         JZ 0x006ce63a
006C9127  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C912A  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006C9130  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C9133  8D 48 04                  LEA ECX,[EAX + 0x4]
006C9136  83 C0 14                  ADD EAX,0x14
006C9139  33 F6                     XOR ESI,ESI
006C913B  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006C913E  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
006C9144  8B C1                     MOV EAX,ECX
006C9146  8B 4C BA 04               MOV ECX,dword ptr [EDX + EDI*0x4 + 0x4]
006C914A  C7 45 C4 E7 03 00 00      MOV dword ptr [EBP + -0x3c],0x3e7
006C9151  C7 45 28 FF FF FF FF      MOV dword ptr [EBP + 0x28],0xffffffff
006C9158  89 08                     MOV dword ptr [EAX],ECX
006C915A  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
006C915E  89 44 BA 04               MOV dword ptr [EDX + EDI*0x4 + 0x4],EAX
006C9162  66 89 58 04               MOV word ptr [EAX + 0x4],BX
006C9166  66 89 48 06               MOV word ptr [EAX + 0x6],CX
006C916A  66 8B 4D 24               MOV CX,word ptr [EBP + 0x24]
006C916E  8B DF                     MOV EBX,EDI
006C9170  66 89 78 0A               MOV word ptr [EAX + 0xa],DI
006C9174  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
006C9177  66 89 48 08               MOV word ptr [EAX + 0x8],CX
006C917B  66 C7 40 0C 01 00         MOV word ptr [EAX + 0xc],0x1
006C9181  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
006C9184  89 75 9C                  MOV dword ptr [EBP + -0x64],ESI
LAB_006c9187:
006C9187  3B DF                     CMP EBX,EDI
006C9189  0F 8D B2 54 00 00         JGE 0x006ce641
006C918F  8D 04 9A                  LEA EAX,[EDX + EBX*0x4]
LAB_006c9192:
006C9192  8B 08                     MOV ECX,dword ptr [EAX]
006C9194  85 C9                     TEST ECX,ECX
006C9196  89 4D A0                  MOV dword ptr [EBP + -0x60],ECX
006C9199  75 11                     JNZ 0x006c91ac
006C919B  43                        INC EBX
006C919C  83 C0 04                  ADD EAX,0x4
006C919F  3B DF                     CMP EBX,EDI
006C91A1  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
006C91A4  0F 8D 97 54 00 00         JGE 0x006ce641
006C91AA  EB E6                     JMP 0x006c9192
LAB_006c91ac:
006C91AC  3B DF                     CMP EBX,EDI
006C91AE  0F 8D 8D 54 00 00         JGE 0x006ce641
006C91B4  8D 43 0A                  LEA EAX,[EBX + 0xa]
006C91B7  3B C7                     CMP EAX,EDI
006C91B9  7C 39                     JL 0x006c91f4
006C91BB  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
006C91BE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C91C1  8D 0C BD 90 01 00 00      LEA ECX,[EDI*0x4 + 0x190]
006C91C8  51                        PUSH ECX
006C91C9  52                        PUSH EDX
006C91CA  E8 81 69 FF FF            CALL 0x006bfb50
006C91CF  8B D0                     MOV EDX,EAX
006C91D1  85 D2                     TEST EDX,EDX
006C91D3  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
006C91D6  0F 84 5E 54 00 00         JZ 0x006ce63a
006C91DC  B9 64 00 00 00            MOV ECX,0x64
006C91E1  33 C0                     XOR EAX,EAX
006C91E3  8D 3C BA                  LEA EDI,[EDX + EDI*0x4]
006C91E6  F3 AB                     STOSD.REP ES:EDI
006C91E8  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006C91EB  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
006C91EE  83 C0 64                  ADD EAX,0x64
006C91F1  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006c91f4:
006C91F4  C7 45 B0 00 00 00 00      MOV dword ptr [EBP + -0x50],0x0
006C91FB  C7 04 9A 00 00 00 00      MOV dword ptr [EDX + EBX*0x4],0x0
006C9202  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
LAB_006c9205:
006C9205  0F BF 59 04               MOVSX EBX,word ptr [ECX + 0x4]
006C9209  0F BF 41 06               MOVSX EAX,word ptr [ECX + 0x6]
006C920D  0F BF 49 08               MOVSX ECX,word ptr [ECX + 0x8]
006C9211  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006C9214  0F AF 4D F0               IMUL ECX,dword ptr [EBP + -0x10]
006C9218  8B D0                     MOV EDX,EAX
006C921A  8B FB                     MOV EDI,EBX
006C921C  0F AF 55 0C               IMUL EDX,dword ptr [EBP + 0xc]
006C9220  03 F9                     ADD EDI,ECX
006C9222  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006C9225  03 D7                     ADD EDX,EDI
006C9227  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006C922A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006C922D  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
006C9230  66 8B 4F 0C               MOV CX,word ptr [EDI + 0xc]
006C9234  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
006C9237  66 3B 0A                  CMP CX,word ptr [EDX]
006C923A  0F 8F BD 53 00 00         JG 0x006ce5fd
006C9240  0F BF 57 0A               MOVSX EDX,word ptr [EDI + 0xa]
006C9244  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006C9247  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006C924A  0F BF C9                  MOVSX ECX,CX
006C924D  03 CA                     ADD ECX,EDX
006C924F  3B F9                     CMP EDI,ECX
006C9251  7E 03                     JLE 0x006c9256
006C9253  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
LAB_006c9256:
006C9256  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9259  0F BF 39                  MOVSX EDI,word ptr [ECX]
006C925C  83 7D 28 1A               CMP dword ptr [EBP + 0x28],0x1a
006C9260  7D 56                     JGE 0x006c92b8
006C9262  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
LAB_006c9265:
006C9265  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C9268  85 D2                     TEST EDX,EDX
006C926A  7F 2C                     JG 0x006c9298
006C926C  68 84 3E 00 00            PUSH 0x3e84
006C9271  E8 FA 68 FF FF            CALL 0x006bfb70
006C9276  85 C0                     TEST EAX,EAX
006C9278  0F 84 BC 53 00 00         JZ 0x006ce63a
006C927E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006C9281  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006C9284  89 10                     MOV dword ptr [EAX],EDX
006C9286  83 C0 04                  ADD EAX,0x4
006C9289  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006C928C  8B C8                     MOV ECX,EAX
006C928E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9291  C7 45 C4 E8 03 00 00      MOV dword ptr [EBP + -0x3c],0x3e8
LAB_006c9298:
006C9298  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C929B  89 31                     MOV dword ptr [ECX],ESI
006C929D  8B F1                     MOV ESI,ECX
006C929F  83 C1 10                  ADD ECX,0x10
006C92A2  4A                        DEC EDX
006C92A3  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006C92A6  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006C92A9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C92AC  42                        INC EDX
006C92AD  83 FA 1A                  CMP EDX,0x1a
006C92B0  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C92B3  7C B0                     JL 0x006c9265
006C92B5  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
LAB_006c92b8:
006C92B8  85 DB                     TEST EBX,EBX
006C92BA  C7 45 F4 FF 00 00 00      MOV dword ptr [EBP + -0xc],0xff
006C92C1  C7 45 10 00 00 00 00      MOV dword ptr [EBP + 0x10],0x0
006C92C8  7D 1E                     JGE 0x006c92e8
006C92CA  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
006C92CD  C7 45 10 01 00 00 00      MOV dword ptr [EBP + 0x10],0x1
006C92D4  3B D9                     CMP EBX,ECX
006C92D6  C7 45 F4 FE 00 00 00      MOV dword ptr [EBP + -0xc],0xfe
006C92DD  7E 1E                     JLE 0x006c92fd
006C92DF  C7 45 F4 EE 00 00 00      MOV dword ptr [EBP + -0xc],0xee
006C92E6  EB 15                     JMP 0x006c92fd
LAB_006c92e8:
006C92E8  3B 5D A8                  CMP EBX,dword ptr [EBP + -0x58]
006C92EB  7E 07                     JLE 0x006c92f4
006C92ED  C7 45 F4 EF 00 00 00      MOV dword ptr [EBP + -0xc],0xef
LAB_006c92f4:
006C92F4  3B 5D 98                  CMP EBX,dword ptr [EBP + -0x68]
006C92F7  7D 04                     JGE 0x006c92fd
006C92F9  83 65 F4 FE               AND dword ptr [EBP + -0xc],0xfffffffe
LAB_006c92fd:
006C92FD  85 C0                     TEST EAX,EAX
006C92FF  7C 21                     JL 0x006c9322
006C9301  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C9304  83 C9 02                  OR ECX,0x2
006C9307  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C930A  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006C930D  3B C1                     CMP EAX,ECX
006C930F  7E 04                     JLE 0x006c9315
006C9311  83 65 F4 DF               AND dword ptr [EBP + -0xc],0xffffffdf
LAB_006c9315:
006C9315  3B 45 94                  CMP EAX,dword ptr [EBP + -0x6c]
006C9318  7D 21                     JGE 0x006c933b
006C931A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C931D  83 E1 FD                  AND ECX,0xfffffffd
006C9320  EB 16                     JMP 0x006c9338
LAB_006c9322:
006C9322  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9325  83 E1 FD                  AND ECX,0xfffffffd
006C9328  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C932B  8B 4D A4                  MOV ECX,dword ptr [EBP + -0x5c]
006C932E  3B C1                     CMP EAX,ECX
006C9330  7E 09                     JLE 0x006c933b
006C9332  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9335  83 E1 DF                  AND ECX,0xffffffdf
LAB_006c9338:
006C9338  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_006c933b:
006C933B  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006C933E  3B 4D 90                  CMP ECX,dword ptr [EBP + -0x70]
006C9341  7D 0C                     JGE 0x006c934f
006C9343  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9346  83 E1 FB                  AND ECX,0xfffffffb
006C9349  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C934C  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
LAB_006c934f:
006C934F  3B 4D 8C                  CMP ECX,dword ptr [EBP + -0x74]
006C9352  7E 0C                     JLE 0x006c9360
006C9354  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9357  83 E1 BF                  AND ECX,0xffffffbf
006C935A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C935D  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
LAB_006c9360:
006C9360  85 C9                     TEST ECX,ECX
006C9362  7E 0C                     JLE 0x006c9370
006C9364  8D 4A 01                  LEA ECX,[EDX + 0x1]
006C9367  4A                        DEC EDX
006C9368  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006C936B  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006C936E  EB 16                     JMP 0x006c9386
LAB_006c9370:
006C9370  75 08                     JNZ 0x006c937a
006C9372  8D 4A 01                  LEA ECX,[EDX + 0x1]
006C9375  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006C9378  EB 09                     JMP 0x006c9383
LAB_006c937a:
006C937A  8D 4A FF                  LEA ECX,[EDX + -0x1]
006C937D  89 4D 18                  MOV dword ptr [EBP + 0x18],ECX
006C9380  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006c9383:
006C9383  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_006c9386:
006C9386  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C9389  83 F9 03                  CMP ECX,0x3
006C938C  0F 87 30 52 00 00         JA 0x006ce5c2
006C9392  8B D1                     MOV EDX,ECX
switchD_006c9394::switchD:
006C9394  FF 24 95 A8 E6 6C 00      JMP dword ptr [EDX*0x4 + 0x6ce6a8]
switchD_006c9394::caseD_0:
006C939B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C939E  83 E1 10                  AND ECX,0x10
006C93A1  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006C93A4  0F 85 8F 00 00 00         JNZ 0x006c9439
006C93AA  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C93AD  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006C93B1  66 85 C9                  TEST CX,CX
006C93B4  74 0A                     JZ 0x006c93c0
006C93B6  0F BF D1                  MOVSX EDX,CX
006C93B9  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C93BC  3B D1                     CMP EDX,ECX
006C93BE  7E 79                     JLE 0x006c9439
LAB_006c93c0:
006C93C0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C93C3  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C93C6  85 DB                     TEST EBX,EBX
006C93C8  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006C93CC  75 0F                     JNZ 0x006c93dd
006C93CE  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C93D1  85 C0                     TEST EAX,EAX
006C93D3  75 05                     JNZ 0x006c93da
006C93D5  83 C2 03                  ADD EDX,0x3
006C93D8  EB 14                     JMP 0x006c93ee
LAB_006c93da:
006C93DA  42                        INC EDX
006C93DB  EB 11                     JMP 0x006c93ee
LAB_006c93dd:
006C93DD  8B D0                     MOV EDX,EAX
006C93DF  F7 DA                     NEG EDX
006C93E1  3B DA                     CMP EBX,EDX
006C93E3  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C93E6  7E 05                     JLE 0x006c93ed
006C93E8  83 C2 FD                  ADD EDX,-0x3
006C93EB  EB 01                     JMP 0x006c93ee
LAB_006c93ed:
006C93ED  4A                        DEC EDX
LAB_006c93ee:
006C93EE  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006C93F1  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C93F4  4A                        DEC EDX
006C93F5  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C93F8  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C93FB  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C93FE  03 D1                     ADD EDX,ECX
006C9400  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C9403  8B 36                     MOV ESI,dword ptr [ESI]
006C9405  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006C9408  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C940B  8B 11                     MOV EDX,dword ptr [ECX]
006C940D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9410  89 11                     MOV dword ptr [ECX],EDX
006C9412  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9415  89 0A                     MOV dword ptr [EDX],ECX
006C9417  8D 53 FF                  LEA EDX,[EBX + -0x1]
006C941A  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C941E  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C9422  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9426  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C942A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C942E  8D 57 03                  LEA EDX,[EDI + 0x3]
006C9431  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C9435  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9439:
006C9439  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C943C  83 E1 01                  AND ECX,0x1
006C943F  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006C9442  75 7C                     JNZ 0x006c94c0
006C9444  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9447  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006C944B  66 85 C9                  TEST CX,CX
006C944E  74 0A                     JZ 0x006c945a
006C9450  0F BF D1                  MOVSX EDX,CX
006C9453  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C9456  3B D1                     CMP EDX,ECX
006C9458  7E 66                     JLE 0x006c94c0
LAB_006c945a:
006C945A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C945D  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C9460  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006C9464  8B D0                     MOV EDX,EAX
006C9466  F7 DA                     NEG EDX
006C9468  3B DA                     CMP EBX,EDX
006C946A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C946D  7C 05                     JL 0x006c9474
006C946F  83 C2 03                  ADD EDX,0x3
006C9472  EB 01                     JMP 0x006c9475
LAB_006c9474:
006C9474  42                        INC EDX
LAB_006c9475:
006C9475  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006C9478  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C947B  4A                        DEC EDX
006C947C  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C947F  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9482  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C9485  03 D1                     ADD EDX,ECX
006C9487  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C948A  8B 36                     MOV ESI,dword ptr [ESI]
006C948C  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006C948F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C9492  8B 11                     MOV EDX,dword ptr [ECX]
006C9494  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9497  89 11                     MOV dword ptr [ECX],EDX
006C9499  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C949C  89 0A                     MOV dword ptr [EDX],ECX
006C949E  8D 53 01                  LEA EDX,[EBX + 0x1]
006C94A1  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C94A5  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C94A9  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C94AD  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C94B1  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C94B5  8D 57 03                  LEA EDX,[EDI + 0x3]
006C94B8  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C94BC  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c94c0:
006C94C0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C94C3  83 E1 20                  AND ECX,0x20
006C94C6  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C94C9  0F 85 86 00 00 00         JNZ 0x006c9555
006C94CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C94D2  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006C94D5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C94D8  2B CA                     SUB ECX,EDX
006C94DA  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C94DD  66 8B 11                  MOV DX,word ptr [ECX]
006C94E0  66 85 D2                  TEST DX,DX
006C94E3  74 0D                     JZ 0x006c94f2
006C94E5  0F BF D2                  MOVSX EDX,DX
006C94E8  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C94EB  3B D1                     CMP EDX,ECX
006C94ED  7E 66                     JLE 0x006c9555
006C94EF  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006c94f2:
006C94F2  8D 57 03                  LEA EDX,[EDI + 0x3]
006C94F5  66 89 11                  MOV word ptr [ECX],DX
006C94F8  8B C8                     MOV ECX,EAX
006C94FA  F7 D9                     NEG ECX
006C94FC  3B CB                     CMP ECX,EBX
006C94FE  7C 08                     JL 0x006c9508
006C9500  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C9503  8D 4A 03                  LEA ECX,[EDX + 0x3]
006C9506  EB 04                     JMP 0x006c950c
LAB_006c9508:
006C9508  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C950B  41                        INC ECX
LAB_006c950c:
006C950C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C950F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9512  4A                        DEC EDX
006C9513  03 CF                     ADD ECX,EDI
006C9515  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9518  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C951B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C951E  8B 36                     MOV ESI,dword ptr [ESI]
006C9520  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006C9524  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C9527  8B 11                     MOV EDX,dword ptr [ECX]
006C9529  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C952C  89 11                     MOV dword ptr [ECX],EDX
006C952E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9531  89 0A                     MOV dword ptr [EDX],ECX
006C9533  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C9536  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C953A  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C953E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9542  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9546  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C954A  8D 57 03                  LEA EDX,[EDI + 0x3]
006C954D  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C9551  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9555:
006C9555  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9558  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C955B  03 C9                     ADD ECX,ECX
006C955D  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006C9560  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006C9564  66 85 D2                  TEST DX,DX
006C9567  74 0D                     JZ 0x006c9576
006C9569  0F BF D2                  MOVSX EDX,DX
006C956C  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C956F  3B D1                     CMP EDX,ECX
006C9571  7E 6D                     JLE 0x006c95e0
006C9573  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_006c9576:
006C9576  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9579  8D 47 03                  LEA EAX,[EDI + 0x3]
006C957C  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006C9580  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9583  8B C8                     MOV ECX,EAX
006C9585  F7 D9                     NEG ECX
006C9587  3B CB                     CMP ECX,EBX
006C9589  7E 08                     JLE 0x006c9593
006C958B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C958E  8D 4A FD                  LEA ECX,[EDX + -0x3]
006C9591  EB 04                     JMP 0x006c9597
LAB_006c9593:
006C9593  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9596  49                        DEC ECX
LAB_006c9597:
006C9597  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C959A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C959D  4A                        DEC EDX
006C959E  03 CF                     ADD ECX,EDI
006C95A0  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C95A3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C95A6  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C95A9  8B 36                     MOV ESI,dword ptr [ESI]
006C95AB  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006C95AF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C95B2  8B 11                     MOV EDX,dword ptr [ECX]
006C95B4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C95B7  89 11                     MOV dword ptr [ECX],EDX
006C95B9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C95BC  89 0A                     MOV dword ptr [EDX],ECX
006C95BE  8D 50 01                  LEA EDX,[EAX + 0x1]
006C95C1  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C95C5  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C95C9  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C95CD  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C95D1  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C95D5  8D 57 03                  LEA EDX,[EDI + 0x3]
006C95D8  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C95DC  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c95e0:
006C95E0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C95E3  83 E1 40                  AND ECX,0x40
006C95E6  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006C95E9  75 6E                     JNZ 0x006c9659
006C95EB  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C95EE  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C95F1  03 C9                     ADD ECX,ECX
006C95F3  2B D1                     SUB EDX,ECX
006C95F5  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006C95F8  66 8B 0A                  MOV CX,word ptr [EDX]
006C95FB  66 85 C9                  TEST CX,CX
006C95FE  74 0D                     JZ 0x006c960d
006C9600  0F BF D1                  MOVSX EDX,CX
006C9603  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C9606  3B D1                     CMP EDX,ECX
006C9608  7E 4F                     JLE 0x006c9659
006C960A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006c960d:
006C960D  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C9610  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9613  66 89 0A                  MOV word ptr [EDX],CX
006C9616  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006C9619  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C961C  49                        DEC ECX
006C961D  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006C9620  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9623  03 CF                     ADD ECX,EDI
006C9625  8B 36                     MOV ESI,dword ptr [ESI]
006C9627  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006C962B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C962E  8B 11                     MOV EDX,dword ptr [ECX]
006C9630  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9633  89 11                     MOV dword ptr [ECX],EDX
006C9635  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C9638  89 0A                     MOV dword ptr [EDX],ECX
006C963A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C963D  4A                        DEC EDX
006C963E  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C9642  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9646  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
006C964A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C964E  8D 57 03                  LEA EDX,[EDI + 0x3]
006C9651  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C9655  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9659:
006C9659  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C965C  83 E1 04                  AND ECX,0x4
006C965F  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006C9662  75 65                     JNZ 0x006c96c9
006C9664  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C9667  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C966A  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006C966E  66 85 C9                  TEST CX,CX
006C9671  74 0A                     JZ 0x006c967d
006C9673  0F BF D1                  MOVSX EDX,CX
006C9676  8D 4F 03                  LEA ECX,[EDI + 0x3]
006C9679  3B D1                     CMP EDX,ECX
006C967B  7E 4C                     JLE 0x006c96c9
LAB_006c967d:
006C967D  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C9680  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9683  8D 47 03                  LEA EAX,[EDI + 0x3]
006C9686  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006C968A  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006C968D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9690  48                        DEC EAX
006C9691  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006C9694  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C9697  03 C7                     ADD EAX,EDI
006C9699  8B CE                     MOV ECX,ESI
006C969B  8B 36                     MOV ESI,dword ptr [ESI]
006C969D  8D 44 82 0C               LEA EAX,[EDX + EAX*0x4 + 0xc]
006C96A1  8B 10                     MOV EDX,dword ptr [EAX]
006C96A3  89 11                     MOV dword ptr [ECX],EDX
006C96A5  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C96A8  42                        INC EDX
006C96A9  89 08                     MOV dword ptr [EAX],ECX
006C96AB  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C96AE  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C96B2  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
006C96B6  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C96BA  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C96BE  8D 57 03                  LEA EDX,[EDI + 0x3]
006C96C1  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C96C5  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c96c9:
006C96C9  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C96CC  85 C9                     TEST ECX,ECX
006C96CE  0F 85 BD 02 00 00         JNZ 0x006c9991
006C96D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C96D7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C96DA  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
006C96DF  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006C96E2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C96E5  0F 8C A6 02 00 00         JL 0x006c9991
006C96EB  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C96EE  85 D2                     TEST EDX,EDX
006C96F0  0F 85 AB 00 00 00         JNZ 0x006c97a1
006C96F6  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006C96FA  66 85 C9                  TEST CX,CX
006C96FD  74 0E                     JZ 0x006c970d
006C96FF  0F BF C9                  MOVSX ECX,CX
006C9702  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9705  3B CA                     CMP ECX,EDX
006C9707  0F 8E 94 00 00 00         JLE 0x006c97a1
LAB_006c970d:
006C970D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9710  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006C9714  81 E1 00 C0 00 00         AND ECX,0xc000
006C971A  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9720  74 7F                     JZ 0x006c97a1
006C9722  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9725  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C9728  85 DB                     TEST EBX,EBX
006C972A  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006C972E  75 14                     JNZ 0x006c9744
006C9730  85 C0                     TEST EAX,EAX
006C9732  75 08                     JNZ 0x006c973c
006C9734  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C9737  83 C1 03                  ADD ECX,0x3
006C973A  EB 1C                     JMP 0x006c9758
LAB_006c973c:
006C973C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C973F  8D 4A 01                  LEA ECX,[EDX + 0x1]
006C9742  EB 14                     JMP 0x006c9758
LAB_006c9744:
006C9744  8B C8                     MOV ECX,EAX
006C9746  F7 D9                     NEG ECX
006C9748  3B D9                     CMP EBX,ECX
006C974A  7E 08                     JLE 0x006c9754
006C974C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C974F  8D 4A FD                  LEA ECX,[EDX + -0x3]
006C9752  EB 04                     JMP 0x006c9758
LAB_006c9754:
006C9754  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C9757  49                        DEC ECX
LAB_006c9758:
006C9758  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C975B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C975E  4A                        DEC EDX
006C975F  03 CF                     ADD ECX,EDI
006C9761  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9764  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9767  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C976A  8B 36                     MOV ESI,dword ptr [ESI]
006C976C  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9770  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9773  8B 11                     MOV EDX,dword ptr [ECX]
006C9775  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9778  89 11                     MOV dword ptr [ECX],EDX
006C977A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C977D  89 0A                     MOV dword ptr [EDX],ECX
006C977F  8D 53 FF                  LEA EDX,[EBX + -0x1]
006C9782  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9786  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9789  42                        INC EDX
006C978A  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C978E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9792  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9796  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C979A  8D 57 04                  LEA EDX,[EDI + 0x4]
006C979D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c97a1:
006C97A1  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006C97A4  85 C9                     TEST ECX,ECX
006C97A6  0F 85 92 00 00 00         JNZ 0x006c983e
006C97AC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C97AF  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006C97B3  66 85 C9                  TEST CX,CX
006C97B6  74 0A                     JZ 0x006c97c2
006C97B8  0F BF C9                  MOVSX ECX,CX
006C97BB  8D 57 04                  LEA EDX,[EDI + 0x4]
006C97BE  3B CA                     CMP ECX,EDX
006C97C0  7E 7C                     JLE 0x006c983e
LAB_006c97c2:
006C97C2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C97C5  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006C97C9  81 E1 00 C0 00 00         AND ECX,0xc000
006C97CF  81 F9 00 C0 00 00         CMP ECX,0xc000
006C97D5  74 67                     JZ 0x006c983e
006C97D7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C97DA  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C97DD  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006C97E1  8B C8                     MOV ECX,EAX
006C97E3  F7 D9                     NEG ECX
006C97E5  3B D9                     CMP EBX,ECX
006C97E7  7C 08                     JL 0x006c97f1
006C97E9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C97EC  8D 4A 03                  LEA ECX,[EDX + 0x3]
006C97EF  EB 04                     JMP 0x006c97f5
LAB_006c97f1:
006C97F1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C97F4  41                        INC ECX
LAB_006c97f5:
006C97F5  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C97F8  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C97FB  4A                        DEC EDX
006C97FC  03 CF                     ADD ECX,EDI
006C97FE  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9801  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9804  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9807  8B 36                     MOV ESI,dword ptr [ESI]
006C9809  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C980D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9810  8B 11                     MOV EDX,dword ptr [ECX]
006C9812  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9815  89 11                     MOV dword ptr [ECX],EDX
006C9817  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C981A  89 0A                     MOV dword ptr [EDX],ECX
006C981C  8D 53 01                  LEA EDX,[EBX + 0x1]
006C981F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9823  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9826  42                        INC EDX
006C9827  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C982B  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C982F  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9833  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9837  8D 57 04                  LEA EDX,[EDI + 0x4]
006C983A  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c983e:
006C983E  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C9841  85 C9                     TEST ECX,ECX
006C9843  0F 85 A4 00 00 00         JNZ 0x006c98ed
006C9849  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C984C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C984F  03 D2                     ADD EDX,EDX
006C9851  2B CA                     SUB ECX,EDX
006C9853  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9856  66 8B 09                  MOV CX,word ptr [ECX]
006C9859  66 85 C9                  TEST CX,CX
006C985C  74 0E                     JZ 0x006c986c
006C985E  0F BF C9                  MOVSX ECX,CX
006C9861  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9864  3B CA                     CMP ECX,EDX
006C9866  0F 8E 81 00 00 00         JLE 0x006c98ed
LAB_006c986c:
006C986C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C986F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9872  03 C9                     ADD ECX,ECX
006C9874  2B D1                     SUB EDX,ECX
006C9876  66 8B 12                  MOV DX,word ptr [EDX]
006C9879  81 E2 00 C0 00 00         AND EDX,0xc000
006C987F  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9885  74 66                     JZ 0x006c98ed
006C9887  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C988A  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C988D  66 89 0A                  MOV word ptr [EDX],CX
006C9890  8B C8                     MOV ECX,EAX
006C9892  F7 D9                     NEG ECX
006C9894  3B CB                     CMP ECX,EBX
006C9896  7C 08                     JL 0x006c98a0
006C9898  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C989B  8D 4A 03                  LEA ECX,[EDX + 0x3]
006C989E  EB 04                     JMP 0x006c98a4
LAB_006c98a0:
006C98A0  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C98A3  41                        INC ECX
LAB_006c98a4:
006C98A4  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C98A7  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C98AA  4A                        DEC EDX
006C98AB  03 CF                     ADD ECX,EDI
006C98AD  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C98B0  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C98B3  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C98B6  8B 36                     MOV ESI,dword ptr [ESI]
006C98B8  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C98BC  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C98BF  8B 11                     MOV EDX,dword ptr [ECX]
006C98C1  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C98C4  89 11                     MOV dword ptr [ECX],EDX
006C98C6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C98C9  89 0A                     MOV dword ptr [EDX],ECX
006C98CB  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C98CE  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C98D2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C98D5  42                        INC EDX
006C98D6  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C98DA  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C98DE  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C98E2  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C98E6  8D 57 04                  LEA EDX,[EDI + 0x4]
006C98E9  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c98ed:
006C98ED  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C98F0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C98F3  03 C9                     ADD ECX,ECX
006C98F5  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006C98F9  66 85 C9                  TEST CX,CX
006C98FC  74 0E                     JZ 0x006c990c
006C98FE  0F BF C9                  MOVSX ECX,CX
006C9901  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9904  3B CA                     CMP ECX,EDX
006C9906  0F 8E 85 00 00 00         JLE 0x006c9991
LAB_006c990c:
006C990C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C990F  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006C9912  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9915  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006C9919  81 E2 00 C0 00 00         AND EDX,0xc000
006C991F  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9925  74 6A                     JZ 0x006c9991
006C9927  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C992A  8D 47 04                  LEA EAX,[EDI + 0x4]
006C992D  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006C9931  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9934  8B C8                     MOV ECX,EAX
006C9936  F7 D9                     NEG ECX
006C9938  3B CB                     CMP ECX,EBX
006C993A  7E 08                     JLE 0x006c9944
006C993C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C993F  8D 4A FD                  LEA ECX,[EDX + -0x3]
006C9942  EB 04                     JMP 0x006c9948
LAB_006c9944:
006C9944  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C9947  49                        DEC ECX
LAB_006c9948:
006C9948  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C994B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C994E  4A                        DEC EDX
006C994F  03 CF                     ADD ECX,EDI
006C9951  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9954  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9957  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C995A  8B 36                     MOV ESI,dword ptr [ESI]
006C995C  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9960  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9963  8B 11                     MOV EDX,dword ptr [ECX]
006C9965  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9968  89 11                     MOV dword ptr [ECX],EDX
006C996A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C996D  89 0A                     MOV dword ptr [EDX],ECX
006C996F  8D 50 01                  LEA EDX,[EAX + 0x1]
006C9972  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9976  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9979  42                        INC EDX
006C997A  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C997E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9982  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9986  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C998A  8D 57 04                  LEA EDX,[EDI + 0x4]
006C998D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9991:
006C9991  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006C9994  85 C9                     TEST ECX,ECX
006C9996  0F 85 BE 02 00 00         JNZ 0x006c9c5a
006C999C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C999F  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006C99A2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C99A5  2B CA                     SUB ECX,EDX
006C99A7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C99AA  66 83 39 00               CMP word ptr [ECX],0x0
006C99AE  0F 8C A6 02 00 00         JL 0x006c9c5a
006C99B4  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C99B7  85 D2                     TEST EDX,EDX
006C99B9  0F 85 AB 00 00 00         JNZ 0x006c9a6a
006C99BF  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006C99C3  66 85 C9                  TEST CX,CX
006C99C6  74 0E                     JZ 0x006c99d6
006C99C8  0F BF C9                  MOVSX ECX,CX
006C99CB  8D 57 04                  LEA EDX,[EDI + 0x4]
006C99CE  3B CA                     CMP ECX,EDX
006C99D0  0F 8E 94 00 00 00         JLE 0x006c9a6a
LAB_006c99d6:
006C99D6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C99D9  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006C99DD  81 E1 00 C0 00 00         AND ECX,0xc000
006C99E3  81 F9 00 C0 00 00         CMP ECX,0xc000
006C99E9  74 7F                     JZ 0x006c9a6a
006C99EB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C99EE  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C99F1  85 DB                     TEST EBX,EBX
006C99F3  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006C99F7  75 14                     JNZ 0x006c9a0d
006C99F9  85 C0                     TEST EAX,EAX
006C99FB  75 08                     JNZ 0x006c9a05
006C99FD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9A00  83 C1 03                  ADD ECX,0x3
006C9A03  EB 1C                     JMP 0x006c9a21
LAB_006c9a05:
006C9A05  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C9A08  8D 4A 01                  LEA ECX,[EDX + 0x1]
006C9A0B  EB 14                     JMP 0x006c9a21
LAB_006c9a0d:
006C9A0D  8B C8                     MOV ECX,EAX
006C9A0F  F7 D9                     NEG ECX
006C9A11  3B D9                     CMP EBX,ECX
006C9A13  7E 08                     JLE 0x006c9a1d
006C9A15  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C9A18  8D 4A FD                  LEA ECX,[EDX + -0x3]
006C9A1B  EB 04                     JMP 0x006c9a21
LAB_006c9a1d:
006C9A1D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9A20  49                        DEC ECX
LAB_006c9a21:
006C9A21  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9A24  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9A27  4A                        DEC EDX
006C9A28  03 CF                     ADD ECX,EDI
006C9A2A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9A2D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9A30  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9A33  8B 36                     MOV ESI,dword ptr [ESI]
006C9A35  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9A39  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9A3C  8B 11                     MOV EDX,dword ptr [ECX]
006C9A3E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9A41  89 11                     MOV dword ptr [ECX],EDX
006C9A43  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9A46  89 0A                     MOV dword ptr [EDX],ECX
006C9A48  8D 53 FF                  LEA EDX,[EBX + -0x1]
006C9A4B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9A4F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9A52  4A                        DEC EDX
006C9A53  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C9A57  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9A5B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9A5F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9A63  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9A66  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9a6a:
006C9A6A  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006C9A6D  85 C9                     TEST ECX,ECX
006C9A6F  0F 85 92 00 00 00         JNZ 0x006c9b07
006C9A75  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C9A78  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006C9A7C  66 85 C9                  TEST CX,CX
006C9A7F  74 0A                     JZ 0x006c9a8b
006C9A81  0F BF C9                  MOVSX ECX,CX
006C9A84  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9A87  3B CA                     CMP ECX,EDX
006C9A89  7E 7C                     JLE 0x006c9b07
LAB_006c9a8b:
006C9A8B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9A8E  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006C9A92  81 E1 00 C0 00 00         AND ECX,0xc000
006C9A98  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9A9E  74 67                     JZ 0x006c9b07
006C9AA0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9AA3  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C9AA6  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006C9AAA  8B C8                     MOV ECX,EAX
006C9AAC  F7 D9                     NEG ECX
006C9AAE  3B D9                     CMP EBX,ECX
006C9AB0  7C 08                     JL 0x006c9aba
006C9AB2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C9AB5  8D 4A 03                  LEA ECX,[EDX + 0x3]
006C9AB8  EB 04                     JMP 0x006c9abe
LAB_006c9aba:
006C9ABA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9ABD  41                        INC ECX
LAB_006c9abe:
006C9ABE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9AC1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9AC4  4A                        DEC EDX
006C9AC5  03 CF                     ADD ECX,EDI
006C9AC7  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9ACA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9ACD  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9AD0  8B 36                     MOV ESI,dword ptr [ESI]
006C9AD2  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9AD6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9AD9  8B 11                     MOV EDX,dword ptr [ECX]
006C9ADB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9ADE  89 11                     MOV dword ptr [ECX],EDX
006C9AE0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9AE3  89 0A                     MOV dword ptr [EDX],ECX
006C9AE5  8D 53 01                  LEA EDX,[EBX + 0x1]
006C9AE8  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9AEC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9AEF  4A                        DEC EDX
006C9AF0  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006C9AF4  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9AF8  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9AFC  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9B00  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9B03  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9b07:
006C9B07  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006C9B0A  85 C9                     TEST ECX,ECX
006C9B0C  0F 85 A4 00 00 00         JNZ 0x006c9bb6
006C9B12  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C9B15  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006C9B18  03 D2                     ADD EDX,EDX
006C9B1A  2B CA                     SUB ECX,EDX
006C9B1C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9B1F  66 8B 09                  MOV CX,word ptr [ECX]
006C9B22  66 85 C9                  TEST CX,CX
006C9B25  74 0E                     JZ 0x006c9b35
006C9B27  0F BF C9                  MOVSX ECX,CX
006C9B2A  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9B2D  3B CA                     CMP ECX,EDX
006C9B2F  0F 8E 81 00 00 00         JLE 0x006c9bb6
LAB_006c9b35:
006C9B35  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9B38  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9B3B  03 C9                     ADD ECX,ECX
006C9B3D  2B D1                     SUB EDX,ECX
006C9B3F  66 8B 12                  MOV DX,word ptr [EDX]
006C9B42  81 E2 00 C0 00 00         AND EDX,0xc000
006C9B48  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9B4E  74 66                     JZ 0x006c9bb6
006C9B50  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C9B53  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C9B56  66 89 0A                  MOV word ptr [EDX],CX
006C9B59  8B C8                     MOV ECX,EAX
006C9B5B  F7 D9                     NEG ECX
006C9B5D  3B CB                     CMP ECX,EBX
006C9B5F  7C 08                     JL 0x006c9b69
006C9B61  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C9B64  8D 4A 03                  LEA ECX,[EDX + 0x3]
006C9B67  EB 04                     JMP 0x006c9b6d
LAB_006c9b69:
006C9B69  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9B6C  41                        INC ECX
LAB_006c9b6d:
006C9B6D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9B70  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9B73  4A                        DEC EDX
006C9B74  03 CF                     ADD ECX,EDI
006C9B76  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9B79  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9B7C  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9B7F  8B 36                     MOV ESI,dword ptr [ESI]
006C9B81  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9B85  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9B88  8B 11                     MOV EDX,dword ptr [ECX]
006C9B8A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9B8D  89 11                     MOV dword ptr [ECX],EDX
006C9B8F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9B92  89 0A                     MOV dword ptr [EDX],ECX
006C9B94  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C9B97  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9B9B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9B9E  4A                        DEC EDX
006C9B9F  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C9BA3  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9BA7  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9BAB  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9BAF  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9BB2  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9bb6:
006C9BB6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9BB9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9BBC  03 C9                     ADD ECX,ECX
006C9BBE  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006C9BC2  66 85 C9                  TEST CX,CX
006C9BC5  74 0E                     JZ 0x006c9bd5
006C9BC7  0F BF C9                  MOVSX ECX,CX
006C9BCA  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9BCD  3B CA                     CMP ECX,EDX
006C9BCF  0F 8E 85 00 00 00         JLE 0x006c9c5a
LAB_006c9bd5:
006C9BD5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C9BD8  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006C9BDB  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9BDE  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006C9BE2  81 E2 00 C0 00 00         AND EDX,0xc000
006C9BE8  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9BEE  74 6A                     JZ 0x006c9c5a
006C9BF0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006C9BF3  8D 47 04                  LEA EAX,[EDI + 0x4]
006C9BF6  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006C9BFA  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9BFD  8B C8                     MOV ECX,EAX
006C9BFF  F7 D9                     NEG ECX
006C9C01  3B CB                     CMP ECX,EBX
006C9C03  7E 08                     JLE 0x006c9c0d
006C9C05  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C9C08  8D 4A FD                  LEA ECX,[EDX + -0x3]
006C9C0B  EB 04                     JMP 0x006c9c11
LAB_006c9c0d:
006C9C0D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C9C10  49                        DEC ECX
LAB_006c9c11:
006C9C11  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9C14  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9C17  4A                        DEC EDX
006C9C18  03 CF                     ADD ECX,EDI
006C9C1A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9C1D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9C20  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9C23  8B 36                     MOV ESI,dword ptr [ESI]
006C9C25  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9C29  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9C2C  8B 11                     MOV EDX,dword ptr [ECX]
006C9C2E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9C31  89 11                     MOV dword ptr [ECX],EDX
006C9C33  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9C36  89 0A                     MOV dword ptr [EDX],ECX
006C9C38  8D 50 01                  LEA EDX,[EAX + 0x1]
006C9C3B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9C3F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C9C42  4A                        DEC EDX
006C9C43  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006C9C47  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9C4B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9C4F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9C53  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9C56  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9c5a:
006C9C5A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9C5D  83 E1 30                  AND ECX,0x30
006C9C60  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C9C63  0F 85 D5 00 00 00         JNZ 0x006c9d3e
006C9C69  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9C6C  8D 54 09 02               LEA EDX,[ECX + ECX*0x1 + 0x2]
006C9C70  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9C73  2B CA                     SUB ECX,EDX
006C9C75  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9C78  66 8B 09                  MOV CX,word ptr [ECX]
006C9C7B  66 85 C9                  TEST CX,CX
006C9C7E  74 0E                     JZ 0x006c9c8e
006C9C80  0F BF C9                  MOVSX ECX,CX
006C9C83  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9C86  3B CA                     CMP ECX,EDX
006C9C88  0F 8E B0 00 00 00         JLE 0x006c9d3e
LAB_006c9c8e:
006C9C8E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9C91  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9C94  03 C9                     ADD ECX,ECX
006C9C96  2B D1                     SUB EDX,ECX
006C9C98  66 8B 12                  MOV DX,word ptr [EDX]
006C9C9B  81 E2 00 C0 00 00         AND EDX,0xc000
006C9CA1  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9CA7  0F 84 91 00 00 00         JZ 0x006c9d3e
006C9CAD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9CB0  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006C9CB4  81 E2 00 C0 00 00         AND EDX,0xc000
006C9CBA  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9CC0  74 7C                     JZ 0x006c9d3e
006C9CC2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C9CC5  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C9CC8  85 DB                     TEST EBX,EBX
006C9CCA  66 89 0A                  MOV word ptr [EDX],CX
006C9CCD  75 08                     JNZ 0x006c9cd7
006C9CCF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9CD2  83 C1 04                  ADD ECX,0x4
006C9CD5  EB 1B                     JMP 0x006c9cf2
LAB_006c9cd7:
006C9CD7  B9 01 00 00 00            MOV ECX,0x1
006C9CDC  2B C8                     SUB ECX,EAX
006C9CDE  3B D9                     CMP EBX,ECX
006C9CE0  7E 08                     JLE 0x006c9cea
006C9CE2  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C9CE5  8D 4A FE                  LEA ECX,[EDX + -0x2]
006C9CE8  EB 08                     JMP 0x006c9cf2
LAB_006c9cea:
006C9CEA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9CED  74 03                     JZ 0x006c9cf2
006C9CEF  83 C1 02                  ADD ECX,0x2
LAB_006c9cf2:
006C9CF2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9CF5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9CF8  4A                        DEC EDX
006C9CF9  03 CF                     ADD ECX,EDI
006C9CFB  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9CFE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9D01  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9D04  8B 36                     MOV ESI,dword ptr [ESI]
006C9D06  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9D0A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9D0D  8B 11                     MOV EDX,dword ptr [ECX]
006C9D0F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9D12  89 11                     MOV dword ptr [ECX],EDX
006C9D14  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9D17  89 0A                     MOV dword ptr [EDX],ECX
006C9D19  8D 53 FF                  LEA EDX,[EBX + -0x1]
006C9D1C  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9D20  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C9D23  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9D27  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C9D2B  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9D2F  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9D33  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9D37  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9D3A  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9d3e:
006C9D3E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9D41  83 E1 21                  AND ECX,0x21
006C9D44  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006C9D47  0F 85 A6 00 00 00         JNZ 0x006c9df3
006C9D4D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9D50  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9D53  03 C9                     ADD ECX,ECX
006C9D55  2B D1                     SUB EDX,ECX
006C9D57  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006C9D5A  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006C9D5E  66 85 C9                  TEST CX,CX
006C9D61  74 11                     JZ 0x006c9d74
006C9D63  0F BF C9                  MOVSX ECX,CX
006C9D66  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9D69  3B CA                     CMP ECX,EDX
006C9D6B  0F 8E 82 00 00 00         JLE 0x006c9df3
006C9D71  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006c9d74:
006C9D74  66 8B 0A                  MOV CX,word ptr [EDX]
006C9D77  81 E1 00 C0 00 00         AND ECX,0xc000
006C9D7D  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9D83  74 6E                     JZ 0x006c9df3
006C9D85  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9D88  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006C9D8C  81 E1 00 C0 00 00         AND ECX,0xc000
006C9D92  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9D98  74 59                     JZ 0x006c9df3
006C9D9A  8D 4F 04                  LEA ECX,[EDI + 0x4]
006C9D9D  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9DA0  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006C9DA4  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C9DA7  8B 36                     MOV ESI,dword ptr [ESI]
006C9DA9  8D 4A 04                  LEA ECX,[EDX + 0x4]
006C9DAC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9DAF  4A                        DEC EDX
006C9DB0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9DB3  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9DB6  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9DB9  03 CF                     ADD ECX,EDI
006C9DBB  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9DBF  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9DC2  8B 11                     MOV EDX,dword ptr [ECX]
006C9DC4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9DC7  89 11                     MOV dword ptr [ECX],EDX
006C9DC9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9DCC  89 0A                     MOV dword ptr [EDX],ECX
006C9DCE  8D 53 01                  LEA EDX,[EBX + 0x1]
006C9DD1  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9DD5  8D 50 FF                  LEA EDX,[EAX + -0x1]
006C9DD8  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9DDC  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C9DE0  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9DE4  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9DE8  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9DEC  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9DEF  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9df3:
006C9DF3  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9DF6  83 E1 12                  AND ECX,0x12
006C9DF9  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006C9DFC  0F 85 E6 00 00 00         JNZ 0x006c9ee8
006C9E02  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9E05  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9E08  03 C9                     ADD ECX,ECX
006C9E0A  66 8B 4C 11 FE            MOV CX,word ptr [ECX + EDX*0x1 + -0x2]
006C9E0F  66 85 C9                  TEST CX,CX
006C9E12  74 0E                     JZ 0x006c9e22
006C9E14  0F BF C9                  MOVSX ECX,CX
006C9E17  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9E1A  3B CA                     CMP ECX,EDX
006C9E1C  0F 8E C6 00 00 00         JLE 0x006c9ee8
LAB_006c9e22:
006C9E22  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C9E25  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006C9E28  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9E2B  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006C9E2F  81 E2 00 C0 00 00         AND EDX,0xc000
006C9E35  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9E3B  0F 84 A7 00 00 00         JZ 0x006c9ee8
006C9E41  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9E44  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006C9E48  81 E2 00 C0 00 00         AND EDX,0xc000
006C9E4E  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9E54  0F 84 8E 00 00 00         JZ 0x006c9ee8
006C9E5A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9E5D  8D 47 04                  LEA EAX,[EDI + 0x4]
006C9E60  85 DB                     TEST EBX,EBX
006C9E62  66 89 44 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],AX
006C9E67  75 2A                     JNZ 0x006c9e93
006C9E69  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9E6C  85 C0                     TEST EAX,EAX
006C9E6E  75 0B                     JNZ 0x006c9e7b
006C9E70  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9E73  83 C1 04                  ADD ECX,0x4
006C9E76  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9E79  EB 24                     JMP 0x006c9e9f
LAB_006c9e7b:
006C9E7B  83 F8 FF                  CMP EAX,-0x1
006C9E7E  75 08                     JNZ 0x006c9e88
006C9E80  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9E83  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9E86  EB 17                     JMP 0x006c9e9f
LAB_006c9e88:
006C9E88  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C9E8B  8D 4A FE                  LEA ECX,[EDX + -0x2]
006C9E8E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9E91  EB 0C                     JMP 0x006c9e9f
LAB_006c9e93:
006C9E93  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006C9E96  8D 48 FC                  LEA ECX,[EAX + -0x4]
006C9E99  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9E9C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006c9e9f:
006C9E9F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9EA2  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9EA5  4A                        DEC EDX
006C9EA6  03 CF                     ADD ECX,EDI
006C9EA8  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9EAB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9EAE  8B 36                     MOV ESI,dword ptr [ESI]
006C9EB0  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9EB4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9EB7  8B 11                     MOV EDX,dword ptr [ECX]
006C9EB9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9EBC  89 11                     MOV dword ptr [ECX],EDX
006C9EBE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9EC1  89 0A                     MOV dword ptr [EDX],ECX
006C9EC3  8D 53 FF                  LEA EDX,[EBX + -0x1]
006C9EC6  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9ECA  8D 50 01                  LEA EDX,[EAX + 0x1]
006C9ECD  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9ED1  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C9ED5  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9ED9  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9EDD  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9EE1  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9EE4  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9ee8:
006C9EE8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006C9EEB  83 E1 03                  AND ECX,0x3
006C9EEE  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C9EF1  0F 85 C4 00 00 00         JNZ 0x006c9fbb
006C9EF7  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9EFA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9EFD  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006C9F02  66 85 C9                  TEST CX,CX
006C9F05  74 0E                     JZ 0x006c9f15
006C9F07  0F BF C9                  MOVSX ECX,CX
006C9F0A  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9F0D  3B CA                     CMP ECX,EDX
006C9F0F  0F 8E A6 00 00 00         JLE 0x006c9fbb
LAB_006c9f15:
006C9F15  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C9F18  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006C9F1B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C9F1E  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006C9F22  81 E1 00 C0 00 00         AND ECX,0xc000
006C9F28  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9F2E  0F 84 87 00 00 00         JZ 0x006c9fbb
006C9F34  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006C9F38  81 E1 00 C0 00 00         AND ECX,0xc000
006C9F3E  81 F9 00 C0 00 00         CMP ECX,0xc000
006C9F44  74 75                     JZ 0x006c9fbb
006C9F46  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C9F49  8D 47 04                  LEA EAX,[EDI + 0x4]
006C9F4C  66 89 44 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],AX
006C9F51  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006C9F54  8B C8                     MOV ECX,EAX
006C9F56  8D 53 01                  LEA EDX,[EBX + 0x1]
006C9F59  F7 D9                     NEG ECX
006C9F5B  3B CA                     CMP ECX,EDX
006C9F5D  7E 08                     JLE 0x006c9f67
006C9F5F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C9F62  8D 4A FE                  LEA ECX,[EDX + -0x2]
006C9F65  EB 08                     JMP 0x006c9f6f
LAB_006c9f67:
006C9F67  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C9F6A  74 03                     JZ 0x006c9f6f
006C9F6C  83 C1 02                  ADD ECX,0x2
LAB_006c9f6f:
006C9F6F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C9F72  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006C9F75  4A                        DEC EDX
006C9F76  03 CF                     ADD ECX,EDI
006C9F78  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006C9F7B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C9F7E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006C9F81  8B 36                     MOV ESI,dword ptr [ESI]
006C9F83  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006C9F87  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C9F8A  8B 11                     MOV EDX,dword ptr [ECX]
006C9F8C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C9F8F  89 11                     MOV dword ptr [ECX],EDX
006C9F91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C9F94  89 0A                     MOV dword ptr [EDX],ECX
006C9F96  8D 53 01                  LEA EDX,[EBX + 0x1]
006C9F99  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006C9F9D  8D 50 01                  LEA EDX,[EAX + 0x1]
006C9FA0  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006C9FA4  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006C9FA8  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006C9FAC  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006C9FB0  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006C9FB4  8D 57 04                  LEA EDX,[EDI + 0x4]
006C9FB7  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006c9fbb:
006C9FBB  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006C9FBE  83 C7 05                  ADD EDI,0x5
006C9FC1  85 C9                     TEST ECX,ECX
006C9FC3  0F 85 6D 04 00 00         JNZ 0x006ca436
006C9FC9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C9FCC  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C9FCF  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006C9FD2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006C9FD5  66 8B 11                  MOV DX,word ptr [ECX]
006C9FD8  81 E2 00 C0 00 00         AND EDX,0xc000
006C9FDE  81 FA 00 C0 00 00         CMP EDX,0xc000
006C9FE4  0F 84 4C 04 00 00         JZ 0x006ca436
006C9FEA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C9FED  85 D2                     TEST EDX,EDX
006C9FEF  0F 85 20 01 00 00         JNZ 0x006ca115
006C9FF5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C9FF8  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006C9FFC  2B CA                     SUB ECX,EDX
006C9FFE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA001  66 8B 09                  MOV CX,word ptr [ECX]
006CA004  66 85 C9                  TEST CX,CX
006CA007  74 0B                     JZ 0x006ca014
006CA009  0F BF C9                  MOVSX ECX,CX
006CA00C  3B CF                     CMP ECX,EDI
006CA00E  0F 8E 01 01 00 00         JLE 0x006ca115
LAB_006ca014:
006CA014  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA017  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA01A  03 C9                     ADD ECX,ECX
006CA01C  2B D1                     SUB EDX,ECX
006CA01E  66 8B 12                  MOV DX,word ptr [EDX]
006CA021  81 E2 00 C0 00 00         AND EDX,0xc000
006CA027  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA02D  0F 84 E2 00 00 00         JZ 0x006ca115
006CA033  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA036  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA03A  81 E2 00 C0 00 00         AND EDX,0xc000
006CA040  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA046  0F 84 C9 00 00 00         JZ 0x006ca115
006CA04C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA04F  2B D1                     SUB EDX,ECX
006CA051  66 8B 0A                  MOV CX,word ptr [EDX]
006CA054  81 E1 00 C0 00 00         AND ECX,0xc000
006CA05A  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA060  0F 84 AF 00 00 00         JZ 0x006ca115
006CA066  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA069  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CA06D  81 E2 00 C0 00 00         AND EDX,0xc000
006CA073  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA079  0F 84 96 00 00 00         JZ 0x006ca115
006CA07F  8B D1                     MOV EDX,ECX
006CA081  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA084  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CA088  2B D1                     SUB EDX,ECX
006CA08A  66 8B 12                  MOV DX,word ptr [EDX]
006CA08D  81 E2 00 C0 00 00         AND EDX,0xc000
006CA093  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA099  74 7A                     JZ 0x006ca115
006CA09B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CA09E  85 DB                     TEST EBX,EBX
006CA0A0  66 89 39                  MOV word ptr [ECX],DI
006CA0A3  75 08                     JNZ 0x006ca0ad
006CA0A5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CA0A8  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CA0AB  EB 20                     JMP 0x006ca0cd
LAB_006ca0ad:
006CA0AD  B9 01 00 00 00            MOV ECX,0x1
006CA0B2  2B C8                     SUB ECX,EAX
006CA0B4  3B D9                     CMP EBX,ECX
006CA0B6  7E 08                     JLE 0x006ca0c0
006CA0B8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA0BB  83 C1 FE                  ADD ECX,-0x2
006CA0BE  EB 0D                     JMP 0x006ca0cd
LAB_006ca0c0:
006CA0C0  75 05                     JNZ 0x006ca0c7
006CA0C2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA0C5  EB 06                     JMP 0x006ca0cd
LAB_006ca0c7:
006CA0C7  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CA0CA  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ca0cd:
006CA0CD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA0D0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA0D3  4A                        DEC EDX
006CA0D4  03 CF                     ADD ECX,EDI
006CA0D6  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA0D9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA0DC  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA0DF  8B 36                     MOV ESI,dword ptr [ESI]
006CA0E1  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA0E4  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA0E7  8B 11                     MOV EDX,dword ptr [ECX]
006CA0E9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA0EC  89 11                     MOV dword ptr [ECX],EDX
006CA0EE  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA0F1  89 0A                     MOV dword ptr [EDX],ECX
006CA0F3  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CA0F6  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA0FA  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CA0FD  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA101  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA104  42                        INC EDX
006CA105  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA109  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA10D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA111  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca115:
006CA115  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CA118  85 C9                     TEST ECX,ECX
006CA11A  0F 85 E6 00 00 00         JNZ 0x006ca206
006CA120  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA123  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CA126  03 D2                     ADD EDX,EDX
006CA128  2B CA                     SUB ECX,EDX
006CA12A  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CA12D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA130  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CA134  66 85 D2                  TEST DX,DX
006CA137  74 0B                     JZ 0x006ca144
006CA139  0F BF D2                  MOVSX EDX,DX
006CA13C  3B D7                     CMP EDX,EDI
006CA13E  0F 8E C2 00 00 00         JLE 0x006ca206
LAB_006ca144:
006CA144  66 8B 09                  MOV CX,word ptr [ECX]
006CA147  81 E1 00 C0 00 00         AND ECX,0xc000
006CA14D  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA153  0F 84 AD 00 00 00         JZ 0x006ca206
006CA159  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA15C  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CA160  81 E1 00 C0 00 00         AND ECX,0xc000
006CA166  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA16C  0F 84 94 00 00 00         JZ 0x006ca206
006CA172  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA175  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CA178  2B CA                     SUB ECX,EDX
006CA17A  66 8B 11                  MOV DX,word ptr [ECX]
006CA17D  81 E2 00 C0 00 00         AND EDX,0xc000
006CA183  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA189  74 7B                     JZ 0x006ca206
006CA18B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA18E  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CA192  81 E2 00 C0 00 00         AND EDX,0xc000
006CA198  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA19E  74 66                     JZ 0x006ca206
006CA1A0  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CA1A4  81 E1 00 C0 00 00         AND ECX,0xc000
006CA1AA  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA1B0  74 54                     JZ 0x006ca206
006CA1B2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CA1B5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA1B8  83 C1 04                  ADD ECX,0x4
006CA1BB  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA1BE  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CA1C2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA1C5  4A                        DEC EDX
006CA1C6  03 CF                     ADD ECX,EDI
006CA1C8  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA1CB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA1CE  8B 36                     MOV ESI,dword ptr [ESI]
006CA1D0  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA1D3  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA1D6  8B 11                     MOV EDX,dword ptr [ECX]
006CA1D8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA1DB  89 11                     MOV dword ptr [ECX],EDX
006CA1DD  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA1E0  89 0A                     MOV dword ptr [EDX],ECX
006CA1E2  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA1E5  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA1E9  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CA1EC  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA1F0  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA1F3  42                        INC EDX
006CA1F4  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA1F8  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA1FC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CA1FF  83 C2 04                  ADD EDX,0x4
006CA202  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca206:
006CA206  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CA209  85 C9                     TEST ECX,ECX
006CA20B  0F 85 0F 01 00 00         JNZ 0x006ca320
006CA211  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA214  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA217  03 C9                     ADD ECX,ECX
006CA219  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CA21E  66 85 D2                  TEST DX,DX
006CA221  74 0B                     JZ 0x006ca22e
006CA223  0F BF D2                  MOVSX EDX,DX
006CA226  3B D7                     CMP EDX,EDI
006CA228  0F 8E F2 00 00 00         JLE 0x006ca320
LAB_006ca22e:
006CA22E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA231  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA235  81 E2 00 C0 00 00         AND EDX,0xc000
006CA23B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA241  0F 84 D9 00 00 00         JZ 0x006ca320
006CA247  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA24A  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA24E  81 E2 00 C0 00 00         AND EDX,0xc000
006CA254  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA25A  0F 84 C0 00 00 00         JZ 0x006ca320
006CA260  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA263  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA267  81 E2 00 C0 00 00         AND EDX,0xc000
006CA26D  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA273  0F 84 A7 00 00 00         JZ 0x006ca320
006CA279  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA27C  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA280  81 E2 00 C0 00 00         AND EDX,0xc000
006CA286  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA28C  0F 84 8E 00 00 00         JZ 0x006ca320
006CA292  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA295  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CA29A  81 E2 00 C0 00 00         AND EDX,0xc000
006CA2A0  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA2A6  74 78                     JZ 0x006ca320
006CA2A8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA2AB  85 DB                     TEST EBX,EBX
006CA2AD  66 89 7C 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],DI
006CA2B2  75 1E                     JNZ 0x006ca2d2
006CA2B4  85 C0                     TEST EAX,EAX
006CA2B6  75 08                     JNZ 0x006ca2c0
006CA2B8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA2BB  83 C1 04                  ADD ECX,0x4
006CA2BE  EB 18                     JMP 0x006ca2d8
LAB_006ca2c0:
006CA2C0  83 F8 FF                  CMP EAX,-0x1
006CA2C3  75 05                     JNZ 0x006ca2ca
006CA2C5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA2C8  EB 0E                     JMP 0x006ca2d8
LAB_006ca2ca:
006CA2CA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CA2CD  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CA2D0  EB 06                     JMP 0x006ca2d8
LAB_006ca2d2:
006CA2D2  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA2D5  83 C1 FC                  ADD ECX,-0x4
LAB_006ca2d8:
006CA2D8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA2DB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA2DE  4A                        DEC EDX
006CA2DF  03 CF                     ADD ECX,EDI
006CA2E1  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA2E4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA2E7  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA2EA  8B 36                     MOV ESI,dword ptr [ESI]
006CA2EC  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA2EF  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA2F2  8B 11                     MOV EDX,dword ptr [ECX]
006CA2F4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA2F7  89 11                     MOV dword ptr [ECX],EDX
006CA2F9  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA2FC  89 0A                     MOV dword ptr [EDX],ECX
006CA2FE  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CA301  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA305  8D 50 01                  LEA EDX,[EAX + 0x1]
006CA308  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA30C  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA30F  42                        INC EDX
006CA310  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA314  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA318  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA31C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca320:
006CA320  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CA323  85 C9                     TEST ECX,ECX
006CA325  0F 85 0B 01 00 00         JNZ 0x006ca436
006CA32B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA32E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA331  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CA336  66 85 C9                  TEST CX,CX
006CA339  74 0B                     JZ 0x006ca346
006CA33B  0F BF C9                  MOVSX ECX,CX
006CA33E  3B CF                     CMP ECX,EDI
006CA340  0F 8E F0 00 00 00         JLE 0x006ca436
LAB_006ca346:
006CA346  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA349  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CA34C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA34F  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA353  81 E2 00 C0 00 00         AND EDX,0xc000
006CA359  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA35F  0F 84 D1 00 00 00         JZ 0x006ca436
006CA365  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA368  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CA36C  81 E2 00 C0 00 00         AND EDX,0xc000
006CA372  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA378  0F 84 B8 00 00 00         JZ 0x006ca436
006CA37E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA381  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CA385  81 E1 00 C0 00 00         AND ECX,0xc000
006CA38B  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA391  0F 84 9F 00 00 00         JZ 0x006ca436
006CA397  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CA39B  81 E1 00 C0 00 00         AND ECX,0xc000
006CA3A1  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA3A7  0F 84 89 00 00 00         JZ 0x006ca436
006CA3AD  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA3B0  66 8B 54 4A 02            MOV DX,word ptr [EDX + ECX*0x2 + 0x2]
006CA3B5  81 E2 00 C0 00 00         AND EDX,0xc000
006CA3BB  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA3C1  74 73                     JZ 0x006ca436
006CA3C3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CA3C6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA3C9  66 89 7C 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],DI
006CA3CE  8B C8                     MOV ECX,EAX
006CA3D0  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA3D3  F7 D9                     NEG ECX
006CA3D5  3B CA                     CMP ECX,EDX
006CA3D7  7E 08                     JLE 0x006ca3e1
006CA3D9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA3DC  83 C1 FE                  ADD ECX,-0x2
006CA3DF  EB 0D                     JMP 0x006ca3ee
LAB_006ca3e1:
006CA3E1  75 05                     JNZ 0x006ca3e8
006CA3E3  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CA3E6  EB 06                     JMP 0x006ca3ee
LAB_006ca3e8:
006CA3E8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CA3EB  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ca3ee:
006CA3EE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA3F1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA3F4  4A                        DEC EDX
006CA3F5  03 CF                     ADD ECX,EDI
006CA3F7  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA3FA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA3FD  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA400  8B 36                     MOV ESI,dword ptr [ESI]
006CA402  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA405  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA408  8B 11                     MOV EDX,dword ptr [ECX]
006CA40A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA40D  89 11                     MOV dword ptr [ECX],EDX
006CA40F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA412  89 0A                     MOV dword ptr [EDX],ECX
006CA414  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA417  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA41B  8D 50 01                  LEA EDX,[EAX + 0x1]
006CA41E  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA422  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA425  42                        INC EDX
006CA426  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA42A  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA42E  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA432  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca436:
006CA436  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CA439  85 C9                     TEST ECX,ECX
006CA43B  0F 85 81 41 00 00         JNZ 0x006ce5c2
006CA441  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CA444  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CA447  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA44A  2B CA                     SUB ECX,EDX
006CA44C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CA44F  66 8B 11                  MOV DX,word ptr [ECX]
006CA452  81 E2 00 C0 00 00         AND EDX,0xc000
006CA458  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA45E  0F 84 5E 41 00 00         JZ 0x006ce5c2
006CA464  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CA467  85 D2                     TEST EDX,EDX
006CA469  0F 85 20 01 00 00         JNZ 0x006ca58f
006CA46F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA472  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006CA476  2B CA                     SUB ECX,EDX
006CA478  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA47B  66 8B 09                  MOV CX,word ptr [ECX]
006CA47E  66 85 C9                  TEST CX,CX
006CA481  74 0B                     JZ 0x006ca48e
006CA483  0F BF C9                  MOVSX ECX,CX
006CA486  3B CF                     CMP ECX,EDI
006CA488  0F 8E 01 01 00 00         JLE 0x006ca58f
LAB_006ca48e:
006CA48E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA491  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA494  03 C9                     ADD ECX,ECX
006CA496  2B D1                     SUB EDX,ECX
006CA498  66 8B 12                  MOV DX,word ptr [EDX]
006CA49B  81 E2 00 C0 00 00         AND EDX,0xc000
006CA4A1  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA4A7  0F 84 E2 00 00 00         JZ 0x006ca58f
006CA4AD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA4B0  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA4B4  81 E2 00 C0 00 00         AND EDX,0xc000
006CA4BA  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA4C0  0F 84 C9 00 00 00         JZ 0x006ca58f
006CA4C6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA4C9  2B D1                     SUB EDX,ECX
006CA4CB  66 8B 0A                  MOV CX,word ptr [EDX]
006CA4CE  81 E1 00 C0 00 00         AND ECX,0xc000
006CA4D4  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA4DA  0F 84 AF 00 00 00         JZ 0x006ca58f
006CA4E0  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA4E3  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CA4E7  81 E2 00 C0 00 00         AND EDX,0xc000
006CA4ED  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA4F3  0F 84 96 00 00 00         JZ 0x006ca58f
006CA4F9  8B D1                     MOV EDX,ECX
006CA4FB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA4FE  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CA502  2B D1                     SUB EDX,ECX
006CA504  66 8B 12                  MOV DX,word ptr [EDX]
006CA507  81 E2 00 C0 00 00         AND EDX,0xc000
006CA50D  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA513  74 7A                     JZ 0x006ca58f
006CA515  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CA518  85 DB                     TEST EBX,EBX
006CA51A  66 89 39                  MOV word ptr [ECX],DI
006CA51D  75 08                     JNZ 0x006ca527
006CA51F  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CA522  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CA525  EB 20                     JMP 0x006ca547
LAB_006ca527:
006CA527  B9 01 00 00 00            MOV ECX,0x1
006CA52C  2B C8                     SUB ECX,EAX
006CA52E  3B D9                     CMP EBX,ECX
006CA530  7E 08                     JLE 0x006ca53a
006CA532  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA535  83 C1 FE                  ADD ECX,-0x2
006CA538  EB 0D                     JMP 0x006ca547
LAB_006ca53a:
006CA53A  75 05                     JNZ 0x006ca541
006CA53C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA53F  EB 06                     JMP 0x006ca547
LAB_006ca541:
006CA541  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CA544  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ca547:
006CA547  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA54A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA54D  4A                        DEC EDX
006CA54E  03 CF                     ADD ECX,EDI
006CA550  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA553  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA556  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA559  8B 36                     MOV ESI,dword ptr [ESI]
006CA55B  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA55E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA561  8B 11                     MOV EDX,dword ptr [ECX]
006CA563  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA566  89 11                     MOV dword ptr [ECX],EDX
006CA568  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA56B  89 0A                     MOV dword ptr [EDX],ECX
006CA56D  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CA570  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA574  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CA577  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA57B  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA57E  4A                        DEC EDX
006CA57F  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA583  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA587  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA58B  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca58f:
006CA58F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CA592  85 C9                     TEST ECX,ECX
006CA594  0F 85 E6 00 00 00         JNZ 0x006ca680
006CA59A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA59D  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CA5A0  03 D2                     ADD EDX,EDX
006CA5A2  2B CA                     SUB ECX,EDX
006CA5A4  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CA5A7  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA5AA  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CA5AE  66 85 D2                  TEST DX,DX
006CA5B1  74 0B                     JZ 0x006ca5be
006CA5B3  0F BF D2                  MOVSX EDX,DX
006CA5B6  3B D7                     CMP EDX,EDI
006CA5B8  0F 8E C2 00 00 00         JLE 0x006ca680
LAB_006ca5be:
006CA5BE  66 8B 09                  MOV CX,word ptr [ECX]
006CA5C1  81 E1 00 C0 00 00         AND ECX,0xc000
006CA5C7  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA5CD  0F 84 AD 00 00 00         JZ 0x006ca680
006CA5D3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA5D6  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CA5DA  81 E1 00 C0 00 00         AND ECX,0xc000
006CA5E0  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA5E6  0F 84 94 00 00 00         JZ 0x006ca680
006CA5EC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA5EF  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CA5F2  2B CA                     SUB ECX,EDX
006CA5F4  66 8B 11                  MOV DX,word ptr [ECX]
006CA5F7  81 E2 00 C0 00 00         AND EDX,0xc000
006CA5FD  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA603  74 7B                     JZ 0x006ca680
006CA605  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA608  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CA60C  81 E2 00 C0 00 00         AND EDX,0xc000
006CA612  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA618  74 66                     JZ 0x006ca680
006CA61A  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CA61E  81 E1 00 C0 00 00         AND ECX,0xc000
006CA624  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA62A  74 54                     JZ 0x006ca680
006CA62C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CA62F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA632  83 C1 04                  ADD ECX,0x4
006CA635  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA638  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CA63C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA63F  4A                        DEC EDX
006CA640  03 CF                     ADD ECX,EDI
006CA642  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA645  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA648  8B 36                     MOV ESI,dword ptr [ESI]
006CA64A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA64D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA650  8B 11                     MOV EDX,dword ptr [ECX]
006CA652  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA655  89 11                     MOV dword ptr [ECX],EDX
006CA657  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA65A  89 0A                     MOV dword ptr [EDX],ECX
006CA65C  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA65F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA663  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CA666  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA66A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA66D  4A                        DEC EDX
006CA66E  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA672  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA676  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CA679  83 C2 04                  ADD EDX,0x4
006CA67C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca680:
006CA680  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CA683  85 C9                     TEST ECX,ECX
006CA685  0F 85 0F 01 00 00         JNZ 0x006ca79a
006CA68B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA68E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA691  03 C9                     ADD ECX,ECX
006CA693  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CA698  66 85 D2                  TEST DX,DX
006CA69B  74 0B                     JZ 0x006ca6a8
006CA69D  0F BF D2                  MOVSX EDX,DX
006CA6A0  3B D7                     CMP EDX,EDI
006CA6A2  0F 8E F2 00 00 00         JLE 0x006ca79a
LAB_006ca6a8:
006CA6A8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA6AB  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA6AF  81 E2 00 C0 00 00         AND EDX,0xc000
006CA6B5  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA6BB  0F 84 D9 00 00 00         JZ 0x006ca79a
006CA6C1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA6C4  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA6C8  81 E2 00 C0 00 00         AND EDX,0xc000
006CA6CE  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA6D4  0F 84 C0 00 00 00         JZ 0x006ca79a
006CA6DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA6DD  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA6E1  81 E2 00 C0 00 00         AND EDX,0xc000
006CA6E7  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA6ED  0F 84 A7 00 00 00         JZ 0x006ca79a
006CA6F3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA6F6  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CA6FA  81 E2 00 C0 00 00         AND EDX,0xc000
006CA700  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA706  0F 84 8E 00 00 00         JZ 0x006ca79a
006CA70C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA70F  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CA714  81 E2 00 C0 00 00         AND EDX,0xc000
006CA71A  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA720  74 78                     JZ 0x006ca79a
006CA722  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA725  85 DB                     TEST EBX,EBX
006CA727  66 89 7C 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],DI
006CA72C  75 1E                     JNZ 0x006ca74c
006CA72E  85 C0                     TEST EAX,EAX
006CA730  75 08                     JNZ 0x006ca73a
006CA732  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA735  83 C1 04                  ADD ECX,0x4
006CA738  EB 18                     JMP 0x006ca752
LAB_006ca73a:
006CA73A  83 F8 FF                  CMP EAX,-0x1
006CA73D  75 05                     JNZ 0x006ca744
006CA73F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA742  EB 0E                     JMP 0x006ca752
LAB_006ca744:
006CA744  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CA747  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CA74A  EB 06                     JMP 0x006ca752
LAB_006ca74c:
006CA74C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CA74F  83 C1 FC                  ADD ECX,-0x4
LAB_006ca752:
006CA752  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA755  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA758  4A                        DEC EDX
006CA759  03 CF                     ADD ECX,EDI
006CA75B  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA75E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA761  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA764  8B 36                     MOV ESI,dword ptr [ESI]
006CA766  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CA769  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CA76C  8B 11                     MOV EDX,dword ptr [ECX]
006CA76E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA771  89 11                     MOV dword ptr [ECX],EDX
006CA773  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA776  89 0A                     MOV dword ptr [EDX],ECX
006CA778  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CA77B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA77F  8D 50 01                  LEA EDX,[EAX + 0x1]
006CA782  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA786  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CA789  4A                        DEC EDX
006CA78A  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
006CA78E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA792  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA796  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
LAB_006ca79a:
006CA79A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CA79D  85 C9                     TEST ECX,ECX
006CA79F  0F 85 1D 3E 00 00         JNZ 0x006ce5c2
006CA7A5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA7A8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA7AB  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CA7B0  66 85 C9                  TEST CX,CX
006CA7B3  74 0B                     JZ 0x006ca7c0
006CA7B5  0F BF C9                  MOVSX ECX,CX
006CA7B8  3B CF                     CMP ECX,EDI
006CA7BA  0F 8E 02 3E 00 00         JLE 0x006ce5c2
LAB_006ca7c0:
006CA7C0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CA7C3  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CA7C6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA7C9  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CA7CD  81 E2 00 C0 00 00         AND EDX,0xc000
006CA7D3  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA7D9  0F 84 E3 3D 00 00         JZ 0x006ce5c2
006CA7DF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA7E2  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CA7E6  81 E2 00 C0 00 00         AND EDX,0xc000
006CA7EC  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA7F2  0F 84 CA 3D 00 00         JZ 0x006ce5c2
006CA7F8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA7FB  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CA7FF  81 E1 00 C0 00 00         AND ECX,0xc000
006CA805  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA80B  0F 84 B1 3D 00 00         JZ 0x006ce5c2
006CA811  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CA815  81 E1 00 C0 00 00         AND ECX,0xc000
006CA81B  81 F9 00 C0 00 00         CMP ECX,0xc000
006CA821  0F 84 9B 3D 00 00         JZ 0x006ce5c2
006CA827  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA82A  66 8B 54 4A 02            MOV DX,word ptr [EDX + ECX*0x2 + 0x2]
006CA82F  81 E2 00 C0 00 00         AND EDX,0xc000
006CA835  81 FA 00 C0 00 00         CMP EDX,0xc000
006CA83B  0F 84 81 3D 00 00         JZ 0x006ce5c2
006CA841  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA844  66 89 7C 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],DI
006CA849  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA84C  8B C8                     MOV ECX,EAX
006CA84E  E9 0E 3D 00 00            JMP 0x006ce561
switchD_006c9394::caseD_1:
006CA853  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CA856  83 E1 10                  AND ECX,0x10
006CA859  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CA85C  75 78                     JNZ 0x006ca8d6
006CA85E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA861  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CA865  66 85 C9                  TEST CX,CX
006CA868  74 0A                     JZ 0x006ca874
006CA86A  0F BF D1                  MOVSX EDX,CX
006CA86D  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA870  3B D1                     CMP EDX,ECX
006CA872  7E 62                     JLE 0x006ca8d6
LAB_006ca874:
006CA874  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA877  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA87A  3B D8                     CMP EBX,EAX
006CA87C  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CA880  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA883  7F 05                     JG 0x006ca88a
006CA885  83 C2 03                  ADD EDX,0x3
006CA888  EB 01                     JMP 0x006ca88b
LAB_006ca88a:
006CA88A  42                        INC EDX
LAB_006ca88b:
006CA88B  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CA88E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA891  4A                        DEC EDX
006CA892  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA895  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA898  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CA89B  03 D1                     ADD EDX,ECX
006CA89D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CA8A0  8B 36                     MOV ESI,dword ptr [ESI]
006CA8A2  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CA8A5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CA8A8  8B 11                     MOV EDX,dword ptr [ECX]
006CA8AA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA8AD  89 11                     MOV dword ptr [ECX],EDX
006CA8AF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA8B2  89 0A                     MOV dword ptr [EDX],ECX
006CA8B4  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CA8B7  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA8BB  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CA8BF  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA8C3  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA8C7  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CA8CB  8D 57 03                  LEA EDX,[EDI + 0x3]
006CA8CE  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CA8D2  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006ca8d6:
006CA8D6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA8D9  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CA8DD  66 85 C9                  TEST CX,CX
006CA8E0  74 0A                     JZ 0x006ca8ec
006CA8E2  0F BF D1                  MOVSX EDX,CX
006CA8E5  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA8E8  3B D1                     CMP EDX,ECX
006CA8EA  7E 62                     JLE 0x006ca94e
LAB_006ca8ec:
006CA8EC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA8EF  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA8F2  3B D8                     CMP EBX,EAX
006CA8F4  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CA8F8  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA8FB  7D 05                     JGE 0x006ca902
006CA8FD  83 C2 FD                  ADD EDX,-0x3
006CA900  EB 01                     JMP 0x006ca903
LAB_006ca902:
006CA902  4A                        DEC EDX
LAB_006ca903:
006CA903  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CA906  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA909  4A                        DEC EDX
006CA90A  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA90D  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA910  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CA913  03 D1                     ADD EDX,ECX
006CA915  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CA918  8B 36                     MOV ESI,dword ptr [ESI]
006CA91A  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CA91D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CA920  8B 11                     MOV EDX,dword ptr [ECX]
006CA922  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA925  89 11                     MOV dword ptr [ECX],EDX
006CA927  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA92A  89 0A                     MOV dword ptr [EDX],ECX
006CA92C  8D 53 01                  LEA EDX,[EBX + 0x1]
006CA92F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CA933  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CA937  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA93B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA93F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CA943  8D 57 03                  LEA EDX,[EDI + 0x3]
006CA946  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CA94A  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006ca94e:
006CA94E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CA951  83 E1 20                  AND ECX,0x20
006CA954  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CA957  0F 85 83 00 00 00         JNZ 0x006ca9e0
006CA95D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA960  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CA963  03 C9                     ADD ECX,ECX
006CA965  2B D1                     SUB EDX,ECX
006CA967  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CA96A  66 8B 0A                  MOV CX,word ptr [EDX]
006CA96D  66 85 C9                  TEST CX,CX
006CA970  74 0D                     JZ 0x006ca97f
006CA972  0F BF D1                  MOVSX EDX,CX
006CA975  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA978  3B D1                     CMP EDX,ECX
006CA97A  7E 64                     JLE 0x006ca9e0
006CA97C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006ca97f:
006CA97F  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA982  3B C3                     CMP EAX,EBX
006CA984  66 89 0A                  MOV word ptr [EDX],CX
006CA987  7F 08                     JG 0x006ca991
006CA989  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CA98C  83 C1 03                  ADD ECX,0x3
006CA98F  EB 06                     JMP 0x006ca997
LAB_006ca991:
006CA991  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CA994  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006ca997:
006CA997  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CA99A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CA99D  4A                        DEC EDX
006CA99E  03 CF                     ADD ECX,EDI
006CA9A0  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CA9A3  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CA9A6  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CA9A9  8B 36                     MOV ESI,dword ptr [ESI]
006CA9AB  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CA9AF  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CA9B2  8B 11                     MOV EDX,dword ptr [ECX]
006CA9B4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CA9B7  89 11                     MOV dword ptr [ECX],EDX
006CA9B9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CA9BC  89 0A                     MOV dword ptr [EDX],ECX
006CA9BE  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CA9C1  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CA9C5  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CA9C9  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CA9CD  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CA9D1  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CA9D5  8D 57 03                  LEA EDX,[EDI + 0x3]
006CA9D8  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CA9DC  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006ca9e0:
006CA9E0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CA9E3  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CA9E6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CA9E9  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CA9EC  66 8B 0C 0A               MOV CX,word ptr [EDX + ECX*0x1]
006CA9F0  66 85 C9                  TEST CX,CX
006CA9F3  74 0D                     JZ 0x006caa02
006CA9F5  0F BF D1                  MOVSX EDX,CX
006CA9F8  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CA9FB  3B D1                     CMP EDX,ECX
006CA9FD  7E 69                     JLE 0x006caa68
006CA9FF  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
LAB_006caa02:
006CAA02  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CAA05  8D 47 03                  LEA EAX,[EDI + 0x3]
006CAA08  66 89 04 0A               MOV word ptr [EDX + ECX*0x1],AX
006CAA0C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CAA0F  3B C3                     CMP EAX,EBX
006CAA11  7D 08                     JGE 0x006caa1b
006CAA13  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CAA16  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CAA19  EB 04                     JMP 0x006caa1f
LAB_006caa1b:
006CAA1B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CAA1E  49                        DEC ECX
LAB_006caa1f:
006CAA1F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CAA22  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAA25  4A                        DEC EDX
006CAA26  03 CF                     ADD ECX,EDI
006CAA28  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAA2B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAA2E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAA31  8B 36                     MOV ESI,dword ptr [ESI]
006CAA33  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CAA37  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CAA3A  8B 11                     MOV EDX,dword ptr [ECX]
006CAA3C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAA3F  89 11                     MOV dword ptr [ECX],EDX
006CAA41  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAA44  89 0A                     MOV dword ptr [EDX],ECX
006CAA46  8D 50 01                  LEA EDX,[EAX + 0x1]
006CAA49  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CAA4D  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CAA51  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAA55  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAA59  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAA5D  8D 57 03                  LEA EDX,[EDI + 0x3]
006CAA60  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CAA64  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006caa68:
006CAA68  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CAA6B  83 E1 40                  AND ECX,0x40
006CAA6E  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006CAA71  75 6E                     JNZ 0x006caae1
006CAA73  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CAA76  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAA79  03 C9                     ADD ECX,ECX
006CAA7B  2B D1                     SUB EDX,ECX
006CAA7D  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006CAA80  66 8B 0A                  MOV CX,word ptr [EDX]
006CAA83  66 85 C9                  TEST CX,CX
006CAA86  74 0D                     JZ 0x006caa95
006CAA88  0F BF D1                  MOVSX EDX,CX
006CAA8B  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CAA8E  3B D1                     CMP EDX,ECX
006CAA90  7E 4F                     JLE 0x006caae1
006CAA92  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006caa95:
006CAA95  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CAA98  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAA9B  66 89 0A                  MOV word ptr [EDX],CX
006CAA9E  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006CAAA1  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAAA4  49                        DEC ECX
006CAAA5  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006CAAA8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CAAAB  03 CF                     ADD ECX,EDI
006CAAAD  8B 36                     MOV ESI,dword ptr [ESI]
006CAAAF  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CAAB3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAAB6  8B 11                     MOV EDX,dword ptr [ECX]
006CAAB8  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAABB  89 11                     MOV dword ptr [ECX],EDX
006CAABD  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CAAC0  89 0A                     MOV dword ptr [EDX],ECX
006CAAC2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAAC5  4A                        DEC EDX
006CAAC6  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CAACA  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CAACE  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAAD2  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
006CAAD6  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAADA  8D 57 03                  LEA EDX,[EDI + 0x3]
006CAADD  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006caae1:
006CAAE1  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CAAE4  83 E1 04                  AND ECX,0x4
006CAAE7  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006CAAEA  75 65                     JNZ 0x006cab51
006CAAEC  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CAAEF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAAF2  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CAAF6  66 85 C9                  TEST CX,CX
006CAAF9  74 0A                     JZ 0x006cab05
006CAAFB  0F BF D1                  MOVSX EDX,CX
006CAAFE  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CAB01  3B D1                     CMP EDX,ECX
006CAB03  7E 4C                     JLE 0x006cab51
LAB_006cab05:
006CAB05  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CAB08  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAB0B  8D 47 03                  LEA EAX,[EDI + 0x3]
006CAB0E  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006CAB12  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CAB15  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAB18  48                        DEC EAX
006CAB19  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006CAB1C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CAB1F  03 C7                     ADD EAX,EDI
006CAB21  8B CE                     MOV ECX,ESI
006CAB23  8B 36                     MOV ESI,dword ptr [ESI]
006CAB25  8D 44 82 0C               LEA EAX,[EDX + EAX*0x4 + 0xc]
006CAB29  8B 10                     MOV EDX,dword ptr [EAX]
006CAB2B  89 11                     MOV dword ptr [ECX],EDX
006CAB2D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAB30  89 08                     MOV dword ptr [EAX],ECX
006CAB32  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CAB35  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CAB39  42                        INC EDX
006CAB3A  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CAB3E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAB42  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
006CAB46  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAB4A  8D 57 03                  LEA EDX,[EDI + 0x3]
006CAB4D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cab51:
006CAB51  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CAB54  85 C9                     TEST ECX,ECX
006CAB56  0F 85 8A 02 00 00         JNZ 0x006cade6
006CAB5C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CAB5F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAB62  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
006CAB67  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006CAB6A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CAB6D  0F 8C 73 02 00 00         JL 0x006cade6
006CAB73  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CAB76  85 D2                     TEST EDX,EDX
006CAB78  0F 85 8D 00 00 00         JNZ 0x006cac0b
006CAB7E  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CAB82  66 85 C9                  TEST CX,CX
006CAB85  74 0A                     JZ 0x006cab91
006CAB87  0F BF C9                  MOVSX ECX,CX
006CAB8A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAB8D  3B CA                     CMP ECX,EDX
006CAB8F  7E 7A                     JLE 0x006cac0b
LAB_006cab91:
006CAB91  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAB94  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CAB98  81 E1 00 C0 00 00         AND ECX,0xc000
006CAB9E  81 F9 00 C0 00 00         CMP ECX,0xc000
006CABA4  74 65                     JZ 0x006cac0b
006CABA6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CABA9  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CABAC  3B D8                     CMP EBX,EAX
006CABAE  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CABB2  7F 08                     JG 0x006cabbc
006CABB4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CABB7  83 C1 03                  ADD ECX,0x3
006CABBA  EB 06                     JMP 0x006cabc2
LAB_006cabbc:
006CABBC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CABBF  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cabc2:
006CABC2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CABC5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CABC8  4A                        DEC EDX
006CABC9  03 CF                     ADD ECX,EDI
006CABCB  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CABCE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CABD1  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CABD4  8B 36                     MOV ESI,dword ptr [ESI]
006CABD6  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CABDA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CABDD  8B 11                     MOV EDX,dword ptr [ECX]
006CABDF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CABE2  89 11                     MOV dword ptr [ECX],EDX
006CABE4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CABE7  89 0A                     MOV dword ptr [EDX],ECX
006CABE9  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CABEC  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CABF0  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CABF3  42                        INC EDX
006CABF4  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CABF8  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CABFC  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAC00  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAC04  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAC07  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cac0b:
006CAC0B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CAC0E  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CAC12  66 85 C9                  TEST CX,CX
006CAC15  74 0A                     JZ 0x006cac21
006CAC17  0F BF C9                  MOVSX ECX,CX
006CAC1A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAC1D  3B CA                     CMP ECX,EDX
006CAC1F  7E 7A                     JLE 0x006cac9b
LAB_006cac21:
006CAC21  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAC24  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CAC28  81 E1 00 C0 00 00         AND ECX,0xc000
006CAC2E  81 F9 00 C0 00 00         CMP ECX,0xc000
006CAC34  74 65                     JZ 0x006cac9b
006CAC36  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAC39  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CAC3C  3B D8                     CMP EBX,EAX
006CAC3E  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CAC42  7D 08                     JGE 0x006cac4c
006CAC44  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CAC47  83 C1 FD                  ADD ECX,-0x3
006CAC4A  EB 06                     JMP 0x006cac52
LAB_006cac4c:
006CAC4C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CAC4F  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cac52:
006CAC52  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CAC55  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAC58  4A                        DEC EDX
006CAC59  03 CF                     ADD ECX,EDI
006CAC5B  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAC5E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAC61  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAC64  8B 36                     MOV ESI,dword ptr [ESI]
006CAC66  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CAC6A  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CAC6D  8B 11                     MOV EDX,dword ptr [ECX]
006CAC6F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAC72  89 11                     MOV dword ptr [ECX],EDX
006CAC74  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CAC77  89 0A                     MOV dword ptr [EDX],ECX
006CAC79  8D 53 01                  LEA EDX,[EBX + 0x1]
006CAC7C  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CAC80  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAC83  42                        INC EDX
006CAC84  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CAC88  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAC8C  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAC90  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAC94  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAC97  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cac9b:
006CAC9B  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CAC9E  85 C9                     TEST ECX,ECX
006CACA0  0F 85 9E 00 00 00         JNZ 0x006cad44
006CACA6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CACA9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CACAC  03 D2                     ADD EDX,EDX
006CACAE  2B CA                     SUB ECX,EDX
006CACB0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CACB3  66 8B 09                  MOV CX,word ptr [ECX]
006CACB6  66 85 C9                  TEST CX,CX
006CACB9  74 0A                     JZ 0x006cacc5
006CACBB  0F BF C9                  MOVSX ECX,CX
006CACBE  8D 57 04                  LEA EDX,[EDI + 0x4]
006CACC1  3B CA                     CMP ECX,EDX
006CACC3  7E 7F                     JLE 0x006cad44
LAB_006cacc5:
006CACC5  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CACC8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CACCB  03 C9                     ADD ECX,ECX
006CACCD  2B D1                     SUB EDX,ECX
006CACCF  66 8B 12                  MOV DX,word ptr [EDX]
006CACD2  81 E2 00 C0 00 00         AND EDX,0xc000
006CACD8  81 FA 00 C0 00 00         CMP EDX,0xc000
006CACDE  74 64                     JZ 0x006cad44
006CACE0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CACE3  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CACE6  3B C3                     CMP EAX,EBX
006CACE8  66 89 0A                  MOV word ptr [EDX],CX
006CACEB  7F 08                     JG 0x006cacf5
006CACED  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CACF0  83 C1 03                  ADD ECX,0x3
006CACF3  EB 06                     JMP 0x006cacfb
LAB_006cacf5:
006CACF5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CACF8  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cacfb:
006CACFB  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CACFE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAD01  4A                        DEC EDX
006CAD02  03 CF                     ADD ECX,EDI
006CAD04  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAD07  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAD0A  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAD0D  8B 36                     MOV ESI,dword ptr [ESI]
006CAD0F  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CAD13  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CAD16  8B 11                     MOV EDX,dword ptr [ECX]
006CAD18  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAD1B  89 11                     MOV dword ptr [ECX],EDX
006CAD1D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CAD20  89 0A                     MOV dword ptr [EDX],ECX
006CAD22  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CAD25  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CAD29  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CAD2D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAD30  42                        INC EDX
006CAD31  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAD35  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAD39  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAD3D  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAD40  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cad44:
006CAD44  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CAD47  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAD4A  03 C9                     ADD ECX,ECX
006CAD4C  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CAD50  66 85 C9                  TEST CX,CX
006CAD53  74 0E                     JZ 0x006cad63
006CAD55  0F BF C9                  MOVSX ECX,CX
006CAD58  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAD5B  3B CA                     CMP ECX,EDX
006CAD5D  0F 8E 83 00 00 00         JLE 0x006cade6
LAB_006cad63:
006CAD63  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CAD66  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CAD69  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAD6C  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CAD70  81 E2 00 C0 00 00         AND EDX,0xc000
006CAD76  81 FA 00 C0 00 00         CMP EDX,0xc000
006CAD7C  74 68                     JZ 0x006cade6
006CAD7E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAD81  8D 47 04                  LEA EAX,[EDI + 0x4]
006CAD84  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006CAD88  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CAD8B  3B C3                     CMP EAX,EBX
006CAD8D  7D 08                     JGE 0x006cad97
006CAD8F  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CAD92  83 C1 FD                  ADD ECX,-0x3
006CAD95  EB 06                     JMP 0x006cad9d
LAB_006cad97:
006CAD97  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CAD9A  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cad9d:
006CAD9D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CADA0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CADA3  4A                        DEC EDX
006CADA4  03 CF                     ADD ECX,EDI
006CADA6  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CADA9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CADAC  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CADAF  8B 36                     MOV ESI,dword ptr [ESI]
006CADB1  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CADB5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CADB8  8B 11                     MOV EDX,dword ptr [ECX]
006CADBA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CADBD  89 11                     MOV dword ptr [ECX],EDX
006CADBF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CADC2  89 0A                     MOV dword ptr [EDX],ECX
006CADC4  8D 50 01                  LEA EDX,[EAX + 0x1]
006CADC7  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CADCB  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CADCF  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CADD2  42                        INC EDX
006CADD3  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CADD7  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CADDB  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CADDF  8D 57 04                  LEA EDX,[EDI + 0x4]
006CADE2  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cade6:
006CADE6  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CADE9  85 C9                     TEST ECX,ECX
006CADEB  0F 85 8B 02 00 00         JNZ 0x006cb07c
006CADF1  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CADF4  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CADF7  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CADFA  2B CA                     SUB ECX,EDX
006CADFC  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CADFF  66 83 39 00               CMP word ptr [ECX],0x0
006CAE03  0F 8C 73 02 00 00         JL 0x006cb07c
006CAE09  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CAE0C  85 D2                     TEST EDX,EDX
006CAE0E  0F 85 8D 00 00 00         JNZ 0x006caea1
006CAE14  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CAE18  66 85 C9                  TEST CX,CX
006CAE1B  74 0A                     JZ 0x006cae27
006CAE1D  0F BF C9                  MOVSX ECX,CX
006CAE20  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAE23  3B CA                     CMP ECX,EDX
006CAE25  7E 7A                     JLE 0x006caea1
LAB_006cae27:
006CAE27  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAE2A  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CAE2E  81 E1 00 C0 00 00         AND ECX,0xc000
006CAE34  81 F9 00 C0 00 00         CMP ECX,0xc000
006CAE3A  74 65                     JZ 0x006caea1
006CAE3C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAE3F  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CAE42  3B D8                     CMP EBX,EAX
006CAE44  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CAE48  7F 08                     JG 0x006cae52
006CAE4A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CAE4D  83 C1 03                  ADD ECX,0x3
006CAE50  EB 06                     JMP 0x006cae58
LAB_006cae52:
006CAE52  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CAE55  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cae58:
006CAE58  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CAE5B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAE5E  4A                        DEC EDX
006CAE5F  03 CF                     ADD ECX,EDI
006CAE61  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAE64  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAE67  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAE6A  8B 36                     MOV ESI,dword ptr [ESI]
006CAE6C  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CAE70  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CAE73  8B 11                     MOV EDX,dword ptr [ECX]
006CAE75  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAE78  89 11                     MOV dword ptr [ECX],EDX
006CAE7A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CAE7D  89 0A                     MOV dword ptr [EDX],ECX
006CAE7F  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CAE82  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CAE86  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAE89  4A                        DEC EDX
006CAE8A  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CAE8E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAE92  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAE96  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAE9A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAE9D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006caea1:
006CAEA1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CAEA4  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CAEA8  66 85 C9                  TEST CX,CX
006CAEAB  74 0A                     JZ 0x006caeb7
006CAEAD  0F BF C9                  MOVSX ECX,CX
006CAEB0  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAEB3  3B CA                     CMP ECX,EDX
006CAEB5  7E 7A                     JLE 0x006caf31
LAB_006caeb7:
006CAEB7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAEBA  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CAEBE  81 E1 00 C0 00 00         AND ECX,0xc000
006CAEC4  81 F9 00 C0 00 00         CMP ECX,0xc000
006CAECA  74 65                     JZ 0x006caf31
006CAECC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAECF  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CAED2  3B D8                     CMP EBX,EAX
006CAED4  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CAED8  7D 08                     JGE 0x006caee2
006CAEDA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CAEDD  83 C1 FD                  ADD ECX,-0x3
006CAEE0  EB 06                     JMP 0x006caee8
LAB_006caee2:
006CAEE2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CAEE5  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006caee8:
006CAEE8  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CAEEB  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAEEE  4A                        DEC EDX
006CAEEF  03 CF                     ADD ECX,EDI
006CAEF1  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAEF4  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAEF7  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAEFA  8B 36                     MOV ESI,dword ptr [ESI]
006CAEFC  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CAF00  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CAF03  8B 11                     MOV EDX,dword ptr [ECX]
006CAF05  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAF08  89 11                     MOV dword ptr [ECX],EDX
006CAF0A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CAF0D  89 0A                     MOV dword ptr [EDX],ECX
006CAF0F  8D 53 01                  LEA EDX,[EBX + 0x1]
006CAF12  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CAF16  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAF19  4A                        DEC EDX
006CAF1A  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CAF1E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAF22  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAF26  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAF2A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAF2D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006caf31:
006CAF31  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CAF34  85 C9                     TEST ECX,ECX
006CAF36  0F 85 9E 00 00 00         JNZ 0x006cafda
006CAF3C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CAF3F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CAF42  03 D2                     ADD EDX,EDX
006CAF44  2B CA                     SUB ECX,EDX
006CAF46  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAF49  66 8B 09                  MOV CX,word ptr [ECX]
006CAF4C  66 85 C9                  TEST CX,CX
006CAF4F  74 0A                     JZ 0x006caf5b
006CAF51  0F BF C9                  MOVSX ECX,CX
006CAF54  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAF57  3B CA                     CMP ECX,EDX
006CAF59  7E 7F                     JLE 0x006cafda
LAB_006caf5b:
006CAF5B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CAF5E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CAF61  03 C9                     ADD ECX,ECX
006CAF63  2B D1                     SUB EDX,ECX
006CAF65  66 8B 12                  MOV DX,word ptr [EDX]
006CAF68  81 E2 00 C0 00 00         AND EDX,0xc000
006CAF6E  81 FA 00 C0 00 00         CMP EDX,0xc000
006CAF74  74 64                     JZ 0x006cafda
006CAF76  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CAF79  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CAF7C  3B C3                     CMP EAX,EBX
006CAF7E  66 89 0A                  MOV word ptr [EDX],CX
006CAF81  7F 08                     JG 0x006caf8b
006CAF83  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CAF86  83 C1 03                  ADD ECX,0x3
006CAF89  EB 06                     JMP 0x006caf91
LAB_006caf8b:
006CAF8B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CAF8E  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006caf91:
006CAF91  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CAF94  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CAF97  4A                        DEC EDX
006CAF98  03 CF                     ADD ECX,EDI
006CAF9A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CAF9D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CAFA0  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CAFA3  8B 36                     MOV ESI,dword ptr [ESI]
006CAFA5  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CAFA9  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CAFAC  8B 11                     MOV EDX,dword ptr [ECX]
006CAFAE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CAFB1  89 11                     MOV dword ptr [ECX],EDX
006CAFB3  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CAFB6  89 0A                     MOV dword ptr [EDX],ECX
006CAFB8  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CAFBB  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CAFBF  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CAFC3  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CAFC6  4A                        DEC EDX
006CAFC7  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CAFCB  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CAFCF  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CAFD3  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAFD6  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cafda:
006CAFDA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CAFDD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CAFE0  03 C9                     ADD ECX,ECX
006CAFE2  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CAFE6  66 85 C9                  TEST CX,CX
006CAFE9  74 0E                     JZ 0x006caff9
006CAFEB  0F BF C9                  MOVSX ECX,CX
006CAFEE  8D 57 04                  LEA EDX,[EDI + 0x4]
006CAFF1  3B CA                     CMP ECX,EDX
006CAFF3  0F 8E 83 00 00 00         JLE 0x006cb07c
LAB_006caff9:
006CAFF9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CAFFC  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CAFFF  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB002  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB006  81 E2 00 C0 00 00         AND EDX,0xc000
006CB00C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB012  74 68                     JZ 0x006cb07c
006CB014  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB017  8D 47 04                  LEA EAX,[EDI + 0x4]
006CB01A  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006CB01E  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CB021  3B C3                     CMP EAX,EBX
006CB023  7D 08                     JGE 0x006cb02d
006CB025  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CB028  83 C1 FD                  ADD ECX,-0x3
006CB02B  EB 06                     JMP 0x006cb033
LAB_006cb02d:
006CB02D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CB030  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cb033:
006CB033  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB036  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB039  4A                        DEC EDX
006CB03A  03 CF                     ADD ECX,EDI
006CB03C  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB03F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB042  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB045  8B 36                     MOV ESI,dword ptr [ESI]
006CB047  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CB04B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CB04E  8B 11                     MOV EDX,dword ptr [ECX]
006CB050  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB053  89 11                     MOV dword ptr [ECX],EDX
006CB055  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CB058  89 0A                     MOV dword ptr [EDX],ECX
006CB05A  8D 50 01                  LEA EDX,[EAX + 0x1]
006CB05D  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CB061  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB065  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB068  4A                        DEC EDX
006CB069  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB06D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB071  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB075  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB078  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cb07c:
006CB07C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB07F  83 E1 30                  AND ECX,0x30
006CB082  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CB085  0F 85 AF 00 00 00         JNZ 0x006cb13a
006CB08B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB08E  8D 54 09 02               LEA EDX,[ECX + ECX*0x1 + 0x2]
006CB092  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB095  2B CA                     SUB ECX,EDX
006CB097  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB09A  66 8B 09                  MOV CX,word ptr [ECX]
006CB09D  66 85 C9                  TEST CX,CX
006CB0A0  74 0E                     JZ 0x006cb0b0
006CB0A2  0F BF C9                  MOVSX ECX,CX
006CB0A5  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB0A8  3B CA                     CMP ECX,EDX
006CB0AA  0F 8E 8A 00 00 00         JLE 0x006cb13a
LAB_006cb0b0:
006CB0B0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB0B3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB0B6  03 C9                     ADD ECX,ECX
006CB0B8  2B D1                     SUB EDX,ECX
006CB0BA  66 8B 12                  MOV DX,word ptr [EDX]
006CB0BD  81 E2 00 C0 00 00         AND EDX,0xc000
006CB0C3  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB0C9  74 6F                     JZ 0x006cb13a
006CB0CB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB0CE  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CB0D2  81 E2 00 C0 00 00         AND EDX,0xc000
006CB0D8  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB0DE  74 5A                     JZ 0x006cb13a
006CB0E0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CB0E3  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CB0E6  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB0E9  66 89 0A                  MOV word ptr [EDX],CX
006CB0EC  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CB0EF  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB0F2  83 C1 04                  ADD ECX,0x4
006CB0F5  4A                        DEC EDX
006CB0F6  03 CF                     ADD ECX,EDI
006CB0F8  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB0FB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB0FE  8B 36                     MOV ESI,dword ptr [ESI]
006CB100  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CB104  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CB107  8B 11                     MOV EDX,dword ptr [ECX]
006CB109  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB10C  89 11                     MOV dword ptr [ECX],EDX
006CB10E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CB111  89 0A                     MOV dword ptr [EDX],ECX
006CB113  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CB116  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB11A  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB11D  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB121  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CB125  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB129  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB12C  83 C2 04                  ADD EDX,0x4
006CB12F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB133  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB136  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cb13a:
006CB13A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB13D  83 E1 21                  AND ECX,0x21
006CB140  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CB143  0F 85 C0 00 00 00         JNZ 0x006cb209
006CB149  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CB14C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB14F  03 D2                     ADD EDX,EDX
006CB151  2B CA                     SUB ECX,EDX
006CB153  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB156  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CB15A  66 85 D2                  TEST DX,DX
006CB15D  74 11                     JZ 0x006cb170
006CB15F  0F BF D2                  MOVSX EDX,DX
006CB162  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CB165  3B D1                     CMP EDX,ECX
006CB167  0F 8E 9C 00 00 00         JLE 0x006cb209
006CB16D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006cb170:
006CB170  66 8B 11                  MOV DX,word ptr [ECX]
006CB173  81 E2 00 C0 00 00         AND EDX,0xc000
006CB179  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB17F  0F 84 84 00 00 00         JZ 0x006cb209
006CB185  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB188  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CB18C  81 E2 00 C0 00 00         AND EDX,0xc000
006CB192  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB198  74 6F                     JZ 0x006cb209
006CB19A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB19D  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006CB1A1  8D 48 FF                  LEA ECX,[EAX + -0x1]
006CB1A4  3B D9                     CMP EBX,ECX
006CB1A6  7D 08                     JGE 0x006cb1b0
006CB1A8  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CB1AB  83 C1 FE                  ADD ECX,-0x2
006CB1AE  EB 0D                     JMP 0x006cb1bd
LAB_006cb1b0:
006CB1B0  75 05                     JNZ 0x006cb1b7
006CB1B2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CB1B5  EB 06                     JMP 0x006cb1bd
LAB_006cb1b7:
006CB1B7  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB1BA  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cb1bd:
006CB1BD  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB1C0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB1C3  4A                        DEC EDX
006CB1C4  03 CF                     ADD ECX,EDI
006CB1C6  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB1C9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB1CC  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB1CF  8B 36                     MOV ESI,dword ptr [ESI]
006CB1D1  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CB1D5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CB1D8  8B 11                     MOV EDX,dword ptr [ECX]
006CB1DA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB1DD  89 11                     MOV dword ptr [ECX],EDX
006CB1DF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CB1E2  89 0A                     MOV dword ptr [EDX],ECX
006CB1E4  8D 53 01                  LEA EDX,[EBX + 0x1]
006CB1E7  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB1EB  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB1EE  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB1F2  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CB1F6  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB1FA  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB1FE  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB202  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB205  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cb209:
006CB209  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB20C  83 E1 12                  AND ECX,0x12
006CB20F  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006CB212  0F 85 CA 00 00 00         JNZ 0x006cb2e2
006CB218  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB21B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB21E  03 C9                     ADD ECX,ECX
006CB220  66 8B 4C 11 FE            MOV CX,word ptr [ECX + EDX*0x1 + -0x2]
006CB225  66 85 C9                  TEST CX,CX
006CB228  74 0E                     JZ 0x006cb238
006CB22A  0F BF C9                  MOVSX ECX,CX
006CB22D  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB230  3B CA                     CMP ECX,EDX
006CB232  0F 8E AA 00 00 00         JLE 0x006cb2e2
LAB_006cb238:
006CB238  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CB23B  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CB23E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB241  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB245  81 E2 00 C0 00 00         AND EDX,0xc000
006CB24B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB251  0F 84 8B 00 00 00         JZ 0x006cb2e2
006CB257  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB25A  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CB25E  81 E2 00 C0 00 00         AND EDX,0xc000
006CB264  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB26A  74 76                     JZ 0x006cb2e2
006CB26C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB26F  8D 47 04                  LEA EAX,[EDI + 0x4]
006CB272  66 89 44 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],AX
006CB277  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CB27A  8D 4B FF                  LEA ECX,[EBX + -0x1]
006CB27D  3B C1                     CMP EAX,ECX
006CB27F  7D 08                     JGE 0x006cb289
006CB281  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CB284  83 C1 FE                  ADD ECX,-0x2
006CB287  EB 0D                     JMP 0x006cb296
LAB_006cb289:
006CB289  75 05                     JNZ 0x006cb290
006CB28B  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CB28E  EB 06                     JMP 0x006cb296
LAB_006cb290:
006CB290  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB293  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cb296:
006CB296  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB299  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB29C  4A                        DEC EDX
006CB29D  03 CF                     ADD ECX,EDI
006CB29F  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB2A2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB2A5  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB2A8  8B 36                     MOV ESI,dword ptr [ESI]
006CB2AA  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CB2AE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CB2B1  8B 11                     MOV EDX,dword ptr [ECX]
006CB2B3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB2B6  89 11                     MOV dword ptr [ECX],EDX
006CB2B8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CB2BB  89 0A                     MOV dword ptr [EDX],ECX
006CB2BD  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CB2C0  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB2C4  8D 50 01                  LEA EDX,[EAX + 0x1]
006CB2C7  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB2CB  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CB2CF  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB2D3  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB2D7  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB2DB  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB2DE  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cb2e2:
006CB2E2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB2E5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB2E8  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CB2EC  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006CB2EF  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CB2F3  66 85 C9                  TEST CX,CX
006CB2F6  74 0E                     JZ 0x006cb306
006CB2F8  0F BF C9                  MOVSX ECX,CX
006CB2FB  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB2FE  3B CA                     CMP ECX,EDX
006CB300  0F 8E 82 00 00 00         JLE 0x006cb388
LAB_006cb306:
006CB306  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CB309  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CB30C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB30F  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CB313  81 E1 00 C0 00 00         AND ECX,0xc000
006CB319  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB31F  74 67                     JZ 0x006cb388
006CB321  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CB325  81 E1 00 C0 00 00         AND ECX,0xc000
006CB32B  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB331  74 55                     JZ 0x006cb388
006CB333  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB336  8D 47 04                  LEA EAX,[EDI + 0x4]
006CB339  66 89 04 11               MOV word ptr [ECX + EDX*0x1],AX
006CB33D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB340  8B CE                     MOV ECX,ESI
006CB342  8B 36                     MOV ESI,dword ptr [ESI]
006CB344  8D 42 FC                  LEA EAX,[EDX + -0x4]
006CB347  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB34A  4A                        DEC EDX
006CB34B  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006CB34E  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB351  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB354  03 C7                     ADD EAX,EDI
006CB356  8D 44 82 10               LEA EAX,[EDX + EAX*0x4 + 0x10]
006CB35A  8B 10                     MOV EDX,dword ptr [EAX]
006CB35C  89 11                     MOV dword ptr [ECX],EDX
006CB35E  89 08                     MOV dword ptr [EAX],ECX
006CB360  8D 43 01                  LEA EAX,[EBX + 0x1]
006CB363  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006CB367  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CB36A  8D 50 01                  LEA EDX,[EAX + 0x1]
006CB36D  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB371  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CB375  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB379  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB37D  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB381  8D 57 04                  LEA EDX,[EDI + 0x4]
006CB384  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cb388:
006CB388  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CB38B  83 C7 05                  ADD EDI,0x5
006CB38E  85 C9                     TEST ECX,ECX
006CB390  0F 85 06 04 00 00         JNZ 0x006cb79c
006CB396  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB399  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006CB39C  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006CB39F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CB3A2  66 8B 11                  MOV DX,word ptr [ECX]
006CB3A5  81 E2 00 C0 00 00         AND EDX,0xc000
006CB3AB  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB3B1  0F 84 E5 03 00 00         JZ 0x006cb79c
006CB3B7  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CB3BA  85 D2                     TEST EDX,EDX
006CB3BC  0F 85 E3 00 00 00         JNZ 0x006cb4a5
006CB3C2  2B 4D F4                  SUB ECX,dword ptr [EBP + -0xc]
006CB3C5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB3C8  66 8B 09                  MOV CX,word ptr [ECX]
006CB3CB  66 85 C9                  TEST CX,CX
006CB3CE  74 0B                     JZ 0x006cb3db
006CB3D0  0F BF C9                  MOVSX ECX,CX
006CB3D3  3B CF                     CMP ECX,EDI
006CB3D5  0F 8E CA 00 00 00         JLE 0x006cb4a5
LAB_006cb3db:
006CB3DB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB3DE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB3E1  03 C9                     ADD ECX,ECX
006CB3E3  2B D1                     SUB EDX,ECX
006CB3E5  66 8B 12                  MOV DX,word ptr [EDX]
006CB3E8  81 E2 00 C0 00 00         AND EDX,0xc000
006CB3EE  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB3F4  0F 84 AB 00 00 00         JZ 0x006cb4a5
006CB3FA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB3FD  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CB401  81 E2 00 C0 00 00         AND EDX,0xc000
006CB407  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB40D  0F 84 92 00 00 00         JZ 0x006cb4a5
006CB413  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB416  2B D1                     SUB EDX,ECX
006CB418  66 8B 0A                  MOV CX,word ptr [EDX]
006CB41B  81 E1 00 C0 00 00         AND ECX,0xc000
006CB421  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB427  74 7C                     JZ 0x006cb4a5
006CB429  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB42C  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CB430  81 E2 00 C0 00 00         AND EDX,0xc000
006CB436  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB43C  74 67                     JZ 0x006cb4a5
006CB43E  2B 4D F4                  SUB ECX,dword ptr [EBP + -0xc]
006CB441  66 8B 09                  MOV CX,word ptr [ECX]
006CB444  81 E1 00 C0 00 00         AND ECX,0xc000
006CB44A  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB450  74 53                     JZ 0x006cb4a5
006CB452  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CB455  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB458  83 C1 04                  ADD ECX,0x4
006CB45B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB45E  66 89 3A                  MOV word ptr [EDX],DI
006CB461  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB464  4A                        DEC EDX
006CB465  03 CF                     ADD ECX,EDI
006CB467  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB46A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB46D  8B 36                     MOV ESI,dword ptr [ESI]
006CB46F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB472  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB475  8B 11                     MOV EDX,dword ptr [ECX]
006CB477  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB47A  89 11                     MOV dword ptr [ECX],EDX
006CB47C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB47F  89 0A                     MOV dword ptr [EDX],ECX
006CB481  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CB484  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB488  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB48B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB48F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB492  42                        INC EDX
006CB493  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB497  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CB49A  83 C2 04                  ADD EDX,0x4
006CB49D  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB4A1  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb4a5:
006CB4A5  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CB4A8  85 C9                     TEST ECX,ECX
006CB4AA  0F 85 01 01 00 00         JNZ 0x006cb5b1
006CB4B0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CB4B3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CB4B6  03 D2                     ADD EDX,EDX
006CB4B8  2B CA                     SUB ECX,EDX
006CB4BA  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CB4BD  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB4C0  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CB4C4  66 85 D2                  TEST DX,DX
006CB4C7  74 0B                     JZ 0x006cb4d4
006CB4C9  0F BF D2                  MOVSX EDX,DX
006CB4CC  3B D7                     CMP EDX,EDI
006CB4CE  0F 8E DD 00 00 00         JLE 0x006cb5b1
LAB_006cb4d4:
006CB4D4  66 8B 09                  MOV CX,word ptr [ECX]
006CB4D7  81 E1 00 C0 00 00         AND ECX,0xc000
006CB4DD  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB4E3  0F 84 C8 00 00 00         JZ 0x006cb5b1
006CB4E9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB4EC  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CB4F0  81 E1 00 C0 00 00         AND ECX,0xc000
006CB4F6  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB4FC  0F 84 AF 00 00 00         JZ 0x006cb5b1
006CB502  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB505  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CB508  2B CA                     SUB ECX,EDX
006CB50A  66 8B 11                  MOV DX,word ptr [ECX]
006CB50D  81 E2 00 C0 00 00         AND EDX,0xc000
006CB513  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB519  0F 84 92 00 00 00         JZ 0x006cb5b1
006CB51F  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB522  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CB526  81 E2 00 C0 00 00         AND EDX,0xc000
006CB52C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB532  74 7D                     JZ 0x006cb5b1
006CB534  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CB538  81 E1 00 C0 00 00         AND ECX,0xc000
006CB53E  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB544  74 6B                     JZ 0x006cb5b1
006CB546  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CB549  8D 48 FF                  LEA ECX,[EAX + -0x1]
006CB54C  3B D9                     CMP EBX,ECX
006CB54E  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CB552  7D 08                     JGE 0x006cb55c
006CB554  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB557  83 C1 FE                  ADD ECX,-0x2
006CB55A  EB 0D                     JMP 0x006cb569
LAB_006cb55c:
006CB55C  75 05                     JNZ 0x006cb563
006CB55E  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB561  EB 06                     JMP 0x006cb569
LAB_006cb563:
006CB563  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CB566  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cb569:
006CB569  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB56C  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB56F  4A                        DEC EDX
006CB570  03 CF                     ADD ECX,EDI
006CB572  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB575  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB578  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB57B  8B 36                     MOV ESI,dword ptr [ESI]
006CB57D  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB580  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB583  8B 11                     MOV EDX,dword ptr [ECX]
006CB585  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB588  89 11                     MOV dword ptr [ECX],EDX
006CB58A  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB58D  89 0A                     MOV dword ptr [EDX],ECX
006CB58F  8D 53 01                  LEA EDX,[EBX + 0x1]
006CB592  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB596  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB599  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB59D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB5A0  42                        INC EDX
006CB5A1  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB5A5  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB5A9  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB5AD  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb5b1:
006CB5B1  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CB5B4  85 C9                     TEST ECX,ECX
006CB5B6  0F 85 03 01 00 00         JNZ 0x006cb6bf
006CB5BC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB5BF  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB5C2  03 C9                     ADD ECX,ECX
006CB5C4  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CB5C9  66 85 D2                  TEST DX,DX
006CB5CC  74 0B                     JZ 0x006cb5d9
006CB5CE  0F BF D2                  MOVSX EDX,DX
006CB5D1  3B D7                     CMP EDX,EDI
006CB5D3  0F 8E E6 00 00 00         JLE 0x006cb6bf
LAB_006cb5d9:
006CB5D9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB5DC  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB5E0  81 E2 00 C0 00 00         AND EDX,0xc000
006CB5E6  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB5EC  0F 84 CD 00 00 00         JZ 0x006cb6bf
006CB5F2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB5F5  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CB5F9  81 E2 00 C0 00 00         AND EDX,0xc000
006CB5FF  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB605  0F 84 B4 00 00 00         JZ 0x006cb6bf
006CB60B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB60E  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB612  81 E2 00 C0 00 00         AND EDX,0xc000
006CB618  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB61E  0F 84 9B 00 00 00         JZ 0x006cb6bf
006CB624  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB627  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CB62B  81 E2 00 C0 00 00         AND EDX,0xc000
006CB631  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB637  0F 84 82 00 00 00         JZ 0x006cb6bf
006CB63D  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB640  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CB645  81 E2 00 C0 00 00         AND EDX,0xc000
006CB64B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB651  74 6C                     JZ 0x006cb6bf
006CB653  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB656  66 89 7C 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],DI
006CB65B  8D 4B FF                  LEA ECX,[EBX + -0x1]
006CB65E  3B C1                     CMP EAX,ECX
006CB660  7D 08                     JGE 0x006cb66a
006CB662  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB665  83 C1 FE                  ADD ECX,-0x2
006CB668  EB 0D                     JMP 0x006cb677
LAB_006cb66a:
006CB66A  75 05                     JNZ 0x006cb671
006CB66C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB66F  EB 06                     JMP 0x006cb677
LAB_006cb671:
006CB671  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CB674  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cb677:
006CB677  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB67A  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB67D  4A                        DEC EDX
006CB67E  03 CF                     ADD ECX,EDI
006CB680  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB683  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB686  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB689  8B 36                     MOV ESI,dword ptr [ESI]
006CB68B  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB68E  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB691  8B 11                     MOV EDX,dword ptr [ECX]
006CB693  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB696  89 11                     MOV dword ptr [ECX],EDX
006CB698  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB69B  89 0A                     MOV dword ptr [EDX],ECX
006CB69D  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CB6A0  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB6A4  8D 50 01                  LEA EDX,[EAX + 0x1]
006CB6A7  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB6AB  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB6AE  42                        INC EDX
006CB6AF  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB6B3  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB6B7  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB6BB  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb6bf:
006CB6BF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB6C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB6C5  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CB6C9  66 85 C9                  TEST CX,CX
006CB6CC  74 0B                     JZ 0x006cb6d9
006CB6CE  0F BF C9                  MOVSX ECX,CX
006CB6D1  3B CF                     CMP ECX,EDI
006CB6D3  0F 8E C3 00 00 00         JLE 0x006cb79c
LAB_006cb6d9:
006CB6D9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB6DC  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CB6E0  81 E1 00 C0 00 00         AND ECX,0xc000
006CB6E6  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB6EC  0F 84 AA 00 00 00         JZ 0x006cb79c
006CB6F2  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CB6F6  81 E2 00 C0 00 00         AND EDX,0xc000
006CB6FC  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB702  0F 84 94 00 00 00         JZ 0x006cb79c
006CB708  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB70B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB70E  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CB712  81 E1 00 C0 00 00         AND ECX,0xc000
006CB718  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB71E  74 7C                     JZ 0x006cb79c
006CB720  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CB724  81 E1 00 C0 00 00         AND ECX,0xc000
006CB72A  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB730  74 6A                     JZ 0x006cb79c
006CB732  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CB735  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB739  81 E2 00 C0 00 00         AND EDX,0xc000
006CB73F  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB745  74 55                     JZ 0x006cb79c
006CB747  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB74A  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB74D  66 89 3C 11               MOV word ptr [ECX + EDX*0x1],DI
006CB751  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CB754  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB757  83 C1 FC                  ADD ECX,-0x4
006CB75A  4A                        DEC EDX
006CB75B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB75E  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB761  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB764  03 CF                     ADD ECX,EDI
006CB766  8B 36                     MOV ESI,dword ptr [ESI]
006CB768  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB76B  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB76E  8B 11                     MOV EDX,dword ptr [ECX]
006CB770  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB773  89 11                     MOV dword ptr [ECX],EDX
006CB775  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB778  89 0A                     MOV dword ptr [EDX],ECX
006CB77A  8D 53 01                  LEA EDX,[EBX + 0x1]
006CB77D  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB781  8D 50 01                  LEA EDX,[EAX + 0x1]
006CB784  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB788  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB78B  42                        INC EDX
006CB78C  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB790  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB794  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB798  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb79c:
006CB79C  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CB79F  85 C9                     TEST ECX,ECX
006CB7A1  0F 85 1B 2E 00 00         JNZ 0x006ce5c2
006CB7A7  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CB7AA  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CB7AD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB7B0  2B CA                     SUB ECX,EDX
006CB7B2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CB7B5  66 8B 11                  MOV DX,word ptr [ECX]
006CB7B8  81 E2 00 C0 00 00         AND EDX,0xc000
006CB7BE  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB7C4  0F 84 F8 2D 00 00         JZ 0x006ce5c2
006CB7CA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CB7CD  85 D2                     TEST EDX,EDX
006CB7CF  0F 85 E3 00 00 00         JNZ 0x006cb8b8
006CB7D5  2B 4D F4                  SUB ECX,dword ptr [EBP + -0xc]
006CB7D8  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB7DB  66 8B 09                  MOV CX,word ptr [ECX]
006CB7DE  66 85 C9                  TEST CX,CX
006CB7E1  74 0B                     JZ 0x006cb7ee
006CB7E3  0F BF C9                  MOVSX ECX,CX
006CB7E6  3B CF                     CMP ECX,EDI
006CB7E8  0F 8E CA 00 00 00         JLE 0x006cb8b8
LAB_006cb7ee:
006CB7EE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB7F1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB7F4  03 C9                     ADD ECX,ECX
006CB7F6  2B D1                     SUB EDX,ECX
006CB7F8  66 8B 12                  MOV DX,word ptr [EDX]
006CB7FB  81 E2 00 C0 00 00         AND EDX,0xc000
006CB801  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB807  0F 84 AB 00 00 00         JZ 0x006cb8b8
006CB80D  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB810  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CB814  81 E2 00 C0 00 00         AND EDX,0xc000
006CB81A  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB820  0F 84 92 00 00 00         JZ 0x006cb8b8
006CB826  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB829  2B D1                     SUB EDX,ECX
006CB82B  66 8B 0A                  MOV CX,word ptr [EDX]
006CB82E  81 E1 00 C0 00 00         AND ECX,0xc000
006CB834  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB83A  74 7C                     JZ 0x006cb8b8
006CB83C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB83F  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CB843  81 E2 00 C0 00 00         AND EDX,0xc000
006CB849  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB84F  74 67                     JZ 0x006cb8b8
006CB851  2B 4D F4                  SUB ECX,dword ptr [EBP + -0xc]
006CB854  66 8B 09                  MOV CX,word ptr [ECX]
006CB857  81 E1 00 C0 00 00         AND ECX,0xc000
006CB85D  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB863  74 53                     JZ 0x006cb8b8
006CB865  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CB868  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CB86B  83 C1 04                  ADD ECX,0x4
006CB86E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB871  66 89 3A                  MOV word ptr [EDX],DI
006CB874  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB877  4A                        DEC EDX
006CB878  03 CF                     ADD ECX,EDI
006CB87A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB87D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB880  8B 36                     MOV ESI,dword ptr [ESI]
006CB882  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB885  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB888  8B 11                     MOV EDX,dword ptr [ECX]
006CB88A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB88D  89 11                     MOV dword ptr [ECX],EDX
006CB88F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB892  89 0A                     MOV dword ptr [EDX],ECX
006CB894  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CB897  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB89B  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB89E  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB8A2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB8A5  4A                        DEC EDX
006CB8A6  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB8AA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CB8AD  83 C2 04                  ADD EDX,0x4
006CB8B0  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB8B4  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb8b8:
006CB8B8  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CB8BB  85 C9                     TEST ECX,ECX
006CB8BD  0F 85 01 01 00 00         JNZ 0x006cb9c4
006CB8C3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CB8C6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CB8C9  03 D2                     ADD EDX,EDX
006CB8CB  2B CA                     SUB ECX,EDX
006CB8CD  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CB8D0  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB8D3  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CB8D7  66 85 D2                  TEST DX,DX
006CB8DA  74 0B                     JZ 0x006cb8e7
006CB8DC  0F BF D2                  MOVSX EDX,DX
006CB8DF  3B D7                     CMP EDX,EDI
006CB8E1  0F 8E DD 00 00 00         JLE 0x006cb9c4
LAB_006cb8e7:
006CB8E7  66 8B 09                  MOV CX,word ptr [ECX]
006CB8EA  81 E1 00 C0 00 00         AND ECX,0xc000
006CB8F0  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB8F6  0F 84 C8 00 00 00         JZ 0x006cb9c4
006CB8FC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB8FF  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CB903  81 E1 00 C0 00 00         AND ECX,0xc000
006CB909  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB90F  0F 84 AF 00 00 00         JZ 0x006cb9c4
006CB915  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CB918  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CB91B  2B CA                     SUB ECX,EDX
006CB91D  66 8B 11                  MOV DX,word ptr [ECX]
006CB920  81 E2 00 C0 00 00         AND EDX,0xc000
006CB926  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB92C  0F 84 92 00 00 00         JZ 0x006cb9c4
006CB932  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CB935  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CB939  81 E2 00 C0 00 00         AND EDX,0xc000
006CB93F  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB945  74 7D                     JZ 0x006cb9c4
006CB947  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CB94B  81 E1 00 C0 00 00         AND ECX,0xc000
006CB951  81 F9 00 C0 00 00         CMP ECX,0xc000
006CB957  74 6B                     JZ 0x006cb9c4
006CB959  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CB95C  8D 48 FF                  LEA ECX,[EAX + -0x1]
006CB95F  3B D9                     CMP EBX,ECX
006CB961  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CB965  7D 08                     JGE 0x006cb96f
006CB967  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CB96A  83 C1 FE                  ADD ECX,-0x2
006CB96D  EB 0D                     JMP 0x006cb97c
LAB_006cb96f:
006CB96F  75 05                     JNZ 0x006cb976
006CB971  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CB974  EB 06                     JMP 0x006cb97c
LAB_006cb976:
006CB976  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CB979  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cb97c:
006CB97C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CB97F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CB982  4A                        DEC EDX
006CB983  03 CF                     ADD ECX,EDI
006CB985  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CB988  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CB98B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CB98E  8B 36                     MOV ESI,dword ptr [ESI]
006CB990  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CB993  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CB996  8B 11                     MOV EDX,dword ptr [ECX]
006CB998  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CB99B  89 11                     MOV dword ptr [ECX],EDX
006CB99D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CB9A0  89 0A                     MOV dword ptr [EDX],ECX
006CB9A2  8D 53 01                  LEA EDX,[EBX + 0x1]
006CB9A5  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CB9A9  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CB9AC  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CB9B0  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CB9B3  4A                        DEC EDX
006CB9B4  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CB9B8  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CB9BC  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CB9C0  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cb9c4:
006CB9C4  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CB9C7  85 C9                     TEST ECX,ECX
006CB9C9  0F 85 03 01 00 00         JNZ 0x006cbad2
006CB9CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CB9D2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB9D5  03 C9                     ADD ECX,ECX
006CB9D7  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CB9DC  66 85 D2                  TEST DX,DX
006CB9DF  74 0B                     JZ 0x006cb9ec
006CB9E1  0F BF D2                  MOVSX EDX,DX
006CB9E4  3B D7                     CMP EDX,EDI
006CB9E6  0F 8E E6 00 00 00         JLE 0x006cbad2
LAB_006cb9ec:
006CB9EC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CB9EF  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CB9F3  81 E2 00 C0 00 00         AND EDX,0xc000
006CB9F9  81 FA 00 C0 00 00         CMP EDX,0xc000
006CB9FF  0F 84 CD 00 00 00         JZ 0x006cbad2
006CBA05  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBA08  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CBA0C  81 E2 00 C0 00 00         AND EDX,0xc000
006CBA12  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBA18  0F 84 B4 00 00 00         JZ 0x006cbad2
006CBA1E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBA21  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CBA25  81 E2 00 C0 00 00         AND EDX,0xc000
006CBA2B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBA31  0F 84 9B 00 00 00         JZ 0x006cbad2
006CBA37  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBA3A  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CBA3E  81 E2 00 C0 00 00         AND EDX,0xc000
006CBA44  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBA4A  0F 84 82 00 00 00         JZ 0x006cbad2
006CBA50  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBA53  66 8B 54 11 FE            MOV DX,word ptr [ECX + EDX*0x1 + -0x2]
006CBA58  81 E2 00 C0 00 00         AND EDX,0xc000
006CBA5E  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBA64  74 6C                     JZ 0x006cbad2
006CBA66  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBA69  66 89 7C 11 FE            MOV word ptr [ECX + EDX*0x1 + -0x2],DI
006CBA6E  8D 4B FF                  LEA ECX,[EBX + -0x1]
006CBA71  3B C1                     CMP EAX,ECX
006CBA73  7D 08                     JGE 0x006cba7d
006CBA75  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CBA78  83 C1 FE                  ADD ECX,-0x2
006CBA7B  EB 0D                     JMP 0x006cba8a
LAB_006cba7d:
006CBA7D  75 05                     JNZ 0x006cba84
006CBA7F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CBA82  EB 06                     JMP 0x006cba8a
LAB_006cba84:
006CBA84  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CBA87  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cba8a:
006CBA8A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBA8D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBA90  4A                        DEC EDX
006CBA91  03 CF                     ADD ECX,EDI
006CBA93  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBA96  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBA99  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBA9C  8B 36                     MOV ESI,dword ptr [ESI]
006CBA9E  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CBAA1  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CBAA4  8B 11                     MOV EDX,dword ptr [ECX]
006CBAA6  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBAA9  89 11                     MOV dword ptr [ECX],EDX
006CBAAB  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBAAE  89 0A                     MOV dword ptr [EDX],ECX
006CBAB0  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CBAB3  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CBAB7  8D 50 01                  LEA EDX,[EAX + 0x1]
006CBABA  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CBABE  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CBAC1  4A                        DEC EDX
006CBAC2  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBAC6  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBACA  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBACE  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cbad2:
006CBAD2  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBAD5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBAD8  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CBADC  66 85 C9                  TEST CX,CX
006CBADF  74 0B                     JZ 0x006cbaec
006CBAE1  0F BF C9                  MOVSX ECX,CX
006CBAE4  3B CF                     CMP ECX,EDI
006CBAE6  0F 8E D6 2A 00 00         JLE 0x006ce5c2
LAB_006cbaec:
006CBAEC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CBAEF  03 C9                     ADD ECX,ECX
006CBAF1  89 4D 20                  MOV dword ptr [EBP + 0x20],ECX
006CBAF4  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CBAF8  81 E1 00 C0 00 00         AND ECX,0xc000
006CBAFE  81 F9 00 C0 00 00         CMP ECX,0xc000
006CBB04  0F 84 B8 2A 00 00         JZ 0x006ce5c2
006CBB0A  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CBB0E  81 E2 00 C0 00 00         AND EDX,0xc000
006CBB14  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBB1A  0F 84 A2 2A 00 00         JZ 0x006ce5c2
006CBB20  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBB23  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBB26  66 8B 0C 11               MOV CX,word ptr [ECX + EDX*0x1]
006CBB2A  81 E1 00 C0 00 00         AND ECX,0xc000
006CBB30  81 F9 00 C0 00 00         CMP ECX,0xc000
006CBB36  0F 84 86 2A 00 00         JZ 0x006ce5c2
006CBB3C  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CBB40  81 E1 00 C0 00 00         AND ECX,0xc000
006CBB46  81 F9 00 C0 00 00         CMP ECX,0xc000
006CBB4C  0F 84 70 2A 00 00         JZ 0x006ce5c2
006CBB52  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBB55  66 8B 14 11               MOV DX,word ptr [ECX + EDX*0x1]
006CBB59  81 E2 00 C0 00 00         AND EDX,0xc000
006CBB5F  81 FA 00 C0 00 00         CMP EDX,0xc000
006CBB65  0F 84 57 2A 00 00         JZ 0x006ce5c2
006CBB6B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBB6E  66 89 3C 11               MOV word ptr [ECX + EDX*0x1],DI
006CBB72  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CBB75  83 C1 FC                  ADD ECX,-0x4
006CBB78  E9 FF 29 00 00            JMP 0x006ce57c
switchD_006c9394::caseD_2:
006CBB7D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBB80  83 E1 10                  AND ECX,0x10
006CBB83  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CBB86  0F 85 8B 00 00 00         JNZ 0x006cbc17
006CBB8C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBB8F  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CBB93  66 85 C9                  TEST CX,CX
006CBB96  74 0A                     JZ 0x006cbba2
006CBB98  0F BF D1                  MOVSX EDX,CX
006CBB9B  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBB9E  3B D1                     CMP EDX,ECX
006CBBA0  7E 75                     JLE 0x006cbc17
LAB_006cbba2:
006CBBA2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBBA5  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBBA8  85 DB                     TEST EBX,EBX
006CBBAA  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CBBAE  75 0F                     JNZ 0x006cbbbf
006CBBB0  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBBB3  85 C0                     TEST EAX,EAX
006CBBB5  75 05                     JNZ 0x006cbbbc
006CBBB7  83 C2 03                  ADD EDX,0x3
006CBBBA  EB 10                     JMP 0x006cbbcc
LAB_006cbbbc:
006CBBBC  42                        INC EDX
006CBBBD  EB 0D                     JMP 0x006cbbcc
LAB_006cbbbf:
006CBBBF  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBBC2  3B D8                     CMP EBX,EAX
006CBBC4  7E 05                     JLE 0x006cbbcb
006CBBC6  83 C2 FD                  ADD EDX,-0x3
006CBBC9  EB 01                     JMP 0x006cbbcc
LAB_006cbbcb:
006CBBCB  4A                        DEC EDX
LAB_006cbbcc:
006CBBCC  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CBBCF  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBBD2  4A                        DEC EDX
006CBBD3  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBBD6  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBBD9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CBBDC  03 D1                     ADD EDX,ECX
006CBBDE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CBBE1  8B 36                     MOV ESI,dword ptr [ESI]
006CBBE3  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CBBE6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CBBE9  8B 11                     MOV EDX,dword ptr [ECX]
006CBBEB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBBEE  89 11                     MOV dword ptr [ECX],EDX
006CBBF0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBBF3  89 0A                     MOV dword ptr [EDX],ECX
006CBBF5  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CBBF8  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CBBFC  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CBC00  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CBC04  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBC08  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBC0C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBC10  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBC13  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbc17:
006CBC17  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBC1A  83 E1 01                  AND ECX,0x1
006CBC1D  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006CBC20  75 78                     JNZ 0x006cbc9a
006CBC22  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBC25  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CBC29  66 85 C9                  TEST CX,CX
006CBC2C  74 0A                     JZ 0x006cbc38
006CBC2E  0F BF D1                  MOVSX EDX,CX
006CBC31  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBC34  3B D1                     CMP EDX,ECX
006CBC36  7E 62                     JLE 0x006cbc9a
LAB_006cbc38:
006CBC38  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBC3B  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBC3E  3B D8                     CMP EBX,EAX
006CBC40  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CBC44  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBC47  7C 05                     JL 0x006cbc4e
006CBC49  83 C2 03                  ADD EDX,0x3
006CBC4C  EB 01                     JMP 0x006cbc4f
LAB_006cbc4e:
006CBC4E  42                        INC EDX
LAB_006cbc4f:
006CBC4F  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CBC52  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBC55  4A                        DEC EDX
006CBC56  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBC59  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBC5C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CBC5F  03 D1                     ADD EDX,ECX
006CBC61  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CBC64  8B 36                     MOV ESI,dword ptr [ESI]
006CBC66  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CBC69  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CBC6C  8B 11                     MOV EDX,dword ptr [ECX]
006CBC6E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBC71  89 11                     MOV dword ptr [ECX],EDX
006CBC73  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBC76  89 0A                     MOV dword ptr [EDX],ECX
006CBC78  8D 53 01                  LEA EDX,[EBX + 0x1]
006CBC7B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CBC7F  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CBC83  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CBC87  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBC8B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBC8F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBC93  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBC96  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbc9a:
006CBC9A  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBC9D  83 E1 20                  AND ECX,0x20
006CBCA0  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CBCA3  0F 85 9C 00 00 00         JNZ 0x006cbd45
006CBCA9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CBCAC  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CBCAF  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBCB2  2B CA                     SUB ECX,EDX
006CBCB4  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBCB7  66 8B 11                  MOV DX,word ptr [ECX]
006CBCBA  66 85 D2                  TEST DX,DX
006CBCBD  74 0D                     JZ 0x006cbccc
006CBCBF  0F BF D2                  MOVSX EDX,DX
006CBCC2  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBCC5  3B D1                     CMP EDX,ECX
006CBCC7  7E 7C                     JLE 0x006cbd45
006CBCC9  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006cbccc:
006CBCCC  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBCCF  85 C0                     TEST EAX,EAX
006CBCD1  66 89 11                  MOV word ptr [ECX],DX
006CBCD4  75 14                     JNZ 0x006cbcea
006CBCD6  85 DB                     TEST EBX,EBX
006CBCD8  75 08                     JNZ 0x006cbce2
006CBCDA  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CBCDD  83 C1 03                  ADD ECX,0x3
006CBCE0  EB 1A                     JMP 0x006cbcfc
LAB_006cbce2:
006CBCE2  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBCE5  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CBCE8  EB 12                     JMP 0x006cbcfc
LAB_006cbcea:
006CBCEA  3B C3                     CMP EAX,EBX
006CBCEC  7E 08                     JLE 0x006cbcf6
006CBCEE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CBCF1  83 C1 FD                  ADD ECX,-0x3
006CBCF4  EB 06                     JMP 0x006cbcfc
LAB_006cbcf6:
006CBCF6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBCF9  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cbcfc:
006CBCFC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBCFF  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBD02  4A                        DEC EDX
006CBD03  03 CF                     ADD ECX,EDI
006CBD05  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBD08  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBD0B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBD0E  8B 36                     MOV ESI,dword ptr [ESI]
006CBD10  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CBD14  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CBD17  8B 11                     MOV EDX,dword ptr [ECX]
006CBD19  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBD1C  89 11                     MOV dword ptr [ECX],EDX
006CBD1E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBD21  89 0A                     MOV dword ptr [EDX],ECX
006CBD23  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CBD26  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CBD2A  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CBD2E  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CBD32  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBD36  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBD3A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBD3E  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBD41  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbd45:
006CBD45  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBD48  83 E1 02                  AND ECX,0x2
006CBD4B  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006CBD4E  0F 85 84 00 00 00         JNZ 0x006cbdd8
006CBD54  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBD57  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CBD5A  66 8B 0C 51               MOV CX,word ptr [ECX + EDX*0x2]
006CBD5E  66 85 C9                  TEST CX,CX
006CBD61  74 0A                     JZ 0x006cbd6d
006CBD63  0F BF D1                  MOVSX EDX,CX
006CBD66  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBD69  3B D1                     CMP EDX,ECX
006CBD6B  7E 6B                     JLE 0x006cbdd8
LAB_006cbd6d:
006CBD6D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CBD70  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBD73  8D 47 03                  LEA EAX,[EDI + 0x3]
006CBD76  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006CBD7A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CBD7D  3B C3                     CMP EAX,EBX
006CBD7F  7C 08                     JL 0x006cbd89
006CBD81  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CBD84  83 C1 03                  ADD ECX,0x3
006CBD87  EB 06                     JMP 0x006cbd8f
LAB_006cbd89:
006CBD89  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CBD8C  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cbd8f:
006CBD8F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBD92  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBD95  4A                        DEC EDX
006CBD96  03 CF                     ADD ECX,EDI
006CBD98  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBD9B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBD9E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBDA1  8B 36                     MOV ESI,dword ptr [ESI]
006CBDA3  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CBDA7  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CBDAA  8B 11                     MOV EDX,dword ptr [ECX]
006CBDAC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBDAF  89 11                     MOV dword ptr [ECX],EDX
006CBDB1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBDB4  89 0A                     MOV dword ptr [EDX],ECX
006CBDB6  8D 50 01                  LEA EDX,[EAX + 0x1]
006CBDB9  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CBDBD  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CBDC1  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CBDC5  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBDC9  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBDCD  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBDD1  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBDD4  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbdd8:
006CBDD8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBDDB  83 E1 40                  AND ECX,0x40
006CBDDE  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006CBDE1  75 6E                     JNZ 0x006cbe51
006CBDE3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CBDE6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBDE9  03 C9                     ADD ECX,ECX
006CBDEB  2B D1                     SUB EDX,ECX
006CBDED  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006CBDF0  66 8B 0A                  MOV CX,word ptr [EDX]
006CBDF3  66 85 C9                  TEST CX,CX
006CBDF6  74 0D                     JZ 0x006cbe05
006CBDF8  0F BF D1                  MOVSX EDX,CX
006CBDFB  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBDFE  3B D1                     CMP EDX,ECX
006CBE00  7E 4F                     JLE 0x006cbe51
006CBE02  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006cbe05:
006CBE05  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBE08  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBE0B  66 89 0A                  MOV word ptr [EDX],CX
006CBE0E  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006CBE11  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBE14  49                        DEC ECX
006CBE15  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006CBE18  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CBE1B  03 CF                     ADD ECX,EDI
006CBE1D  8B 36                     MOV ESI,dword ptr [ESI]
006CBE1F  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CBE23  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBE26  8B 11                     MOV EDX,dword ptr [ECX]
006CBE28  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBE2B  89 11                     MOV dword ptr [ECX],EDX
006CBE2D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CBE30  89 0A                     MOV dword ptr [EDX],ECX
006CBE32  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CBE35  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CBE39  4A                        DEC EDX
006CBE3A  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CBE3E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBE42  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
006CBE46  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBE4A  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBE4D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbe51:
006CBE51  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CBE54  83 E1 04                  AND ECX,0x4
006CBE57  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006CBE5A  75 65                     JNZ 0x006cbec1
006CBE5C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBE5F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006CBE62  66 8B 0C 51               MOV CX,word ptr [ECX + EDX*0x2]
006CBE66  66 85 C9                  TEST CX,CX
006CBE69  74 0A                     JZ 0x006cbe75
006CBE6B  0F BF D1                  MOVSX EDX,CX
006CBE6E  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CBE71  3B D1                     CMP EDX,ECX
006CBE73  7E 4C                     JLE 0x006cbec1
LAB_006cbe75:
006CBE75  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CBE78  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBE7B  8D 47 03                  LEA EAX,[EDI + 0x3]
006CBE7E  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006CBE82  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CBE85  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBE88  48                        DEC EAX
006CBE89  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006CBE8C  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CBE8F  03 C7                     ADD EAX,EDI
006CBE91  8B CE                     MOV ECX,ESI
006CBE93  8B 36                     MOV ESI,dword ptr [ESI]
006CBE95  8D 44 82 0C               LEA EAX,[EDX + EAX*0x4 + 0xc]
006CBE99  8B 10                     MOV EDX,dword ptr [EAX]
006CBE9B  89 11                     MOV dword ptr [ECX],EDX
006CBE9D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CBEA0  89 08                     MOV dword ptr [EAX],ECX
006CBEA2  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CBEA5  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CBEA9  42                        INC EDX
006CBEAA  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CBEAE  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBEB2  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
006CBEB6  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBEBA  8D 57 03                  LEA EDX,[EDI + 0x3]
006CBEBD  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbec1:
006CBEC1  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CBEC4  85 C9                     TEST ECX,ECX
006CBEC6  0F 85 D7 02 00 00         JNZ 0x006cc1a3
006CBECC  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CBECF  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006CBED2  66 83 3C 51 00            CMP word ptr [ECX + EDX*0x2],0x0
006CBED7  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006CBEDA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CBEDD  0F 8C C0 02 00 00         JL 0x006cc1a3
006CBEE3  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CBEE6  85 D2                     TEST EDX,EDX
006CBEE8  0F 85 A9 00 00 00         JNZ 0x006cbf97
006CBEEE  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CBEF2  66 85 C9                  TEST CX,CX
006CBEF5  74 0E                     JZ 0x006cbf05
006CBEF7  0F BF C9                  MOVSX ECX,CX
006CBEFA  8D 57 04                  LEA EDX,[EDI + 0x4]
006CBEFD  3B CA                     CMP ECX,EDX
006CBEFF  0F 8E 92 00 00 00         JLE 0x006cbf97
LAB_006cbf05:
006CBF05  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBF08  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CBF0C  81 E1 00 C0 00 00         AND ECX,0xc000
006CBF12  81 F9 00 C0 00 00         CMP ECX,0xc000
006CBF18  74 7D                     JZ 0x006cbf97
006CBF1A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBF1D  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CBF20  85 DB                     TEST EBX,EBX
006CBF22  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CBF26  75 14                     JNZ 0x006cbf3c
006CBF28  85 C0                     TEST EAX,EAX
006CBF2A  75 08                     JNZ 0x006cbf34
006CBF2C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CBF2F  83 C1 03                  ADD ECX,0x3
006CBF32  EB 1A                     JMP 0x006cbf4e
LAB_006cbf34:
006CBF34  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CBF37  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CBF3A  EB 12                     JMP 0x006cbf4e
LAB_006cbf3c:
006CBF3C  3B D8                     CMP EBX,EAX
006CBF3E  7E 08                     JLE 0x006cbf48
006CBF40  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CBF43  83 C1 FD                  ADD ECX,-0x3
006CBF46  EB 06                     JMP 0x006cbf4e
LAB_006cbf48:
006CBF48  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CBF4B  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cbf4e:
006CBF4E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBF51  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBF54  4A                        DEC EDX
006CBF55  03 CF                     ADD ECX,EDI
006CBF57  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBF5A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBF5D  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBF60  8B 36                     MOV ESI,dword ptr [ESI]
006CBF62  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CBF66  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CBF69  8B 11                     MOV EDX,dword ptr [ECX]
006CBF6B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CBF6E  89 11                     MOV dword ptr [ECX],EDX
006CBF70  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CBF73  89 0A                     MOV dword ptr [EDX],ECX
006CBF75  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CBF78  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CBF7C  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CBF7F  42                        INC EDX
006CBF80  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CBF84  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CBF88  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CBF8C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CBF90  8D 57 04                  LEA EDX,[EDI + 0x4]
006CBF93  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cbf97:
006CBF97  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CBF9A  85 C9                     TEST ECX,ECX
006CBF9C  0F 85 90 00 00 00         JNZ 0x006cc032
006CBFA2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CBFA5  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CBFA9  66 85 C9                  TEST CX,CX
006CBFAC  74 0A                     JZ 0x006cbfb8
006CBFAE  0F BF C9                  MOVSX ECX,CX
006CBFB1  8D 57 04                  LEA EDX,[EDI + 0x4]
006CBFB4  3B CA                     CMP ECX,EDX
006CBFB6  7E 7A                     JLE 0x006cc032
LAB_006cbfb8:
006CBFB8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CBFBB  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CBFBF  81 E1 00 C0 00 00         AND ECX,0xc000
006CBFC5  81 F9 00 C0 00 00         CMP ECX,0xc000
006CBFCB  74 65                     JZ 0x006cc032
006CBFCD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CBFD0  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CBFD3  3B D8                     CMP EBX,EAX
006CBFD5  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CBFD9  7C 08                     JL 0x006cbfe3
006CBFDB  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CBFDE  83 C1 03                  ADD ECX,0x3
006CBFE1  EB 06                     JMP 0x006cbfe9
LAB_006cbfe3:
006CBFE3  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CBFE6  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cbfe9:
006CBFE9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CBFEC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CBFEF  4A                        DEC EDX
006CBFF0  03 CF                     ADD ECX,EDI
006CBFF2  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CBFF5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CBFF8  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CBFFB  8B 36                     MOV ESI,dword ptr [ESI]
006CBFFD  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC001  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC004  8B 11                     MOV EDX,dword ptr [ECX]
006CC006  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC009  89 11                     MOV dword ptr [ECX],EDX
006CC00B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC00E  89 0A                     MOV dword ptr [EDX],ECX
006CC010  8D 53 01                  LEA EDX,[EBX + 0x1]
006CC013  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC017  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC01A  42                        INC EDX
006CC01B  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CC01F  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC023  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC027  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC02B  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC02E  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc032:
006CC032  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CC035  85 C9                     TEST ECX,ECX
006CC037  0F 85 BB 00 00 00         JNZ 0x006cc0f8
006CC03D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC040  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CC043  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC046  2B CA                     SUB ECX,EDX
006CC048  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC04B  66 8B 09                  MOV CX,word ptr [ECX]
006CC04E  66 85 C9                  TEST CX,CX
006CC051  74 0E                     JZ 0x006cc061
006CC053  0F BF C9                  MOVSX ECX,CX
006CC056  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC059  3B CA                     CMP ECX,EDX
006CC05B  0F 8E 97 00 00 00         JLE 0x006cc0f8
LAB_006cc061:
006CC061  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC064  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC067  03 C9                     ADD ECX,ECX
006CC069  2B D1                     SUB EDX,ECX
006CC06B  66 8B 12                  MOV DX,word ptr [EDX]
006CC06E  81 E2 00 C0 00 00         AND EDX,0xc000
006CC074  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC07A  74 7C                     JZ 0x006cc0f8
006CC07C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CC07F  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC082  85 C0                     TEST EAX,EAX
006CC084  66 89 0A                  MOV word ptr [EDX],CX
006CC087  75 14                     JNZ 0x006cc09d
006CC089  85 DB                     TEST EBX,EBX
006CC08B  75 08                     JNZ 0x006cc095
006CC08D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC090  83 C1 03                  ADD ECX,0x3
006CC093  EB 1A                     JMP 0x006cc0af
LAB_006cc095:
006CC095  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CC098  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CC09B  EB 12                     JMP 0x006cc0af
LAB_006cc09d:
006CC09D  3B C3                     CMP EAX,EBX
006CC09F  7E 08                     JLE 0x006cc0a9
006CC0A1  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC0A4  83 C1 FD                  ADD ECX,-0x3
006CC0A7  EB 06                     JMP 0x006cc0af
LAB_006cc0a9:
006CC0A9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CC0AC  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cc0af:
006CC0AF  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC0B2  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC0B5  4A                        DEC EDX
006CC0B6  03 CF                     ADD ECX,EDI
006CC0B8  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC0BB  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC0BE  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC0C1  8B 36                     MOV ESI,dword ptr [ESI]
006CC0C3  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC0C7  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC0CA  8B 11                     MOV EDX,dword ptr [ECX]
006CC0CC  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC0CF  89 11                     MOV dword ptr [ECX],EDX
006CC0D1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC0D4  89 0A                     MOV dword ptr [EDX],ECX
006CC0D6  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CC0D9  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CC0DD  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC0E1  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC0E4  42                        INC EDX
006CC0E5  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC0E9  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC0ED  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC0F1  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC0F4  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc0f8:
006CC0F8  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006CC0FB  85 C9                     TEST ECX,ECX
006CC0FD  0F 85 A0 00 00 00         JNZ 0x006cc1a3
006CC103  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC106  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC109  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CC10D  66 85 C9                  TEST CX,CX
006CC110  74 0E                     JZ 0x006cc120
006CC112  0F BF C9                  MOVSX ECX,CX
006CC115  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC118  3B CA                     CMP ECX,EDX
006CC11A  0F 8E 83 00 00 00         JLE 0x006cc1a3
LAB_006cc120:
006CC120  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC123  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC126  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CC12A  81 E2 00 C0 00 00         AND EDX,0xc000
006CC130  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC136  74 6B                     JZ 0x006cc1a3
006CC138  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC13B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC13E  8D 47 04                  LEA EAX,[EDI + 0x4]
006CC141  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006CC145  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CC148  3B C3                     CMP EAX,EBX
006CC14A  7C 08                     JL 0x006cc154
006CC14C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC14F  83 C1 03                  ADD ECX,0x3
006CC152  EB 06                     JMP 0x006cc15a
LAB_006cc154:
006CC154  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CC157  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cc15a:
006CC15A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC15D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC160  4A                        DEC EDX
006CC161  03 CF                     ADD ECX,EDI
006CC163  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC166  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC169  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC16C  8B 36                     MOV ESI,dword ptr [ESI]
006CC16E  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC172  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC175  8B 11                     MOV EDX,dword ptr [ECX]
006CC177  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC17A  89 11                     MOV dword ptr [ECX],EDX
006CC17C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC17F  89 0A                     MOV dword ptr [EDX],ECX
006CC181  8D 50 01                  LEA EDX,[EAX + 0x1]
006CC184  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CC188  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC18C  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC18F  42                        INC EDX
006CC190  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC194  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC198  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC19C  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC19F  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc1a3:
006CC1A3  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CC1A6  85 C9                     TEST ECX,ECX
006CC1A8  0F 85 D8 02 00 00         JNZ 0x006cc486
006CC1AE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CC1B1  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CC1B4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC1B7  2B CA                     SUB ECX,EDX
006CC1B9  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CC1BC  66 83 39 00               CMP word ptr [ECX],0x0
006CC1C0  0F 8C C0 02 00 00         JL 0x006cc486
006CC1C6  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CC1C9  85 D2                     TEST EDX,EDX
006CC1CB  0F 85 A9 00 00 00         JNZ 0x006cc27a
006CC1D1  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CC1D5  66 85 C9                  TEST CX,CX
006CC1D8  74 0E                     JZ 0x006cc1e8
006CC1DA  0F BF C9                  MOVSX ECX,CX
006CC1DD  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC1E0  3B CA                     CMP ECX,EDX
006CC1E2  0F 8E 92 00 00 00         JLE 0x006cc27a
LAB_006cc1e8:
006CC1E8  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC1EB  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CC1EF  81 E1 00 C0 00 00         AND ECX,0xc000
006CC1F5  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC1FB  74 7D                     JZ 0x006cc27a
006CC1FD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC200  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC203  85 DB                     TEST EBX,EBX
006CC205  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CC209  75 14                     JNZ 0x006cc21f
006CC20B  85 C0                     TEST EAX,EAX
006CC20D  75 08                     JNZ 0x006cc217
006CC20F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC212  83 C1 03                  ADD ECX,0x3
006CC215  EB 1A                     JMP 0x006cc231
LAB_006cc217:
006CC217  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC21A  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CC21D  EB 12                     JMP 0x006cc231
LAB_006cc21f:
006CC21F  3B D8                     CMP EBX,EAX
006CC221  7E 08                     JLE 0x006cc22b
006CC223  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC226  83 C1 FD                  ADD ECX,-0x3
006CC229  EB 06                     JMP 0x006cc231
LAB_006cc22b:
006CC22B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC22E  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cc231:
006CC231  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC234  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC237  4A                        DEC EDX
006CC238  03 CF                     ADD ECX,EDI
006CC23A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC23D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC240  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC243  8B 36                     MOV ESI,dword ptr [ESI]
006CC245  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC249  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC24C  8B 11                     MOV EDX,dword ptr [ECX]
006CC24E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC251  89 11                     MOV dword ptr [ECX],EDX
006CC253  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC256  89 0A                     MOV dword ptr [EDX],ECX
006CC258  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CC25B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC25F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC262  4A                        DEC EDX
006CC263  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CC267  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC26B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC26F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC273  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC276  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc27a:
006CC27A  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CC27D  85 C9                     TEST ECX,ECX
006CC27F  0F 85 90 00 00 00         JNZ 0x006cc315
006CC285  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC288  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CC28C  66 85 C9                  TEST CX,CX
006CC28F  74 0A                     JZ 0x006cc29b
006CC291  0F BF C9                  MOVSX ECX,CX
006CC294  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC297  3B CA                     CMP ECX,EDX
006CC299  7E 7A                     JLE 0x006cc315
LAB_006cc29b:
006CC29B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC29E  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CC2A2  81 E1 00 C0 00 00         AND ECX,0xc000
006CC2A8  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC2AE  74 65                     JZ 0x006cc315
006CC2B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC2B3  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC2B6  3B D8                     CMP EBX,EAX
006CC2B8  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CC2BC  7C 08                     JL 0x006cc2c6
006CC2BE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC2C1  83 C1 03                  ADD ECX,0x3
006CC2C4  EB 06                     JMP 0x006cc2cc
LAB_006cc2c6:
006CC2C6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC2C9  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cc2cc:
006CC2CC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC2CF  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC2D2  4A                        DEC EDX
006CC2D3  03 CF                     ADD ECX,EDI
006CC2D5  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC2D8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC2DB  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC2DE  8B 36                     MOV ESI,dword ptr [ESI]
006CC2E0  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC2E4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC2E7  8B 11                     MOV EDX,dword ptr [ECX]
006CC2E9  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC2EC  89 11                     MOV dword ptr [ECX],EDX
006CC2EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC2F1  89 0A                     MOV dword ptr [EDX],ECX
006CC2F3  8D 53 01                  LEA EDX,[EBX + 0x1]
006CC2F6  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC2FA  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC2FD  4A                        DEC EDX
006CC2FE  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CC302  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC306  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC30A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC30E  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC311  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc315:
006CC315  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CC318  85 C9                     TEST ECX,ECX
006CC31A  0F 85 BB 00 00 00         JNZ 0x006cc3db
006CC320  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC323  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CC326  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC329  2B CA                     SUB ECX,EDX
006CC32B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC32E  66 8B 09                  MOV CX,word ptr [ECX]
006CC331  66 85 C9                  TEST CX,CX
006CC334  74 0E                     JZ 0x006cc344
006CC336  0F BF C9                  MOVSX ECX,CX
006CC339  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC33C  3B CA                     CMP ECX,EDX
006CC33E  0F 8E 97 00 00 00         JLE 0x006cc3db
LAB_006cc344:
006CC344  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC347  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC34A  03 C9                     ADD ECX,ECX
006CC34C  2B D1                     SUB EDX,ECX
006CC34E  66 8B 12                  MOV DX,word ptr [EDX]
006CC351  81 E2 00 C0 00 00         AND EDX,0xc000
006CC357  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC35D  74 7C                     JZ 0x006cc3db
006CC35F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CC362  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC365  85 C0                     TEST EAX,EAX
006CC367  66 89 0A                  MOV word ptr [EDX],CX
006CC36A  75 14                     JNZ 0x006cc380
006CC36C  85 DB                     TEST EBX,EBX
006CC36E  75 08                     JNZ 0x006cc378
006CC370  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC373  83 C1 03                  ADD ECX,0x3
006CC376  EB 1A                     JMP 0x006cc392
LAB_006cc378:
006CC378  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC37B  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CC37E  EB 12                     JMP 0x006cc392
LAB_006cc380:
006CC380  3B C3                     CMP EAX,EBX
006CC382  7E 08                     JLE 0x006cc38c
006CC384  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC387  83 C1 FD                  ADD ECX,-0x3
006CC38A  EB 06                     JMP 0x006cc392
LAB_006cc38c:
006CC38C  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC38F  8D 4A FF                  LEA ECX,[EDX + -0x1]
LAB_006cc392:
006CC392  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC395  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC398  4A                        DEC EDX
006CC399  03 CF                     ADD ECX,EDI
006CC39B  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC39E  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC3A1  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC3A4  8B 36                     MOV ESI,dword ptr [ESI]
006CC3A6  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC3AA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC3AD  8B 11                     MOV EDX,dword ptr [ECX]
006CC3AF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC3B2  89 11                     MOV dword ptr [ECX],EDX
006CC3B4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC3B7  89 0A                     MOV dword ptr [EDX],ECX
006CC3B9  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CC3BC  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CC3C0  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC3C4  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC3C7  4A                        DEC EDX
006CC3C8  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC3CC  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC3D0  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC3D4  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC3D7  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc3db:
006CC3DB  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006CC3DE  85 C9                     TEST ECX,ECX
006CC3E0  0F 85 A0 00 00 00         JNZ 0x006cc486
006CC3E6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC3E9  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC3EC  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CC3F0  66 85 C9                  TEST CX,CX
006CC3F3  74 0E                     JZ 0x006cc403
006CC3F5  0F BF C9                  MOVSX ECX,CX
006CC3F8  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC3FB  3B CA                     CMP ECX,EDX
006CC3FD  0F 8E 83 00 00 00         JLE 0x006cc486
LAB_006cc403:
006CC403  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC406  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC409  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CC40D  81 E2 00 C0 00 00         AND EDX,0xc000
006CC413  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC419  74 6B                     JZ 0x006cc486
006CC41B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC41E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC421  8D 47 04                  LEA EAX,[EDI + 0x4]
006CC424  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006CC428  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CC42B  3B C3                     CMP EAX,EBX
006CC42D  7C 08                     JL 0x006cc437
006CC42F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CC432  83 C1 03                  ADD ECX,0x3
006CC435  EB 06                     JMP 0x006cc43d
LAB_006cc437:
006CC437  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CC43A  8D 4A 01                  LEA ECX,[EDX + 0x1]
LAB_006cc43d:
006CC43D  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC440  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC443  4A                        DEC EDX
006CC444  03 CF                     ADD ECX,EDI
006CC446  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC449  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC44C  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC44F  8B 36                     MOV ESI,dword ptr [ESI]
006CC451  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC455  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC458  8B 11                     MOV EDX,dword ptr [ECX]
006CC45A  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC45D  89 11                     MOV dword ptr [ECX],EDX
006CC45F  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC462  89 0A                     MOV dword ptr [EDX],ECX
006CC464  8D 50 01                  LEA EDX,[EAX + 0x1]
006CC467  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CC46B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC46F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC472  4A                        DEC EDX
006CC473  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC477  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC47B  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC47F  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC482  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc486:
006CC486  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CC489  83 E1 30                  AND ECX,0x30
006CC48C  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CC48F  0F 85 EC 00 00 00         JNZ 0x006cc581
006CC495  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC498  8D 54 09 02               LEA EDX,[ECX + ECX*0x1 + 0x2]
006CC49C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC49F  2B CA                     SUB ECX,EDX
006CC4A1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC4A4  66 8B 09                  MOV CX,word ptr [ECX]
006CC4A7  66 85 C9                  TEST CX,CX
006CC4AA  74 0E                     JZ 0x006cc4ba
006CC4AC  0F BF C9                  MOVSX ECX,CX
006CC4AF  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC4B2  3B CA                     CMP ECX,EDX
006CC4B4  0F 8E C7 00 00 00         JLE 0x006cc581
LAB_006cc4ba:
006CC4BA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC4BD  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CC4C0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC4C3  2B D1                     SUB EDX,ECX
006CC4C5  66 8B 0A                  MOV CX,word ptr [EDX]
006CC4C8  81 E1 00 C0 00 00         AND ECX,0xc000
006CC4CE  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC4D4  0F 84 A7 00 00 00         JZ 0x006cc581
006CC4DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC4DD  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CC4E1  81 E1 00 C0 00 00         AND ECX,0xc000
006CC4E7  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC4ED  0F 84 8E 00 00 00         JZ 0x006cc581
006CC4F3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CC4F6  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC4F9  85 C0                     TEST EAX,EAX
006CC4FB  66 89 0A                  MOV word ptr [EDX],CX
006CC4FE  75 1E                     JNZ 0x006cc51e
006CC500  85 DB                     TEST EBX,EBX
006CC502  75 08                     JNZ 0x006cc50c
006CC504  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC507  83 C1 04                  ADD ECX,0x4
006CC50A  EB 29                     JMP 0x006cc535
LAB_006cc50c:
006CC50C  83 FB 01                  CMP EBX,0x1
006CC50F  75 05                     JNZ 0x006cc516
006CC511  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC514  EB 1F                     JMP 0x006cc535
LAB_006cc516:
006CC516  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC519  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CC51C  EB 17                     JMP 0x006cc535
LAB_006cc51e:
006CC51E  85 DB                     TEST EBX,EBX
006CC520  75 0D                     JNZ 0x006cc52f
006CC522  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC525  83 F8 01                  CMP EAX,0x1
006CC528  74 0B                     JZ 0x006cc535
006CC52A  83 C1 FE                  ADD ECX,-0x2
006CC52D  EB 06                     JMP 0x006cc535
LAB_006cc52f:
006CC52F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC532  8D 4A FC                  LEA ECX,[EDX + -0x4]
LAB_006cc535:
006CC535  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC538  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC53B  4A                        DEC EDX
006CC53C  03 CF                     ADD ECX,EDI
006CC53E  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC541  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC544  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC547  8B 36                     MOV ESI,dword ptr [ESI]
006CC549  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC54D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC550  8B 11                     MOV EDX,dword ptr [ECX]
006CC552  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC555  89 11                     MOV dword ptr [ECX],EDX
006CC557  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC55A  89 0A                     MOV dword ptr [EDX],ECX
006CC55C  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CC55F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC563  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CC566  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC56A  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CC56E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC572  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC576  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC57A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC57D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc581:
006CC581  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CC584  83 E1 21                  AND ECX,0x21
006CC587  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CC58A  0F 85 C8 00 00 00         JNZ 0x006cc658
006CC590  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC593  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CC596  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC599  2B CA                     SUB ECX,EDX
006CC59B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC59E  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CC5A2  66 85 D2                  TEST DX,DX
006CC5A5  74 11                     JZ 0x006cc5b8
006CC5A7  0F BF D2                  MOVSX EDX,DX
006CC5AA  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CC5AD  3B D1                     CMP EDX,ECX
006CC5AF  0F 8E A3 00 00 00         JLE 0x006cc658
006CC5B5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006cc5b8:
006CC5B8  66 8B 11                  MOV DX,word ptr [ECX]
006CC5BB  81 E2 00 C0 00 00         AND EDX,0xc000
006CC5C1  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC5C7  0F 84 8B 00 00 00         JZ 0x006cc658
006CC5CD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC5D0  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CC5D4  81 E2 00 C0 00 00         AND EDX,0xc000
006CC5DA  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC5E0  74 76                     JZ 0x006cc658
006CC5E2  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC5E5  85 C0                     TEST EAX,EAX
006CC5E7  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006CC5EB  75 08                     JNZ 0x006cc5f5
006CC5ED  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC5F0  83 C1 04                  ADD ECX,0x4
006CC5F3  EB 17                     JMP 0x006cc60c
LAB_006cc5f5:
006CC5F5  8D 4B 01                  LEA ECX,[EBX + 0x1]
006CC5F8  3B C1                     CMP EAX,ECX
006CC5FA  7E 08                     JLE 0x006cc604
006CC5FC  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC5FF  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CC602  EB 08                     JMP 0x006cc60c
LAB_006cc604:
006CC604  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC607  74 03                     JZ 0x006cc60c
006CC609  83 C1 02                  ADD ECX,0x2
LAB_006cc60c:
006CC60C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC60F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC612  4A                        DEC EDX
006CC613  03 CF                     ADD ECX,EDI
006CC615  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC618  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC61B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC61E  8B 36                     MOV ESI,dword ptr [ESI]
006CC620  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC624  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC627  8B 11                     MOV EDX,dword ptr [ECX]
006CC629  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC62C  89 11                     MOV dword ptr [ECX],EDX
006CC62E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC631  89 0A                     MOV dword ptr [EDX],ECX
006CC633  8D 53 01                  LEA EDX,[EBX + 0x1]
006CC636  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC63A  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CC63D  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC641  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CC645  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC649  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC64D  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC651  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC654  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc658:
006CC658  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CC65B  83 E1 12                  AND ECX,0x12
006CC65E  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006CC661  0F 85 D8 00 00 00         JNZ 0x006cc73f
006CC667  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC66A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC66D  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CC672  66 85 C9                  TEST CX,CX
006CC675  74 0E                     JZ 0x006cc685
006CC677  0F BF C9                  MOVSX ECX,CX
006CC67A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC67D  3B CA                     CMP ECX,EDX
006CC67F  0F 8E BA 00 00 00         JLE 0x006cc73f
LAB_006cc685:
006CC685  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC688  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC68B  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CC68F  81 E2 00 C0 00 00         AND EDX,0xc000
006CC695  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC69B  0F 84 9E 00 00 00         JZ 0x006cc73f
006CC6A1  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CC6A5  81 E2 00 C0 00 00         AND EDX,0xc000
006CC6AB  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC6B1  0F 84 88 00 00 00         JZ 0x006cc73f
006CC6B7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC6BA  8D 47 04                  LEA EAX,[EDI + 0x4]
006CC6BD  85 DB                     TEST EBX,EBX
006CC6BF  66 89 44 51 FE            MOV word ptr [ECX + EDX*0x2 + -0x2],AX
006CC6C4  75 0E                     JNZ 0x006cc6d4
006CC6C6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006CC6C9  8D 48 04                  LEA ECX,[EAX + 0x4]
006CC6CC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CC6CF  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC6D2  EB 22                     JMP 0x006cc6f6
LAB_006cc6d4:
006CC6D4  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CC6D7  8D 48 01                  LEA ECX,[EAX + 0x1]
006CC6DA  3B D9                     CMP EBX,ECX
006CC6DC  7E 08                     JLE 0x006cc6e6
006CC6DE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC6E1  83 C1 FE                  ADD ECX,-0x2
006CC6E4  EB 0D                     JMP 0x006cc6f3
LAB_006cc6e6:
006CC6E6  75 05                     JNZ 0x006cc6ed
006CC6E8  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CC6EB  EB 06                     JMP 0x006cc6f3
LAB_006cc6ed:
006CC6ED  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC6F0  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cc6f3:
006CC6F3  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
LAB_006cc6f6:
006CC6F6  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC6F9  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC6FC  4A                        DEC EDX
006CC6FD  03 CF                     ADD ECX,EDI
006CC6FF  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC702  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC705  8B 36                     MOV ESI,dword ptr [ESI]
006CC707  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CC70B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CC70E  8B 11                     MOV EDX,dword ptr [ECX]
006CC710  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC713  89 11                     MOV dword ptr [ECX],EDX
006CC715  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CC718  89 0A                     MOV dword ptr [EDX],ECX
006CC71A  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CC71D  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC721  8D 50 01                  LEA EDX,[EAX + 0x1]
006CC724  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC728  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CC72C  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC730  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC734  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC738  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC73B  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc73f:
006CC73F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CC742  83 E1 03                  AND ECX,0x3
006CC745  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006CC748  0F 85 A1 00 00 00         JNZ 0x006cc7ef
006CC74E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC751  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC754  66 8B 4C 51 02            MOV CX,word ptr [ECX + EDX*0x2 + 0x2]
006CC759  66 85 C9                  TEST CX,CX
006CC75C  74 0E                     JZ 0x006cc76c
006CC75E  0F BF C9                  MOVSX ECX,CX
006CC761  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC764  3B CA                     CMP ECX,EDX
006CC766  0F 8E 83 00 00 00         JLE 0x006cc7ef
LAB_006cc76c:
006CC76C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC76F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC772  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CC776  81 E2 00 C0 00 00         AND EDX,0xc000
006CC77C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC782  74 6B                     JZ 0x006cc7ef
006CC784  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CC788  81 E1 00 C0 00 00         AND ECX,0xc000
006CC78E  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC794  74 59                     JZ 0x006cc7ef
006CC796  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC799  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC79C  8D 47 04                  LEA EAX,[EDI + 0x4]
006CC79F  66 89 44 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],AX
006CC7A4  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC7A7  8B CE                     MOV ECX,ESI
006CC7A9  8B 36                     MOV ESI,dword ptr [ESI]
006CC7AB  8D 42 04                  LEA EAX,[EDX + 0x4]
006CC7AE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC7B1  4A                        DEC EDX
006CC7B2  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006CC7B5  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC7B8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC7BB  03 C7                     ADD EAX,EDI
006CC7BD  8D 44 82 10               LEA EAX,[EDX + EAX*0x4 + 0x10]
006CC7C1  8B 10                     MOV EDX,dword ptr [EAX]
006CC7C3  89 11                     MOV dword ptr [ECX],EDX
006CC7C5  89 08                     MOV dword ptr [EAX],ECX
006CC7C7  8D 43 01                  LEA EAX,[EBX + 0x1]
006CC7CA  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006CC7CE  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CC7D1  8D 50 01                  LEA EDX,[EAX + 0x1]
006CC7D4  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC7D8  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CC7DC  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC7E0  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC7E4  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC7E8  8D 57 04                  LEA EDX,[EDI + 0x4]
006CC7EB  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cc7ef:
006CC7EF  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CC7F2  83 C7 05                  ADD EDI,0x5
006CC7F5  85 C9                     TEST ECX,ECX
006CC7F7  0F 85 86 04 00 00         JNZ 0x006ccc83
006CC7FD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC800  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006CC803  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006CC806  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CC809  66 8B 11                  MOV DX,word ptr [ECX]
006CC80C  81 E2 00 C0 00 00         AND EDX,0xc000
006CC812  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC818  0F 84 65 04 00 00         JZ 0x006ccc83
006CC81E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CC821  85 D2                     TEST EDX,EDX
006CC823  0F 85 32 01 00 00         JNZ 0x006cc95b
006CC829  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC82C  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006CC830  2B CA                     SUB ECX,EDX
006CC832  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC835  66 8B 09                  MOV CX,word ptr [ECX]
006CC838  66 85 C9                  TEST CX,CX
006CC83B  74 0B                     JZ 0x006cc848
006CC83D  0F BF C9                  MOVSX ECX,CX
006CC840  3B CF                     CMP ECX,EDI
006CC842  0F 8E 13 01 00 00         JLE 0x006cc95b
LAB_006cc848:
006CC848  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CC84B  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CC84E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC851  2B D1                     SUB EDX,ECX
006CC853  66 8B 12                  MOV DX,word ptr [EDX]
006CC856  81 E2 00 C0 00 00         AND EDX,0xc000
006CC85C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC862  0F 84 F3 00 00 00         JZ 0x006cc95b
006CC868  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC86B  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CC86F  81 E2 00 C0 00 00         AND EDX,0xc000
006CC875  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC87B  0F 84 DA 00 00 00         JZ 0x006cc95b
006CC881  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC884  2B D1                     SUB EDX,ECX
006CC886  66 8B 0A                  MOV CX,word ptr [EDX]
006CC889  81 E1 00 C0 00 00         AND ECX,0xc000
006CC88F  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC895  0F 84 C0 00 00 00         JZ 0x006cc95b
006CC89B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC89E  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CC8A2  81 E2 00 C0 00 00         AND EDX,0xc000
006CC8A8  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC8AE  0F 84 A7 00 00 00         JZ 0x006cc95b
006CC8B4  8B D1                     MOV EDX,ECX
006CC8B6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC8B9  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CC8BD  2B D1                     SUB EDX,ECX
006CC8BF  66 8B 12                  MOV DX,word ptr [EDX]
006CC8C2  81 E2 00 C0 00 00         AND EDX,0xc000
006CC8C8  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC8CE  0F 84 87 00 00 00         JZ 0x006cc95b
006CC8D4  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CC8D7  85 C0                     TEST EAX,EAX
006CC8D9  66 89 39                  MOV word ptr [ECX],DI
006CC8DC  75 19                     JNZ 0x006cc8f7
006CC8DE  85 DB                     TEST EBX,EBX
006CC8E0  75 08                     JNZ 0x006cc8ea
006CC8E2  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CC8E5  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CC8E8  EB 29                     JMP 0x006cc913
LAB_006cc8ea:
006CC8EA  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC8ED  83 FB 01                  CMP EBX,0x1
006CC8F0  74 21                     JZ 0x006cc913
006CC8F2  83 C1 FE                  ADD ECX,-0x2
006CC8F5  EB 1C                     JMP 0x006cc913
LAB_006cc8f7:
006CC8F7  85 DB                     TEST EBX,EBX
006CC8F9  75 12                     JNZ 0x006cc90d
006CC8FB  83 F8 01                  CMP EAX,0x1
006CC8FE  75 05                     JNZ 0x006cc905
006CC900  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC903  EB 0E                     JMP 0x006cc913
LAB_006cc905:
006CC905  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CC908  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CC90B  EB 06                     JMP 0x006cc913
LAB_006cc90d:
006CC90D  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CC910  83 C1 FC                  ADD ECX,-0x4
LAB_006cc913:
006CC913  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CC916  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC919  4A                        DEC EDX
006CC91A  03 CF                     ADD ECX,EDI
006CC91C  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CC91F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CC922  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CC925  8B 36                     MOV ESI,dword ptr [ESI]
006CC927  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CC92A  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CC92D  8B 11                     MOV EDX,dword ptr [ECX]
006CC92F  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CC932  89 11                     MOV dword ptr [ECX],EDX
006CC934  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CC937  89 0A                     MOV dword ptr [EDX],ECX
006CC939  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CC93C  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CC940  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CC943  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CC947  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CC94A  42                        INC EDX
006CC94B  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CC94F  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CC953  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CC957  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cc95b:
006CC95B  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CC95E  85 C9                     TEST ECX,ECX
006CC960  0F 85 0D 01 00 00         JNZ 0x006cca73
006CC966  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CC969  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CC96C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CC96F  2B CA                     SUB ECX,EDX
006CC971  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CC974  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CC977  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CC97B  66 85 D2                  TEST DX,DX
006CC97E  74 0B                     JZ 0x006cc98b
006CC980  0F BF D2                  MOVSX EDX,DX
006CC983  3B D7                     CMP EDX,EDI
006CC985  0F 8E E8 00 00 00         JLE 0x006cca73
LAB_006cc98b:
006CC98B  66 8B 09                  MOV CX,word ptr [ECX]
006CC98E  81 E1 00 C0 00 00         AND ECX,0xc000
006CC994  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC99A  0F 84 D3 00 00 00         JZ 0x006cca73
006CC9A0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CC9A3  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CC9A7  81 E1 00 C0 00 00         AND ECX,0xc000
006CC9AD  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC9B3  0F 84 BA 00 00 00         JZ 0x006cca73
006CC9B9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CC9BC  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CC9BF  2B CA                     SUB ECX,EDX
006CC9C1  66 8B 11                  MOV DX,word ptr [ECX]
006CC9C4  81 E2 00 C0 00 00         AND EDX,0xc000
006CC9CA  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC9D0  0F 84 9D 00 00 00         JZ 0x006cca73
006CC9D6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CC9D9  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CC9DD  81 E2 00 C0 00 00         AND EDX,0xc000
006CC9E3  81 FA 00 C0 00 00         CMP EDX,0xc000
006CC9E9  0F 84 84 00 00 00         JZ 0x006cca73
006CC9EF  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CC9F3  81 E1 00 C0 00 00         AND ECX,0xc000
006CC9F9  81 F9 00 C0 00 00         CMP ECX,0xc000
006CC9FF  74 72                     JZ 0x006cca73
006CCA01  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CCA04  85 C0                     TEST EAX,EAX
006CCA06  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CCA0A  75 08                     JNZ 0x006cca14
006CCA0C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CCA0F  83 C1 04                  ADD ECX,0x4
006CCA12  EB 17                     JMP 0x006cca2b
LAB_006cca14:
006CCA14  8D 4B 01                  LEA ECX,[EBX + 0x1]
006CCA17  3B C1                     CMP EAX,ECX
006CCA19  7E 08                     JLE 0x006cca23
006CCA1B  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CCA1E  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CCA21  EB 08                     JMP 0x006cca2b
LAB_006cca23:
006CCA23  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CCA26  74 03                     JZ 0x006cca2b
006CCA28  83 C1 02                  ADD ECX,0x2
LAB_006cca2b:
006CCA2B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCA2E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCA31  4A                        DEC EDX
006CCA32  03 CF                     ADD ECX,EDI
006CCA34  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCA37  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCA3A  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCA3D  8B 36                     MOV ESI,dword ptr [ESI]
006CCA3F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCA42  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCA45  8B 11                     MOV EDX,dword ptr [ECX]
006CCA47  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCA4A  89 11                     MOV dword ptr [ECX],EDX
006CCA4C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCA4F  89 0A                     MOV dword ptr [EDX],ECX
006CCA51  8D 53 01                  LEA EDX,[EBX + 0x1]
006CCA54  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CCA58  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CCA5B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CCA5F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CCA62  42                        INC EDX
006CCA63  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CCA67  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CCA6B  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CCA6F  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cca73:
006CCA73  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CCA76  85 C9                     TEST ECX,ECX
006CCA78  0F 85 10 01 00 00         JNZ 0x006ccb8e
006CCA7E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCA81  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCA84  66 8B 4C 4A FE            MOV CX,word ptr [EDX + ECX*0x2 + -0x2]
006CCA89  66 85 C9                  TEST CX,CX
006CCA8C  74 0B                     JZ 0x006cca99
006CCA8E  0F BF C9                  MOVSX ECX,CX
006CCA91  3B CF                     CMP ECX,EDI
006CCA93  0F 8E F5 00 00 00         JLE 0x006ccb8e
LAB_006cca99:
006CCA99  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCA9C  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CCA9F  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCAA3  81 E2 00 C0 00 00         AND EDX,0xc000
006CCAA9  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCAAF  0F 84 D9 00 00 00         JZ 0x006ccb8e
006CCAB5  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CCAB9  81 E1 00 C0 00 00         AND ECX,0xc000
006CCABF  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCAC5  0F 84 C3 00 00 00         JZ 0x006ccb8e
006CCACB  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCACE  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCAD1  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCAD5  81 E2 00 C0 00 00         AND EDX,0xc000
006CCADB  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCAE1  0F 84 A7 00 00 00         JZ 0x006ccb8e
006CCAE7  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CCAEB  81 E2 00 C0 00 00         AND EDX,0xc000
006CCAF1  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCAF7  0F 84 91 00 00 00         JZ 0x006ccb8e
006CCAFD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCB00  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CCB05  81 E1 00 C0 00 00         AND ECX,0xc000
006CCB0B  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCB11  74 7B                     JZ 0x006ccb8e
006CCB13  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCB16  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCB19  85 DB                     TEST EBX,EBX
006CCB1B  66 89 7C 4A FE            MOV word ptr [EDX + ECX*0x2 + -0x2],DI
006CCB20  75 08                     JNZ 0x006ccb2a
006CCB22  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CCB25  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CCB28  EB 1C                     JMP 0x006ccb46
LAB_006ccb2a:
006CCB2A  8D 48 01                  LEA ECX,[EAX + 0x1]
006CCB2D  3B D9                     CMP EBX,ECX
006CCB2F  7E 08                     JLE 0x006ccb39
006CCB31  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CCB34  83 C1 FE                  ADD ECX,-0x2
006CCB37  EB 0D                     JMP 0x006ccb46
LAB_006ccb39:
006CCB39  75 05                     JNZ 0x006ccb40
006CCB3B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CCB3E  EB 06                     JMP 0x006ccb46
LAB_006ccb40:
006CCB40  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CCB43  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ccb46:
006CCB46  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCB49  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCB4C  4A                        DEC EDX
006CCB4D  03 CF                     ADD ECX,EDI
006CCB4F  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCB52  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCB55  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCB58  8B 36                     MOV ESI,dword ptr [ESI]
006CCB5A  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCB5D  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCB60  8B 11                     MOV EDX,dword ptr [ECX]
006CCB62  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCB65  89 11                     MOV dword ptr [ECX],EDX
006CCB67  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCB6A  89 0A                     MOV dword ptr [EDX],ECX
006CCB6C  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CCB6F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CCB73  8D 50 01                  LEA EDX,[EAX + 0x1]
006CCB76  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CCB7A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CCB7D  42                        INC EDX
006CCB7E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CCB82  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CCB86  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CCB8A  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ccb8e:
006CCB8E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CCB91  85 C9                     TEST ECX,ECX
006CCB93  0F 85 EA 00 00 00         JNZ 0x006ccc83
006CCB99  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCB9C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCB9F  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CCBA4  66 85 C9                  TEST CX,CX
006CCBA7  74 0B                     JZ 0x006ccbb4
006CCBA9  0F BF C9                  MOVSX ECX,CX
006CCBAC  3B CF                     CMP ECX,EDI
006CCBAE  0F 8E CF 00 00 00         JLE 0x006ccc83
LAB_006ccbb4:
006CCBB4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCBB7  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CCBBA  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCBBE  81 E2 00 C0 00 00         AND EDX,0xc000
006CCBC4  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCBCA  0F 84 B3 00 00 00         JZ 0x006ccc83
006CCBD0  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CCBD4  81 E1 00 C0 00 00         AND ECX,0xc000
006CCBDA  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCBE0  0F 84 9D 00 00 00         JZ 0x006ccc83
006CCBE6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCBE9  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCBEC  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCBF0  81 E2 00 C0 00 00         AND EDX,0xc000
006CCBF6  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCBFC  0F 84 81 00 00 00         JZ 0x006ccc83
006CCC02  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CCC06  81 E2 00 C0 00 00         AND EDX,0xc000
006CCC0C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCC12  74 6F                     JZ 0x006ccc83
006CCC14  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCC17  66 8B 4C 51 02            MOV CX,word ptr [ECX + EDX*0x2 + 0x2]
006CCC1C  81 E1 00 C0 00 00         AND ECX,0xc000
006CCC22  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCC28  74 59                     JZ 0x006ccc83
006CCC2A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCC2D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCC30  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCC33  66 89 7C 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],DI
006CCC38  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CCC3B  8B 36                     MOV ESI,dword ptr [ESI]
006CCC3D  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CCC40  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCC43  4A                        DEC EDX
006CCC44  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCC47  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCC4A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCC4D  03 CF                     ADD ECX,EDI
006CCC4F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCC52  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCC55  8B 11                     MOV EDX,dword ptr [ECX]
006CCC57  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCC5A  89 11                     MOV dword ptr [ECX],EDX
006CCC5C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCC5F  89 0A                     MOV dword ptr [EDX],ECX
006CCC61  8D 53 01                  LEA EDX,[EBX + 0x1]
006CCC64  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CCC68  8D 50 01                  LEA EDX,[EAX + 0x1]
006CCC6B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CCC6F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CCC72  42                        INC EDX
006CCC73  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CCC77  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CCC7B  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CCC7F  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ccc83:
006CCC83  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CCC86  85 C9                     TEST ECX,ECX
006CCC88  0F 85 34 19 00 00         JNZ 0x006ce5c2
006CCC8E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CCC91  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CCC94  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCC97  2B CA                     SUB ECX,EDX
006CCC99  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CCC9C  66 8B 11                  MOV DX,word ptr [ECX]
006CCC9F  81 E2 00 C0 00 00         AND EDX,0xc000
006CCCA5  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCCAB  0F 84 11 19 00 00         JZ 0x006ce5c2
006CCCB1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CCCB4  85 D2                     TEST EDX,EDX
006CCCB6  0F 85 32 01 00 00         JNZ 0x006ccdee
006CCCBC  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCCBF  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006CCCC3  2B CA                     SUB ECX,EDX
006CCCC5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCCC8  66 8B 09                  MOV CX,word ptr [ECX]
006CCCCB  66 85 C9                  TEST CX,CX
006CCCCE  74 0B                     JZ 0x006cccdb
006CCCD0  0F BF C9                  MOVSX ECX,CX
006CCCD3  3B CF                     CMP ECX,EDI
006CCCD5  0F 8E 13 01 00 00         JLE 0x006ccdee
LAB_006cccdb:
006CCCDB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCCDE  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CCCE1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCCE4  2B D1                     SUB EDX,ECX
006CCCE6  66 8B 12                  MOV DX,word ptr [EDX]
006CCCE9  81 E2 00 C0 00 00         AND EDX,0xc000
006CCCEF  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCCF5  0F 84 F3 00 00 00         JZ 0x006ccdee
006CCCFB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCCFE  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CCD02  81 E2 00 C0 00 00         AND EDX,0xc000
006CCD08  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCD0E  0F 84 DA 00 00 00         JZ 0x006ccdee
006CCD14  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CCD17  2B D1                     SUB EDX,ECX
006CCD19  66 8B 0A                  MOV CX,word ptr [EDX]
006CCD1C  81 E1 00 C0 00 00         AND ECX,0xc000
006CCD22  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCD28  0F 84 C0 00 00 00         JZ 0x006ccdee
006CCD2E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCD31  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CCD35  81 E2 00 C0 00 00         AND EDX,0xc000
006CCD3B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCD41  0F 84 A7 00 00 00         JZ 0x006ccdee
006CCD47  8B D1                     MOV EDX,ECX
006CCD49  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCD4C  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CCD50  2B D1                     SUB EDX,ECX
006CCD52  66 8B 12                  MOV DX,word ptr [EDX]
006CCD55  81 E2 00 C0 00 00         AND EDX,0xc000
006CCD5B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCD61  0F 84 87 00 00 00         JZ 0x006ccdee
006CCD67  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CCD6A  85 C0                     TEST EAX,EAX
006CCD6C  66 89 39                  MOV word ptr [ECX],DI
006CCD6F  75 19                     JNZ 0x006ccd8a
006CCD71  85 DB                     TEST EBX,EBX
006CCD73  75 08                     JNZ 0x006ccd7d
006CCD75  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CCD78  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CCD7B  EB 29                     JMP 0x006ccda6
LAB_006ccd7d:
006CCD7D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCD80  83 FB 01                  CMP EBX,0x1
006CCD83  74 21                     JZ 0x006ccda6
006CCD85  83 C1 FE                  ADD ECX,-0x2
006CCD88  EB 1C                     JMP 0x006ccda6
LAB_006ccd8a:
006CCD8A  85 DB                     TEST EBX,EBX
006CCD8C  75 12                     JNZ 0x006ccda0
006CCD8E  83 F8 01                  CMP EAX,0x1
006CCD91  75 05                     JNZ 0x006ccd98
006CCD93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCD96  EB 0E                     JMP 0x006ccda6
LAB_006ccd98:
006CCD98  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CCD9B  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CCD9E  EB 06                     JMP 0x006ccda6
LAB_006ccda0:
006CCDA0  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCDA3  83 C1 FC                  ADD ECX,-0x4
LAB_006ccda6:
006CCDA6  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCDA9  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCDAC  4A                        DEC EDX
006CCDAD  03 CF                     ADD ECX,EDI
006CCDAF  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCDB2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCDB5  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCDB8  8B 36                     MOV ESI,dword ptr [ESI]
006CCDBA  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCDBD  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCDC0  8B 11                     MOV EDX,dword ptr [ECX]
006CCDC2  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCDC5  89 11                     MOV dword ptr [ECX],EDX
006CCDC7  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCDCA  89 0A                     MOV dword ptr [EDX],ECX
006CCDCC  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CCDCF  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CCDD3  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CCDD6  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CCDDA  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CCDDD  4A                        DEC EDX
006CCDDE  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CCDE2  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CCDE6  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CCDEA  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ccdee:
006CCDEE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CCDF1  85 C9                     TEST ECX,ECX
006CCDF3  0F 85 0D 01 00 00         JNZ 0x006ccf06
006CCDF9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCDFC  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CCDFF  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CCE02  2B CA                     SUB ECX,EDX
006CCE04  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CCE07  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCE0A  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CCE0E  66 85 D2                  TEST DX,DX
006CCE11  74 0B                     JZ 0x006cce1e
006CCE13  0F BF D2                  MOVSX EDX,DX
006CCE16  3B D7                     CMP EDX,EDI
006CCE18  0F 8E E8 00 00 00         JLE 0x006ccf06
LAB_006cce1e:
006CCE1E  66 8B 09                  MOV CX,word ptr [ECX]
006CCE21  81 E1 00 C0 00 00         AND ECX,0xc000
006CCE27  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCE2D  0F 84 D3 00 00 00         JZ 0x006ccf06
006CCE33  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCE36  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CCE3A  81 E1 00 C0 00 00         AND ECX,0xc000
006CCE40  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCE46  0F 84 BA 00 00 00         JZ 0x006ccf06
006CCE4C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCE4F  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CCE52  2B CA                     SUB ECX,EDX
006CCE54  66 8B 11                  MOV DX,word ptr [ECX]
006CCE57  81 E2 00 C0 00 00         AND EDX,0xc000
006CCE5D  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCE63  0F 84 9D 00 00 00         JZ 0x006ccf06
006CCE69  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CCE6C  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CCE70  81 E2 00 C0 00 00         AND EDX,0xc000
006CCE76  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCE7C  0F 84 84 00 00 00         JZ 0x006ccf06
006CCE82  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CCE86  81 E1 00 C0 00 00         AND ECX,0xc000
006CCE8C  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCE92  74 72                     JZ 0x006ccf06
006CCE94  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CCE97  85 C0                     TEST EAX,EAX
006CCE99  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CCE9D  75 08                     JNZ 0x006ccea7
006CCE9F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCEA2  83 C1 04                  ADD ECX,0x4
006CCEA5  EB 17                     JMP 0x006ccebe
LAB_006ccea7:
006CCEA7  8D 4B 01                  LEA ECX,[EBX + 0x1]
006CCEAA  3B C1                     CMP EAX,ECX
006CCEAC  7E 08                     JLE 0x006cceb6
006CCEAE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CCEB1  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CCEB4  EB 08                     JMP 0x006ccebe
LAB_006cceb6:
006CCEB6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCEB9  74 03                     JZ 0x006ccebe
006CCEBB  83 C1 02                  ADD ECX,0x2
LAB_006ccebe:
006CCEBE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCEC1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCEC4  4A                        DEC EDX
006CCEC5  03 CF                     ADD ECX,EDI
006CCEC7  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCECA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCECD  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCED0  8B 36                     MOV ESI,dword ptr [ESI]
006CCED2  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCED5  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCED8  8B 11                     MOV EDX,dword ptr [ECX]
006CCEDA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCEDD  89 11                     MOV dword ptr [ECX],EDX
006CCEDF  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCEE2  89 0A                     MOV dword ptr [EDX],ECX
006CCEE4  8D 53 01                  LEA EDX,[EBX + 0x1]
006CCEE7  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CCEEB  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CCEEE  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CCEF2  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CCEF5  4A                        DEC EDX
006CCEF6  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CCEFA  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CCEFE  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CCF02  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ccf06:
006CCF06  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CCF09  85 C9                     TEST ECX,ECX
006CCF0B  0F 85 10 01 00 00         JNZ 0x006cd021
006CCF11  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCF14  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCF17  66 8B 4C 4A FE            MOV CX,word ptr [EDX + ECX*0x2 + -0x2]
006CCF1C  66 85 C9                  TEST CX,CX
006CCF1F  74 0B                     JZ 0x006ccf2c
006CCF21  0F BF C9                  MOVSX ECX,CX
006CCF24  3B CF                     CMP ECX,EDI
006CCF26  0F 8E F5 00 00 00         JLE 0x006cd021
LAB_006ccf2c:
006CCF2C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCF2F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CCF32  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCF36  81 E2 00 C0 00 00         AND EDX,0xc000
006CCF3C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCF42  0F 84 D9 00 00 00         JZ 0x006cd021
006CCF48  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CCF4C  81 E1 00 C0 00 00         AND ECX,0xc000
006CCF52  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCF58  0F 84 C3 00 00 00         JZ 0x006cd021
006CCF5E  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CCF61  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCF64  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CCF68  81 E2 00 C0 00 00         AND EDX,0xc000
006CCF6E  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCF74  0F 84 A7 00 00 00         JZ 0x006cd021
006CCF7A  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CCF7E  81 E2 00 C0 00 00         AND EDX,0xc000
006CCF84  81 FA 00 C0 00 00         CMP EDX,0xc000
006CCF8A  0F 84 91 00 00 00         JZ 0x006cd021
006CCF90  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CCF93  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CCF98  81 E1 00 C0 00 00         AND ECX,0xc000
006CCF9E  81 F9 00 C0 00 00         CMP ECX,0xc000
006CCFA4  74 7B                     JZ 0x006cd021
006CCFA6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CCFA9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CCFAC  85 DB                     TEST EBX,EBX
006CCFAE  66 89 7C 4A FE            MOV word ptr [EDX + ECX*0x2 + -0x2],DI
006CCFB3  75 08                     JNZ 0x006ccfbd
006CCFB5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CCFB8  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CCFBB  EB 1C                     JMP 0x006ccfd9
LAB_006ccfbd:
006CCFBD  8D 48 01                  LEA ECX,[EAX + 0x1]
006CCFC0  3B D9                     CMP EBX,ECX
006CCFC2  7E 08                     JLE 0x006ccfcc
006CCFC4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCFC7  83 C1 FE                  ADD ECX,-0x2
006CCFCA  EB 0D                     JMP 0x006ccfd9
LAB_006ccfcc:
006CCFCC  75 05                     JNZ 0x006ccfd3
006CCFCE  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CCFD1  EB 06                     JMP 0x006ccfd9
LAB_006ccfd3:
006CCFD3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CCFD6  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ccfd9:
006CCFD9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CCFDC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CCFDF  4A                        DEC EDX
006CCFE0  03 CF                     ADD ECX,EDI
006CCFE2  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CCFE5  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CCFE8  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CCFEB  8B 36                     MOV ESI,dword ptr [ESI]
006CCFED  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CCFF0  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CCFF3  8B 11                     MOV EDX,dword ptr [ECX]
006CCFF5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CCFF8  89 11                     MOV dword ptr [ECX],EDX
006CCFFA  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CCFFD  89 0A                     MOV dword ptr [EDX],ECX
006CCFFF  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CD002  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD006  8D 50 01                  LEA EDX,[EAX + 0x1]
006CD009  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD00D  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD010  4A                        DEC EDX
006CD011  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD015  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD019  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD01D  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cd021:
006CD021  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD024  85 C9                     TEST ECX,ECX
006CD026  0F 85 96 15 00 00         JNZ 0x006ce5c2
006CD02C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD02F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD032  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CD037  66 85 C9                  TEST CX,CX
006CD03A  74 0B                     JZ 0x006cd047
006CD03C  0F BF C9                  MOVSX ECX,CX
006CD03F  3B CF                     CMP ECX,EDI
006CD041  0F 8E 7B 15 00 00         JLE 0x006ce5c2
LAB_006cd047:
006CD047  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD04A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD04D  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CD051  81 E2 00 C0 00 00         AND EDX,0xc000
006CD057  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD05D  0F 84 5F 15 00 00         JZ 0x006ce5c2
006CD063  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CD067  81 E1 00 C0 00 00         AND ECX,0xc000
006CD06D  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD073  0F 84 49 15 00 00         JZ 0x006ce5c2
006CD079  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD07C  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD07F  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CD083  81 E1 00 C0 00 00         AND ECX,0xc000
006CD089  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD08F  0F 84 2D 15 00 00         JZ 0x006ce5c2
006CD095  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CD099  81 E1 00 C0 00 00         AND ECX,0xc000
006CD09F  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD0A5  0F 84 17 15 00 00         JZ 0x006ce5c2
006CD0AB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD0AE  66 8B 54 4A 02            MOV DX,word ptr [EDX + ECX*0x2 + 0x2]
006CD0B3  81 E2 00 C0 00 00         AND EDX,0xc000
006CD0B9  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD0BF  0F 84 FD 14 00 00         JZ 0x006ce5c2
006CD0C5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD0C8  66 89 7C 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],DI
006CD0CD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD0D0  83 C1 04                  ADD ECX,0x4
006CD0D3  E9 A4 14 00 00            JMP 0x006ce57c
switchD_006c9394::caseD_3:
006CD0D8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD0DB  83 E1 10                  AND ECX,0x10
006CD0DE  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CD0E1  75 7C                     JNZ 0x006cd15f
006CD0E3  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD0E6  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CD0EA  66 85 C9                  TEST CX,CX
006CD0ED  74 0A                     JZ 0x006cd0f9
006CD0EF  0F BF D1                  MOVSX EDX,CX
006CD0F2  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD0F5  3B D1                     CMP EDX,ECX
006CD0F7  7E 66                     JLE 0x006cd15f
LAB_006cd0f9:
006CD0F9  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD0FC  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD0FF  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CD103  8B D3                     MOV EDX,EBX
006CD105  F7 DA                     NEG EDX
006CD107  3B D0                     CMP EDX,EAX
006CD109  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CD10C  7C 05                     JL 0x006cd113
006CD10E  83 C2 03                  ADD EDX,0x3
006CD111  EB 01                     JMP 0x006cd114
LAB_006cd113:
006CD113  42                        INC EDX
LAB_006cd114:
006CD114  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CD117  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD11A  4A                        DEC EDX
006CD11B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD11E  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD121  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD124  03 D1                     ADD EDX,ECX
006CD126  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CD129  8B 36                     MOV ESI,dword ptr [ESI]
006CD12B  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CD12E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD131  8B 11                     MOV EDX,dword ptr [ECX]
006CD133  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD136  89 11                     MOV dword ptr [ECX],EDX
006CD138  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD13B  89 0A                     MOV dword ptr [EDX],ECX
006CD13D  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CD140  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD144  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CD148  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD14C  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD150  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD154  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD158  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD15B  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd15f:
006CD15F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD162  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CD166  66 85 C9                  TEST CX,CX
006CD169  74 0A                     JZ 0x006cd175
006CD16B  0F BF D1                  MOVSX EDX,CX
006CD16E  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD171  3B D1                     CMP EDX,ECX
006CD173  7E 66                     JLE 0x006cd1db
LAB_006cd175:
006CD175  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD178  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD17B  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CD17F  8B D3                     MOV EDX,EBX
006CD181  F7 DA                     NEG EDX
006CD183  3B D0                     CMP EDX,EAX
006CD185  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CD188  7E 05                     JLE 0x006cd18f
006CD18A  83 C2 FD                  ADD EDX,-0x3
006CD18D  EB 01                     JMP 0x006cd190
LAB_006cd18f:
006CD18F  4A                        DEC EDX
LAB_006cd190:
006CD190  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CD193  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD196  4A                        DEC EDX
006CD197  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD19A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD19D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD1A0  03 D1                     ADD EDX,ECX
006CD1A2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CD1A5  8B 36                     MOV ESI,dword ptr [ESI]
006CD1A7  8D 0C 91                  LEA ECX,[ECX + EDX*0x4]
006CD1AA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD1AD  8B 11                     MOV EDX,dword ptr [ECX]
006CD1AF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD1B2  89 11                     MOV dword ptr [ECX],EDX
006CD1B4  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD1B7  89 0A                     MOV dword ptr [EDX],ECX
006CD1B9  8D 53 01                  LEA EDX,[EBX + 0x1]
006CD1BC  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD1C0  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CD1C4  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD1C8  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD1CC  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD1D0  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD1D4  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD1D7  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd1db:
006CD1DB  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD1DE  83 E1 20                  AND ECX,0x20
006CD1E1  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CD1E4  0F 85 9D 00 00 00         JNZ 0x006cd287
006CD1EA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD1ED  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD1F0  03 C9                     ADD ECX,ECX
006CD1F2  2B D1                     SUB EDX,ECX
006CD1F4  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
006CD1F7  66 8B 0A                  MOV CX,word ptr [EDX]
006CD1FA  66 85 C9                  TEST CX,CX
006CD1FD  74 0D                     JZ 0x006cd20c
006CD1FF  0F BF D1                  MOVSX EDX,CX
006CD202  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD205  3B D1                     CMP EDX,ECX
006CD207  7E 7E                     JLE 0x006cd287
006CD209  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
LAB_006cd20c:
006CD20C  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD20F  85 C0                     TEST EAX,EAX
006CD211  66 89 0A                  MOV word ptr [EDX],CX
006CD214  75 14                     JNZ 0x006cd22a
006CD216  85 DB                     TEST EBX,EBX
006CD218  75 08                     JNZ 0x006cd222
006CD21A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CD21D  83 C1 03                  ADD ECX,0x3
006CD220  EB 1C                     JMP 0x006cd23e
LAB_006cd222:
006CD222  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CD225  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CD228  EB 14                     JMP 0x006cd23e
LAB_006cd22a:
006CD22A  8B CB                     MOV ECX,EBX
006CD22C  F7 D9                     NEG ECX
006CD22E  3B C1                     CMP EAX,ECX
006CD230  7E 08                     JLE 0x006cd23a
006CD232  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CD235  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CD238  EB 04                     JMP 0x006cd23e
LAB_006cd23a:
006CD23A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CD23D  49                        DEC ECX
LAB_006cd23e:
006CD23E  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD241  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD244  4A                        DEC EDX
006CD245  03 CF                     ADD ECX,EDI
006CD247  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD24A  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD24D  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD250  8B 36                     MOV ESI,dword ptr [ESI]
006CD252  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CD256  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD259  8B 11                     MOV EDX,dword ptr [ECX]
006CD25B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD25E  89 11                     MOV dword ptr [ECX],EDX
006CD260  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD263  89 0A                     MOV dword ptr [EDX],ECX
006CD265  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CD268  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD26C  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD270  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CD274  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD278  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD27C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD280  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD283  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd287:
006CD287  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD28A  83 E1 02                  AND ECX,0x2
006CD28D  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
006CD290  0F 85 86 00 00 00         JNZ 0x006cd31c
006CD296  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD299  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD29C  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CD2A0  66 85 C9                  TEST CX,CX
006CD2A3  74 0A                     JZ 0x006cd2af
006CD2A5  0F BF D1                  MOVSX EDX,CX
006CD2A8  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD2AB  3B D1                     CMP EDX,ECX
006CD2AD  7E 6D                     JLE 0x006cd31c
LAB_006cd2af:
006CD2AF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD2B2  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD2B5  8D 47 03                  LEA EAX,[EDI + 0x3]
006CD2B8  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006CD2BC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CD2BF  8B CB                     MOV ECX,EBX
006CD2C1  F7 D9                     NEG ECX
006CD2C3  3B C1                     CMP EAX,ECX
006CD2C5  7C 08                     JL 0x006cd2cf
006CD2C7  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CD2CA  8D 4A 03                  LEA ECX,[EDX + 0x3]
006CD2CD  EB 04                     JMP 0x006cd2d3
LAB_006cd2cf:
006CD2CF  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CD2D2  41                        INC ECX
LAB_006cd2d3:
006CD2D3  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD2D6  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD2D9  4A                        DEC EDX
006CD2DA  03 CF                     ADD ECX,EDI
006CD2DC  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD2DF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD2E2  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD2E5  8B 36                     MOV ESI,dword ptr [ESI]
006CD2E7  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CD2EB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD2EE  8B 11                     MOV EDX,dword ptr [ECX]
006CD2F0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD2F3  89 11                     MOV dword ptr [ECX],EDX
006CD2F5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD2F8  89 0A                     MOV dword ptr [EDX],ECX
006CD2FA  8D 50 01                  LEA EDX,[EAX + 0x1]
006CD2FD  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD301  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD305  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CD309  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD30D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD311  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD315  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD318  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd31c:
006CD31C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD31F  83 E1 40                  AND ECX,0x40
006CD322  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006CD325  75 6E                     JNZ 0x006cd395
006CD327  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CD32A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD32D  03 C9                     ADD ECX,ECX
006CD32F  2B D1                     SUB EDX,ECX
006CD331  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006CD334  66 8B 0A                  MOV CX,word ptr [EDX]
006CD337  66 85 C9                  TEST CX,CX
006CD33A  74 0D                     JZ 0x006cd349
006CD33C  0F BF D1                  MOVSX EDX,CX
006CD33F  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD342  3B D1                     CMP EDX,ECX
006CD344  7E 4F                     JLE 0x006cd395
006CD346  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006cd349:
006CD349  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD34C  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD34F  66 89 0A                  MOV word ptr [EDX],CX
006CD352  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006CD355  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD358  49                        DEC ECX
006CD359  89 4D 28                  MOV dword ptr [EBP + 0x28],ECX
006CD35C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD35F  03 CF                     ADD ECX,EDI
006CD361  8B 36                     MOV ESI,dword ptr [ESI]
006CD363  8D 4C 8A 0C               LEA ECX,[EDX + ECX*0x4 + 0xc]
006CD367  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD36A  8B 11                     MOV EDX,dword ptr [ECX]
006CD36C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD36F  89 11                     MOV dword ptr [ECX],EDX
006CD371  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD374  89 0A                     MOV dword ptr [EDX],ECX
006CD376  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD379  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD37D  4A                        DEC EDX
006CD37E  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD382  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD386  66 8B 55 08               MOV DX,word ptr [EBP + 0x8]
006CD38A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD38E  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD391  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd395:
006CD395  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD398  83 E1 04                  AND ECX,0x4
006CD39B  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
006CD39E  75 65                     JNZ 0x006cd405
006CD3A0  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CD3A3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD3A6  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CD3AA  66 85 C9                  TEST CX,CX
006CD3AD  74 0A                     JZ 0x006cd3b9
006CD3AF  0F BF D1                  MOVSX EDX,CX
006CD3B2  8D 4F 03                  LEA ECX,[EDI + 0x3]
006CD3B5  3B D1                     CMP EDX,ECX
006CD3B7  7E 4C                     JLE 0x006cd405
LAB_006cd3b9:
006CD3B9  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CD3BC  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD3BF  8D 47 03                  LEA EAX,[EDI + 0x3]
006CD3C2  66 89 04 4A               MOV word ptr [EDX + ECX*0x2],AX
006CD3C6  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006CD3C9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD3CC  48                        DEC EAX
006CD3CD  89 45 28                  MOV dword ptr [EBP + 0x28],EAX
006CD3D0  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CD3D3  03 C7                     ADD EAX,EDI
006CD3D5  8B CE                     MOV ECX,ESI
006CD3D7  8B 36                     MOV ESI,dword ptr [ESI]
006CD3D9  8D 44 82 0C               LEA EAX,[EDX + EAX*0x4 + 0xc]
006CD3DD  8B 10                     MOV EDX,dword ptr [EAX]
006CD3DF  89 11                     MOV dword ptr [ECX],EDX
006CD3E1  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD3E4  89 08                     MOV dword ptr [EAX],ECX
006CD3E6  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CD3E9  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD3ED  42                        INC EDX
006CD3EE  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD3F2  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD3F6  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
006CD3FA  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD3FE  8D 57 03                  LEA EDX,[EDI + 0x3]
006CD401  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd405:
006CD405  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CD408  85 C9                     TEST ECX,ECX
006CD40A  0F 85 B8 02 00 00         JNZ 0x006cd6c8
006CD410  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CD413  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD416  66 83 3C 4A 00            CMP word ptr [EDX + ECX*0x2],0x0
006CD41B  8D 0C 4A                  LEA ECX,[EDX + ECX*0x2]
006CD41E  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD421  0F 8C A1 02 00 00         JL 0x006cd6c8
006CD427  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CD42A  85 D2                     TEST EDX,EDX
006CD42C  0F 85 8F 00 00 00         JNZ 0x006cd4c1
006CD432  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CD436  66 85 C9                  TEST CX,CX
006CD439  74 0A                     JZ 0x006cd445
006CD43B  0F BF C9                  MOVSX ECX,CX
006CD43E  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD441  3B CA                     CMP ECX,EDX
006CD443  7E 7C                     JLE 0x006cd4c1
LAB_006cd445:
006CD445  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD448  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CD44C  81 E1 00 C0 00 00         AND ECX,0xc000
006CD452  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD458  74 67                     JZ 0x006cd4c1
006CD45A  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD45D  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD460  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CD464  8B CB                     MOV ECX,EBX
006CD466  F7 D9                     NEG ECX
006CD468  3B C8                     CMP ECX,EAX
006CD46A  7C 08                     JL 0x006cd474
006CD46C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CD46F  8D 4A 03                  LEA ECX,[EDX + 0x3]
006CD472  EB 04                     JMP 0x006cd478
LAB_006cd474:
006CD474  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CD477  41                        INC ECX
LAB_006cd478:
006CD478  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD47B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD47E  4A                        DEC EDX
006CD47F  03 CF                     ADD ECX,EDI
006CD481  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD484  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD487  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD48A  8B 36                     MOV ESI,dword ptr [ESI]
006CD48C  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD490  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD493  8B 11                     MOV EDX,dword ptr [ECX]
006CD495  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD498  89 11                     MOV dword ptr [ECX],EDX
006CD49A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD49D  89 0A                     MOV dword ptr [EDX],ECX
006CD49F  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CD4A2  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD4A6  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD4A9  42                        INC EDX
006CD4AA  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD4AE  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD4B2  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD4B6  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD4BA  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD4BD  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd4c1:
006CD4C1  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD4C4  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CD4C8  66 85 C9                  TEST CX,CX
006CD4CB  74 0A                     JZ 0x006cd4d7
006CD4CD  0F BF C9                  MOVSX ECX,CX
006CD4D0  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD4D3  3B CA                     CMP ECX,EDX
006CD4D5  7E 7C                     JLE 0x006cd553
LAB_006cd4d7:
006CD4D7  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD4DA  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CD4DE  81 E1 00 C0 00 00         AND ECX,0xc000
006CD4E4  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD4EA  74 67                     JZ 0x006cd553
006CD4EC  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD4EF  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD4F2  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CD4F6  8B CB                     MOV ECX,EBX
006CD4F8  F7 D9                     NEG ECX
006CD4FA  3B C8                     CMP ECX,EAX
006CD4FC  7E 08                     JLE 0x006cd506
006CD4FE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CD501  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CD504  EB 04                     JMP 0x006cd50a
LAB_006cd506:
006CD506  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CD509  49                        DEC ECX
LAB_006cd50a:
006CD50A  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD50D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD510  4A                        DEC EDX
006CD511  03 CF                     ADD ECX,EDI
006CD513  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD516  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD519  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD51C  8B 36                     MOV ESI,dword ptr [ESI]
006CD51E  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD522  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD525  8B 11                     MOV EDX,dword ptr [ECX]
006CD527  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD52A  89 11                     MOV dword ptr [ECX],EDX
006CD52C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD52F  89 0A                     MOV dword ptr [EDX],ECX
006CD531  8D 53 01                  LEA EDX,[EBX + 0x1]
006CD534  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD538  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD53B  42                        INC EDX
006CD53C  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD540  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD544  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD548  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD54C  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD54F  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd553:
006CD553  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CD556  85 C9                     TEST ECX,ECX
006CD558  0F 85 BD 00 00 00         JNZ 0x006cd61b
006CD55E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD561  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CD564  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD567  2B CA                     SUB ECX,EDX
006CD569  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD56C  66 8B 09                  MOV CX,word ptr [ECX]
006CD56F  66 85 C9                  TEST CX,CX
006CD572  74 0E                     JZ 0x006cd582
006CD574  0F BF C9                  MOVSX ECX,CX
006CD577  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD57A  3B CA                     CMP ECX,EDX
006CD57C  0F 8E 99 00 00 00         JLE 0x006cd61b
LAB_006cd582:
006CD582  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD585  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD588  03 C9                     ADD ECX,ECX
006CD58A  2B D1                     SUB EDX,ECX
006CD58C  66 8B 12                  MOV DX,word ptr [EDX]
006CD58F  81 E2 00 C0 00 00         AND EDX,0xc000
006CD595  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD59B  74 7E                     JZ 0x006cd61b
006CD59D  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD5A0  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD5A3  85 C0                     TEST EAX,EAX
006CD5A5  66 89 0A                  MOV word ptr [EDX],CX
006CD5A8  75 14                     JNZ 0x006cd5be
006CD5AA  85 DB                     TEST EBX,EBX
006CD5AC  75 08                     JNZ 0x006cd5b6
006CD5AE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CD5B1  83 C1 03                  ADD ECX,0x3
006CD5B4  EB 1C                     JMP 0x006cd5d2
LAB_006cd5b6:
006CD5B6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CD5B9  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CD5BC  EB 14                     JMP 0x006cd5d2
LAB_006cd5be:
006CD5BE  8B CB                     MOV ECX,EBX
006CD5C0  F7 D9                     NEG ECX
006CD5C2  3B C1                     CMP EAX,ECX
006CD5C4  7E 08                     JLE 0x006cd5ce
006CD5C6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CD5C9  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CD5CC  EB 04                     JMP 0x006cd5d2
LAB_006cd5ce:
006CD5CE  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CD5D1  49                        DEC ECX
LAB_006cd5d2:
006CD5D2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD5D5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD5D8  4A                        DEC EDX
006CD5D9  03 CF                     ADD ECX,EDI
006CD5DB  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD5DE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD5E1  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD5E4  8B 36                     MOV ESI,dword ptr [ESI]
006CD5E6  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD5EA  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD5ED  8B 11                     MOV EDX,dword ptr [ECX]
006CD5EF  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD5F2  89 11                     MOV dword ptr [ECX],EDX
006CD5F4  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD5F7  89 0A                     MOV dword ptr [EDX],ECX
006CD5F9  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CD5FC  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD600  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD604  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD607  42                        INC EDX
006CD608  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD60C  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD610  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD614  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD617  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd61b:
006CD61B  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006CD61E  85 C9                     TEST ECX,ECX
006CD620  0F 85 A2 00 00 00         JNZ 0x006cd6c8
006CD626  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD629  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD62C  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CD630  66 85 C9                  TEST CX,CX
006CD633  74 0E                     JZ 0x006cd643
006CD635  0F BF C9                  MOVSX ECX,CX
006CD638  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD63B  3B CA                     CMP ECX,EDX
006CD63D  0F 8E 85 00 00 00         JLE 0x006cd6c8
LAB_006cd643:
006CD643  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD646  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD649  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CD64D  81 E2 00 C0 00 00         AND EDX,0xc000
006CD653  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD659  74 6D                     JZ 0x006cd6c8
006CD65B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD65E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD661  8D 47 04                  LEA EAX,[EDI + 0x4]
006CD664  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006CD668  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CD66B  8B CB                     MOV ECX,EBX
006CD66D  F7 D9                     NEG ECX
006CD66F  3B C1                     CMP EAX,ECX
006CD671  7C 08                     JL 0x006cd67b
006CD673  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CD676  8D 4A 03                  LEA ECX,[EDX + 0x3]
006CD679  EB 04                     JMP 0x006cd67f
LAB_006cd67b:
006CD67B  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CD67E  41                        INC ECX
LAB_006cd67f:
006CD67F  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD682  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD685  4A                        DEC EDX
006CD686  03 CF                     ADD ECX,EDI
006CD688  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD68B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD68E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD691  8B 36                     MOV ESI,dword ptr [ESI]
006CD693  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD697  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD69A  8B 11                     MOV EDX,dword ptr [ECX]
006CD69C  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD69F  89 11                     MOV dword ptr [ECX],EDX
006CD6A1  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD6A4  89 0A                     MOV dword ptr [EDX],ECX
006CD6A6  8D 50 01                  LEA EDX,[EAX + 0x1]
006CD6A9  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD6AD  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD6B1  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD6B4  42                        INC EDX
006CD6B5  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD6B9  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD6BD  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD6C1  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD6C4  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd6c8:
006CD6C8  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CD6CB  85 C9                     TEST ECX,ECX
006CD6CD  0F 85 B9 02 00 00         JNZ 0x006cd98c
006CD6D3  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CD6D6  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CD6D9  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD6DC  2B CA                     SUB ECX,EDX
006CD6DE  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CD6E1  66 83 39 00               CMP word ptr [ECX],0x0
006CD6E5  0F 8C A1 02 00 00         JL 0x006cd98c
006CD6EB  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006CD6EE  85 D2                     TEST EDX,EDX
006CD6F0  0F 85 8F 00 00 00         JNZ 0x006cd785
006CD6F6  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CD6FA  66 85 C9                  TEST CX,CX
006CD6FD  74 0A                     JZ 0x006cd709
006CD6FF  0F BF C9                  MOVSX ECX,CX
006CD702  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD705  3B CA                     CMP ECX,EDX
006CD707  7E 7C                     JLE 0x006cd785
LAB_006cd709:
006CD709  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD70C  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CD710  81 E1 00 C0 00 00         AND ECX,0xc000
006CD716  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD71C  74 67                     JZ 0x006cd785
006CD71E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD721  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD724  66 89 4A FE               MOV word ptr [EDX + -0x2],CX
006CD728  8B CB                     MOV ECX,EBX
006CD72A  F7 D9                     NEG ECX
006CD72C  3B C8                     CMP ECX,EAX
006CD72E  7C 08                     JL 0x006cd738
006CD730  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CD733  8D 4A 03                  LEA ECX,[EDX + 0x3]
006CD736  EB 04                     JMP 0x006cd73c
LAB_006cd738:
006CD738  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD73B  41                        INC ECX
LAB_006cd73c:
006CD73C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD73F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD742  4A                        DEC EDX
006CD743  03 CF                     ADD ECX,EDI
006CD745  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD748  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD74B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD74E  8B 36                     MOV ESI,dword ptr [ESI]
006CD750  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD754  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD757  8B 11                     MOV EDX,dword ptr [ECX]
006CD759  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD75C  89 11                     MOV dword ptr [ECX],EDX
006CD75E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD761  89 0A                     MOV dword ptr [EDX],ECX
006CD763  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CD766  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD76A  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD76D  4A                        DEC EDX
006CD76E  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD772  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD776  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD77A  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD77E  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD781  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd785:
006CD785  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD788  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CD78C  66 85 C9                  TEST CX,CX
006CD78F  74 0A                     JZ 0x006cd79b
006CD791  0F BF C9                  MOVSX ECX,CX
006CD794  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD797  3B CA                     CMP ECX,EDX
006CD799  7E 7C                     JLE 0x006cd817
LAB_006cd79b:
006CD79B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD79E  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CD7A2  81 E1 00 C0 00 00         AND ECX,0xc000
006CD7A8  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD7AE  74 67                     JZ 0x006cd817
006CD7B0  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD7B3  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD7B6  66 89 4A 02               MOV word ptr [EDX + 0x2],CX
006CD7BA  8B CB                     MOV ECX,EBX
006CD7BC  F7 D9                     NEG ECX
006CD7BE  3B C8                     CMP ECX,EAX
006CD7C0  7E 08                     JLE 0x006cd7ca
006CD7C2  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CD7C5  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CD7C8  EB 04                     JMP 0x006cd7ce
LAB_006cd7ca:
006CD7CA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD7CD  49                        DEC ECX
LAB_006cd7ce:
006CD7CE  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD7D1  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD7D4  4A                        DEC EDX
006CD7D5  03 CF                     ADD ECX,EDI
006CD7D7  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD7DA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD7DD  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD7E0  8B 36                     MOV ESI,dword ptr [ESI]
006CD7E2  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD7E6  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD7E9  8B 11                     MOV EDX,dword ptr [ECX]
006CD7EB  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD7EE  89 11                     MOV dword ptr [ECX],EDX
006CD7F0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD7F3  89 0A                     MOV dword ptr [EDX],ECX
006CD7F5  8D 53 01                  LEA EDX,[EBX + 0x1]
006CD7F8  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CD7FC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD7FF  4A                        DEC EDX
006CD800  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CD804  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD808  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD80C  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD810  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD813  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd817:
006CD817  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006CD81A  85 C9                     TEST ECX,ECX
006CD81C  0F 85 BD 00 00 00         JNZ 0x006cd8df
006CD822  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD825  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CD828  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD82B  2B CA                     SUB ECX,EDX
006CD82D  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD830  66 8B 09                  MOV CX,word ptr [ECX]
006CD833  66 85 C9                  TEST CX,CX
006CD836  74 0E                     JZ 0x006cd846
006CD838  0F BF C9                  MOVSX ECX,CX
006CD83B  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD83E  3B CA                     CMP ECX,EDX
006CD840  0F 8E 99 00 00 00         JLE 0x006cd8df
LAB_006cd846:
006CD846  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD849  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD84C  03 C9                     ADD ECX,ECX
006CD84E  2B D1                     SUB EDX,ECX
006CD850  66 8B 12                  MOV DX,word ptr [EDX]
006CD853  81 E2 00 C0 00 00         AND EDX,0xc000
006CD859  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD85F  74 7E                     JZ 0x006cd8df
006CD861  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD864  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD867  85 C0                     TEST EAX,EAX
006CD869  66 89 0A                  MOV word ptr [EDX],CX
006CD86C  75 14                     JNZ 0x006cd882
006CD86E  85 DB                     TEST EBX,EBX
006CD870  75 08                     JNZ 0x006cd87a
006CD872  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD875  83 C1 03                  ADD ECX,0x3
006CD878  EB 1C                     JMP 0x006cd896
LAB_006cd87a:
006CD87A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CD87D  8D 4A 01                  LEA ECX,[EDX + 0x1]
006CD880  EB 14                     JMP 0x006cd896
LAB_006cd882:
006CD882  8B CB                     MOV ECX,EBX
006CD884  F7 D9                     NEG ECX
006CD886  3B C1                     CMP EAX,ECX
006CD888  7E 08                     JLE 0x006cd892
006CD88A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CD88D  8D 4A FD                  LEA ECX,[EDX + -0x3]
006CD890  EB 04                     JMP 0x006cd896
LAB_006cd892:
006CD892  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD895  49                        DEC ECX
LAB_006cd896:
006CD896  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD899  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD89C  4A                        DEC EDX
006CD89D  03 CF                     ADD ECX,EDI
006CD89F  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD8A2  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD8A5  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD8A8  8B 36                     MOV ESI,dword ptr [ESI]
006CD8AA  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD8AE  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD8B1  8B 11                     MOV EDX,dword ptr [ECX]
006CD8B3  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD8B6  89 11                     MOV dword ptr [ECX],EDX
006CD8B8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD8BB  89 0A                     MOV dword ptr [EDX],ECX
006CD8BD  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CD8C0  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD8C4  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD8C8  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD8CB  4A                        DEC EDX
006CD8CC  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD8D0  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD8D4  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD8D8  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD8DB  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd8df:
006CD8DF  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006CD8E2  85 C9                     TEST ECX,ECX
006CD8E4  0F 85 A2 00 00 00         JNZ 0x006cd98c
006CD8EA  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD8ED  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CD8F0  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CD8F4  66 85 C9                  TEST CX,CX
006CD8F7  74 0E                     JZ 0x006cd907
006CD8F9  0F BF C9                  MOVSX ECX,CX
006CD8FC  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD8FF  3B CA                     CMP ECX,EDX
006CD901  0F 8E 85 00 00 00         JLE 0x006cd98c
LAB_006cd907:
006CD907  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD90A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD90D  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CD911  81 E2 00 C0 00 00         AND EDX,0xc000
006CD917  81 FA 00 C0 00 00         CMP EDX,0xc000
006CD91D  74 6D                     JZ 0x006cd98c
006CD91F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CD922  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD925  8D 47 04                  LEA EAX,[EDI + 0x4]
006CD928  66 89 04 51               MOV word ptr [ECX + EDX*0x2],AX
006CD92C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CD92F  8B CB                     MOV ECX,EBX
006CD931  F7 D9                     NEG ECX
006CD933  3B C1                     CMP EAX,ECX
006CD935  7C 08                     JL 0x006cd93f
006CD937  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CD93A  8D 4A 03                  LEA ECX,[EDX + 0x3]
006CD93D  EB 04                     JMP 0x006cd943
LAB_006cd93f:
006CD93F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CD942  41                        INC ECX
LAB_006cd943:
006CD943  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CD946  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD949  4A                        DEC EDX
006CD94A  03 CF                     ADD ECX,EDI
006CD94C  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CD94F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CD952  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CD955  8B 36                     MOV ESI,dword ptr [ESI]
006CD957  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CD95B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CD95E  8B 11                     MOV EDX,dword ptr [ECX]
006CD960  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CD963  89 11                     MOV dword ptr [ECX],EDX
006CD965  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CD968  89 0A                     MOV dword ptr [EDX],ECX
006CD96A  8D 50 01                  LEA EDX,[EAX + 0x1]
006CD96D  66 89 59 04               MOV word ptr [ECX + 0x4],BX
006CD971  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CD975  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CD978  4A                        DEC EDX
006CD979  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CD97D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CD981  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CD985  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD988  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cd98c:
006CD98C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CD98F  83 E1 30                  AND ECX,0x30
006CD992  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006CD995  0F 85 D6 00 00 00         JNZ 0x006cda71
006CD99B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CD99E  8D 54 09 02               LEA EDX,[ECX + ECX*0x1 + 0x2]
006CD9A2  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CD9A5  2B CA                     SUB ECX,EDX
006CD9A7  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CD9AA  66 8B 09                  MOV CX,word ptr [ECX]
006CD9AD  66 85 C9                  TEST CX,CX
006CD9B0  74 0E                     JZ 0x006cd9c0
006CD9B2  0F BF C9                  MOVSX ECX,CX
006CD9B5  8D 57 04                  LEA EDX,[EDI + 0x4]
006CD9B8  3B CA                     CMP ECX,EDX
006CD9BA  0F 8E B1 00 00 00         JLE 0x006cda71
LAB_006cd9c0:
006CD9C0  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CD9C3  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CD9C6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD9C9  2B D1                     SUB EDX,ECX
006CD9CB  66 8B 0A                  MOV CX,word ptr [EDX]
006CD9CE  81 E1 00 C0 00 00         AND ECX,0xc000
006CD9D4  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD9DA  0F 84 91 00 00 00         JZ 0x006cda71
006CD9E0  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CD9E3  66 8B 4A FE               MOV CX,word ptr [EDX + -0x2]
006CD9E7  81 E1 00 C0 00 00         AND ECX,0xc000
006CD9ED  81 F9 00 C0 00 00         CMP ECX,0xc000
006CD9F3  74 7C                     JZ 0x006cda71
006CD9F5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CD9F8  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CD9FB  85 C0                     TEST EAX,EAX
006CD9FD  66 89 0A                  MOV word ptr [EDX],CX
006CDA00  75 08                     JNZ 0x006cda0a
006CDA02  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDA05  83 C1 04                  ADD ECX,0x4
006CDA08  EB 1B                     JMP 0x006cda25
LAB_006cda0a:
006CDA0A  B9 01 00 00 00            MOV ECX,0x1
006CDA0F  2B CB                     SUB ECX,EBX
006CDA11  3B C1                     CMP EAX,ECX
006CDA13  7E 08                     JLE 0x006cda1d
006CDA15  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CDA18  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CDA1B  EB 08                     JMP 0x006cda25
LAB_006cda1d:
006CDA1D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDA20  74 03                     JZ 0x006cda25
006CDA22  83 C1 02                  ADD ECX,0x2
LAB_006cda25:
006CDA25  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDA28  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDA2B  4A                        DEC EDX
006CDA2C  03 CF                     ADD ECX,EDI
006CDA2E  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDA31  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDA34  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDA37  8B 36                     MOV ESI,dword ptr [ESI]
006CDA39  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CDA3D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CDA40  8B 11                     MOV EDX,dword ptr [ECX]
006CDA42  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CDA45  89 11                     MOV dword ptr [ECX],EDX
006CDA47  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CDA4A  89 0A                     MOV dword ptr [EDX],ECX
006CDA4C  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CDA4F  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CDA53  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CDA56  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDA5A  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CDA5E  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDA62  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDA66  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDA6A  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDA6D  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cda71:
006CDA71  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CDA74  83 E1 21                  AND ECX,0x21
006CDA77  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006CDA7A  0F 85 CD 00 00 00         JNZ 0x006cdb4d
006CDA80  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CDA83  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CDA86  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDA89  2B CA                     SUB ECX,EDX
006CDA8B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDA8E  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CDA92  66 85 D2                  TEST DX,DX
006CDA95  74 11                     JZ 0x006cdaa8
006CDA97  0F BF D2                  MOVSX EDX,DX
006CDA9A  8D 4F 04                  LEA ECX,[EDI + 0x4]
006CDA9D  3B D1                     CMP EDX,ECX
006CDA9F  0F 8E A8 00 00 00         JLE 0x006cdb4d
006CDAA5  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
LAB_006cdaa8:
006CDAA8  66 8B 11                  MOV DX,word ptr [ECX]
006CDAAB  81 E2 00 C0 00 00         AND EDX,0xc000
006CDAB1  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDAB7  0F 84 90 00 00 00         JZ 0x006cdb4d
006CDABD  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CDAC0  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CDAC4  81 E2 00 C0 00 00         AND EDX,0xc000
006CDACA  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDAD0  74 7B                     JZ 0x006cdb4d
006CDAD2  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDAD5  85 C0                     TEST EAX,EAX
006CDAD7  66 89 51 02               MOV word ptr [ECX + 0x2],DX
006CDADB  75 1E                     JNZ 0x006cdafb
006CDADD  85 DB                     TEST EBX,EBX
006CDADF  75 08                     JNZ 0x006cdae9
006CDAE1  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDAE4  83 C1 04                  ADD ECX,0x4
006CDAE7  EB 18                     JMP 0x006cdb01
LAB_006cdae9:
006CDAE9  83 FB FF                  CMP EBX,-0x1
006CDAEC  75 05                     JNZ 0x006cdaf3
006CDAEE  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDAF1  EB 0E                     JMP 0x006cdb01
LAB_006cdaf3:
006CDAF3  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CDAF6  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CDAF9  EB 06                     JMP 0x006cdb01
LAB_006cdafb:
006CDAFB  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDAFE  83 C1 FC                  ADD ECX,-0x4
LAB_006cdb01:
006CDB01  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDB04  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDB07  4A                        DEC EDX
006CDB08  03 CF                     ADD ECX,EDI
006CDB0A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDB0D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDB10  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDB13  8B 36                     MOV ESI,dword ptr [ESI]
006CDB15  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CDB19  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CDB1C  8B 11                     MOV EDX,dword ptr [ECX]
006CDB1E  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CDB21  89 11                     MOV dword ptr [ECX],EDX
006CDB23  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CDB26  89 0A                     MOV dword ptr [EDX],ECX
006CDB28  8D 53 01                  LEA EDX,[EBX + 0x1]
006CDB2B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CDB2F  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CDB32  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDB36  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CDB3A  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDB3E  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDB42  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDB46  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDB49  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cdb4d:
006CDB4D  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CDB50  83 E1 12                  AND ECX,0x12
006CDB53  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006CDB56  0F 85 9E 00 00 00         JNZ 0x006cdbfa
006CDB5C  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDB5F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDB62  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CDB67  66 85 C9                  TEST CX,CX
006CDB6A  74 0E                     JZ 0x006cdb7a
006CDB6C  0F BF C9                  MOVSX ECX,CX
006CDB6F  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDB72  3B CA                     CMP ECX,EDX
006CDB74  0F 8E 80 00 00 00         JLE 0x006cdbfa
LAB_006cdb7a:
006CDB7A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDB7D  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDB80  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CDB84  81 E2 00 C0 00 00         AND EDX,0xc000
006CDB8A  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDB90  74 68                     JZ 0x006cdbfa
006CDB92  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CDB96  81 E2 00 C0 00 00         AND EDX,0xc000
006CDB9C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDBA2  74 56                     JZ 0x006cdbfa
006CDBA4  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDBA7  8D 47 04                  LEA EAX,[EDI + 0x4]
006CDBAA  66 89 44 51 FE            MOV word ptr [ECX + EDX*0x2 + -0x2],AX
006CDBAF  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006CDBB2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDBB5  83 C0 04                  ADD EAX,0x4
006CDBB8  4A                        DEC EDX
006CDBB9  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
006CDBBC  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDBBF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDBC2  03 C7                     ADD EAX,EDI
006CDBC4  8B CE                     MOV ECX,ESI
006CDBC6  8B 36                     MOV ESI,dword ptr [ESI]
006CDBC8  8D 44 82 10               LEA EAX,[EDX + EAX*0x4 + 0x10]
006CDBCC  8B 10                     MOV EDX,dword ptr [EAX]
006CDBCE  89 11                     MOV dword ptr [ECX],EDX
006CDBD0  89 08                     MOV dword ptr [EAX],ECX
006CDBD2  8D 43 FF                  LEA EAX,[EBX + -0x1]
006CDBD5  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006CDBD9  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CDBDC  8D 50 01                  LEA EDX,[EAX + 0x1]
006CDBDF  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDBE3  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CDBE7  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDBEB  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDBEF  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDBF3  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDBF6  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cdbfa:
006CDBFA  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CDBFD  83 E1 03                  AND ECX,0x3
006CDC00  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006CDC03  0F 85 C6 00 00 00         JNZ 0x006cdccf
006CDC09  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDC0C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDC0F  66 8B 4C 51 02            MOV CX,word ptr [ECX + EDX*0x2 + 0x2]
006CDC14  66 85 C9                  TEST CX,CX
006CDC17  74 0E                     JZ 0x006cdc27
006CDC19  0F BF C9                  MOVSX ECX,CX
006CDC1C  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDC1F  3B CA                     CMP ECX,EDX
006CDC21  0F 8E A8 00 00 00         JLE 0x006cdccf
LAB_006cdc27:
006CDC27  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDC2A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDC2D  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CDC31  81 E2 00 C0 00 00         AND EDX,0xc000
006CDC37  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDC3D  0F 84 8C 00 00 00         JZ 0x006cdccf
006CDC43  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CDC47  81 E2 00 C0 00 00         AND EDX,0xc000
006CDC4D  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDC53  74 7A                     JZ 0x006cdccf
006CDC55  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDC58  8D 47 04                  LEA EAX,[EDI + 0x4]
006CDC5B  66 89 44 51 02            MOV word ptr [ECX + EDX*0x2 + 0x2],AX
006CDC60  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CDC63  8B CB                     MOV ECX,EBX
006CDC65  8D 50 01                  LEA EDX,[EAX + 0x1]
006CDC68  F7 D9                     NEG ECX
006CDC6A  3B CA                     CMP ECX,EDX
006CDC6C  7E 08                     JLE 0x006cdc76
006CDC6E  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDC71  83 C1 FE                  ADD ECX,-0x2
006CDC74  EB 0D                     JMP 0x006cdc83
LAB_006cdc76:
006CDC76  75 05                     JNZ 0x006cdc7d
006CDC78  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006CDC7B  EB 06                     JMP 0x006cdc83
LAB_006cdc7d:
006CDC7D  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CDC80  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cdc83:
006CDC83  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDC86  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDC89  4A                        DEC EDX
006CDC8A  03 CF                     ADD ECX,EDI
006CDC8C  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDC8F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDC92  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDC95  8B 36                     MOV ESI,dword ptr [ESI]
006CDC97  8D 4C 8A 10               LEA ECX,[EDX + ECX*0x4 + 0x10]
006CDC9B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006CDC9E  8B 11                     MOV EDX,dword ptr [ECX]
006CDCA0  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CDCA3  89 11                     MOV dword ptr [ECX],EDX
006CDCA5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006CDCA8  89 0A                     MOV dword ptr [EDX],ECX
006CDCAA  8D 53 01                  LEA EDX,[EBX + 0x1]
006CDCAD  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CDCB1  8D 50 01                  LEA EDX,[EAX + 0x1]
006CDCB4  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDCB8  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006CDCBC  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDCC0  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDCC4  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDCC8  8D 57 04                  LEA EDX,[EDI + 0x4]
006CDCCB  66 89 51 0C               MOV word ptr [ECX + 0xc],DX
LAB_006cdccf:
006CDCCF  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
006CDCD2  83 C7 05                  ADD EDI,0x5
006CDCD5  85 C9                     TEST ECX,ECX
006CDCD7  0F 85 6C 04 00 00         JNZ 0x006ce149
006CDCDD  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDCE0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006CDCE3  8D 0C 51                  LEA ECX,[ECX + EDX*0x2]
006CDCE6  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CDCE9  66 8B 11                  MOV DX,word ptr [ECX]
006CDCEC  81 E2 00 C0 00 00         AND EDX,0xc000
006CDCF2  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDCF8  0F 84 4B 04 00 00         JZ 0x006ce149
006CDCFE  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CDD01  85 D2                     TEST EDX,EDX
006CDD03  0F 85 21 01 00 00         JNZ 0x006cde2a
006CDD09  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDD0C  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006CDD10  2B CA                     SUB ECX,EDX
006CDD12  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDD15  66 8B 09                  MOV CX,word ptr [ECX]
006CDD18  66 85 C9                  TEST CX,CX
006CDD1B  74 0B                     JZ 0x006cdd28
006CDD1D  0F BF C9                  MOVSX ECX,CX
006CDD20  3B CF                     CMP ECX,EDI
006CDD22  0F 8E 02 01 00 00         JLE 0x006cde2a
LAB_006cdd28:
006CDD28  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDD2B  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CDD2E  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CDD31  2B D1                     SUB EDX,ECX
006CDD33  66 8B 12                  MOV DX,word ptr [EDX]
006CDD36  81 E2 00 C0 00 00         AND EDX,0xc000
006CDD3C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDD42  0F 84 E2 00 00 00         JZ 0x006cde2a
006CDD48  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CDD4B  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CDD4F  81 E2 00 C0 00 00         AND EDX,0xc000
006CDD55  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDD5B  0F 84 C9 00 00 00         JZ 0x006cde2a
006CDD61  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CDD64  2B D1                     SUB EDX,ECX
006CDD66  66 8B 0A                  MOV CX,word ptr [EDX]
006CDD69  81 E1 00 C0 00 00         AND ECX,0xc000
006CDD6F  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDD75  0F 84 AF 00 00 00         JZ 0x006cde2a
006CDD7B  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDD7E  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CDD82  81 E2 00 C0 00 00         AND EDX,0xc000
006CDD88  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDD8E  0F 84 96 00 00 00         JZ 0x006cde2a
006CDD94  8B D1                     MOV EDX,ECX
006CDD96  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CDD99  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CDD9D  2B D1                     SUB EDX,ECX
006CDD9F  66 8B 12                  MOV DX,word ptr [EDX]
006CDDA2  81 E2 00 C0 00 00         AND EDX,0xc000
006CDDA8  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDDAE  74 7A                     JZ 0x006cde2a
006CDDB0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CDDB3  85 C0                     TEST EAX,EAX
006CDDB5  66 89 39                  MOV word ptr [ECX],DI
006CDDB8  75 08                     JNZ 0x006cddc2
006CDDBA  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CDDBD  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CDDC0  EB 20                     JMP 0x006cdde2
LAB_006cddc2:
006CDDC2  B9 01 00 00 00            MOV ECX,0x1
006CDDC7  2B CB                     SUB ECX,EBX
006CDDC9  3B C1                     CMP EAX,ECX
006CDDCB  7E 08                     JLE 0x006cddd5
006CDDCD  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CDDD0  83 C1 FE                  ADD ECX,-0x2
006CDDD3  EB 0D                     JMP 0x006cdde2
LAB_006cddd5:
006CDDD5  75 05                     JNZ 0x006cdddc
006CDDD7  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CDDDA  EB 06                     JMP 0x006cdde2
LAB_006cdddc:
006CDDDC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CDDDF  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006cdde2:
006CDDE2  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDDE5  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDDE8  4A                        DEC EDX
006CDDE9  03 CF                     ADD ECX,EDI
006CDDEB  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDDEE  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDDF1  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDDF4  8B 36                     MOV ESI,dword ptr [ESI]
006CDDF6  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CDDF9  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CDDFC  8B 11                     MOV EDX,dword ptr [ECX]
006CDDFE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CDE01  89 11                     MOV dword ptr [ECX],EDX
006CDE03  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CDE06  89 0A                     MOV dword ptr [EDX],ECX
006CDE08  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CDE0B  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CDE0F  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CDE12  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDE16  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CDE19  42                        INC EDX
006CDE1A  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDE1E  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDE22  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDE26  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cde2a:
006CDE2A  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CDE2D  85 C9                     TEST ECX,ECX
006CDE2F  0F 85 12 01 00 00         JNZ 0x006cdf47
006CDE35  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CDE38  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CDE3B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CDE3E  2B CA                     SUB ECX,EDX
006CDE40  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CDE43  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDE46  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CDE4A  66 85 D2                  TEST DX,DX
006CDE4D  74 0B                     JZ 0x006cde5a
006CDE4F  0F BF D2                  MOVSX EDX,DX
006CDE52  3B D7                     CMP EDX,EDI
006CDE54  0F 8E ED 00 00 00         JLE 0x006cdf47
LAB_006cde5a:
006CDE5A  66 8B 09                  MOV CX,word ptr [ECX]
006CDE5D  81 E1 00 C0 00 00         AND ECX,0xc000
006CDE63  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDE69  0F 84 D8 00 00 00         JZ 0x006cdf47
006CDE6F  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CDE72  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CDE76  81 E1 00 C0 00 00         AND ECX,0xc000
006CDE7C  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDE82  0F 84 BF 00 00 00         JZ 0x006cdf47
006CDE88  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDE8B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CDE8E  2B CA                     SUB ECX,EDX
006CDE90  66 8B 11                  MOV DX,word ptr [ECX]
006CDE93  81 E2 00 C0 00 00         AND EDX,0xc000
006CDE99  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDE9F  0F 84 A2 00 00 00         JZ 0x006cdf47
006CDEA5  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CDEA8  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CDEAC  81 E2 00 C0 00 00         AND EDX,0xc000
006CDEB2  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDEB8  0F 84 89 00 00 00         JZ 0x006cdf47
006CDEBE  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CDEC2  81 E1 00 C0 00 00         AND ECX,0xc000
006CDEC8  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDECE  74 77                     JZ 0x006cdf47
006CDED0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CDED3  85 C0                     TEST EAX,EAX
006CDED5  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CDED9  75 1E                     JNZ 0x006cdef9
006CDEDB  85 DB                     TEST EBX,EBX
006CDEDD  75 08                     JNZ 0x006cdee7
006CDEDF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CDEE2  83 C1 04                  ADD ECX,0x4
006CDEE5  EB 18                     JMP 0x006cdeff
LAB_006cdee7:
006CDEE7  83 FB FF                  CMP EBX,-0x1
006CDEEA  75 05                     JNZ 0x006cdef1
006CDEEC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CDEEF  EB 0E                     JMP 0x006cdeff
LAB_006cdef1:
006CDEF1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CDEF4  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CDEF7  EB 06                     JMP 0x006cdeff
LAB_006cdef9:
006CDEF9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CDEFC  83 C1 FC                  ADD ECX,-0x4
LAB_006cdeff:
006CDEFF  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDF02  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CDF05  4A                        DEC EDX
006CDF06  03 CF                     ADD ECX,EDI
006CDF08  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CDF0B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CDF0E  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDF11  8B 36                     MOV ESI,dword ptr [ESI]
006CDF13  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CDF16  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CDF19  8B 11                     MOV EDX,dword ptr [ECX]
006CDF1B  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CDF1E  89 11                     MOV dword ptr [ECX],EDX
006CDF20  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CDF23  89 0A                     MOV dword ptr [EDX],ECX
006CDF25  8D 53 01                  LEA EDX,[EBX + 0x1]
006CDF28  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CDF2C  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CDF2F  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CDF33  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CDF36  42                        INC EDX
006CDF37  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CDF3B  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CDF3F  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CDF43  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006cdf47:
006CDF47  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CDF4A  85 C9                     TEST ECX,ECX
006CDF4C  0F 85 E9 00 00 00         JNZ 0x006ce03b
006CDF52  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CDF55  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CDF58  66 8B 4C 4A FE            MOV CX,word ptr [EDX + ECX*0x2 + -0x2]
006CDF5D  66 85 C9                  TEST CX,CX
006CDF60  74 0B                     JZ 0x006cdf6d
006CDF62  0F BF C9                  MOVSX ECX,CX
006CDF65  3B CF                     CMP ECX,EDI
006CDF67  0F 8E CE 00 00 00         JLE 0x006ce03b
LAB_006cdf6d:
006CDF6D  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDF70  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CDF73  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CDF77  81 E2 00 C0 00 00         AND EDX,0xc000
006CDF7D  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDF83  0F 84 B2 00 00 00         JZ 0x006ce03b
006CDF89  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CDF8D  81 E1 00 C0 00 00         AND ECX,0xc000
006CDF93  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDF99  0F 84 9C 00 00 00         JZ 0x006ce03b
006CDF9F  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CDFA2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDFA5  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CDFA9  81 E2 00 C0 00 00         AND EDX,0xc000
006CDFAF  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDFB5  0F 84 80 00 00 00         JZ 0x006ce03b
006CDFBB  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CDFBF  81 E2 00 C0 00 00         AND EDX,0xc000
006CDFC5  81 FA 00 C0 00 00         CMP EDX,0xc000
006CDFCB  74 6E                     JZ 0x006ce03b
006CDFCD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CDFD0  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CDFD5  81 E1 00 C0 00 00         AND ECX,0xc000
006CDFDB  81 F9 00 C0 00 00         CMP ECX,0xc000
006CDFE1  74 58                     JZ 0x006ce03b
006CDFE3  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CDFE6  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CDFE9  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CDFEC  66 89 7C 4A FE            MOV word ptr [EDX + ECX*0x2 + -0x2],DI
006CDFF1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CDFF4  8B 36                     MOV ESI,dword ptr [ESI]
006CDFF6  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CDFF9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CDFFC  4A                        DEC EDX
006CDFFD  03 CF                     ADD ECX,EDI
006CDFFF  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE002  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE005  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE008  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE00B  8B 11                     MOV EDX,dword ptr [ECX]
006CE00D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE010  89 11                     MOV dword ptr [ECX],EDX
006CE012  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE015  89 0A                     MOV dword ptr [EDX],ECX
006CE017  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CE01A  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE01E  8D 50 01                  LEA EDX,[EAX + 0x1]
006CE021  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CE025  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CE028  42                        INC EDX
006CE029  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CE02D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CE030  83 C2 04                  ADD EDX,0x4
006CE033  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE037  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ce03b:
006CE03B  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CE03E  85 C9                     TEST ECX,ECX
006CE040  0F 85 03 01 00 00         JNZ 0x006ce149
006CE046  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE049  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE04C  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CE051  66 85 C9                  TEST CX,CX
006CE054  74 0B                     JZ 0x006ce061
006CE056  0F BF C9                  MOVSX ECX,CX
006CE059  3B CF                     CMP ECX,EDI
006CE05B  0F 8E E8 00 00 00         JLE 0x006ce149
LAB_006ce061:
006CE061  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE064  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CE067  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CE06B  81 E2 00 C0 00 00         AND EDX,0xc000
006CE071  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE077  0F 84 CC 00 00 00         JZ 0x006ce149
006CE07D  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CE081  81 E1 00 C0 00 00         AND ECX,0xc000
006CE087  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE08D  0F 84 B6 00 00 00         JZ 0x006ce149
006CE093  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CE096  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE099  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CE09D  81 E2 00 C0 00 00         AND EDX,0xc000
006CE0A3  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE0A9  0F 84 9A 00 00 00         JZ 0x006ce149
006CE0AF  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CE0B3  81 E2 00 C0 00 00         AND EDX,0xc000
006CE0B9  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE0BF  0F 84 84 00 00 00         JZ 0x006ce149
006CE0C5  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE0C8  66 8B 4C 51 02            MOV CX,word ptr [ECX + EDX*0x2 + 0x2]
006CE0CD  81 E1 00 C0 00 00         AND ECX,0xc000
006CE0D3  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE0D9  74 6E                     JZ 0x006ce149
006CE0DB  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE0DE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE0E1  66 89 7C 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],DI
006CE0E6  8B CB                     MOV ECX,EBX
006CE0E8  8D 50 01                  LEA EDX,[EAX + 0x1]
006CE0EB  F7 D9                     NEG ECX
006CE0ED  3B CA                     CMP ECX,EDX
006CE0EF  7E 08                     JLE 0x006ce0f9
006CE0F1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006CE0F4  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CE0F7  EB 08                     JMP 0x006ce101
LAB_006ce0f9:
006CE0F9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006CE0FC  74 03                     JZ 0x006ce101
006CE0FE  83 C1 02                  ADD ECX,0x2
LAB_006ce101:
006CE101  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE104  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE107  4A                        DEC EDX
006CE108  03 CF                     ADD ECX,EDI
006CE10A  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE10D  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE110  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CE113  8B 36                     MOV ESI,dword ptr [ESI]
006CE115  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE118  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE11B  8B 11                     MOV EDX,dword ptr [ECX]
006CE11D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE120  89 11                     MOV dword ptr [ECX],EDX
006CE122  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE125  89 0A                     MOV dword ptr [EDX],ECX
006CE127  8D 53 01                  LEA EDX,[EBX + 0x1]
006CE12A  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE12E  8D 50 01                  LEA EDX,[EAX + 0x1]
006CE131  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CE135  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CE138  42                        INC EDX
006CE139  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CE13D  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CE141  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE145  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ce149:
006CE149  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006CE14C  85 C9                     TEST ECX,ECX
006CE14E  0F 85 6E 04 00 00         JNZ 0x006ce5c2
006CE154  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006CE157  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CE15A  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CE15D  2B CA                     SUB ECX,EDX
006CE15F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006CE162  66 8B 11                  MOV DX,word ptr [ECX]
006CE165  81 E2 00 C0 00 00         AND EDX,0xc000
006CE16B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE171  0F 84 4B 04 00 00         JZ 0x006ce5c2
006CE177  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006CE17A  85 D2                     TEST EDX,EDX
006CE17C  0F 85 21 01 00 00         JNZ 0x006ce2a3
006CE182  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE185  8D 54 12 02               LEA EDX,[EDX + EDX*0x1 + 0x2]
006CE189  2B CA                     SUB ECX,EDX
006CE18B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE18E  66 8B 09                  MOV CX,word ptr [ECX]
006CE191  66 85 C9                  TEST CX,CX
006CE194  74 0B                     JZ 0x006ce1a1
006CE196  0F BF C9                  MOVSX ECX,CX
006CE199  3B CF                     CMP ECX,EDI
006CE19B  0F 8E 02 01 00 00         JLE 0x006ce2a3
LAB_006ce1a1:
006CE1A1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE1A4  8D 0C 12                  LEA ECX,[EDX + EDX*0x1]
006CE1A7  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE1AA  2B D1                     SUB EDX,ECX
006CE1AC  66 8B 12                  MOV DX,word ptr [EDX]
006CE1AF  81 E2 00 C0 00 00         AND EDX,0xc000
006CE1B5  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE1BB  0F 84 E2 00 00 00         JZ 0x006ce2a3
006CE1C1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE1C4  66 8B 52 FE               MOV DX,word ptr [EDX + -0x2]
006CE1C8  81 E2 00 C0 00 00         AND EDX,0xc000
006CE1CE  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE1D4  0F 84 C9 00 00 00         JZ 0x006ce2a3
006CE1DA  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CE1DD  2B D1                     SUB EDX,ECX
006CE1DF  66 8B 0A                  MOV CX,word ptr [EDX]
006CE1E2  81 E1 00 C0 00 00         AND ECX,0xc000
006CE1E8  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE1EE  0F 84 AF 00 00 00         JZ 0x006ce2a3
006CE1F4  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CE1F7  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CE1FB  81 E2 00 C0 00 00         AND EDX,0xc000
006CE201  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE207  0F 84 96 00 00 00         JZ 0x006ce2a3
006CE20D  8B D1                     MOV EDX,ECX
006CE20F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE212  8D 4C 09 02               LEA ECX,[ECX + ECX*0x1 + 0x2]
006CE216  2B D1                     SUB EDX,ECX
006CE218  66 8B 12                  MOV DX,word ptr [EDX]
006CE21B  81 E2 00 C0 00 00         AND EDX,0xc000
006CE221  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE227  74 7A                     JZ 0x006ce2a3
006CE229  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006CE22C  85 C0                     TEST EAX,EAX
006CE22E  66 89 39                  MOV word ptr [ECX],DI
006CE231  75 08                     JNZ 0x006ce23b
006CE233  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE236  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CE239  EB 20                     JMP 0x006ce25b
LAB_006ce23b:
006CE23B  B9 01 00 00 00            MOV ECX,0x1
006CE240  2B CB                     SUB ECX,EBX
006CE242  3B C1                     CMP EAX,ECX
006CE244  7E 08                     JLE 0x006ce24e
006CE246  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE249  83 C1 FE                  ADD ECX,-0x2
006CE24C  EB 0D                     JMP 0x006ce25b
LAB_006ce24e:
006CE24E  75 05                     JNZ 0x006ce255
006CE250  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE253  EB 06                     JMP 0x006ce25b
LAB_006ce255:
006CE255  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE258  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ce25b:
006CE25B  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE25E  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE261  4A                        DEC EDX
006CE262  03 CF                     ADD ECX,EDI
006CE264  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE267  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE26A  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CE26D  8B 36                     MOV ESI,dword ptr [ESI]
006CE26F  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE272  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE275  8B 11                     MOV EDX,dword ptr [ECX]
006CE277  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE27A  89 11                     MOV dword ptr [ECX],EDX
006CE27C  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE27F  89 0A                     MOV dword ptr [EDX],ECX
006CE281  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CE284  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE288  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CE28B  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CE28F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CE292  4A                        DEC EDX
006CE293  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CE297  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CE29B  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE29F  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ce2a3:
006CE2A3  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006CE2A6  85 C9                     TEST ECX,ECX
006CE2A8  0F 85 12 01 00 00         JNZ 0x006ce3c0
006CE2AE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE2B1  8D 14 09                  LEA EDX,[ECX + ECX*0x1]
006CE2B4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CE2B7  2B CA                     SUB ECX,EDX
006CE2B9  89 55 20                  MOV dword ptr [EBP + 0x20],EDX
006CE2BC  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE2BF  66 8B 51 02               MOV DX,word ptr [ECX + 0x2]
006CE2C3  66 85 D2                  TEST DX,DX
006CE2C6  74 0B                     JZ 0x006ce2d3
006CE2C8  0F BF D2                  MOVSX EDX,DX
006CE2CB  3B D7                     CMP EDX,EDI
006CE2CD  0F 8E ED 00 00 00         JLE 0x006ce3c0
LAB_006ce2d3:
006CE2D3  66 8B 09                  MOV CX,word ptr [ECX]
006CE2D6  81 E1 00 C0 00 00         AND ECX,0xc000
006CE2DC  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE2E2  0F 84 D8 00 00 00         JZ 0x006ce3c0
006CE2E8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE2EB  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CE2EF  81 E1 00 C0 00 00         AND ECX,0xc000
006CE2F5  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE2FB  0F 84 BF 00 00 00         JZ 0x006ce3c0
006CE301  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CE304  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006CE307  2B CA                     SUB ECX,EDX
006CE309  66 8B 11                  MOV DX,word ptr [ECX]
006CE30C  81 E2 00 C0 00 00         AND EDX,0xc000
006CE312  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE318  0F 84 A2 00 00 00         JZ 0x006ce3c0
006CE31E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CE321  66 8B 52 02               MOV DX,word ptr [EDX + 0x2]
006CE325  81 E2 00 C0 00 00         AND EDX,0xc000
006CE32B  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE331  0F 84 89 00 00 00         JZ 0x006ce3c0
006CE337  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CE33B  81 E1 00 C0 00 00         AND ECX,0xc000
006CE341  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE347  74 77                     JZ 0x006ce3c0
006CE349  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CE34C  85 C0                     TEST EAX,EAX
006CE34E  66 89 7A 02               MOV word ptr [EDX + 0x2],DI
006CE352  75 1E                     JNZ 0x006ce372
006CE354  85 DB                     TEST EBX,EBX
006CE356  75 08                     JNZ 0x006ce360
006CE358  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE35B  83 C1 04                  ADD ECX,0x4
006CE35E  EB 18                     JMP 0x006ce378
LAB_006ce360:
006CE360  83 FB FF                  CMP EBX,-0x1
006CE363  75 05                     JNZ 0x006ce36a
006CE365  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE368  EB 0E                     JMP 0x006ce378
LAB_006ce36a:
006CE36A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE36D  8D 4A FE                  LEA ECX,[EDX + -0x2]
006CE370  EB 06                     JMP 0x006ce378
LAB_006ce372:
006CE372  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE375  83 C1 FC                  ADD ECX,-0x4
LAB_006ce378:
006CE378  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE37B  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE37E  4A                        DEC EDX
006CE37F  03 CF                     ADD ECX,EDI
006CE381  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE384  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE387  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CE38A  8B 36                     MOV ESI,dword ptr [ESI]
006CE38C  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE38F  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE392  8B 11                     MOV EDX,dword ptr [ECX]
006CE394  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE397  89 11                     MOV dword ptr [ECX],EDX
006CE399  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE39C  89 0A                     MOV dword ptr [EDX],ECX
006CE39E  8D 53 01                  LEA EDX,[EBX + 0x1]
006CE3A1  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE3A5  8D 50 FF                  LEA EDX,[EAX + -0x1]
006CE3A8  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CE3AC  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CE3AF  4A                        DEC EDX
006CE3B0  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CE3B4  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CE3B8  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE3BC  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ce3c0:
006CE3C0  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006CE3C3  85 C9                     TEST ECX,ECX
006CE3C5  0F 85 E9 00 00 00         JNZ 0x006ce4b4
006CE3CB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE3CE  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE3D1  66 8B 4C 4A FE            MOV CX,word ptr [EDX + ECX*0x2 + -0x2]
006CE3D6  66 85 C9                  TEST CX,CX
006CE3D9  74 0B                     JZ 0x006ce3e6
006CE3DB  0F BF C9                  MOVSX ECX,CX
006CE3DE  3B CF                     CMP ECX,EDI
006CE3E0  0F 8E CE 00 00 00         JLE 0x006ce4b4
LAB_006ce3e6:
006CE3E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE3E9  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CE3EC  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CE3F0  81 E2 00 C0 00 00         AND EDX,0xc000
006CE3F6  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE3FC  0F 84 B2 00 00 00         JZ 0x006ce4b4
006CE402  66 8B 49 FE               MOV CX,word ptr [ECX + -0x2]
006CE406  81 E1 00 C0 00 00         AND ECX,0xc000
006CE40C  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE412  0F 84 9C 00 00 00         JZ 0x006ce4b4
006CE418  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006CE41B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE41E  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CE422  81 E2 00 C0 00 00         AND EDX,0xc000
006CE428  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE42E  0F 84 80 00 00 00         JZ 0x006ce4b4
006CE434  66 8B 51 FE               MOV DX,word ptr [ECX + -0x2]
006CE438  81 E2 00 C0 00 00         AND EDX,0xc000
006CE43E  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE444  74 6E                     JZ 0x006ce4b4
006CE446  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE449  66 8B 4C 51 FE            MOV CX,word ptr [ECX + EDX*0x2 + -0x2]
006CE44E  81 E1 00 C0 00 00         AND ECX,0xc000
006CE454  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE45A  74 58                     JZ 0x006ce4b4
006CE45C  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE45F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE462  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CE465  66 89 7C 4A FE            MOV word ptr [EDX + ECX*0x2 + -0x2],DI
006CE46A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE46D  8B 36                     MOV ESI,dword ptr [ESI]
006CE46F  8D 4A 04                  LEA ECX,[EDX + 0x4]
006CE472  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE475  4A                        DEC EDX
006CE476  03 CF                     ADD ECX,EDI
006CE478  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE47B  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE47E  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE481  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE484  8B 11                     MOV EDX,dword ptr [ECX]
006CE486  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE489  89 11                     MOV dword ptr [ECX],EDX
006CE48B  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE48E  89 0A                     MOV dword ptr [EDX],ECX
006CE490  8D 53 FF                  LEA EDX,[EBX + -0x1]
006CE493  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE497  8D 50 01                  LEA EDX,[EAX + 0x1]
006CE49A  66 89 51 06               MOV word ptr [ECX + 0x6],DX
006CE49E  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006CE4A1  4A                        DEC EDX
006CE4A2  66 89 51 08               MOV word ptr [ECX + 0x8],DX
006CE4A6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE4A9  83 C2 04                  ADD EDX,0x4
006CE4AC  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE4B0  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
LAB_006ce4b4:
006CE4B4  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006CE4B7  85 C9                     TEST ECX,ECX
006CE4B9  0F 85 03 01 00 00         JNZ 0x006ce5c2
006CE4BF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE4C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE4C5  66 8B 4C 4A 02            MOV CX,word ptr [EDX + ECX*0x2 + 0x2]
006CE4CA  66 85 C9                  TEST CX,CX
006CE4CD  74 0B                     JZ 0x006ce4da
006CE4CF  0F BF C9                  MOVSX ECX,CX
006CE4D2  3B CF                     CMP ECX,EDI
006CE4D4  0F 8E E8 00 00 00         JLE 0x006ce5c2
LAB_006ce4da:
006CE4DA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006CE4DD  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006CE4E0  66 8B 14 51               MOV DX,word ptr [ECX + EDX*0x2]
006CE4E4  81 E2 00 C0 00 00         AND EDX,0xc000
006CE4EA  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE4F0  0F 84 CC 00 00 00         JZ 0x006ce5c2
006CE4F6  66 8B 49 02               MOV CX,word ptr [ECX + 0x2]
006CE4FA  81 E1 00 C0 00 00         AND ECX,0xc000
006CE500  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE506  0F 84 B6 00 00 00         JZ 0x006ce5c2
006CE50C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CE50F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE512  66 8B 0C 4A               MOV CX,word ptr [EDX + ECX*0x2]
006CE516  81 E1 00 C0 00 00         AND ECX,0xc000
006CE51C  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE522  0F 84 9A 00 00 00         JZ 0x006ce5c2
006CE528  66 8B 4A 02               MOV CX,word ptr [EDX + 0x2]
006CE52C  81 E1 00 C0 00 00         AND ECX,0xc000
006CE532  81 F9 00 C0 00 00         CMP ECX,0xc000
006CE538  0F 84 84 00 00 00         JZ 0x006ce5c2
006CE53E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CE541  66 8B 54 4A 02            MOV DX,word ptr [EDX + ECX*0x2 + 0x2]
006CE546  81 E2 00 C0 00 00         AND EDX,0xc000
006CE54C  81 FA 00 C0 00 00         CMP EDX,0xc000
006CE552  74 6E                     JZ 0x006ce5c2
006CE554  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006CE557  66 89 7C 4A 02            MOV word ptr [EDX + ECX*0x2 + 0x2],DI
006CE55C  8D 50 01                  LEA EDX,[EAX + 0x1]
006CE55F  8B CB                     MOV ECX,EBX
LAB_006ce561:
006CE561  F7 D9                     NEG ECX
006CE563  3B CA                     CMP ECX,EDX
006CE565  7E 08                     JLE 0x006ce56f
006CE567  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE56A  83 C1 FE                  ADD ECX,-0x2
006CE56D  EB 0D                     JMP 0x006ce57c
LAB_006ce56f:
006CE56F  75 05                     JNZ 0x006ce576
006CE571  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE574  EB 06                     JMP 0x006ce57c
LAB_006ce576:
006CE576  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006CE579  8D 4A 02                  LEA ECX,[EDX + 0x2]
LAB_006ce57c:
006CE57C  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE57F  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
006CE582  4A                        DEC EDX
006CE583  03 CF                     ADD ECX,EDI
006CE585  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE588  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE58B  89 75 20                  MOV dword ptr [EBP + 0x20],ESI
006CE58E  8B 36                     MOV ESI,dword ptr [ESI]
006CE590  8D 0C 8A                  LEA ECX,[EDX + ECX*0x4]
006CE593  40                        INC EAX
006CE594  89 4D 24                  MOV dword ptr [EBP + 0x24],ECX
006CE597  8B 11                     MOV EDX,dword ptr [ECX]
006CE599  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE59C  89 11                     MOV dword ptr [ECX],EDX
006CE59E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006CE5A1  89 0A                     MOV dword ptr [EDX],ECX
006CE5A3  8D 53 01                  LEA EDX,[EBX + 0x1]
006CE5A6  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006CE5AA  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
006CE5AE  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006CE5B2  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006CE5B5  48                        DEC EAX
006CE5B6  66 89 41 08               MOV word ptr [ECX + 0x8],AX
006CE5BA  66 89 51 0A               MOV word ptr [ECX + 0xa],DX
006CE5BE  66 89 79 0C               MOV word ptr [ECX + 0xc],DI
switchD_006c9394::default:
006CE5C2  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
006CE5C5  66 83 38 00               CMP word ptr [EAX],0x0
006CE5C9  7F 76                     JG 0x006ce641
006CE5CB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006CE5CE  85 C0                     TEST EAX,EAX
006CE5D0  74 2B                     JZ 0x006ce5fd
006CE5D2  83 FB FF                  CMP EBX,-0x1
006CE5D5  7C 26                     JL 0x006ce5fd
006CE5D7  83 FB 01                  CMP EBX,0x1
006CE5DA  7F 21                     JG 0x006ce5fd
006CE5DC  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006CE5DF  83 F8 FF                  CMP EAX,-0x1
006CE5E2  7C 19                     JL 0x006ce5fd
006CE5E4  83 F8 01                  CMP EAX,0x1
006CE5E7  7F 14                     JG 0x006ce5fd
006CE5E9  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006CE5EC  83 F8 FF                  CMP EAX,-0x1
006CE5EF  7C 0C                     JL 0x006ce5fd
006CE5F1  83 F8 01                  CMP EAX,0x1
006CE5F4  7F 07                     JG 0x006ce5fd
006CE5F6  C7 45 9C 01 00 00 00      MOV dword ptr [EBP + -0x64],0x1
LAB_006ce5fd:
006CE5FD  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
006CE600  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
006CE603  47                        INC EDI
006CE604  8B 08                     MOV ECX,dword ptr [EAX]
006CE606  89 7D B0                  MOV dword ptr [EBP + -0x50],EDI
006CE609  85 C9                     TEST ECX,ECX
006CE60B  74 08                     JZ 0x006ce615
006CE60D  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
006CE610  E9 F0 AB FF FF            JMP 0x006c9205
LAB_006ce615:
006CE615  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
006CE618  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006CE61B  89 30                     MOV dword ptr [EAX],ESI
006CE61D  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
006CE620  8B 75 A0                  MOV ESI,dword ptr [EBP + -0x60]
006CE623  03 D1                     ADD EDX,ECX
006CE625  85 C0                     TEST EAX,EAX
006CE627  89 55 28                  MOV dword ptr [EBP + 0x28],EDX
006CE62A  75 15                     JNZ 0x006ce641
006CE62C  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
006CE62F  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
006CE632  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006CE635  E9 4D AB FF FF            JMP 0x006c9187
LAB_006ce63a:
006CE63A  C7 45 CC FE FF FF FF      MOV dword ptr [EBP + -0x34],0xfffffffe
LAB_006ce641:
006CE641  8B 45 88                  MOV EAX,dword ptr [EBP + -0x78]
006CE644  85 C0                     TEST EAX,EAX
006CE646  7D 06                     JGE 0x006ce64e
006CE648  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
006CE64B  66 89 02                  MOV word ptr [EDX],AX
LAB_006ce64e:
006CE64E  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006CE651  50                        PUSH EAX
006CE652  E8 39 78 FD FF            CALL 0x006a5e90
006CE657  8B 75 B8                  MOV ESI,dword ptr [EBP + -0x48]
006CE65A  85 F6                     TEST ESI,ESI
006CE65C  74 0E                     JZ 0x006ce66c
LAB_006ce65e:
006CE65E  8B C6                     MOV EAX,ESI
006CE660  8B 36                     MOV ESI,dword ptr [ESI]
006CE662  50                        PUSH EAX
006CE663  E8 28 78 FD FF            CALL 0x006a5e90
006CE668  85 F6                     TEST ESI,ESI
006CE66A  75 F2                     JNZ 0x006ce65e
LAB_006ce66c:
006CE66C  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006CE66F  5F                        POP EDI
006CE670  5E                        POP ESI
006CE671  5B                        POP EBX
006CE672  8B E5                     MOV ESP,EBP
006CE674  5D                        POP EBP
006CE675  C2 28 00                  RET 0x28
LAB_006ce678:
006CE678  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006CE67B  52                        PUSH EDX
006CE67C  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006CE67F  56                        PUSH ESI
006CE680  50                        PUSH EAX
006CE681  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006CE684  51                        PUSH ECX
006CE685  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006CE688  52                        PUSH EDX
006CE689  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006CE68C  50                        PUSH EAX
006CE68D  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CE690  51                        PUSH ECX
006CE691  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006CE694  52                        PUSH EDX
006CE695  50                        PUSH EAX
006CE696  51                        PUSH ECX
006CE697  E8 F4 C9 FD FF            CALL 0x006ab090
006CE69C  5F                        POP EDI
006CE69D  5E                        POP ESI
006CE69E  5B                        POP EBX
006CE69F  8B E5                     MOV ESP,EBP
006CE6A1  5D                        POP EBP
006CE6A2  C2 28 00                  RET 0x28
