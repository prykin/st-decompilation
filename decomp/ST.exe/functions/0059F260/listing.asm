FSGSTy::LadderCtrls:
0059F260  55                        PUSH EBP
0059F261  8B EC                     MOV EBP,ESP
0059F263  81 EC DC 08 00 00         SUB ESP,0x8dc
0059F269  53                        PUSH EBX
0059F26A  56                        PUSH ESI
0059F26B  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0059F26E  57                        PUSH EDI
0059F26F  B9 23 02 00 00            MOV ECX,0x223
0059F274  33 C0                     XOR EAX,EAX
0059F276  8D BD 24 F7 FF FF         LEA EDI,[EBP + 0xfffff724]
0059F27C  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0059F27F  F3 AB                     STOSD.REP ES:EDI
0059F281  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059F286  8D 4D B0                  LEA ECX,[EBP + -0x50]
0059F289  6A 00                     PUSH 0x0
0059F28B  52                        PUSH EDX
0059F28C  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0059F28F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059F295  E8 56 E5 18 00            CALL 0x0072d7f0
0059F29A  8B F0                     MOV ESI,EAX
0059F29C  83 C4 08                  ADD ESP,0x8
0059F29F  85 F6                     TEST ESI,ESI
0059F2A1  0F 85 A8 02 00 00         JNZ 0x0059f54f
0059F2A7  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0059F2AA  8B 86 E8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ae8]
0059F2B0  85 C0                     TEST EAX,EAX
0059F2B2  74 06                     JZ 0x0059f2ba
0059F2B4  50                        PUSH EAX
0059F2B5  E8 B6 62 11 00            CALL 0x006b5570
LAB_0059f2ba:
0059F2BA  6A 01                     PUSH 0x1
0059F2BC  6A 01                     PUSH 0x1
0059F2BE  6A 00                     PUSH 0x0
0059F2C0  E8 2B 62 11 00            CALL 0x006b54f0
0059F2C5  68 A0 16 80 00            PUSH 0x8016a0
0059F2CA  50                        PUSH EAX
0059F2CB  89 86 E8 1A 00 00         MOV dword ptr [ESI + 0x1ae8],EAX
0059F2D1  E8 CA 67 11 00            CALL 0x006b5aa0
0059F2D6  8B 86 8E 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e8e]
0059F2DC  8D BE 8E 1E 00 00         LEA EDI,[ESI + 0x1e8e]
0059F2E2  85 C0                     TEST EAX,EAX
0059F2E4  74 06                     JZ 0x0059f2ec
0059F2E6  57                        PUSH EDI
0059F2E7  E8 74 BD 10 00            CALL 0x006ab060
LAB_0059f2ec:
0059F2EC  8B 86 92 1E 00 00         MOV EAX,dword ptr [ESI + 0x1e92]
0059F2F2  8D 9E 92 1E 00 00         LEA EBX,[ESI + 0x1e92]
0059F2F8  85 C0                     TEST EAX,EAX
0059F2FA  74 06                     JZ 0x0059f302
0059F2FC  53                        PUSH EBX
0059F2FD  E8 5E BD 10 00            CALL 0x006ab060
LAB_0059f302:
0059F302  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
0059F305  6A 01                     PUSH 0x1
0059F307  8D 48 28                  LEA ECX,[EAX + 0x28]
0059F30A  51                        PUSH ECX
0059F30B  50                        PUSH EAX
0059F30C  E8 CF 5C 11 00            CALL 0x006b4fe0
0059F311  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
0059F314  50                        PUSH EAX
0059F315  33 C0                     XOR EAX,EAX
0059F317  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0059F31B  50                        PUSH EAX
0059F31C  68 75 01 00 00            PUSH 0x175
0059F321  68 E1 02 00 00            PUSH 0x2e1
0059F326  E8 95 5D 11 00            CALL 0x006b50c0
0059F32B  6A 08                     PUSH 0x8
0059F32D  68 75 01 00 00            PUSH 0x175
0059F332  89 07                     MOV dword ptr [EDI],EAX
0059F334  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0059F33A  68 E1 02 00 00            PUSH 0x2e1
0059F33F  6A 5E                     PUSH 0x5e
0059F341  6A 22                     PUSH 0x22
0059F343  51                        PUSH ECX
0059F344  E8 37 55 12 00            CALL 0x006c4880
0059F349  68 8E 69 00 00            PUSH 0x698e
0059F34E  68 06 69 00 00            PUSH 0x6906
0059F353  6A 19                     PUSH 0x19
0059F355  68 96 00 00 00            PUSH 0x96
0059F35A  68 90 00 00 00            PUSH 0x90
0059F35F  6A 2C                     PUSH 0x2c
0059F361  6A 01                     PUSH 0x1
0059F363  6A 01                     PUSH 0x1
0059F365  8B CE                     MOV ECX,ESI
0059F367  89 03                     MOV dword ptr [EBX],EAX
0059F369  E8 AD 42 E6 FF            CALL 0x0040361b
0059F36E  68 8F 69 00 00            PUSH 0x698f
0059F373  68 07 69 00 00            PUSH 0x6907
0059F378  6A 19                     PUSH 0x19
0059F37A  68 96 00 00 00            PUSH 0x96
0059F37F  68 90 00 00 00            PUSH 0x90
0059F384  68 C7 00 00 00            PUSH 0xc7
0059F389  6A 01                     PUSH 0x1
0059F38B  6A 01                     PUSH 0x1
0059F38D  8B CE                     MOV ECX,ESI
0059F38F  89 86 B6 1E 00 00         MOV dword ptr [ESI + 0x1eb6],EAX
0059F395  E8 81 42 E6 FF            CALL 0x0040361b
0059F39A  68 90 69 00 00            PUSH 0x6990
0059F39F  68 08 69 00 00            PUSH 0x6908
0059F3A4  6A 19                     PUSH 0x19
0059F3A6  6A 19                     PUSH 0x19
0059F3A8  68 90 00 00 00            PUSH 0x90
0059F3AD  68 6C 01 00 00            PUSH 0x16c
0059F3B2  6A 00                     PUSH 0x0
0059F3B4  6A 01                     PUSH 0x1
0059F3B6  8B CE                     MOV ECX,ESI
0059F3B8  89 86 BA 1E 00 00         MOV dword ptr [ESI + 0x1eba],EAX
0059F3BE  E8 58 42 E6 FF            CALL 0x0040361b
0059F3C3  68 91 69 00 00            PUSH 0x6991
0059F3C8  68 09 69 00 00            PUSH 0x6909
0059F3CD  6A 19                     PUSH 0x19
0059F3CF  6A 19                     PUSH 0x19
0059F3D1  68 90 00 00 00            PUSH 0x90
0059F3D6  68 F3 01 00 00            PUSH 0x1f3
0059F3DB  6A 01                     PUSH 0x1
0059F3DD  6A 01                     PUSH 0x1
0059F3DF  8B CE                     MOV ECX,ESI
0059F3E1  89 86 D3 1E 00 00         MOV dword ptr [ESI + 0x1ed3],EAX
0059F3E7  E8 2F 42 E6 FF            CALL 0x0040361b
0059F3EC  68 92 69 00 00            PUSH 0x6992
0059F3F1  68 0A 69 00 00            PUSH 0x690a
0059F3F6  6A 19                     PUSH 0x19
0059F3F8  6A 41                     PUSH 0x41
0059F3FA  68 90 00 00 00            PUSH 0x90
0059F3FF  68 B6 02 00 00            PUSH 0x2b6
0059F404  6A 01                     PUSH 0x1
0059F406  6A 01                     PUSH 0x1
0059F408  8B CE                     MOV ECX,ESI
0059F40A  89 86 D7 1E 00 00         MOV dword ptr [ESI + 0x1ed7],EAX
0059F410  E8 06 42 E6 FF            CALL 0x0040361b
0059F415  89 86 24 1B 00 00         MOV dword ptr [ESI + 0x1b24],EAX
0059F41B  BF 13 69 00 00            MOV EDI,0x6913
0059F420  BB DB 00 00 00            MOV EBX,0xdb
0059F425  8D 96 E7 1E 00 00         LEA EDX,[ESI + 0x1ee7]
0059F42B  C7 45 F8 0F 00 00 00      MOV dword ptr [EBP + -0x8],0xf
0059F432  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0059f435:
0059F435  6A 00                     PUSH 0x0
0059F437  57                        PUSH EDI
0059F438  6A 10                     PUSH 0x10
0059F43A  68 E9 00 00 00            PUSH 0xe9
0059F43F  53                        PUSH EBX
0059F440  6A 50                     PUSH 0x50
0059F442  6A 01                     PUSH 0x1
0059F444  6A 01                     PUSH 0x1
0059F446  8B CE                     MOV ECX,ESI
0059F448  E8 CE 41 E6 FF            CALL 0x0040361b
0059F44D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0059F450  47                        INC EDI
0059F451  83 C3 10                  ADD EBX,0x10
0059F454  89 01                     MOV dword ptr [ECX],EAX
0059F456  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0059F459  83 C1 04                  ADD ECX,0x4
0059F45C  48                        DEC EAX
0059F45D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059F460  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0059F463  75 D0                     JNZ 0x0059f435
0059F465  B9 23 02 00 00            MOV ECX,0x223
0059F46A  33 C0                     XOR EAX,EAX
0059F46C  8D BD 24 F7 FF FF         LEA EDI,[EBP + 0xfffff724]
0059F472  6A 00                     PUSH 0x0
0059F474  F3 AB                     STOSD.REP ES:EDI
0059F476  8B 86 73 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a73]
0059F47C  8B 8E E8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1ae8]
0059F482  89 85 2C F7 FF FF         MOV dword ptr [EBP + 0xfffff72c],EAX
0059F488  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
0059F48B  89 85 B0 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b0],EAX
0059F491  89 85 70 F7 FF FF         MOV dword ptr [EBP + 0xfffff770],EAX
0059F497  B8 02 00 00 00            MOV EAX,0x2
0059F49C  89 8D 44 F7 FF FF         MOV dword ptr [EBP + 0xfffff744],ECX
0059F4A2  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
0059F4A5  89 85 B4 F7 FF FF         MOV dword ptr [EBP + 0xfffff7b4],EAX
0059F4AB  89 85 74 F7 FF FF         MOV dword ptr [EBP + 0xfffff774],EAX
0059F4B1  8D 85 24 F7 FF FF         LEA EAX,[EBP + 0xfffff724]
0059F4B7  50                        PUSH EAX
0059F4B8  8D 86 C4 1A 00 00         LEA EAX,[ESI + 0x1ac4]
0059F4BE  C7 85 24 F7 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff724],0x1
0059F4C8  C7 85 28 F7 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff728],0x89
0059F4D2  C7 85 30 F7 FF FF 1C 02 00 00  MOV dword ptr [EBP + 0xfffff730],0x21c
0059F4DC  C7 85 34 F7 FF FF 90 00 00 00  MOV dword ptr [EBP + 0xfffff734],0x90
0059F4E6  C7 85 38 F7 FF FF 94 00 00 00  MOV dword ptr [EBP + 0xfffff738],0x94
0059F4F0  C7 85 3C F7 FF FF 17 00 00 00  MOV dword ptr [EBP + 0xfffff73c],0x17
0059F4FA  C7 85 40 F7 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff740],0x10
0059F504  C7 85 B8 F7 FF FF 0A 69 00 00  MOV dword ptr [EBP + 0xfffff7b8],0x690a
0059F50E  C7 85 78 F7 FF FF 88 69 00 00  MOV dword ptr [EBP + 0xfffff778],0x6988
0059F518  8B 11                     MOV EDX,dword ptr [ECX]
0059F51A  6A 00                     PUSH 0x0
0059F51C  50                        PUSH EAX
0059F51D  6A 06                     PUSH 0x6
0059F51F  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059F522  8D 4E 1D                  LEA ECX,[ESI + 0x1d]
0059F525  C7 46 2D 61 00 00 00      MOV dword ptr [ESI + 0x2d],0x61
0059F52C  51                        PUSH ECX
0059F52D  6A 00                     PUSH 0x0
0059F52F  6A 0F                     PUSH 0xf
0059F531  8B CE                     MOV ECX,ESI
0059F533  C7 46 35 00 00 00 00      MOV dword ptr [ESI + 0x35],0x0
0059F53A  E8 41 6B 14 00            CALL 0x006e6080
0059F53F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0059F542  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059F548  5F                        POP EDI
0059F549  5E                        POP ESI
0059F54A  5B                        POP EBX
0059F54B  8B E5                     MOV ESP,EBP
0059F54D  5D                        POP EBP
0059F54E  C3                        RET
LAB_0059f54f:
0059F54F  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0059F552  68 A4 C3 7C 00            PUSH 0x7cc3a4
0059F557  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059F55C  56                        PUSH ESI
0059F55D  6A 00                     PUSH 0x0
0059F55F  68 1D 08 00 00            PUSH 0x81d
0059F564  68 70 BF 7C 00            PUSH 0x7cbf70
0059F569  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059F56E  E8 5D DF 10 00            CALL 0x006ad4d0
0059F573  83 C4 18                  ADD ESP,0x18
0059F576  85 C0                     TEST EAX,EAX
0059F578  74 01                     JZ 0x0059f57b
0059F57A  CC                        INT3
LAB_0059f57b:
0059F57B  68 1D 08 00 00            PUSH 0x81d
0059F580  68 70 BF 7C 00            PUSH 0x7cbf70
0059F585  6A 00                     PUSH 0x0
0059F587  56                        PUSH ESI
0059F588  E8 B3 68 10 00            CALL 0x006a5e40
0059F58D  5F                        POP EDI
0059F58E  5E                        POP ESI
0059F58F  5B                        POP EBX
0059F590  8B E5                     MOV ESP,EBP
0059F592  5D                        POP EBP
0059F593  C3                        RET
