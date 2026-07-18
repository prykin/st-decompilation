CursorClassTy::SetGCType:
0054BF40  55                        PUSH EBP
0054BF41  8B EC                     MOV EBP,ESP
0054BF43  83 EC 54                  SUB ESP,0x54
0054BF46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0054BF4B  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0054BF4E  56                        PUSH ESI
0054BF4F  8D 55 B0                  LEA EDX,[EBP + -0x50]
0054BF52  8D 4D AC                  LEA ECX,[EBP + -0x54]
0054BF55  6A 00                     PUSH 0x0
0054BF57  52                        PUSH EDX
0054BF58  C7 45 F4 01 00 00 00      MOV dword ptr [EBP + -0xc],0x1
0054BF5F  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0054BF62  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054BF68  E8 83 18 1E 00            CALL 0x0072d7f0
0054BF6D  8B F0                     MOV ESI,EAX
0054BF6F  83 C4 08                  ADD ESP,0x8
0054BF72  85 F6                     TEST ESI,ESI
0054BF74  0F 85 9B 04 00 00         JNZ 0x0054c415
0054BF7A  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0054BF7D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0054BF80  66 39 86 94 04 00 00      CMP word ptr [ESI + 0x494],AX
0054BF87  0F 84 75 04 00 00         JZ 0x0054c402
0054BF8D  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054BF90  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0054BF93  66 89 86 94 04 00 00      MOV word ptr [ESI + 0x494],AX
0054BF9A  25 FF FF 00 00            AND EAX,0xffff
0054BF9F  83 F8 48                  CMP EAX,0x48
0054BFA2  89 8E C5 00 00 00         MOV dword ptr [ESI + 0xc5],ECX
0054BFA8  89 96 C9 00 00 00         MOV dword ptr [ESI + 0xc9],EDX
0054BFAE  0F 87 4E 04 00 00         JA 0x0054c402
0054BFB4  33 C9                     XOR ECX,ECX
0054BFB6  8A 88 F4 C4 54 00         MOV CL,byte ptr [EAX + 0x54c4f4]
switchD_0054bfbc::switchD:
0054BFBC  FF 24 8D 60 C4 54 00      JMP dword ptr [ECX*0x4 + 0x54c460]
switchD_0054bfbc::caseD_0:
0054BFC3  8A 8E 93 04 00 00         MOV CL,byte ptr [ESI + 0x493]
0054BFC9  8B D1                     MOV EDX,ECX
0054BFCB  81 E2 FF 00 00 00         AND EDX,0xff
0054BFD1  8D 42 FF                  LEA EAX,[EDX + -0x1]
0054BFD4  83 F8 04                  CMP EAX,0x4
0054BFD7  77 23                     JA 0x0054bffc
switchD_0054bfd9::switchD:
0054BFD9  FF 24 85 40 C5 54 00      JMP dword ptr [EAX*0x4 + 0x54c540]
switchD_0054bfd9::caseD_3:
0054BFE0  B8 28 82 7C 00            MOV EAX,0x7c8228
0054BFE5  EB 1A                     JMP 0x0054c001
switchD_0054bfd9::caseD_1:
0054BFE7  B8 D4 7D 7C 00            MOV EAX,0x7c7dd4
0054BFEC  EB 13                     JMP 0x0054c001
switchD_0054bfd9::caseD_4:
0054BFEE  B8 18 82 7C 00            MOV EAX,0x7c8218
0054BFF3  EB 0C                     JMP 0x0054c001
switchD_0054bfd9::caseD_5:
0054BFF5  B8 0C 82 7C 00            MOV EAX,0x7c820c
0054BFFA  EB 05                     JMP 0x0054c001
switchD_0054bfd9::caseD_2:
0054BFFC  B8 00 82 7C 00            MOV EAX,0x7c8200
LAB_0054c001:
0054C001  80 F9 05                  CMP CL,0x5
0054C004  6A FF                     PUSH -0x1
0054C006  6A FF                     PUSH -0x1
0054C008  75 0B                     JNZ 0x0054c015
0054C00A  6A 12                     PUSH 0x12
0054C00C  6A 0D                     PUSH 0xd
0054C00E  68 E8 03 00 00            PUSH 0x3e8
0054C013  EB 06                     JMP 0x0054c01b
LAB_0054c015:
0054C015  6A 00                     PUSH 0x0
0054C017  6A 00                     PUSH 0x0
0054C019  6A 32                     PUSH 0x32
LAB_0054c01b:
0054C01B  50                        PUSH EAX
LAB_0054c01c:
0054C01C  6A 01                     PUSH 0x1
0054C01E  8B CE                     MOV ECX,ESI
0054C020  E8 4A 77 EB FF            CALL 0x0040376f
0054C025  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
0054C02B  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
0054C031  50                        PUSH EAX
0054C032  51                        PUSH ECX
0054C033  8B CE                     MOV ECX,ESI
0054C035  E8 E4 63 EB FF            CALL 0x0040241e
0054C03A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C03D  33 C0                     XOR EAX,EAX
0054C03F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C045  5E                        POP ESI
0054C046  8B E5                     MOV ESP,EBP
0054C048  5D                        POP EBP
0054C049  C2 0C 00                  RET 0xc
switchD_0054bfbc::caseD_5:
0054C04C  6A FF                     PUSH -0x1
0054C04E  6A FF                     PUSH -0x1
0054C050  6A 00                     PUSH 0x0
0054C052  6A 00                     PUSH 0x0
0054C054  6A 32                     PUSH 0x32
0054C056  68 00 82 7C 00            PUSH 0x7c8200
0054C05B  E9 72 03 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_15:
0054C060  6A FF                     PUSH -0x1
0054C062  6A FF                     PUSH -0x1
0054C064  6A 13                     PUSH 0x13
0054C066  6A 23                     PUSH 0x23
0054C068  6A 32                     PUSH 0x32
0054C06A  68 F0 81 7C 00            PUSH 0x7c81f0
LAB_0054c06f:
0054C06F  6A 01                     PUSH 0x1
0054C071  8B CE                     MOV ECX,ESI
0054C073  E8 F7 76 EB FF            CALL 0x0040376f
0054C078  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
0054C07E  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
0054C084  51                        PUSH ECX
0054C085  52                        PUSH EDX
0054C086  8B CE                     MOV ECX,ESI
0054C088  E8 91 63 EB FF            CALL 0x0040241e
0054C08D  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C090  33 C0                     XOR EAX,EAX
0054C092  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C098  5E                        POP ESI
0054C099  8B E5                     MOV ESP,EBP
0054C09B  5D                        POP EBP
0054C09C  C2 0C 00                  RET 0xc
switchD_0054bfbc::caseD_3c:
0054C09F  83 C0 C4                  ADD EAX,-0x3c
0054C0A2  B9 22 00 00 00            MOV ECX,0x22
0054C0A7  83 F8 07                  CMP EAX,0x7
0054C0AA  77 3D                     JA 0x0054c0e9
switchD_0054c0ac::switchD:
0054C0AC  FF 24 85 54 C5 54 00      JMP dword ptr [EAX*0x4 + 0x54c554]
switchD_0054c0ac::caseD_3:
0054C0B3  C7 45 F8 05 00 00 00      MOV dword ptr [EBP + -0x8],0x5
0054C0BA  EB 0C                     JMP 0x0054c0c8
switchD_0054c0ac::caseD_2:
0054C0BC  C7 45 F8 3F 00 00 00      MOV dword ptr [EBP + -0x8],0x3f
0054C0C3  EB 03                     JMP 0x0054c0c8
switchD_0054c0ac::caseD_0:
0054C0C5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0054c0c8:
0054C0C8  83 F8 07                  CMP EAX,0x7
0054C0CB  77 1C                     JA 0x0054c0e9
switchD_0054c0cd::switchD:
0054C0CD  FF 24 85 74 C5 54 00      JMP dword ptr [EAX*0x4 + 0x54c574]
switchD_0054c0cd::caseD_0:
0054C0D4  C7 45 FC 04 00 00 00      MOV dword ptr [EBP + -0x4],0x4
0054C0DB  EB 0C                     JMP 0x0054c0e9
switchD_0054c0cd::caseD_1:
0054C0DD  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0054C0E0  EB 07                     JMP 0x0054c0e9
switchD_0054c0cd::caseD_2:
0054C0E2  C7 45 FC 14 00 00 00      MOV dword ptr [EBP + -0x4],0x14
switchD_0054c0ac::default:
0054C0E9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0054C0EC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0054C0EF  6A FF                     PUSH -0x1
0054C0F1  6A FF                     PUSH -0x1
0054C0F3  50                        PUSH EAX
0054C0F4  51                        PUSH ECX
0054C0F5  6A 32                     PUSH 0x32
0054C0F7  68 E4 81 7C 00            PUSH 0x7c81e4
0054C0FC  E9 D1 02 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_32:
0054C101  6A FF                     PUSH -0x1
0054C103  6A FF                     PUSH -0x1
0054C105  6A 1B                     PUSH 0x1b
0054C107  6A 24                     PUSH 0x24
0054C109  6A 32                     PUSH 0x32
0054C10B  68 D8 81 7C 00            PUSH 0x7c81d8
0054C110  E9 5A FF FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_33:
0054C115  6A FF                     PUSH -0x1
0054C117  6A FF                     PUSH -0x1
0054C119  6A 1B                     PUSH 0x1b
0054C11B  6A 24                     PUSH 0x24
0054C11D  6A 32                     PUSH 0x32
0054C11F  68 CC 81 7C 00            PUSH 0x7c81cc
0054C124  E9 F3 FE FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_34:
0054C129  6A FF                     PUSH -0x1
0054C12B  6A FF                     PUSH -0x1
0054C12D  6A 1B                     PUSH 0x1b
0054C12F  6A 24                     PUSH 0x24
0054C131  6A 32                     PUSH 0x32
0054C133  68 C0 81 7C 00            PUSH 0x7c81c0
0054C138  E9 95 02 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_35:
0054C13D  6A FF                     PUSH -0x1
0054C13F  6A FF                     PUSH -0x1
0054C141  6A 1B                     PUSH 0x1b
0054C143  6A 24                     PUSH 0x24
0054C145  6A 32                     PUSH 0x32
0054C147  68 B4 81 7C 00            PUSH 0x7c81b4
0054C14C  E9 1E FF FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_36:
0054C151  6A FF                     PUSH -0x1
0054C153  6A FF                     PUSH -0x1
0054C155  6A 16                     PUSH 0x16
0054C157  6A 24                     PUSH 0x24
0054C159  6A 32                     PUSH 0x32
0054C15B  68 A8 81 7C 00            PUSH 0x7c81a8
0054C160  E9 B7 FE FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_37:
0054C165  6A FF                     PUSH -0x1
0054C167  6A FF                     PUSH -0x1
0054C169  6A 16                     PUSH 0x16
0054C16B  6A 24                     PUSH 0x24
0054C16D  6A 32                     PUSH 0x32
0054C16F  68 9C 81 7C 00            PUSH 0x7c819c
0054C174  E9 59 02 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_38:
0054C179  6A FF                     PUSH -0x1
0054C17B  6A FF                     PUSH -0x1
0054C17D  6A 20                     PUSH 0x20
0054C17F  6A 24                     PUSH 0x24
0054C181  6A 32                     PUSH 0x32
0054C183  68 90 81 7C 00            PUSH 0x7c8190
0054C188  E9 E2 FE FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_39:
0054C18D  6A FF                     PUSH -0x1
0054C18F  6A FF                     PUSH -0x1
0054C191  6A 20                     PUSH 0x20
0054C193  6A 24                     PUSH 0x24
0054C195  6A 32                     PUSH 0x32
0054C197  68 84 81 7C 00            PUSH 0x7c8184
0054C19C  E9 7B FE FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_3:
0054C1A1  6A 1F                     PUSH 0x1f
0054C1A3  6A 35                     PUSH 0x35
0054C1A5  6A 14                     PUSH 0x14
0054C1A7  6A 22                     PUSH 0x22
0054C1A9  6A 32                     PUSH 0x32
0054C1AB  68 74 81 7C 00            PUSH 0x7c8174
0054C1B0  E9 1D 02 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_4:
0054C1B5  6A 1F                     PUSH 0x1f
0054C1B7  6A 35                     PUSH 0x35
0054C1B9  6A 14                     PUSH 0x14
0054C1BB  6A 22                     PUSH 0x22
0054C1BD  6A 32                     PUSH 0x32
0054C1BF  68 64 81 7C 00            PUSH 0x7c8164
0054C1C4  E9 A6 FE FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_16:
0054C1C9  6A 3A                     PUSH 0x3a
0054C1CB  6A 38                     PUSH 0x38
0054C1CD  6A 26                     PUSH 0x26
0054C1CF  6A 25                     PUSH 0x25
0054C1D1  6A 32                     PUSH 0x32
0054C1D3  68 50 81 7C 00            PUSH 0x7c8150
0054C1D8  E9 3F FE FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_f:
0054C1DD  6A 20                     PUSH 0x20
0054C1DF  6A 3B                     PUSH 0x3b
0054C1E1  6A 14                     PUSH 0x14
0054C1E3  6A 22                     PUSH 0x22
0054C1E5  6A 32                     PUSH 0x32
0054C1E7  68 40 81 7C 00            PUSH 0x7c8140
0054C1EC  E9 E1 01 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_1:
0054C1F1  6A 20                     PUSH 0x20
0054C1F3  6A 3B                     PUSH 0x3b
0054C1F5  6A 14                     PUSH 0x14
0054C1F7  6A 22                     PUSH 0x22
0054C1F9  6A 32                     PUSH 0x32
0054C1FB  68 34 81 7C 00            PUSH 0x7c8134
0054C200  E9 6A FE FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_19:
0054C205  6A 20                     PUSH 0x20
0054C207  6A 3B                     PUSH 0x3b
0054C209  6A 14                     PUSH 0x14
0054C20B  6A 22                     PUSH 0x22
0054C20D  6A 32                     PUSH 0x32
0054C20F  68 28 81 7C 00            PUSH 0x7c8128
0054C214  E9 03 FE FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_1a:
0054C219  6A 32                     PUSH 0x32
0054C21B  6A 34                     PUSH 0x34
0054C21D  6A 25                     PUSH 0x25
0054C21F  6A 25                     PUSH 0x25
0054C221  6A 32                     PUSH 0x32
0054C223  68 18 81 7C 00            PUSH 0x7c8118
0054C228  E9 A5 01 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_12:
0054C22D  6A 26                     PUSH 0x26
0054C22F  6A 43                     PUSH 0x43
0054C231  6A 14                     PUSH 0x14
0054C233  6A 22                     PUSH 0x22
0054C235  6A 32                     PUSH 0x32
0054C237  68 10 81 7C 00            PUSH 0x7c8110
0054C23C  E9 2E FE FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_13:
0054C241  6A 28                     PUSH 0x28
0054C243  6A 3C                     PUSH 0x3c
0054C245  6A 1E                     PUSH 0x1e
0054C247  6A 28                     PUSH 0x28
0054C249  6A 32                     PUSH 0x32
0054C24B  68 00 81 7C 00            PUSH 0x7c8100
0054C250  E9 C7 FD FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_2:
0054C255  6A 32                     PUSH 0x32
0054C257  6A 43                     PUSH 0x43
0054C259  6A 1D                     PUSH 0x1d
0054C25B  6A 27                     PUSH 0x27
0054C25D  6A 32                     PUSH 0x32
0054C25F  68 F4 80 7C 00            PUSH 0x7c80f4
0054C264  E9 69 01 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_8:
0054C269  6A 39                     PUSH 0x39
0054C26B  6A 37                     PUSH 0x37
0054C26D  6A 26                     PUSH 0x26
0054C26F  6A 25                     PUSH 0x25
0054C271  6A 32                     PUSH 0x32
0054C273  68 E4 80 7C 00            PUSH 0x7c80e4
0054C278  E9 F2 FD FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_11:
0054C27D  6A 20                     PUSH 0x20
0054C27F  6A 3B                     PUSH 0x3b
0054C281  6A 14                     PUSH 0x14
0054C283  6A 22                     PUSH 0x22
0054C285  6A 32                     PUSH 0x32
0054C287  68 D4 80 7C 00            PUSH 0x7c80d4
0054C28C  E9 8B FD FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_1c:
0054C291  6A 1B                     PUSH 0x1b
0054C293  6A 56                     PUSH 0x56
0054C295  6A 13                     PUSH 0x13
0054C297  6A 34                     PUSH 0x34
0054C299  6A 32                     PUSH 0x32
0054C29B  68 C4 80 7C 00            PUSH 0x7c80c4
0054C2A0  E9 2D 01 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_1d:
0054C2A5  6A 2E                     PUSH 0x2e
0054C2A7  6A 41                     PUSH 0x41
0054C2A9  6A 23                     PUSH 0x23
0054C2AB  6A 28                     PUSH 0x28
0054C2AD  6A 32                     PUSH 0x32
0054C2AF  68 B4 80 7C 00            PUSH 0x7c80b4
0054C2B4  E9 B6 FD FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_17:
0054C2B9  6A 28                     PUSH 0x28
0054C2BB  6A 32                     PUSH 0x32
0054C2BD  6A 14                     PUSH 0x14
0054C2BF  6A 23                     PUSH 0x23
0054C2C1  6A 32                     PUSH 0x32
0054C2C3  68 A4 80 7C 00            PUSH 0x7c80a4
0054C2C8  E9 4F FD FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_1b:
0054C2CD  6A 21                     PUSH 0x21
0054C2CF  6A 3A                     PUSH 0x3a
0054C2D1  6A 13                     PUSH 0x13
0054C2D3  6A 21                     PUSH 0x21
0054C2D5  6A 32                     PUSH 0x32
0054C2D7  68 94 80 7C 00            PUSH 0x7c8094
0054C2DC  E9 F1 00 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_d:
0054C2E1  6A 2C                     PUSH 0x2c
0054C2E3  6A 41                     PUSH 0x41
0054C2E5  6A 1D                     PUSH 0x1d
0054C2E7  6A 2A                     PUSH 0x2a
0054C2E9  6A 32                     PUSH 0x32
0054C2EB  68 84 80 7C 00            PUSH 0x7c8084
0054C2F0  E9 7A FD FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_c:
0054C2F5  6A 34                     PUSH 0x34
0054C2F7  6A 43                     PUSH 0x43
0054C2F9  6A 1B                     PUSH 0x1b
0054C2FB  6A 24                     PUSH 0x24
0054C2FD  6A 32                     PUSH 0x32
0054C2FF  68 74 80 7C 00            PUSH 0x7c8074
0054C304  E9 13 FD FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_9:
0054C309  6A 34                     PUSH 0x34
0054C30B  6A 43                     PUSH 0x43
0054C30D  6A 1B                     PUSH 0x1b
0054C30F  6A 24                     PUSH 0x24
0054C311  6A 32                     PUSH 0x32
0054C313  68 64 80 7C 00            PUSH 0x7c8064
0054C318  E9 B5 00 00 00            JMP 0x0054c3d2
switchD_0054bfbc::caseD_a:
0054C31D  6A 34                     PUSH 0x34
0054C31F  6A 43                     PUSH 0x43
0054C321  6A 1B                     PUSH 0x1b
0054C323  6A 24                     PUSH 0x24
0054C325  6A 32                     PUSH 0x32
0054C327  68 50 80 7C 00            PUSH 0x7c8050
0054C32C  E9 3E FD FF FF            JMP 0x0054c06f
switchD_0054bfbc::caseD_b:
0054C331  6A 34                     PUSH 0x34
0054C333  6A 43                     PUSH 0x43
0054C335  6A 1B                     PUSH 0x1b
0054C337  6A 24                     PUSH 0x24
0054C339  6A 32                     PUSH 0x32
0054C33B  68 3C 80 7C 00            PUSH 0x7c803c
0054C340  E9 D7 FC FF FF            JMP 0x0054c01c
switchD_0054bfbc::caseD_46:
0054C345  6A 0F                     PUSH 0xf
0054C347  6A 1B                     PUSH 0x1b
0054C349  6A 00                     PUSH 0x0
0054C34B  6A 0D                     PUSH 0xd
0054C34D  6A 32                     PUSH 0x32
0054C34F  68 30 80 7C 00            PUSH 0x7c8030
0054C354  6A 01                     PUSH 0x1
0054C356  8B CE                     MOV ECX,ESI
0054C358  E8 12 74 EB FF            CALL 0x0040376f
0054C35D  8B 8E C9 00 00 00         MOV ECX,dword ptr [ESI + 0xc9]
0054C363  8B 96 C5 00 00 00         MOV EDX,dword ptr [ESI + 0xc5]
0054C369  51                        PUSH ECX
0054C36A  52                        PUSH EDX
0054C36B  8B CE                     MOV ECX,ESI
0054C36D  E8 AC 60 EB FF            CALL 0x0040241e
0054C372  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C375  33 C0                     XOR EAX,EAX
0054C377  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C37D  5E                        POP ESI
0054C37E  8B E5                     MOV ESP,EBP
0054C380  5D                        POP EBP
0054C381  C2 0C 00                  RET 0xc
switchD_0054bfbc::caseD_47:
0054C384  6A 30                     PUSH 0x30
0054C386  6A 1D                     PUSH 0x1d
0054C388  6A 01                     PUSH 0x1
0054C38A  6A 01                     PUSH 0x1
0054C38C  6A 32                     PUSH 0x32
0054C38E  68 20 80 7C 00            PUSH 0x7c8020
0054C393  6A 01                     PUSH 0x1
0054C395  8B CE                     MOV ECX,ESI
0054C397  E8 D3 73 EB FF            CALL 0x0040376f
0054C39C  8B 86 C9 00 00 00         MOV EAX,dword ptr [ESI + 0xc9]
0054C3A2  8B 8E C5 00 00 00         MOV ECX,dword ptr [ESI + 0xc5]
0054C3A8  50                        PUSH EAX
0054C3A9  51                        PUSH ECX
0054C3AA  8B CE                     MOV ECX,ESI
0054C3AC  E8 6D 60 EB FF            CALL 0x0040241e
0054C3B1  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C3B4  33 C0                     XOR EAX,EAX
0054C3B6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C3BC  5E                        POP ESI
0054C3BD  8B E5                     MOV ESP,EBP
0054C3BF  5D                        POP EBP
0054C3C0  C2 0C 00                  RET 0xc
switchD_0054bfbc::caseD_48:
0054C3C3  6A 1E                     PUSH 0x1e
0054C3C5  6A 36                     PUSH 0x36
0054C3C7  6A 12                     PUSH 0x12
0054C3C9  6A 20                     PUSH 0x20
0054C3CB  6A 32                     PUSH 0x32
0054C3CD  68 10 80 7C 00            PUSH 0x7c8010
LAB_0054c3d2:
0054C3D2  6A 01                     PUSH 0x1
0054C3D4  8B CE                     MOV ECX,ESI
0054C3D6  E8 94 73 EB FF            CALL 0x0040376f
0054C3DB  8B 96 C9 00 00 00         MOV EDX,dword ptr [ESI + 0xc9]
0054C3E1  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
0054C3E7  52                        PUSH EDX
0054C3E8  50                        PUSH EAX
0054C3E9  8B CE                     MOV ECX,ESI
0054C3EB  E8 2E 60 EB FF            CALL 0x0040241e
0054C3F0  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C3F3  33 C0                     XOR EAX,EAX
0054C3F5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C3FB  5E                        POP ESI
0054C3FC  8B E5                     MOV ESP,EBP
0054C3FE  5D                        POP EBP
0054C3FF  C2 0C 00                  RET 0xc
switchD_0054bfbc::caseD_20:
0054C402  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0054C405  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054C408  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0054C40E  5E                        POP ESI
0054C40F  8B E5                     MOV ESP,EBP
0054C411  5D                        POP EBP
0054C412  C2 0C 00                  RET 0xc
LAB_0054c415:
0054C415  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0054C418  68 F0 7F 7C 00            PUSH 0x7c7ff0
0054C41D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0054C422  56                        PUSH ESI
0054C423  6A 00                     PUSH 0x0
0054C425  68 EE 08 00 00            PUSH 0x8ee
0054C42A  68 60 7D 7C 00            PUSH 0x7c7d60
0054C42F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0054C435  E8 96 10 16 00            CALL 0x006ad4d0
0054C43A  83 C4 18                  ADD ESP,0x18
0054C43D  85 C0                     TEST EAX,EAX
0054C43F  74 01                     JZ 0x0054c442
0054C441  CC                        INT3
LAB_0054c442:
0054C442  68 F0 08 00 00            PUSH 0x8f0
0054C447  68 60 7D 7C 00            PUSH 0x7c7d60
0054C44C  6A 00                     PUSH 0x0
0054C44E  56                        PUSH ESI
0054C44F  E8 EC 99 15 00            CALL 0x006a5e40
0054C454  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0054C457  5E                        POP ESI
0054C458  8B E5                     MOV ESP,EBP
0054C45A  5D                        POP EBP
0054C45B  C2 0C 00                  RET 0xc
