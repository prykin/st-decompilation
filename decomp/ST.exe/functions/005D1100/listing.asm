SettMapMTy::AddPlayerList:
005D1100  55                        PUSH EBP
005D1101  8B EC                     MOV EBP,ESP
005D1103  83 EC 48                  SUB ESP,0x48
005D1106  8B 81 84 1F 00 00         MOV EAX,dword ptr [ECX + 0x1f84]
005D110C  53                        PUSH EBX
005D110D  56                        PUSH ESI
005D110E  57                        PUSH EDI
005D110F  85 C0                     TEST EAX,EAX
005D1111  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005D1114  0F 84 D5 01 00 00         JZ 0x005d12ef
005D111A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005D111F  8D 55 BC                  LEA EDX,[EBP + -0x44]
005D1122  8D 4D B8                  LEA ECX,[EBP + -0x48]
005D1125  6A 00                     PUSH 0x0
005D1127  52                        PUSH EDX
005D1128  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005D112B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D1131  E8 BA C6 15 00            CALL 0x0072d7f0
005D1136  8B F0                     MOV ESI,EAX
005D1138  83 C4 08                  ADD ESP,0x8
005D113B  85 F6                     TEST ESI,ESI
005D113D  0F 85 6D 01 00 00         JNZ 0x005d12b0
005D1143  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
005D1146  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005D1149  8B 8F 84 1F 00 00         MOV ECX,dword ptr [EDI + 0x1f84]
005D114F  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
005D1152  73 0D                     JNC 0x005d1161
005D1154  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
005D1157  8B 71 1C                  MOV ESI,dword ptr [ECX + 0x1c]
005D115A  0F AF C2                  IMUL EAX,EDX
005D115D  03 C6                     ADD EAX,ESI
005D115F  EB 02                     JMP 0x005d1163
LAB_005d1161:
005D1161  33 C0                     XOR EAX,EAX
LAB_005d1163:
005D1163  85 C0                     TEST EAX,EAX
005D1165  74 46                     JZ 0x005d11ad
005D1167  8A 48 04                  MOV CL,byte ptr [EAX + 0x4]
005D116A  80 F9 01                  CMP CL,0x1
005D116D  74 24                     JZ 0x005d1193
005D116F  76 3C                     JBE 0x005d11ad
005D1171  80 F9 03                  CMP CL,0x3
005D1174  77 37                     JA 0x005d11ad
005D1176  8D 72 01                  LEA ESI,[EDX + 0x1]
005D1179  8B CF                     MOV ECX,EDI
005D117B  56                        PUSH ESI
005D117C  50                        PUSH EAX
005D117D  E8 4E 06 E3 FF            CALL 0x004017d0
005D1182  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005D1185  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
005D1188  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005D118B  50                        PUSH EAX
005D118C  6A 00                     PUSH 0x0
005D118E  51                        PUSH ECX
005D118F  56                        PUSH ESI
005D1190  52                        PUSH EDX
005D1191  EB 13                     JMP 0x005d11a6
LAB_005d1193:
005D1193  83 7D 10 02               CMP dword ptr [EBP + 0x10],0x2
005D1197  75 14                     JNZ 0x005d11ad
005D1199  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
005D119C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005D119F  50                        PUSH EAX
005D11A0  6A 00                     PUSH 0x0
005D11A2  6A 02                     PUSH 0x2
005D11A4  52                        PUSH EDX
005D11A5  51                        PUSH ECX
LAB_005d11a6:
005D11A6  8B CF                     MOV ECX,EDI
005D11A8  E8 2E 0A E3 FF            CALL 0x00401bdb
LAB_005d11ad:
005D11AD  A0 7E 87 80 00            MOV AL,[0x0080877e]
005D11B2  84 C0                     TEST AL,AL
005D11B4  0F 84 E4 00 00 00         JZ 0x005d129e
005D11BA  80 BF 26 1E 00 00 0C      CMP byte ptr [EDI + 0x1e26],0xc
005D11C1  0F 85 D7 00 00 00         JNZ 0x005d129e
005D11C7  8B B7 84 1F 00 00         MOV ESI,dword ptr [EDI + 0x1f84]
005D11CD  33 C9                     XOR ECX,ECX
005D11CF  BA 01 00 00 00            MOV EDX,0x1
005D11D4  8B 7E 0C                  MOV EDI,dword ptr [ESI + 0xc]
005D11D7  85 FF                     TEST EDI,EDI
005D11D9  76 43                     JBE 0x005d121e
005D11DB  3B CF                     CMP ECX,EDI
005D11DD  73 0D                     JNC 0x005d11ec
LAB_005d11df:
005D11DF  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D11E2  8B 5E 1C                  MOV EBX,dword ptr [ESI + 0x1c]
005D11E5  0F AF C1                  IMUL EAX,ECX
005D11E8  03 C3                     ADD EAX,EBX
005D11EA  EB 02                     JMP 0x005d11ee
LAB_005d11ec:
005D11EC  33 C0                     XOR EAX,EAX
LAB_005d11ee:
005D11EE  85 C0                     TEST EAX,EAX
005D11F0  74 23                     JZ 0x005d1215
005D11F2  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
005D11F8  3A 58 02                  CMP BL,byte ptr [EAX + 0x2]
005D11FB  75 18                     JNZ 0x005d1215
005D11FD  8A 1D 4E 87 80 00         MOV BL,byte ptr [0x0080874e]
005D1203  3A 58 03                  CMP BL,byte ptr [EAX + 0x3]
005D1206  75 0D                     JNZ 0x005d1215
005D1208  8B 40 06                  MOV EAX,dword ptr [EAX + 0x6]
005D120B  8B 1D 7F 87 80 00         MOV EBX,dword ptr [0x0080877f]
005D1211  3B C3                     CMP EAX,EBX
005D1213  74 07                     JZ 0x005d121c
LAB_005d1215:
005D1215  41                        INC ECX
005D1216  3B CF                     CMP ECX,EDI
005D1218  72 C5                     JC 0x005d11df
005D121A  EB 02                     JMP 0x005d121e
LAB_005d121c:
005D121C  33 D2                     XOR EDX,EDX
LAB_005d121e:
005D121E  85 D2                     TEST EDX,EDX
005D1220  74 7C                     JZ 0x005d129e
005D1222  33 C9                     XOR ECX,ECX
005D1224  85 FF                     TEST EDI,EDI
005D1226  76 76                     JBE 0x005d129e
005D1228  8A 15 4E 87 80 00         MOV DL,byte ptr [0x0080874e]
005D122E  8A 1D 4D 87 80 00         MOV BL,byte ptr [0x0080874d]
005D1234  3B CF                     CMP ECX,EDI
005D1236  73 0B                     JNC 0x005d1243
LAB_005d1238:
005D1238  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005D123B  0F AF C1                  IMUL EAX,ECX
005D123E  03 46 1C                  ADD EAX,dword ptr [ESI + 0x1c]
005D1241  EB 02                     JMP 0x005d1245
LAB_005d1243:
005D1243  33 C0                     XOR EAX,EAX
LAB_005d1245:
005D1245  85 C0                     TEST EAX,EAX
005D1247  74 0A                     JZ 0x005d1253
005D1249  3A 58 02                  CMP BL,byte ptr [EAX + 0x2]
005D124C  75 05                     JNZ 0x005d1253
005D124E  3A 50 03                  CMP DL,byte ptr [EAX + 0x3]
005D1251  74 17                     JZ 0x005d126a
LAB_005d1253:
005D1253  41                        INC ECX
005D1254  3B CF                     CMP ECX,EDI
005D1256  72 E0                     JC 0x005d1238
005D1258  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D125B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D1261  5F                        POP EDI
005D1262  5E                        POP ESI
005D1263  5B                        POP EBX
005D1264  8B E5                     MOV ESP,EBP
005D1266  5D                        POP EBP
005D1267  C2 10 00                  RET 0x10
LAB_005d126a:
005D126A  A0 A0 67 80 00            MOV AL,[0x008067a0]
005D126F  84 C0                     TEST AL,AL
005D1271  B8 1D 7E 80 00            MOV EAX,0x807e1d
005D1276  75 05                     JNZ 0x005d127d
005D1278  B8 DD 7D 80 00            MOV EAX,0x807ddd
LAB_005d127d:
005D127D  8A 1D 4F 87 80 00         MOV BL,byte ptr [0x0080874f]
005D1283  33 D2                     XOR EDX,EDX
005D1285  84 DB                     TEST BL,BL
005D1287  0F 95 C2                  SETNZ DL
005D128A  83 C2 02                  ADD EDX,0x2
005D128D  50                        PUSH EAX
005D128E  A1 7F 87 80 00            MOV EAX,[0x0080877f]
005D1293  52                        PUSH EDX
005D1294  51                        PUSH ECX
005D1295  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005D1298  50                        PUSH EAX
005D1299  E8 09 01 E3 FF            CALL 0x004013a7
LAB_005d129e:
005D129E  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005D12A1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005D12A7  5F                        POP EDI
005D12A8  5E                        POP ESI
005D12A9  5B                        POP EBX
005D12AA  8B E5                     MOV ESP,EBP
005D12AC  5D                        POP EBP
005D12AD  C2 10 00                  RET 0x10
LAB_005d12b0:
005D12B0  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005D12B3  68 C4 D4 7C 00            PUSH 0x7cd4c4
005D12B8  68 CC 4C 7A 00            PUSH 0x7a4ccc
005D12BD  56                        PUSH ESI
005D12BE  6A 00                     PUSH 0x0
005D12C0  68 2F 06 00 00            PUSH 0x62f
005D12C5  68 58 D2 7C 00            PUSH 0x7cd258
005D12CA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005D12D0  E8 FB C1 0D 00            CALL 0x006ad4d0
005D12D5  83 C4 18                  ADD ESP,0x18
005D12D8  85 C0                     TEST EAX,EAX
005D12DA  74 01                     JZ 0x005d12dd
005D12DC  CC                        INT3
LAB_005d12dd:
005D12DD  68 2F 06 00 00            PUSH 0x62f
005D12E2  68 58 D2 7C 00            PUSH 0x7cd258
005D12E7  6A 00                     PUSH 0x0
005D12E9  56                        PUSH ESI
005D12EA  E8 51 4B 0D 00            CALL 0x006a5e40
LAB_005d12ef:
005D12EF  5F                        POP EDI
005D12F0  5E                        POP ESI
005D12F1  5B                        POP EBX
005D12F2  8B E5                     MOV ESP,EBP
005D12F4  5D                        POP EBP
005D12F5  C2 10 00                  RET 0x10
