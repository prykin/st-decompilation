BldLabPanelTy::PaintUpdBut:
004EFFE0  55                        PUSH EBP
004EFFE1  8B EC                     MOV EBP,ESP
004EFFE3  83 EC 58                  SUB ESP,0x58
004EFFE6  53                        PUSH EBX
004EFFE7  56                        PUSH ESI
004EFFE8  8B 71 3C                  MOV ESI,dword ptr [ECX + 0x3c]
004EFFEB  57                        PUSH EDI
004EFFEC  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004EFFEF  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
004EFFF2  8B 47 18                  MOV EAX,dword ptr [EDI + 0x18]
004EFFF5  8B 10                     MOV EDX,dword ptr [EAX]
004EFFF7  2B D6                     SUB EDX,ESI
004EFFF9  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004EFFFC  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
004EFFFF  85 D2                     TEST EDX,EDX
004F0001  75 10                     JNZ 0x004f0013
004F0003  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
004F0006  8B 15 34 67 80 00         MOV EDX,dword ptr [0x00806734]
004F000C  2B C2                     SUB EAX,EDX
004F000E  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
004F0011  EB 0B                     JMP 0x004f001e
LAB_004f0013:
004F0013  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004F0016  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
004F0019  2B D0                     SUB EDX,EAX
004F001B  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_004f001e:
004F001E  8B 81 99 01 00 00         MOV EAX,dword ptr [ECX + 0x199]
004F0024  8B 57 10                  MOV EDX,dword ptr [EDI + 0x10]
004F0027  8D B4 10 51 3F FF FF      LEA ESI,[EAX + EDX*0x1 + 0xffff3f51]
004F002E  8B 91 7A 02 00 00         MOV EDX,dword ptr [ECX + 0x27a]
004F0034  85 D2                     TEST EDX,EDX
004F0036  74 10                     JZ 0x004f0048
004F0038  3B 72 0C                  CMP ESI,dword ptr [EDX + 0xc]
004F003B  73 0B                     JNC 0x004f0048
004F003D  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
004F0040  0F AF C6                  IMUL EAX,ESI
004F0043  03 42 1C                  ADD EAX,dword ptr [EDX + 0x1c]
004F0046  EB 02                     JMP 0x004f004a
LAB_004f0048:
004F0048  33 C0                     XOR EAX,EAX
LAB_004f004a:
004F004A  66 83 7F 14 00            CMP word ptr [EDI + 0x14],0x0
004F004F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004F0052  74 16                     JZ 0x004f006a
004F0054  85 C0                     TEST EAX,EAX
004F0056  74 12                     JZ 0x004f006a
004F0058  8B 00                     MOV EAX,dword ptr [EAX]
004F005A  6A 03                     PUSH 0x3
004F005C  50                        PUSH EAX
004F005D  E8 93 56 F1 FF            CALL 0x004056f5
004F0062  83 C4 08                  ADD ESP,0x8
004F0065  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
004F0068  EB 0E                     JMP 0x004f0078
LAB_004f006a:
004F006A  8B 89 88 01 00 00         MOV ECX,dword ptr [ECX + 0x188]
004F0070  0F BF 51 23               MOVSX EDX,word ptr [ECX + 0x23]
004F0074  4A                        DEC EDX
004F0075  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_004f0078:
004F0078  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F007D  8D 55 AC                  LEA EDX,[EBP + -0x54]
004F0080  8D 4D A8                  LEA ECX,[EBP + -0x58]
004F0083  6A 00                     PUSH 0x0
004F0085  52                        PUSH EDX
004F0086  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
004F0089  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F008F  E8 5C D7 23 00            CALL 0x0072d7f0
004F0094  8B F0                     MOV ESI,EAX
004F0096  83 C4 08                  ADD ESP,0x8
004F0099  85 F6                     TEST ESI,ESI
004F009B  0F 85 AF 00 00 00         JNZ 0x004f0150
004F00A1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F00A4  85 C0                     TEST EAX,EAX
004F00A6  74 17                     JZ 0x004f00bf
004F00A8  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
004F00AB  84 C9                     TEST CL,CL
004F00AD  74 10                     JZ 0x004f00bf
004F00AF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004F00B2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004F00B5  50                        PUSH EAX
004F00B6  8B 8E 88 01 00 00         MOV ECX,dword ptr [ESI + 0x188]
004F00BC  51                        PUSH ECX
004F00BD  EB 0E                     JMP 0x004f00cd
LAB_004f00bf:
004F00BF  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
004F00C2  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004F00C5  52                        PUSH EDX
004F00C6  8B 86 8C 01 00 00         MOV EAX,dword ptr [ESI + 0x18c]
004F00CC  50                        PUSH EAX
LAB_004f00cd:
004F00CD  E8 CE B2 21 00            CALL 0x0070b3a0
004F00D2  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004F00D5  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004F00D8  8B 4E 68                  MOV ECX,dword ptr [ESI + 0x68]
004F00DB  83 C4 08                  ADD ESP,0x8
004F00DE  50                        PUSH EAX
004F00DF  6A 01                     PUSH 0x1
004F00E1  57                        PUSH EDI
004F00E2  53                        PUSH EBX
004F00E3  51                        PUSH ECX
004F00E4  E8 40 31 F1 FF            CALL 0x00403229
004F00E9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004F00EC  83 C4 14                  ADD ESP,0x14
004F00EF  66 83 7A 14 03            CMP word ptr [EDX + 0x14],0x3
004F00F4  75 2F                     JNZ 0x004f0125
004F00F6  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004F00F9  85 C0                     TEST EAX,EAX
004F00FB  74 28                     JZ 0x004f0125
004F00FD  8A 40 08                  MOV AL,byte ptr [EAX + 0x8]
004F0100  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
004F0106  F6 D8                     NEG AL
004F0108  1B C0                     SBB EAX,EAX
004F010A  83 C0 09                  ADD EAX,0x9
004F010D  50                        PUSH EAX
004F010E  51                        PUSH ECX
004F010F  E8 8C B2 21 00            CALL 0x0070b3a0
004F0114  8B 56 68                  MOV EDX,dword ptr [ESI + 0x68]
004F0117  50                        PUSH EAX
004F0118  6A 06                     PUSH 0x6
004F011A  57                        PUSH EDI
004F011B  53                        PUSH EBX
004F011C  52                        PUSH EDX
004F011D  E8 07 31 F1 FF            CALL 0x00403229
004F0122  83 C4 1C                  ADD ESP,0x1c
LAB_004f0125:
004F0125  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
004F0128  8B 4E 3C                  MOV ECX,dword ptr [ESI + 0x3c]
004F012B  8B 56 60                  MOV EDX,dword ptr [ESI + 0x60]
004F012E  50                        PUSH EAX
004F012F  A1 A8 75 80 00            MOV EAX,[0x008075a8]
004F0134  51                        PUSH ECX
004F0135  6A FF                     PUSH -0x1
004F0137  52                        PUSH EDX
004F0138  50                        PUSH EAX
004F0139  E8 02 35 1C 00            CALL 0x006b3640
004F013E  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
004F0141  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F0147  5F                        POP EDI
004F0148  5E                        POP ESI
004F0149  5B                        POP EBX
004F014A  8B E5                     MOV ESP,EBP
004F014C  5D                        POP EBP
004F014D  C2 04 00                  RET 0x4
LAB_004f0150:
004F0150  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
004F0153  68 44 19 7C 00            PUSH 0x7c1944
004F0158  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F015D  56                        PUSH ESI
004F015E  6A 00                     PUSH 0x0
004F0160  6A 66                     PUSH 0x66
004F0162  68 B4 18 7C 00            PUSH 0x7c18b4
004F0167  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F016D  E8 5E D3 1B 00            CALL 0x006ad4d0
004F0172  83 C4 18                  ADD ESP,0x18
004F0175  85 C0                     TEST EAX,EAX
004F0177  74 01                     JZ 0x004f017a
004F0179  CC                        INT3
LAB_004f017a:
004F017A  6A 66                     PUSH 0x66
004F017C  68 B4 18 7C 00            PUSH 0x7c18b4
004F0181  6A 00                     PUSH 0x0
004F0183  56                        PUSH ESI
004F0184  E8 B7 5C 1B 00            CALL 0x006a5e40
004F0189  5F                        POP EDI
004F018A  5E                        POP ESI
004F018B  5B                        POP EBX
004F018C  8B E5                     MOV ESP,EBP
004F018E  5D                        POP EBP
004F018F  C2 04 00                  RET 0x4
