STBHEShellC::sub_005F3BF0:
005F3BF0  55                        PUSH EBP
005F3BF1  8B EC                     MOV EBP,ESP
005F3BF3  83 EC 1C                  SUB ESP,0x1c
005F3BF6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005F3BF9  33 D2                     XOR EDX,EDX
005F3BFB  25 FF 00 00 00            AND EAX,0xff
005F3C00  53                        PUSH EBX
005F3C01  56                        PUSH ESI
005F3C02  2B C2                     SUB EAX,EDX
005F3C04  57                        PUSH EDI
005F3C05  8B F1                     MOV ESI,ECX
005F3C07  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
005F3C0A  0F 84 2C 05 00 00         JZ 0x005f413c
005F3C10  48                        DEC EAX
005F3C11  0F 84 38 01 00 00         JZ 0x005f3d4f
005F3C17  48                        DEC EAX
005F3C18  0F 85 BE 05 00 00         JNZ 0x005f41dc
005F3C1E  8B 8E EF 00 00 00         MOV ECX,dword ptr [ESI + 0xef]
005F3C24  3B CA                     CMP ECX,EDX
005F3C26  0F 84 B0 05 00 00         JZ 0x005f41dc
005F3C2C  8B 9E FF 00 00 00         MOV EBX,dword ptr [ESI + 0xff]
005F3C32  C7 86 C9 00 00 00 02 00 00 00  MOV dword ptr [ESI + 0xc9],0x2
005F3C3C  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F3C41  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
005F3C47  3B C3                     CMP EAX,EBX
005F3C49  0F 86 8D 05 00 00         JBE 0x005f41dc
005F3C4F  2B C3                     SUB EAX,EBX
005F3C51  81 F9 F6 01 00 00         CMP ECX,0x1f6
005F3C57  89 86 FB 00 00 00         MOV dword ptr [ESI + 0xfb],EAX
005F3C5D  7E 72                     JLE 0x005f3cd1
005F3C5F  8B 96 E3 00 00 00         MOV EDX,dword ptr [ESI + 0xe3]
005F3C65  66 C7 86 D5 00 00 00 4C 04  MOV word ptr [ESI + 0xd5],0x44c
005F3C6E  8B C2                     MOV EAX,EDX
005F3C70  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005F3C77  C1 E0 06                  SHL EAX,0x6
005F3C7A  03 C2                     ADD EAX,EDX
005F3C7C  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
005F3C7F  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005F3C82  D1 E0                     SHL EAX,0x1
005F3C84  2B C2                     SUB EAX,EDX
005F3C86  0F BF 96 D1 00 00 00      MOVSX EDX,word ptr [ESI + 0xd1]
005F3C8D  8D 3C 40                  LEA EDI,[EAX + EAX*0x2]
005F3C90  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F3C93  2B C2                     SUB EAX,EDX
005F3C95  89 BE DF 00 00 00         MOV dword ptr [ESI + 0xdf],EDI
005F3C9B  0F AF C7                  IMUL EAX,EDI
005F3C9E  99                        CDQ
005F3C9F  F7 F9                     IDIV ECX
005F3CA1  0F BF 96 D3 00 00 00      MOVSX EDX,word ptr [ESI + 0xd3]
005F3CA8  89 BE E3 00 00 00         MOV dword ptr [ESI + 0xe3],EDI
005F3CAE  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
005F3CB4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F3CB7  2B C2                     SUB EAX,EDX
005F3CB9  0F AF C7                  IMUL EAX,EDI
005F3CBC  99                        CDQ
005F3CBD  F7 F9                     IDIV ECX
005F3CBF  5F                        POP EDI
005F3CC0  89 86 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EAX
005F3CC6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F3CC9  5E                        POP ESI
005F3CCA  5B                        POP EBX
005F3CCB  8B E5                     MOV ESP,EBP
005F3CCD  5D                        POP EBP
005F3CCE  C2 10 00                  RET 0x10
LAB_005f3cd1:
005F3CD1  8B BE F7 00 00 00         MOV EDI,dword ptr [ESI + 0xf7]
005F3CD7  B8 59 17 B7 D1            MOV EAX,0xd1b71759
005F3CDC  8B D7                     MOV EDX,EDI
005F3CDE  0F AF FB                  IMUL EDI,EBX
005F3CE1  0F AF D3                  IMUL EDX,EBX
005F3CE4  0F AF D3                  IMUL EDX,EBX
005F3CE7  F7 E2                     MUL EDX
005F3CE9  C1 EA 0E                  SHR EDX,0xe
005F3CEC  B8 B0 04 00 00            MOV EAX,0x4b0
005F3CF1  89 BE DF 00 00 00         MOV dword ptr [ESI + 0xdf],EDI
005F3CF7  8B BE CD 00 00 00         MOV EDI,dword ptr [ESI + 0xcd]
005F3CFD  2B C2                     SUB EAX,EDX
005F3CFF  0F BF 96 D1 00 00 00      MOVSX EDX,word ptr [ESI + 0xd1]
005F3D06  66 89 86 D5 00 00 00      MOV word ptr [ESI + 0xd5],AX
005F3D0D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F3D10  2B C2                     SUB EAX,EDX
005F3D12  89 BE E3 00 00 00         MOV dword ptr [ESI + 0xe3],EDI
005F3D18  0F AF C7                  IMUL EAX,EDI
005F3D1B  99                        CDQ
005F3D1C  F7 F9                     IDIV ECX
005F3D1E  0F BF 96 D3 00 00 00      MOVSX EDX,word ptr [ESI + 0xd3]
005F3D25  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
005F3D2C  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
005F3D32  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F3D35  2B C2                     SUB EAX,EDX
005F3D37  0F AF C7                  IMUL EAX,EDI
005F3D3A  99                        CDQ
005F3D3B  F7 F9                     IDIV ECX
005F3D3D  5F                        POP EDI
005F3D3E  89 86 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EAX
005F3D44  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F3D47  5E                        POP ESI
005F3D48  5B                        POP EBX
005F3D49  8B E5                     MOV ESP,EBP
005F3D4B  5D                        POP EBP
005F3D4C  C2 10 00                  RET 0x10
LAB_005f3d4f:
005F3D4F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F3D52  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F3D55  8B 96 97 00 00 00         MOV EDX,dword ptr [ESI + 0x97]
005F3D5B  50                        PUSH EAX
005F3D5C  8B 86 93 00 00 00         MOV EAX,dword ptr [ESI + 0x93]
005F3D62  51                        PUSH ECX
005F3D63  52                        PUSH EDX
005F3D64  50                        PUSH EAX
005F3D65  E8 6E 91 0B 00            CALL 0x006aced8
005F3D6A  8B D8                     MOV EBX,EAX
005F3D6C  83 C4 10                  ADD ESP,0x10
005F3D6F  81 FB F6 01 00 00         CMP EBX,0x1f6
005F3D75  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
005F3D78  89 9E EF 00 00 00         MOV dword ptr [ESI + 0xef],EBX
005F3D7E  0F 8E E2 01 00 00         JLE 0x005f3f66
005F3D84  8B BE DF 00 00 00         MOV EDI,dword ptr [ESI + 0xdf]
005F3D8A  8B CF                     MOV ECX,EDI
005F3D8C  0F AF CF                  IMUL ECX,EDI
005F3D8F  8D 14 49                  LEA EDX,[ECX + ECX*0x2]
005F3D92  8D 04 D1                  LEA EAX,[ECX + EDX*0x8]
005F3D95  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F3D98  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005F3D9B  C1 E0 04                  SHL EAX,0x4
005F3D9E  99                        CDQ
005F3D9F  F7 FB                     IDIV EBX
005F3DA1  85 C9                     TEST ECX,ECX
005F3DA3  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005F3DA6  89 86 F7 00 00 00         MOV dword ptr [ESI + 0xf7],EAX
005F3DAC  0F 84 2A 04 00 00         JZ 0x005f41dc
005F3DB2  8B C7                     MOV EAX,EDI
005F3DB4  89 BE E3 00 00 00         MOV dword ptr [ESI + 0xe3],EDI
005F3DBA  C1 E0 06                  SHL EAX,0x6
005F3DBD  03 C7                     ADD EAX,EDI
005F3DBF  8D 04 47                  LEA EAX,[EDI + EAX*0x2]
005F3DC2  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005F3DC5  D1 E0                     SHL EAX,0x1
005F3DC7  2B C7                     SUB EAX,EDI
005F3DC9  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005F3DCC  B8 90 AB 1E 00            MOV EAX,0x1eab90
005F3DD1  99                        CDQ
005F3DD2  F7 F9                     IDIV ECX
005F3DD4  66 8B 96 93 00 00 00      MOV DX,word ptr [ESI + 0x93]
005F3DDB  66 89 96 D1 00 00 00      MOV word ptr [ESI + 0xd1],DX
005F3DE2  8B D7                     MOV EDX,EDI
005F3DE4  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F3DE7  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005F3DEA  8B C8                     MOV ECX,EAX
005F3DEC  66 8B 86 97 00 00 00      MOV AX,word ptr [ESI + 0x97]
005F3DF3  66 89 86 D3 00 00 00      MOV word ptr [ESI + 0xd3],AX
005F3DFA  66 8B 86 9B 00 00 00      MOV AX,word ptr [ESI + 0x9b]
005F3E01  66 89 86 D5 00 00 00      MOV word ptr [ESI + 0xd5],AX
005F3E08  8B C2                     MOV EAX,EDX
005F3E0A  C1 E0 06                  SHL EAX,0x6
005F3E0D  03 C2                     ADD EAX,EDX
005F3E0F  41                        INC ECX
005F3E10  0F AF F9                  IMUL EDI,ECX
005F3E13  8D 04 42                  LEA EAX,[EDX + EAX*0x2]
005F3E16  89 8E FF 00 00 00         MOV dword ptr [ESI + 0xff],ECX
005F3E1C  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
005F3E1F  D1 E0                     SHL EAX,0x1
005F3E21  2B C2                     SUB EAX,EDX
005F3E23  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005F3E26  8B D0                     MOV EDX,EAX
005F3E28  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
005F3E2B  0F AF D1                  IMUL EDX,ECX
005F3E2E  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F3E33  F7 EA                     IMUL EDX
005F3E35  C1 FA 0C                  SAR EDX,0xc
005F3E38  8B C2                     MOV EAX,EDX
005F3E3A  C1 E8 1F                  SHR EAX,0x1f
005F3E3D  03 D0                     ADD EDX,EAX
005F3E3F  B8 AD 8B DB 68            MOV EAX,0x68db8bad
005F3E44  8B DA                     MOV EBX,EDX
005F3E46  8B D7                     MOV EDX,EDI
005F3E48  0F AF D1                  IMUL EDX,ECX
005F3E4B  F7 EA                     IMUL EDX
005F3E4D  C1 FA 0D                  SAR EDX,0xd
005F3E50  8B CA                     MOV ECX,EDX
005F3E52  8B C3                     MOV EAX,EBX
005F3E54  C1 E9 1F                  SHR ECX,0x1f
005F3E57  03 D1                     ADD EDX,ECX
005F3E59  0F BF 8E 9B 00 00 00      MOVSX ECX,word ptr [ESI + 0x9b]
005F3E60  2B C2                     SUB EAX,EDX
005F3E62  2B C1                     SUB EAX,ECX
005F3E64  8D 0C 1B                  LEA ECX,[EBX + EBX*0x1]
005F3E67  05 4C 04 00 00            ADD EAX,0x44c
005F3E6C  89 45 10                  MOV dword ptr [EBP + 0x10],EAX
005F3E6F  B8 1F 85 EB 51            MOV EAX,0x51eb851f
005F3E74  F7 6D F8                  IMUL dword ptr [EBP + -0x8]
005F3E77  C1 FA 05                  SAR EDX,0x5
005F3E7A  8B C2                     MOV EAX,EDX
005F3E7C  C1 E8 1F                  SHR EAX,0x1f
005F3E7F  03 D0                     ADD EDX,EAX
005F3E81  8B C2                     MOV EAX,EDX
005F3E83  0F AF C2                  IMUL EAX,EDX
005F3E86  99                        CDQ
005F3E87  F7 F9                     IDIV ECX
005F3E89  8D 55 E4                  LEA EDX,[EBP + -0x1c]
005F3E8C  52                        PUSH EDX
005F3E8D  51                        PUSH ECX
005F3E8E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F3E91  B8 53 74 24 97            MOV EAX,0x97247453
005F3E96  F7 EF                     IMUL EDI
005F3E98  C1 FA 0C                  SAR EDX,0xc
005F3E9B  8B C2                     MOV EAX,EDX
005F3E9D  C1 E8 1F                  SHR EAX,0x1f
005F3EA0  03 D0                     ADD EDX,EAX
005F3EA2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005F3EA5  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005F3EA8  D9 1C 24                  FSTP float ptr [ESP]
005F3EAB  DB 45 10                  FILD dword ptr [EBP + 0x10]
005F3EAE  51                        PUSH ECX
005F3EAF  D9 1C 24                  FSTP float ptr [ESP]
005F3EB2  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F3EB5  51                        PUSH ECX
005F3EB6  D9 1C 24                  FSTP float ptr [ESP]
005F3EB9  DB 45 F8                  FILD dword ptr [EBP + -0x8]
005F3EBC  51                        PUSH ECX
005F3EBD  8B CE                     MOV ECX,ESI
005F3EBF  DA 75 F4                  FIDIV dword ptr [EBP + -0xc]
005F3EC2  D9 1C 24                  FSTP float ptr [ESP]
005F3EC5  E8 4F 1C E1 FF            CALL 0x00405b19
005F3ECA  85 C0                     TEST EAX,EAX
005F3ECC  0F 84 0A 03 00 00         JZ 0x005f41dc
005F3ED2  D9 45 E4                  FLD float ptr [EBP + -0x1c]
005F3ED5  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F3EDB  E8 A8 A3 13 00            CALL 0x0072e288
005F3EE0  D9 45 E8                  FLD float ptr [EBP + -0x18]
005F3EE3  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F3EE9  89 86 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EAX
005F3EEF  E8 94 A3 13 00            CALL 0x0072e288
005F3EF4  0F BF 8E D1 00 00 00      MOVSX ECX,word ptr [ESI + 0xd1]
005F3EFB  89 86 EB 00 00 00         MOV dword ptr [ESI + 0xeb],EAX
005F3F01  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F3F04  2B C1                     SUB EAX,ECX
005F3F06  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F3F09  0F AF C1                  IMUL EAX,ECX
005F3F0C  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
005F3F0F  99                        CDQ
005F3F10  F7 FF                     IDIV EDI
005F3F12  0F BF 96 D3 00 00 00      MOVSX EDX,word ptr [ESI + 0xd3]
005F3F19  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
005F3F1F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F3F22  2B C2                     SUB EAX,EDX
005F3F24  0F AF C1                  IMUL EAX,ECX
005F3F27  99                        CDQ
005F3F28  F7 FF                     IDIV EDI
005F3F2A  BF 01 00 00 00            MOV EDI,0x1
005F3F2F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F3F32  89 86 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EAX
005F3F38  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005F3F3D  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
005F3F43  89 BE C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDI
005F3F49  8B C7                     MOV EAX,EDI
005F3F4B  89 96 FB 00 00 00         MOV dword ptr [ESI + 0xfb],EDX
005F3F51  89 8E E7 00 00 00         MOV dword ptr [ESI + 0xe7],ECX
005F3F57  89 9E F3 00 00 00         MOV dword ptr [ESI + 0xf3],EBX
005F3F5D  5F                        POP EDI
005F3F5E  5E                        POP ESI
005F3F5F  5B                        POP EBX
005F3F60  8B E5                     MOV ESP,EBP
005F3F62  5D                        POP EBP
005F3F63  C2 10 00                  RET 0x10
LAB_005f3f66:
005F3F66  8B 86 DF 00 00 00         MOV EAX,dword ptr [ESI + 0xdf]
005F3F6C  0F AF C0                  IMUL EAX,EAX
005F3F6F  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
005F3F72  8D 04 C8                  LEA EAX,[EAX + ECX*0x8]
005F3F75  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
005F3F78  B8 BF BF 8C 82            MOV EAX,0x828cbfbf
005F3F7D  8D 0C 89                  LEA ECX,[ECX + ECX*0x4]
005F3F80  C1 E1 04                  SHL ECX,0x4
005F3F83  F7 E9                     IMUL ECX
005F3F85  03 D1                     ADD EDX,ECX
005F3F87  B9 B0 04 00 00            MOV ECX,0x4b0
005F3F8C  C1 FA 08                  SAR EDX,0x8
005F3F8F  8B C2                     MOV EAX,EDX
005F3F91  C1 E8 1F                  SHR EAX,0x1f
005F3F94  03 D0                     ADD EDX,EAX
005F3F96  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F3F99  89 96 F7 00 00 00         MOV dword ptr [ESI + 0xf7],EDX
005F3F9F  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F3FA2  2B 8E 9B 00 00 00         SUB ECX,dword ptr [ESI + 0x9b]
005F3FA8  D8 3D 8C C5 79 00         FDIVR float ptr [0x0079c58c]
005F3FAE  89 4D 10                  MOV dword ptr [EBP + 0x10],ECX
005F3FB1  D9 FA                     FSQRT
005F3FB3  E8 D0 A2 13 00            CALL 0x0072e288
005F3FB8  DB 45 F0                  FILD dword ptr [EBP + -0x10]
005F3FBB  8B F8                     MOV EDI,EAX
005F3FBD  83 EC 08                  SUB ESP,0x8
005F3FC0  47                        INC EDI
005F3FC1  8D 14 3F                  LEA EDX,[EDI + EDI*0x1]
005F3FC4  89 55 14                  MOV dword ptr [EBP + 0x14],EDX
005F3FC7  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F3FCA  D8 F9                     FDIVR ST0,ST1
005F3FCC  D9 55 14                  FST float ptr [EBP + 0x14]
005F3FCF  D8 4D 14                  FMUL float ptr [EBP + 0x14]
005F3FD2  D8 F1                     FDIV ST0,ST1
005F3FD4  D9 5D F0                  FSTP float ptr [EBP + -0x10]
005F3FD7  DD D8                     FSTP ST0
005F3FD9  D9 45 14                  FLD float ptr [EBP + 0x14]
005F3FDC  D8 75 F0                  FDIV float ptr [EBP + -0x10]
005F3FDF  D8 05 84 07 79 00         FADD float ptr [0x00790784]
005F3FE5  DD 1C 24                  FSTP double ptr [ESP]
005F3FE8  E8 63 A1 13 00            CALL 0x0072e150
005F3FED  83 C4 08                  ADD ESP,0x8
005F3FF0  E8 93 A2 13 00            CALL 0x0072e288
005F3FF5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
005F3FF8  8B 86 EF 00 00 00         MOV EAX,dword ptr [ESI + 0xef]
005F3FFE  85 C0                     TEST EAX,EAX
005F4000  0F 84 D6 01 00 00         JZ 0x005f41dc
005F4006  66 8B 86 93 00 00 00      MOV AX,word ptr [ESI + 0x93]
005F400D  66 8B 8E 97 00 00 00      MOV CX,word ptr [ESI + 0x97]
005F4014  D9 45 14                  FLD float ptr [EBP + 0x14]
005F4017  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F401D  66 8B 96 9B 00 00 00      MOV DX,word ptr [ESI + 0x9b]
005F4024  66 89 86 D1 00 00 00      MOV word ptr [ESI + 0xd1],AX
005F402B  8B 86 DF 00 00 00         MOV EAX,dword ptr [ESI + 0xdf]
005F4031  89 BE FF 00 00 00         MOV dword ptr [ESI + 0xff],EDI
005F4037  66 89 8E D3 00 00 00      MOV word ptr [ESI + 0xd3],CX
005F403E  66 89 96 D5 00 00 00      MOV word ptr [ESI + 0xd5],DX
005F4045  89 86 E3 00 00 00         MOV dword ptr [ESI + 0xe3],EAX
005F404B  E8 38 A2 13 00            CALL 0x0072e288
005F4050  D9 45 F0                  FLD float ptr [EBP + -0x10]
005F4053  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F4059  89 86 CD 00 00 00         MOV dword ptr [ESI + 0xcd],EAX
005F405F  E8 24 A2 13 00            CALL 0x0072e288
005F4064  8B F8                     MOV EDI,EAX
005F4066  8B 86 DF 00 00 00         MOV EAX,dword ptr [ESI + 0xdf]
005F406C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
005F406F  8D 4D E4                  LEA ECX,[EBP + -0x1c]
005F4072  F7 D8                     NEG EAX
005F4074  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
005F4077  51                        PUSH ECX
005F4078  DB 45 EC                  FILD dword ptr [EBP + -0x14]
005F407B  51                        PUSH ECX
005F407C  D9 1C 24                  FSTP float ptr [ESP]
005F407F  DB 45 10                  FILD dword ptr [EBP + 0x10]
005F4082  51                        PUSH ECX
005F4083  D9 1C 24                  FSTP float ptr [ESP]
005F4086  DB 45 14                  FILD dword ptr [EBP + 0x14]
005F4089  51                        PUSH ECX
005F408A  D9 1C 24                  FSTP float ptr [ESP]
005F408D  DB 45 F4                  FILD dword ptr [EBP + -0xc]
005F4090  51                        PUSH ECX
005F4091  8B CE                     MOV ECX,ESI
005F4093  D9 1C 24                  FSTP float ptr [ESP]
005F4096  E8 7E 1A E1 FF            CALL 0x00405b19
005F409B  85 C0                     TEST EAX,EAX
005F409D  0F 84 39 01 00 00         JZ 0x005f41dc
005F40A3  D9 45 E4                  FLD float ptr [EBP + -0x1c]
005F40A6  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F40AC  E8 D7 A1 13 00            CALL 0x0072e288
005F40B1  D9 45 E8                  FLD float ptr [EBP + -0x18]
005F40B4  D8 0D 90 C5 79 00         FMUL float ptr [0x0079c590]
005F40BA  89 86 DF 00 00 00         MOV dword ptr [ESI + 0xdf],EAX
005F40C0  E8 C3 A1 13 00            CALL 0x0072e288
005F40C5  0F BF 96 D1 00 00 00      MOVSX EDX,word ptr [ESI + 0xd1]
005F40CC  89 86 EB 00 00 00         MOV dword ptr [ESI + 0xeb],EAX
005F40D2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F40D5  2B C2                     SUB EAX,EDX
005F40D7  0F AF C7                  IMUL EAX,EDI
005F40DA  99                        CDQ
005F40DB  F7 FB                     IDIV EBX
005F40DD  0F BF 8E D3 00 00 00      MOVSX ECX,word ptr [ESI + 0xd3]
005F40E4  89 86 D7 00 00 00         MOV dword ptr [ESI + 0xd7],EAX
005F40EA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F40ED  2B C1                     SUB EAX,ECX
005F40EF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F40F2  0F AF C7                  IMUL EAX,EDI
005F40F5  99                        CDQ
005F40F6  F7 FB                     IDIV EBX
005F40F8  BF 01 00 00 00            MOV EDI,0x1
005F40FD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F4100  89 86 DB 00 00 00         MOV dword ptr [ESI + 0xdb],EAX
005F4106  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
005F410C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
005F4112  89 BE C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDI
005F4118  89 86 FB 00 00 00         MOV dword ptr [ESI + 0xfb],EAX
005F411E  8B C3                     MOV EAX,EBX
005F4120  99                        CDQ
005F4121  2B C2                     SUB EAX,EDX
005F4123  89 8E E7 00 00 00         MOV dword ptr [ESI + 0xe7],ECX
005F4129  D1 F8                     SAR EAX,0x1
005F412B  89 86 F3 00 00 00         MOV dword ptr [ESI + 0xf3],EAX
005F4131  8B C7                     MOV EAX,EDI
005F4133  5F                        POP EDI
005F4134  5E                        POP ESI
005F4135  5B                        POP EBX
005F4136  8B E5                     MOV ESP,EBP
005F4138  5D                        POP EBP
005F4139  C2 10 00                  RET 0x10
LAB_005f413c:
005F413C  66 8B 86 93 00 00 00      MOV AX,word ptr [ESI + 0x93]
005F4143  66 8B 8E 97 00 00 00      MOV CX,word ptr [ESI + 0x97]
005F414A  66 89 86 D1 00 00 00      MOV word ptr [ESI + 0xd1],AX
005F4151  66 8B 86 9B 00 00 00      MOV AX,word ptr [ESI + 0x9b]
005F4158  66 89 8E D3 00 00 00      MOV word ptr [ESI + 0xd3],CX
005F415F  66 89 86 D5 00 00 00      MOV word ptr [ESI + 0xd5],AX
005F4166  0F BF C8                  MOVSX ECX,AX
005F4169  B8 84 03 00 00            MOV EAX,0x384
005F416E  BF 01 00 00 00            MOV EDI,0x1
005F4173  2B C1                     SUB EAX,ECX
005F4175  C7 86 DF 00 00 00 14 00 00 00  MOV dword ptr [ESI + 0xdf],0x14
005F417F  89 BE E7 00 00 00         MOV dword ptr [ESI + 0xe7],EDI
005F4185  89 86 EF 00 00 00         MOV dword ptr [ESI + 0xef],EAX
005F418B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F4191  3B C2                     CMP EAX,EDX
005F4193  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
005F4199  89 8E FB 00 00 00         MOV dword ptr [ESI + 0xfb],ECX
005F419F  7E 14                     JLE 0x005f41b5
005F41A1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
005F41A4  8B C7                     MOV EAX,EDI
005F41A6  89 96 C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDX
005F41AC  5F                        POP EDI
005F41AD  5E                        POP ESI
005F41AE  5B                        POP EBX
005F41AF  8B E5                     MOV ESP,EBP
005F41B1  5D                        POP EBP
005F41B2  C2 10 00                  RET 0x10
LAB_005f41b5:
005F41B5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005F41B8  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005F41BB  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005F41BE  57                        PUSH EDI
005F41BF  52                        PUSH EDX
005F41C0  50                        PUSH EAX
005F41C1  51                        PUSH ECX
005F41C2  8B CE                     MOV ECX,ESI
005F41C4  E8 73 05 E1 FF            CALL 0x0040473c
005F41C9  85 C0                     TEST EAX,EAX
005F41CB  74 0F                     JZ 0x005f41dc
005F41CD  89 BE C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDI
005F41D3  89 BE 04 01 00 00         MOV dword ptr [ESI + 0x104],EDI
005F41D9  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_005f41dc:
005F41DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005F41DF  5F                        POP EDI
005F41E0  5E                        POP ESI
005F41E1  5B                        POP EBX
005F41E2  8B E5                     MOV ESP,EBP
005F41E4  5D                        POP EBP
005F41E5  C2 10 00                  RET 0x10
