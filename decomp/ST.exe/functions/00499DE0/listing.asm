FUN_00499de0:
00499DE0  55                        PUSH EBP
00499DE1  8B EC                     MOV EBP,ESP
00499DE3  81 EC A0 00 00 00         SUB ESP,0xa0
00499DE9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00499DEE  53                        PUSH EBX
00499DEF  56                        PUSH ESI
00499DF0  89 4D A4                  MOV dword ptr [EBP + -0x5c],ECX
00499DF3  33 DB                     XOR EBX,EBX
00499DF5  57                        PUSH EDI
00499DF6  8D 95 64 FF FF FF         LEA EDX,[EBP + 0xffffff64]
00499DFC  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
00499E02  53                        PUSH EBX
00499E03  52                        PUSH EDX
00499E04  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
00499E07  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
00499E0A  89 5D D4                  MOV dword ptr [EBP + -0x2c],EBX
00499E0D  89 85 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EAX
00499E13  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00499E19  E8 D2 39 29 00            CALL 0x0072d7f0
00499E1E  8B F0                     MOV ESI,EAX
00499E20  83 C4 08                  ADD ESP,0x8
00499E23  3B F3                     CMP ESI,EBX
00499E25  0F 85 A7 04 00 00         JNZ 0x0049a2d2
00499E2B  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
00499E2E  39 9E 0E 02 00 00         CMP dword ptr [ESI + 0x20e],EBX
00499E34  75 1A                     JNZ 0x00499e50
00499E36  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00499E3B  68 5A 05 00 00            PUSH 0x55a
00499E40  68 3C BE 7A 00            PUSH 0x7abe3c
00499E45  50                        PUSH EAX
00499E46  68 09 00 FE AF            PUSH 0xaffe0009
00499E4B  E8 F0 BF 20 00            CALL 0x006a5e40
LAB_00499e50:
00499E50  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00499E53  8D 4D F4                  LEA ECX,[EBP + -0xc]
00499E56  E8 E5 5F 21 00            CALL 0x006afe40
00499E5B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00499E61  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00499E64  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00499E6A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00499E6D  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00499E70  85 FF                     TEST EDI,EDI
00499E72  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
00499E75  0F 8E E8 00 00 00         JLE 0x00499f63
LAB_00499e7b:
00499E7B  8D 4D F8                  LEA ECX,[EBP + -0x8]
00499E7E  8B D3                     MOV EDX,EBX
00499E80  51                        PUSH ECX
00499E81  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00499E84  E8 E7 2D 21 00            CALL 0x006acc70
00499E89  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00499E8C  66 3D FF FF               CMP AX,0xffff
00499E90  0F 84 B2 00 00 00         JZ 0x00499f48
00499E96  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00499E99  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00499E9F  6A 01                     PUSH 0x1
00499EA1  50                        PUSH EAX
00499EA2  52                        PUSH EDX
00499EA3  E8 12 8A F6 FF            CALL 0x004028ba
00499EA8  8B F8                     MOV EDI,EAX
00499EAA  85 FF                     TEST EDI,EDI
00499EAC  75 1A                     JNZ 0x00499ec8
00499EAE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00499EB3  68 64 05 00 00            PUSH 0x564
00499EB8  68 3C BE 7A 00            PUSH 0x7abe3c
00499EBD  50                        PUSH EAX
00499EBE  68 04 00 FE AF            PUSH 0xaffe0004
00499EC3  E8 78 BF 20 00            CALL 0x006a5e40
LAB_00499ec8:
00499EC8  8B 17                     MOV EDX,dword ptr [EDI]
00499ECA  8B CF                     MOV ECX,EDI
00499ECC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00499ECF  83 C0 F9                  ADD EAX,-0x7
00499ED2  83 F8 1E                  CMP EAX,0x1e
00499ED5  77 30                     JA 0x00499f07
00499ED7  33 C9                     XOR ECX,ECX
00499ED9  8A 88 48 A3 49 00         MOV CL,byte ptr [EAX + 0x49a348]
switchD_00499edf::switchD:
00499EDF  FF 24 8D 40 A3 49 00      JMP dword ptr [ECX*0x4 + 0x49a340]
switchD_00499edf::caseD_7:
00499EE6  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00499EE9  53                        PUSH EBX
00499EEA  52                        PUSH EDX
00499EEB  E8 80 6D 21 00            CALL 0x006b0c70
00499EF0  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00499EF3  8D 45 E4                  LEA EAX,[EBP + -0x1c]
00499EF6  4B                        DEC EBX
00499EF7  4A                        DEC EDX
00499EF8  50                        PUSH EAX
00499EF9  6A 03                     PUSH 0x3
00499EFB  8B CF                     MOV ECX,EDI
00499EFD  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00499F00  E8 21 82 F6 FF            CALL 0x00402126
00499F05  EB 50                     JMP 0x00499f57
switchD_00499edf::caseD_9:
00499F07  83 BE 0A 02 00 00 01      CMP dword ptr [ESI + 0x20a],0x1
00499F0E  75 47                     JNZ 0x00499f57
00499F10  8B 17                     MOV EDX,dword ptr [EDI]
00499F12  8B CF                     MOV ECX,EDI
00499F14  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
00499F17  83 F8 17                  CMP EAX,0x17
00499F1A  74 3B                     JZ 0x00499f57
00499F1C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00499F1F  53                        PUSH EBX
00499F20  50                        PUSH EAX
00499F21  E8 4A 6D 21 00            CALL 0x006b0c70
00499F26  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00499F29  4B                        DEC EBX
00499F2A  4A                        DEC EDX
00499F2B  8B CF                     MOV ECX,EDI
00499F2D  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
00499F30  E8 23 AF F6 FF            CALL 0x00404e58
00499F35  85 C0                     TEST EAX,EAX
00499F37  75 1E                     JNZ 0x00499f57
00499F39  8D 4D E4                  LEA ECX,[EBP + -0x1c]
00499F3C  51                        PUSH ECX
00499F3D  6A 03                     PUSH 0x3
00499F3F  8B CF                     MOV ECX,EDI
00499F41  E8 E0 81 F6 FF            CALL 0x00402126
00499F46  EB 0F                     JMP 0x00499f57
LAB_00499f48:
00499F48  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00499F4B  53                        PUSH EBX
00499F4C  52                        PUSH EDX
00499F4D  E8 1E 6D 21 00            CALL 0x006b0c70
00499F52  4B                        DEC EBX
00499F53  4F                        DEC EDI
00499F54  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_00499f57:
00499F57  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
00499F5A  43                        INC EBX
00499F5B  3B DF                     CMP EBX,EDI
00499F5D  0F 8C 18 FF FF FF         JL 0x00499e7b
LAB_00499f63:
00499F63  33 D2                     XOR EDX,EDX
00499F65  3B FA                     CMP EDI,EDX
00499F67  0F 86 41 03 00 00         JBE 0x0049a2ae
00499F6D  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
00499F73  89 96 12 02 00 00         MOV dword ptr [ESI + 0x212],EDX
00499F79  33 DB                     XOR EBX,EBX
00499F7B  39 51 0C                  CMP dword ptr [ECX + 0xc],EDX
00499F7E  76 2D                     JBE 0x00499fad
LAB_00499f80:
00499F80  8D 45 E8                  LEA EAX,[EBP + -0x18]
00499F83  50                        PUSH EAX
00499F84  E8 E7 2C 21 00            CALL 0x006acc70
00499F89  66 81 7D EA FF FF         CMP word ptr [EBP + -0x16],0xffff
00499F8F  74 06                     JZ 0x00499f97
00499F91  FF 86 12 02 00 00         INC dword ptr [ESI + 0x212]
LAB_00499f97:
00499F97  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
00499F9D  43                        INC EBX
00499F9E  8B D3                     MOV EDX,EBX
00499FA0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00499FA3  81 E2 FF FF 00 00         AND EDX,0xffff
00499FA9  3B D0                     CMP EDX,EAX
00499FAB  72 D3                     JC 0x00499f80
LAB_00499fad:
00499FAD  8B 86 12 02 00 00         MOV EAX,dword ptr [ESI + 0x212]
00499FB3  85 C0                     TEST EAX,EAX
00499FB5  75 1B                     JNZ 0x00499fd2
00499FB7  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00499FBD  68 8F 05 00 00            PUSH 0x58f
00499FC2  68 3C BE 7A 00            PUSH 0x7abe3c
00499FC7  51                        PUSH ECX
00499FC8  68 09 00 FE AF            PUSH 0xaffe0009
00499FCD  E8 6E BE 20 00            CALL 0x006a5e40
LAB_00499fd2:
00499FD2  33 D2                     XOR EDX,EDX
00499FD4  3B FA                     CMP EDI,EDX
00499FD6  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00499FD9  0F 8E A8 01 00 00         JLE 0x0049a187
LAB_00499fdf:
00499FDF  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00499FE2  8D 45 F8                  LEA EAX,[EBP + -0x8]
00499FE5  50                        PUSH EAX
00499FE6  E8 85 2C 21 00            CALL 0x006acc70
00499FEB  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00499FEE  66 3D FF FF               CMP AX,0xffff
00499FF2  0F 84 77 01 00 00         JZ 0x0049a16f
00499FF8  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
00499FFB  6A 01                     PUSH 0x1
00499FFD  50                        PUSH EAX
00499FFE  51                        PUSH ECX
00499FFF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A005  E8 B0 88 F6 FF            CALL 0x004028ba
0049A00A  8B D8                     MOV EBX,EAX
0049A00C  8B CB                     MOV ECX,EBX
0049A00E  8B 13                     MOV EDX,dword ptr [EBX]
0049A010  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049A013  83 F8 09                  CMP EAX,0x9
0049A016  75 6F                     JNZ 0x0049a087
0049A018  8D 45 DE                  LEA EAX,[EBP + -0x22]
0049A01B  8D 4D DC                  LEA ECX,[EBP + -0x24]
0049A01E  50                        PUSH EAX
0049A01F  8D 55 DA                  LEA EDX,[EBP + -0x26]
0049A022  51                        PUSH ECX
0049A023  8D 45 EE                  LEA EAX,[EBP + -0x12]
0049A026  52                        PUSH EDX
0049A027  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049A02A  8D 4D FF                  LEA ECX,[EBP + -0x1]
0049A02D  50                        PUSH EAX
0049A02E  51                        PUSH ECX
0049A02F  52                        PUSH EDX
0049A030  8B CE                     MOV ECX,ESI
0049A032  E8 83 79 F6 FF            CALL 0x004019ba
0049A037  66 8B 45 EE               MOV AX,word ptr [EBP + -0x12]
0049A03B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049A041  66 3D FF FF               CMP AX,0xffff
0049A045  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
0049A04B  74 2A                     JZ 0x0049a077
0049A04D  8B 8E 0A 02 00 00         MOV ECX,dword ptr [ESI + 0x20a]
0049A053  66 89 45 C9               MOV word ptr [EBP + -0x37],AX
0049A057  89 55 BC                  MOV dword ptr [EBP + -0x44],EDX
0049A05A  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
0049A05D  8D 45 BC                  LEA EAX,[EBP + -0x44]
0049A060  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0049A063  50                        PUSH EAX
0049A064  88 55 C4                  MOV byte ptr [EBP + -0x3c],DL
0049A067  C7 45 C5 01 00 00 00      MOV dword ptr [EBP + -0x3b],0x1
0049A06E  6A 02                     PUSH 0x2
0049A070  8B CB                     MOV ECX,EBX
0049A072  E9 F3 00 00 00            JMP 0x0049a16a
LAB_0049a077:
0049A077  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0049A07A  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049A07D  50                        PUSH EAX
0049A07E  6A 03                     PUSH 0x3
0049A080  8B CB                     MOV ECX,EBX
0049A082  E9 E3 00 00 00            JMP 0x0049a16a
LAB_0049a087:
0049A087  8B 86 16 02 00 00         MOV EAX,dword ptr [ESI + 0x216]
0049A08D  8B 9E 1A 02 00 00         MOV EBX,dword ptr [ESI + 0x21a]
0049A093  40                        INC EAX
0049A094  C7 45 B4 00 00 00 00      MOV dword ptr [EBP + -0x4c],0x0
0049A09B  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0049A09E  C7 45 B8 02 00 00 00      MOV dword ptr [EBP + -0x48],0x2
LAB_0049a0a5:
0049A0A5  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
0049A0A8  33 D2                     XOR EDX,EDX
0049A0AA  69 C9 6D 4E C6 41         IMUL ECX,ECX,0x41c64e6d
0049A0B0  8D 81 39 30 00 00         LEA EAX,[ECX + 0x3039]
0049A0B6  89 46 31                  MOV dword ptr [ESI + 0x31],EAX
0049A0B9  C1 E8 10                  SHR EAX,0x10
0049A0BC  F7 75 A8                  DIV dword ptr [EBP + -0x58]
0049A0BF  33 C0                     XOR EAX,EAX
0049A0C1  85 DB                     TEST EBX,EBX
0049A0C3  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0049A0C6  7E 38                     JLE 0x0049a100
0049A0C8  8B BE 1E 02 00 00         MOV EDI,dword ptr [ESI + 0x21e]
0049A0CE  8B CF                     MOV ECX,EDI
LAB_0049a0d0:
0049A0D0  83 39 FF                  CMP dword ptr [ECX],-0x1
0049A0D3  74 09                     JZ 0x0049a0de
0049A0D5  66 2B 51 04               SUB DX,word ptr [ECX + 0x4]
0049A0D9  66 85 D2                  TEST DX,DX
0049A0DC  7E 0A                     JLE 0x0049a0e8
LAB_0049a0de:
0049A0DE  40                        INC EAX
0049A0DF  83 C1 08                  ADD ECX,0x8
0049A0E2  3B C3                     CMP EAX,EBX
0049A0E4  7C EA                     JL 0x0049a0d0
0049A0E6  EB 18                     JMP 0x0049a100
LAB_0049a0e8:
0049A0E8  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0049A0EB  8B 4C C7 04               MOV ECX,dword ptr [EDI + EAX*0x8 + 0x4]
0049A0EF  3B CA                     CMP ECX,EDX
0049A0F1  7E 0D                     JLE 0x0049a100
0049A0F3  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
0049A0F6  0F BF C0                  MOVSX EAX,AX
0049A0F9  8B 4C C7 04               MOV ECX,dword ptr [EDI + EAX*0x8 + 0x4]
0049A0FD  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
LAB_0049a100:
0049A100  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0049A103  48                        DEC EAX
0049A104  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0049A107  75 9C                     JNZ 0x0049a0a5
0049A109  8B 7D AC                  MOV EDI,dword ptr [EBP + -0x54]
0049A10C  8B 8E 0E 02 00 00         MOV ECX,dword ptr [ESI + 0x20e]
0049A112  8D 55 E8                  LEA EDX,[EBP + -0x18]
0049A115  52                        PUSH EDX
0049A116  0F BF D7                  MOVSX EDX,DI
0049A119  E8 52 2B 21 00            CALL 0x006acc70
0049A11E  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0049A123  66 8B 55 EA               MOV DX,word ptr [EBP + -0x16]
0049A127  6A 01                     PUSH 0x1
0049A129  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
0049A12F  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
0049A132  88 45 C4                  MOV byte ptr [EBP + -0x3c],AL
0049A135  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0049A138  8B 8E 0A 02 00 00         MOV ECX,dword ptr [ESI + 0x20a]
0049A13E  66 89 55 C9               MOV word ptr [EBP + -0x37],DX
0049A142  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049A145  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
0049A148  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A14E  52                        PUSH EDX
0049A14F  0F BE C4                  MOVSX EAX,AH
0049A152  89 45 C5                  MOV dword ptr [EBP + -0x3b],EAX
0049A155  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049A158  50                        PUSH EAX
0049A159  66 89 7D CB               MOV word ptr [EBP + -0x35],DI
0049A15D  E8 58 87 F6 FF            CALL 0x004028ba
0049A162  8D 4D BC                  LEA ECX,[EBP + -0x44]
0049A165  51                        PUSH ECX
0049A166  6A 02                     PUSH 0x2
0049A168  8B C8                     MOV ECX,EAX
LAB_0049a16a:
0049A16A  E8 B7 7F F6 FF            CALL 0x00402126
LAB_0049a16f:
0049A16F  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0049A172  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049A175  42                        INC EDX
0049A176  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0049A179  81 E2 FF FF 00 00         AND EDX,0xffff
0049A17F  3B D0                     CMP EDX,EAX
0049A181  0F 8C 58 FE FF FF         JL 0x00499fdf
LAB_0049a187:
0049A187  83 BE 0A 02 00 00 01      CMP dword ptr [ESI + 0x20a],0x1
0049A18E  0F 85 1A 01 00 00         JNZ 0x0049a2ae
0049A194  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
0049A197  8B 5D D0                  MOV EBX,dword ptr [EBP + -0x30]
0049A19A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0049A19D  33 D2                     XOR EDX,EDX
0049A19F  3B C2                     CMP EAX,EDX
0049A1A1  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0049A1A4  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0049A1A7  0F 8E D9 00 00 00         JLE 0x0049a286
LAB_0049a1ad:
0049A1AD  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
0049A1B0  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049A1B3  50                        PUSH EAX
0049A1B4  E8 B7 2A 21 00            CALL 0x006acc70
0049A1B9  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049A1BC  66 3D FF FF               CMP AX,0xffff
0049A1C0  0F 84 A8 00 00 00         JZ 0x0049a26e
0049A1C6  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
0049A1C9  6A 01                     PUSH 0x1
0049A1CB  50                        PUSH EAX
0049A1CC  51                        PUSH ECX
0049A1CD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A1D3  E8 E2 86 F6 FF            CALL 0x004028ba
0049A1D8  8B F8                     MOV EDI,EAX
0049A1DA  85 FF                     TEST EDI,EDI
0049A1DC  75 1B                     JNZ 0x0049a1f9
0049A1DE  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0049A1E4  68 C4 05 00 00            PUSH 0x5c4
0049A1E9  68 3C BE 7A 00            PUSH 0x7abe3c
0049A1EE  52                        PUSH EDX
0049A1EF  68 04 00 FE AF            PUSH 0xaffe0004
0049A1F4  E8 47 BC 20 00            CALL 0x006a5e40
LAB_0049a1f9:
0049A1F9  8B 07                     MOV EAX,dword ptr [EDI]
0049A1FB  8B CF                     MOV ECX,EDI
0049A1FD  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
0049A200  83 C0 F9                  ADD EAX,-0x7
0049A203  83 F8 1E                  CMP EAX,0x1e
0049A206  77 0F                     JA 0x0049a217
0049A208  33 C9                     XOR ECX,ECX
0049A20A  8A 88 70 A3 49 00         MOV CL,byte ptr [EAX + 0x49a370]
switchD_0049a210::switchD:
0049A210  FF 24 8D 68 A3 49 00      JMP dword ptr [ECX*0x4 + 0x49a368]
switchD_0049a210::caseD_9:
0049A217  8B 17                     MOV EDX,dword ptr [EDI]
0049A219  8B CF                     MOV ECX,EDI
0049A21B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
0049A21E  83 F8 17                  CMP EAX,0x17
0049A221  75 1C                     JNZ 0x0049a23f
0049A223  85 DB                     TEST EBX,EBX
0049A225  75 11                     JNZ 0x0049a238
0049A227  6A 01                     PUSH 0x1
0049A229  6A 02                     PUSH 0x2
0049A22B  6A 01                     PUSH 0x1
0049A22D  53                        PUSH EBX
0049A22E  E8 5D 40 21 00            CALL 0x006ae290
0049A233  8B D8                     MOV EBX,EAX
0049A235  89 5D D0                  MOV dword ptr [EBP + -0x30],EBX
LAB_0049a238:
0049A238  8D 45 F8                  LEA EAX,[EBP + -0x8]
0049A23B  50                        PUSH EAX
0049A23C  53                        PUSH EBX
0049A23D  EB 2A                     JMP 0x0049a269
LAB_0049a23f:
0049A23F  8B CF                     MOV ECX,EDI
0049A241  E8 12 AC F6 FF            CALL 0x00404e58
0049A246  85 C0                     TEST EAX,EAX
0049A248  74 24                     JZ 0x0049a26e
0049A24A  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0049A24D  85 C0                     TEST EAX,EAX
0049A24F  75 10                     JNZ 0x0049a261
0049A251  6A 01                     PUSH 0x1
0049A253  6A 02                     PUSH 0x2
0049A255  6A 01                     PUSH 0x1
0049A257  6A 00                     PUSH 0x0
0049A259  E8 32 40 21 00            CALL 0x006ae290
0049A25E  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
LAB_0049a261:
0049A261  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0049A264  8D 4D F8                  LEA ECX,[EBP + -0x8]
0049A267  51                        PUSH ECX
0049A268  52                        PUSH EDX
LAB_0049a269:
0049A269  E8 52 3F 21 00            CALL 0x006ae1c0
switchD_0049a210::caseD_7:
0049A26E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
0049A271  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0049A274  42                        INC EDX
0049A275  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0049A278  81 E2 FF FF 00 00         AND EDX,0xffff
0049A27E  3B D0                     CMP EDX,EAX
0049A280  0F 8C 27 FF FF FF         JL 0x0049a1ad
LAB_0049a286:
0049A286  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0049A289  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
0049A28C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049A292  57                        PUSH EDI
0049A293  53                        PUSH EBX
0049A294  50                        PUSH EAX
0049A295  E8 01 9B F6 FF            CALL 0x00403d9b
0049A29A  85 DB                     TEST EBX,EBX
0049A29C  74 06                     JZ 0x0049a2a4
0049A29E  53                        PUSH EBX
0049A29F  E8 6C 3E 21 00            CALL 0x006ae110
LAB_0049a2a4:
0049A2A4  85 FF                     TEST EDI,EDI
0049A2A6  74 06                     JZ 0x0049a2ae
0049A2A8  57                        PUSH EDI
0049A2A9  E8 62 3E 21 00            CALL 0x006ae110
LAB_0049a2ae:
0049A2AE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A2B1  85 C0                     TEST EAX,EAX
0049A2B3  74 06                     JZ 0x0049a2bb
0049A2B5  50                        PUSH EAX
0049A2B6  E8 55 3E 21 00            CALL 0x006ae110
LAB_0049a2bb:
0049A2BB  8B 8D 60 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff60]
0049A2C1  33 C0                     XOR EAX,EAX
0049A2C3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0049A2C9  5F                        POP EDI
0049A2CA  5E                        POP ESI
0049A2CB  5B                        POP EBX
0049A2CC  8B E5                     MOV ESP,EBP
0049A2CE  5D                        POP EBP
0049A2CF  C2 04 00                  RET 0x4
LAB_0049a2d2:
0049A2D2  8B 95 60 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff60]
0049A2D8  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049A2DE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0049A2E4  75 18                     JNZ 0x0049a2fe
0049A2E6  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049A2E9  3B C3                     CMP EAX,EBX
0049A2EB  74 06                     JZ 0x0049a2f3
0049A2ED  50                        PUSH EAX
0049A2EE  E8 1D 3E 21 00            CALL 0x006ae110
LAB_0049a2f3:
0049A2F3  33 C0                     XOR EAX,EAX
0049A2F5  5F                        POP EDI
0049A2F6  5E                        POP ESI
0049A2F7  5B                        POP EBX
0049A2F8  8B E5                     MOV ESP,EBP
0049A2FA  5D                        POP EBP
0049A2FB  C2 04 00                  RET 0x4
LAB_0049a2fe:
0049A2FE  68 14 BF 7A 00            PUSH 0x7abf14
0049A303  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049A308  56                        PUSH ESI
0049A309  53                        PUSH EBX
0049A30A  68 EB 05 00 00            PUSH 0x5eb
0049A30F  68 3C BE 7A 00            PUSH 0x7abe3c
0049A314  E8 B7 31 21 00            CALL 0x006ad4d0
0049A319  83 C4 18                  ADD ESP,0x18
0049A31C  85 C0                     TEST EAX,EAX
0049A31E  74 01                     JZ 0x0049a321
0049A320  CC                        INT3
LAB_0049a321:
0049A321  68 EC 05 00 00            PUSH 0x5ec
0049A326  68 3C BE 7A 00            PUSH 0x7abe3c
0049A32B  53                        PUSH EBX
0049A32C  56                        PUSH ESI
0049A32D  E8 0E BB 20 00            CALL 0x006a5e40
0049A332  5F                        POP EDI
0049A333  5E                        POP ESI
0049A334  83 C8 FF                  OR EAX,0xffffffff
0049A337  5B                        POP EBX
0049A338  8B E5                     MOV ESP,EBP
0049A33A  5D                        POP EBP
0049A33B  C2 04 00                  RET 0x4
