FUN_0053cef0:
0053CEF0  55                        PUSH EBP
0053CEF1  8B EC                     MOV EBP,ESP
0053CEF3  83 EC 58                  SUB ESP,0x58
0053CEF6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053CEFB  53                        PUSH EBX
0053CEFC  56                        PUSH ESI
0053CEFD  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
0053CF00  57                        PUSH EDI
0053CF01  8D 55 AC                  LEA EDX,[EBP + -0x54]
0053CF04  8D 4D A8                  LEA ECX,[EBP + -0x58]
0053CF07  6A 00                     PUSH 0x0
0053CF09  52                        PUSH EDX
0053CF0A  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
0053CF0D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053CF13  E8 D8 08 1F 00            CALL 0x0072d7f0
0053CF18  8B F0                     MOV ESI,EAX
0053CF1A  83 C4 08                  ADD ESP,0x8
0053CF1D  85 F6                     TEST ESI,ESI
0053CF1F  0F 85 A1 01 00 00         JNZ 0x0053d0c6
0053CF25  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0053CF28  6A 77                     PUSH 0x77
0053CF2A  68 C9 00 00 00            PUSH 0xc9
0053CF2F  68 35 27 00 00            PUSH 0x2735
0053CF34  6A 0C                     PUSH 0xc
0053CF36  68 C6 00 00 00            PUSH 0xc6
0053CF3B  6A 02                     PUSH 0x2
0053CF3D  6A 2F                     PUSH 0x2f
0053CF3F  68 EC 77 7C 00            PUSH 0x7c77ec
0053CF44  8B CE                     MOV ECX,ESI
0053CF46  89 35 EC 16 80 00         MOV dword ptr [0x008016ec],ESI
0053CF4C  E8 AF 68 EC FF            CALL 0x00403800
0053CF51  6A 00                     PUSH 0x0
0053CF53  6A 00                     PUSH 0x0
0053CF55  6A 01                     PUSH 0x1
0053CF57  6A 00                     PUSH 0x0
0053CF59  6A FF                     PUSH -0x1
0053CF5B  6A 00                     PUSH 0x0
0053CF5D  68 1C 20 7C 00            PUSH 0x7c201c
0053CF62  E8 15 88 EC FF            CALL 0x0040577c
0053CF67  83 C4 08                  ADD ESP,0x8
0053CF6A  50                        PUSH EAX
0053CF6B  A1 94 67 80 00            MOV EAX,[0x00806794]
0053CF70  6A 0B                     PUSH 0xb
0053CF72  50                        PUSH EAX
0053CF73  E8 78 CB 1C 00            CALL 0x00709af0
0053CF78  8D 8E B5 01 00 00         LEA ECX,[ESI + 0x1b5]
0053CF7E  83 C4 20                  ADD ESP,0x20
0053CF81  89 86 B1 01 00 00         MOV dword ptr [ESI + 0x1b1],EAX
0053CF87  BF FF B4 00 00            MOV EDI,0xb4ff
0053CF8C  C7 45 FC 17 00 00 00      MOV dword ptr [EBP + -0x4],0x17
0053CF93  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0053CF96  C7 45 F4 06 00 00 00      MOV dword ptr [EBP + -0xc],0x6
LAB_0053cf9d:
0053CF9D  6A 01                     PUSH 0x1
0053CF9F  6A 00                     PUSH 0x0
0053CFA1  6A 00                     PUSH 0x0
0053CFA3  8B 1E                     MOV EBX,dword ptr [ESI]
0053CFA5  6A 00                     PUSH 0x0
0053CFA7  8D 57 10                  LEA EDX,[EDI + 0x10]
0053CFAA  6A 00                     PUSH 0x0
0053CFAC  52                        PUSH EDX
0053CFAD  57                        PUSH EDI
0053CFAE  6A 00                     PUSH 0x0
0053CFB0  6A 01                     PUSH 0x1
0053CFB2  6A 00                     PUSH 0x0
0053CFB4  68 1C 20 7C 00            PUSH 0x7c201c
0053CFB9  E8 BE 87 EC FF            CALL 0x0040577c
0053CFBE  83 C4 08                  ADD ESP,0x8
0053CFC1  50                        PUSH EAX
0053CFC2  E8 39 5C 1B 00            CALL 0x006f2c00
0053CFC7  83 C4 0C                  ADD ESP,0xc
0053CFCA  8B D3                     MOV EDX,EBX
0053CFCC  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0053CFCF  50                        PUSH EAX
0053CFD0  6A 01                     PUSH 0x1
0053CFD2  6A 01                     PUSH 0x1
0053CFD4  8D 43 01                  LEA EAX,[EBX + 0x1]
0053CFD7  6A 00                     PUSH 0x0
0053CFD9  50                        PUSH EAX
0053CFDA  6A 24                     PUSH 0x24
0053CFDC  6A 01                     PUSH 0x1
0053CFDE  6A 00                     PUSH 0x0
0053CFE0  8B CE                     MOV ECX,ESI
0053CFE2  FF 52 04                  CALL dword ptr [EDX + 0x4]
0053CFE5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0053CFE8  6A 00                     PUSH 0x0
0053CFEA  6A 0C                     PUSH 0xc
0053CFEC  68 D2 00 00 00            PUSH 0xd2
0053CFF1  89 01                     MOV dword ptr [ECX],EAX
0053CFF3  8B 96 85 01 00 00         MOV EDX,dword ptr [ESI + 0x185]
0053CFF9  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0053CFFF  53                        PUSH EBX
0053D000  6A 37                     PUSH 0x37
0053D002  6A 00                     PUSH 0x0
0053D004  52                        PUSH EDX
0053D005  E8 96 3B 1D 00            CALL 0x00710ba0
0053D00A  8B D8                     MOV EBX,EAX
0053D00C  85 DB                     TEST EBX,EBX
0053D00E  74 44                     JZ 0x0053d054
0053D010  A1 18 76 80 00            MOV EAX,[0x00807618]
0053D015  6A 00                     PUSH 0x0
0053D017  6A FF                     PUSH -0x1
0053D019  6A 00                     PUSH 0x0
0053D01B  8D 8F D5 7B FF FF         LEA ECX,[EDI + 0xffff7bd5]
0053D021  50                        PUSH EAX
0053D022  51                        PUSH ECX
0053D023  E8 18 31 17 00            CALL 0x006b0140
0053D028  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0053D02E  50                        PUSH EAX
0053D02F  E8 8C 49 1D 00            CALL 0x007119c0
0053D034  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0053D037  8B 46 68                  MOV EAX,dword ptr [ESI + 0x68]
0053D03A  53                        PUSH EBX
0053D03B  6A 01                     PUSH 0x1
0053D03D  52                        PUSH EDX
0053D03E  6A 37                     PUSH 0x37
0053D040  50                        PUSH EAX
0053D041  E8 E3 61 EC FF            CALL 0x00403229
0053D046  8B 8E 89 01 00 00         MOV ECX,dword ptr [ESI + 0x189]
0053D04C  83 C4 14                  ADD ESP,0x14
0053D04F  E8 AC 3E 1D 00            CALL 0x00710f00
LAB_0053d054:
0053D054  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0053D057  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053D05A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0053D05D  47                        INC EDI
0053D05E  83 C2 04                  ADD EDX,0x4
0053D061  83 C1 0B                  ADD ECX,0xb
0053D064  48                        DEC EAX
0053D065  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0053D068  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0053D06B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0053D06E  0F 85 29 FF FF FF         JNZ 0x0053cf9d
0053D074  6A 01                     PUSH 0x1
0053D076  8B 3E                     MOV EDI,dword ptr [ESI]
0053D078  6A 00                     PUSH 0x0
0053D07A  6A 00                     PUSH 0x0
0053D07C  6A 00                     PUSH 0x0
0053D07E  6A 00                     PUSH 0x0
0053D080  68 18 B5 00 00            PUSH 0xb518
0053D085  68 08 B5 00 00            PUSH 0xb508
0053D08A  6A 00                     PUSH 0x0
0053D08C  68 E0 77 7C 00            PUSH 0x7c77e0
0053D091  E8 E6 86 EC FF            CALL 0x0040577c
0053D096  83 C4 08                  ADD ESP,0x8
0053D099  8B CE                     MOV ECX,ESI
0053D09B  50                        PUSH EAX
0053D09C  6A 01                     PUSH 0x1
0053D09E  6A 01                     PUSH 0x1
0053D0A0  6A 00                     PUSH 0x0
0053D0A2  6A 5C                     PUSH 0x5c
0053D0A4  68 A0 00 00 00            PUSH 0xa0
0053D0A9  6A 01                     PUSH 0x1
0053D0AB  6A 00                     PUSH 0x0
0053D0AD  FF 57 04                  CALL dword ptr [EDI + 0x4]
0053D0B0  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0053D0B3  89 86 CD 01 00 00         MOV dword ptr [ESI + 0x1cd],EAX
0053D0B9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053D0BF  5F                        POP EDI
0053D0C0  5E                        POP ESI
0053D0C1  5B                        POP EBX
0053D0C2  8B E5                     MOV ESP,EBP
0053D0C4  5D                        POP EBP
0053D0C5  C3                        RET
LAB_0053d0c6:
0053D0C6  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0053D0C9  68 C0 77 7C 00            PUSH 0x7c77c0
0053D0CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053D0D3  56                        PUSH ESI
0053D0D4  6A 00                     PUSH 0x0
0053D0D6  6A 29                     PUSH 0x29
0053D0D8  68 98 77 7C 00            PUSH 0x7c7798
0053D0DD  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0053D0E3  E8 E8 03 17 00            CALL 0x006ad4d0
0053D0E8  83 C4 18                  ADD ESP,0x18
0053D0EB  85 C0                     TEST EAX,EAX
0053D0ED  74 01                     JZ 0x0053d0f0
0053D0EF  CC                        INT3
LAB_0053d0f0:
0053D0F0  6A 29                     PUSH 0x29
0053D0F2  68 98 77 7C 00            PUSH 0x7c7798
0053D0F7  6A 00                     PUSH 0x0
0053D0F9  56                        PUSH ESI
0053D0FA  E8 41 8D 16 00            CALL 0x006a5e40
0053D0FF  5F                        POP EDI
0053D100  5E                        POP ESI
0053D101  5B                        POP EBX
0053D102  8B E5                     MOV ESP,EBP
0053D104  5D                        POP EBP
0053D105  C3                        RET
