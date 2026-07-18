FUN_00543c90:
00543C90  55                        PUSH EBP
00543C91  8B EC                     MOV EBP,ESP
00543C93  83 EC 50                  SUB ESP,0x50
00543C96  56                        PUSH ESI
00543C97  8B F1                     MOV ESI,ECX
00543C99  57                        PUSH EDI
00543C9A  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00543C9D  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
00543CA0  E8 0B 15 1A 00            CALL 0x006e51b0
00543CA5  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00543CA8  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00543CAB  83 F8 FF                  CMP EAX,-0x1
00543CAE  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00543CB5  74 0C                     JZ 0x00543cc3
00543CB7  50                        PUSH EAX
00543CB8  8B 46 60                  MOV EAX,dword ptr [ESI + 0x60]
00543CBB  50                        PUSH EAX
00543CBC  E8 2F F7 16 00            CALL 0x006b33f0
00543CC1  EB 02                     JMP 0x00543cc5
LAB_00543cc3:
00543CC3  33 C0                     XOR EAX,EAX
LAB_00543cc5:
00543CC5  85 C0                     TEST EAX,EAX
00543CC7  0F 84 2A 02 00 00         JZ 0x00543ef7
00543CCD  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00543CD3  8D 45 B4                  LEA EAX,[EBP + -0x4c]
00543CD6  8D 55 B0                  LEA EDX,[EBP + -0x50]
00543CD9  6A 00                     PUSH 0x0
00543CDB  50                        PUSH EAX
00543CDC  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
00543CDF  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00543CE5  E8 06 9B 1E 00            CALL 0x0072d7f0
00543CEA  8B F0                     MOV ESI,EAX
00543CEC  83 C4 08                  ADD ESP,0x8
00543CEF  85 F6                     TEST ESI,ESI
00543CF1  0F 85 C1 01 00 00         JNZ 0x00543eb8
00543CF7  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
00543CFA  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00543CFD  83 F8 FF                  CMP EAX,-0x1
00543D00  C7 46 20 FE FF FF FF      MOV dword ptr [ESI + 0x20],0xfffffffe
00543D07  74 0D                     JZ 0x00543d16
00543D09  B9 01 00 00 00            MOV ECX,0x1
00543D0E  89 46 34                  MOV dword ptr [ESI + 0x34],EAX
00543D11  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00543D14  EB 05                     JMP 0x00543d1b
LAB_00543d16:
00543D16  B9 01 00 00 00            MOV ECX,0x1
LAB_00543d1b:
00543D1B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00543D1E  83 F8 FF                  CMP EAX,-0x1
00543D21  74 06                     JZ 0x00543d29
00543D23  89 46 38                  MOV dword ptr [ESI + 0x38],EAX
00543D26  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00543d29:
00543D29  8B 56 58                  MOV EDX,dword ptr [ESI + 0x58]
00543D2C  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
00543D2F  03 D7                     ADD EDX,EDI
00543D31  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
00543D34  3B D7                     CMP EDX,EDI
00543D36  77 0E                     JA 0x00543d46
00543D38  C7 46 20 FF FF FF FF      MOV dword ptr [ESI + 0x20],0xffffffff
00543D3F  89 7E 5C                  MOV dword ptr [ESI + 0x5c],EDI
00543D42  8B C1                     MOV EAX,ECX
00543D44  EB 02                     JMP 0x00543d48
LAB_00543d46:
00543D46  33 C0                     XOR EAX,EAX
LAB_00543d48:
00543D48  85 C0                     TEST EAX,EAX
00543D4A  74 03                     JZ 0x00543d4f
00543D4C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00543d4f:
00543D4F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00543D52  85 C0                     TEST EAX,EAX
00543D54  74 50                     JZ 0x00543da6
00543D56  8B 86 A9 00 00 00         MOV EAX,dword ptr [ESI + 0xa9]
00543D5C  85 C0                     TEST EAX,EAX
00543D5E  74 2E                     JZ 0x00543d8e
00543D60  8B 86 BD 00 00 00         MOV EAX,dword ptr [ESI + 0xbd]
00543D66  8B 56 38                  MOV EDX,dword ptr [ESI + 0x38]
00543D69  8B 8E B9 00 00 00         MOV ECX,dword ptr [ESI + 0xb9]
00543D6F  03 C2                     ADD EAX,EDX
00543D71  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00543D74  50                        PUSH EAX
00543D75  8B 46 34                  MOV EAX,dword ptr [ESI + 0x34]
00543D78  03 C8                     ADD ECX,EAX
00543D7A  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
00543D7D  51                        PUSH ECX
00543D7E  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
00543D84  52                        PUSH EDX
00543D85  50                        PUSH EAX
00543D86  51                        PUSH ECX
00543D87  E8 B4 F8 16 00            CALL 0x006b3640
00543D8C  EB 18                     JMP 0x00543da6
LAB_00543d8e:
00543D8E  8B 56 20                  MOV EDX,dword ptr [ESI + 0x20]
00543D91  8B 46 38                  MOV EAX,dword ptr [ESI + 0x38]
00543D94  8B 4E 34                  MOV ECX,dword ptr [ESI + 0x34]
00543D97  52                        PUSH EDX
00543D98  8B 96 AD 00 00 00         MOV EDX,dword ptr [ESI + 0xad]
00543D9E  50                        PUSH EAX
00543D9F  51                        PUSH ECX
00543DA0  52                        PUSH EDX
00543DA1  E8 1A 4E 17 00            CALL 0x006b8bc0
LAB_00543da6:
00543DA6  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
00543DAC  85 C9                     TEST ECX,ECX
00543DAE  0F 84 F4 00 00 00         JZ 0x00543ea8
00543DB4  A1 98 75 80 00            MOV EAX,[0x00807598]
00543DB9  85 C0                     TEST EAX,EAX
00543DBB  0F 84 E7 00 00 00         JZ 0x00543ea8
00543DC1  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
00543DC4  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00543DC7  4A                        DEC EDX
00543DC8  3B C2                     CMP EAX,EDX
00543DCA  7C 2E                     JL 0x00543dfa
00543DCC  E8 DF 1C 1D 00            CALL 0x00715ab0
00543DD1  8B 86 EB 04 00 00         MOV EAX,dword ptr [ESI + 0x4eb]
00543DD7  50                        PUSH EAX
00543DD8  E8 D3 A4 1E 00            CALL 0x0072e2b0
00543DDD  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00543DE0  C7 86 EB 04 00 00 00 00 00 00  MOV dword ptr [ESI + 0x4eb],0x0
00543DEA  83 C4 04                  ADD ESP,0x4
00543DED  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00543DF2  5F                        POP EDI
00543DF3  5E                        POP ESI
00543DF4  8B E5                     MOV ESP,EBP
00543DF6  5D                        POP EBP
00543DF7  C2 08 00                  RET 0x8
LAB_00543dfa:
00543DFA  8B 51 40                  MOV EDX,dword ptr [ECX + 0x40]
00543DFD  03 51 44                  ADD EDX,dword ptr [ECX + 0x44]
00543E00  3B D7                     CMP EDX,EDI
00543E02  77 0E                     JA 0x00543e12
00543E04  40                        INC EAX
00543E05  89 79 44                  MOV dword ptr [ECX + 0x44],EDI
00543E08  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00543E0B  B8 01 00 00 00            MOV EAX,0x1
00543E10  EB 02                     JMP 0x00543e14
LAB_00543e12:
00543E12  33 C0                     XOR EAX,EAX
LAB_00543e14:
00543E14  85 C0                     TEST EAX,EAX
00543E16  0F 84 8C 00 00 00         JZ 0x00543ea8
00543E1C  8B 86 EB 04 00 00         MOV EAX,dword ptr [ESI + 0x4eb]
00543E22  8B 96 F7 04 00 00         MOV EDX,dword ptr [ESI + 0x4f7]
00543E28  8D 48 20                  LEA ECX,[EAX + 0x20]
00543E2B  83 C0 1C                  ADD EAX,0x1c
00543E2E  51                        PUSH ECX
00543E2F  8B 8E EF 04 00 00         MOV ECX,dword ptr [ESI + 0x4ef]
00543E35  50                        PUSH EAX
00543E36  8B 86 F3 04 00 00         MOV EAX,dword ptr [ESI + 0x4f3]
00543E3C  52                        PUSH EDX
00543E3D  50                        PUSH EAX
00543E3E  51                        PUSH ECX
00543E3F  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00543E45  E8 26 EB 19 00            CALL 0x006e2970
00543E4A  8B 96 E7 04 00 00         MOV EDX,dword ptr [ESI + 0x4e7]
00543E50  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
00543E56  8B 42 09                  MOV EAX,dword ptr [EDX + 0x9]
00543E59  99                        CDQ
00543E5A  2B C2                     SUB EAX,EDX
00543E5C  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00543E5F  D1 F8                     SAR EAX,0x1
00543E61  F7 D8                     NEG EAX
00543E63  03 D0                     ADD EDX,EAX
00543E65  89 51 1C                  MOV dword ptr [ECX + 0x1c],EDX
00543E68  8B 86 E7 04 00 00         MOV EAX,dword ptr [ESI + 0x4e7]
00543E6E  8B 8E EB 04 00 00         MOV ECX,dword ptr [ESI + 0x4eb]
00543E74  8B 40 0D                  MOV EAX,dword ptr [EAX + 0xd]
00543E77  8B 79 20                  MOV EDI,dword ptr [ECX + 0x20]
00543E7A  99                        CDQ
00543E7B  2B C2                     SUB EAX,EDX
00543E7D  D1 F8                     SAR EAX,0x1
00543E7F  F7 D8                     NEG EAX
00543E81  03 F8                     ADD EDI,EAX
00543E83  89 79 20                  MOV dword ptr [ECX + 0x20],EDI
00543E86  8B B6 EB 04 00 00         MOV ESI,dword ptr [ESI + 0x4eb]
00543E8C  8B 4E 20                  MOV ECX,dword ptr [ESI + 0x20]
00543E8F  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
00543E92  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
00543E95  51                        PUSH ECX
00543E96  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
00543E99  52                        PUSH EDX
00543E9A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
00543EA0  50                        PUSH EAX
00543EA1  51                        PUSH ECX
00543EA2  52                        PUSH EDX
00543EA3  E8 88 F8 16 00            CALL 0x006b3730
LAB_00543ea8:
00543EA8  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
00543EAB  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00543EB0  5F                        POP EDI
00543EB1  5E                        POP ESI
00543EB2  8B E5                     MOV ESP,EBP
00543EB4  5D                        POP EBP
00543EB5  C2 08 00                  RET 0x8
LAB_00543eb8:
00543EB8  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00543EBB  68 48 7E 7C 00            PUSH 0x7c7e48
00543EC0  68 CC 4C 7A 00            PUSH 0x7a4ccc
00543EC5  56                        PUSH ESI
00543EC6  6A 00                     PUSH 0x0
00543EC8  68 CC 00 00 00            PUSH 0xcc
00543ECD  68 60 7D 7C 00            PUSH 0x7c7d60
00543ED2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00543ED8  E8 F3 95 16 00            CALL 0x006ad4d0
00543EDD  83 C4 18                  ADD ESP,0x18
00543EE0  85 C0                     TEST EAX,EAX
00543EE2  74 01                     JZ 0x00543ee5
00543EE4  CC                        INT3
LAB_00543ee5:
00543EE5  68 CD 00 00 00            PUSH 0xcd
00543EEA  68 60 7D 7C 00            PUSH 0x7c7d60
00543EEF  6A 00                     PUSH 0x0
00543EF1  56                        PUSH ESI
00543EF2  E8 49 1F 16 00            CALL 0x006a5e40
LAB_00543ef7:
00543EF7  5F                        POP EDI
00543EF8  5E                        POP ESI
00543EF9  8B E5                     MOV ESP,EBP
00543EFB  5D                        POP EBP
00543EFC  C2 08 00                  RET 0x8
