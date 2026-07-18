FUN_0068fd00:
0068FD00  55                        PUSH EBP
0068FD01  8B EC                     MOV EBP,ESP
0068FD03  83 EC 7C                  SUB ESP,0x7c
0068FD06  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068FD0B  53                        PUSH EBX
0068FD0C  56                        PUSH ESI
0068FD0D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068FD10  57                        PUSH EDI
0068FD11  8D 55 88                  LEA EDX,[EBP + -0x78]
0068FD14  8D 4D 84                  LEA ECX,[EBP + -0x7c]
0068FD17  6A 00                     PUSH 0x0
0068FD19  52                        PUSH EDX
0068FD1A  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
0068FD1D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068FD23  E8 C8 DA 09 00            CALL 0x0072d7f0
0068FD28  8B F0                     MOV ESI,EAX
0068FD2A  83 C4 08                  ADD ESP,0x8
0068FD2D  85 F6                     TEST ESI,ESI
0068FD2F  0F 85 E2 02 00 00         JNZ 0x00690017
0068FD35  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0068FD38  8B 07                     MOV EAX,dword ptr [EDI]
0068FD3A  83 F8 64                  CMP EAX,0x64
0068FD3D  0F 82 C1 02 00 00         JC 0x00690004
0068FD43  83 C0 96                  ADD EAX,-0x6a
0068FD46  83 F8 0A                  CMP EAX,0xa
0068FD49  0F 87 B5 02 00 00         JA 0x00690004
switchD_0068fd4f::switchD:
0068FD4F  FF 24 85 64 00 69 00      JMP dword ptr [EAX*0x4 + 0x690064]
switchD_0068fd4f::caseD_6a:
0068FD56  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FD59  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0068FD5C  57                        PUSH EDI
0068FD5D  89 81 9D 00 00 00         MOV dword ptr [ECX + 0x9d],EAX
0068FD63  E8 00 41 D7 FF            CALL 0x00403e68
0068FD68  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FD6B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FD70  33 C0                     XOR EAX,EAX
0068FD72  5F                        POP EDI
0068FD73  5E                        POP ESI
0068FD74  5B                        POP EBX
0068FD75  8B E5                     MOV ESP,EBP
0068FD77  5D                        POP EBP
0068FD78  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_6c:
0068FD7B  8A 47 08                  MOV AL,byte ptr [EDI + 0x8]
0068FD7E  84 C0                     TEST AL,AL
0068FD80  0F 85 7E 02 00 00         JNZ 0x00690004
0068FD86  B9 0D 00 00 00            MOV ECX,0xd
0068FD8B  33 C0                     XOR EAX,EAX
0068FD8D  8D 7D C8                  LEA EDI,[EBP + -0x38]
0068FD90  F3 AB                     STOSD.REP ES:EDI
0068FD92  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FD95  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0068FD98  C7 45 C8 6D 00 00 00      MOV dword ptr [EBP + -0x38],0x6d
0068FD9F  C6 45 D4 01               MOV byte ptr [EBP + -0x2c],0x1
0068FDA3  8B 91 2C 01 00 00         MOV EDX,dword ptr [ECX + 0x12c]
0068FDA9  89 55 CC                  MOV dword ptr [EBP + -0x34],EDX
0068FDAC  8A 50 09                  MOV DL,byte ptr [EAX + 0x9]
0068FDAF  8B 40 0A                  MOV EAX,dword ptr [EAX + 0xa]
0068FDB2  88 55 D5                  MOV byte ptr [EBP + -0x2b],DL
0068FDB5  8D 55 C8                  LEA EDX,[EBP + -0x38]
0068FDB8  89 45 D6                  MOV dword ptr [EBP + -0x2a],EAX
0068FDBB  52                        PUSH EDX
0068FDBC  E8 A7 40 D7 FF            CALL 0x00403e68
0068FDC1  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FDC4  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FDC9  33 C0                     XOR EAX,EAX
0068FDCB  5F                        POP EDI
0068FDCC  5E                        POP ESI
0068FDCD  5B                        POP EBX
0068FDCE  8B E5                     MOV ESP,EBP
0068FDD0  5D                        POP EBP
0068FDD1  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_6e:
0068FDD4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FDD7  57                        PUSH EDI
0068FDD8  E8 8B 40 D7 FF            CALL 0x00403e68
0068FDDD  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FDE0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FDE5  33 C0                     XOR EAX,EAX
0068FDE7  5F                        POP EDI
0068FDE8  5E                        POP ESI
0068FDE9  5B                        POP EBX
0068FDEA  8B E5                     MOV ESP,EBP
0068FDEC  5D                        POP EBP
0068FDED  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_6f:
0068FDF0  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0068FDF3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068FDF6  50                        PUSH EAX
0068FDF7  8B CE                     MOV ECX,ESI
0068FDF9  E8 81 47 D7 FF            CALL 0x0040457f
0068FDFE  8B 5F 08                  MOV EBX,dword ptr [EDI + 0x8]
0068FE01  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0068FE04  03 D8                     ADD EBX,EAX
0068FE06  51                        PUSH ECX
0068FE07  8B CE                     MOV ECX,ESI
0068FE09  89 5F 08                  MOV dword ptr [EDI + 0x8],EBX
0068FE0C  E8 FB 1E D7 FF            CALL 0x00401d0c
0068FE11  8B 4F 08                  MOV ECX,dword ptr [EDI + 0x8]
0068FE14  03 C8                     ADD ECX,EAX
0068FE16  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FE19  89 4F 08                  MOV dword ptr [EDI + 0x8],ECX
0068FE1C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FE21  33 C0                     XOR EAX,EAX
0068FE23  5F                        POP EDI
0068FE24  5E                        POP ESI
0068FE25  5B                        POP EBX
0068FE26  8B E5                     MOV ESP,EBP
0068FE28  5D                        POP EBP
0068FE29  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_70:
0068FE2C  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0068FE2F  33 F6                     XOR ESI,ESI
0068FE31  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068FE37  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0068FE3A  85 C9                     TEST ECX,ECX
0068FE3C  0F 8E C2 01 00 00         JLE 0x00690004
0068FE42  3B F1                     CMP ESI,ECX
LAB_0068fe44:
0068FE44  73 0D                     JNC 0x0068fe53
0068FE46  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0068FE49  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0068FE4C  0F AF D6                  IMUL EDX,ESI
0068FE4F  03 D1                     ADD EDX,ECX
0068FE51  EB 02                     JMP 0x0068fe55
LAB_0068fe53:
0068FE53  33 D2                     XOR EDX,EDX
LAB_0068fe55:
0068FE55  85 D2                     TEST EDX,EDX
0068FE57  74 3F                     JZ 0x0068fe98
0068FE59  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0068FE5C  85 C0                     TEST EAX,EAX
0068FE5E  74 38                     JZ 0x0068fe98
0068FE60  B9 0D 00 00 00            MOV ECX,0xd
0068FE65  33 C0                     XOR EAX,EAX
0068FE67  8D 7D C8                  LEA EDI,[EBP + -0x38]
0068FE6A  F3 AB                     STOSD.REP ES:EDI
0068FE6C  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068FE72  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068FE75  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0068FE78  C7 45 C8 70 00 00 00      MOV dword ptr [EBP + -0x38],0x70
0068FE7F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FE82  8D 4D C8                  LEA ECX,[EBP + -0x38]
0068FE85  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0068FE88  51                        PUSH ECX
0068FE89  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0068FE8C  E8 C4 16 D7 FF            CALL 0x00401555
0068FE91  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0068FE94  85 C0                     TEST EAX,EAX
0068FE96  7F 21                     JG 0x0068feb9
LAB_0068fe98:
0068FE98  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068FE9E  46                        INC ESI
0068FE9F  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0068FEA2  3B F1                     CMP ESI,ECX
0068FEA4  7C 9E                     JL 0x0068fe44
0068FEA6  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FEA9  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FEAE  33 C0                     XOR EAX,EAX
0068FEB0  5F                        POP EDI
0068FEB1  5E                        POP ESI
0068FEB2  5B                        POP EBX
0068FEB3  8B E5                     MOV ESP,EBP
0068FEB5  5D                        POP EBP
0068FEB6  C2 04 00                  RET 0x4
LAB_0068feb9:
0068FEB9  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0068FEBC  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0068FEBF  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FEC2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FEC7  33 C0                     XOR EAX,EAX
0068FEC9  5F                        POP EDI
0068FECA  5E                        POP ESI
0068FECB  5B                        POP EBX
0068FECC  8B E5                     MOV ESP,EBP
0068FECE  5D                        POP EBP
0068FECF  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_71:
0068FED2  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0068FED5  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068FEDB  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
0068FEDE  4F                        DEC EDI
0068FEDF  0F 88 1F 01 00 00         JS 0x00690004
LAB_0068fee5:
0068FEE5  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068FEEB  3B 78 0C                  CMP EDI,dword ptr [EAX + 0xc]
0068FEEE  73 0D                     JNC 0x0068fefd
0068FEF0  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0068FEF3  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0068FEF6  0F AF F7                  IMUL ESI,EDI
0068FEF9  03 F1                     ADD ESI,ECX
0068FEFB  EB 02                     JMP 0x0068feff
LAB_0068fefd:
0068FEFD  33 F6                     XOR ESI,ESI
LAB_0068feff:
0068FEFF  85 F6                     TEST ESI,ESI
0068FF01  74 2F                     JZ 0x0068ff32
0068FF03  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0068FF06  85 C9                     TEST ECX,ECX
0068FF08  74 28                     JZ 0x0068ff32
0068FF0A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0068FF0D  52                        PUSH EDX
0068FF0E  E8 42 16 D7 FF            CALL 0x00401555
0068FF13  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0068FF16  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0068FF19  51                        PUSH ECX
0068FF1A  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0068FF20  E8 07 44 D7 FF            CALL 0x0040432c
0068FF25  8B 93 A5 00 00 00         MOV EDX,dword ptr [EBX + 0xa5]
0068FF2B  57                        PUSH EDI
0068FF2C  52                        PUSH EDX
0068FF2D  E8 3E 0D 02 00            CALL 0x006b0c70
LAB_0068ff32:
0068FF32  4F                        DEC EDI
0068FF33  79 B0                     JNS 0x0068fee5
0068FF35  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FF38  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FF3D  33 C0                     XOR EAX,EAX
0068FF3F  5F                        POP EDI
0068FF40  5E                        POP ESI
0068FF41  5B                        POP EBX
0068FF42  8B E5                     MOV ESP,EBP
0068FF44  5D                        POP EBP
0068FF45  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_72:
0068FF48  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
0068FF4B  83 E8 00                  SUB EAX,0x0
0068FF4E  74 48                     JZ 0x0068ff98
0068FF50  48                        DEC EAX
0068FF51  74 26                     JZ 0x0068ff79
0068FF53  48                        DEC EAX
0068FF54  0F 85 AA 00 00 00         JNZ 0x00690004
0068FF5A  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0068FF5D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FF60  50                        PUSH EAX
0068FF61  E8 48 58 D7 FF            CALL 0x004057ae
0068FF66  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FF69  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FF6E  33 C0                     XOR EAX,EAX
0068FF70  5F                        POP EDI
0068FF71  5E                        POP ESI
0068FF72  5B                        POP EBX
0068FF73  8B E5                     MOV ESP,EBP
0068FF75  5D                        POP EBP
0068FF76  C2 04 00                  RET 0x4
LAB_0068ff79:
0068FF79  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0068FF7C  51                        PUSH ECX
0068FF7D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FF80  E8 6D 41 D7 FF            CALL 0x004040f2
0068FF85  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FF88  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FF8D  33 C0                     XOR EAX,EAX
0068FF8F  5F                        POP EDI
0068FF90  5E                        POP ESI
0068FF91  5B                        POP EBX
0068FF92  8B E5                     MOV ESP,EBP
0068FF94  5D                        POP EBP
0068FF95  C2 04 00                  RET 0x4
LAB_0068ff98:
0068FF98  8B 57 0C                  MOV EDX,dword ptr [EDI + 0xc]
0068FF9B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0068FF9E  52                        PUSH EDX
0068FF9F  E8 60 3E D7 FF            CALL 0x00403e04
0068FFA4  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
0068FFA7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0068FFAC  33 C0                     XOR EAX,EAX
0068FFAE  5F                        POP EDI
0068FFAF  5E                        POP ESI
0068FFB0  5B                        POP EBX
0068FFB1  8B E5                     MOV ESP,EBP
0068FFB3  5D                        POP EBP
0068FFB4  C2 04 00                  RET 0x4
switchD_0068fd4f::caseD_73:
0068FFB7  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0068FFBA  33 F6                     XOR ESI,ESI
0068FFBC  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068FFC2  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068FFC5  85 C0                     TEST EAX,EAX
0068FFC7  7E 3B                     JLE 0x00690004
0068FFC9  3B F0                     CMP ESI,EAX
LAB_0068ffcb:
0068FFCB  73 0D                     JNC 0x0068ffda
0068FFCD  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068FFD0  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068FFD3  0F AF C6                  IMUL EAX,ESI
0068FFD6  03 C2                     ADD EAX,EDX
0068FFD8  EB 02                     JMP 0x0068ffdc
LAB_0068ffda:
0068FFDA  33 C0                     XOR EAX,EAX
LAB_0068ffdc:
0068FFDC  85 C0                     TEST EAX,EAX
0068FFDE  74 16                     JZ 0x0068fff6
0068FFE0  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0068FFE3  85 C0                     TEST EAX,EAX
0068FFE5  74 0F                     JZ 0x0068fff6
0068FFE7  57                        PUSH EDI
0068FFE8  8B C8                     MOV ECX,EAX
0068FFEA  E8 66 15 D7 FF            CALL 0x00401555
0068FFEF  8A 47 08                  MOV AL,byte ptr [EDI + 0x8]
0068FFF2  84 C0                     TEST AL,AL
0068FFF4  7F 0E                     JG 0x00690004
LAB_0068fff6:
0068FFF6  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068FFFC  46                        INC ESI
0068FFFD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690000  3B F0                     CMP ESI,EAX
00690002  7C C7                     JL 0x0068ffcb
switchD_0068fd4f::caseD_6b:
00690004  8B 45 84                  MOV EAX,dword ptr [EBP + -0x7c]
00690007  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0069000C  33 C0                     XOR EAX,EAX
0069000E  5F                        POP EDI
0069000F  5E                        POP ESI
00690010  5B                        POP EBX
00690011  8B E5                     MOV ESP,EBP
00690013  5D                        POP EBP
00690014  C2 04 00                  RET 0x4
LAB_00690017:
00690017  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0069001A  68 74 58 7D 00            PUSH 0x7d5874
0069001F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00690024  56                        PUSH ESI
00690025  6A 00                     PUSH 0x0
00690027  68 6A 03 00 00            PUSH 0x36a
0069002C  68 E0 56 7D 00            PUSH 0x7d56e0
00690031  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00690037  E8 94 D4 01 00            CALL 0x006ad4d0
0069003C  83 C4 18                  ADD ESP,0x18
0069003F  85 C0                     TEST EAX,EAX
00690041  74 01                     JZ 0x00690044
00690043  CC                        INT3
LAB_00690044:
00690044  68 6B 03 00 00            PUSH 0x36b
00690049  68 E0 56 7D 00            PUSH 0x7d56e0
0069004E  6A 00                     PUSH 0x0
00690050  56                        PUSH ESI
00690051  E8 EA 5D 01 00            CALL 0x006a5e40
00690056  8B C6                     MOV EAX,ESI
00690058  5F                        POP EDI
00690059  5E                        POP ESI
0069005A  5B                        POP EBX
0069005B  8B E5                     MOV ESP,EBP
0069005D  5D                        POP EBP
0069005E  C2 04 00                  RET 0x4
