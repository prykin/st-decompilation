CPanelTy::SetButStruct:
004F2E40  55                        PUSH EBP
004F2E41  8B EC                     MOV EBP,ESP
004F2E43  83 EC 4C                  SUB ESP,0x4c
004F2E46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F2E4B  53                        PUSH EBX
004F2E4C  56                        PUSH ESI
004F2E4D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
004F2E50  57                        PUSH EDI
004F2E51  8D 55 B8                  LEA EDX,[EBP + -0x48]
004F2E54  8D 4D B4                  LEA ECX,[EBP + -0x4c]
004F2E57  6A 00                     PUSH 0x0
004F2E59  52                        PUSH EDX
004F2E5A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
004F2E61  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
004F2E64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F2E6A  E8 81 A9 23 00            CALL 0x0072d7f0
004F2E6F  8B F0                     MOV ESI,EAX
004F2E71  83 C4 08                  ADD ESP,0x8
004F2E74  85 F6                     TEST ESI,ESI
004F2E76  0F 85 A8 01 00 00         JNZ 0x004f3024
004F2E7C  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
004F2E7F  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004F2E82  B9 5F 00 00 00            MOV ECX,0x5f
004F2E87  8B FE                     MOV EDI,ESI
004F2E89  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
004F2E8C  F3 AB                     STOSD.REP ES:EDI
004F2E8E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004F2E91  8B CA                     MOV ECX,EDX
004F2E93  89 06                     MOV dword ptr [ESI],EAX
004F2E95  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F2E98  81 E1 FF 00 00 00         AND ECX,0xff
004F2E9E  8B 7C 88 3C               MOV EDI,dword ptr [EAX + ECX*0x4 + 0x3c]
004F2EA2  03 FB                     ADD EDI,EBX
004F2EA4  83 F9 08                  CMP ECX,0x8
004F2EA7  89 7E 08                  MOV dword ptr [ESI + 0x8],EDI
004F2EAA  8B B8 30 01 00 00         MOV EDI,dword ptr [EAX + 0x130]
004F2EB0  77 1D                     JA 0x004f2ecf
004F2EB2  33 DB                     XOR EBX,EBX
004F2EB4  8A 99 78 30 4F 00         MOV BL,byte ptr [ECX + 0x4f3078]
switchD_004f2eba::switchD:
004F2EBA  FF 24 9D 6C 30 4F 00      JMP dword ptr [EBX*0x4 + 0x4f306c]
switchD_004f2eba::caseD_0:
004F2EC1  8B B8 34 01 00 00         MOV EDI,dword ptr [EAX + 0x134]
004F2EC7  EB 06                     JMP 0x004f2ecf
switchD_004f2eba::caseD_5:
004F2EC9  8B B8 38 01 00 00         MOV EDI,dword ptr [EAX + 0x138]
switchD_004f2eba::caseD_4:
004F2ECF  85 FF                     TEST EDI,EDI
004F2ED1  74 09                     JZ 0x004f2edc
004F2ED3  8B 8C 88 94 00 00 00      MOV ECX,dword ptr [EAX + ECX*0x4 + 0x94]
004F2EDA  EB 1C                     JMP 0x004f2ef8
LAB_004f2edc:
004F2EDC  80 FA 01                  CMP DL,0x1
004F2EDF  74 09                     JZ 0x004f2eea
004F2EE1  80 FA 07                  CMP DL,0x7
004F2EE4  74 04                     JZ 0x004f2eea
004F2EE6  33 C9                     XOR ECX,ECX
004F2EE8  EB 06                     JMP 0x004f2ef0
LAB_004f2eea:
004F2EEA  8B 88 C0 00 00 00         MOV ECX,dword ptr [EAX + 0xc0]
LAB_004f2ef0:
004F2EF0  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004F2EF6  03 CA                     ADD ECX,EDX
LAB_004f2ef8:
004F2EF8  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004F2EFB  8D B8 E1 01 00 00         LEA EDI,[EAX + 0x1e1]
004F2F01  8B 45 20                  MOV EAX,dword ptr [EBP + 0x20]
004F2F04  03 CA                     ADD ECX,EDX
004F2F06  50                        PUSH EAX
004F2F07  BB 01 00 00 00            MOV EBX,0x1
004F2F0C  68 1C 18 7C 00            PUSH 0x7c181c
004F2F11  57                        PUSH EDI
004F2F12  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
004F2F15  89 9E 08 01 00 00         MOV dword ptr [ESI + 0x108],EBX
004F2F1B  89 9E 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EBX
004F2F21  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
004F2F27  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F2F2D  83 C4 0C                  ADD ESP,0xc
004F2F30  53                        PUSH EBX
004F2F31  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
004F2F34  6A 00                     PUSH 0x0
004F2F36  57                        PUSH EDI
004F2F37  53                        PUSH EBX
004F2F38  E8 A3 ED 1F 00            CALL 0x006f1ce0
004F2F3D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F2F40  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
004F2F43  89 4E 10                  MOV dword ptr [ESI + 0x10],ECX
004F2F46  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
004F2F49  8D 45 FC                  LEA EAX,[EBP + -0x4]
004F2F4C  89 56 14                  MOV dword ptr [ESI + 0x14],EDX
004F2F4F  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F2F55  50                        PUSH EAX
004F2F56  80 FB 01                  CMP BL,0x1
004F2F59  E8 82 F1 1F 00            CALL 0x006f20e0
004F2F5E  66 8B 45 28               MOV AX,word ptr [EBP + 0x28]
004F2F62  66 8B 4D 24               MOV CX,word ptr [EBP + 0x24]
004F2F66  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
004F2F69  BF 03 00 00 00            MOV EDI,0x3
004F2F6E  89 BE 84 00 00 00         MOV dword ptr [ESI + 0x84],EDI
004F2F74  89 BE A8 00 00 00         MOV dword ptr [ESI + 0xa8],EDI
004F2F7A  8B 7D 30                  MOV EDI,dword ptr [EBP + 0x30]
004F2F7D  BB 01 01 00 00            MOV EBX,0x101
004F2F82  85 FF                     TEST EDI,EDI
004F2F84  89 9E 80 00 00 00         MOV dword ptr [ESI + 0x80],EBX
004F2F8A  C7 86 88 00 00 00 01 42 00 00  MOV dword ptr [ESI + 0x88],0x4201
004F2F94  66 89 86 8C 00 00 00      MOV word ptr [ESI + 0x8c],AX
004F2F9B  66 89 8E 8E 00 00 00      MOV word ptr [ESI + 0x8e],CX
004F2FA2  89 96 90 00 00 00         MOV dword ptr [ESI + 0x90],EDX
004F2FA8  C7 86 98 00 00 00 00 00 00 00  MOV dword ptr [ESI + 0x98],0x0
004F2FB2  C7 86 BC 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xbc],0x1
004F2FBC  89 9E A4 00 00 00         MOV dword ptr [ESI + 0xa4],EBX
004F2FC2  C7 86 AC 00 00 00 02 42 00 00  MOV dword ptr [ESI + 0xac],0x4202
004F2FCC  66 89 86 B0 00 00 00      MOV word ptr [ESI + 0xb0],AX
004F2FD3  66 89 8E B2 00 00 00      MOV word ptr [ESI + 0xb2],CX
004F2FDA  89 96 B4 00 00 00         MOV dword ptr [ESI + 0xb4],EDX
004F2FE0  74 31                     JZ 0x004f3013
004F2FE2  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
004F2FE8  6A 01                     PUSH 0x1
004F2FEA  6A 00                     PUSH 0x0
004F2FEC  57                        PUSH EDI
004F2FED  51                        PUSH ECX
004F2FEE  E8 7D 7A 21 00            CALL 0x0070aa70
004F2FF3  89 86 24 01 00 00         MOV dword ptr [ESI + 0x124],EAX
004F2FF9  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
004F2FFF  6A 01                     PUSH 0x1
004F3001  57                        PUSH EDI
004F3002  6A 12                     PUSH 0x12
004F3004  52                        PUSH EDX
004F3005  E8 E6 76 21 00            CALL 0x0070a6f0
004F300A  83 C4 20                  ADD ESP,0x20
004F300D  89 86 28 01 00 00         MOV dword ptr [ESI + 0x128],EAX
LAB_004f3013:
004F3013  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
004F3016  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F301B  5F                        POP EDI
004F301C  5E                        POP ESI
004F301D  5B                        POP EBX
004F301E  8B E5                     MOV ESP,EBP
004F3020  5D                        POP EBP
004F3021  C2 2C 00                  RET 0x2c
LAB_004f3024:
004F3024  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
004F3027  68 04 1B 7C 00            PUSH 0x7c1b04
004F302C  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F3031  56                        PUSH ESI
004F3032  6A 00                     PUSH 0x0
004F3034  68 71 01 00 00            PUSH 0x171
004F3039  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F303E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F3044  E8 87 A4 1B 00            CALL 0x006ad4d0
004F3049  83 C4 18                  ADD ESP,0x18
004F304C  85 C0                     TEST EAX,EAX
004F304E  74 01                     JZ 0x004f3051
004F3050  CC                        INT3
LAB_004f3051:
004F3051  68 71 01 00 00            PUSH 0x171
004F3056  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F305B  6A 00                     PUSH 0x0
004F305D  56                        PUSH ESI
004F305E  E8 DD 2D 1B 00            CALL 0x006a5e40
004F3063  5F                        POP EDI
004F3064  5E                        POP ESI
004F3065  5B                        POP EBX
004F3066  8B E5                     MOV ESP,EBP
004F3068  5D                        POP EBP
004F3069  C2 2C 00                  RET 0x2c
