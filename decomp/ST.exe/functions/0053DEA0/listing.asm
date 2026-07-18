FUN_0053dea0:
0053DEA0  55                        PUSH EBP
0053DEA1  8B EC                     MOV EBP,ESP
0053DEA3  81 EC CC 01 00 00         SUB ESP,0x1cc
0053DEA9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053DEAE  53                        PUSH EBX
0053DEAF  56                        PUSH ESI
0053DEB0  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0053DEB3  33 F6                     XOR ESI,ESI
0053DEB5  57                        PUSH EDI
0053DEB6  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0053DEB9  8D 4D B0                  LEA ECX,[EBP + -0x50]
0053DEBC  56                        PUSH ESI
0053DEBD  52                        PUSH EDX
0053DEBE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0053DEC1  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
0053DEC4  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0053DEC7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053DECD  E8 1E F9 1E 00            CALL 0x0072d7f0
0053DED2  8B F8                     MOV EDI,EAX
0053DED4  83 C4 08                  ADD ESP,0x8
0053DED7  3B FE                     CMP EDI,ESI
0053DED9  0F 85 F1 01 00 00         JNZ 0x0053e0d0
0053DEDF  B9 5F 00 00 00            MOV ECX,0x5f
0053DEE4  33 C0                     XOR EAX,EAX
0053DEE6  8D BD 34 FE FF FF         LEA EDI,[EBP + 0xfffffe34]
0053DEEC  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0053DEEF  F3 AB                     STOSD.REP ES:EDI
0053DEF1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0053DEF4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0053DEF7  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
0053DEFA  89 85 38 FE FF FF         MOV dword ptr [EBP + 0xfffffe38],EAX
0053DF00  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0053DF03  89 8D 34 FE FF FF         MOV dword ptr [EBP + 0xfffffe34],ECX
0053DF09  3B C6                     CMP EAX,ESI
0053DF0B  74 29                     JZ 0x0053df36
0053DF0D  8D 77 6C                  LEA ESI,[EDI + 0x6c]
0053DF10  50                        PUSH EAX
0053DF11  68 1C 18 7C 00            PUSH 0x7c181c
0053DF16  56                        PUSH ESI
0053DF17  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0053DF1D  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DF23  83 C4 0C                  ADD ESP,0xc
0053DF26  6A 01                     PUSH 0x1
0053DF28  6A 00                     PUSH 0x0
0053DF2A  56                        PUSH ESI
0053DF2B  53                        PUSH EBX
0053DF2C  E8 AF 3D 1B 00            CALL 0x006f1ce0
0053DF31  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0053DF34  EB 03                     JMP 0x0053df39
LAB_0053df36:
0053DF36  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0053df39:
0053DF39  81 E3 FF 00 00 00         AND EBX,0xff
0053DF3F  4B                        DEC EBX
0053DF40  74 13                     JZ 0x0053df55
0053DF42  83 EB 05                  SUB EBX,0x5
0053DF45  74 0E                     JZ 0x0053df55
0053DF47  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0053DF4A  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
0053DF4D  89 95 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EDX
0053DF53  EB 0C                     JMP 0x0053df61
LAB_0053df55:
0053DF55  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0053DF58  89 95 44 FE FF FF         MOV dword ptr [EBP + 0xfffffe44],EDX
0053DF5E  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
LAB_0053df61:
0053DF61  8B 57 3C                  MOV EDX,dword ptr [EDI + 0x3c]
0053DF64  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
0053DF67  89 8D 48 FE FF FF         MOV dword ptr [EBP + 0xfffffe48],ECX
0053DF6D  8B 4F 5C                  MOV ECX,dword ptr [EDI + 0x5c]
0053DF70  03 D6                     ADD EDX,ESI
0053DF72  85 C9                     TEST ECX,ECX
0053DF74  89 95 3C FE FF FF         MOV dword ptr [EBP + 0xfffffe3c],EDX
0053DF7A  75 07                     JNZ 0x0053df83
0053DF7C  8B 4F 48                  MOV ECX,dword ptr [EDI + 0x48]
0053DF7F  F7 D9                     NEG ECX
0053DF81  EB 03                     JMP 0x0053df86
LAB_0053df83:
0053DF83  8B 4F 44                  MOV ECX,dword ptr [EDI + 0x44]
LAB_0053df86:
0053DF86  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0053DF89  03 CA                     ADD ECX,EDX
0053DF8B  85 C0                     TEST EAX,EAX
0053DF8D  89 8D 40 FE FF FF         MOV dword ptr [EBP + 0xfffffe40],ECX
0053DF93  74 0F                     JZ 0x0053dfa4
0053DF95  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053DF9B  8D 45 FC                  LEA EAX,[EBP + -0x4]
0053DF9E  50                        PUSH EAX
0053DF9F  E8 3C 41 1B 00            CALL 0x006f20e0
LAB_0053dfa4:
0053DFA4  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0053DFA7  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
0053DFAA  89 85 54 FE FF FF         MOV dword ptr [EBP + 0xfffffe54],EAX
0053DFB0  89 85 94 FE FF FF         MOV dword ptr [EBP + 0xfffffe94],EAX
0053DFB6  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
0053DFB9  B9 02 00 00 00            MOV ECX,0x2
0053DFBE  89 85 9C FE FF FF         MOV dword ptr [EBP + 0xfffffe9c],EAX
0053DFC4  B8 01 00 00 00            MOV EAX,0x1
0053DFC9  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
0053DFCF  89 85 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EAX
0053DFD5  66 8B 45 28               MOV AX,word ptr [EBP + 0x28]
0053DFD9  89 8D 58 FE FF FF         MOV dword ptr [EBP + 0xfffffe58],ECX
0053DFDF  66 85 C0                  TEST AX,AX
0053DFE2  89 95 5C FE FF FF         MOV dword ptr [EBP + 0xfffffe5c],EDX
0053DFE8  89 8D 98 FE FF FF         MOV dword ptr [EBP + 0xfffffe98],ECX
0053DFEE  74 79                     JZ 0x0053e069
0053DFF0  66 8B 4D 2C               MOV CX,word ptr [EBP + 0x2c]
0053DFF4  8B 55 30                  MOV EDX,dword ptr [EBP + 0x30]
0053DFF7  BE 01 01 00 00            MOV ESI,0x101
0053DFFC  BB 03 00 00 00            MOV EBX,0x3
0053E001  89 B5 B4 FE FF FF         MOV dword ptr [EBP + 0xfffffeb4],ESI
0053E007  89 9D B8 FE FF FF         MOV dword ptr [EBP + 0xfffffeb8],EBX
0053E00D  C7 85 BC FE FF FF 01 42 00 00  MOV dword ptr [EBP + 0xfffffebc],0x4201
0053E017  66 89 8D C0 FE FF FF      MOV word ptr [EBP + 0xfffffec0],CX
0053E01E  66 89 85 C2 FE FF FF      MOV word ptr [EBP + 0xfffffec2],AX
0053E025  89 95 C4 FE FF FF         MOV dword ptr [EBP + 0xfffffec4],EDX
0053E02B  C7 85 CC FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffecc],0x0
0053E035  C7 85 F0 FE FF FF 00 00 00 00  MOV dword ptr [EBP + 0xfffffef0],0x0
0053E03F  89 B5 D8 FE FF FF         MOV dword ptr [EBP + 0xfffffed8],ESI
0053E045  89 9D DC FE FF FF         MOV dword ptr [EBP + 0xfffffedc],EBX
0053E04B  C7 85 E0 FE FF FF 02 42 00 00  MOV dword ptr [EBP + 0xfffffee0],0x4202
0053E055  66 89 8D E4 FE FF FF      MOV word ptr [EBP + 0xfffffee4],CX
0053E05C  66 89 85 E6 FE FF FF      MOV word ptr [EBP + 0xfffffee6],AX
0053E063  89 95 E8 FE FF FF         MOV dword ptr [EBP + 0xfffffee8],EDX
LAB_0053e069:
0053E069  8B 5D 34                  MOV EBX,dword ptr [EBP + 0x34]
0053E06C  85 DB                     TEST EBX,EBX
0053E06E  74 31                     JZ 0x0053e0a1
0053E070  8B 0D 90 67 80 00         MOV ECX,dword ptr [0x00806790]
0053E076  6A 01                     PUSH 0x1
0053E078  6A 00                     PUSH 0x0
0053E07A  53                        PUSH EBX
0053E07B  51                        PUSH ECX
0053E07C  E8 EF C9 1C 00            CALL 0x0070aa70
0053E081  8B 15 90 67 80 00         MOV EDX,dword ptr [0x00806790]
0053E087  6A 01                     PUSH 0x1
0053E089  53                        PUSH EBX
0053E08A  6A 12                     PUSH 0x12
0053E08C  52                        PUSH EDX
0053E08D  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
0053E093  E8 58 C6 1C 00            CALL 0x0070a6f0
0053E098  83 C4 20                  ADD ESP,0x20
0053E09B  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
LAB_0053e0a1:
0053E0A1  8B 7F 0C                  MOV EDI,dword ptr [EDI + 0xc]
0053E0A4  8D 8D 34 FE FF FF         LEA ECX,[EBP + 0xfffffe34]
0053E0AA  6A 00                     PUSH 0x0
0053E0AC  51                        PUSH ECX
0053E0AD  8B 07                     MOV EAX,dword ptr [EDI]
0053E0AF  8D 55 F8                  LEA EDX,[EBP + -0x8]
0053E0B2  6A 00                     PUSH 0x0
0053E0B4  52                        PUSH EDX
0053E0B5  6A 02                     PUSH 0x2
0053E0B7  8B CF                     MOV ECX,EDI
0053E0B9  FF 50 08                  CALL dword ptr [EAX + 0x8]
0053E0BC  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0053E0BF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053E0C4  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0053E0C7  5F                        POP EDI
0053E0C8  5E                        POP ESI
0053E0C9  5B                        POP EBX
0053E0CA  8B E5                     MOV ESP,EBP
0053E0CC  5D                        POP EBP
0053E0CD  C2 38 00                  RET 0x38
LAB_0053e0d0:
0053E0D0  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0053E0D3  68 FC 78 7C 00            PUSH 0x7c78fc
0053E0D8  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053E0DD  57                        PUSH EDI
0053E0DE  56                        PUSH ESI
0053E0DF  68 B1 00 00 00            PUSH 0xb1
0053E0E4  68 70 78 7C 00            PUSH 0x7c7870
0053E0E9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053E0EF  E8 DC F3 16 00            CALL 0x006ad4d0
0053E0F4  83 C4 18                  ADD ESP,0x18
0053E0F7  85 C0                     TEST EAX,EAX
0053E0F9  74 01                     JZ 0x0053e0fc
0053E0FB  CC                        INT3
LAB_0053e0fc:
0053E0FC  68 B1 00 00 00            PUSH 0xb1
0053E101  68 70 78 7C 00            PUSH 0x7c7870
0053E106  56                        PUSH ESI
0053E107  57                        PUSH EDI
0053E108  E8 33 7D 16 00            CALL 0x006a5e40
0053E10D  5F                        POP EDI
0053E10E  5E                        POP ESI
0053E10F  33 C0                     XOR EAX,EAX
0053E111  5B                        POP EBX
0053E112  8B E5                     MOV ESP,EBP
0053E114  5D                        POP EBP
0053E115  C2 38 00                  RET 0x38
