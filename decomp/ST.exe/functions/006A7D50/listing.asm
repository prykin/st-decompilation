FUN_006a7d50:
006A7D50  55                        PUSH EBP
006A7D51  8B EC                     MOV EBP,ESP
006A7D53  83 EC 54                  SUB ESP,0x54
006A7D56  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A7D59  53                        PUSH EBX
006A7D5A  8B D9                     MOV EBX,ECX
006A7D5C  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A7D5F  0F AF 5D 10               IMUL EBX,dword ptr [EBP + 0x10]
006A7D63  0F AF 4D 28               IMUL ECX,dword ptr [EBP + 0x28]
006A7D67  8B D3                     MOV EDX,EBX
006A7D69  56                        PUSH ESI
006A7D6A  0F AF D0                  IMUL EDX,EAX
006A7D6D  57                        PUSH EDI
006A7D6E  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006A7D71  8B F7                     MOV ESI,EDI
006A7D73  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006A7D76  03 F2                     ADD ESI,EDX
006A7D78  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A7D7B  03 CE                     ADD ECX,ESI
006A7D7D  50                        PUSH EAX
006A7D7E  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
006A7D81  0F BF 0C 4A               MOVSX ECX,word ptr [EDX + ECX*0x2]
006A7D85  8B 55 34                  MOV EDX,dword ptr [EBP + 0x34]
006A7D88  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
006A7D8B  8D 4A FF                  LEA ECX,[EDX + -0x1]
006A7D8E  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
006A7D91  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A7D94  8D 0C C9                  LEA ECX,[ECX + ECX*0x8]
006A7D97  8D 34 CA                  LEA ESI,[EDX + ECX*0x8]
006A7D9A  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A7D9D  33 D2                     XOR EDX,EDX
006A7D9F  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006A7DA2  66 89 3E                  MOV word ptr [ESI],DI
006A7DA5  66 89 4E 02               MOV word ptr [ESI + 0x2],CX
006A7DA9  66 89 46 04               MOV word ptr [ESI + 0x4],AX
006A7DAD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A7DB0  51                        PUSH ECX
006A7DB1  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A7DB4  66 89 56 06               MOV word ptr [ESI + 0x6],DX
006A7DB8  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006A7DBB  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A7DBE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006A7DC1  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7DC4  57                        PUSH EDI
006A7DC5  50                        PUSH EAX
006A7DC6  51                        PUSH ECX
006A7DC7  52                        PUSH EDX
006A7DC8  66 C7 46 0E FF 7F         MOV word ptr [ESI + 0xe],0x7fff
006A7DCE  E8 8D E5 FF FF            CALL 0x006a6360
006A7DD3  50                        PUSH EAX
006A7DD4  E8 47 E5 FF FF            CALL 0x006a6320
006A7DD9  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006A7DDC  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A7DDF  3B F9                     CMP EDI,ECX
006A7DE1  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A7DE4  75 4A                     JNZ 0x006a7e30
006A7DE6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006A7DE9  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006A7DEC  3B D0                     CMP EDX,EAX
006A7DEE  75 40                     JNZ 0x006a7e30
006A7DF0  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006A7DF3  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006A7DF6  3B C2                     CMP EAX,EDX
006A7DF8  75 36                     JNZ 0x006a7e30
006A7DFA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A7DFD  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
006A7E00  4A                        DEC EDX
006A7E01  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006A7E04  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
006A7E07  8D 04 C7                  LEA EAX,[EDI + EAX*0x8]
006A7E0A  66 89 08                  MOV word ptr [EAX],CX
006A7E0D  66 8B 4D 1C               MOV CX,word ptr [EBP + 0x1c]
006A7E11  66 89 48 02               MOV word ptr [EAX + 0x2],CX
006A7E15  66 8B 4D 20               MOV CX,word ptr [EBP + 0x20]
006A7E19  66 89 48 04               MOV word ptr [EAX + 0x4],CX
006A7E1D  66 8B 4D B0               MOV CX,word ptr [EBP + -0x50]
006A7E21  66 89 48 06               MOV word ptr [EAX + 0x6],CX
006A7E25  66 C7 40 0E FF 7F         MOV word ptr [EAX + 0xe],0x7fff
006A7E2B  E9 04 04 00 00            JMP 0x006a8234
LAB_006a7e30:
006A7E30  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A7E33  89 75 DC                  MOV dword ptr [EBP + -0x24],ESI
006A7E36  83 E0 04                  AND EAX,0x4
006A7E39  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
LAB_006a7e3c:
006A7E3C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A7E3F  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A7E42  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A7E46  0F AF D3                  IMUL EDX,EBX
006A7E49  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A7E4C  C7 45 38 30 75 00 00      MOV dword ptr [EBP + 0x38],0x7530
006A7E53  8B F0                     MOV ESI,EAX
006A7E55  03 F2                     ADD ESI,EDX
006A7E57  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A7E5A  03 CE                     ADD ECX,ESI
006A7E5C  8D 34 4A                  LEA ESI,[EDX + ECX*0x2]
006A7E5F  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
006A7E62  85 C9                     TEST ECX,ECX
006A7E64  74 38                     JZ 0x006a7e9e
006A7E66  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006A7E69  8D 4D B8                  LEA ECX,[EBP + -0x48]
006A7E6C  51                        PUSH ECX
006A7E6D  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006A7E70  52                        PUSH EDX
006A7E71  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006A7E74  51                        PUSH ECX
006A7E75  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
006A7E78  57                        PUSH EDI
006A7E79  52                        PUSH EDX
006A7E7A  51                        PUSH ECX
006A7E7B  50                        PUSH EAX
006A7E7C  E8 7F E2 FF FF            CALL 0x006a6100
006A7E81  83 F8 1A                  CMP EAX,0x1a
006A7E84  7C 08                     JL 0x006a7e8e
006A7E86  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006A7E89  89 55 D0                  MOV dword ptr [EBP + -0x30],EDX
006A7E8C  EB 33                     JMP 0x006a7ec1
LAB_006a7e8e:
006A7E8E  0F BF 04 C5 76 D5 7E 00   MOVSX EAX,word ptr [EAX*0x8 + 0x7ed576]
006A7E96  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
006A7E99  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A7E9C  EB 23                     JMP 0x006a7ec1
LAB_006a7e9e:
006A7E9E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
006A7EA1  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A7EA4  51                        PUSH ECX
006A7EA5  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006A7EA8  52                        PUSH EDX
006A7EA9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A7EAC  50                        PUSH EAX
006A7EAD  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A7EB0  50                        PUSH EAX
006A7EB1  51                        PUSH ECX
006A7EB2  52                        PUSH EDX
006A7EB3  E8 A8 E4 FF FF            CALL 0x006a6360
006A7EB8  50                        PUSH EAX
006A7EB9  E8 62 E4 FF FF            CALL 0x006a6320
006A7EBE  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
LAB_006a7ec1:
006A7EC1  B9 76 D5 7E 00            MOV ECX,0x7ed576
006A7EC6  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
006A7ECD  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006A7ED0  C7 45 C8 40 D6 7E 00      MOV dword ptr [EBP + -0x38],0x7ed640
LAB_006a7ed7:
006A7ED7  0F BF 79 FA               MOVSX EDI,word ptr [ECX + -0x6]
006A7EDB  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006A7EDE  03 C7                     ADD EAX,EDI
006A7EE0  85 C0                     TEST EAX,EAX
006A7EE2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006A7EE5  0F 8C 41 02 00 00         JL 0x006a812c
006A7EEB  3B 45 0C                  CMP EAX,dword ptr [EBP + 0xc]
006A7EEE  0F 8D 38 02 00 00         JGE 0x006a812c
006A7EF4  0F BF 49 FC               MOVSX ECX,word ptr [ECX + -0x4]
006A7EF8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006A7EFB  8D 04 11                  LEA EAX,[ECX + EDX*0x1]
006A7EFE  85 C0                     TEST EAX,EAX
006A7F00  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
006A7F03  0F 8C 23 02 00 00         JL 0x006a812c
006A7F09  3B 45 10                  CMP EAX,dword ptr [EBP + 0x10]
006A7F0C  0F 8D 1A 02 00 00         JGE 0x006a812c
006A7F12  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A7F15  0F BF 50 FE               MOVSX EDX,word ptr [EAX + -0x2]
006A7F19  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006A7F1C  03 C2                     ADD EAX,EDX
006A7F1E  85 C0                     TEST EAX,EAX
006A7F20  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
006A7F23  0F 8C 03 02 00 00         JL 0x006a812c
006A7F29  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006A7F2C  39 45 BC                  CMP dword ptr [EBP + -0x44],EAX
006A7F2F  0F 8D F7 01 00 00         JGE 0x006a812c
006A7F35  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
006A7F38  66 8B 00                  MOV AX,word ptr [EAX]
006A7F3B  A8 01                     TEST AL,0x1
006A7F3D  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006A7F40  0F 84 11 01 00 00         JZ 0x006a8057
006A7F46  66 8B 14 7E               MOV DX,word ptr [ESI + EDI*0x2]
006A7F4A  81 E2 00 C0 00 00         AND EDX,0xc000
006A7F50  81 FA 00 C0 00 00         CMP EDX,0xc000
006A7F56  0F 84 D0 01 00 00         JZ 0x006a812c
006A7F5C  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A7F60  66 8B 14 4E               MOV DX,word ptr [ESI + ECX*0x2]
006A7F64  81 E2 00 C0 00 00         AND EDX,0xc000
006A7F6A  81 FA 00 C0 00 00         CMP EDX,0xc000
006A7F70  0F 84 B6 01 00 00         JZ 0x006a812c
006A7F76  8B D0                     MOV EDX,EAX
006A7F78  81 E2 00 40 00 00         AND EDX,0x4000
006A7F7E  66 85 D2                  TEST DX,DX
006A7F81  74 67                     JZ 0x006a7fea
006A7F83  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
006A7F86  8B D6                     MOV EDX,ESI
006A7F88  2B D0                     SUB EDX,EAX
006A7F8A  66 8B 02                  MOV AX,word ptr [EDX]
006A7F8D  25 00 C0 00 00            AND EAX,0xc000
006A7F92  3D 00 C0 00 00            CMP EAX,0xc000
006A7F97  0F 84 8F 01 00 00         JZ 0x006a812c
006A7F9D  8B D7                     MOV EDX,EDI
006A7F9F  2B D3                     SUB EDX,EBX
006A7FA1  66 8B 04 56               MOV AX,word ptr [ESI + EDX*0x2]
006A7FA5  25 00 C0 00 00            AND EAX,0xc000
006A7FAA  3D 00 C0 00 00            CMP EAX,0xc000
006A7FAF  0F 84 77 01 00 00         JZ 0x006a812c
006A7FB5  8B D1                     MOV EDX,ECX
006A7FB7  2B D3                     SUB EDX,EBX
006A7FB9  66 8B 04 56               MOV AX,word ptr [ESI + EDX*0x2]
006A7FBD  25 00 C0 00 00            AND EAX,0xc000
006A7FC2  3D 00 C0 00 00            CMP EAX,0xc000
006A7FC7  0F 84 5F 01 00 00         JZ 0x006a812c
006A7FCD  03 CF                     ADD ECX,EDI
006A7FCF  66 8B 0C 4E               MOV CX,word ptr [ESI + ECX*0x2]
006A7FD3  81 E1 00 C0 00 00         AND ECX,0xc000
006A7FD9  81 F9 00 C0 00 00         CMP ECX,0xc000
006A7FDF  0F 85 D1 00 00 00         JNZ 0x006a80b6
006A7FE5  E9 42 01 00 00            JMP 0x006a812c
LAB_006a7fea:
006A7FEA  25 00 20 00 00            AND EAX,0x2000
006A7FEF  66 85 C0                  TEST AX,AX
006A7FF2  0F 84 BE 00 00 00         JZ 0x006a80b6
006A7FF8  66 8B 14 5E               MOV DX,word ptr [ESI + EBX*0x2]
006A7FFC  81 E2 00 C0 00 00         AND EDX,0xc000
006A8002  81 FA 00 C0 00 00         CMP EDX,0xc000
006A8008  0F 84 1E 01 00 00         JZ 0x006a812c
006A800E  8D 04 1F                  LEA EAX,[EDI + EBX*0x1]
006A8011  66 8B 14 46               MOV DX,word ptr [ESI + EAX*0x2]
006A8015  81 E2 00 C0 00 00         AND EDX,0xc000
006A801B  81 FA 00 C0 00 00         CMP EDX,0xc000
006A8021  0F 84 05 01 00 00         JZ 0x006a812c
006A8027  8D 04 19                  LEA EAX,[ECX + EBX*0x1]
006A802A  66 8B 14 46               MOV DX,word ptr [ESI + EAX*0x2]
006A802E  81 E2 00 C0 00 00         AND EDX,0xc000
006A8034  81 FA 00 C0 00 00         CMP EDX,0xc000
006A803A  0F 84 EC 00 00 00         JZ 0x006a812c
006A8040  03 CF                     ADD ECX,EDI
006A8042  66 8B 04 4E               MOV AX,word ptr [ESI + ECX*0x2]
006A8046  25 00 C0 00 00            AND EAX,0xc000
006A804B  3D 00 C0 00 00            CMP EAX,0xc000
006A8050  75 64                     JNZ 0x006a80b6
006A8052  E9 D5 00 00 00            JMP 0x006a812c
LAB_006a8057:
006A8057  25 00 60 00 00            AND EAX,0x6000
006A805C  66 85 C0                  TEST AX,AX
006A805F  74 55                     JZ 0x006a80b6
006A8061  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
006A8064  80 E4 9F                  AND AH,0x9f
006A8067  66 3D FE 0F               CMP AX,0xffe
006A806B  74 49                     JZ 0x006a80b6
006A806D  0F AF D3                  IMUL EDX,EBX
006A8070  66 8B 14 56               MOV DX,word ptr [ESI + EDX*0x2]
006A8074  81 E2 00 C0 00 00         AND EDX,0xc000
006A807A  81 FA 00 C0 00 00         CMP EDX,0xc000
006A8080  0F 84 A6 00 00 00         JZ 0x006a812c
006A8086  85 C9                     TEST ECX,ECX
006A8088  75 16                     JNZ 0x006a80a0
006A808A  66 8B 04 7E               MOV AX,word ptr [ESI + EDI*0x2]
006A808E  25 00 C0 00 00            AND EAX,0xc000
006A8093  3D 00 C0 00 00            CMP EAX,0xc000
006A8098  0F 84 8E 00 00 00         JZ 0x006a812c
006A809E  EB 16                     JMP 0x006a80b6
LAB_006a80a0:
006A80A0  0F AF 4D 0C               IMUL ECX,dword ptr [EBP + 0xc]
006A80A4  66 8B 0C 4E               MOV CX,word ptr [ESI + ECX*0x2]
006A80A8  81 E1 00 C0 00 00         AND ECX,0xc000
006A80AE  81 F9 00 C0 00 00         CMP ECX,0xc000
006A80B4  74 76                     JZ 0x006a812c
LAB_006a80b6:
006A80B6  8B 7D BC                  MOV EDI,dword ptr [EBP + -0x44]
006A80B9  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006A80BC  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
006A80C0  8B D7                     MOV EDX,EDI
006A80C2  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
006A80C5  0F AF D3                  IMUL EDX,EBX
006A80C8  03 CA                     ADD ECX,EDX
006A80CA  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A80CD  03 C1                     ADD EAX,ECX
006A80CF  0F BF 0C 42               MOVSX ECX,word ptr [EDX + EAX*0x2]
006A80D3  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A80D6  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006A80D9  3B C2                     CMP EAX,EDX
006A80DB  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A80DE  75 0F                     JNZ 0x006a80ef
006A80E0  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
006A80E3  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006A80E6  3B C2                     CMP EAX,EDX
006A80E8  75 05                     JNZ 0x006a80ef
006A80EA  3B 7D 20                  CMP EDI,dword ptr [EBP + 0x20]
006A80ED  74 6C                     JZ 0x006a815b
LAB_006a80ef:
006A80EF  85 C9                     TEST ECX,ECX
006A80F1  7E 39                     JLE 0x006a812c
006A80F3  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
006A80F6  8B 02                     MOV EAX,dword ptr [EDX]
006A80F8  03 C8                     ADD ECX,EAX
006A80FA  8B 45 38                  MOV EAX,dword ptr [EBP + 0x38]
006A80FD  3B C8                     CMP ECX,EAX
006A80FF  89 4D B8                  MOV dword ptr [EBP + -0x48],ECX
006A8102  7C 10                     JL 0x006a8114
006A8104  75 26                     JNZ 0x006a812c
006A8106  0F BF 55 B4               MOVSX EDX,word ptr [EBP + -0x4c]
006A810A  3B 55 F0                  CMP EDX,dword ptr [EBP + -0x10]
006A810D  74 05                     JZ 0x006a8114
006A810F  3B 55 D0                  CMP EDX,dword ptr [EBP + -0x30]
006A8112  75 18                     JNZ 0x006a812c
LAB_006a8114:
006A8114  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
006A8117  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
006A811A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
006A811D  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A8120  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
006A8123  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006A8126  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A8129  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
LAB_006a812c:
006A812C  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
006A812F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
006A8132  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006A8135  83 C0 04                  ADD EAX,0x4
006A8138  42                        INC EDX
006A8139  83 C1 08                  ADD ECX,0x8
006A813C  3D A8 D6 7E 00            CMP EAX,0x7ed6a8
006A8141  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006A8144  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
006A8147  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
006A814A  0F 8C 87 FD FF FF         JL 0x006a7ed7
006A8150  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006A8153  8B 75 C0                  MOV ESI,dword ptr [EBP + -0x40]
006A8156  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006A8159  EB 20                     JMP 0x006a817b
LAB_006a815b:
006A815B  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006A815E  8B F0                     MOV ESI,EAX
006A8160  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006A8163  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
006A8166  89 55 C4                  MOV dword ptr [EBP + -0x3c],EDX
006A8169  89 75 C0                  MOV dword ptr [EBP + -0x40],ESI
006A816C  8B 3C 85 40 D6 7E 00      MOV EDI,dword ptr [EAX*0x4 + 0x7ed640]
006A8173  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
006A8176  03 F9                     ADD EDI,ECX
006A8178  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
LAB_006a817b:
006A817B  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
006A817E  0F BF 04 CD 76 D5 7E 00   MOVSX EAX,word ptr [ECX*0x8 + 0x7ed576]
006A8186  3B 45 F0                  CMP EAX,dword ptr [EBP + -0x10]
006A8189  74 3A                     JZ 0x006a81c5
006A818B  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006A818E  49                        DEC ECX
006A818F  39 4D FC                  CMP dword ptr [EBP + -0x4],ECX
006A8192  74 31                     JZ 0x006a81c5
006A8194  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006A8197  66 8B 7D D4               MOV DI,word ptr [EBP + -0x2c]
006A819B  49                        DEC ECX
006A819C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006A819F  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006A81A2  83 E9 48                  SUB ECX,0x48
006A81A5  66 89 39                  MOV word ptr [ECX],DI
006A81A8  66 8B 7D F8               MOV DI,word ptr [EBP + -0x8]
006A81AC  66 89 79 02               MOV word ptr [ECX + 0x2],DI
006A81B0  66 8B 7D F4               MOV DI,word ptr [EBP + -0xc]
006A81B4  66 89 79 04               MOV word ptr [ECX + 0x4],DI
006A81B8  66 8B 79 4E               MOV DI,word ptr [ECX + 0x4e]
006A81BC  66 89 79 06               MOV word ptr [ECX + 0x6],DI
006A81C0  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
006A81C3  EB 03                     JMP 0x006a81c8
LAB_006a81c5:
006A81C5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
LAB_006a81c8:
006A81C8  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006A81CB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A81CE  48                        DEC EAX
006A81CF  83 E9 48                  SUB ECX,0x48
006A81D2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006A81D5  66 8B 45 EC               MOV AX,word ptr [EBP + -0x14]
006A81D9  66 89 11                  MOV word ptr [ECX],DX
006A81DC  66 89 71 02               MOV word ptr [ECX + 0x2],SI
006A81E0  66 89 41 04               MOV word ptr [ECX + 0x4],AX
006A81E4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
006A81E7  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
006A81EA  66 8B 04 85 40 D6 7E 00   MOV AX,word ptr [EAX*0x4 + 0x7ed640]
006A81F2  66 2B C7                  SUB AX,DI
006A81F5  8B 7D B0                  MOV EDI,dword ptr [EBP + -0x50]
006A81F8  03 C7                     ADD EAX,EDI
006A81FA  66 89 41 06               MOV word ptr [ECX + 0x6],AX
006A81FE  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A8201  3B D0                     CMP EDX,EAX
006A8203  66 C7 41 0E FF 7F         MOV word ptr [ECX + 0xe],0x7fff
006A8209  75 0F                     JNZ 0x006a821a
006A820B  3B 75 1C                  CMP ESI,dword ptr [EBP + 0x1c]
006A820E  75 0A                     JNZ 0x006a821a
006A8210  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006A8213  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
006A8216  3B C8                     CMP ECX,EAX
006A8218  74 14                     JZ 0x006a822e
LAB_006a821a:
006A821A  8B 7D 24                  MOV EDI,dword ptr [EBP + 0x24]
006A821D  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
006A8220  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
006A8223  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
006A8226  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006A8229  E9 0E FC FF FF            JMP 0x006a7e3c
LAB_006a822e:
006A822E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A8231  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
LAB_006a8234:
006A8234  85 D2                     TEST EDX,EDX
006A8236  7E 22                     JLE 0x006a825a
006A8238  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A823B  2B C2                     SUB EAX,EDX
006A823D  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006A8240  8D 04 D2                  LEA EAX,[EDX + EDX*0x8]
006A8243  C1 E1 03                  SHL ECX,0x3
006A8246  8B D1                     MOV EDX,ECX
006A8248  8D 34 C7                  LEA ESI,[EDI + EAX*0x8]
006A824B  C1 E9 02                  SHR ECX,0x2
006A824E  F3 A5                     MOVSD.REP ES:EDI,ESI
006A8250  8B CA                     MOV ECX,EDX
006A8252  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006A8255  83 E1 03                  AND ECX,0x3
006A8258  F3 A4                     MOVSB.REP ES:EDI,ESI
LAB_006a825a:
006A825A  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006A825D  5F                        POP EDI
006A825E  2B C2                     SUB EAX,EDX
006A8260  5E                        POP ESI
006A8261  48                        DEC EAX
006A8262  5B                        POP EBX
006A8263  8B E5                     MOV ESP,EBP
006A8265  5D                        POP EBP
006A8266  C2 34 00                  RET 0x34
