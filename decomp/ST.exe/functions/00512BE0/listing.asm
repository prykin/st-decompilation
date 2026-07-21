SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004EEFB0::FUN_00512be0:
00512BE0  55                        PUSH EBP
00512BE1  8B EC                     MOV EBP,ESP
00512BE3  81 EC C0 08 00 00         SUB ESP,0x8c0
00512BE9  53                        PUSH EBX
00512BEA  56                        PUSH ESI
00512BEB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00512BEE  57                        PUSH EDI
00512BEF  B9 1E 02 00 00            MOV ECX,0x21e
00512BF4  33 C0                     XOR EAX,EAX
00512BF6  8D BD 40 F7 FF FF         LEA EDI,[EBP + 0xfffff740]
00512BFC  8D 55 BC                  LEA EDX,[EBP + -0x44]
00512BFF  F3 AB                     STOSD.REP ES:EDI
00512C01  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00512C06  8D 4D B8                  LEA ECX,[EBP + -0x48]
00512C09  6A 00                     PUSH 0x0
00512C0B  52                        PUSH EDX
00512C0C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00512C0F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00512C15  E8 D6 AB 21 00            CALL 0x0072d7f0
00512C1A  8B F0                     MOV ESI,EAX
00512C1C  83 C4 08                  ADD ESP,0x8
00512C1F  85 F6                     TEST ESI,ESI
00512C21  0F 85 D9 02 00 00         JNZ 0x00512f00
00512C27  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00512C2A  89 85 40 F7 FF FF         MOV dword ptr [EBP + 0xfffff740],EAX
00512C30  BF 02 00 00 00            MOV EDI,0x2
00512C35  8B 43 3C                  MOV EAX,dword ptr [EBX + 0x3c]
00512C38  89 BD 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],EDI
00512C3E  83 C0 21                  ADD EAX,0x21
00512C41  89 85 60 F7 FF FF         MOV dword ptr [EBP + 0xfffff760],EAX
00512C47  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00512C4A  85 C0                     TEST EAX,EAX
00512C4C  75 07                     JNZ 0x00512c55
00512C4E  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00512C51  F7 D8                     NEG EAX
00512C53  EB 03                     JMP 0x00512c58
LAB_00512c55:
00512C55  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512c58:
00512C58  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00512C5B  8B B3 E4 01 00 00         MOV ESI,dword ptr [EBX + 0x1e4]
00512C61  83 C0 16                  ADD EAX,0x16
00512C64  C7 85 48 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff748],0x1
00512C6E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
00512C71  89 85 64 F7 FF FF         MOV dword ptr [EBP + 0xfffff764],EAX
00512C77  89 95 4C F7 FF FF         MOV dword ptr [EBP + 0xfffff74c],EDX
00512C7D  C7 85 50 F7 FF FF 9C 01 00 00  MOV dword ptr [EBP + 0xfffff750],0x19c
00512C87  8B 86 A0 00 00 00         MOV EAX,dword ptr [ESI + 0xa0]
00512C8D  85 C0                     TEST EAX,EAX
00512C8F  74 09                     JZ 0x00512c9a
00512C91  56                        PUSH ESI
00512C92  E8 F9 DA 1F 00            CALL 0x00710790
00512C97  83 C4 04                  ADD ESP,0x4
LAB_00512c9a:
00512C9A  8B B6 8A 00 00 00         MOV ESI,dword ptr [ESI + 0x8a]
00512CA0  B8 18 01 00 00            MOV EAX,0x118
00512CA5  99                        CDQ
00512CA6  F7 FE                     IDIV ESI
00512CA8  8B 53 3C                  MOV EDX,dword ptr [EBX + 0x3c]
00512CAB  33 C9                     XOR ECX,ECX
00512CAD  81 C2 C3 01 00 00         ADD EDX,0x1c3
00512CB3  89 B5 54 F7 FF FF         MOV dword ptr [EBP + 0xfffff754],ESI
00512CB9  89 95 04 F8 FF FF         MOV dword ptr [EBP + 0xfffff804],EDX
00512CBF  8B 53 5C                  MOV EDX,dword ptr [EBX + 0x5c]
00512CC2  3B D1                     CMP EDX,ECX
00512CC4  C7 85 58 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff758],0x1
00512CCE  89 BD 7C F7 FF FF         MOV dword ptr [EBP + 0xfffff77c],EDI
00512CD4  C7 85 80 F7 FF FF 32 63 00 00  MOV dword ptr [EBP + 0xfffff780],0x6332
00512CDE  C7 85 F0 F7 FF FF 04 00 00 00  MOV dword ptr [EBP + 0xfffff7f0],0x4
00512CE8  89 8D F4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f4],ECX
00512CEE  89 BD F8 F7 FF FF         MOV dword ptr [EBP + 0xfffff7f8],EDI
00512CF4  89 8D FC F7 FF FF         MOV dword ptr [EBP + 0xfffff7fc],ECX
00512CFA  89 BD 00 F8 FF FF         MOV dword ptr [EBP + 0xfffff800],EDI
00512D00  89 85 5C F7 FF FF         MOV dword ptr [EBP + 0xfffff75c],EAX
00512D06  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
00512D09  89 85 78 F7 FF FF         MOV dword ptr [EBP + 0xfffff778],EAX
00512D0F  75 07                     JNZ 0x00512d18
00512D11  8B 4B 48                  MOV ECX,dword ptr [EBX + 0x48]
00512D14  F7 D9                     NEG ECX
00512D16  EB 03                     JMP 0x00512d1b
LAB_00512d18:
00512D18  8B 4B 44                  MOV ECX,dword ptr [EBX + 0x44]
LAB_00512d1b:
00512D1B  BE 01 00 00 00            MOV ESI,0x1
00512D20  89 85 5C F8 FF FF         MOV dword ptr [EBP + 0xfffff85c],EAX
00512D26  A1 90 67 80 00            MOV EAX,[0x00806790]
00512D2B  56                        PUSH ESI
00512D2C  6A 00                     PUSH 0x0
00512D2E  81 C1 09 01 00 00         ADD ECX,0x109
00512D34  68 D4 39 7C 00            PUSH 0x7c39d4
00512D39  50                        PUSH EAX
00512D3A  89 8D 08 F8 FF FF         MOV dword ptr [EBP + 0xfffff808],ECX
00512D40  C7 85 0C F8 FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffff80c],0x11
00512D4A  C7 85 10 F8 FF FF 24 00 00 00  MOV dword ptr [EBP + 0xfffff810],0x24
00512D54  C7 85 0C F9 FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffff90c],0x1f4
00512D5E  C7 85 10 F9 FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffff910],0x32
00512D68  89 BD 60 F8 FF FF         MOV dword ptr [EBP + 0xfffff860],EDI
00512D6E  C7 85 64 F8 FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffff864],0x8165
00512D78  E8 F3 7C 1F 00            CALL 0x0070aa70
00512D7D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
00512D83  56                        PUSH ESI
00512D84  68 D4 39 7C 00            PUSH 0x7c39d4
00512D89  6A 12                     PUSH 0x12
00512D8B  51                        PUSH ECX
00512D8C  89 85 20 F9 FF FF         MOV dword ptr [EBP + 0xfffff920],EAX
00512D92  E8 59 79 1F 00            CALL 0x0070a6f0
00512D97  89 85 24 F9 FF FF         MOV dword ptr [EBP + 0xfffff924],EAX
00512D9D  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00512DA0  89 B5 04 F9 FF FF         MOV dword ptr [EBP + 0xfffff904],ESI
00512DA6  89 B5 08 F9 FF FF         MOV dword ptr [EBP + 0xfffff908],ESI
00512DAC  89 BD 78 F9 FF FF         MOV dword ptr [EBP + 0xfffff978],EDI
00512DB2  83 C4 20                  ADD ESP,0x20
00512DB5  B9 5F 00 00 00            MOV ECX,0x5f
00512DBA  8D B5 FC F7 FF FF         LEA ESI,[EBP + 0xfffff7fc]
00512DC0  8D BD 7C F9 FF FF         LEA EDI,[EBP + 0xfffff97c]
00512DC6  85 C0                     TEST EAX,EAX
00512DC8  F3 A5                     MOVSD.REP ES:EDI,ESI
00512DCA  75 07                     JNZ 0x00512dd3
00512DCC  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00512DCF  F7 D8                     NEG EAX
00512DD1  EB 03                     JMP 0x00512dd6
LAB_00512dd3:
00512DD3  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512dd6:
00512DD6  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
00512DDC  BF 01 00 00 00            MOV EDI,0x1
00512DE1  57                        PUSH EDI
00512DE2  6A 00                     PUSH 0x0
00512DE4  83 C0 16                  ADD EAX,0x16
00512DE7  68 E0 39 7C 00            PUSH 0x7c39e0
00512DEC  52                        PUSH EDX
00512DED  89 85 88 F9 FF FF         MOV dword ptr [EBP + 0xfffff988],EAX
00512DF3  C7 85 E4 F9 FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffff9e4],0x8164
00512DFD  E8 6E 7C 1F 00            CALL 0x0070aa70
00512E02  89 85 A0 FA FF FF         MOV dword ptr [EBP + 0xfffffaa0],EAX
00512E08  A1 90 67 80 00            MOV EAX,[0x00806790]
00512E0D  57                        PUSH EDI
00512E0E  68 E0 39 7C 00            PUSH 0x7c39e0
00512E13  6A 12                     PUSH 0x12
00512E15  50                        PUSH EAX
00512E16  E8 D5 78 1F 00            CALL 0x0070a6f0
00512E1B  8B 4B 3C                  MOV ECX,dword ptr [EBX + 0x3c]
00512E1E  89 85 A4 FA FF FF         MOV dword ptr [EBP + 0xfffffaa4],EAX
00512E24  8B 43 5C                  MOV EAX,dword ptr [EBX + 0x5c]
00512E27  83 C4 20                  ADD ESP,0x20
00512E2A  81 C1 C3 01 00 00         ADD ECX,0x1c3
00512E30  C7 85 F8 FA FF FF 03 00 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x3
00512E3A  85 C0                     TEST EAX,EAX
00512E3C  89 BD FC FA FF FF         MOV dword ptr [EBP + 0xfffffafc],EDI
00512E42  C7 85 04 FB FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffb04],0x0
00512E4C  89 8D 08 FB FF FF         MOV dword ptr [EBP + 0xfffffb08],ECX
00512E52  75 07                     JNZ 0x00512e5b
00512E54  8B 43 48                  MOV EAX,dword ptr [EBX + 0x48]
00512E57  F7 D8                     NEG EAX
00512E59  EB 03                     JMP 0x00512e5e
LAB_00512e5b:
00512E5B  8B 43 44                  MOV EAX,dword ptr [EBX + 0x44]
LAB_00512e5e:
00512E5E  8B 53 08                  MOV EDX,dword ptr [EBX + 0x8]
00512E61  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
00512E64  89 95 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EDX
00512E6A  8D 95 40 F7 FF FF         LEA EDX,[EBP + 0xfffff740]
00512E70  83 C0 3D                  ADD EAX,0x3d
00512E73  6A 00                     PUSH 0x0
00512E75  8D B3 9C 01 00 00         LEA ESI,[EBX + 0x19c]
00512E7B  52                        PUSH EDX
00512E7C  89 85 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EAX
00512E82  C7 85 10 FB FF FF 11 00 00 00  MOV dword ptr [EBP + 0xfffffb10],0x11
00512E8C  C7 85 14 FB FF FF C9 00 00 00  MOV dword ptr [EBP + 0xfffffb14],0xc9
00512E96  C7 85 18 FB FF FF 15 00 00 00  MOV dword ptr [EBP + 0xfffffb18],0x15
00512EA0  C7 85 50 FB FF FF 02 00 00 00  MOV dword ptr [EBP + 0xfffffb50],0x2
00512EAA  C7 85 54 FB FF FF 66 81 00 00  MOV dword ptr [EBP + 0xfffffb54],0x8166
00512EB4  89 BD 8C FB FF FF         MOV dword ptr [EBP + 0xfffffb8c],EDI
00512EBA  89 BD 90 FB FF FF         MOV dword ptr [EBP + 0xfffffb90],EDI
00512EC0  89 7D AC                  MOV dword ptr [EBP + -0x54],EDI
00512EC3  89 7D A8                  MOV dword ptr [EBP + -0x58],EDI
00512EC6  8B 01                     MOV EAX,dword ptr [ECX]
00512EC8  6A 00                     PUSH 0x0
00512ECA  56                        PUSH ESI
00512ECB  6A 08                     PUSH 0x8
00512ECD  FF 50 08                  CALL dword ptr [EAX + 0x8]
00512ED0  8B 36                     MOV ESI,dword ptr [ESI]
00512ED2  85 F6                     TEST ESI,ESI
00512ED4  74 18                     JZ 0x00512eee
00512ED6  8D 43 18                  LEA EAX,[EBX + 0x18]
00512ED9  8B CB                     MOV ECX,EBX
00512EDB  50                        PUSH EAX
00512EDC  56                        PUSH ESI
00512EDD  6A 02                     PUSH 0x2
00512EDF  C7 43 28 20 00 00 00      MOV dword ptr [EBX + 0x28],0x20
00512EE6  89 7B 2C                  MOV dword ptr [EBX + 0x2c],EDI
00512EE9  E8 92 31 1D 00            CALL 0x006e6080
LAB_00512eee:
00512EEE  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00512EF1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00512EF7  5F                        POP EDI
00512EF8  5E                        POP ESI
00512EF9  5B                        POP EBX
00512EFA  8B E5                     MOV ESP,EBP
00512EFC  5D                        POP EBP
00512EFD  C2 04 00                  RET 0x4
LAB_00512f00:
00512F00  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00512F03  68 0C 3A 7C 00            PUSH 0x7c3a0c
00512F08  68 CC 4C 7A 00            PUSH 0x7a4ccc
00512F0D  56                        PUSH ESI
00512F0E  6A 00                     PUSH 0x0
00512F10  68 20 02 00 00            PUSH 0x220
00512F15  68 3C 38 7C 00            PUSH 0x7c383c
00512F1A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00512F20  E8 AB A5 19 00            CALL 0x006ad4d0
00512F25  83 C4 18                  ADD ESP,0x18
00512F28  85 C0                     TEST EAX,EAX
00512F2A  74 01                     JZ 0x00512f2d
00512F2C  CC                        INT3
LAB_00512f2d:
00512F2D  68 20 02 00 00            PUSH 0x220
00512F32  68 3C 38 7C 00            PUSH 0x7c383c
00512F37  6A 00                     PUSH 0x0
00512F39  56                        PUSH ESI
00512F3A  E8 01 2F 19 00            CALL 0x006a5e40
00512F3F  5F                        POP EDI
00512F40  5E                        POP ESI
00512F41  5B                        POP EBX
00512F42  8B E5                     MOV ESP,EBP
00512F44  5D                        POP EBP
00512F45  C2 04 00                  RET 0x4
