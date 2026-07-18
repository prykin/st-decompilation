FUN_005b4bb0:
005B4BB0  55                        PUSH EBP
005B4BB1  8B EC                     MOV EBP,ESP
005B4BB3  81 EC 88 00 00 00         SUB ESP,0x88
005B4BB9  53                        PUSH EBX
005B4BBA  56                        PUSH ESI
005B4BBB  8B F1                     MOV ESI,ECX
005B4BBD  57                        PUSH EDI
005B4BBE  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
005B4BC1  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
005B4BC4  E8 E7 05 13 00            CALL 0x006e51b0
005B4BC9  89 46 61                  MOV dword ptr [ESI + 0x61],EAX
005B4BCC  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B4BD1  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
005B4BD7  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
005B4BDD  6A 00                     PUSH 0x0
005B4BDF  52                        PUSH EDX
005B4BE0  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
005B4BE6  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B4BEC  E8 FF 8B 17 00            CALL 0x0072d7f0
005B4BF1  8B F0                     MOV ESI,EAX
005B4BF3  83 C4 08                  ADD ESP,0x8
005B4BF6  85 F6                     TEST ESI,ESI
005B4BF8  0F 85 0B 03 00 00         JNZ 0x005b4f09
005B4BFE  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
005B4C01  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005B4C04  53                        PUSH EBX
005B4C05  8B CE                     MOV ECX,ESI
005B4C07  E8 57 D9 E4 FF            CALL 0x00402563
005B4C0C  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
005B4C0F  3D 7F 69 00 00            CMP EAX,0x697f
005B4C14  72 5C                     JC 0x005b4c72
005B4C16  3D FF 69 00 00            CMP EAX,0x69ff
005B4C1B  73 55                     JNC 0x005b4c72
005B4C1D  05 81 96 FF FF            ADD EAX,0xffff9681
005B4C22  83 F8 04                  CMP EAX,0x4
005B4C25  77 4B                     JA 0x005b4c72
switchD_005b4c27::switchD:
005B4C27  FF 24 85 58 4F 5B 00      JMP dword ptr [EAX*0x4 + 0x5b4f58]
switchD_005b4c27::caseD_0:
005B4C2E  8A 43 10                  MOV AL,byte ptr [EBX + 0x10]
005B4C31  6A FE                     PUSH -0x2
005B4C33  6A 01                     PUSH 0x1
005B4C35  2C 7F                     SUB AL,0x7f
005B4C37  6A 01                     PUSH 0x1
005B4C39  50                        PUSH EAX
005B4C3A  EB 2E                     JMP 0x005b4c6a
switchD_005b4c27::caseD_1:
005B4C3C  6A FE                     PUSH -0x2
005B4C3E  EB 1F                     JMP 0x005b4c5f
switchD_005b4c27::caseD_2:
005B4C40  8A 53 10                  MOV DL,byte ptr [EBX + 0x10]
005B4C43  6A FE                     PUSH -0x2
005B4C45  6A 02                     PUSH 0x2
005B4C47  80 EA 7F                  SUB DL,0x7f
005B4C4A  6A 01                     PUSH 0x1
005B4C4C  52                        PUSH EDX
005B4C4D  EB 1B                     JMP 0x005b4c6a
switchD_005b4c27::caseD_3:
005B4C4F  8A 43 10                  MOV AL,byte ptr [EBX + 0x10]
005B4C52  6A FE                     PUSH -0x2
005B4C54  6A 00                     PUSH 0x0
005B4C56  2C 7F                     SUB AL,0x7f
005B4C58  6A 01                     PUSH 0x1
005B4C5A  50                        PUSH EAX
005B4C5B  EB 0D                     JMP 0x005b4c6a
switchD_005b4c27::caseD_4:
005B4C5D  6A FD                     PUSH -0x3
LAB_005b4c5f:
005B4C5F  8A 4B 10                  MOV CL,byte ptr [EBX + 0x10]
005B4C62  6A 00                     PUSH 0x0
005B4C64  80 E9 7F                  SUB CL,0x7f
005B4C67  6A 01                     PUSH 0x1
005B4C69  51                        PUSH ECX
LAB_005b4c6a:
005B4C6A  53                        PUSH EBX
005B4C6B  8B CE                     MOV ECX,ESI
005B4C6D  E8 2C FD E4 FF            CALL 0x0040499e
switchD_005b4c27::default:
005B4C72  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
005B4C75  3D 02 69 00 00            CMP EAX,0x6902
005B4C7A  0F 87 23 01 00 00         JA 0x005b4da3
005B4C80  0F 84 E5 00 00 00         JZ 0x005b4d6b
005B4C86  83 F8 05                  CMP EAX,0x5
005B4C89  77 47                     JA 0x005b4cd2
005B4C8B  74 39                     JZ 0x005b4cc6
005B4C8D  83 E8 00                  SUB EAX,0x0
005B4C90  74 28                     JZ 0x005b4cba
005B4C92  83 E8 02                  SUB EAX,0x2
005B4C95  74 13                     JZ 0x005b4caa
005B4C97  48                        DEC EAX
005B4C98  0F 85 4E 02 00 00         JNZ 0x005b4eec
005B4C9E  8B CE                     MOV ECX,ESI
005B4CA0  E8 F8 CB E4 FF            CALL 0x0040189d
005B4CA5  E9 42 02 00 00            JMP 0x005b4eec
LAB_005b4caa:
005B4CAA  8A 53 14                  MOV DL,byte ptr [EBX + 0x14]
005B4CAD  8B CE                     MOV ECX,ESI
005B4CAF  52                        PUSH EDX
005B4CB0  E8 9A D8 E4 FF            CALL 0x0040254f
005B4CB5  E9 32 02 00 00            JMP 0x005b4eec
LAB_005b4cba:
005B4CBA  8B CE                     MOV ECX,ESI
005B4CBC  E8 56 06 E5 FF            CALL 0x00405317
005B4CC1  E9 26 02 00 00            JMP 0x005b4eec
LAB_005b4cc6:
005B4CC6  8B CE                     MOV ECX,ESI
005B4CC8  E8 E4 0C E5 FF            CALL 0x004059b1
005B4CCD  E9 1A 02 00 00            JMP 0x005b4eec
LAB_005b4cd2:
005B4CD2  2D FF 68 00 00            SUB EAX,0x68ff
005B4CD7  74 6B                     JZ 0x005b4d44
005B4CD9  48                        DEC EAX
005B4CDA  74 37                     JZ 0x005b4d13
005B4CDC  48                        DEC EAX
005B4CDD  0F 85 09 02 00 00         JNZ 0x005b4eec
005B4CE3  33 C0                     XOR EAX,EAX
005B4CE5  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4CEB  83 E8 00                  SUB EAX,0x0
005B4CEE  74 17                     JZ 0x005b4d07
005B4CF0  48                        DEC EAX
005B4CF1  0F 85 F5 01 00 00         JNZ 0x005b4eec
005B4CF7  8A 43 10                  MOV AL,byte ptr [EBX + 0x10]
005B4CFA  FE C0                     INC AL
005B4CFC  88 86 5A 1A 00 00         MOV byte ptr [ESI + 0x1a5a],AL
005B4D02  E9 DE 00 00 00            JMP 0x005b4de5
LAB_005b4d07:
005B4D07  C6 86 5A 1A 00 00 02      MOV byte ptr [ESI + 0x1a5a],0x2
005B4D0E  E9 D2 00 00 00            JMP 0x005b4de5
LAB_005b4d13:
005B4D13  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4D19  84 C0                     TEST AL,AL
005B4D1B  75 1B                     JNZ 0x005b4d38
005B4D1D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B4D22  85 C0                     TEST EAX,EAX
005B4D24  0F 84 C2 01 00 00         JZ 0x005b4eec
005B4D2A  8B 88 8A 06 00 00         MOV ECX,dword ptr [EAX + 0x68a]
005B4D30  85 C9                     TEST ECX,ECX
005B4D32  0F 84 B4 01 00 00         JZ 0x005b4eec
LAB_005b4d38:
005B4D38  C6 86 5A 1A 00 00 01      MOV byte ptr [ESI + 0x1a5a],0x1
005B4D3F  E9 A1 00 00 00            JMP 0x005b4de5
LAB_005b4d44:
005B4D44  33 C0                     XOR EAX,EAX
005B4D46  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4D4C  83 E8 00                  SUB EAX,0x0
005B4D4F  74 11                     JZ 0x005b4d62
005B4D51  48                        DEC EAX
005B4D52  0F 85 94 01 00 00         JNZ 0x005b4eec
005B4D58  C7 05 2E F3 80 00 01 00 00 00  MOV dword ptr [0x0080f32e],0x1
LAB_005b4d62:
005B4D62  C6 86 5A 1A 00 00 00      MOV byte ptr [ESI + 0x1a5a],0x0
005B4D69  EB 7A                     JMP 0x005b4de5
LAB_005b4d6b:
005B4D6B  33 C0                     XOR EAX,EAX
005B4D6D  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4D73  83 E8 00                  SUB EAX,0x0
005B4D76  74 10                     JZ 0x005b4d88
005B4D78  48                        DEC EAX
005B4D79  0F 85 6D 01 00 00         JNZ 0x005b4eec
005B4D7F  C6 86 5A 1A 00 00 03      MOV byte ptr [ESI + 0x1a5a],0x3
005B4D86  EB 5D                     JMP 0x005b4de5
LAB_005b4d88:
005B4D88  8B CE                     MOV ECX,ESI
005B4D8A  E8 80 08 E5 FF            CALL 0x0040560f
005B4D8F  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
005B4D92  6A 00                     PUSH 0x0
005B4D94  68 09 03 00 00            PUSH 0x309
005B4D99  8B 11                     MOV EDX,dword ptr [ECX]
005B4D9B  FF 52 10                  CALL dword ptr [EDX + 0x10]
005B4D9E  E9 49 01 00 00            JMP 0x005b4eec
LAB_005b4da3:
005B4DA3  05 FD 96 FF FF            ADD EAX,0xffff96fd
005B4DA8  83 F8 41                  CMP EAX,0x41
005B4DAB  0F 87 3B 01 00 00         JA 0x005b4eec
005B4DB1  33 C9                     XOR ECX,ECX
005B4DB3  8A 88 8C 4F 5B 00         MOV CL,byte ptr [EAX + 0x5b4f8c]
switchD_005b4db9::switchD:
005B4DB9  FF 24 8D 6C 4F 5B 00      JMP dword ptr [ECX*0x4 + 0x5b4f6c]
switchD_005b4db9::caseD_6903:
005B4DC0  33 C0                     XOR EAX,EAX
005B4DC2  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4DC8  83 E8 00                  SUB EAX,0x0
005B4DCB  74 43                     JZ 0x005b4e10
005B4DCD  48                        DEC EAX
005B4DCE  0F 85 18 01 00 00         JNZ 0x005b4eec
005B4DD4  C7 05 2E F3 80 00 01 00 00 00  MOV dword ptr [0x0080f32e],0x1
005B4DDE  C6 86 5A 1A 00 00 04      MOV byte ptr [ESI + 0x1a5a],0x4
LAB_005b4de5:
005B4DE5  8B 16                     MOV EDX,dword ptr [ESI]
005B4DE7  8B CE                     MOV ECX,ESI
005B4DE9  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B4DEC  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005B4DF2  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
LAB_005b4df8:
005B4DF8  85 C9                     TEST ECX,ECX
005B4DFA  0F 84 EC 00 00 00         JZ 0x005b4eec
005B4E00  6A 01                     PUSH 0x1
005B4E02  6A 00                     PUSH 0x0
005B4E04  6A 01                     PUSH 0x1
005B4E06  E8 9A D1 E4 FF            CALL 0x00401fa5
005B4E0B  E9 DC 00 00 00            JMP 0x005b4eec
LAB_005b4e10:
005B4E10  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005B4E16  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005B4E1C  85 C0                     TEST EAX,EAX
005B4E1E  0F 84 C8 00 00 00         JZ 0x005b4eec
005B4E24  B9 08 00 00 00            MOV ECX,0x8
005B4E29  33 C0                     XOR EAX,EAX
005B4E2B  8D 7D BC                  LEA EDI,[EBP + -0x44]
005B4E2E  6A 00                     PUSH 0x0
005B4E30  F3 AB                     STOSD.REP ES:EDI
005B4E32  B9 08 00 00 00            MOV ECX,0x8
005B4E37  8D 7D DC                  LEA EDI,[EBP + -0x24]
005B4E3A  F3 AB                     STOSD.REP ES:EDI
005B4E3C  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005B4E3F  B9 02 00 00 00            MOV ECX,0x2
005B4E44  89 4D C8                  MOV dword ptr [EBP + -0x38],ECX
005B4E47  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
005B4E4A  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
005B4E4D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
005B4E50  6A 00                     PUSH 0x0
005B4E52  8D 4D DC                  LEA ECX,[EBP + -0x24]
005B4E55  6A 00                     PUSH 0x0
005B4E57  8D 45 BC                  LEA EAX,[EBP + -0x44]
005B4E5A  51                        PUSH ECX
005B4E5B  50                        PUSH EAX
005B4E5C  C7 45 CC 41 69 00 00      MOV dword ptr [EBP + -0x34],0x6941
005B4E63  C7 45 EC 3F 69 00 00      MOV dword ptr [EBP + -0x14],0x693f
005B4E6A  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005B4E70  6A 01                     PUSH 0x1
005B4E72  68 1D 25 00 00            PUSH 0x251d
005B4E77  E8 2C F1 E4 FF            CALL 0x00403fa8
005B4E7C  85 C0                     TEST EAX,EAX
005B4E7E  74 6C                     JZ 0x005b4eec
switchD_005b4db9::caseD_6940:
005B4E80  8B CE                     MOV ECX,ESI
005B4E82  E8 88 07 E5 FF            CALL 0x0040560f
005B4E87  EB 63                     JMP 0x005b4eec
switchD_005b4db9::caseD_693f:
005B4E89  8B CE                     MOV ECX,ESI
005B4E8B  E8 4E F2 E4 FF            CALL 0x004040de
005B4E90  EB 5A                     JMP 0x005b4eec
switchD_005b4db9::caseD_6941:
005B4E92  8A 86 E3 1E 00 00         MOV AL,byte ptr [ESI + 0x1ee3]
005B4E98  84 C0                     TEST AL,AL
005B4E9A  75 50                     JNZ 0x005b4eec
005B4E9C  8B CE                     MOV ECX,ESI
005B4E9E  E8 3B F2 E4 FF            CALL 0x004040de
005B4EA3  8B 16                     MOV EDX,dword ptr [ESI]
005B4EA5  8B CE                     MOV ECX,ESI
005B4EA7  C6 86 5A 1A 00 00 04      MOV byte ptr [ESI + 0x1a5a],0x4
005B4EAE  FF 52 08                  CALL dword ptr [EDX + 0x8]
005B4EB1  EB 39                     JMP 0x005b4eec
switchD_005b4db9::caseD_6943:
005B4EB3  6A 00                     PUSH 0x0
005B4EB5  6A 00                     PUSH 0x0
005B4EB7  68 42 69 00 00            PUSH 0x6942
005B4EBC  8B CE                     MOV ECX,ESI
005B4EBE  E8 FD E7 E4 FF            CALL 0x004036c0
005B4EC3  8B 06                     MOV EAX,dword ptr [ESI]
005B4EC5  8B CE                     MOV ECX,ESI
005B4EC7  FF 50 08                  CALL dword ptr [EAX + 0x8]
005B4ECA  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005B4ED0  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005B4ED6  E9 1D FF FF FF            JMP 0x005b4df8
switchD_005b4db9::caseD_6942:
005B4EDB  6A 00                     PUSH 0x0
005B4EDD  6A 00                     PUSH 0x0
005B4EDF  EB 04                     JMP 0x005b4ee5
switchD_005b4db9::caseD_6944:
005B4EE1  6A 00                     PUSH 0x0
005B4EE3  6A 01                     PUSH 0x1
LAB_005b4ee5:
005B4EE5  8B CE                     MOV ECX,ESI
005B4EE7  E8 14 D0 E4 FF            CALL 0x00401f00
switchD_005b4db9::caseD_6904:
005B4EEC  8B 95 78 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff78]
005B4EF2  53                        PUSH EBX
005B4EF3  8B CE                     MOV ECX,ESI
005B4EF5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B4EFB  E8 80 C3 E4 FF            CALL 0x00401280
005B4F00  5F                        POP EDI
005B4F01  5E                        POP ESI
005B4F02  5B                        POP EBX
005B4F03  8B E5                     MOV ESP,EBP
005B4F05  5D                        POP EBP
005B4F06  C2 04 00                  RET 0x4
LAB_005b4f09:
005B4F09  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
005B4F0F  68 1C CA 7C 00            PUSH 0x7cca1c
005B4F14  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B4F19  56                        PUSH ESI
005B4F1A  6A 00                     PUSH 0x0
005B4F1C  68 41 02 00 00            PUSH 0x241
005B4F21  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B4F26  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005B4F2B  E8 A0 85 0F 00            CALL 0x006ad4d0
005B4F30  83 C4 18                  ADD ESP,0x18
005B4F33  85 C0                     TEST EAX,EAX
005B4F35  74 01                     JZ 0x005b4f38
005B4F37  CC                        INT3
LAB_005b4f38:
005B4F38  68 41 02 00 00            PUSH 0x241
005B4F3D  68 E8 C8 7C 00            PUSH 0x7cc8e8
005B4F42  6A 00                     PUSH 0x0
005B4F44  56                        PUSH ESI
005B4F45  E8 F6 0E 0F 00            CALL 0x006a5e40
005B4F4A  5F                        POP EDI
005B4F4B  5E                        POP ESI
005B4F4C  B8 FF FF 00 00            MOV EAX,0xffff
005B4F51  5B                        POP EBX
005B4F52  8B E5                     MOV ESP,EBP
005B4F54  5D                        POP EBP
005B4F55  C2 04 00                  RET 0x4
