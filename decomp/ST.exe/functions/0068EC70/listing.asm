FUN_0068ec70:
0068EC70  55                        PUSH EBP
0068EC71  8B EC                     MOV EBP,ESP
0068EC73  81 EC 84 00 00 00         SUB ESP,0x84
0068EC79  8B 81 91 00 00 00         MOV EAX,dword ptr [ECX + 0x91]
0068EC7F  53                        PUSH EBX
0068EC80  56                        PUSH ESI
0068EC81  57                        PUSH EDI
0068EC82  85 C0                     TEST EAX,EAX
0068EC84  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0068EC87  74 16                     JZ 0x0068ec9f
0068EC89  8B 91 95 00 00 00         MOV EDX,dword ptr [ECX + 0x95]
0068EC8F  03 D0                     ADD EDX,EAX
0068EC91  8B 81 2C 01 00 00         MOV EAX,dword ptr [ECX + 0x12c]
0068EC97  3B C2                     CMP EAX,EDX
0068EC99  0F 82 A0 02 00 00         JC 0x0068ef3f
LAB_0068ec9f:
0068EC9F  8B 81 2C 01 00 00         MOV EAX,dword ptr [ECX + 0x12c]
0068ECA5  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
0068ECAB  89 81 95 00 00 00         MOV dword ptr [ECX + 0x95],EAX
0068ECB1  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
0068ECB7  8D 45 80                  LEA EAX,[EBP + -0x80]
0068ECBA  6A 00                     PUSH 0x0
0068ECBC  50                        PUSH EAX
0068ECBD  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0068ECC3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068ECC9  E8 22 EB 09 00            CALL 0x0072d7f0
0068ECCE  8B F0                     MOV ESI,EAX
0068ECD0  83 C4 08                  ADD ESP,0x8
0068ECD3  85 F6                     TEST ESI,ESI
0068ECD5  0F 85 22 02 00 00         JNZ 0x0068eefd
0068ECDB  8B 5D F4                  MOV EBX,dword ptr [EBP + -0xc]
0068ECDE  33 D2                     XOR EDX,EDX
0068ECE0  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0068ECE3  8B 83 BD 00 00 00         MOV EAX,dword ptr [EBX + 0xbd]
0068ECE9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0068ECEC  85 C9                     TEST ECX,ECX
0068ECEE  0F 8E F6 01 00 00         JLE 0x0068eeea
0068ECF4  3B D1                     CMP EDX,ECX
LAB_0068ecf6:
0068ECF6  73 0D                     JNC 0x0068ed05
0068ECF8  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
0068ECFB  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
0068ECFE  0F AF F2                  IMUL ESI,EDX
0068ED01  03 F1                     ADD ESI,ECX
0068ED03  EB 02                     JMP 0x0068ed07
LAB_0068ed05:
0068ED05  33 F6                     XOR ESI,ESI
LAB_0068ed07:
0068ED07  8B 46 2C                  MOV EAX,dword ptr [ESI + 0x2c]
0068ED0A  BF 03 00 00 00            MOV EDI,0x3
0068ED0F  3B C7                     CMP EAX,EDI
0068ED11  0F 87 BB 01 00 00         JA 0x0068eed2
switchD_0068ed17::switchD:
0068ED17  FF 24 85 48 EF 68 00      JMP dword ptr [EAX*0x4 + 0x68ef48]
switchD_0068ed17::caseD_0:
0068ED1E  8B 46 12                  MOV EAX,dword ptr [ESI + 0x12]
0068ED21  85 C0                     TEST EAX,EAX
0068ED23  74 17                     JZ 0x0068ed3c
0068ED25  8B 4E 3A                  MOV ECX,dword ptr [ESI + 0x3a]
0068ED28  03 C8                     ADD ECX,EAX
0068ED2A  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068ED30  3B C8                     CMP ECX,EAX
0068ED32  76 08                     JBE 0x0068ed3c
0068ED34  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
0068ED37  E9 96 01 00 00            JMP 0x0068eed2
LAB_0068ed3c:
0068ED3C  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068ED42  33 FF                     XOR EDI,EDI
0068ED44  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0068ED47  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068ED4A  85 C0                     TEST EAX,EAX
0068ED4C  0F 8E 80 01 00 00         JLE 0x0068eed2
0068ED52  3B F8                     CMP EDI,EAX
LAB_0068ed54:
0068ED54  73 0D                     JNC 0x0068ed63
0068ED56  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
0068ED59  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
0068ED5C  0F AF C7                  IMUL EAX,EDI
0068ED5F  03 C2                     ADD EAX,EDX
0068ED61  EB 02                     JMP 0x0068ed65
LAB_0068ed63:
0068ED63  33 C0                     XOR EAX,EAX
LAB_0068ed65:
0068ED65  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0068ED68  85 D2                     TEST EDX,EDX
0068ED6A  74 38                     JZ 0x0068eda4
0068ED6C  B9 0D 00 00 00            MOV ECX,0xd
0068ED71  33 C0                     XOR EAX,EAX
0068ED73  8D 7D C0                  LEA EDI,[EBP + -0x40]
0068ED76  F3 AB                     STOSD.REP ES:EDI
0068ED78  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068ED7E  8D 4D C0                  LEA ECX,[EBP + -0x40]
0068ED81  51                        PUSH ECX
0068ED82  8B CA                     MOV ECX,EDX
0068ED84  C7 45 C0 68 00 00 00      MOV dword ptr [EBP + -0x40],0x68
0068ED8B  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0068ED8E  89 75 CA                  MOV dword ptr [EBP + -0x36],ESI
0068ED91  C6 45 C9 01               MOV byte ptr [EBP + -0x37],0x1
0068ED95  E8 BB 27 D7 FF            CALL 0x00401555
0068ED9A  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
0068ED9D  84 C0                     TEST AL,AL
0068ED9F  7F 19                     JG 0x0068edba
0068EDA1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0068eda4:
0068EDA4  8B 8B A5 00 00 00         MOV ECX,dword ptr [EBX + 0xa5]
0068EDAA  47                        INC EDI
0068EDAB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0068EDAE  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0068EDB1  3B F8                     CMP EDI,EAX
0068EDB3  7C 9F                     JL 0x0068ed54
0068EDB5  E9 18 01 00 00            JMP 0x0068eed2
LAB_0068edba:
0068EDBA  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0068EDBD  C7 46 2C 01 00 00 00      MOV dword ptr [ESI + 0x2c],0x1
0068EDC4  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
0068EDC7  66 8B 45 CE               MOV AX,word ptr [EBP + -0x32]
0068EDCB  66 89 46 38               MOV word ptr [ESI + 0x38],AX
0068EDCF  8B 8B 2C 01 00 00         MOV ECX,dword ptr [EBX + 0x12c]
0068EDD5  89 4E 3A                  MOV dword ptr [ESI + 0x3a],ECX
0068EDD8  E9 F5 00 00 00            JMP 0x0068eed2
switchD_0068ed17::caseD_1:
0068EDDD  8B 46 0E                  MOV EAX,dword ptr [ESI + 0xe]
0068EDE0  85 C0                     TEST EAX,EAX
0068EDE2  74 17                     JZ 0x0068edfb
0068EDE4  8B 56 3A                  MOV EDX,dword ptr [ESI + 0x3a]
0068EDE7  03 D0                     ADD EDX,EAX
0068EDE9  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068EDEF  3B D0                     CMP EDX,EAX
0068EDF1  76 08                     JBE 0x0068edfb
LAB_0068edf3:
0068EDF3  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
0068EDF6  E9 D7 00 00 00            JMP 0x0068eed2
LAB_0068edfb:
0068EDFB  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068EE01  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
0068EE04  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0068EE07  73 0B                     JNC 0x0068ee14
0068EE09  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0068EE0C  0F AF D1                  IMUL EDX,ECX
0068EE0F  03 50 1C                  ADD EDX,dword ptr [EAX + 0x1c]
0068EE12  EB 02                     JMP 0x0068ee16
LAB_0068ee14:
0068EE14  33 D2                     XOR EDX,EDX
LAB_0068ee16:
0068EE16  85 D2                     TEST EDX,EDX
0068EE18  74 D9                     JZ 0x0068edf3
0068EE1A  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0068EE1D  85 C0                     TEST EAX,EAX
0068EE1F  74 D2                     JZ 0x0068edf3
0068EE21  B9 0D 00 00 00            MOV ECX,0xd
0068EE26  33 C0                     XOR EAX,EAX
0068EE28  8D 7D C0                  LEA EDI,[EBP + -0x40]
0068EE2B  F3 AB                     STOSD.REP ES:EDI
0068EE2D  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068EE33  8D 4D C0                  LEA ECX,[EBP + -0x40]
0068EE36  C7 45 C0 69 00 00 00      MOV dword ptr [EBP + -0x40],0x69
0068EE3D  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0068EE40  89 75 C9                  MOV dword ptr [EBP + -0x37],ESI
0068EE43  51                        PUSH ECX
0068EE44  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0068EE47  E8 09 27 D7 FF            CALL 0x00401555
0068EE4C  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
0068EE4F  84 C0                     TEST AL,AL
0068EE51  7E 0C                     JLE 0x0068ee5f
0068EE53  C7 46 2C 02 00 00 00      MOV dword ptr [ESI + 0x2c],0x2
0068EE5A  8A 45 C8                  MOV AL,byte ptr [EBP + -0x38]
0068EE5D  84 C0                     TEST AL,AL
LAB_0068ee5f:
0068EE5F  7D 71                     JGE 0x0068eed2
0068EE61  C7 46 2C 03 00 00 00      MOV dword ptr [ESI + 0x2c],0x3
0068EE68  EB 68                     JMP 0x0068eed2
switchD_0068ed17::caseD_2:
0068EE6A  8B 4E 30                  MOV ECX,dword ptr [ESI + 0x30]
0068EE6D  85 C9                     TEST ECX,ECX
0068EE6F  7C 4E                     JL 0x0068eebf
0068EE71  8B 83 A5 00 00 00         MOV EAX,dword ptr [EBX + 0xa5]
0068EE77  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
0068EE7A  73 0B                     JNC 0x0068ee87
0068EE7C  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0068EE7F  0F AF D1                  IMUL EDX,ECX
0068EE82  03 50 1C                  ADD EDX,dword ptr [EAX + 0x1c]
0068EE85  EB 02                     JMP 0x0068ee89
LAB_0068ee87:
0068EE87  33 D2                     XOR EDX,EDX
LAB_0068ee89:
0068EE89  85 D2                     TEST EDX,EDX
0068EE8B  74 32                     JZ 0x0068eebf
0068EE8D  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0068EE90  85 C0                     TEST EAX,EAX
0068EE92  74 2B                     JZ 0x0068eebf
0068EE94  B9 0D 00 00 00            MOV ECX,0xd
0068EE99  33 C0                     XOR EAX,EAX
0068EE9B  8D 7D C0                  LEA EDI,[EBP + -0x40]
0068EE9E  F3 AB                     STOSD.REP ES:EDI
0068EEA0  8B 83 2C 01 00 00         MOV EAX,dword ptr [EBX + 0x12c]
0068EEA6  8D 4D C0                  LEA ECX,[EBP + -0x40]
0068EEA9  C7 45 C0 6B 00 00 00      MOV dword ptr [EBP + -0x40],0x6b
0068EEB0  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
0068EEB3  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
0068EEB6  51                        PUSH ECX
0068EEB7  8B 4A 04                  MOV ECX,dword ptr [EDX + 0x4]
0068EEBA  E8 96 26 D7 FF            CALL 0x00401555
LAB_0068eebf:
0068EEBF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068EEC2  8B 83 BD 00 00 00         MOV EAX,dword ptr [EBX + 0xbd]
0068EEC8  52                        PUSH EDX
0068EEC9  50                        PUSH EAX
0068EECA  E8 A1 1D 02 00            CALL 0x006b0c70
0068EECF  FF 4D FC                  DEC dword ptr [EBP + -0x4]
switchD_0068ed17::default:
0068EED2  8B 83 BD 00 00 00         MOV EAX,dword ptr [EBX + 0xbd]
0068EED8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0068EEDB  42                        INC EDX
0068EEDC  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0068EEDF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0068EEE2  3B D1                     CMP EDX,ECX
0068EEE4  0F 8C 0C FE FF FF         JL 0x0068ecf6
LAB_0068eeea:
0068EEEA  8B 8D 7C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff7c]
0068EEF0  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068EEF6  5F                        POP EDI
0068EEF7  5E                        POP ESI
0068EEF8  5B                        POP EBX
0068EEF9  8B E5                     MOV ESP,EBP
0068EEFB  5D                        POP EBP
0068EEFC  C3                        RET
LAB_0068eefd:
0068EEFD  8B 95 7C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff7c]
0068EF03  68 98 57 7D 00            PUSH 0x7d5798
0068EF08  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068EF0D  56                        PUSH ESI
0068EF0E  6A 00                     PUSH 0x0
0068EF10  68 FF 01 00 00            PUSH 0x1ff
0068EF15  68 E0 56 7D 00            PUSH 0x7d56e0
0068EF1A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068EF20  E8 AB E5 01 00            CALL 0x006ad4d0
0068EF25  83 C4 18                  ADD ESP,0x18
0068EF28  85 C0                     TEST EAX,EAX
0068EF2A  74 01                     JZ 0x0068ef2d
0068EF2C  CC                        INT3
LAB_0068ef2d:
0068EF2D  68 00 02 00 00            PUSH 0x200
0068EF32  68 E0 56 7D 00            PUSH 0x7d56e0
0068EF37  6A 00                     PUSH 0x0
0068EF39  56                        PUSH ESI
0068EF3A  E8 01 6F 01 00            CALL 0x006a5e40
LAB_0068ef3f:
0068EF3F  5F                        POP EDI
0068EF40  5E                        POP ESI
0068EF41  5B                        POP EBX
0068EF42  8B E5                     MOV ESP,EBP
0068EF44  5D                        POP EBP
0068EF45  C3                        RET
