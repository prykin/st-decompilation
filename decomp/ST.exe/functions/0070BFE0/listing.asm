FUN_0070bfe0:
0070BFE0  55                        PUSH EBP
0070BFE1  8B EC                     MOV EBP,ESP
0070BFE3  81 EC DC 00 00 00         SUB ESP,0xdc
0070BFE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070BFEE  53                        PUSH EBX
0070BFEF  56                        PUSH ESI
0070BFF0  57                        PUSH EDI
0070BFF1  33 FF                     XOR EDI,EDI
0070BFF3  8D 55 B0                  LEA EDX,[EBP + -0x50]
0070BFF6  8D 4D AC                  LEA ECX,[EBP + -0x54]
0070BFF9  57                        PUSH EDI
0070BFFA  52                        PUSH EDX
0070BFFB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070BFFE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070C001  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070C004  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0070C00B  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0070C00E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C014  E8 D7 17 02 00            CALL 0x0072d7f0
0070C019  8B F0                     MOV ESI,EAX
0070C01B  83 C4 08                  ADD ESP,0x8
0070C01E  3B F7                     CMP ESI,EDI
0070C020  0F 85 5E 01 00 00         JNZ 0x0070c184
0070C026  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
0070C029  53                        PUSH EBX
0070C02A  E8 A1 F6 FF FF            CALL 0x0070b6d0
0070C02F  83 C4 04                  ADD ESP,0x4
0070C032  48                        DEC EAX
0070C033  0F 84 AD 00 00 00         JZ 0x0070c0e6
0070C039  48                        DEC EAX
0070C03A  74 3C                     JZ 0x0070c078
0070C03C  48                        DEC EAX
0070C03D  0F 85 2E 01 00 00         JNZ 0x0070c171
0070C043  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070C046  3B C7                     CMP EAX,EDI
0070C048  74 05                     JZ 0x0070c04f
0070C04A  66 C7 00 0A 00            MOV word ptr [EAX],0xa
LAB_0070c04f:
0070C04F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070C052  3B C7                     CMP EAX,EDI
0070C054  74 05                     JZ 0x0070c05b
0070C056  66 C7 00 0A 00            MOV word ptr [EAX],0xa
LAB_0070c05b:
0070C05B  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070C05E  50                        PUSH EAX
0070C05F  53                        PUSH EBX
0070C060  E8 1B EE 00 00            CALL 0x0071ae80
0070C065  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0070C068  83 C4 08                  ADD ESP,0x8
0070C06B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C071  5F                        POP EDI
0070C072  5E                        POP ESI
0070C073  5B                        POP EBX
0070C074  8B E5                     MOV ESP,EBP
0070C076  5D                        POP EBP
0070C077  C3                        RET
LAB_0070c078:
0070C078  8D 8D 24 FF FF FF         LEA ECX,[EBP + 0xffffff24]
0070C07E  57                        PUSH EDI
0070C07F  51                        PUSH ECX
0070C080  53                        PUSH EBX
0070C081  FF 15 30 BB 85 00         CALL dword ptr [0x0085bb30]
0070C087  8B F8                     MOV EDI,EAX
0070C089  83 FF FF                  CMP EDI,-0x1
0070C08C  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0070C08F  75 18                     JNZ 0x0070c0a9
0070C091  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070C097  68 01 04 00 00            PUSH 0x401
0070C09C  68 E0 FF 7E 00            PUSH 0x7effe0
0070C0A1  52                        PUSH EDX
0070C0A2  6A F6                     PUSH -0xa
0070C0A4  E8 97 9D F9 FF            CALL 0x006a5e40
LAB_0070c0a9:
0070C0A9  57                        PUSH EDI
0070C0AA  E8 11 5F 04 00            CALL 0x00751fc0
0070C0AF  8B F0                     MOV ESI,EAX
0070C0B1  56                        PUSH ESI
0070C0B2  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
0070C0B5  E8 06 C0 FC FF            CALL 0x006d80c0
0070C0BA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070C0BD  85 C0                     TEST EAX,EAX
0070C0BF  74 07                     JZ 0x0070c0c8
0070C0C1  66 8B 4E 22               MOV CX,word ptr [ESI + 0x22]
0070C0C5  66 89 08                  MOV word ptr [EAX],CX
LAB_0070c0c8:
0070C0C8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0070C0CB  85 C0                     TEST EAX,EAX
0070C0CD  74 07                     JZ 0x0070c0d6
0070C0CF  66 8B 56 26               MOV DX,word ptr [ESI + 0x26]
0070C0D3  66 89 10                  MOV word ptr [EAX],DX
LAB_0070c0d6:
0070C0D6  56                        PUSH ESI
0070C0D7  E8 E4 AE FB FF            CALL 0x006c6fc0
0070C0DC  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
0070C0E3  57                        PUSH EDI
0070C0E4  EB 61                     JMP 0x0070c147
LAB_0070c0e6:
0070C0E6  8D 8D 24 FF FF FF         LEA ECX,[EBP + 0xffffff24]
0070C0EC  57                        PUSH EDI
0070C0ED  51                        PUSH ECX
0070C0EE  53                        PUSH EBX
0070C0EF  FF 15 30 BB 85 00         CALL dword ptr [0x0085bb30]
0070C0F5  8B F0                     MOV ESI,EAX
0070C0F7  83 FE FF                  CMP ESI,-0x1
0070C0FA  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0070C0FD  75 18                     JNZ 0x0070c117
0070C0FF  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0070C105  68 0C 04 00 00            PUSH 0x40c
0070C10A  68 E0 FF 7E 00            PUSH 0x7effe0
0070C10F  52                        PUSH EDX
0070C110  6A F6                     PUSH -0xa
0070C112  E8 29 9D F9 FF            CALL 0x006a5e40
LAB_0070c117:
0070C117  57                        PUSH EDI
0070C118  56                        PUSH ESI
0070C119  E8 12 5E 04 00            CALL 0x00751f30
0070C11E  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0070C121  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070C124  3B CF                     CMP ECX,EDI
0070C126  74 07                     JZ 0x0070c12f
0070C128  66 8B 50 08               MOV DX,word ptr [EAX + 0x8]
0070C12C  66 89 11                  MOV word ptr [ECX],DX
LAB_0070c12f:
0070C12F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0070C132  3B CF                     CMP ECX,EDI
0070C134  74 07                     JZ 0x0070c13d
0070C136  66 8B 50 0C               MOV DX,word ptr [EAX + 0xc]
0070C13A  66 89 11                  MOV word ptr [ECX],DX
LAB_0070c13d:
0070C13D  50                        PUSH EAX
0070C13E  E8 3D B8 FB FF            CALL 0x006c7980
0070C143  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0070C146  56                        PUSH ESI
LAB_0070c147:
0070C147  FF 15 38 BB 85 00         CALL dword ptr [0x0085bb38]
0070C14D  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0070C150  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0070C157  50                        PUSH EAX
0070C158  53                        PUSH EBX
0070C159  E8 22 ED 00 00            CALL 0x0071ae80
0070C15E  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0070C161  83 C4 08                  ADD ESP,0x8
0070C164  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C16A  5F                        POP EDI
0070C16B  5E                        POP ESI
0070C16C  5B                        POP EBX
0070C16D  8B E5                     MOV ESP,EBP
0070C16F  5D                        POP EBP
0070C170  C3                        RET
LAB_0070c171:
0070C171  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0070C174  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070C177  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070C17D  5F                        POP EDI
0070C17E  5E                        POP ESI
0070C17F  5B                        POP EBX
0070C180  8B E5                     MOV ESP,EBP
0070C182  5D                        POP EBP
0070C183  C3                        RET
LAB_0070c184:
0070C184  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
0070C187  68 00 01 7F 00            PUSH 0x7f0100
0070C18C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070C191  56                        PUSH ESI
0070C192  57                        PUSH EDI
0070C193  68 1E 04 00 00            PUSH 0x41e
0070C198  68 E0 FF 7E 00            PUSH 0x7effe0
0070C19D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070C1A3  E8 28 13 FA FF            CALL 0x006ad4d0
0070C1A8  83 C4 18                  ADD ESP,0x18
0070C1AB  85 C0                     TEST EAX,EAX
0070C1AD  74 01                     JZ 0x0070c1b0
0070C1AF  CC                        INT3
LAB_0070c1b0:
0070C1B0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070C1B3  83 F8 FF                  CMP EAX,-0x1
0070C1B6  74 07                     JZ 0x0070c1bf
0070C1B8  50                        PUSH EAX
0070C1B9  FF 15 38 BB 85 00         CALL dword ptr [0x0085bb38]
LAB_0070c1bf:
0070C1BF  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0070C1C2  3B C7                     CMP EAX,EDI
0070C1C4  74 06                     JZ 0x0070c1cc
0070C1C6  50                        PUSH EAX
0070C1C7  E8 F4 AD FB FF            CALL 0x006c6fc0
LAB_0070c1cc:
0070C1CC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0070C1CF  3B C7                     CMP EAX,EDI
0070C1D1  74 06                     JZ 0x0070c1d9
0070C1D3  50                        PUSH EAX
0070C1D4  E8 A7 B7 FB FF            CALL 0x006c7980
LAB_0070c1d9:
0070C1D9  39 7D F8                  CMP dword ptr [EBP + -0x8],EDI
0070C1DC  74 09                     JZ 0x0070c1e7
0070C1DE  8D 45 F8                  LEA EAX,[EBP + -0x8]
0070C1E1  50                        PUSH EAX
0070C1E2  E8 79 EE F9 FF            CALL 0x006ab060
LAB_0070c1e7:
0070C1E7  68 25 04 00 00            PUSH 0x425
0070C1EC  68 E0 FF 7E 00            PUSH 0x7effe0
0070C1F1  57                        PUSH EDI
0070C1F2  56                        PUSH ESI
0070C1F3  E8 48 9C F9 FF            CALL 0x006a5e40
0070C1F8  5F                        POP EDI
0070C1F9  5E                        POP ESI
0070C1FA  33 C0                     XOR EAX,EAX
0070C1FC  5B                        POP EBX
0070C1FD  8B E5                     MOV ESP,EBP
0070C1FF  5D                        POP EBP
0070C200  C3                        RET
