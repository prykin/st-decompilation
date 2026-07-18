FUN_004b2d10:
004B2D10  55                        PUSH EBP
004B2D11  8B EC                     MOV EBP,ESP
004B2D13  83 EC 38                  SUB ESP,0x38
004B2D16  53                        PUSH EBX
004B2D17  56                        PUSH ESI
004B2D18  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004B2D1B  57                        PUSH EDI
004B2D1C  33 FF                     XOR EDI,EDI
004B2D1E  83 FE 32                  CMP ESI,0x32
004B2D21  7C 2A                     JL 0x004b2d4d
004B2D23  83 FE 74                  CMP ESI,0x74
004B2D26  7D 25                     JGE 0x004b2d4d
004B2D28  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2D2B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004B2D31  50                        PUSH EAX
004B2D32  E8 80 1C F5 FF            CALL 0x004049b7
004B2D37  25 FF 00 00 00            AND EAX,0xff
004B2D3C  8D 0C 76                  LEA ECX,[ESI + ESI*0x2]
004B2D3F  03 C1                     ADD EAX,ECX
004B2D41  8B 14 85 20 3F 7E 00      MOV EDX,dword ptr [EAX*0x4 + 0x7e3f20]
004B2D48  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004B2D4B  EB 1C                     JMP 0x004b2d69
LAB_004b2d4d:
004B2D4D  83 FE 01                  CMP ESI,0x1
004B2D50  0F 8C 66 03 00 00         JL 0x004b30bc
004B2D56  83 FE 29                  CMP ESI,0x29
004B2D59  0F 8D 5D 03 00 00         JGE 0x004b30bc
004B2D5F  8B 04 B5 AC FB 7D 00      MOV EAX,dword ptr [ESI*0x4 + 0x7dfbac]
004B2D66  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
LAB_004b2d69:
004B2D69  B8 79 19 8C 02            MOV EAX,0x28c1979
004B2D6E  33 DB                     XOR EBX,EBX
004B2D70  F7 2D B0 51 79 00         IMUL dword ptr [0x007951b0]
004B2D76  D1 FA                     SAR EDX,0x1
004B2D78  8B CA                     MOV ECX,EDX
004B2D7A  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
004B2D7D  C1 E9 1F                  SHR ECX,0x1f
004B2D80  03 D1                     ADD EDX,ECX
004B2D82  85 D2                     TEST EDX,EDX
004B2D84  0F 8E 32 03 00 00         JLE 0x004b30bc
004B2D8A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004B2D8D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B2D90  8B D1                     MOV EDX,ECX
004B2D92  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004B2D95  2B D0                     SUB EDX,EAX
004B2D97  2B C1                     SUB EAX,ECX
004B2D99  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004B2D9C  89 7D E4                  MOV dword ptr [EBP + -0x1c],EDI
004B2D9F  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004B2DA2  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004B2DA5  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
004B2DA8  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
004B2DAB  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
LAB_004b2dae:
004B2DAE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B2DB1  33 F6                     XOR ESI,ESI
004B2DB3  3B C7                     CMP EAX,EDI
004B2DB5  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004B2DB8  0F 8E 66 02 00 00         JLE 0x004b3024
LAB_004b2dbe:
004B2DBE  8D 04 1B                  LEA EAX,[EBX + EBX*0x1]
004B2DC1  3B F0                     CMP ESI,EAX
004B2DC3  7D 16                     JGE 0x004b2ddb
004B2DC5  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B2DC8  8B 55 CC                  MOV EDX,dword ptr [EBP + -0x34]
004B2DCB  8B FE                     MOV EDI,ESI
004B2DCD  2B FB                     SUB EDI,EBX
004B2DCF  03 F8                     ADD EDI,EAX
004B2DD1  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B2DD4  03 D0                     ADD EDX,EAX
004B2DD6  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
004B2DD9  EB 40                     JMP 0x004b2e1b
LAB_004b2ddb:
004B2DDB  3B 75 F0                  CMP ESI,dword ptr [EBP + -0x10]
004B2DDE  7D 1A                     JGE 0x004b2dfa
004B2DE0  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
004B2DE3  8D 3C 1A                  LEA EDI,[EDX + EBX*0x1]
004B2DE6  03 F9                     ADD EDI,ECX
004B2DE8  8B CE                     MOV ECX,ESI
004B2DEA  2B C8                     SUB ECX,EAX
004B2DEC  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
004B2DEF  2B CB                     SUB ECX,EBX
004B2DF1  03 C8                     ADD ECX,EAX
004B2DF3  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
004B2DF6  8B C8                     MOV ECX,EAX
004B2DF8  EB 21                     JMP 0x004b2e1b
LAB_004b2dfa:
004B2DFA  3B 75 EC                  CMP ESI,dword ptr [EBP + -0x14]
004B2DFD  7D 0F                     JGE 0x004b2e0e
004B2DFF  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004B2E02  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B2E05  2B FE                     SUB EDI,ESI
004B2E07  03 F8                     ADD EDI,EAX
004B2E09  8D 04 0B                  LEA EAX,[EBX + ECX*0x1]
004B2E0C  EB 0A                     JMP 0x004b2e18
LAB_004b2e0e:
004B2E0E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
004B2E11  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004B2E14  2B C6                     SUB EAX,ESI
004B2E16  03 C1                     ADD EAX,ECX
LAB_004b2e18:
004B2E18  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
LAB_004b2e1b:
004B2E1B  85 FF                     TEST EDI,EDI
004B2E1D  0F 8C F0 01 00 00         JL 0x004b3013
004B2E23  0F BF 15 40 B2 7F 00      MOVSX EDX,word ptr [0x007fb240]
004B2E2A  3B FA                     CMP EDI,EDX
004B2E2C  0F 8D E1 01 00 00         JGE 0x004b3013
004B2E32  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004B2E35  85 C0                     TEST EAX,EAX
004B2E37  0F 8C D6 01 00 00         JL 0x004b3013
004B2E3D  0F BF 05 42 B2 7F 00      MOVSX EAX,word ptr [0x007fb242]
004B2E44  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004B2E47  3B D0                     CMP EDX,EAX
004B2E49  0F 8D C4 01 00 00         JGE 0x004b3013
004B2E4F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004B2E52  52                        PUSH EDX
004B2E53  57                        PUSH EDI
004B2E54  51                        PUSH ECX
004B2E55  50                        PUSH EAX
004B2E56  E8 7D A0 1F 00            CALL 0x006aced8
004B2E5B  8B C8                     MOV ECX,EAX
004B2E5D  B8 79 19 8C 02            MOV EAX,0x28c1979
004B2E62  F7 2D B0 51 79 00         IMUL dword ptr [0x007951b0]
004B2E68  D1 FA                     SAR EDX,0x1
004B2E6A  8B C2                     MOV EAX,EDX
004B2E6C  83 C4 10                  ADD ESP,0x10
004B2E6F  C1 E8 1F                  SHR EAX,0x1f
004B2E72  03 D0                     ADD EDX,EAX
004B2E74  3B CA                     CMP ECX,EDX
004B2E76  0F 8F 94 01 00 00         JG 0x004b3010
004B2E7C  33 C9                     XOR ECX,ECX
004B2E7E  66 39 0D 44 B2 7F 00      CMP word ptr [0x007fb244],CX
004B2E85  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004B2E88  0F 8E 82 01 00 00         JLE 0x004b3010
LAB_004b2e8e:
004B2E8E  0F BF 15 46 B2 7F 00      MOVSX EDX,word ptr [0x007fb246]
004B2E95  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
004B2E9C  0F AF D1                  IMUL EDX,ECX
004B2E9F  0F AF 45 0C               IMUL EAX,dword ptr [EBP + 0xc]
004B2EA3  8B DF                     MOV EBX,EDI
004B2EA5  03 DA                     ADD EBX,EDX
004B2EA7  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004B2EAD  03 C3                     ADD EAX,EBX
004B2EAF  8B 1C C2                  MOV EBX,dword ptr [EDX + EAX*0x8]
004B2EB2  85 DB                     TEST EBX,EBX
004B2EB4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004B2EB7  0F 84 3D 01 00 00         JZ 0x004b2ffa
004B2EBD  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
004B2EC0  83 F8 08                  CMP EAX,0x8
004B2EC3  0F 83 31 01 00 00         JNC 0x004b2ffa
004B2EC9  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B2ECF  85 D2                     TEST EDX,EDX
004B2ED1  74 11                     JZ 0x004b2ee4
004B2ED3  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B2ED6  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
004B2EDE  0F 83 16 01 00 00         JNC 0x004b2ffa
LAB_004b2ee4:
004B2EE4  8B 03                     MOV EAX,dword ptr [EBX]
004B2EE6  8B CB                     MOV ECX,EBX
004B2EE8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004B2EEB  83 F8 73                  CMP EAX,0x73
004B2EEE  0F 85 03 01 00 00         JNZ 0x004b2ff7
004B2EF4  8B 0D 28 67 80 00         MOV ECX,dword ptr [0x00806728]
004B2EFA  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
004B2EFD  88 45 DC                  MOV byte ptr [EBP + -0x24],AL
004B2F00  8A 91 6F 14 00 00         MOV DL,byte ptr [ECX + 0x146f]
004B2F06  84 D2                     TEST DL,DL
004B2F08  74 34                     JZ 0x004b2f3e
004B2F0A  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B2F0D  25 FF 00 00 00            AND EAX,0xff
004B2F12  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004B2F15  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004B2F18  25 FF 00 00 00            AND EAX,0xff
004B2F1D  8D 34 D1                  LEA ESI,[ECX + EDX*0x8]
004B2F20  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004B2F23  8D 0C C1                  LEA ECX,[ECX + EAX*0x8]
004B2F26  8A 84 08 CA 11 00 00      MOV AL,byte ptr [EAX + ECX*0x1 + 0x11ca]
004B2F2D  33 C9                     XOR ECX,ECX
004B2F2F  3A 84 32 CA 11 00 00      CMP AL,byte ptr [EDX + ESI*0x1 + 0x11ca]
004B2F36  0F 95 C1                  SETNZ CL
004B2F39  E9 9F 00 00 00            JMP 0x004b2fdd
LAB_004b2f3e:
004B2F3E  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004B2F41  3A C2                     CMP AL,DL
004B2F43  0F 84 8B 00 00 00         JZ 0x004b2fd4
004B2F49  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004B2F4C  8B F2                     MOV ESI,EDX
004B2F4E  25 FF 00 00 00            AND EAX,0xff
004B2F53  81 E6 FF 00 00 00         AND ESI,0xff
004B2F59  8D 14 C6                  LEA EDX,[ESI + EAX*0x8]
004B2F5C  8A 94 0A 2F 14 00 00      MOV DL,byte ptr [EDX + ECX*0x1 + 0x142f]
004B2F63  84 D2                     TEST DL,DL
004B2F65  75 19                     JNZ 0x004b2f80
004B2F67  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B2F6A  38 94 0B 2F 14 00 00      CMP byte ptr [EBX + ECX*0x1 + 0x142f],DL
004B2F71  75 0A                     JNZ 0x004b2f7d
004B2F73  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B2F76  B8 FE FF FF FF            MOV EAX,0xfffffffe
004B2F7B  EB 59                     JMP 0x004b2fd6
LAB_004b2f7d:
004B2F7D  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b2f80:
004B2F80  80 FA 01                  CMP DL,0x1
004B2F83  75 18                     JNZ 0x004b2f9d
004B2F85  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B2F88  80 BC 0B 2F 14 00 00 00   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x0
004B2F90  75 08                     JNZ 0x004b2f9a
004B2F92  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B2F95  83 C8 FF                  OR EAX,0xffffffff
004B2F98  EB 3C                     JMP 0x004b2fd6
LAB_004b2f9a:
004B2F9A  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b2f9d:
004B2F9D  84 D2                     TEST DL,DL
004B2F9F  75 1A                     JNZ 0x004b2fbb
004B2FA1  8D 1C F0                  LEA EBX,[EAX + ESI*0x8]
004B2FA4  80 BC 0B 2F 14 00 00 01   CMP byte ptr [EBX + ECX*0x1 + 0x142f],0x1
004B2FAC  75 0A                     JNZ 0x004b2fb8
004B2FAE  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004B2FB1  B8 01 00 00 00            MOV EAX,0x1
004B2FB6  EB 1E                     JMP 0x004b2fd6
LAB_004b2fb8:
004B2FB8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_004b2fbb:
004B2FBB  80 FA 01                  CMP DL,0x1
004B2FBE  75 14                     JNZ 0x004b2fd4
004B2FC0  8D 04 F0                  LEA EAX,[EAX + ESI*0x8]
004B2FC3  80 BC 08 2F 14 00 00 01   CMP byte ptr [EAX + ECX*0x1 + 0x142f],0x1
004B2FCB  75 07                     JNZ 0x004b2fd4
004B2FCD  B8 02 00 00 00            MOV EAX,0x2
004B2FD2  EB 02                     JMP 0x004b2fd6
LAB_004b2fd4:
004B2FD4  33 C0                     XOR EAX,EAX
LAB_004b2fd6:
004B2FD6  33 C9                     XOR ECX,ECX
004B2FD8  85 C0                     TEST EAX,EAX
004B2FDA  0F 9C C1                  SETL CL
LAB_004b2fdd:
004B2FDD  8B C1                     MOV EAX,ECX
004B2FDF  85 C0                     TEST EAX,EAX
004B2FE1  74 11                     JZ 0x004b2ff4
004B2FE3  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004B2FE6  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004B2FEC  3B C2                     CMP EAX,EDX
004B2FEE  0F 8D 8D 00 00 00         JGE 0x004b3081
LAB_004b2ff4:
004B2FF4  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
LAB_004b2ff7:
004B2FF7  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
LAB_004b2ffa:
004B2FFA  0F BF 05 44 B2 7F 00      MOVSX EAX,word ptr [0x007fb244]
004B3001  41                        INC ECX
004B3002  3B C8                     CMP ECX,EAX
004B3004  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
004B3007  0F 8C 81 FE FF FF         JL 0x004b2e8e
004B300D  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
LAB_004b3010:
004B3010  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
LAB_004b3013:
004B3013  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004B3016  46                        INC ESI
004B3017  3B F0                     CMP ESI,EAX
004B3019  89 75 D4                  MOV dword ptr [EBP + -0x2c],ESI
004B301C  0F 8C 9C FD FF FF         JL 0x004b2dbe
004B3022  33 FF                     XOR EDI,EDI
LAB_004b3024:
004B3024  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004B3027  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
004B302A  8B 75 EC                  MOV ESI,dword ptr [EBP + -0x14]
004B302D  83 C0 04                  ADD EAX,0x4
004B3030  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004B3033  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004B3036  83 C2 05                  ADD EDX,0x5
004B3039  43                        INC EBX
004B303A  83 C6 06                  ADD ESI,0x6
004B303D  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
004B3040  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004B3043  48                        DEC EAX
004B3044  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004B3047  83 C2 08                  ADD EDX,0x8
004B304A  B8 79 19 8C 02            MOV EAX,0x28c1979
004B304F  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
004B3052  F7 2D B0 51 79 00         IMUL dword ptr [0x007951b0]
004B3058  D1 FA                     SAR EDX,0x1
004B305A  8B C2                     MOV EAX,EDX
004B305C  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
004B305F  8B 75 E4                  MOV ESI,dword ptr [EBP + -0x1c]
004B3062  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
004B3065  C1 E8 1F                  SHR EAX,0x1f
004B3068  03 D0                     ADD EDX,EAX
004B306A  83 C6 07                  ADD ESI,0x7
004B306D  3B DA                     CMP EBX,EDX
004B306F  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
004B3072  0F 8C 36 FD FF FF         JL 0x004b2dae
004B3078  5F                        POP EDI
004B3079  5E                        POP ESI
004B307A  33 C0                     XOR EAX,EAX
004B307C  5B                        POP EBX
004B307D  8B E5                     MOV ESP,EBP
004B307F  5D                        POP EBP
004B3080  C3                        RET
LAB_004b3081:
004B3081  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004B3084  8B 83 D0 04 00 00         MOV EAX,dword ptr [EBX + 0x4d0]
004B308A  2B C1                     SUB EAX,ECX
004B308C  89 83 D0 04 00 00         MOV dword ptr [EBX + 0x4d0],EAX
004B3092  79 0A                     JNS 0x004b309e
004B3094  C7 83 D0 04 00 00 00 00 00 00  MOV dword ptr [EBX + 0x4d0],0x0
LAB_004b309e:
004B309E  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004B30A4  5F                        POP EDI
004B30A5  5E                        POP ESI
004B30A6  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004B30AC  89 83 D4 04 00 00         MOV dword ptr [EBX + 0x4d4],EAX
004B30B2  B8 01 00 00 00            MOV EAX,0x1
004B30B7  5B                        POP EBX
004B30B8  8B E5                     MOV ESP,EBP
004B30BA  5D                        POP EBP
004B30BB  C3                        RET
LAB_004b30bc:
004B30BC  8B C7                     MOV EAX,EDI
004B30BE  5F                        POP EDI
004B30BF  5E                        POP ESI
004B30C0  5B                        POP EBX
004B30C1  8B E5                     MOV ESP,EBP
004B30C3  5D                        POP EBP
004B30C4  C3                        RET
