FUN_0061bdb0:
0061BDB0  55                        PUSH EBP
0061BDB1  8B EC                     MOV EBP,ESP
0061BDB3  51                        PUSH ECX
0061BDB4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0061BDB7  53                        PUSH EBX
0061BDB8  33 DB                     XOR EBX,EBX
0061BDBA  56                        PUSH ESI
0061BDBB  83 F8 03                  CMP EAX,0x3
0061BDBE  57                        PUSH EDI
0061BDBF  8B F1                     MOV ESI,ECX
0061BDC1  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0061BDC4  0F 87 55 06 00 00         JA 0x0061c41f
switchD_0061bdca::switchD:
0061BDCA  FF 24 85 2C C4 61 00      JMP dword ptr [EAX*0x4 + 0x61c42c]
switchD_0061bdca::caseD_0:
0061BDD1  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0061BDD4  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0061BDD7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061BDDA  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
0061BDE0  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061BDE6  57                        PUSH EDI
0061BDE7  53                        PUSH EBX
0061BDE8  50                        PUSH EAX
0061BDE9  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061BDEF  51                        PUSH ECX
0061BDF0  52                        PUSH EDX
0061BDF1  50                        PUSH EAX
0061BDF2  E8 16 11 09 00            CALL 0x006acf0d
0061BDF7  8B C8                     MOV ECX,EAX
0061BDF9  83 C4 18                  ADD ESP,0x18
0061BDFC  85 C9                     TEST ECX,ECX
0061BDFE  C7 86 0F 01 00 00 03 00 00 00  MOV dword ptr [ESI + 0x10f],0x3
0061BE08  0F 8E FB 02 00 00         JLE 0x0061c109
0061BE0E  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061BE14  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061BE17  2B C2                     SUB EAX,EDX
0061BE19  89 8E F7 00 00 00         MOV dword ptr [ESI + 0xf7],ECX
0061BE1F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061BE26  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE29  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE2C  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE2F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE32  C1 E0 04                  SHL EAX,0x4
0061BE35  99                        CDQ
0061BE36  F7 F9                     IDIV ECX
0061BE38  89 86 03 01 00 00         MOV dword ptr [ESI + 0x103],EAX
0061BE3E  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061BE44  2B D8                     SUB EBX,EAX
0061BE46  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0061BE49  8B 9E A7 00 00 00         MOV EBX,dword ptr [ESI + 0xa7]
0061BE4F  2B FB                     SUB EDI,EBX
0061BE51  89 9E D7 00 00 00         MOV dword ptr [ESI + 0xd7],EBX
0061BE57  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE5A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE5D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE60  C1 E0 04                  SHL EAX,0x4
0061BE63  99                        CDQ
0061BE64  F7 F9                     IDIV ECX
0061BE66  89 86 07 01 00 00         MOV dword ptr [ESI + 0x107],EAX
0061BE6C  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0061BE6F  5F                        POP EDI
0061BE70  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE73  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE76  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061BE79  C1 E0 04                  SHL EAX,0x4
0061BE7C  99                        CDQ
0061BE7D  F7 F9                     IDIV ECX
0061BE7F  89 86 0B 01 00 00         MOV dword ptr [ESI + 0x10b],EAX
0061BE85  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061BE8B  89 86 CF 00 00 00         MOV dword ptr [ESI + 0xcf],EAX
0061BE91  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061BE97  89 86 D3 00 00 00         MOV dword ptr [ESI + 0xd3],EAX
0061BE9D  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0061BEA3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061BEA6  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0061BEAC  89 96 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EDX
0061BEB2  5E                        POP ESI
0061BEB3  5B                        POP EBX
0061BEB4  8B E5                     MOV ESP,EBP
0061BEB6  5D                        POP EBP
0061BEB7  C2 10 00                  RET 0x10
switchD_0061bdca::caseD_1:
0061BEBA  8A 86 4B 01 00 00         MOV AL,byte ptr [ESI + 0x14b]
0061BEC0  84 C0                     TEST AL,AL
0061BEC2  74 1B                     JZ 0x0061bedf
0061BEC4  8B 4E 7D                  MOV ECX,dword ptr [ESI + 0x7d]
0061BEC7  3B CB                     CMP ECX,EBX
0061BEC9  74 14                     JZ 0x0061bedf
0061BECB  8B 86 45 01 00 00         MOV EAX,dword ptr [ESI + 0x145]
0061BED1  53                        PUSH EBX
0061BED2  50                        PUSH EAX
0061BED3  E8 81 9D DE FF            CALL 0x00405c59
0061BED8  C6 86 4B 01 00 00 00      MOV byte ptr [ESI + 0x14b],0x0
LAB_0061bedf:
0061BEDF  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061BEE5  8B BE 9F 00 00 00         MOV EDI,dword ptr [ESI + 0x9f]
0061BEEB  8B 8E A3 00 00 00         MOV ECX,dword ptr [ESI + 0xa3]
0061BEF1  3B D3                     CMP EDX,EBX
0061BEF3  C7 86 0B 01 00 00 10 27 00 00  MOV dword ptr [ESI + 0x10b],0x2710
0061BEFD  89 9E 07 01 00 00         MOV dword ptr [ESI + 0x107],EBX
0061BF03  89 9E 03 01 00 00         MOV dword ptr [ESI + 0x103],EBX
0061BF09  89 9E 13 01 00 00         MOV dword ptr [ESI + 0x113],EBX
0061BF0F  C7 86 17 01 00 00 8C F1 FF FF  MOV dword ptr [ESI + 0x117],0xfffff18c
0061BF19  89 BE CF 00 00 00         MOV dword ptr [ESI + 0xcf],EDI
0061BF1F  89 8E D3 00 00 00         MOV dword ptr [ESI + 0xd3],ECX
0061BF25  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061BF2A  7C 11                     JL 0x0061bf3d
0061BF2C  F7 EA                     IMUL EDX
0061BF2E  C1 FA 06                  SAR EDX,0x6
0061BF31  8B C2                     MOV EAX,EDX
0061BF33  C1 E8 1F                  SHR EAX,0x1f
0061BF36  03 D0                     ADD EDX,EAX
0061BF38  0F BF C2                  MOVSX EAX,DX
0061BF3B  EB 10                     JMP 0x0061bf4d
LAB_0061bf3d:
0061BF3D  F7 EA                     IMUL EDX
0061BF3F  C1 FA 06                  SAR EDX,0x6
0061BF42  8B C2                     MOV EAX,EDX
0061BF44  C1 E8 1F                  SHR EAX,0x1f
0061BF47  03 D0                     ADD EDX,EAX
0061BF49  0F BF C2                  MOVSX EAX,DX
0061BF4C  48                        DEC EAX
LAB_0061bf4d:
0061BF4D  8B 15 98 75 80 00         MOV EDX,dword ptr [0x00807598]
0061BF53  8B 9A 80 03 00 00         MOV EBX,dword ptr [EDX + 0x380]
0061BF59  8D 55 08                  LEA EDX,[EBP + 0x8]
0061BF5C  0F AF CB                  IMUL ECX,EBX
0061BF5F  0F AF FB                  IMUL EDI,EBX
0061BF62  52                        PUSH EDX
0061BF63  50                        PUSH EAX
0061BF64  B8 79 19 8C 02            MOV EAX,0x28c1979
0061BF69  F7 E9                     IMUL ECX
0061BF6B  D1 FA                     SAR EDX,0x1
0061BF6D  8B C2                     MOV EAX,EDX
0061BF6F  C1 E8 1F                  SHR EAX,0x1f
0061BF72  03 D0                     ADD EDX,EAX
0061BF74  B8 79 19 8C 02            MOV EAX,0x28c1979
0061BF79  52                        PUSH EDX
0061BF7A  F7 EF                     IMUL EDI
0061BF7C  D1 FA                     SAR EDX,0x1
0061BF7E  8B CA                     MOV ECX,EDX
0061BF80  C1 E9 1F                  SHR ECX,0x1f
0061BF83  03 D1                     ADD EDX,ECX
0061BF85  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061BF8B  52                        PUSH EDX
0061BF8C  E8 7F 73 0C 00            CALL 0x006e3310
0061BF91  D8 0D 04 07 79 00         FMUL float ptr [0x00790704]
0061BF97  E8 EC 22 11 00            CALL 0x0072e288
0061BF9C  8B 8E D7 00 00 00         MOV ECX,dword ptr [ESI + 0xd7]
0061BFA2  0F BF C0                  MOVSX EAX,AX
0061BFA5  3B C8                     CMP ECX,EAX
0061BFA7  7D 06                     JGE 0x0061bfaf
0061BFA9  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
LAB_0061bfaf:
0061BFAF  8B BE 9F 00 00 00         MOV EDI,dword ptr [ESI + 0x9f]
0061BFB5  85 FF                     TEST EDI,EDI
0061BFB7  0F 8C 62 04 00 00         JL 0x0061c41f
0061BFBD  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061BFC3  85 D2                     TEST EDX,EDX
0061BFC5  0F 8C 54 04 00 00         JL 0x0061c41f
0061BFCB  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
0061BFD2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0061BFD5  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061BFD8  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0061BFDB  3B F8                     CMP EDI,EAX
0061BFDD  0F 8D 3C 04 00 00         JGE 0x0061c41f
0061BFE3  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
0061BFEA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0061BFED  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061BFF0  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
0061BFF3  3B D0                     CMP EDX,EAX
0061BFF5  0F 8D 24 04 00 00         JGE 0x0061c41f
0061BFFB  8B 8E A7 00 00 00         MOV ECX,dword ptr [ESI + 0xa7]
0061C001  89 8E D7 00 00 00         MOV dword ptr [ESI + 0xd7],ECX
0061C007  E9 D8 00 00 00            JMP 0x0061c0e4
switchD_0061bdca::caseD_2:
0061C00C  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
0061C00F  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0061C012  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0061C015  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061C01B  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061C021  57                        PUSH EDI
0061C022  53                        PUSH EBX
0061C023  51                        PUSH ECX
0061C024  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061C02A  52                        PUSH EDX
0061C02B  50                        PUSH EAX
0061C02C  51                        PUSH ECX
0061C02D  E8 DB 0E 09 00            CALL 0x006acf0d
0061C032  8B C8                     MOV ECX,EAX
0061C034  33 C0                     XOR EAX,EAX
0061C036  83 C4 18                  ADD ESP,0x18
0061C039  3B C8                     CMP ECX,EAX
0061C03B  89 86 0F 01 00 00         MOV dword ptr [ESI + 0x10f],EAX
0061C041  C7 86 17 01 00 00 52 EA FF FF  MOV dword ptr [ESI + 0x117],0xffffea52
0061C04B  89 86 13 01 00 00         MOV dword ptr [ESI + 0x113],EAX
0061C051  89 86 F3 00 00 00         MOV dword ptr [ESI + 0xf3],EAX
0061C057  0F 8E AC 00 00 00         JLE 0x0061c109
0061C05D  8B 96 9F 00 00 00         MOV EDX,dword ptr [ESI + 0x9f]
0061C063  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061C066  2B C2                     SUB EAX,EDX
0061C068  89 8E F7 00 00 00         MOV dword ptr [ESI + 0xf7],ECX
0061C06E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C071  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C074  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C077  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C07A  C1 E0 04                  SHL EAX,0x4
0061C07D  99                        CDQ
0061C07E  F7 F9                     IDIV ECX
0061C080  89 86 03 01 00 00         MOV dword ptr [ESI + 0x103],EAX
0061C086  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061C08C  2B D8                     SUB EBX,EAX
0061C08E  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0061C091  8B 9E A7 00 00 00         MOV EBX,dword ptr [ESI + 0xa7]
0061C097  2B FB                     SUB EDI,EBX
0061C099  89 9E D7 00 00 00         MOV dword ptr [ESI + 0xd7],EBX
0061C09F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0A2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0A5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0A8  C1 E0 04                  SHL EAX,0x4
0061C0AB  99                        CDQ
0061C0AC  F7 F9                     IDIV ECX
0061C0AE  89 86 07 01 00 00         MOV dword ptr [ESI + 0x107],EAX
0061C0B4  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0061C0B7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0BA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0BD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C0C0  C1 E0 04                  SHL EAX,0x4
0061C0C3  99                        CDQ
0061C0C4  F7 F9                     IDIV ECX
0061C0C6  89 86 0B 01 00 00         MOV dword ptr [ESI + 0x10b],EAX
0061C0CC  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061C0D2  89 86 CF 00 00 00         MOV dword ptr [ESI + 0xcf],EAX
0061C0D8  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061C0DE  89 86 D3 00 00 00         MOV dword ptr [ESI + 0xd3],EAX
LAB_0061c0e4:
0061C0E4  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0061C0EA  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061C0F1  5F                        POP EDI
0061C0F2  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0061C0F8  89 86 1B 01 00 00         MOV dword ptr [ESI + 0x11b],EAX
0061C0FE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061C101  5E                        POP ESI
0061C102  5B                        POP EBX
0061C103  8B E5                     MOV ESP,EBP
0061C105  5D                        POP EBP
0061C106  C2 10 00                  RET 0x10
LAB_0061c109:
0061C109  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0061C110  5F                        POP EDI
0061C111  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061C114  5E                        POP ESI
0061C115  5B                        POP EBX
0061C116  8B E5                     MOV ESP,EBP
0061C118  5D                        POP EBP
0061C119  C2 10 00                  RET 0x10
switchD_0061bdca::caseD_3:
0061C11C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0061C11F  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0061C122  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0061C125  8B 96 A7 00 00 00         MOV EDX,dword ptr [ESI + 0xa7]
0061C12B  8B 86 A3 00 00 00         MOV EAX,dword ptr [ESI + 0xa3]
0061C131  51                        PUSH ECX
0061C132  8B 8E 9F 00 00 00         MOV ECX,dword ptr [ESI + 0x9f]
0061C138  57                        PUSH EDI
0061C139  53                        PUSH EBX
0061C13A  52                        PUSH EDX
0061C13B  50                        PUSH EAX
0061C13C  51                        PUSH ECX
0061C13D  E8 CB 0D 09 00            CALL 0x006acf0d
0061C142  8B 96 A3 00 00 00         MOV EDX,dword ptr [ESI + 0xa3]
0061C148  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
0061C14B  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061C151  57                        PUSH EDI
0061C152  53                        PUSH EBX
0061C153  52                        PUSH EDX
0061C154  50                        PUSH EAX
0061C155  E8 7E 0D 09 00            CALL 0x006aced8
0061C15A  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0061C15D  8B 86 9F 00 00 00         MOV EAX,dword ptr [ESI + 0x9f]
0061C163  2B D8                     SUB EBX,EAX
0061C165  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0061C168  83 C4 28                  ADD ESP,0x28
0061C16B  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0061C16E  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
0061C171  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C174  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C177  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C17A  C1 E0 04                  SHL EAX,0x4
0061C17D  99                        CDQ
0061C17E  F7 FB                     IDIV EBX
0061C180  2B BE A3 00 00 00         SUB EDI,dword ptr [ESI + 0xa3]
0061C186  89 86 03 01 00 00         MOV dword ptr [ESI + 0x103],EAX
0061C18C  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
0061C18F  8B BE A7 00 00 00         MOV EDI,dword ptr [ESI + 0xa7]
0061C195  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C198  2B CF                     SUB ECX,EDI
0061C19A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C19D  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C1A0  C1 E0 04                  SHL EAX,0x4
0061C1A3  99                        CDQ
0061C1A4  F7 FB                     IDIV EBX
0061C1A6  89 86 07 01 00 00         MOV dword ptr [ESI + 0x107],EAX
0061C1AC  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061C1AF  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C1B2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C1B5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C1B8  C1 E0 04                  SHL EAX,0x4
0061C1BB  99                        CDQ
0061C1BC  F7 FB                     IDIV EBX
0061C1BE  85 DB                     TEST EBX,EBX
0061C1C0  89 86 0B 01 00 00         MOV dword ptr [ESI + 0x10b],EAX
0061C1C6  0F 84 4C 02 00 00         JZ 0x0061c418
0061C1CC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0061C1CF  85 DB                     TEST EBX,EBX
0061C1D1  75 0A                     JNZ 0x0061c1dd
0061C1D3  C7 45 0C 01 00 00 00      MOV dword ptr [EBP + 0xc],0x1
0061C1DA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
LAB_0061c1dd:
0061C1DD  85 C9                     TEST ECX,ECX
0061C1DF  0F 8E 0F 01 00 00         JLE 0x0061c2f4
0061C1E5  81 F9 20 03 00 00         CMP ECX,0x320
0061C1EB  7E 1D                     JLE 0x0061c20a
0061C1ED  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0061C1F0  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061C1F6  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0061C1FC  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061C1FF  C1 E8 10                  SHR EAX,0x10
0061C202  83 E0 07                  AND EAX,0x7
0061C205  83 C0 2D                  ADD EAX,0x2d
0061C208  EB 63                     JMP 0x0061c26d
LAB_0061c20a:
0061C20A  81 F9 90 01 00 00         CMP ECX,0x190
0061C210  7E 1C                     JLE 0x0061c22e
0061C212  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0061C215  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061C21B  05 39 30 00 00            ADD EAX,0x3039
0061C220  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061C223  C1 E8 10                  SHR EAX,0x10
0061C226  83 E0 07                  AND EAX,0x7
0061C229  83 C0 23                  ADD EAX,0x23
0061C22C  EB 3F                     JMP 0x0061c26d
LAB_0061c22e:
0061C22E  81 F9 C8 00 00 00         CMP ECX,0xc8
0061C234  7E 1D                     JLE 0x0061c253
0061C236  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0061C239  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061C23F  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0061C245  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061C248  C1 E8 10                  SHR EAX,0x10
0061C24B  83 E0 07                  AND EAX,0x7
0061C24E  83 C0 19                  ADD EAX,0x19
0061C251  EB 1A                     JMP 0x0061c26d
LAB_0061c253:
0061C253  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
0061C256  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0061C25C  05 39 30 00 00            ADD EAX,0x3039
0061C261  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061C264  C1 E8 10                  SHR EAX,0x10
0061C267  83 E0 07                  AND EAX,0x7
0061C26A  83 C0 07                  ADD EAX,0x7
LAB_0061c26d:
0061C26D  8B 96 17 01 00 00         MOV EDX,dword ptr [ESI + 0x117]
0061C273  89 86 13 01 00 00         MOV dword ptr [ESI + 0x113],EAX
0061C279  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061C27E  F7 EA                     IMUL EDX
0061C280  C1 FA 05                  SAR EDX,0x5
0061C283  8B C2                     MOV EAX,EDX
0061C285  C1 E8 1F                  SHR EAX,0x1f
0061C288  03 D0                     ADD EDX,EAX
0061C28A  8B 86 13 01 00 00         MOV EAX,dword ptr [ESI + 0x113]
0061C290  0F AF C0                  IMUL EAX,EAX
0061C293  8B FA                     MOV EDI,EDX
0061C295  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C298  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0061C29B  8B C7                     MOV EAX,EDI
0061C29D  0F AF C1                  IMUL EAX,ECX
0061C2A0  8D 04 50                  LEA EAX,[EAX + EDX*0x2]
0061C2A3  D1 E0                     SHL EAX,0x1
0061C2A5  85 C0                     TEST EAX,EAX
0061C2A7  7E 0B                     JLE 0x0061c2b4
0061C2A9  50                        PUSH EAX
0061C2AA  E8 85 C0 0A 00            CALL 0x006c8334
0061C2AF  83 C4 04                  ADD ESP,0x4
0061C2B2  EB 02                     JMP 0x0061c2b6
LAB_0061c2b4:
0061C2B4  33 C0                     XOR EAX,EAX
LAB_0061c2b6:
0061C2B6  8B 8E 13 01 00 00         MOV ECX,dword ptr [ESI + 0x113]
0061C2BC  8D 14 89                  LEA EDX,[ECX + ECX*0x4]
0061C2BF  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0061C2C2  8D 14 92                  LEA EDX,[EDX + EDX*0x4]
0061C2C5  C1 E2 03                  SHL EDX,0x3
0061C2C8  2B C2                     SUB EAX,EDX
0061C2CA  99                        CDQ
0061C2CB  F7 FF                     IDIV EDI
0061C2CD  8B F8                     MOV EDI,EAX
0061C2CF  85 FF                     TEST EDI,EDI
0061C2D1  0F 8E 37 01 00 00         JLE 0x0061c40e
0061C2D7  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061C2DA  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061C2DD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C2E0  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C2E3  C1 E0 04                  SHL EAX,0x4
0061C2E6  89 86 13 01 00 00         MOV dword ptr [ESI + 0x113],EAX
0061C2EC  8D 04 9B                  LEA EAX,[EBX + EBX*0x4]
0061C2EF  E9 F5 00 00 00            JMP 0x0061c3e9
LAB_0061c2f4:
0061C2F4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0061C2F7  69 D2 6D 4E C6 41         IMUL EDX,EDX,0x41c64e6d
0061C2FD  8D 82 39 30 00 00         LEA EAX,[EDX + 0x3039]
0061C303  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
0061C306  8B 96 17 01 00 00         MOV EDX,dword ptr [ESI + 0x117]
0061C30C  C1 E8 10                  SHR EAX,0x10
0061C30F  83 E0 07                  AND EAX,0x7
0061C312  8D 78 11                  LEA EDI,[EAX + 0x11]
0061C315  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0061C31A  F7 EA                     IMUL EDX
0061C31C  C1 FA 05                  SAR EDX,0x5
0061C31F  8B C2                     MOV EAX,EDX
0061C321  89 BE 13 01 00 00         MOV dword ptr [ESI + 0x113],EDI
0061C327  C1 E8 1F                  SHR EAX,0x1f
0061C32A  03 D0                     ADD EDX,EAX
0061C32C  8B C7                     MOV EAX,EDI
0061C32E  0F AF C7                  IMUL EAX,EDI
0061C331  89 55 10                  MOV dword ptr [EBP + 0x10],EDX
0061C334  0F AF D1                  IMUL EDX,ECX
0061C337  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C33A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C33D  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
0061C340  D1 E0                     SHL EAX,0x1
0061C342  85 C0                     TEST EAX,EAX
0061C344  7E 0E                     JLE 0x0061c354
0061C346  50                        PUSH EAX
0061C347  E8 E8 BF 0A 00            CALL 0x006c8334
0061C34C  83 C4 04                  ADD ESP,0x4
0061C34F  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
0061C352  EB 07                     JMP 0x0061c35b
LAB_0061c354:
0061C354  C7 45 14 00 00 00 00      MOV dword ptr [EBP + 0x14],0x0
LAB_0061c35b:
0061C35B  8B 8E 13 01 00 00         MOV ECX,dword ptr [ESI + 0x113]
0061C361  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061C364  8D 3C 80                  LEA EDI,[EAX + EAX*0x4]
0061C367  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0061C36A  8D 3C BF                  LEA EDI,[EDI + EDI*0x4]
0061C36D  C1 E7 03                  SHL EDI,0x3
0061C370  2B C7                     SUB EAX,EDI
0061C372  99                        CDQ
0061C373  F7 7D 10                  IDIV dword ptr [EBP + 0x10]
0061C376  8B D8                     MOV EBX,EAX
0061C378  85 DB                     TEST EBX,EBX
0061C37A  7E 40                     JLE 0x0061c3bc
0061C37C  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061C37F  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061C386  5F                        POP EDI
0061C387  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061C38A  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C38D  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0061C390  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061C393  C1 E1 04                  SHL ECX,0x4
0061C396  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C399  89 8E 13 01 00 00         MOV dword ptr [ESI + 0x113],ECX
0061C39F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3A2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3A5  C1 E0 03                  SHL EAX,0x3
0061C3A8  99                        CDQ
0061C3A9  F7 FB                     IDIV EBX
0061C3AB  89 86 0F 01 00 00         MOV dword ptr [ESI + 0x10f],EAX
0061C3B1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061C3B4  5E                        POP ESI
0061C3B5  5B                        POP EBX
0061C3B6  8B E5                     MOV ESP,EBP
0061C3B8  5D                        POP EBP
0061C3B9  C2 10 00                  RET 0x10
LAB_0061c3bc:
0061C3BC  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0061C3BF  8D 04 17                  LEA EAX,[EDI + EDX*0x1]
0061C3C2  99                        CDQ
0061C3C3  F7 7D 10                  IDIV dword ptr [EBP + 0x10]
0061C3C6  8B F8                     MOV EDI,EAX
0061C3C8  F7 DF                     NEG EDI
0061C3CA  85 FF                     TEST EDI,EDI
0061C3CC  7E 40                     JLE 0x0061c40e
0061C3CE  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
0061C3D1  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0061C3D4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3D7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3DA  C1 E0 04                  SHL EAX,0x4
0061C3DD  89 86 13 01 00 00         MOV dword ptr [ESI + 0x113],EAX
0061C3E3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0061C3E6  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
LAB_0061c3e9:
0061C3E9  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3EC  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0061C3F3  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0061C3F6  C1 E0 03                  SHL EAX,0x3
0061C3F9  99                        CDQ
0061C3FA  F7 FF                     IDIV EDI
0061C3FC  5F                        POP EDI
0061C3FD  89 86 0F 01 00 00         MOV dword ptr [ESI + 0x10f],EAX
0061C403  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061C406  5E                        POP ESI
0061C407  5B                        POP EBX
0061C408  8B E5                     MOV ESP,EBP
0061C40A  5D                        POP EBP
0061C40B  C2 10 00                  RET 0x10
LAB_0061c40e:
0061C40E  C7 86 0F 01 00 00 64 00 00 00  MOV dword ptr [ESI + 0x10f],0x64
LAB_0061c418:
0061C418  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
switchD_0061bdca::default:
0061C41F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0061C422  5F                        POP EDI
0061C423  5E                        POP ESI
0061C424  5B                        POP EBX
0061C425  8B E5                     MOV ESP,EBP
0061C427  5D                        POP EBP
0061C428  C2 10 00                  RET 0x10
