FUN_006c0fb0:
006C0FB0  55                        PUSH EBP
006C0FB1  8B EC                     MOV EBP,ESP
006C0FB3  83 EC 08                  SUB ESP,0x8
006C0FB6  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C0FBB  53                        PUSH EBX
006C0FBC  56                        PUSH ESI
006C0FBD  57                        PUSH EDI
006C0FBE  85 C0                     TEST EAX,EAX
006C0FC0  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006C0FC7  0F 84 AF 03 00 00         JZ 0x006c137c
006C0FCD  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C0FD0  85 F6                     TEST ESI,ESI
006C0FD2  0F 84 A4 03 00 00         JZ 0x006c137c
006C0FD8  8B 3D 8C BB 85 00         MOV EDI,dword ptr [0x0085bb8c]
006C0FDE  68 98 68 85 00            PUSH 0x856898
006C0FE3  FF D7                     CALL EDI
006C0FE5  8B 5D 30                  MOV EBX,dword ptr [EBP + 0x30]
006C0FE8  85 DB                     TEST EBX,EBX
006C0FEA  7D 02                     JGE 0x006c0fee
006C0FEC  33 DB                     XOR EBX,EBX
LAB_006c0fee:
006C0FEE  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
006C0FF1  85 C0                     TEST EAX,EAX
006C0FF3  7C 05                     JL 0x006c0ffa
006C0FF5  83 F8 20                  CMP EAX,0x20
006C0FF8  7C 07                     JL 0x006c1001
LAB_006c0ffa:
006C0FFA  C7 45 34 1F 00 00 00      MOV dword ptr [EBP + 0x34],0x1f
LAB_006c1001:
006C1001  F6 45 10 02               TEST byte ptr [EBP + 0x10],0x2
006C1005  74 2E                     JZ 0x006c1035
006C1007  33 C9                     XOR ECX,ECX
006C1009  B8 24 50 85 00            MOV EAX,0x855024
LAB_006c100e:
006C100E  F6 40 D4 01               TEST byte ptr [EAX + -0x2c],0x1
006C1012  74 16                     JZ 0x006c102a
006C1014  39 70 F8                  CMP dword ptr [EAX + -0x8],ESI
006C1017  75 11                     JNZ 0x006c102a
006C1019  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C101C  81 E2 FF 00 00 00         AND EDX,0xff
006C1022  39 10                     CMP dword ptr [EAX],EDX
006C1024  0F 84 3B 03 00 00         JZ 0x006c1365
LAB_006c102a:
006C102A  05 C4 00 00 00            ADD EAX,0xc4
006C102F  41                        INC ECX
006C1030  83 F9 20                  CMP ECX,0x20
006C1033  7C D9                     JL 0x006c100e
LAB_006c1035:
006C1035  A1 C0 68 85 00            MOV EAX,[0x008568c0]
006C103A  85 C0                     TEST EAX,EAX
006C103C  75 3F                     JNZ 0x006c107d
006C103E  8D 45 F8                  LEA EAX,[EBP + -0x8]
006C1041  C7 05 C4 68 85 00 00 00 00 00  MOV dword ptr [0x008568c4],0x0
006C104B  50                        PUSH EAX
006C104C  6A 00                     PUSH 0x0
006C104E  6A 00                     PUSH 0x0
006C1050  68 E0 08 6C 00            PUSH 0x6c08e0
006C1055  6A 00                     PUSH 0x0
006C1057  6A 00                     PUSH 0x0
006C1059  FF 15 70 BB 85 00         CALL dword ptr [0x0085bb70]
006C105F  85 C0                     TEST EAX,EAX
006C1061  A3 C0 68 85 00            MOV [0x008568c0],EAX
006C1066  0F 84 B8 02 00 00         JZ 0x006c1324
006C106C  6A 02                     PUSH 0x2
006C106E  50                        PUSH EAX
006C106F  FF 15 74 BB 85 00         CALL dword ptr [0x0085bb74]
006C1075  85 C0                     TEST EAX,EAX
006C1077  0F 84 A7 02 00 00         JZ 0x006c1324
LAB_006c107d:
006C107D  68 80 68 85 00            PUSH 0x856880
006C1082  FF D7                     CALL EDI
006C1084  A1 C4 68 85 00            MOV EAX,[0x008568c4]
006C1089  85 C0                     TEST EAX,EAX
006C108B  74 28                     JZ 0x006c10b5
006C108D  8B 0D C0 68 85 00         MOV ECX,dword ptr [0x008568c0]
006C1093  51                        PUSH ECX
006C1094  FF 15 78 BB 85 00         CALL dword ptr [0x0085bb78]
006C109A  83 F8 FF                  CMP EAX,-0x1
006C109D  0F 84 81 02 00 00         JZ 0x006c1324
006C10A3  A1 C4 68 85 00            MOV EAX,[0x008568c4]
006C10A8  33 D2                     XOR EDX,EDX
006C10AA  85 C0                     TEST EAX,EAX
006C10AC  0F 94 C2                  SETZ DL
006C10AF  89 15 C4 68 85 00         MOV dword ptr [0x008568c4],EDX
LAB_006c10b5:
006C10B5  68 80 68 85 00            PUSH 0x856880
006C10BA  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C10C0  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006C10C3  8D 04 5B                  LEA EAX,[EBX + EBX*0x2]
006C10C6  C1 E0 04                  SHL EAX,0x4
006C10C9  03 C3                     ADD EAX,EBX
006C10CB  33 D2                     XOR EDX,EDX
006C10CD  3B DE                     CMP EBX,ESI
006C10CF  8B CB                     MOV ECX,EBX
006C10D1  8D 3C 85 F8 4F 85 00      LEA EDI,[EAX*0x4 + 0x854ff8]
006C10D8  8B C7                     MOV EAX,EDI
006C10DA  7F 5C                     JG 0x006c1138
LAB_006c10dc:
006C10DC  F6 00 01                  TEST byte ptr [EAX],0x1
006C10DF  75 0C                     JNZ 0x006c10ed
006C10E1  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006C10E4  85 F6                     TEST ESI,ESI
006C10E6  7D 1C                     JGE 0x006c1104
006C10E8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006C10EB  EB 17                     JMP 0x006c1104
LAB_006c10ed:
006C10ED  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C10F0  39 70 24                  CMP dword ptr [EAX + 0x24],ESI
006C10F3  75 0F                     JNZ 0x006c1104
006C10F5  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006C10F8  81 E6 FF 00 00 00         AND ESI,0xff
006C10FE  39 70 2C                  CMP dword ptr [EAX + 0x2c],ESI
006C1101  75 01                     JNZ 0x006c1104
006C1103  42                        INC EDX
LAB_006c1104:
006C1104  8B 75 34                  MOV ESI,dword ptr [EBP + 0x34]
006C1107  05 C4 00 00 00            ADD EAX,0xc4
006C110C  41                        INC ECX
006C110D  3B CE                     CMP ECX,ESI
006C110F  7E CB                     JLE 0x006c10dc
006C1111  83 FA 05                  CMP EDX,0x5
006C1114  0F 8F 4B 02 00 00         JG 0x006c1365
006C111A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C111D  85 C0                     TEST EAX,EAX
006C111F  7C 17                     JL 0x006c1138
006C1121  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C1124  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C1127  C1 E1 04                  SHL ECX,0x4
006C112A  03 C8                     ADD ECX,EAX
006C112C  8D 1C 8D F8 4F 85 00      LEA EBX,[ECX*0x4 + 0x854ff8]
006C1133  E9 4E 01 00 00            JMP 0x006c1286
LAB_006c1138:
006C1138  F6 45 10 08               TEST byte ptr [EBP + 0x10],0x8
006C113C  0F 84 A2 00 00 00         JZ 0x006c11e4
006C1142  8B 3D F4 4F 85 00         MOV EDI,dword ptr [0x00854ff4]
006C1148  85 FF                     TEST EDI,EDI
006C114A  74 24                     JZ 0x006c1170
LAB_006c114c:
006C114C  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
006C114F  85 C0                     TEST EAX,EAX
006C1151  7D 17                     JGE 0x006c116a
006C1153  8B 37                     MOV ESI,dword ptr [EDI]
006C1155  57                        PUSH EDI
006C1156  68 F4 4F 85 00            PUSH 0x854ff4
006C115B  E8 60 87 FF FF            CALL 0x006b98c0
006C1160  57                        PUSH EDI
006C1161  E8 2A 4D FE FF            CALL 0x006a5e90
006C1166  8B FE                     MOV EDI,ESI
006C1168  EB 02                     JMP 0x006c116c
LAB_006c116a:
006C116A  8B 3F                     MOV EDI,dword ptr [EDI]
LAB_006c116c:
006C116C  85 FF                     TEST EDI,EDI
006C116E  75 DC                     JNZ 0x006c114c
LAB_006c1170:
006C1170  6A 3C                     PUSH 0x3c
006C1172  E8 99 9A FE FF            CALL 0x006aac10
006C1177  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C117A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006C117D  81 E1 FF 00 00 00         AND ECX,0xff
006C1183  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006C1186  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C1189  89 48 10                  MOV dword ptr [EAX + 0x10],ECX
006C118C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006C118F  89 50 18                  MOV dword ptr [EAX + 0x18],EDX
006C1192  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C1195  89 48 14                  MOV dword ptr [EAX + 0x14],ECX
006C1198  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C119B  89 50 20                  MOV dword ptr [EAX + 0x20],EDX
006C119E  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C11A1  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
006C11A4  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
006C11A7  89 50 28                  MOV dword ptr [EAX + 0x28],EDX
006C11AA  8B 55 2C                  MOV EDX,dword ptr [EBP + 0x2c]
006C11AD  89 48 24                  MOV dword ptr [EAX + 0x24],ECX
006C11B0  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006C11B3  50                        PUSH EAX
006C11B4  89 48 2C                  MOV dword ptr [EAX + 0x2c],ECX
006C11B7  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006C11BA  68 F4 4F 85 00            PUSH 0x854ff4
006C11BF  89 50 30                  MOV dword ptr [EAX + 0x30],EDX
006C11C2  89 58 34                  MOV dword ptr [EAX + 0x34],EBX
006C11C5  89 48 38                  MOV dword ptr [EAX + 0x38],ECX
006C11C8  E8 43 87 FF FF            CALL 0x006b9910
006C11CD  68 98 68 85 00            PUSH 0x856898
006C11D2  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C11D8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C11DB  5F                        POP EDI
006C11DC  5E                        POP ESI
006C11DD  5B                        POP EBX
006C11DE  8B E5                     MOV ESP,EBP
006C11E0  5D                        POP EBP
006C11E1  C2 30 00                  RET 0x30
LAB_006c11e4:
006C11E4  8A 57 2C                  MOV DL,byte ptr [EDI + 0x2c]
006C11E7  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006C11EA  8D 47 2C                  LEA EAX,[EDI + 0x2c]
006C11ED  8B F3                     MOV ESI,EBX
006C11EF  43                        INC EBX
006C11F0  88 55 30                  MOV byte ptr [EBP + 0x30],DL
006C11F3  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
006C11F6  3B D9                     CMP EBX,ECX
006C11F8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006C11FB  7F 34                     JG 0x006c1231
LAB_006c11fd:
006C11FD  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
006C1200  8B B8 C4 00 00 00         MOV EDI,dword ptr [EAX + 0xc4]
006C1206  05 C4 00 00 00            ADD EAX,0xc4
006C120B  81 E1 FF 00 00 00         AND ECX,0xff
006C1211  3B F9                     CMP EDI,ECX
006C1213  7C 07                     JL 0x006c121c
006C1215  75 12                     JNZ 0x006c1229
006C1217  39 50 DC                  CMP dword ptr [EAX + -0x24],EDX
006C121A  73 0D                     JNC 0x006c1229
LAB_006c121c:
006C121C  8A 08                     MOV CL,byte ptr [EAX]
006C121E  8B 50 DC                  MOV EDX,dword ptr [EAX + -0x24]
006C1221  88 4D 30                  MOV byte ptr [EBP + 0x30],CL
006C1224  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
006C1227  8B F3                     MOV ESI,EBX
LAB_006c1229:
006C1229  8B 4D 34                  MOV ECX,dword ptr [EBP + 0x34]
006C122C  43                        INC EBX
006C122D  3B D9                     CMP EBX,ECX
006C122F  7E CC                     JLE 0x006c11fd
LAB_006c1231:
006C1231  8D 14 76                  LEA EDX,[ESI + ESI*0x2]
006C1234  8A 45 30                  MOV AL,byte ptr [EBP + 0x30]
006C1237  C1 E2 04                  SHL EDX,0x4
006C123A  03 D6                     ADD EDX,ESI
006C123C  8D 1C 95 F8 4F 85 00      LEA EBX,[EDX*0x4 + 0x854ff8]
006C1243  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006C1246  3A D0                     CMP DL,AL
006C1248  0F 86 10 01 00 00         JBE 0x006c135e
006C124E  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C1251  85 C0                     TEST EAX,EAX
006C1253  74 26                     JZ 0x006c127b
006C1255  8B 08                     MOV ECX,dword ptr [EAX]
006C1257  50                        PUSH EAX
006C1258  FF 51 48                  CALL dword ptr [ECX + 0x48]
006C125B  8B 43 10                  MOV EAX,dword ptr [EBX + 0x10]
006C125E  85 C0                     TEST EAX,EAX
006C1260  74 0D                     JZ 0x006c126f
006C1262  8B 10                     MOV EDX,dword ptr [EAX]
006C1264  50                        PUSH EAX
006C1265  FF 52 08                  CALL dword ptr [EDX + 0x8]
006C1268  C7 43 10 00 00 00 00      MOV dword ptr [EBX + 0x10],0x0
LAB_006c126f:
006C126F  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
006C1272  50                        PUSH EAX
006C1273  8B 08                     MOV ECX,dword ptr [EAX]
006C1275  FF 51 08                  CALL dword ptr [ECX + 0x8]
006C1278  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
LAB_006c127b:
006C127B  B9 31 00 00 00            MOV ECX,0x31
006C1280  33 C0                     XOR EAX,EAX
006C1282  8B FB                     MOV EDI,EBX
006C1284  F3 AB                     STOSD.REP ES:EDI
LAB_006c1286:
006C1286  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C1289  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006C128C  81 E2 FF 00 00 00         AND EDX,0xff
006C1292  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C1295  89 53 2C                  MOV dword ptr [EBX + 0x2c],EDX
006C1298  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006C129B  89 53 30                  MOV dword ptr [EBX + 0x30],EDX
006C129E  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C12A1  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
006C12A4  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
006C12A7  89 43 34                  MOV dword ptr [EBX + 0x34],EAX
006C12AA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C12AD  89 53 3C                  MOV dword ptr [EBX + 0x3c],EDX
006C12B0  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006C12B3  89 4B 40                  MOV dword ptr [EBX + 0x40],ECX
006C12B6  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006C12B9  89 73 24                  MOV dword ptr [EBX + 0x24],ESI
006C12BC  89 43 04                  MOV dword ptr [EBX + 0x4],EAX
006C12BF  89 53 44                  MOV dword ptr [EBX + 0x44],EDX
006C12C2  89 4B 48                  MOV dword ptr [EBX + 0x48],ECX
006C12C5  66 8B 0E                  MOV CX,word ptr [ESI]
006C12C8  8D 7B 4C                  LEA EDI,[EBX + 0x4c]
006C12CB  66 49                     DEC CX
006C12CD  66 F7 D9                  NEG CX
006C12D0  1B C9                     SBB ECX,ECX
006C12D2  83 E1 24                  AND ECX,0x24
006C12D5  83 C1 1A                  ADD ECX,0x1a
006C12D8  8B D1                     MOV EDX,ECX
006C12DA  C1 E9 02                  SHR ECX,0x2
006C12DD  F3 A5                     MOVSD.REP ES:EDI,ESI
006C12DF  8B CA                     MOV ECX,EDX
006C12E1  83 E1 03                  AND ECX,0x3
006C12E4  A8 04                     TEST AL,0x4
006C12E6  F3 A4                     MOVSB.REP ES:EDI,ESI
006C12E8  75 1D                     JNZ 0x006c1307
006C12EA  53                        PUSH EBX
006C12EB  E8 00 E9 FF FF            CALL 0x006bfbf0
006C12F0  68 98 68 85 00            PUSH 0x856898
006C12F5  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C12FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C12FE  5F                        POP EDI
006C12FF  5E                        POP ESI
006C1300  5B                        POP EBX
006C1301  8B E5                     MOV ESP,EBP
006C1303  5D                        POP EBP
006C1304  C2 30 00                  RET 0x30
LAB_006c1307:
006C1307  8B 03                     MOV EAX,dword ptr [EBX]
006C1309  68 98 68 85 00            PUSH 0x856898
006C130E  0C 21                     OR AL,0x21
006C1310  89 03                     MOV dword ptr [EBX],EAX
006C1312  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1318  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C131B  5F                        POP EDI
006C131C  5E                        POP ESI
006C131D  5B                        POP EBX
006C131E  8B E5                     MOV ESP,EBP
006C1320  5D                        POP EBP
006C1321  C2 30 00                  RET 0x30
LAB_006c1324:
006C1324  FF 15 CC BB 85 00         CALL dword ptr [0x0085bbcc]
006C132A  8B F0                     MOV ESI,EAX
006C132C  83 FE FC                  CMP ESI,-0x4
006C132F  74 2D                     JZ 0x006c135e
006C1331  68 98 68 85 00            PUSH 0x856898
006C1336  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C133C  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C1341  68 E7 03 00 00            PUSH 0x3e7
006C1346  68 14 DE 7E 00            PUSH 0x7ede14
006C134B  50                        PUSH EAX
006C134C  56                        PUSH ESI
006C134D  E8 EE 4A FE FF            CALL 0x006a5e40
006C1352  5F                        POP EDI
006C1353  5E                        POP ESI
006C1354  83 C8 FF                  OR EAX,0xffffffff
006C1357  5B                        POP EBX
006C1358  8B E5                     MOV ESP,EBP
006C135A  5D                        POP EBP
006C135B  C2 30 00                  RET 0x30
LAB_006c135e:
006C135E  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
LAB_006c1365:
006C1365  68 98 68 85 00            PUSH 0x856898
006C136A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1370  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006C1373  5F                        POP EDI
006C1374  5E                        POP ESI
006C1375  5B                        POP EBX
006C1376  8B E5                     MOV ESP,EBP
006C1378  5D                        POP EBP
006C1379  C2 30 00                  RET 0x30
LAB_006c137c:
006C137C  5F                        POP EDI
006C137D  5E                        POP ESI
006C137E  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1383  5B                        POP EBX
006C1384  8B E5                     MOV ESP,EBP
006C1386  5D                        POP EBP
006C1387  C2 30 00                  RET 0x30
