BldObjPanelTy::GetMessage:
004F1080  55                        PUSH EBP
004F1081  8B EC                     MOV EBP,ESP
004F1083  83 EC 48                  SUB ESP,0x48
004F1086  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F108B  56                        PUSH ESI
004F108C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004F108F  57                        PUSH EDI
004F1090  8D 55 BC                  LEA EDX,[EBP + -0x44]
004F1093  8D 4D B8                  LEA ECX,[EBP + -0x48]
004F1096  6A 00                     PUSH 0x0
004F1098  52                        PUSH EDX
004F1099  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004F109C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F10A2  E8 49 C7 23 00            CALL 0x0072d7f0
004F10A7  8B F0                     MOV ESI,EAX
004F10A9  83 C4 08                  ADD ESP,0x8
004F10AC  85 F6                     TEST ESI,ESI
004F10AE  0F 85 BF 01 00 00         JNZ 0x004f1273
004F10B4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004F10B7  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004F10BA  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004F10BD  83 E8 02                  SUB EAX,0x2
004F10C0  75 07                     JNZ 0x004f10c9
004F10C2  8B CE                     MOV ECX,ESI
004F10C4  E8 DD 21 F1 FF            CALL 0x004032a6
LAB_004f10c9:
004F10C9  57                        PUSH EDI
004F10CA  8B CE                     MOV ECX,ESI
004F10CC  E8 03 49 F1 FF            CALL 0x004059d4
004F10D1  8B 47 10                  MOV EAX,dword ptr [EDI + 0x10]
004F10D4  3D 06 B2 00 00            CMP EAX,0xb206
004F10D9  0F 87 AD 00 00 00         JA 0x004f118c
004F10DF  0F 84 87 00 00 00         JZ 0x004f116c
004F10E5  83 E8 02                  SUB EAX,0x2
004F10E8  74 68                     JZ 0x004f1152
004F10EA  48                        DEC EAX
004F10EB  74 4B                     JZ 0x004f1138
004F10ED  2D 02 B2 00 00            SUB EAX,0xb202
004F10F2  0F 85 68 01 00 00         JNZ 0x004f1260
004F10F8  8A 86 78 02 00 00         MOV AL,byte ptr [ESI + 0x278]
004F10FE  68 AE 00 00 00            PUSH 0xae
004F1103  88 86 79 02 00 00         MOV byte ptr [ESI + 0x279],AL
004F1109  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004F110C  8A 11                     MOV DL,byte ptr [ECX]
004F110E  FE CA                     DEC DL
004F1110  88 96 78 02 00 00         MOV byte ptr [ESI + 0x278],DL
004F1116  E8 14 4D F1 FF            CALL 0x00405e2f
004F111B  8B 06                     MOV EAX,dword ptr [ESI]
004F111D  83 C4 04                  ADD ESP,0x4
004F1120  8B CE                     MOV ECX,ESI
004F1122  FF 50 1C                  CALL dword ptr [EAX + 0x1c]
004F1125  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F1128  33 C0                     XOR EAX,EAX
004F112A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F1130  5F                        POP EDI
004F1131  5E                        POP ESI
004F1132  8B E5                     MOV ESP,EBP
004F1134  5D                        POP EBP
004F1135  C2 04 00                  RET 0x4
LAB_004f1138:
004F1138  8B CE                     MOV ECX,ESI
004F113A  E8 EA 2F F1 FF            CALL 0x00404129
004F113F  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F1142  33 C0                     XOR EAX,EAX
004F1144  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F114A  5F                        POP EDI
004F114B  5E                        POP ESI
004F114C  8B E5                     MOV ESP,EBP
004F114E  5D                        POP EBP
004F114F  C2 04 00                  RET 0x4
LAB_004f1152:
004F1152  8B CE                     MOV ECX,ESI
004F1154  E8 91 0A F1 FF            CALL 0x00401bea
004F1159  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F115C  33 C0                     XOR EAX,EAX
004F115E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F1164  5F                        POP EDI
004F1165  5E                        POP ESI
004F1166  8B E5                     MOV ESP,EBP
004F1168  5D                        POP EBP
004F1169  C2 04 00                  RET 0x4
LAB_004f116c:
004F116C  68 A4 1B 40 00            PUSH 0x401ba4
004F1171  57                        PUSH EDI
004F1172  8B CE                     MOV ECX,ESI
004F1174  E8 6B 0B F1 FF            CALL 0x00401ce4
004F1179  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F117C  33 C0                     XOR EAX,EAX
004F117E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F1184  5F                        POP EDI
004F1185  5E                        POP ESI
004F1186  8B E5                     MOV ESP,EBP
004F1188  5D                        POP EBP
004F1189  C2 04 00                  RET 0x4
LAB_004f118c:
004F118C  8D 88 61 3F FF FF         LEA ECX,[EAX + 0xffff3f61]
004F1192  83 F9 14                  CMP ECX,0x14
004F1195  0F 87 C5 00 00 00         JA 0x004f1260
004F119B  33 D2                     XOR EDX,EDX
004F119D  8A 91 D0 12 4F 00         MOV DL,byte ptr [ECX + 0x4f12d0]
switchD_004f11a3::switchD:
004F11A3  FF 24 95 C0 12 4F 00      JMP dword ptr [EDX*0x4 + 0x4f12c0]
switchD_004f11a3::caseD_c09f:
004F11AA  33 C9                     XOR ECX,ECX
004F11AC  8A 8E 78 02 00 00         MOV CL,byte ptr [ESI + 0x278]
004F11B2  8B 8C 8E 7E 02 00 00      MOV ECX,dword ptr [ESI + ECX*0x4 + 0x27e]
004F11B9  85 C9                     TEST ECX,ECX
004F11BB  74 25                     JZ 0x004f11e2
004F11BD  8B 96 99 01 00 00         MOV EDX,dword ptr [ESI + 0x199]
004F11C3  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004F11C6  03 C2                     ADD EAX,EDX
004F11C8  8D 90 61 3F FF FF         LEA EDX,[EAX + 0xffff3f61]
004F11CE  3B D7                     CMP EDX,EDI
004F11D0  73 10                     JNC 0x004f11e2
004F11D2  05 61 3F FF FF            ADD EAX,0xffff3f61
004F11D7  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
004F11DA  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
004F11DE  03 C2                     ADD EAX,EDX
004F11E0  EB 02                     JMP 0x004f11e4
LAB_004f11e2:
004F11E2  33 C0                     XOR EAX,EAX
LAB_004f11e4:
004F11E4  85 C0                     TEST EAX,EAX
004F11E6  74 78                     JZ 0x004f1260
004F11E8  8A 48 08                  MOV CL,byte ptr [EAX + 0x8]
004F11EB  84 C9                     TEST CL,CL
004F11ED  74 71                     JZ 0x004f1260
004F11EF  8B 00                     MOV EAX,dword ptr [EAX]
004F11F1  8B 0D 30 2A 80 00         MOV ECX,dword ptr [0x00802a30]
004F11F7  50                        PUSH EAX
004F11F8  6A 0E                     PUSH 0xe
004F11FA  E8 AE 23 F1 FF            CALL 0x004035ad
004F11FF  6A 00                     PUSH 0x0
004F1201  8B CE                     MOV ECX,ESI
004F1203  E8 6B 08 F1 FF            CALL 0x00401a73
004F1208  68 AE 00 00 00            PUSH 0xae
004F120D  E8 1D 4C F1 FF            CALL 0x00405e2f
004F1212  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F1215  83 C4 04                  ADD ESP,0x4
004F1218  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F121E  33 C0                     XOR EAX,EAX
004F1220  5F                        POP EDI
004F1221  5E                        POP ESI
004F1222  8B E5                     MOV ESP,EBP
004F1224  5D                        POP EBP
004F1225  C2 04 00                  RET 0x4
switchD_004f11a3::caseD_c0a4:
004F1228  8B 4F 14                  MOV ECX,dword ptr [EDI + 0x14]
004F122B  89 8E 99 01 00 00         MOV dword ptr [ESI + 0x199],ECX
004F1231  8B CE                     MOV ECX,ESI
004F1233  E8 42 1A F1 FF            CALL 0x00402c7a
004F1238  68 AE 00 00 00            PUSH 0xae
004F123D  E8 ED 4B F1 FF            CALL 0x00405e2f
004F1242  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F1245  83 C4 04                  ADD ESP,0x4
004F1248  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F124E  33 C0                     XOR EAX,EAX
004F1250  5F                        POP EDI
004F1251  5E                        POP ESI
004F1252  8B E5                     MOV ESP,EBP
004F1254  5D                        POP EBP
004F1255  C2 04 00                  RET 0x4
switchD_004f11a3::caseD_c0af:
004F1258  57                        PUSH EDI
004F1259  8B CE                     MOV ECX,ESI
004F125B  E8 BD 30 F1 FF            CALL 0x0040431d
switchD_004f11a3::caseD_c0a5:
004F1260  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
004F1263  33 C0                     XOR EAX,EAX
004F1265  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F126B  5F                        POP EDI
004F126C  5E                        POP ESI
004F126D  8B E5                     MOV ESP,EBP
004F126F  5D                        POP EBP
004F1270  C2 04 00                  RET 0x4
LAB_004f1273:
004F1273  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004F1276  68 2C 1A 7C 00            PUSH 0x7c1a2c
004F127B  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F1280  56                        PUSH ESI
004F1281  6A 00                     PUSH 0x0
004F1283  68 CA 00 00 00            PUSH 0xca
004F1288  68 84 19 7C 00            PUSH 0x7c1984
004F128D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004F1292  E8 39 C2 1B 00            CALL 0x006ad4d0
004F1297  83 C4 18                  ADD ESP,0x18
004F129A  85 C0                     TEST EAX,EAX
004F129C  74 01                     JZ 0x004f129f
004F129E  CC                        INT3
LAB_004f129f:
004F129F  68 CA 00 00 00            PUSH 0xca
004F12A4  68 84 19 7C 00            PUSH 0x7c1984
004F12A9  6A 00                     PUSH 0x0
004F12AB  56                        PUSH ESI
004F12AC  E8 8F 4B 1B 00            CALL 0x006a5e40
004F12B1  5F                        POP EDI
004F12B2  B8 FF FF 00 00            MOV EAX,0xffff
004F12B7  5E                        POP ESI
004F12B8  8B E5                     MOV ESP,EBP
004F12BA  5D                        POP EBP
004F12BB  C2 04 00                  RET 0x4
