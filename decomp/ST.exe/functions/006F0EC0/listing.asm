FUN_006f0ec0:
006F0EC0  55                        PUSH EBP
006F0EC1  8B EC                     MOV EBP,ESP
006F0EC3  81 EC 5C 03 00 00         SUB ESP,0x35c
006F0EC9  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F0ECE  53                        PUSH EBX
006F0ECF  56                        PUSH ESI
006F0ED0  57                        PUSH EDI
006F0ED1  8D 55 A8                  LEA EDX,[EBP + -0x58]
006F0ED4  8D 4D A4                  LEA ECX,[EBP + -0x5c]
006F0ED7  6A 00                     PUSH 0x0
006F0ED9  52                        PUSH EDX
006F0EDA  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F0EE1  89 45 A4                  MOV dword ptr [EBP + -0x5c],EAX
006F0EE4  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0EEA  E8 01 C9 03 00            CALL 0x0072d7f0
006F0EEF  8B D8                     MOV EBX,EAX
006F0EF1  83 C4 08                  ADD ESP,0x8
006F0EF4  85 DB                     TEST EBX,EBX
006F0EF6  0F 85 08 02 00 00         JNZ 0x006f1104
006F0EFC  A2 C0 6E 85 00            MOV [0x00856ec0],AL
006F0F01  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006F0F04  50                        PUSH EAX
006F0F05  E8 06 9D FB FF            CALL 0x006aac10
006F0F0A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F0F0D  8D 8D A4 FE FF FF         LEA ECX,[EBP + 0xfffffea4]
006F0F13  89 18                     MOV dword ptr [EAX],EBX
006F0F15  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006F0F18  8D 95 A4 FD FF FF         LEA EDX,[EBP + 0xfffffda4]
006F0F1E  51                        PUSH ECX
006F0F1F  8D 85 A4 FC FF FF         LEA EAX,[EBP + 0xfffffca4]
006F0F25  52                        PUSH EDX
006F0F26  8D 4D F8                  LEA ECX,[EBP + -0x8]
006F0F29  50                        PUSH EAX
006F0F2A  51                        PUSH ECX
006F0F2B  53                        PUSH EBX
006F0F2C  E8 FF D7 03 00            CALL 0x0072e730
006F0F31  8D 95 A4 FE FF FF         LEA EDX,[EBP + 0xfffffea4]
006F0F37  68 80 70 7C 00            PUSH 0x7c7080
006F0F3C  52                        PUSH EDX
006F0F3D  E8 DE D6 03 00            CALL 0x0072e620
006F0F42  83 C4 1C                  ADD ESP,0x1c
006F0F45  85 C0                     TEST EAX,EAX
006F0F47  74 75                     JZ 0x006f0fbe
006F0F49  8D 85 A4 FE FF FF         LEA EAX,[EBP + 0xfffffea4]
006F0F4F  68 78 70 7C 00            PUSH 0x7c7078
006F0F54  50                        PUSH EAX
006F0F55  E8 C6 D6 03 00            CALL 0x0072e620
006F0F5A  83 C4 08                  ADD ESP,0x8
006F0F5D  85 C0                     TEST EAX,EAX
006F0F5F  74 5D                     JZ 0x006f0fbe
006F0F61  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F0F64  8B FB                     MOV EDI,EBX
006F0F66  33 C0                     XOR EAX,EAX
006F0F68  8D 91 31 02 00 00         LEA EDX,[ECX + 0x231]
006F0F6E  83 C9 FF                  OR ECX,0xffffffff
006F0F71  F2 AE                     SCASB.REPNE ES:EDI
006F0F73  F7 D1                     NOT ECX
006F0F75  2B F9                     SUB EDI,ECX
006F0F77  8B C1                     MOV EAX,ECX
006F0F79  8B F7                     MOV ESI,EDI
006F0F7B  8B FA                     MOV EDI,EDX
006F0F7D  C1 E9 02                  SHR ECX,0x2
006F0F80  F3 A5                     MOVSD.REP ES:EDI,ESI
006F0F82  8B C8                     MOV ECX,EAX
006F0F84  33 C0                     XOR EAX,EAX
006F0F86  83 E1 03                  AND ECX,0x3
006F0F89  F3 A4                     MOVSB.REP ES:EDI,ESI
006F0F8B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F0F8E  BF 80 70 7C 00            MOV EDI,0x7c7080
006F0F93  8D 91 31 02 00 00         LEA EDX,[ECX + 0x231]
006F0F99  83 C9 FF                  OR ECX,0xffffffff
006F0F9C  F2 AE                     SCASB.REPNE ES:EDI
006F0F9E  F7 D1                     NOT ECX
006F0FA0  2B F9                     SUB EDI,ECX
006F0FA2  8B F7                     MOV ESI,EDI
006F0FA4  8B FA                     MOV EDI,EDX
006F0FA6  8B D1                     MOV EDX,ECX
006F0FA8  83 C9 FF                  OR ECX,0xffffffff
006F0FAB  F2 AE                     SCASB.REPNE ES:EDI
006F0FAD  8B CA                     MOV ECX,EDX
006F0FAF  4F                        DEC EDI
006F0FB0  C1 E9 02                  SHR ECX,0x2
006F0FB3  F3 A5                     MOVSD.REP ES:EDI,ESI
006F0FB5  8B CA                     MOV ECX,EDX
006F0FB7  83 E1 03                  AND ECX,0x3
006F0FBA  F3 A4                     MOVSB.REP ES:EDI,ESI
006F0FBC  EB 28                     JMP 0x006f0fe6
LAB_006f0fbe:
006F0FBE  8D 85 A4 FD FF FF         LEA EAX,[EBP + 0xfffffda4]
006F0FC4  68 80 70 7C 00            PUSH 0x7c7080
006F0FC9  50                        PUSH EAX
006F0FCA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F0FCD  8D 8D A4 FC FF FF         LEA ECX,[EBP + 0xfffffca4]
006F0FD3  8D 55 F8                  LEA EDX,[EBP + -0x8]
006F0FD6  51                        PUSH ECX
006F0FD7  05 31 02 00 00            ADD EAX,0x231
006F0FDC  52                        PUSH EDX
006F0FDD  50                        PUSH EAX
006F0FDE  E8 2D E1 03 00            CALL 0x0072f110
006F0FE3  83 C4 14                  ADD ESP,0x14
LAB_006f0fe6:
006F0FE6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F0FE9  6A 00                     PUSH 0x0
006F0FEB  6A 00                     PUSH 0x0
006F0FED  6A 03                     PUSH 0x3
006F0FEF  C7 41 04 FF 00 00 00      MOV dword ptr [ECX + 0x4],0xff
006F0FF6  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F0FF9  6A 00                     PUSH 0x0
006F0FFB  6A 00                     PUSH 0x0
006F0FFD  C7 42 08 30 0E 6F 00      MOV dword ptr [EDX + 0x8],0x6f0e30
006F1004  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F1007  68 00 00 00 80            PUSH 0x80000000
006F100C  C7 40 0C A0 0E 6F 00      MOV dword ptr [EAX + 0xc],0x6f0ea0
006F1013  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1016  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006F1019  C7 41 10 00 00 00 00      MOV dword ptr [ECX + 0x10],0x0
006F1020  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F1023  89 42 14                  MOV dword ptr [EDX + 0x14],EAX
006F1026  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F1029  81 C1 31 02 00 00         ADD ECX,0x231
006F102F  51                        PUSH ECX
006F1030  FF 15 80 BC 85 00         CALL dword ptr [0x0085bc80]
006F1036  8B F0                     MOV ESI,EAX
006F1038  83 FE FF                  CMP ESI,-0x1
006F103B  74 40                     JZ 0x006f107d
006F103D  8D 55 E8                  LEA EDX,[EBP + -0x18]
006F1040  52                        PUSH EDX
006F1041  6A 00                     PUSH 0x0
006F1043  6A 00                     PUSH 0x0
006F1045  56                        PUSH ESI
006F1046  FF 15 40 BB 85 00         CALL dword ptr [0x0085bb40]
006F104C  85 C0                     TEST EAX,EAX
006F104E  74 26                     JZ 0x006f1076
006F1050  8D 45 F0                  LEA EAX,[EBP + -0x10]
006F1053  8D 4D E8                  LEA ECX,[EBP + -0x18]
006F1056  50                        PUSH EAX
006F1057  51                        PUSH ECX
006F1058  FF 15 3C BB 85 00         CALL dword ptr [0x0085bb3c]
006F105E  85 C0                     TEST EAX,EAX
006F1060  74 14                     JZ 0x006f1076
006F1062  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F1065  8D 45 F0                  LEA EAX,[EBP + -0x10]
006F1068  81 C2 35 03 00 00         ADD EDX,0x335
006F106E  52                        PUSH EDX
006F106F  50                        PUSH EAX
006F1070  FF 15 B4 BB 85 00         CALL dword ptr [0x0085bbb4]
LAB_006f1076:
006F1076  56                        PUSH ESI
006F1077  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_006f107d:
006F107D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006F1080  48                        DEC EAX
006F1081  74 56                     JZ 0x006f10d9
006F1083  48                        DEC EAX
006F1084  74 3E                     JZ 0x006f10c4
006F1086  48                        DEC EAX
006F1087  74 27                     JZ 0x006f10b0
006F1089  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F108C  6A 00                     PUSH 0x0
006F108E  83 C1 04                  ADD ECX,0x4
006F1091  51                        PUSH ECX
006F1092  53                        PUSH EBX
006F1093  E8 D8 F8 05 00            CALL 0x00750970
006F1098  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F109B  89 02                     MOV dword ptr [EDX],EAX
006F109D  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006F10A0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F10A3  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F10A9  5F                        POP EDI
006F10AA  5E                        POP ESI
006F10AB  5B                        POP EBX
006F10AC  8B E5                     MOV ESP,EBP
006F10AE  5D                        POP EBP
006F10AF  C3                        RET
LAB_006f10b0:
006F10B0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F10B3  68 00 00 10 00            PUSH 0x100000
006F10B8  83 C0 04                  ADD EAX,0x4
006F10BB  50                        PUSH EAX
006F10BC  53                        PUSH EBX
006F10BD  E8 AE F8 05 00            CALL 0x00750970
006F10C2  EB 28                     JMP 0x006f10ec
LAB_006f10c4:
006F10C4  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F10C7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F10CA  52                        PUSH EDX
006F10CB  83 C0 04                  ADD EAX,0x4
006F10CE  6A 00                     PUSH 0x0
006F10D0  50                        PUSH EAX
006F10D1  53                        PUSH EBX
006F10D2  E8 69 F8 05 00            CALL 0x00750940
006F10D7  EB 13                     JMP 0x006f10ec
LAB_006f10d9:
006F10D9  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006F10DC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F10DF  52                        PUSH EDX
006F10E0  83 C0 04                  ADD EAX,0x4
006F10E3  6A 00                     PUSH 0x0
006F10E5  50                        PUSH EAX
006F10E6  53                        PUSH EBX
006F10E7  E8 34 F8 05 00            CALL 0x00750920
LAB_006f10ec:
006F10EC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006F10EF  89 01                     MOV dword ptr [ECX],EAX
006F10F1  8B 55 A4                  MOV EDX,dword ptr [EBP + -0x5c]
006F10F4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F10F7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F10FD  5F                        POP EDI
006F10FE  5E                        POP ESI
006F10FF  5B                        POP EBX
006F1100  8B E5                     MOV ESP,EBP
006F1102  5D                        POP EBP
006F1103  C3                        RET
LAB_006f1104:
006F1104  8B 45 A4                  MOV EAX,dword ptr [EBP + -0x5c]
006F1107  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006F110C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F110F  85 C0                     TEST EAX,EAX
006F1111  74 3A                     JZ 0x006f114d
006F1113  8B 08                     MOV ECX,dword ptr [EAX]
006F1115  51                        PUSH ECX
006F1116  E8 D5 F7 05 00            CALL 0x007508f0
006F111B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006F111E  83 C9 FF                  OR ECX,0xffffffff
006F1121  33 C0                     XOR EAX,EAX
006F1123  8D BA 31 02 00 00         LEA EDI,[EDX + 0x231]
006F1129  F2 AE                     SCASB.REPNE ES:EDI
006F112B  F7 D1                     NOT ECX
006F112D  2B F9                     SUB EDI,ECX
006F112F  8B C1                     MOV EAX,ECX
006F1131  8B F7                     MOV ESI,EDI
006F1133  BF C0 6E 85 00            MOV EDI,0x856ec0
006F1138  C1 E9 02                  SHR ECX,0x2
006F113B  F3 A5                     MOVSD.REP ES:EDI,ESI
006F113D  8B C8                     MOV ECX,EAX
006F113F  83 E1 03                  AND ECX,0x3
006F1142  F3 A4                     MOVSB.REP ES:EDI,ESI
006F1144  8D 4D FC                  LEA ECX,[EBP + -0x4]
006F1147  51                        PUSH ECX
006F1148  E8 13 9F FB FF            CALL 0x006ab060
LAB_006f114d:
006F114D  6A 77                     PUSH 0x77
006F114F  68 A4 FA 7E 00            PUSH 0x7efaa4
006F1154  6A 00                     PUSH 0x0
006F1156  53                        PUSH EBX
006F1157  E8 E4 4C FB FF            CALL 0x006a5e40
006F115C  5F                        POP EDI
006F115D  5E                        POP ESI
006F115E  33 C0                     XOR EAX,EAX
006F1160  5B                        POP EBX
006F1161  8B E5                     MOV ESP,EBP
006F1163  5D                        POP EBP
006F1164  C3                        RET
