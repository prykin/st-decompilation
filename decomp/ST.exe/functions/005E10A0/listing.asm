MTaskTy::TTaskItemClose:
005E10A0  55                        PUSH EBP
005E10A1  8B EC                     MOV EBP,ESP
005E10A3  83 EC 44                  SUB ESP,0x44
005E10A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E10AB  53                        PUSH EBX
005E10AC  56                        PUSH ESI
005E10AD  57                        PUSH EDI
005E10AE  8D 55 C0                  LEA EDX,[EBP + -0x40]
005E10B1  8D 4D BC                  LEA ECX,[EBP + -0x44]
005E10B4  6A 00                     PUSH 0x0
005E10B6  52                        PUSH EDX
005E10B7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005E10BA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E10C0  E8 2B C7 14 00            CALL 0x0072d7f0
005E10C5  8B F0                     MOV ESI,EAX
005E10C7  83 C4 08                  ADD ESP,0x8
005E10CA  85 F6                     TEST ESI,ESI
005E10CC  75 79                     JNZ 0x005e1147
005E10CE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005E10D1  85 F6                     TEST ESI,ESI
005E10D3  74 60                     JZ 0x005e1135
005E10D5  8B 06                     MOV EAX,dword ptr [ESI]
005E10D7  85 C0                     TEST EAX,EAX
005E10D9  7C 0C                     JL 0x005e10e7
005E10DB  50                        PUSH EAX
005E10DC  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E10E1  50                        PUSH EAX
005E10E2  E8 C9 2A 0D 00            CALL 0x006b3bb0
LAB_005e10e7:
005E10E7  C7 06 FF FF FF FF         MOV dword ptr [ESI],0xffffffff
005E10ED  8D 7E 04                  LEA EDI,[ESI + 0x4]
005E10F0  BB 03 00 00 00            MOV EBX,0x3
LAB_005e10f5:
005E10F5  83 3F 00                  CMP dword ptr [EDI],0x0
005E10F8  74 06                     JZ 0x005e1100
005E10FA  57                        PUSH EDI
005E10FB  E8 60 9F 0C 00            CALL 0x006ab060
LAB_005e1100:
005E1100  83 C7 04                  ADD EDI,0x4
005E1103  4B                        DEC EBX
005E1104  75 EF                     JNZ 0x005e10f5
005E1106  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
005E1109  85 C9                     TEST ECX,ECX
005E110B  74 18                     JZ 0x005e1125
005E110D  E8 4E 2F 13 00            CALL 0x00714060
005E1112  8B 4E 31                  MOV ECX,dword ptr [ESI + 0x31]
005E1115  51                        PUSH ECX
005E1116  E8 95 D1 14 00            CALL 0x0072e2b0
005E111B  83 C4 04                  ADD ESP,0x4
005E111E  C7 46 31 00 00 00 00      MOV dword ptr [ESI + 0x31],0x0
LAB_005e1125:
005E1125  8B 4E 3A                  MOV ECX,dword ptr [ESI + 0x3a]
005E1128  8D 46 3A                  LEA EAX,[ESI + 0x3a]
005E112B  85 C9                     TEST ECX,ECX
005E112D  74 06                     JZ 0x005e1135
005E112F  50                        PUSH EAX
005E1130  E8 2B 9F 0C 00            CALL 0x006ab060
LAB_005e1135:
005E1135  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005E1138  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E113E  5F                        POP EDI
005E113F  5E                        POP ESI
005E1140  5B                        POP EBX
005E1141  8B E5                     MOV ESP,EBP
005E1143  5D                        POP EBP
005E1144  C2 04 00                  RET 0x4
LAB_005e1147:
005E1147  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005E114A  68 B8 DA 7C 00            PUSH 0x7cdab8
005E114F  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E1154  56                        PUSH ESI
005E1155  6A 00                     PUSH 0x0
005E1157  68 AB 01 00 00            PUSH 0x1ab
005E115C  68 94 D9 7C 00            PUSH 0x7cd994
005E1161  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E1166  E8 65 C3 0C 00            CALL 0x006ad4d0
005E116B  83 C4 18                  ADD ESP,0x18
005E116E  85 C0                     TEST EAX,EAX
005E1170  74 01                     JZ 0x005e1173
005E1172  CC                        INT3
LAB_005e1173:
005E1173  68 AB 01 00 00            PUSH 0x1ab
005E1178  68 94 D9 7C 00            PUSH 0x7cd994
005E117D  6A 00                     PUSH 0x0
005E117F  56                        PUSH ESI
005E1180  E8 BB 4C 0C 00            CALL 0x006a5e40
005E1185  5F                        POP EDI
005E1186  5E                        POP ESI
005E1187  5B                        POP EBX
005E1188  8B E5                     MOV ESP,EBP
005E118A  5D                        POP EBP
005E118B  C2 04 00                  RET 0x4
