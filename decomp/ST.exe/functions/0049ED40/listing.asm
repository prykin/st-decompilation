FUN_0049ed40:
0049ED40  55                        PUSH EBP
0049ED41  8B EC                     MOV EBP,ESP
0049ED43  83 EC 74                  SUB ESP,0x74
0049ED46  8B 41 29                  MOV EAX,dword ptr [ECX + 0x29]
0049ED49  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
0049ED4F  53                        PUSH EBX
0049ED50  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0049ED53  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0049ED56  56                        PUSH ESI
0049ED57  57                        PUSH EDI
0049ED58  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
0049ED5B  33 FF                     XOR EDI,EDI
0049ED5D  8D 4D 90                  LEA ECX,[EBP + -0x70]
0049ED60  8D 45 8C                  LEA EAX,[EBP + -0x74]
0049ED63  57                        PUSH EDI
0049ED64  51                        PUSH ECX
0049ED65  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0049ED68  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0049ED6B  C7 45 E0 02 00 00 00      MOV dword ptr [EBP + -0x20],0x2
0049ED72  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
0049ED75  89 55 8C                  MOV dword ptr [EBP + -0x74],EDX
0049ED78  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049ED7D  E8 6E EA 28 00            CALL 0x0072d7f0
0049ED82  8B F0                     MOV ESI,EAX
0049ED84  83 C4 08                  ADD ESP,0x8
0049ED87  3B F7                     CMP ESI,EDI
0049ED89  0F 85 5B 02 00 00         JNZ 0x0049efea
0049ED8F  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0049ED92  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
0049ED95  3B C7                     CMP EAX,EDI
0049ED97  74 09                     JZ 0x0049eda2
0049ED99  83 F8 01                  CMP EAX,0x1
0049ED9C  0F 85 8F 01 00 00         JNZ 0x0049ef31
LAB_0049eda2:
0049EDA2  B9 15 00 00 00            MOV ECX,0x15
0049EDA7  33 C0                     XOR EAX,EAX
0049EDA9  8D BB 89 00 00 00         LEA EDI,[EBX + 0x89]
0049EDAF  33 D2                     XOR EDX,EDX
0049EDB1  F3 AB                     STOSD.REP ES:EDI
0049EDB3  8D 83 BD 02 00 00         LEA EAX,[EBX + 0x2bd]
0049EDB9  8D 8B 8C 01 00 00         LEA ECX,[EBX + 0x18c]
0049EDBF  89 53 65                  MOV dword ptr [EBX + 0x65],EDX
0049EDC2  8B F0                     MOV ESI,EAX
0049EDC4  8B 39                     MOV EDI,dword ptr [ECX]
0049EDC6  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049EDC9  89 3E                     MOV dword ptr [ESI],EDI
0049EDCB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0049EDCE  66 8B 49 04               MOV CX,word ptr [ECX + 0x4]
0049EDD2  66 89 4E 04               MOV word ptr [ESI + 0x4],CX
0049EDD6  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
0049EDDC  66 8B 00                  MOV AX,word ptr [EAX]
0049EDDF  8B 89 E4 00 00 00         MOV ECX,dword ptr [ECX + 0xe4]
0049EDE5  66 89 45 D4               MOV word ptr [EBP + -0x2c],AX
0049EDE9  66 8B 83 C1 02 00 00      MOV AX,word ptr [EBX + 0x2c1]
0049EDF0  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0049EDF3  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
0049EDF7  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049EDFA  89 4D D0                  MOV dword ptr [EBP + -0x30],ECX
0049EDFD  66 8B 8B BF 02 00 00      MOV CX,word ptr [EBX + 0x2bf]
0049EE04  3B C2                     CMP EAX,EDX
0049EE06  66 89 4D D6               MOV word ptr [EBP + -0x2a],CX
0049EE0A  0F 8E DC 00 00 00         JLE 0x0049eeec
LAB_0049ee10:
0049EE10  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049EE13  51                        PUSH ECX
0049EE14  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049EE17  E8 54 DE 20 00            CALL 0x006acc70
0049EE1C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049EE1F  66 3D FF FF               CMP AX,0xffff
0049EE23  0F 84 B1 00 00 00         JZ 0x0049eeda
0049EE29  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
0049EE2C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049EE32  6A 01                     PUSH 0x1
0049EE34  50                        PUSH EAX
0049EE35  52                        PUSH EDX
0049EE36  E8 7F 3A F6 FF            CALL 0x004028ba
0049EE3B  8B F0                     MOV ESI,EAX
0049EE3D  85 F6                     TEST ESI,ESI
0049EE3F  75 1A                     JNZ 0x0049ee5b
0049EE41  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0049EE46  68 6B 0B 00 00            PUSH 0xb6b
0049EE4B  68 3C BE 7A 00            PUSH 0x7abe3c
0049EE50  50                        PUSH EAX
0049EE51  68 04 00 FE AF            PUSH 0xaffe0004
0049EE56  E8 E5 6F 20 00            CALL 0x006a5e40
LAB_0049ee5b:
0049EE5B  83 BE F7 06 00 00 04      CMP dword ptr [ESI + 0x6f7],0x4
0049EE62  75 38                     JNZ 0x0049ee9c
0049EE64  8B 86 BE 07 00 00         MOV EAX,dword ptr [ESI + 0x7be]
0049EE6A  85 C0                     TEST EAX,EAX
0049EE6C  7E 2E                     JLE 0x0049ee9c
0049EE6E  85 FF                     TEST EDI,EDI
0049EE70  75 11                     JNZ 0x0049ee83
0049EE72  6A 01                     PUSH 0x1
0049EE74  6A 02                     PUSH 0x2
0049EE76  6A 01                     PUSH 0x1
0049EE78  57                        PUSH EDI
0049EE79  E8 12 F4 20 00            CALL 0x006ae290
0049EE7E  8B F8                     MOV EDI,EAX
0049EE80  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
LAB_0049ee83:
0049EE83  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049EE86  51                        PUSH ECX
0049EE87  57                        PUSH EDI
0049EE88  E8 33 F3 20 00            CALL 0x006ae1c0
0049EE8D  8D 55 D0                  LEA EDX,[EBP + -0x30]
0049EE90  8B CE                     MOV ECX,ESI
0049EE92  52                        PUSH EDX
0049EE93  6A 0A                     PUSH 0xa
0049EE95  E8 8C 32 F6 FF            CALL 0x00402126
0049EE9A  EB 3E                     JMP 0x0049eeda
LAB_0049ee9c:
0049EE9C  8B CE                     MOV ECX,ESI
0049EE9E  E8 B5 5F F6 FF            CALL 0x00404e58
0049EEA3  85 C0                     TEST EAX,EAX
0049EEA5  75 0F                     JNZ 0x0049eeb6
0049EEA7  8D 45 E8                  LEA EAX,[EBP + -0x18]
0049EEAA  8B CE                     MOV ECX,ESI
0049EEAC  50                        PUSH EAX
0049EEAD  6A 03                     PUSH 0x3
0049EEAF  E8 72 32 F6 FF            CALL 0x00402126
0049EEB4  EB 24                     JMP 0x0049eeda
LAB_0049eeb6:
0049EEB6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0049EEB9  85 C0                     TEST EAX,EAX
0049EEBB  75 10                     JNZ 0x0049eecd
0049EEBD  6A 01                     PUSH 0x1
0049EEBF  6A 02                     PUSH 0x2
0049EEC1  6A 01                     PUSH 0x1
0049EEC3  6A 00                     PUSH 0x0
0049EEC5  E8 C6 F3 20 00            CALL 0x006ae290
0049EECA  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_0049eecd:
0049EECD  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0049EED0  8D 4D FC                  LEA ECX,[EBP + -0x4]
0049EED3  51                        PUSH ECX
0049EED4  52                        PUSH EDX
0049EED5  E8 E6 F2 20 00            CALL 0x006ae1c0
LAB_0049eeda:
0049EEDA  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0049EEDD  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049EEE0  42                        INC EDX
0049EEE1  3B D0                     CMP EDX,EAX
0049EEE3  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0049EEE6  0F 8C 24 FF FF FF         JL 0x0049ee10
LAB_0049eeec:
0049EEEC  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
0049EEEF  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049EEF2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049EEF8  56                        PUSH ESI
0049EEF9  57                        PUSH EDI
0049EEFA  50                        PUSH EAX
0049EEFB  E8 9B 4E F6 FF            CALL 0x00403d9b
0049EF00  85 FF                     TEST EDI,EDI
0049EF02  74 06                     JZ 0x0049ef0a
0049EF04  57                        PUSH EDI
0049EF05  E8 06 F2 20 00            CALL 0x006ae110
LAB_0049ef0a:
0049EF0A  85 F6                     TEST ESI,ESI
0049EF0C  74 06                     JZ 0x0049ef14
0049EF0E  56                        PUSH ESI
0049EF0F  E8 FC F1 20 00            CALL 0x006ae110
LAB_0049ef14:
0049EF14  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049EF1A  68 84 0B 00 00            PUSH 0xb84
0049EF1F  68 3C BE 7A 00            PUSH 0x7abe3c
0049EF24  51                        PUSH ECX
0049EF25  68 09 00 FE AF            PUSH 0xaffe0009
0049EF2A  E8 11 6F 20 00            CALL 0x006a5e40
0049EF2F  33 FF                     XOR EDI,EDI
LAB_0049ef31:
0049EF31  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0049EF37  B9 1E 00 00 00            MOV ECX,0x1e
0049EF3C  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
0049EF42  33 D2                     XOR EDX,EDX
0049EF44  F7 F1                     DIV ECX
0049EF46  83 FA 0A                  CMP EDX,0xa
0049EF49  0F 85 86 00 00 00         JNZ 0x0049efd5
0049EF4F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049EF52  85 C0                     TEST EAX,EAX
0049EF54  7E 71                     JLE 0x0049efc7
LAB_0049ef56:
0049EF56  8B 4B 29                  MOV ECX,dword ptr [EBX + 0x29]
0049EF59  8D 55 FC                  LEA EDX,[EBP + -0x4]
0049EF5C  52                        PUSH EDX
0049EF5D  8B D7                     MOV EDX,EDI
0049EF5F  E8 0C DD 20 00            CALL 0x006acc70
0049EF64  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0049EF67  66 3D FF FF               CMP AX,0xffff
0049EF6B  74 4D                     JZ 0x0049efba
0049EF6D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0049EF73  6A 01                     PUSH 0x1
0049EF75  50                        PUSH EAX
0049EF76  8A 43 24                  MOV AL,byte ptr [EBX + 0x24]
0049EF79  50                        PUSH EAX
0049EF7A  E8 3B 39 F6 FF            CALL 0x004028ba
0049EF7F  8B F0                     MOV ESI,EAX
0049EF81  85 F6                     TEST ESI,ESI
0049EF83  75 1B                     JNZ 0x0049efa0
0049EF85  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0049EF8B  68 8B 0B 00 00            PUSH 0xb8b
0049EF90  68 3C BE 7A 00            PUSH 0x7abe3c
0049EF95  51                        PUSH ECX
0049EF96  68 04 00 FE AF            PUSH 0xaffe0004
0049EF9B  E8 A0 6E 20 00            CALL 0x006a5e40
LAB_0049efa0:
0049EFA0  8B CE                     MOV ECX,ESI
0049EFA2  E8 35 3F F6 FF            CALL 0x00402edc
0049EFA7  83 F8 0A                  CMP EAX,0xa
0049EFAA  74 18                     JZ 0x0049efc4
0049EFAC  6A 0A                     PUSH 0xa
0049EFAE  8B CE                     MOV ECX,ESI
0049EFB0  E8 44 5E F6 FF            CALL 0x00404df9
0049EFB5  83 F8 01                  CMP EAX,0x1
0049EFB8  74 0A                     JZ 0x0049efc4
LAB_0049efba:
0049EFBA  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0049EFBD  47                        INC EDI
0049EFBE  3B F8                     CMP EDI,EAX
0049EFC0  7C 94                     JL 0x0049ef56
0049EFC2  EB 03                     JMP 0x0049efc7
LAB_0049efc4:
0049EFC4  FF 45 EC                  INC dword ptr [EBP + -0x14]
LAB_0049efc7:
0049EFC7  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0049EFCA  85 C0                     TEST EAX,EAX
0049EFCC  75 07                     JNZ 0x0049efd5
0049EFCE  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
LAB_0049efd5:
0049EFD5  8B 55 8C                  MOV EDX,dword ptr [EBP + -0x74]
0049EFD8  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
LAB_0049efde:
0049EFDE  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
0049EFE1  5F                        POP EDI
0049EFE2  5E                        POP ESI
0049EFE3  5B                        POP EBX
0049EFE4  8B E5                     MOV ESP,EBP
0049EFE6  5D                        POP EBP
0049EFE7  C2 04 00                  RET 0x4
LAB_0049efea:
0049EFEA  8B 45 8C                  MOV EAX,dword ptr [EBP + -0x74]
0049EFED  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0049EFF3  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0049EFF8  74 E4                     JZ 0x0049efde
0049EFFA  68 D0 C0 7A 00            PUSH 0x7ac0d0
0049EFFF  68 CC 4C 7A 00            PUSH 0x7a4ccc
0049F004  56                        PUSH ESI
0049F005  57                        PUSH EDI
0049F006  68 94 0B 00 00            PUSH 0xb94
0049F00B  68 3C BE 7A 00            PUSH 0x7abe3c
0049F010  E8 BB E4 20 00            CALL 0x006ad4d0
0049F015  83 C4 18                  ADD ESP,0x18
0049F018  85 C0                     TEST EAX,EAX
0049F01A  74 01                     JZ 0x0049f01d
0049F01C  CC                        INT3
LAB_0049f01d:
0049F01D  68 95 0B 00 00            PUSH 0xb95
0049F022  68 3C BE 7A 00            PUSH 0x7abe3c
0049F027  57                        PUSH EDI
0049F028  56                        PUSH ESI
0049F029  E8 12 6E 20 00            CALL 0x006a5e40
0049F02E  5F                        POP EDI
0049F02F  5E                        POP ESI
0049F030  83 C8 FF                  OR EAX,0xffffffff
0049F033  5B                        POP EBX
0049F034  8B E5                     MOV ESP,EBP
0049F036  5D                        POP EBP
0049F037  C2 04 00                  RET 0x4
