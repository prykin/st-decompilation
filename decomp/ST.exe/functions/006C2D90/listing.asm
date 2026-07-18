FUN_006c2d90:
006C2D90  55                        PUSH EBP
006C2D91  8B EC                     MOV EBP,ESP
006C2D93  81 EC A8 00 00 00         SUB ESP,0xa8
006C2D99  53                        PUSH EBX
006C2D9A  56                        PUSH ESI
006C2D9B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2D9E  57                        PUSH EDI
006C2D9F  33 FF                     XOR EDI,EDI
006C2DA1  C7 45 D8 10 00 00 00      MOV dword ptr [EBP + -0x28],0x10
006C2DA8  3B F7                     CMP ESI,EDI
006C2DAA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C2DAD  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
006C2DB0  89 3D C8 68 85 00         MOV dword ptr [0x008568c8],EDI
006C2DB6  89 3D CC 68 85 00         MOV dword ptr [0x008568cc],EDI
006C2DBC  0F 84 5E 05 00 00         JZ 0x006c3320
006C2DC2  39 3E                     CMP dword ptr [ESI],EDI
006C2DC4  0F 84 56 05 00 00         JZ 0x006c3320
006C2DCA  F7 46 08 00 00 00 40      TEST dword ptr [ESI + 0x8],0x40000000
006C2DD1  0F 84 49 05 00 00         JZ 0x006c3320
006C2DD7  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C2DDA  83 78 20 08               CMP dword ptr [EAX + 0x20],0x8
006C2DDE  7F 21                     JG 0x006c2e01
006C2DE0  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C2DE6  68 14 01 00 00            PUSH 0x114
006C2DEB  68 64 DE 7E 00            PUSH 0x7ede64
006C2DF0  51                        PUSH ECX
006C2DF1  6A D0                     PUSH -0x30
006C2DF3  E8 48 30 FE FF            CALL 0x006a5e40
006C2DF8  5F                        POP EDI
006C2DF9  5E                        POP ESI
006C2DFA  5B                        POP EBX
006C2DFB  8B E5                     MOV ESP,EBP
006C2DFD  5D                        POP EBP
006C2DFE  C2 04 00                  RET 0x4
LAB_006c2e01:
006C2E01  56                        PUSH ESI
006C2E02  E8 39 05 00 00            CALL 0x006c3340
006C2E07  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
006C2E0A  8B 46 3C                  MOV EAX,dword ptr [ESI + 0x3c]
006C2E0D  8B 5E 24                  MOV EBX,dword ptr [ESI + 0x24]
006C2E10  8B 4E 40                  MOV ECX,dword ptr [ESI + 0x40]
006C2E13  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
006C2E16  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
006C2E19  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
006C2E1C  8B 56 28                  MOV EDX,dword ptr [ESI + 0x28]
006C2E1F  3B C3                     CMP EAX,EBX
006C2E21  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
006C2E24  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
006C2E27  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
006C2E2A  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
006C2E2D  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
006C2E30  75 28                     JNZ 0x006c2e5a
006C2E32  3B CA                     CMP ECX,EDX
006C2E34  75 24                     JNZ 0x006c2e5a
006C2E36  8B 7E 14                  MOV EDI,dword ptr [ESI + 0x14]
006C2E39  3B C7                     CMP EAX,EDI
006C2E3B  7F 1D                     JG 0x006c2e5a
006C2E3D  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
006C2E40  3B CA                     CMP ECX,EDX
006C2E42  7F 16                     JG 0x006c2e5a
006C2E44  F6 46 08 04               TEST byte ptr [ESI + 0x8],0x4
006C2E48  0F 84 13 01 00 00         JZ 0x006c2f61
006C2E4E  3B C7                     CMP EAX,EDI
006C2E50  75 08                     JNZ 0x006c2e5a
006C2E52  3B CA                     CMP ECX,EDX
006C2E54  0F 84 07 01 00 00         JZ 0x006c2f61
LAB_006c2e5a:
006C2E5A  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C2E5D  BA 01 00 00 00            MOV EDX,0x1
006C2E62  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
006C2E65  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
006C2E68  89 4D D8                  MOV dword ptr [EBP + -0x28],ECX
006C2E6B  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
006C2E71  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
006C2E74  8B 88 C8 04 00 00         MOV ECX,dword ptr [EAX + 0x4c8]
006C2E7A  89 4D CC                  MOV dword ptr [EBP + -0x34],ECX
006C2E7D  8B 88 CC 04 00 00         MOV ECX,dword ptr [EAX + 0x4cc]
006C2E83  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
006C2E86  8B 48 20                  MOV ECX,dword ptr [EAX + 0x20]
006C2E89  83 F9 10                  CMP ECX,0x10
006C2E8C  74 69                     JZ 0x006c2ef7
006C2E8E  83 F9 18                  CMP ECX,0x18
006C2E91  74 4A                     JZ 0x006c2edd
006C2E93  83 F9 20                  CMP ECX,0x20
006C2E96  74 21                     JZ 0x006c2eb9
006C2E98  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C2E9E  68 4D 01 00 00            PUSH 0x14d
006C2EA3  68 64 DE 7E 00            PUSH 0x7ede64
006C2EA8  52                        PUSH EDX
006C2EA9  6A D0                     PUSH -0x30
006C2EAB  E8 90 2F FE FF            CALL 0x006a5e40
006C2EB0  5F                        POP EDI
006C2EB1  5E                        POP ESI
006C2EB2  5B                        POP EBX
006C2EB3  8B E5                     MOV ESP,EBP
006C2EB5  5D                        POP EBP
006C2EB6  C2 04 00                  RET 0x4
LAB_006c2eb9:
006C2EB9  81 B8 C4 04 00 00 00 00 FF 00  CMP dword ptr [EAX + 0x4c4],0xff0000
006C2EC3  75 0C                     JNZ 0x006c2ed1
006C2EC5  C7 46 30 03 00 00 00      MOV dword ptr [ESI + 0x30],0x3
006C2ECC  E9 90 00 00 00            JMP 0x006c2f61
LAB_006c2ed1:
006C2ED1  C7 46 30 04 00 00 00      MOV dword ptr [ESI + 0x30],0x4
006C2ED8  E9 84 00 00 00            JMP 0x006c2f61
LAB_006c2edd:
006C2EDD  81 B8 C4 04 00 00 00 00 FF 00  CMP dword ptr [EAX + 0x4c4],0xff0000
006C2EE7  75 05                     JNZ 0x006c2eee
006C2EE9  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
006C2EEC  EB 73                     JMP 0x006c2f61
LAB_006c2eee:
006C2EEE  C7 46 30 02 00 00 00      MOV dword ptr [ESI + 0x30],0x2
006C2EF5  EB 6A                     JMP 0x006c2f61
LAB_006c2ef7:
006C2EF7  8B 88 C4 04 00 00         MOV ECX,dword ptr [EAX + 0x4c4]
006C2EFD  81 F9 00 7C 00 00         CMP ECX,0x7c00
006C2F03  75 09                     JNZ 0x006c2f0e
006C2F05  C7 46 30 09 00 00 00      MOV dword ptr [ESI + 0x30],0x9
006C2F0C  EB 53                     JMP 0x006c2f61
LAB_006c2f0e:
006C2F0E  81 F9 00 F8 00 00         CMP ECX,0xf800
006C2F14  75 09                     JNZ 0x006c2f1f
006C2F16  C7 46 30 0A 00 00 00      MOV dword ptr [ESI + 0x30],0xa
006C2F1D  EB 42                     JMP 0x006c2f61
LAB_006c2f1f:
006C2F1F  8B 80 C8 04 00 00         MOV EAX,dword ptr [EAX + 0x4c8]
006C2F25  3D E0 03 00 00            CMP EAX,0x3e0
006C2F2A  75 09                     JNZ 0x006c2f35
006C2F2C  C7 46 30 0B 00 00 00      MOV dword ptr [ESI + 0x30],0xb
006C2F33  EB 2C                     JMP 0x006c2f61
LAB_006c2f35:
006C2F35  3D F0 03 00 00            CMP EAX,0x3f0
006C2F3A  75 09                     JNZ 0x006c2f45
006C2F3C  C7 46 30 0C 00 00 00      MOV dword ptr [ESI + 0x30],0xc
006C2F43  EB 1C                     JMP 0x006c2f61
LAB_006c2f45:
006C2F45  C7 46 30 0A 00 00 00      MOV dword ptr [ESI + 0x30],0xa
006C2F4C  C7 45 C8 00 F8 00 00      MOV dword ptr [EBP + -0x38],0xf800
006C2F53  C7 45 CC E0 07 00 00      MOV dword ptr [EBP + -0x34],0x7e0
006C2F5A  C7 45 D0 1F 00 00 00      MOV dword ptr [EBP + -0x30],0x1f
LAB_006c2f61:
006C2F61  F6 46 08 04               TEST byte ptr [ESI + 0x8],0x4
006C2F65  74 1A                     JZ 0x006c2f81
006C2F67  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
006C2F6A  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006C2F6D  8B 56 14                  MOV EDX,dword ptr [ESI + 0x14]
006C2F70  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C2F73  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006C2F76  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
006C2F79  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
006C2F7C  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
006C2F7F  EB 30                     JMP 0x006c2fb1
LAB_006c2f81:
006C2F81  8B 46 14                  MOV EAX,dword ptr [ESI + 0x14]
006C2F84  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C2F87  2B C3                     SUB EAX,EBX
006C2F89  89 4D E4                  MOV dword ptr [EBP + -0x1c],ECX
006C2F8C  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006C2F8F  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
006C2F92  99                        CDQ
006C2F93  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
006C2F96  2B C2                     SUB EAX,EDX
006C2F98  D1 F8                     SAR EAX,0x1
006C2F9A  03 C1                     ADD EAX,ECX
006C2F9C  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006C2F9F  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
006C2FA2  8B 46 18                  MOV EAX,dword ptr [ESI + 0x18]
006C2FA5  2B C3                     SUB EAX,EBX
006C2FA7  99                        CDQ
006C2FA8  2B C2                     SUB EAX,EDX
006C2FAA  D1 F8                     SAR EAX,0x1
006C2FAC  03 C1                     ADD EAX,ECX
006C2FAE  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_006c2fb1:
006C2FB1  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
006C2FB7  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
006C2FBD  8D 85 58 FF FF FF         LEA EAX,[EBP + 0xffffff58]
006C2FC3  6A 00                     PUSH 0x0
006C2FC5  51                        PUSH ECX
006C2FC6  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
006C2FCC  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006C2FD1  E8 1A A8 06 00            CALL 0x0072d7f0
006C2FD6  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2FD9  83 C4 08                  ADD ESP,0x8
006C2FDC  85 C0                     TEST EAX,EAX
006C2FDE  0F 85 D8 02 00 00         JNZ 0x006c32bc
006C2FE4  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C2FE7  68 80 34 6C 00            PUSH 0x6c3480
006C2FEC  6A FC                     PUSH -0x4
006C2FEE  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006C2FF1  50                        PUSH EAX
006C2FF2  FF 15 60 BE 85 00         CALL dword ptr [0x0085be60]
006C2FF8  A3 C8 68 85 00            MOV [0x008568c8],EAX
006C2FFD  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
006C3000  85 C0                     TEST EAX,EAX
006C3002  0F 84 84 01 00 00         JZ 0x006c318c
006C3008  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
006C300B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C300E  8B 7D C0                  MOV EDI,dword ptr [EBP + -0x40]
006C3011  8D 4D C8                  LEA ECX,[EBP + -0x38]
006C3014  6A 01                     PUSH 0x1
006C3016  51                        PUSH ECX
006C3017  6A 03                     PUSH 0x3
006C3019  52                        PUSH EDX
006C301A  50                        PUSH EAX
006C301B  57                        PUSH EDI
006C301C  E8 9F 20 FF FF            CALL 0x006b50c0
006C3021  50                        PUSH EAX
006C3022  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006C3025  E8 76 1F FF FF            CALL 0x006b4fa0
006C302A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006C302D  8B D8                     MOV EBX,EAX
006C302F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
006C3032  6A 00                     PUSH 0x0
006C3034  8B C8                     MOV ECX,EAX
006C3036  50                        PUSH EAX
006C3037  F7 D9                     NEG ECX
006C3039  57                        PUSH EDI
006C303A  89 4A 08                  MOV dword ptr [EDX + 0x8],ECX
006C303D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C3040  6A 00                     PUSH 0x0
006C3042  6A 00                     PUSH 0x0
006C3044  6A 00                     PUSH 0x0
006C3046  50                        PUSH EAX
006C3047  E8 24 11 FF FF            CALL 0x006b4170
006C304C  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006c304f:
006C304F  8B 0E                     MOV ECX,dword ptr [ESI]
006C3051  51                        PUSH ECX
006C3052  FF 15 78 BF 85 00         CALL dword ptr [0x0085bf78]
006C3058  85 C0                     TEST EAX,EAX
006C305A  74 51                     JZ 0x006c30ad
LAB_006c305c:
006C305C  6A 01                     PUSH 0x1
006C305E  6A 00                     PUSH 0x0
006C3060  6A 00                     PUSH 0x0
006C3062  8D 55 9C                  LEA EDX,[EBP + -0x64]
006C3065  6A 00                     PUSH 0x0
006C3067  52                        PUSH EDX
006C3068  FF 15 FC BD 85 00         CALL dword ptr [0x0085bdfc]
006C306E  85 C0                     TEST EAX,EAX
006C3070  74 1A                     JZ 0x006c308c
006C3072  83 7D A0 12               CMP dword ptr [EBP + -0x60],0x12
006C3076  74 2B                     JZ 0x006c30a3
006C3078  8D 45 9C                  LEA EAX,[EBP + -0x64]
006C307B  50                        PUSH EAX
006C307C  FF 15 F4 BD 85 00         CALL dword ptr [0x0085bdf4]
006C3082  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006C3085  51                        PUSH ECX
006C3086  FF 15 F8 BD 85 00         CALL dword ptr [0x0085bdf8]
LAB_006c308c:
006C308C  6A 0A                     PUSH 0xa
006C308E  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006C3094  8B 16                     MOV EDX,dword ptr [ESI]
006C3096  52                        PUSH EDX
006C3097  FF 15 78 BF 85 00         CALL dword ptr [0x0085bf78]
006C309D  85 C0                     TEST EAX,EAX
006C309F  75 BB                     JNZ 0x006c305c
006C30A1  EB 0A                     JMP 0x006c30ad
LAB_006c30a3:
006C30A3  C7 05 CC 68 85 00 01 00 00 00  MOV dword ptr [0x008568cc],0x1
LAB_006c30ad:
006C30AD  A1 CC 68 85 00            MOV EAX,[0x008568cc]
006C30B2  85 C0                     TEST EAX,EAX
006C30B4  0F 85 F4 01 00 00         JNZ 0x006c32ae
006C30BA  8B 06                     MOV EAX,dword ptr [ESI]
006C30BC  50                        PUSH EAX
006C30BD  FF 15 74 BF 85 00         CALL dword ptr [0x0085bf74]
006C30C3  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006C30C6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C30C9  51                        PUSH ECX
006C30CA  33 C9                     XOR ECX,ECX
006C30CC  66 8B 48 0E               MOV CX,word ptr [EAX + 0xe]
006C30D0  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
006C30D3  0F AF 48 04               IMUL ECX,dword ptr [EAX + 0x4]
006C30D7  83 C1 1F                  ADD ECX,0x1f
006C30DA  6A 00                     PUSH 0x0
006C30DC  C1 E9 03                  SHR ECX,0x3
006C30DF  6A 00                     PUSH 0x0
006C30E1  81 E1 FC FF FF 1F         AND ECX,0x1ffffffc
006C30E7  52                        PUSH EDX
006C30E8  8B 16                     MOV EDX,dword ptr [ESI]
006C30EA  51                        PUSH ECX
006C30EB  53                        PUSH EBX
006C30EC  52                        PUSH EDX
006C30ED  FF 15 8C BF 85 00         CALL dword ptr [0x0085bf8c]
006C30F3  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C30F6  8D 45 D4                  LEA EAX,[EBP + -0x2c]
006C30F9  50                        PUSH EAX
006C30FA  51                        PUSH ECX
006C30FB  E8 70 B6 00 00            CALL 0x006ce770
006C3100  8B F8                     MOV EDI,EAX
006C3102  85 FF                     TEST EDI,EDI
006C3104  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C3107  74 17                     JZ 0x006c3120
006C3109  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C310F  68 80 01 00 00            PUSH 0x180
006C3114  68 64 DE 7E 00            PUSH 0x7ede64
006C3119  52                        PUSH EDX
006C311A  57                        PUSH EDI
006C311B  E8 20 2D FE FF            CALL 0x006a5e40
LAB_006c3120:
006C3120  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C3123  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
006C3126  8B 55 C4                  MOV EDX,dword ptr [EBP + -0x3c]
006C3129  68 20 00 CC 00            PUSH 0xcc0020
006C312E  6A 00                     PUSH 0x0
006C3130  50                        PUSH EAX
006C3131  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
006C3134  53                        PUSH EBX
006C3135  51                        PUSH ECX
006C3136  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006C3139  52                        PUSH EDX
006C313A  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
006C313D  50                        PUSH EAX
006C313E  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006C3141  51                        PUSH ECX
006C3142  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006C3145  52                        PUSH EDX
006C3146  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
006C3149  50                        PUSH EAX
006C314A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
006C314D  51                        PUSH ECX
006C314E  52                        PUSH EDX
006C314F  50                        PUSH EAX
006C3150  FF 15 A4 BA 85 00         CALL dword ptr [0x0085baa4]
006C3156  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
006C3159  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C315C  51                        PUSH ECX
006C315D  52                        PUSH EDX
006C315E  E8 5D B7 00 00            CALL 0x006ce8c0
006C3163  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C3166  6A 00                     PUSH 0x0
006C3168  6A 00                     PUSH 0x0
006C316A  50                        PUSH EAX
006C316B  E8 00 82 FF FF            CALL 0x006bb370
006C3170  8B 06                     MOV EAX,dword ptr [ESI]
006C3172  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006C3175  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006C3178  3B CA                     CMP ECX,EDX
006C317A  0F 84 2E 01 00 00         JZ 0x006c32ae
006C3180  50                        PUSH EAX
006C3181  FF 15 84 BF 85 00         CALL dword ptr [0x0085bf84]
006C3187  E9 C3 FE FF FF            JMP 0x006c304f
LAB_006c318c:
006C318C  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C318F  8B 42 40                  MOV EAX,dword ptr [EDX + 0x40]
006C3192  50                        PUSH EAX
006C3193  FF 15 88 BF 85 00         CALL dword ptr [0x0085bf88]
006C3199  83 F8 FF                  CMP EAX,-0x1
006C319C  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
006C319F  75 18                     JNZ 0x006c31b9
006C31A1  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
006C31A7  68 92 01 00 00            PUSH 0x192
006C31AC  68 64 DE 7E 00            PUSH 0x7ede64
006C31B1  51                        PUSH ECX
006C31B2  6A CC                     PUSH -0x34
006C31B4  E8 87 2C FE FF            CALL 0x006a5e40
LAB_006c31b9:
006C31B9  8B 1D 78 BF 85 00         MOV EBX,dword ptr [0x0085bf78]
006C31BF  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_006c31c2:
006C31C2  8B 16                     MOV EDX,dword ptr [ESI]
006C31C4  52                        PUSH EDX
006C31C5  FF D3                     CALL EBX
006C31C7  85 C0                     TEST EAX,EAX
006C31C9  74 4D                     JZ 0x006c3218
LAB_006c31cb:
006C31CB  6A 01                     PUSH 0x1
006C31CD  6A 00                     PUSH 0x0
006C31CF  6A 00                     PUSH 0x0
006C31D1  8D 45 9C                  LEA EAX,[EBP + -0x64]
006C31D4  6A 00                     PUSH 0x0
006C31D6  50                        PUSH EAX
006C31D7  FF 15 FC BD 85 00         CALL dword ptr [0x0085bdfc]
006C31DD  85 C0                     TEST EAX,EAX
006C31DF  74 1A                     JZ 0x006c31fb
006C31E1  83 7D A0 12               CMP dword ptr [EBP + -0x60],0x12
006C31E5  74 27                     JZ 0x006c320e
006C31E7  8D 4D 9C                  LEA ECX,[EBP + -0x64]
006C31EA  51                        PUSH ECX
006C31EB  FF 15 F4 BD 85 00         CALL dword ptr [0x0085bdf4]
006C31F1  8D 55 9C                  LEA EDX,[EBP + -0x64]
006C31F4  52                        PUSH EDX
006C31F5  FF 15 F8 BD 85 00         CALL dword ptr [0x0085bdf8]
LAB_006c31fb:
006C31FB  6A 0A                     PUSH 0xa
006C31FD  FF 15 6C BC 85 00         CALL dword ptr [0x0085bc6c]
006C3203  8B 06                     MOV EAX,dword ptr [ESI]
006C3205  50                        PUSH EAX
006C3206  FF D3                     CALL EBX
006C3208  85 C0                     TEST EAX,EAX
006C320A  75 BF                     JNZ 0x006c31cb
006C320C  EB 0A                     JMP 0x006c3218
LAB_006c320e:
006C320E  C7 05 CC 68 85 00 01 00 00 00  MOV dword ptr [0x008568cc],0x1
LAB_006c3218:
006C3218  A1 CC 68 85 00            MOV EAX,[0x008568cc]
006C321D  85 C0                     TEST EAX,EAX
006C321F  0F 85 89 00 00 00         JNZ 0x006c32ae
006C3225  8B 0E                     MOV ECX,dword ptr [ESI]
006C3227  51                        PUSH ECX
006C3228  FF 15 74 BF 85 00         CALL dword ptr [0x0085bf74]
006C322E  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C3231  52                        PUSH EDX
006C3232  E8 79 86 FF FF            CALL 0x006bb8b0
006C3237  8B F8                     MOV EDI,EAX
006C3239  85 FF                     TEST EDI,EDI
006C323B  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
006C323E  74 16                     JZ 0x006c3256
006C3240  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C3245  68 A9 01 00 00            PUSH 0x1a9
006C324A  68 64 DE 7E 00            PUSH 0x7ede64
006C324F  50                        PUSH EAX
006C3250  57                        PUSH EDI
006C3251  E8 EA 2B FE FF            CALL 0x006a5e40
LAB_006c3256:
006C3256  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
006C3259  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006C325C  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
006C325F  51                        PUSH ECX
006C3260  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
006C3263  52                        PUSH EDX
006C3264  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
006C3267  51                        PUSH ECX
006C3268  8B 88 78 04 00 00         MOV ECX,dword ptr [EAX + 0x478]
006C326E  52                        PUSH EDX
006C326F  8B 90 74 04 00 00         MOV EDX,dword ptr [EAX + 0x474]
006C3275  8B 06                     MOV EAX,dword ptr [ESI]
006C3277  51                        PUSH ECX
006C3278  52                        PUSH EDX
006C3279  50                        PUSH EAX
006C327A  FF 15 8C BF 85 00         CALL dword ptr [0x0085bf8c]
006C3280  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006C3283  51                        PUSH ECX
006C3284  E8 F7 86 FF FF            CALL 0x006bb980
006C3289  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C328C  6A 00                     PUSH 0x0
006C328E  6A 00                     PUSH 0x0
006C3290  52                        PUSH EDX
006C3291  E8 DA 80 FF FF            CALL 0x006bb370
006C3296  8B 06                     MOV EAX,dword ptr [ESI]
006C3298  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006C329B  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
006C329E  3B CA                     CMP ECX,EDX
006C32A0  74 0C                     JZ 0x006c32ae
006C32A2  50                        PUSH EAX
006C32A3  FF 15 84 BF 85 00         CALL dword ptr [0x0085bf84]
006C32A9  E9 14 FF FF FF            JMP 0x006c31c2
LAB_006c32ae:
006C32AE  8B 95 58 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff58]
006C32B4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006C32BA  EB 11                     JMP 0x006c32cd
LAB_006c32bc:
006C32BC  8B 8D 58 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff58]
006C32C2  8B F8                     MOV EDI,EAX
006C32C4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006C32CA  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
LAB_006c32cd:
006C32CD  A1 C8 68 85 00            MOV EAX,[0x008568c8]
006C32D2  85 C0                     TEST EAX,EAX
006C32D4  74 10                     JZ 0x006c32e6
006C32D6  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006C32D9  50                        PUSH EAX
006C32DA  6A FC                     PUSH -0x4
006C32DC  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
006C32DF  50                        PUSH EAX
006C32E0  FF 15 60 BE 85 00         CALL dword ptr [0x0085be60]
LAB_006c32e6:
006C32E6  8D 4D FC                  LEA ECX,[EBP + -0x4]
006C32E9  51                        PUSH ECX
006C32EA  E8 71 7D FE FF            CALL 0x006ab060
006C32EF  85 FF                     TEST EDI,EDI
006C32F1  74 22                     JZ 0x006c3315
006C32F3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
006C32F9  68 BF 01 00 00            PUSH 0x1bf
006C32FE  68 64 DE 7E 00            PUSH 0x7ede64
006C3303  52                        PUSH EDX
006C3304  57                        PUSH EDI
006C3305  E8 36 2B FE FF            CALL 0x006a5e40
006C330A  8B C7                     MOV EAX,EDI
006C330C  5F                        POP EDI
006C330D  5E                        POP ESI
006C330E  5B                        POP EBX
006C330F  8B E5                     MOV ESP,EBP
006C3311  5D                        POP EBP
006C3312  C2 04 00                  RET 0x4
LAB_006c3315:
006C3315  33 C0                     XOR EAX,EAX
006C3317  5F                        POP EDI
006C3318  5E                        POP ESI
006C3319  5B                        POP EBX
006C331A  8B E5                     MOV ESP,EBP
006C331C  5D                        POP EBP
006C331D  C2 04 00                  RET 0x4
LAB_006c3320:
006C3320  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C3325  68 13 01 00 00            PUSH 0x113
006C332A  68 64 DE 7E 00            PUSH 0x7ede64
006C332F  50                        PUSH EAX
006C3330  6A CC                     PUSH -0x34
006C3332  E8 09 2B FE FF            CALL 0x006a5e40
006C3337  5F                        POP EDI
006C3338  5E                        POP ESI
006C3339  5B                        POP EBX
006C333A  8B E5                     MOV ESP,EBP
006C333C  5D                        POP EBP
006C333D  C2 04 00                  RET 0x4
