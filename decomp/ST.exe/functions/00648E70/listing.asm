CreateArbiter:
00648E70  55                        PUSH EBP
00648E71  8B EC                     MOV EBP,ESP
00648E73  83 EC 48                  SUB ESP,0x48
00648E76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00648E7B  56                        PUSH ESI
00648E7C  8D 55 BC                  LEA EDX,[EBP + -0x44]
00648E7F  8D 4D B8                  LEA ECX,[EBP + -0x48]
00648E82  6A 00                     PUSH 0x0
00648E84  52                        PUSH EDX
00648E85  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00648E8C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00648E8F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648E95  E8 56 49 0E 00            CALL 0x0072d7f0
00648E9A  8B F0                     MOV ESI,EAX
00648E9C  83 C4 08                  ADD ESP,0x8
00648E9F  85 F6                     TEST ESI,ESI
00648EA1  0F 85 8A 00 00 00         JNZ 0x00648f31
00648EA7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00648EAC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00648EAF  85 C0                     TEST EAX,EAX
00648EB1  74 04                     JZ 0x00648eb7
00648EB3  85 F6                     TEST ESI,ESI
00648EB5  75 17                     JNZ 0x00648ece
LAB_00648eb7:
00648EB7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00648EBC  68 82 00 00 00            PUSH 0x82
00648EC1  68 80 28 7D 00            PUSH 0x7d2880
00648EC6  50                        PUSH EAX
00648EC7  6A CC                     PUSH -0x34
00648EC9  E8 72 CF 05 00            CALL 0x006a5e40
LAB_00648ece:
00648ECE  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00648ED1  85 C0                     TEST EAX,EAX
00648ED3  74 05                     JZ 0x00648eda
00648ED5  80 38 00                  CMP byte ptr [EAX],0x0
00648ED8  75 05                     JNZ 0x00648edf
LAB_00648eda:
00648EDA  A1 64 D6 79 00            MOV EAX,[0x0079d664]
LAB_00648edf:
00648EDF  6A 00                     PUSH 0x0
00648EE1  6A 01                     PUSH 0x1
00648EE3  50                        PUSH EAX
00648EE4  56                        PUSH ESI
00648EE5  E8 A6 9E 0A 00            CALL 0x006f2d90
00648EEA  83 C4 10                  ADD ESP,0x10
00648EED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00648EF0  85 C0                     TEST EAX,EAX
00648EF2  75 08                     JNZ 0x00648efc
00648EF4  E8 E4 94 DB FF            CALL 0x004023dd
00648EF9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_00648efc:
00648EFC  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00648F02  6A 00                     PUSH 0x0
00648F04  50                        PUSH EAX
00648F05  6A 00                     PUSH 0x0
00648F07  6A 00                     PUSH 0x0
00648F09  6A 28                     PUSH 0x28
00648F0B  68 03 04 00 00            PUSH 0x403
00648F10  E8 EB D2 09 00            CALL 0x006e6200
00648F15  8D 4D FC                  LEA ECX,[EBP + -0x4]
00648F18  51                        PUSH ECX
00648F19  E8 86 91 DB FF            CALL 0x004020a4
00648F1E  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00648F21  83 C4 04                  ADD ESP,0x4
00648F24  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00648F2A  33 C0                     XOR EAX,EAX
00648F2C  5E                        POP ESI
00648F2D  8B E5                     MOV ESP,EBP
00648F2F  5D                        POP EBP
00648F30  C3                        RET
LAB_00648f31:
00648F31  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00648F34  68 B4 28 7D 00            PUSH 0x7d28b4
00648F39  68 CC 4C 7A 00            PUSH 0x7a4ccc
00648F3E  56                        PUSH ESI
00648F3F  6A 00                     PUSH 0x0
00648F41  68 8D 00 00 00            PUSH 0x8d
00648F46  68 80 28 7D 00            PUSH 0x7d2880
00648F4B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00648F50  E8 7B 45 06 00            CALL 0x006ad4d0
00648F55  83 C4 18                  ADD ESP,0x18
00648F58  85 C0                     TEST EAX,EAX
00648F5A  74 01                     JZ 0x00648f5d
00648F5C  CC                        INT3
LAB_00648f5d:
00648F5D  8D 4D FC                  LEA ECX,[EBP + -0x4]
00648F60  51                        PUSH ECX
00648F61  E8 3E 91 DB FF            CALL 0x004020a4
00648F66  83 C4 04                  ADD ESP,0x4
00648F69  68 8F 00 00 00            PUSH 0x8f
00648F6E  68 80 28 7D 00            PUSH 0x7d2880
00648F73  6A 00                     PUSH 0x0
00648F75  56                        PUSH ESI
00648F76  E8 C5 CE 05 00            CALL 0x006a5e40
00648F7B  8B C6                     MOV EAX,ESI
00648F7D  5E                        POP ESI
00648F7E  8B E5                     MOV ESP,EBP
00648F80  5D                        POP EBP
00648F81  C3                        RET
