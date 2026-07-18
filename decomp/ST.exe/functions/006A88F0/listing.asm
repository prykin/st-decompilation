FUN_006a88f0:
006A88F0  55                        PUSH EBP
006A88F1  8B EC                     MOV EBP,ESP
006A88F3  83 EC 4C                  SUB ESP,0x4c
006A88F6  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A88F9  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006A88FC  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A88FF  53                        PUSH EBX
006A8900  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
006A8903  56                        PUSH ESI
006A8904  57                        PUSH EDI
006A8905  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
006A8908  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
006A890E  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A8911  51                        PUSH ECX
006A8912  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A8915  52                        PUSH EDX
006A8916  50                        PUSH EAX
006A8917  51                        PUSH ECX
006A8918  53                        PUSH EBX
006A8919  57                        PUSH EDI
006A891A  E8 B1 24 00 00            CALL 0x006aadd0
006A891F  3B 45 30                  CMP EAX,dword ptr [EBP + 0x30]
006A8922  0F 8E D2 00 00 00         JLE 0x006a89fa
006A8928  85 FF                     TEST EDI,EDI
006A892A  0F 8C CA 00 00 00         JL 0x006a89fa
006A8930  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006A8933  3B FE                     CMP EDI,ESI
006A8935  0F 8D BF 00 00 00         JGE 0x006a89fa
006A893B  85 DB                     TEST EBX,EBX
006A893D  0F 8C B7 00 00 00         JL 0x006a89fa
006A8943  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A8946  3B DA                     CMP EBX,EDX
006A8948  0F 8D AC 00 00 00         JGE 0x006a89fa
006A894E  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A8951  85 C0                     TEST EAX,EAX
006A8953  0F 8C A1 00 00 00         JL 0x006a89fa
006A8959  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006A895C  3B C7                     CMP EAX,EDI
006A895E  0F 8D 96 00 00 00         JGE 0x006a89fa
006A8964  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A8967  85 C0                     TEST EAX,EAX
006A8969  0F 8C 8B 00 00 00         JL 0x006a89fa
006A896F  3B C6                     CMP EAX,ESI
006A8971  0F 8D 83 00 00 00         JGE 0x006a89fa
006A8977  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A897A  85 C9                     TEST ECX,ECX
006A897C  7C 7C                     JL 0x006a89fa
006A897E  3B CA                     CMP ECX,EDX
006A8980  7D 78                     JGE 0x006a89fa
006A8982  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8985  85 C0                     TEST EAX,EAX
006A8987  7C 71                     JL 0x006a89fa
006A8989  3B C7                     CMP EAX,EDI
006A898B  7D 6D                     JGE 0x006a89fa
006A898D  8B DE                     MOV EBX,ESI
006A898F  0F AF DA                  IMUL EBX,EDX
006A8992  8B FB                     MOV EDI,EBX
006A8994  8B D6                     MOV EDX,ESI
006A8996  0F AF F8                  IMUL EDI,EAX
006A8999  0F AF D1                  IMUL EDX,ECX
006A899C  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A899F  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
006A89A2  03 CF                     ADD ECX,EDI
006A89A4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006A89A7  03 D1                     ADD EDX,ECX
006A89A9  66 83 3C 57 FD            CMP word ptr [EDI + EDX*0x2],-0x3
006A89AE  8D 0C 57                  LEA ECX,[EDI + EDX*0x2]
006A89B1  75 08                     JNZ 0x006a89bb
006A89B3  66 C7 01 00 00            MOV word ptr [ECX],0x0
006A89B8  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
LAB_006a89bb:
006A89BB  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A89BE  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A89C1  50                        PUSH EAX
006A89C2  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A89C5  52                        PUSH EDX
006A89C6  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A89C9  50                        PUSH EAX
006A89CA  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A89CD  51                        PUSH ECX
006A89CE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A89D1  52                        PUSH EDX
006A89D2  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A89D5  50                        PUSH EAX
006A89D6  51                        PUSH ECX
006A89D7  52                        PUSH EDX
006A89D8  56                        PUSH ESI
006A89D9  57                        PUSH EDI
006A89DA  E8 01 DB FF FF            CALL 0x006a64e0
006A89DF  85 C0                     TEST EAX,EAX
006A89E1  74 22                     JZ 0x006a8a05
006A89E3  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006A89E8  68 8E 06 00 00            PUSH 0x68e
006A89ED  68 18 D7 7E 00            PUSH 0x7ed718
006A89F2  50                        PUSH EAX
006A89F3  6A FE                     PUSH -0x2
006A89F5  E8 46 D4 FF FF            CALL 0x006a5e40
LAB_006a89fa:
006A89FA  5F                        POP EDI
006A89FB  5E                        POP ESI
006A89FC  33 C0                     XOR EAX,EAX
006A89FE  5B                        POP EBX
006A89FF  8B E5                     MOV ESP,EBP
006A8A01  5D                        POP EBP
006A8A02  C2 34 00                  RET 0x34
LAB_006a8a05:
006A8A05  0F AF 5D 2C               IMUL EBX,dword ptr [EBP + 0x2c]
006A8A09  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A8A0C  8B D6                     MOV EDX,ESI
006A8A0E  0F AF 55 28               IMUL EDX,dword ptr [EBP + 0x28]
006A8A12  8B C1                     MOV EAX,ECX
006A8A14  03 C3                     ADD EAX,EBX
006A8A16  03 D0                     ADD EDX,EAX
006A8A18  0F BF 04 57               MOVSX EAX,word ptr [EDI + EDX*0x2]
006A8A1C  85 C0                     TEST EAX,EAX
006A8A1E  7D 79                     JGE 0x006a8a99
006A8A20  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A8A23  8B C1                     MOV EAX,ECX
006A8A25  2B C2                     SUB EAX,EDX
006A8A27  99                        CDQ
006A8A28  8B D8                     MOV EBX,EAX
006A8A2A  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A8A2D  33 DA                     XOR EBX,EDX
006A8A2F  2B DA                     SUB EBX,EDX
006A8A31  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A8A34  2B C2                     SUB EAX,EDX
006A8A36  99                        CDQ
006A8A37  33 C2                     XOR EAX,EDX
006A8A39  2B C2                     SUB EAX,EDX
006A8A3B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A8A3E  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006A8A41  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8A44  2B C2                     SUB EAX,EDX
006A8A46  99                        CDQ
006A8A47  33 C2                     XOR EAX,EDX
006A8A49  2B C2                     SUB EAX,EDX
006A8A4B  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A8A4E  3B DA                     CMP EBX,EDX
006A8A50  7C 08                     JL 0x006a8a5a
006A8A52  3B D8                     CMP EBX,EAX
006A8A54  7C 0D                     JL 0x006a8a63
006A8A56  8B C3                     MOV EAX,EBX
006A8A58  EB 09                     JMP 0x006a8a63
LAB_006a8a5a:
006A8A5A  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
006A8A5D  3B D0                     CMP EDX,EAX
006A8A5F  7C 02                     JL 0x006a8a63
006A8A61  8B C2                     MOV EAX,EDX
LAB_006a8a63:
006A8A63  8D 55 2C                  LEA EDX,[EBP + 0x2c]
006A8A66  52                        PUSH EDX
006A8A67  8D 55 28                  LEA EDX,[EBP + 0x28]
006A8A6A  52                        PUSH EDX
006A8A6B  8D 55 24                  LEA EDX,[EBP + 0x24]
006A8A6E  52                        PUSH EDX
006A8A6F  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A8A72  50                        PUSH EAX
006A8A73  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8A76  50                        PUSH EAX
006A8A77  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A8A7A  52                        PUSH EDX
006A8A7B  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006A8A7E  50                        PUSH EAX
006A8A7F  51                        PUSH ECX
006A8A80  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006A8A83  51                        PUSH ECX
006A8A84  52                        PUSH EDX
006A8A85  56                        PUSH ESI
006A8A86  57                        PUSH EDI
006A8A87  E8 44 EC FF FF            CALL 0x006a76d0
006A8A8C  85 C0                     TEST EAX,EAX
006A8A8E  75 16                     JNZ 0x006a8aa6
006A8A90  5F                        POP EDI
006A8A91  5E                        POP ESI
006A8A92  5B                        POP EBX
006A8A93  8B E5                     MOV ESP,EBP
006A8A95  5D                        POP EBP
006A8A96  C2 34 00                  RET 0x34
LAB_006a8a99:
006A8A99  75 0E                     JNZ 0x006a8aa9
006A8A9B  5F                        POP EDI
006A8A9C  5E                        POP ESI
006A8A9D  33 C0                     XOR EAX,EAX
006A8A9F  5B                        POP EBX
006A8AA0  8B E5                     MOV ESP,EBP
006A8AA2  5D                        POP EBP
006A8AA3  C2 34 00                  RET 0x34
LAB_006a8aa6:
006A8AA6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
LAB_006a8aa9:
006A8AA9  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A8AAC  8B D6                     MOV EDX,ESI
006A8AAE  0F AF 45 2C               IMUL EAX,dword ptr [EBP + 0x2c]
006A8AB2  0F AF 55 28               IMUL EDX,dword ptr [EBP + 0x28]
006A8AB6  0F AF 75 1C               IMUL ESI,dword ptr [EBP + 0x1c]
006A8ABA  03 C8                     ADD ECX,EAX
006A8ABC  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
006A8ABF  0F AF 45 20               IMUL EAX,dword ptr [EBP + 0x20]
006A8AC3  03 D1                     ADD EDX,ECX
006A8AC5  0F BF 0C 57               MOVSX ECX,word ptr [EDI + EDX*0x2]
006A8AC9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A8ACC  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
006A8ACF  03 D0                     ADD EDX,EAX
006A8AD1  03 F2                     ADD ESI,EDX
006A8AD3  0F BF 04 77               MOVSX EAX,word ptr [EDI + ESI*0x2]
006A8AD7  2B C8                     SUB ECX,EAX
006A8AD9  B8 56 55 55 55            MOV EAX,0x55555556
006A8ADE  83 C1 02                  ADD ECX,0x2
006A8AE1  F7 E9                     IMUL ECX
006A8AE3  8B CA                     MOV ECX,EDX
006A8AE5  C1 E9 1F                  SHR ECX,0x1f
006A8AE8  03 D1                     ADD EDX,ECX
006A8AEA  8B CA                     MOV ECX,EDX
006A8AEC  8B C1                     MOV EAX,ECX
006A8AEE  99                        CDQ
006A8AEF  2B C2                     SUB EAX,EDX
006A8AF1  D1 F8                     SAR EAX,0x1
006A8AF3  8D 74 01 03               LEA ESI,[ECX + EAX*0x1 + 0x3]
006A8AF7  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006A8AFA  8D 34 F6                  LEA ESI,[ESI + ESI*0x8]
006A8AFD  C1 E6 03                  SHL ESI,0x3
006A8B00  56                        PUSH ESI
006A8B01  E8 6A 21 00 00            CALL 0x006aac70
006A8B06  85 C0                     TEST EAX,EAX
006A8B08  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006A8B0B  0F 84 24 06 00 00         JZ 0x006a9135
006A8B11  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006A8B14  8B CE                     MOV ECX,ESI
006A8B16  8B D1                     MOV EDX,ECX
006A8B18  83 C8 FF                  OR EAX,0xffffffff
006A8B1B  8B FB                     MOV EDI,EBX
006A8B1D  C1 E9 02                  SHR ECX,0x2
006A8B20  F3 AB                     STOSD.REP ES:EDI
006A8B22  8B CA                     MOV ECX,EDX
006A8B24  83 E1 03                  AND ECX,0x3
006A8B27  F3 AA                     STOSB.REP ES:EDI
006A8B29  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8B2C  8D 78 FF                  LEA EDI,[EAX + -0x1]
006A8B2F  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
006A8B32  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A8B35  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006A8B38  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
006A8B3B  8D 34 CB                  LEA ESI,[EBX + ECX*0x8]
006A8B3E  66 89 06                  MOV word ptr [ESI],AX
006A8B41  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A8B44  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A8B47  66 89 46 02               MOV word ptr [ESI + 0x2],AX
006A8B4B  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8B4E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A8B51  66 89 46 04               MOV word ptr [ESI + 0x4],AX
006A8B55  33 C0                     XOR EAX,EAX
006A8B57  66 89 46 06               MOV word ptr [ESI + 0x6],AX
006A8B5B  66 C7 46 0E FF 7F         MOV word ptr [ESI + 0xe],0x7fff
006A8B61  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A8B64  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006A8B67  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A8B6A  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006A8B6D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A8B70  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
006A8B73  52                        PUSH EDX
006A8B74  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A8B77  50                        PUSH EAX
006A8B78  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A8B7B  51                        PUSH ECX
006A8B7C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A8B7F  52                        PUSH EDX
006A8B80  50                        PUSH EAX
006A8B81  51                        PUSH ECX
006A8B82  E8 D9 D7 FF FF            CALL 0x006a6360
006A8B87  50                        PUSH EAX
006A8B88  E8 93 D7 FF FF            CALL 0x006a6320
006A8B8D  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A8B90  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A8B93  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006A8B96  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A8B99  3B C2                     CMP EAX,EDX
006A8B9B  0F 85 9D 01 00 00         JNZ 0x006a8d3e
006A8BA1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A8BA4  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
006A8BA7  3B C1                     CMP EAX,ECX
006A8BA9  0F 85 8F 01 00 00         JNZ 0x006a8d3e
006A8BAF  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A8BB2  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A8BB5  3B D0                     CMP EDX,EAX
006A8BB7  0F 85 81 01 00 00         JNZ 0x006a8d3e
006A8BBD  4F                        DEC EDI
006A8BBE  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006A8BC1  8D 14 FF                  LEA EDX,[EDI + EDI*0x8]
006A8BC4  8D 1C D3                  LEA EBX,[EBX + EDX*0x8]
006A8BC7  66 8B 55 18               MOV DX,word ptr [EBP + 0x18]
006A8BCB  66 89 13                  MOV word ptr [EBX],DX
006A8BCE  66 89 4B 02               MOV word ptr [EBX + 0x2],CX
006A8BD2  66 89 43 04               MOV word ptr [EBX + 0x4],AX
006A8BD6  66 8B 45 BC               MOV AX,word ptr [EBP + -0x44]
006A8BDA  66 89 43 06               MOV word ptr [EBX + 0x6],AX
006A8BDE  66 C7 43 0E FF 7F         MOV word ptr [EBX + 0xe],0x7fff
006A8BE4  8B D7                     MOV EDX,EDI
LAB_006a8be6:
006A8BE6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8BE9  85 D2                     TEST EDX,EDX
006A8BEB  7E 22                     JLE 0x006a8c0f
006A8BED  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
006A8BF0  2B C2                     SUB EAX,EDX
006A8BF2  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A8BF5  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
006A8BF8  C1 E1 03                  SHL ECX,0x3
006A8BFB  8D 34 C7                  LEA ESI,[EDI + EAX*0x8]
006A8BFE  8B C1                     MOV EAX,ECX
006A8C00  C1 E9 02                  SHR ECX,0x2
006A8C03  F3 A5                     MOVSD.REP ES:EDI,ESI
006A8C05  8B C8                     MOV ECX,EAX
006A8C07  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8C0A  83 E1 03                  AND ECX,0x3
006A8C0D  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006a8c0f:
006A8C0F  2B C2                     SUB EAX,EDX
006A8C11  48                        DEC EAX
006A8C12  8B F0                     MOV ESI,EAX
006A8C14  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8C17  85 C0                     TEST EAX,EAX
006A8C19  7E 3D                     JLE 0x006a8c58
006A8C1B  83 FE 01                  CMP ESI,0x1
006A8C1E  7E 38                     JLE 0x006a8c58
006A8C20  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006A8C23  8D 0C F6                  LEA ECX,[ESI + ESI*0x8]
006A8C26  8B D8                     MOV EBX,EAX
006A8C28  8D 7C CA BA               LEA EDI,[EDX + ECX*0x8 + -0x46]
LAB_006a8c2c:
006A8C2C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A8C2F  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A8C32  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006A8C35  50                        PUSH EAX
006A8C36  0F BF 47 02               MOVSX EAX,word ptr [EDI + 0x2]
006A8C3A  51                        PUSH ECX
006A8C3B  52                        PUSH EDX
006A8C3C  0F BF 0F                  MOVSX ECX,word ptr [EDI]
006A8C3F  0F BF 57 FE               MOVSX EDX,word ptr [EDI + -0x2]
006A8C43  50                        PUSH EAX
006A8C44  51                        PUSH ECX
006A8C45  52                        PUSH EDX
006A8C46  E8 85 21 00 00            CALL 0x006aadd0
006A8C4B  3B C3                     CMP EAX,EBX
006A8C4D  7F 09                     JG 0x006a8c58
006A8C4F  4E                        DEC ESI
006A8C50  83 EF 48                  SUB EDI,0x48
006A8C53  83 FE 01                  CMP ESI,0x1
006A8C56  7F D4                     JG 0x006a8c2c
LAB_006a8c58:
006A8C58  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006A8C5B  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
006A8C5E  8D 7E 01                  LEA EDI,[ESI + 0x1]
006A8C61  0F BF 14 C1               MOVSX EDX,word ptr [ECX + EAX*0x8]
006A8C65  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
006A8C68  89 55 24                  MOV dword ptr [EBP + 0x24],EDX
006A8C6B  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A8C6E  0F BF 70 02               MOVSX ESI,word ptr [EAX + 0x2]
006A8C72  89 75 28                  MOV dword ptr [EBP + 0x28],ESI
006A8C75  0F BF 48 04               MOVSX ECX,word ptr [EAX + 0x4]
006A8C79  89 4D 2C                  MOV dword ptr [EBP + 0x2c],ECX
006A8C7C  0F BF 58 BC               MOVSX EBX,word ptr [EAX + -0x44]
006A8C80  2B CB                     SUB ECX,EBX
006A8C82  0F BF 58 BA               MOVSX EBX,word ptr [EAX + -0x46]
006A8C86  0F BF 40 B8               MOVSX EAX,word ptr [EAX + -0x48]
006A8C8A  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A8C8D  2B CB                     SUB ECX,EBX
006A8C8F  03 CE                     ADD ECX,ESI
006A8C91  8D 0C 49                  LEA ECX,[ECX + ECX*0x2]
006A8C94  2B C8                     SUB ECX,EAX
006A8C96  A1 6C D5 7E 00            MOV EAX,[0x007ed56c]
006A8C9B  03 CA                     ADD ECX,EDX
006A8C9D  83 3C 88 05               CMP dword ptr [EAX + ECX*0x4],0x5
006A8CA1  7E 2C                     JLE 0x006a8ccf
006A8CA3  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A8CA6  8D 0C FF                  LEA ECX,[EDI + EDI*0x8]
006A8CA9  47                        INC EDI
006A8CAA  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
006A8CAD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006A8CB0  66 89 10                  MOV word ptr [EAX],DX
006A8CB3  66 8B 4D 28               MOV CX,word ptr [EBP + 0x28]
006A8CB7  66 89 48 02               MOV word ptr [EAX + 0x2],CX
006A8CBB  66 8B 55 2C               MOV DX,word ptr [EBP + 0x2c]
006A8CBF  66 89 50 04               MOV word ptr [EAX + 0x4],DX
006A8CC3  66 C7 40 06 00 00         MOV word ptr [EAX + 0x6],0x0
006A8CC9  66 C7 40 0E FF 7F         MOV word ptr [EAX + 0xe],0x7fff
LAB_006a8ccf:
006A8CCF  4F                        DEC EDI
006A8CD0  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
006A8CD7  83 FF 01                  CMP EDI,0x1
006A8CDA  0F 8E 55 04 00 00         JLE 0x006a9135
006A8CE0  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A8CE3  C7 45 D4 09 00 00 00      MOV dword ptr [EBP + -0x2c],0x9
006A8CEA  8D 58 4C                  LEA EBX,[EAX + 0x4c]
006A8CED  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
LAB_006a8cf0:
006A8CF0  0F BF 4B FC               MOVSX ECX,word ptr [EBX + -0x4]
006A8CF4  0F BF 43 B4               MOVSX EAX,word ptr [EBX + -0x4c]
006A8CF8  0F BF 53 FE               MOVSX EDX,word ptr [EBX + -0x2]
006A8CFC  0F BF 33                  MOVSX ESI,word ptr [EBX]
006A8CFF  0F BF 7B B8               MOVSX EDI,word ptr [EBX + -0x48]
006A8D03  3B C1                     CMP EAX,ECX
006A8D05  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
006A8D08  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
006A8D0B  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
006A8D0E  0F 85 12 02 00 00         JNZ 0x006a8f26
006A8D14  0F BF 43 B6               MOVSX EAX,word ptr [EBX + -0x4a]
006A8D18  3B C2                     CMP EAX,EDX
006A8D1A  0F 85 06 02 00 00         JNZ 0x006a8f26
006A8D20  3B FE                     CMP EDI,ESI
006A8D22  0F 85 FE 01 00 00         JNZ 0x006a8f26
006A8D28  83 7D D4 12               CMP dword ptr [EBP + -0x2c],0x12
006A8D2C  0F 8C F4 01 00 00         JL 0x006a8f26
006A8D32  0F BF 83 72 FF FF FF      MOVSX EAX,word ptr [EBX + 0xffffff72]
006A8D39  E9 EC 01 00 00            JMP 0x006a8f2a
LAB_006a8d3e:
006A8D3E  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006A8D41  8B DE                     MOV EBX,ESI
006A8D43  83 E7 04                  AND EDI,0x4
006A8D46  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
006A8D49  89 7D B4                  MOV dword ptr [EBP + -0x4c],EDI
LAB_006a8d4c:
006A8D4C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A8D4F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A8D52  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
006A8D55  51                        PUSH ECX
006A8D56  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006A8D59  52                        PUSH EDX
006A8D5A  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A8D5D  50                        PUSH EAX
006A8D5E  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A8D61  51                        PUSH ECX
006A8D62  BE 30 75 00 00            MOV ESI,0x7530
006A8D67  52                        PUSH EDX
006A8D68  50                        PUSH EAX
006A8D69  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006A8D6C  E8 EF D5 FF FF            CALL 0x006a6360
006A8D71  50                        PUSH EAX
006A8D72  E8 A9 D5 FF FF            CALL 0x006a6320
006A8D77  85 FF                     TEST EDI,EDI
006A8D79  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006A8D7C  74 03                     JZ 0x006a8d81
006A8D7E  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
LAB_006a8d81:
006A8D81  B9 72 D5 7E 00            MOV ECX,0x7ed572
006A8D86  C7 45 DC 00 00 00 00      MOV dword ptr [EBP + -0x24],0x0
006A8D8D  C7 45 CC 40 D6 7E 00      MOV dword ptr [EBP + -0x34],0x7ed640
006A8D94  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
LAB_006a8d97:
006A8D97  0F BF 79 FE               MOVSX EDI,word ptr [ECX + -0x2]
006A8D9B  03 7D EC                  ADD EDI,dword ptr [EBP + -0x14]
006A8D9E  0F 88 8F 00 00 00         JS 0x006a8e33
006A8DA4  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
006A8DA7  0F 8D 86 00 00 00         JGE 0x006a8e33
006A8DAD  0F BF 01                  MOVSX EAX,word ptr [ECX]
006A8DB0  03 45 F0                  ADD EAX,dword ptr [EBP + -0x10]
006A8DB3  78 7E                     JS 0x006a8e33
006A8DB5  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
006A8DB8  7D 79                     JGE 0x006a8e33
006A8DBA  0F BF 51 02               MOVSX EDX,word ptr [ECX + 0x2]
006A8DBE  03 55 F4                  ADD EDX,dword ptr [EBP + -0xc]
006A8DC1  78 70                     JS 0x006a8e33
006A8DC3  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006A8DC6  7D 6B                     JGE 0x006a8e33
006A8DC8  8B CA                     MOV ECX,EDX
006A8DCA  8B F0                     MOV ESI,EAX
006A8DCC  0F AF 4D D0               IMUL ECX,dword ptr [EBP + -0x30]
006A8DD0  0F AF 75 0C               IMUL ESI,dword ptr [EBP + 0xc]
006A8DD4  8B DF                     MOV EBX,EDI
006A8DD6  03 D9                     ADD EBX,ECX
006A8DD8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006A8DDB  03 F3                     ADD ESI,EBX
006A8DDD  0F BF 0C 71               MOVSX ECX,word ptr [ECX + ESI*0x2]
006A8DE1  3B 7D 18                  CMP EDI,dword ptr [EBP + 0x18]
006A8DE4  75 0A                     JNZ 0x006a8df0
006A8DE6  3B 45 1C                  CMP EAX,dword ptr [EBP + 0x1c]
006A8DE9  75 05                     JNZ 0x006a8df0
006A8DEB  3B 55 20                  CMP EDX,dword ptr [EBP + 0x20]
006A8DEE  74 69                     JZ 0x006a8e59
LAB_006a8df0:
006A8DF0  85 C9                     TEST ECX,ECX
006A8DF2  7E 39                     JLE 0x006a8e2d
006A8DF4  8B 75 CC                  MOV ESI,dword ptr [EBP + -0x34]
006A8DF7  8B 1E                     MOV EBX,dword ptr [ESI]
006A8DF9  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
006A8DFC  03 CB                     ADD ECX,EBX
006A8DFE  3B CE                     CMP ECX,ESI
006A8E00  7C 15                     JL 0x006a8e17
006A8E02  75 2C                     JNZ 0x006a8e30
006A8E04  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
006A8E07  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
006A8E0A  0F BF 76 04               MOVSX ESI,word ptr [ESI + 0x4]
006A8E0E  3B F3                     CMP ESI,EBX
006A8E10  74 05                     JZ 0x006a8e17
006A8E12  3B 75 B8                  CMP ESI,dword ptr [EBP + -0x48]
006A8E15  75 16                     JNZ 0x006a8e2d
LAB_006a8e17:
006A8E17  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006A8E1A  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A8E1D  8B F1                     MOV ESI,ECX
006A8E1F  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006A8E22  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006A8E25  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A8E28  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
006A8E2B  EB 03                     JMP 0x006a8e30
LAB_006a8e2d:
006A8E2D  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
LAB_006a8e30:
006A8E30  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
LAB_006a8e33:
006A8E33  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006A8E36  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
006A8E39  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A8E3C  83 C0 04                  ADD EAX,0x4
006A8E3F  42                        INC EDX
006A8E40  83 C1 08                  ADD ECX,0x8
006A8E43  3D A8 D6 7E 00            CMP EAX,0x7ed6a8
006A8E48  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006A8E4B  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006A8E4E  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A8E51  0F 8C 40 FF FF FF         JL 0x006a8d97
006A8E57  EB 1B                     JMP 0x006a8e74
LAB_006a8e59:
006A8E59  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
006A8E5C  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006A8E5F  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006A8E62  89 7D C4                  MOV dword ptr [EBP + -0x3c],EDI
006A8E65  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
006A8E68  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
006A8E6B  8B 34 85 40 D6 7E 00      MOV ESI,dword ptr [EAX*0x4 + 0x7ed640]
006A8E72  03 F1                     ADD ESI,ECX
LAB_006a8e74:
006A8E74  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A8E77  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A8E7A  0F BF 04 C5 76 D5 7E 00   MOVSX EAX,word ptr [EAX*0x8 + 0x7ed576]
006A8E82  3B C1                     CMP EAX,ECX
006A8E84  74 30                     JZ 0x006a8eb6
006A8E86  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A8E89  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A8E8C  49                        DEC ECX
006A8E8D  3B D1                     CMP EDX,ECX
006A8E8F  74 28                     JZ 0x006a8eb9
006A8E91  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
006A8E95  4A                        DEC EDX
006A8E96  83 EB 48                  SUB EBX,0x48
006A8E99  66 89 0B                  MOV word ptr [EBX],CX
006A8E9C  66 8B 4D F0               MOV CX,word ptr [EBP + -0x10]
006A8EA0  66 89 4B 02               MOV word ptr [EBX + 0x2],CX
006A8EA4  66 8B 4D F4               MOV CX,word ptr [EBP + -0xc]
006A8EA8  66 89 4B 04               MOV word ptr [EBX + 0x4],CX
006A8EAC  66 8B 4B 4E               MOV CX,word ptr [EBX + 0x4e]
006A8EB0  66 89 4B 06               MOV word ptr [EBX + 0x6],CX
006A8EB4  EB 03                     JMP 0x006a8eb9
LAB_006a8eb6:
006A8EB6  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
LAB_006a8eb9:
006A8EB9  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
006A8EBC  66 8B 7D E4               MOV DI,word ptr [EBP + -0x1c]
006A8EC0  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A8EC3  8B 45 C4                  MOV EAX,dword ptr [EBP + -0x3c]
006A8EC6  83 EB 48                  SUB EBX,0x48
006A8EC9  4A                        DEC EDX
006A8ECA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006A8ECD  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
006A8ED0  66 89 03                  MOV word ptr [EBX],AX
006A8ED3  66 89 4B 02               MOV word ptr [EBX + 0x2],CX
006A8ED7  66 89 7B 04               MOV word ptr [EBX + 0x4],DI
006A8EDB  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
006A8EDE  66 8B 3C BD 40 D6 7E 00   MOV DI,word ptr [EDI*0x4 + 0x7ed640]
006A8EE6  66 2B FE                  SUB DI,SI
006A8EE9  8B 75 BC                  MOV ESI,dword ptr [EBP + -0x44]
006A8EEC  03 FE                     ADD EDI,ESI
006A8EEE  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006A8EF1  66 89 7B 06               MOV word ptr [EBX + 0x6],DI
006A8EF5  3B C6                     CMP EAX,ESI
006A8EF7  66 C7 43 0E FF 7F         MOV word ptr [EBX + 0xe],0x7fff
006A8EFD  75 13                     JNZ 0x006a8f12
006A8EFF  3B 4D 1C                  CMP ECX,dword ptr [EBP + 0x1c]
006A8F02  75 0E                     JNZ 0x006a8f12
006A8F04  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
006A8F07  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006A8F0A  3B F7                     CMP ESI,EDI
006A8F0C  0F 84 D4 FC FF FF         JZ 0x006a8be6
LAB_006a8f12:
006A8F12  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A8F15  8B 7D B4                  MOV EDI,dword ptr [EBP + -0x4c]
006A8F18  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006A8F1B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006A8F1E  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A8F21  E9 26 FE FF FF            JMP 0x006a8d4c
LAB_006a8f26:
006A8F26  0F BF 43 BA               MOVSX EAX,word ptr [EBX + -0x46]
LAB_006a8f2a:
006A8F2A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A8F2D  0F BF 43 44               MOVSX EAX,word ptr [EBX + 0x44]
006A8F31  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006A8F34  0F BF 43 46               MOVSX EAX,word ptr [EBX + 0x46]
006A8F38  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A8F3B  0F BF 43 48               MOVSX EAX,word ptr [EBX + 0x48]
006A8F3F  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006A8F42  0F BF 43 4A               MOVSX EAX,word ptr [EBX + 0x4a]
006A8F46  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006A8F49  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A8F4C  3B C1                     CMP EAX,ECX
006A8F4E  75 3D                     JNZ 0x006a8f8d
006A8F50  39 55 1C                  CMP dword ptr [EBP + 0x1c],EDX
006A8F53  75 38                     JNZ 0x006a8f8d
006A8F55  39 75 30                  CMP dword ptr [EBP + 0x30],ESI
006A8F58  75 33                     JNZ 0x006a8f8d
006A8F5A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A8F5D  83 C0 FE                  ADD EAX,-0x2
006A8F60  39 45 F8                  CMP dword ptr [EBP + -0x8],EAX
006A8F63  7D 28                     JGE 0x006a8f8d
006A8F65  0F BF 83 8C 00 00 00      MOVSX EAX,word ptr [EBX + 0x8c]
006A8F6C  89 45 20                  MOV dword ptr [EBP + 0x20],EAX
006A8F6F  0F BF 83 8E 00 00 00      MOVSX EAX,word ptr [EBX + 0x8e]
006A8F76  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
006A8F79  0F BF 83 90 00 00 00      MOVSX EAX,word ptr [EBX + 0x90]
006A8F80  89 45 30                  MOV dword ptr [EBP + 0x30],EAX
006A8F83  0F BF 83 92 00 00 00      MOVSX EAX,word ptr [EBX + 0x92]
006A8F8A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
LAB_006a8f8d:
006A8F8D  8B C6                     MOV EAX,ESI
006A8F8F  2B C7                     SUB EAX,EDI
006A8F91  0F BF 7B B6               MOVSX EDI,word ptr [EBX + -0x4a]
006A8F95  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8F98  2B C7                     SUB EAX,EDI
006A8F9A  03 C2                     ADD EAX,EDX
006A8F9C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8F9F  8B F8                     MOV EDI,EAX
006A8FA1  0F BF 43 B4               MOVSX EAX,word ptr [EBX + -0x4c]
006A8FA5  2B F8                     SUB EDI,EAX
006A8FA7  03 F9                     ADD EDI,ECX
006A8FA9  8B C7                     MOV EAX,EDI
006A8FAB  8B 3D 6C D5 7E 00         MOV EDI,dword ptr [0x007ed56c]
006A8FB1  8B 04 87                  MOV EAX,dword ptr [EDI + EAX*0x4]
006A8FB4  83 F8 1A                  CMP EAX,0x1a
006A8FB7  7C 1C                     JL 0x006a8fd5
006A8FB9  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A8FBC  2B C6                     SUB EAX,ESI
006A8FBE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8FC1  2B C2                     SUB EAX,EDX
006A8FC3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A8FC6  03 C2                     ADD EAX,EDX
006A8FC8  8D 14 40                  LEA EDX,[EAX + EAX*0x2]
006A8FCB  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A8FCE  2B D1                     SUB EDX,ECX
006A8FD0  03 D0                     ADD EDX,EAX
006A8FD2  8B 04 97                  MOV EAX,dword ptr [EDI + EDX*0x4]
LAB_006a8fd5:
006A8FD5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A8FD8  C7 45 C0 01 00 00 00      MOV dword ptr [EBP + -0x40],0x1
006A8FDF  C1 E0 05                  SHL EAX,0x5
006A8FE2  05 40 CB 7E 00            ADD EAX,0x7ecb40
006A8FE7  C7 45 C8 00 00 00 00      MOV dword ptr [EBP + -0x38],0x0
006A8FEE  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006A8FF1  EB 03                     JMP 0x006a8ff6
LAB_006a8ff3:
006A8FF3  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
LAB_006a8ff6:
006A8FF6  8B 38                     MOV EDI,dword ptr [EAX]
006A8FF8  83 FF FE                  CMP EDI,-0x2
006A8FFB  0F 84 10 01 00 00         JZ 0x006a9111
006A9001  03 F9                     ADD EDI,ECX
006A9003  85 FF                     TEST EDI,EDI
006A9005  0F 8C F0 00 00 00         JL 0x006a90fb
006A900B  3B 7D 0C                  CMP EDI,dword ptr [EBP + 0xc]
006A900E  0F 8D E7 00 00 00         JGE 0x006a90fb
006A9014  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
006A9017  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A901A  03 F1                     ADD ESI,ECX
006A901C  0F 88 D9 00 00 00         JS 0x006a90fb
006A9022  3B 75 10                  CMP ESI,dword ptr [EBP + 0x10]
006A9025  0F 8D D0 00 00 00         JGE 0x006a90fb
006A902B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006A902E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A9031  03 D1                     ADD EDX,ECX
006A9033  0F 88 C2 00 00 00         JS 0x006a90fb
006A9039  3B 55 14                  CMP EDX,dword ptr [EBP + 0x14]
006A903C  0F 8D B9 00 00 00         JGE 0x006a90fb
006A9042  8B C2                     MOV EAX,EDX
006A9044  8B CE                     MOV ECX,ESI
006A9046  0F AF 45 D0               IMUL EAX,dword ptr [EBP + -0x30]
006A904A  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A904E  8B DF                     MOV EBX,EDI
006A9050  03 D8                     ADD EBX,EAX
006A9052  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A9055  03 CB                     ADD ECX,EBX
006A9057  66 83 3C 48 00            CMP word ptr [EAX + ECX*0x2],0x0
006A905C  0F 8C 93 00 00 00         JL 0x006a90f5
006A9062  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006A9065  2B DF                     SUB EBX,EDI
006A9067  83 FB FF                  CMP EBX,-0x1
006A906A  0F 8C D9 00 00 00         JL 0x006a9149
006A9070  83 FB 01                  CMP EBX,0x1
006A9073  0F 8F D0 00 00 00         JG 0x006a9149
006A9079  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A907C  2B CE                     SUB ECX,ESI
006A907E  83 F9 FF                  CMP ECX,-0x1
006A9081  0F 8C C2 00 00 00         JL 0x006a9149
006A9087  83 F9 01                  CMP ECX,0x1
006A908A  0F 8F B9 00 00 00         JG 0x006a9149
006A9090  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006A9093  2B C2                     SUB EAX,EDX
006A9095  83 F8 FF                  CMP EAX,-0x1
006A9098  0F 8C AB 00 00 00         JL 0x006a9149
006A909E  83 F8 01                  CMP EAX,0x1
006A90A1  0F 8F A2 00 00 00         JG 0x006a9149
006A90A7  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
006A90AA  03 C1                     ADD EAX,ECX
006A90AC  8D 0C 43                  LEA ECX,[EBX + EAX*0x2]
006A90AF  8B 5D BC                  MOV EBX,dword ptr [EBP + -0x44]
006A90B2  03 C1                     ADD EAX,ECX
006A90B4  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006A90BA  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
006A90BD  8B C3                     MOV EAX,EBX
006A90BF  83 F9 1A                  CMP ECX,0x1a
006A90C2  7D 09                     JGE 0x006a90cd
006A90C4  8B 04 8D 40 D6 7E 00      MOV EAX,dword ptr [ECX*0x4 + 0x7ed640]
006A90CB  03 C3                     ADD EAX,EBX
LAB_006a90cd:
006A90CD  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006a90d0:
006A90D0  3B 45 C4                  CMP EAX,dword ptr [EBP + -0x3c]
006A90D3  7D 23                     JGE 0x006a90f8
006A90D5  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006A90D8  8B 5D C0                  MOV EBX,dword ptr [EBP + -0x40]
006A90DB  03 CB                     ADD ECX,EBX
006A90DD  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
006A90E0  8D 0C CB                  LEA ECX,[EBX + ECX*0x8]
006A90E3  66 89 39                  MOV word ptr [ECX],DI
006A90E6  66 89 71 02               MOV word ptr [ECX + 0x2],SI
006A90EA  66 89 51 04               MOV word ptr [ECX + 0x4],DX
006A90EE  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006A90F2  FF 45 C0                  INC dword ptr [EBP + -0x40]
LAB_006a90f5:
006A90F5  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_006a90f8:
006A90F8  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
LAB_006a90fb:
006A90FB  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
006A90FE  83 C0 0C                  ADD EAX,0xc
006A9101  41                        INC ECX
006A9102  89 45 38                  MOV dword ptr [EBP + 0x38],EAX
006A9105  83 F9 08                  CMP ECX,0x8
006A9108  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006A910B  0F 8C E2 FE FF FF         JL 0x006a8ff3
LAB_006a9111:
006A9111  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A9114  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A9117  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
006A911A  41                        INC ECX
006A911B  8D 42 FF                  LEA EAX,[EDX + -0x1]
006A911E  83 C3 48                  ADD EBX,0x48
006A9121  83 C6 09                  ADD ESI,0x9
006A9124  3B C8                     CMP ECX,EAX
006A9126  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A9129  89 5D 18                  MOV dword ptr [EBP + 0x18],EBX
006A912C  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
006A912F  0F 8C BB FB FF FF         JL 0x006a8cf0
LAB_006a9135:
006A9135  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006A9138  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A913B  5F                        POP EDI
006A913C  5E                        POP ESI
006A913D  89 01                     MOV dword ptr [ECX],EAX
006A913F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A9142  5B                        POP EBX
006A9143  8B E5                     MOV ESP,EBP
006A9145  5D                        POP EBP
006A9146  C2 34 00                  RET 0x34
LAB_006a9149:
006A9149  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A914C  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006A914F  2B C2                     SUB EAX,EDX
006A9151  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
006A9154  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A9157  2B C6                     SUB EAX,ESI
006A9159  03 C1                     ADD EAX,ECX
006A915B  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A915E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006A9161  2B C7                     SUB EAX,EDI
006A9163  03 C1                     ADD EAX,ECX
006A9165  8B 0D 6C D5 7E 00         MOV ECX,dword ptr [0x007ed56c]
006A916B  8B 0C 81                  MOV ECX,dword ptr [ECX + EAX*0x4]
006A916E  0F BF 43 02               MOVSX EAX,word ptr [EBX + 0x2]
006A9172  83 F9 1A                  CMP ECX,0x1a
006A9175  0F 8D 55 FF FF FF         JGE 0x006a90d0
006A917B  03 04 8D 40 D6 7E 00      ADD EAX,dword ptr [ECX*0x4 + 0x7ed640]
006A9182  E9 49 FF FF FF            JMP 0x006a90d0
