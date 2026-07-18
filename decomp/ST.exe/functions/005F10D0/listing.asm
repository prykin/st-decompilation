STManBasisC::GetMessage:
005F10D0  55                        PUSH EBP
005F10D1  8B EC                     MOV EBP,ESP
005F10D3  83 EC 54                  SUB ESP,0x54
005F10D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005F10DB  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005F10DE  56                        PUSH ESI
005F10DF  8D 55 B0                  LEA EDX,[EBP + -0x50]
005F10E2  8D 4D AC                  LEA ECX,[EBP + -0x54]
005F10E5  6A 00                     PUSH 0x0
005F10E7  52                        PUSH EDX
005F10E8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
005F10EF  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
005F10F2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F10F8  E8 F3 C6 13 00            CALL 0x0072d7f0
005F10FD  8B F0                     MOV ESI,EAX
005F10FF  83 C4 08                  ADD ESP,0x8
005F1102  85 F6                     TEST ESI,ESI
005F1104  0F 85 4C 01 00 00         JNZ 0x005f1256
005F110A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005F110D  8B 40 10                  MOV EAX,dword ptr [EAX + 0x10]
005F1110  83 F8 03                  CMP EAX,0x3
005F1113  0F 87 F3 00 00 00         JA 0x005f120c
005F1119  0F 84 D3 00 00 00         JZ 0x005f11f2
005F111F  2B C6                     SUB EAX,ESI
005F1121  0F 84 B1 00 00 00         JZ 0x005f11d8
005F1127  83 E8 02                  SUB EAX,0x2
005F112A  0F 85 14 01 00 00         JNZ 0x005f1244
005F1130  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005F1133  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
005F1136  0F AF 0D 54 87 80 00      IMUL ECX,dword ptr [0x00808754]
005F113D  89 4E 1C                  MOV dword ptr [ESI + 0x1c],ECX
005F1140  A1 54 67 80 00            MOV EAX,[0x00806754]
005F1145  85 C0                     TEST EAX,EAX
005F1147  74 19                     JZ 0x005f1162
005F1149  8B 15 7C C5 79 00         MOV EDX,dword ptr [0x0079c57c]
005F114F  6A 00                     PUSH 0x0
005F1151  6A 00                     PUSH 0x0
005F1153  52                        PUSH EDX
005F1154  50                        PUSH EAX
005F1155  E8 36 1C 10 00            CALL 0x006f2d90
005F115A  83 C4 10                  ADD ESP,0x10
005F115D  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005F1160  EB 03                     JMP 0x005f1165
LAB_005f1162:
005F1162  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_005f1165:
005F1165  85 C0                     TEST EAX,EAX
005F1167  75 17                     JNZ 0x005f1180
005F1169  B9 01 00 00 00            MOV ECX,0x1
005F116E  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
005F1171  C7 46 24 FF 00 00 00      MOV dword ptr [ESI + 0x24],0xff
005F1178  89 4E 28                  MOV dword ptr [ESI + 0x28],ECX
005F117B  89 4E 2C                  MOV dword ptr [ESI + 0x2c],ECX
005F117E  EB 27                     JMP 0x005f11a7
LAB_005f1180:
005F1180  83 78 0C 02               CMP dword ptr [EAX + 0xc],0x2
005F1184  75 17                     JNZ 0x005f119d
005F1186  50                        PUSH EAX
005F1187  8B CE                     MOV ECX,ESI
005F1189  E8 20 2D E1 FF            CALL 0x00403eae
005F118E  8B 46 44                  MOV EAX,dword ptr [ESI + 0x44]
005F1191  8B CE                     MOV ECX,ESI
005F1193  89 46 1C                  MOV dword ptr [ESI + 0x1c],EAX
005F1196  E8 C1 3D E1 FF            CALL 0x00404f5c
005F119B  EB 07                     JMP 0x005f11a4
LAB_005f119d:
005F119D  8B CE                     MOV ECX,ESI
005F119F  E8 05 05 E1 FF            CALL 0x004016a9
LAB_005f11a4:
005F11A4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_005f11a7:
005F11A7  85 C0                     TEST EAX,EAX
005F11A9  0F 84 95 00 00 00         JZ 0x005f1244
005F11AF  8B 0D 54 67 80 00         MOV ECX,dword ptr [0x00806754]
005F11B5  85 C9                     TEST ECX,ECX
005F11B7  0F 84 87 00 00 00         JZ 0x005f1244
005F11BD  8D 55 FC                  LEA EDX,[EBP + -0x4]
005F11C0  52                        PUSH EDX
005F11C1  E8 1A 0F 10 00            CALL 0x006f20e0
005F11C6  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F11C9  33 C0                     XOR EAX,EAX
005F11CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F11D1  5E                        POP ESI
005F11D2  8B E5                     MOV ESP,EBP
005F11D4  5D                        POP EBP
005F11D5  C2 04 00                  RET 0x4
LAB_005f11d8:
005F11D8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F11DB  E8 7D 23 E1 FF            CALL 0x0040355d
005F11E0  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F11E3  33 C0                     XOR EAX,EAX
005F11E5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F11EB  5E                        POP ESI
005F11EC  8B E5                     MOV ESP,EBP
005F11EE  5D                        POP EBP
005F11EF  C2 04 00                  RET 0x4
LAB_005f11f2:
005F11F2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F11F5  E8 C2 37 E1 FF            CALL 0x004049bc
005F11FA  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F11FD  33 C0                     XOR EAX,EAX
005F11FF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F1205  5E                        POP ESI
005F1206  8B E5                     MOV ESP,EBP
005F1208  5D                        POP EBP
005F1209  C2 04 00                  RET 0x4
LAB_005f120c:
005F120C  3D 0F 01 00 00            CMP EAX,0x10f
005F1211  75 31                     JNZ 0x005f1244
005F1213  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005F1216  8D 45 F4                  LEA EAX,[EBP + -0xc]
005F1219  50                        PUSH EAX
005F121A  E8 B6 1E E1 FF            CALL 0x004030d5
005F121F  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005F1222  8B 15 7C C5 79 00         MOV EDX,dword ptr [0x0079c57c]
005F1228  6A 0C                     PUSH 0xc
005F122A  51                        PUSH ECX
005F122B  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
005F1231  50                        PUSH EAX
005F1232  52                        PUSH EDX
005F1233  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
005F1236  E8 3D FE E0 FF            CALL 0x00401078
005F123B  8D 45 F0                  LEA EAX,[EBP + -0x10]
005F123E  50                        PUSH EAX
005F123F  E8 1C 9E 0B 00            CALL 0x006ab060
LAB_005f1244:
005F1244  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
005F1247  33 C0                     XOR EAX,EAX
005F1249  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005F124F  5E                        POP ESI
005F1250  8B E5                     MOV ESP,EBP
005F1252  5D                        POP EBP
005F1253  C2 04 00                  RET 0x4
LAB_005f1256:
005F1256  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
005F1259  68 84 E5 7C 00            PUSH 0x7ce584
005F125E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005F1263  56                        PUSH ESI
005F1264  6A 00                     PUSH 0x0
005F1266  6A 5B                     PUSH 0x5b
005F1268  68 60 E5 7C 00            PUSH 0x7ce560
005F126D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005F1273  E8 58 C2 0B 00            CALL 0x006ad4d0
005F1278  83 C4 18                  ADD ESP,0x18
005F127B  85 C0                     TEST EAX,EAX
005F127D  74 01                     JZ 0x005f1280
005F127F  CC                        INT3
LAB_005f1280:
005F1280  6A 5D                     PUSH 0x5d
005F1282  68 60 E5 7C 00            PUSH 0x7ce560
005F1287  6A 00                     PUSH 0x0
005F1289  56                        PUSH ESI
005F128A  E8 B1 4B 0B 00            CALL 0x006a5e40
005F128F  B8 FF FF 00 00            MOV EAX,0xffff
005F1294  5E                        POP ESI
005F1295  8B E5                     MOV ESP,EBP
005F1297  5D                        POP EBP
005F1298  C2 04 00                  RET 0x4
