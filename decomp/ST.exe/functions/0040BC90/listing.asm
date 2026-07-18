FUN_0040bc90:
0040BC90  55                        PUSH EBP
0040BC91  8B EC                     MOV EBP,ESP
0040BC93  83 EC 28                  SUB ESP,0x28
0040BC96  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0040BC99  53                        PUSH EBX
0040BC9A  56                        PUSH ESI
0040BC9B  57                        PUSH EDI
0040BC9C  50                        PUSH EAX
0040BC9D  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0040BCA0  E8 CA 6B FF FF            CALL 0x0040286f
0040BCA5  8B D8                     MOV EBX,EAX
0040BCA7  85 DB                     TEST EBX,EBX
0040BCA9  0F 84 ED 02 00 00         JZ 0x0040bf9c
0040BCAF  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040BCB6  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040BCBD  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040BCC4  0F AF CA                  IMUL ECX,EDX
0040BCC7  0F AF C8                  IMUL ECX,EAX
0040BCCA  D1 E1                     SHL ECX,0x1
0040BCCC  51                        PUSH ECX
0040BCCD  E8 9E EF 29 00            CALL 0x006aac70
0040BCD2  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040BCD9  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040BCE0  0F AF CA                  IMUL ECX,EDX
0040BCE3  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040BCEA  0F AF CA                  IMUL ECX,EDX
0040BCED  8B 35 80 B2 7F 00         MOV ESI,dword ptr [0x007fb280]
0040BCF3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0040BCF6  D1 E1                     SHL ECX,0x1
0040BCF8  8B F8                     MOV EDI,EAX
0040BCFA  8B C1                     MOV EAX,ECX
0040BCFC  C1 E9 02                  SHR ECX,0x2
0040BCFF  F3 A5                     MOVSD.REP ES:EDI,ESI
0040BD01  8B C8                     MOV ECX,EAX
0040BD03  33 D2                     XOR EDX,EDX
0040BD05  83 E1 03                  AND ECX,0x3
0040BD08  F3 A4                     MOVSB.REP ES:EDI,ESI
0040BD0A  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
0040BD0E  8D 41 FE                  LEA EAX,[ECX + -0x2]
0040BD11  3B C2                     CMP EAX,EDX
0040BD13  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0040BD16  7D 03                     JGE 0x0040bd1b
0040BD18  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
LAB_0040bd1b:
0040BD1B  0F BF 7B 49               MOVSX EDI,word ptr [EBX + 0x49]
0040BD1F  8D 77 FE                  LEA ESI,[EDI + -0x2]
0040BD22  3B F2                     CMP ESI,EDX
0040BD24  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
0040BD27  7D 05                     JGE 0x0040bd2e
0040BD29  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0040BD2C  8B F2                     MOV ESI,EDX
LAB_0040bd2e:
0040BD2E  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040BD32  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0040BD35  83 C2 FE                  ADD EDX,-0x2
0040BD38  85 D2                     TEST EDX,EDX
0040BD3A  7D 02                     JGE 0x0040bd3e
0040BD3C  33 D2                     XOR EDX,EDX
LAB_0040bd3e:
0040BD3E  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040BD45  83 C1 02                  ADD ECX,0x2
0040BD48  3B C8                     CMP ECX,EAX
0040BD4A  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0040BD4D  7C 06                     JL 0x0040bd55
0040BD4F  8D 48 FF                  LEA ECX,[EAX + -0x1]
0040BD52  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
LAB_0040bd55:
0040BD55  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0040BD5C  83 C7 02                  ADD EDI,0x2
0040BD5F  3B F9                     CMP EDI,ECX
0040BD61  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0040BD64  7C 06                     JL 0x0040bd6c
0040BD66  49                        DEC ECX
0040BD67  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0040BD6A  8B F9                     MOV EDI,ECX
LAB_0040bd6c:
0040BD6C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040BD6F  83 C1 02                  ADD ECX,0x2
0040BD72  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0040BD75  0F BF 0D 7C B2 7F 00      MOVSX ECX,word ptr [0x007fb27c]
0040BD7C  39 4D F8                  CMP dword ptr [EBP + -0x8],ECX
0040BD7F  7C 04                     JL 0x0040bd85
0040BD81  49                        DEC ECX
0040BD82  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0040bd85:
0040BD85  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0040BD88  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
0040BD8B  3B D1                     CMP EDX,ECX
0040BD8D  0F 8F 8F 00 00 00         JG 0x0040be22
LAB_0040bd93:
0040BD93  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040BD9A  0F AF 55 08               IMUL EDX,dword ptr [EBP + 0x8]
0040BD9E  03 D6                     ADD EDX,ESI
0040BDA0  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0040BDA3  0F AF D0                  IMUL EDX,EAX
0040BDA6  3B F7                     CMP ESI,EDI
0040BDA8  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
0040BDAB  8D 14 51                  LEA EDX,[ECX + EDX*0x2]
0040BDAE  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0040BDB1  7F 5D                     JG 0x0040be10
LAB_0040bdb3:
0040BDB3  8B 75 E0                  MOV ESI,dword ptr [EBP + -0x20]
0040BDB6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040BDB9  3B F0                     CMP ESI,EAX
0040BDBB  7F 35                     JG 0x0040bdf2
0040BDBD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0040BDC0  8D 3C 70                  LEA EDI,[EAX + ESI*0x2]
LAB_0040bdc3:
0040BDC3  66 83 3F 00               CMP word ptr [EDI],0x0
0040BDC7  75 1B                     JNZ 0x0040bde4
0040BDC9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040BDCC  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
0040BDCF  51                        PUSH ECX
0040BDD0  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
0040BDD3  52                        PUSH EDX
0040BDD4  56                        PUSH ESI
0040BDD5  53                        PUSH EBX
0040BDD6  E8 D2 86 FF FF            CALL 0x004044ad
0040BDDB  85 C0                     TEST EAX,EAX
0040BDDD  75 05                     JNZ 0x0040bde4
0040BDDF  66 C7 07 FD FF            MOV word ptr [EDI],0xfffd
LAB_0040bde4:
0040BDE4  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0040BDE7  46                        INC ESI
0040BDE8  83 C7 02                  ADD EDI,0x2
0040BDEB  3B F0                     CMP ESI,EAX
0040BDED  7E D4                     JLE 0x0040bdc3
0040BDEF  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0040bdf2:
0040BDF2  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040BDF9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0040BDFC  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
0040BDFF  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0040BE02  41                        INC ECX
0040BE03  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0040BE06  3B CF                     CMP ECX,EDI
0040BE08  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0040BE0B  7E A6                     JLE 0x0040bdb3
0040BE0D  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
LAB_0040be10:
0040BE10  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0040BE13  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0040BE16  41                        INC ECX
0040BE17  3B CA                     CMP ECX,EDX
0040BE19  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
0040BE1C  0F 8E 71 FF FF FF         JLE 0x0040bd93
LAB_0040be22:
0040BE22  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040BE26  0F BF 05 7E B2 7F 00      MOVSX EAX,word ptr [0x007fb27e]
0040BE2D  0F BF 4B 49               MOVSX ECX,word ptr [EBX + 0x49]
0040BE31  0F AF D0                  IMUL EDX,EAX
0040BE34  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040BE3B  0F AF C8                  IMUL ECX,EAX
0040BE3E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0040BE41  03 D1                     ADD EDX,ECX
0040BE43  0F BF 4B 47               MOVSX ECX,word ptr [EBX + 0x47]
0040BE47  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
0040BE4A  03 D1                     ADD EDX,ECX
0040BE4C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0040BE4F  66 C7 04 50 00 00         MOV word ptr [EAX + EDX*0x2],0x0
0040BE55  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040BE58  0F BF 0D 7E B2 7F 00      MOVSX ECX,word ptr [0x007fb27e]
0040BE5F  0F BF 15 78 B2 7F 00      MOVSX EDX,word ptr [0x007fb278]
0040BE66  0F AF CE                  IMUL ECX,ESI
0040BE69  0F AF D7                  IMUL EDX,EDI
0040BE6C  03 C1                     ADD EAX,ECX
0040BE6E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0040BE71  03 D0                     ADD EDX,EAX
0040BE73  66 83 3C 51 FD            CMP word ptr [ECX + EDX*0x2],-0x3
0040BE78  8D 04 51                  LEA EAX,[ECX + EDX*0x2]
0040BE7B  75 05                     JNZ 0x0040be82
0040BE7D  66 C7 00 00 00            MOV word ptr [EAX],0x0
LAB_0040be82:
0040BE82  8A 55 18                  MOV DL,byte ptr [EBP + 0x18]
0040BE85  33 C0                     XOR EAX,EAX
0040BE87  84 D2                     TEST DL,DL
0040BE89  74 05                     JZ 0x0040be90
0040BE8B  B8 04 00 00 00            MOV EAX,0x4
LAB_0040be90:
0040BE90  50                        PUSH EAX
0040BE91  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0040BE94  6A 00                     PUSH 0x0
0040BE96  8D 55 D8                  LEA EDX,[EBP + -0x28]
0040BE99  6A 00                     PUSH 0x0
0040BE9B  52                        PUSH EDX
0040BE9C  0F BF 53 4B               MOVSX EDX,word ptr [EBX + 0x4b]
0040BEA0  6A 00                     PUSH 0x0
0040BEA2  56                        PUSH ESI
0040BEA3  57                        PUSH EDI
0040BEA4  50                        PUSH EAX
0040BEA5  0F BF 43 49               MOVSX EAX,word ptr [EBX + 0x49]
0040BEA9  52                        PUSH EDX
0040BEAA  50                        PUSH EAX
0040BEAB  0F BF 53 47               MOVSX EDX,word ptr [EBX + 0x47]
0040BEAF  0F BF 05 7C B2 7F 00      MOVSX EAX,word ptr [0x007fb27c]
0040BEB6  52                        PUSH EDX
0040BEB7  50                        PUSH EAX
0040BEB8  0F BF 15 7A B2 7F 00      MOVSX EDX,word ptr [0x007fb27a]
0040BEBF  0F BF 05 78 B2 7F 00      MOVSX EAX,word ptr [0x007fb278]
0040BEC6  52                        PUSH EDX
0040BEC7  50                        PUSH EAX
0040BEC8  51                        PUSH ECX
0040BEC9  E8 C2 D2 29 00            CALL 0x006a9190
0040BECE  85 C0                     TEST EAX,EAX
0040BED0  74 14                     JZ 0x0040bee6
0040BED2  66 8B 70 06               MOV SI,word ptr [EAX + 0x6]
0040BED6  50                        PUSH EAX
0040BED7  66 46                     INC SI
0040BED9  E8 B2 9F 29 00            CALL 0x006a5e90
0040BEDE  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0040BEE1  E9 8E 00 00 00            JMP 0x0040bf74
LAB_0040bee6:
0040BEE6  0F BF 4B 4B               MOVSX ECX,word ptr [EBX + 0x4b]
0040BEEA  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040BEEE  0F BF 43 47               MOVSX EAX,word ptr [EBX + 0x47]
0040BEF2  51                        PUSH ECX
0040BEF3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0040BEF6  52                        PUSH EDX
0040BEF7  50                        PUSH EAX
0040BEF8  0F BF 15 7C B2 7F 00      MOVSX EDX,word ptr [0x007fb27c]
0040BEFF  0F BF 05 7A B2 7F 00      MOVSX EAX,word ptr [0x007fb27a]
0040BF06  56                        PUSH ESI
0040BF07  57                        PUSH EDI
0040BF08  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0040BF0B  51                        PUSH ECX
0040BF0C  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040BF13  52                        PUSH EDX
0040BF14  50                        PUSH EAX
0040BF15  51                        PUSH ECX
0040BF16  57                        PUSH EDI
0040BF17  E8 74 F1 29 00            CALL 0x006ab090
0040BF1C  85 C0                     TEST EAX,EAX
0040BF1E  74 2C                     JZ 0x0040bf4c
0040BF20  57                        PUSH EDI
0040BF21  E8 6A 9F 29 00            CALL 0x006a5e90
0040BF26  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0040BF2C  68 73 01 00 00            PUSH 0x173
0040BF31  68 A8 4C 7A 00            PUSH 0x7a4ca8
0040BF36  52                        PUSH EDX
0040BF37  6A FE                     PUSH -0x2
0040BF39  E8 02 9F 29 00            CALL 0x006a5e40
0040BF3E  5F                        POP EDI
0040BF3F  5E                        POP ESI
0040BF40  B8 FE FF FF FF            MOV EAX,0xfffffffe
0040BF45  5B                        POP EBX
0040BF46  8B E5                     MOV ESP,EBP
0040BF48  5D                        POP EBP
0040BF49  C2 14 00                  RET 0x14
LAB_0040bf4c:
0040BF4C  0F BF 43 4B               MOVSX EAX,word ptr [EBX + 0x4b]
0040BF50  0F BF 0D 7A B2 7F 00      MOVSX ECX,word ptr [0x007fb27a]
0040BF57  0F BF 53 49               MOVSX EDX,word ptr [EBX + 0x49]
0040BF5B  0F AF C1                  IMUL EAX,ECX
0040BF5E  0F BF 0D 78 B2 7F 00      MOVSX ECX,word ptr [0x007fb278]
0040BF65  03 C2                     ADD EAX,EDX
0040BF67  0F BF 53 47               MOVSX EDX,word ptr [EBX + 0x47]
0040BF6B  0F AF C1                  IMUL EAX,ECX
0040BF6E  03 C2                     ADD EAX,EDX
0040BF70  66 8B 34 47               MOV SI,word ptr [EDI + EAX*0x2]
LAB_0040bf74:
0040BF74  57                        PUSH EDI
0040BF75  E8 16 9F 29 00            CALL 0x006a5e90
0040BF7A  66 85 F6                  TEST SI,SI
0040BF7D  7E 1D                     JLE 0x0040bf9c
0040BF7F  0F BF CE                  MOVSX ECX,SI
0040BF82  49                        DEC ECX
0040BF83  B8 56 55 55 55            MOV EAX,0x55555556
0040BF88  F7 E9                     IMUL ECX
0040BF8A  8B C2                     MOV EAX,EDX
0040BF8C  5F                        POP EDI
0040BF8D  8B C8                     MOV ECX,EAX
0040BF8F  5E                        POP ESI
0040BF90  C1 E9 1F                  SHR ECX,0x1f
0040BF93  03 C1                     ADD EAX,ECX
0040BF95  5B                        POP EBX
0040BF96  8B E5                     MOV ESP,EBP
0040BF98  5D                        POP EBP
0040BF99  C2 14 00                  RET 0x14
LAB_0040bf9c:
0040BF9C  5F                        POP EDI
0040BF9D  5E                        POP ESI
0040BF9E  B8 FC FF FF FF            MOV EAX,0xfffffffc
0040BFA3  5B                        POP EBX
0040BFA4  8B E5                     MOV ESP,EBP
0040BFA6  5D                        POP EBP
0040BFA7  C2 14 00                  RET 0x14
