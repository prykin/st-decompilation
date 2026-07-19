STGroupBoatC::RechargeNewCmd:
004A0FA0  55                        PUSH EBP
004A0FA1  8B EC                     MOV EBP,ESP
004A0FA3  81 EC 98 01 00 00         SUB ESP,0x198
004A0FA9  8B 41 2D                  MOV EAX,dword ptr [ECX + 0x2d]
004A0FAC  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
004A0FB2  53                        PUSH EBX
004A0FB3  89 8D AC FE FF FF         MOV dword ptr [EBP + 0xfffffeac],ECX
004A0FB9  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A0FBC  56                        PUSH ESI
004A0FBD  57                        PUSH EDI
004A0FBE  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
004A0FC1  33 FF                     XOR EDI,EDI
004A0FC3  8D 8D 6C FE FF FF         LEA ECX,[EBP + 0xfffffe6c]
004A0FC9  8D 85 68 FE FF FF         LEA EAX,[EBP + 0xfffffe68]
004A0FCF  57                        PUSH EDI
004A0FD0  51                        PUSH ECX
004A0FD1  C7 85 1C FF FF FF FF FF FF FF  MOV dword ptr [EBP + 0xffffff1c],0xffffffff
004A0FDB  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
004A0FDE  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
004A0FE1  89 95 68 FE FF FF         MOV dword ptr [EBP + 0xfffffe68],EDX
004A0FE7  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A0FEC  E8 FF C7 28 00            CALL 0x0072d7f0
004A0FF1  8B F0                     MOV ESI,EAX
004A0FF3  83 C4 08                  ADD ESP,0x8
004A0FF6  3B F7                     CMP ESI,EDI
004A0FF8  0F 85 8C 1C 00 00         JNZ 0x004a2c8a
004A0FFE  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
004A1001  8B B5 AC FE FF FF         MOV ESI,dword ptr [EBP + 0xfffffeac]
004A1007  8B DF                     MOV EBX,EDI
004A1009  4F                        DEC EDI
004A100A  85 FF                     TEST EDI,EDI
004A100C  7C 3B                     JL 0x004a1049
LAB_004a100e:
004A100E  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1011  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A1014  52                        PUSH EDX
004A1015  8B D7                     MOV EDX,EDI
004A1017  E8 54 BC 20 00            CALL 0x006acc70
004A101C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A101F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1022  6A 01                     PUSH 0x1
004A1024  50                        PUSH EAX
004A1025  51                        PUSH ECX
004A1026  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A102C  E8 89 18 F6 FF            CALL 0x004028ba
004A1031  85 C0                     TEST EAX,EAX
004A1033  74 06                     JZ 0x004a103b
004A1035  83 78 20 14               CMP dword ptr [EAX + 0x20],0x14
004A1039  74 0B                     JZ 0x004a1046
LAB_004a103b:
004A103B  8B 56 2D                  MOV EDX,dword ptr [ESI + 0x2d]
004A103E  57                        PUSH EDI
004A103F  52                        PUSH EDX
004A1040  E8 2B FC 20 00            CALL 0x006b0c70
004A1045  4B                        DEC EBX
LAB_004a1046:
004A1046  4F                        DEC EDI
004A1047  79 C5                     JNS 0x004a100e
LAB_004a1049:
004A1049  85 DB                     TEST EBX,EBX
004A104B  75 1A                     JNZ 0x004a1067
004A104D  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A1052  68 F7 0D 00 00            PUSH 0xdf7
004A1057  68 3C BE 7A 00            PUSH 0x7abe3c
004A105C  50                        PUSH EAX
004A105D  68 09 00 FE AF            PUSH 0xaffe0009
004A1062  E8 D9 4D 20 00            CALL 0x006a5e40
LAB_004a1067:
004A1067  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
004A106A  8B 8E E6 01 00 00         MOV ECX,dword ptr [ESI + 0x1e6]
004A1070  83 F9 01                  CMP ECX,0x1
004A1073  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A1076  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
004A1079  0F 85 A0 00 00 00         JNZ 0x004a111f
004A107F  8B 8E 0E 03 00 00         MOV ECX,dword ptr [ESI + 0x30e]
004A1085  8B 56 45                  MOV EDX,dword ptr [ESI + 0x45]
004A1088  51                        PUSH ECX
004A1089  8B 4E 41                  MOV ECX,dword ptr [ESI + 0x41]
004A108C  52                        PUSH EDX
004A108D  8B 56 3D                  MOV EDX,dword ptr [ESI + 0x3d]
004A1090  51                        PUSH ECX
004A1091  52                        PUSH EDX
004A1092  50                        PUSH EAX
004A1093  8B CE                     MOV ECX,ESI
004A1095  E8 E1 4C F6 FF            CALL 0x00405d7b
004A109A  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A109F  33 D2                     XOR EDX,EDX
004A10A1  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A10A4  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A10AA  83 C8 FF                  OR EAX,0xffffffff
004A10AD  3B DA                     CMP EBX,EDX
004A10AF  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
004A10B2  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
004A10B6  66 89 45 C6               MOV word ptr [EBP + -0x3a],AX
004A10BA  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
004A10BE  76 5F                     JBE 0x004a111f
LAB_004a10c0:
004A10C0  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A10C3  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A10C6  50                        PUSH EAX
004A10C7  E8 A4 BB 20 00            CALL 0x006acc70
004A10CC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A10CF  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A10D2  6A 01                     PUSH 0x1
004A10D4  51                        PUSH ECX
004A10D5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A10DB  52                        PUSH EDX
004A10DC  E8 D9 17 F6 FF            CALL 0x004028ba
004A10E1  8B F8                     MOV EDI,EAX
004A10E3  85 FF                     TEST EDI,EDI
004A10E5  75 1A                     JNZ 0x004a1101
004A10E7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A10EC  68 03 0E 00 00            PUSH 0xe03
004A10F1  68 3C BE 7A 00            PUSH 0x7abe3c
004A10F6  50                        PUSH EAX
004A10F7  68 04 00 FE AF            PUSH 0xaffe0004
004A10FC  E8 3F 4D 20 00            CALL 0x006a5e40
LAB_004a1101:
004A1101  8D 4D C0                  LEA ECX,[EBP + -0x40]
004A1104  51                        PUSH ECX
004A1105  6A 01                     PUSH 0x1
004A1107  8B CF                     MOV ECX,EDI
004A1109  E8 18 10 F6 FF            CALL 0x00402126
004A110E  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A1111  42                        INC EDX
004A1112  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A1115  81 E2 FF FF 00 00         AND EDX,0xffff
004A111B  3B D3                     CMP EDX,EBX
004A111D  72 A1                     JC 0x004a10c0
LAB_004a111f:
004A111F  83 BE E6 01 00 00 03      CMP dword ptr [ESI + 0x1e6],0x3
004A1126  75 7C                     JNZ 0x004a11a4
004A1128  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A112E  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004A1135  85 DB                     TEST EBX,EBX
004A1137  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A113D  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A1140  76 62                     JBE 0x004a11a4
004A1142  33 D2                     XOR EDX,EDX
LAB_004a1144:
004A1144  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1147  51                        PUSH ECX
004A1148  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A114B  E8 20 BB 20 00            CALL 0x006acc70
004A1150  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A1153  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A1156  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A115C  6A 01                     PUSH 0x1
004A115E  52                        PUSH EDX
004A115F  50                        PUSH EAX
004A1160  E8 55 17 F6 FF            CALL 0x004028ba
004A1165  8B F8                     MOV EDI,EAX
004A1167  85 FF                     TEST EDI,EDI
004A1169  75 1B                     JNZ 0x004a1186
004A116B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A1171  68 46 0E 00 00            PUSH 0xe46
004A1176  68 3C BE 7A 00            PUSH 0x7abe3c
004A117B  51                        PUSH ECX
004A117C  68 04 00 FE AF            PUSH 0xaffe0004
004A1181  E8 BA 4C 20 00            CALL 0x006a5e40
LAB_004a1186:
004A1186  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A1189  8B CF                     MOV ECX,EDI
004A118B  52                        PUSH EDX
004A118C  6A 03                     PUSH 0x3
004A118E  E8 93 0F F6 FF            CALL 0x00402126
004A1193  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A1196  42                        INC EDX
004A1197  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A119A  81 E2 FF FF 00 00         AND EDX,0xffff
004A11A0  3B D3                     CMP EDX,EBX
004A11A2  72 A0                     JC 0x004a1144
LAB_004a11a4:
004A11A4  83 BE E6 01 00 00 02      CMP dword ptr [ESI + 0x1e6],0x2
004A11AB  75 0B                     JNZ 0x004a11b8
004A11AD  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
004A11B0  8B CE                     MOV ECX,ESI
004A11B2  50                        PUSH EAX
004A11B3  E8 8E 3F F6 FF            CALL 0x00405146
LAB_004a11b8:
004A11B8  83 BE E6 01 00 00 06      CMP dword ptr [ESI + 0x1e6],0x6
004A11BF  0F 85 6E 02 00 00         JNZ 0x004a1433
004A11C5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A11CB  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004A11D1  8B CE                     MOV ECX,ESI
004A11D3  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
004A11D6  E8 A5 2D F6 FF            CALL 0x00403f80
004A11DB  6A 01                     PUSH 0x1
004A11DD  6A 02                     PUSH 0x2
004A11DF  6A 00                     PUSH 0x0
004A11E1  6A 00                     PUSH 0x0
004A11E3  E8 A8 D0 20 00            CALL 0x006ae290
004A11E8  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004A11EB  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
004A11F1  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004A11F4  85 C9                     TEST ECX,ECX
004A11F6  0F 86 16 01 00 00         JBE 0x004a1312
004A11FC  85 DB                     TEST EBX,EBX
004A11FE  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004A1205  0F 86 DE 01 00 00         JBE 0x004a13e9
LAB_004a120b:
004A120B  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A1211  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
004A1214  8D 5F FF                  LEA EBX,[EDI + -0x1]
004A1217  85 DB                     TEST EBX,EBX
004A1219  7C 24                     JL 0x004a123f
LAB_004a121b:
004A121B  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A1221  8D 95 F0 FE FF FF         LEA EDX,[EBP + 0xfffffef0]
004A1227  52                        PUSH EDX
004A1228  8B D3                     MOV EDX,EBX
004A122A  E8 41 BA 20 00            CALL 0x006acc70
004A122F  66 81 BD F4 FE FF FF FF FF  CMP word ptr [EBP + 0xfffffef4],0xffff
004A1238  75 02                     JNZ 0x004a123c
004A123A  8B FB                     MOV EDI,EBX
LAB_004a123c:
004A123C  4B                        DEC EBX
004A123D  79 DC                     JNS 0x004a121b
LAB_004a123f:
004A123F  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004A1242  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1245  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1248  8B D3                     MOV EDX,EBX
004A124A  50                        PUSH EAX
004A124B  81 E2 FF FF 00 00         AND EDX,0xffff
004A1251  E8 1A BA 20 00            CALL 0x006acc70
004A1256  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
004A125A  33 C0                     XOR EAX,EAX
004A125C  8D 95 F0 FE FF FF         LEA EDX,[EBP + 0xfffffef0]
004A1262  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
004A1268  89 85 02 FF FF FF         MOV dword ptr [EBP + 0xffffff02],EAX
004A126E  8B 86 2E 02 00 00         MOV EAX,dword ptr [ESI + 0x22e]
004A1274  52                        PUSH EDX
004A1275  57                        PUSH EDI
004A1276  50                        PUSH EAX
004A1277  66 89 8D F4 FE FF FF      MOV word ptr [EBP + 0xfffffef4],CX
004A127E  E8 BD CE 20 00            CALL 0x006ae140
004A1283  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A1286  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A1289  6A 01                     PUSH 0x1
004A128B  51                        PUSH ECX
004A128C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1292  52                        PUSH EDX
004A1293  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
004A1296  E8 1F 16 F6 FF            CALL 0x004028ba
004A129B  8B F8                     MOV EDI,EAX
004A129D  85 FF                     TEST EDI,EDI
004A129F  75 3D                     JNZ 0x004a12de
004A12A1  68 D0 C1 7A 00            PUSH 0x7ac1d0
004A12A6  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A12AB  50                        PUSH EAX
004A12AC  50                        PUSH EAX
004A12AD  68 64 0E 00 00            PUSH 0xe64
004A12B2  68 3C BE 7A 00            PUSH 0x7abe3c
004A12B7  E8 14 C2 20 00            CALL 0x006ad4d0
004A12BC  83 C4 18                  ADD ESP,0x18
004A12BF  85 C0                     TEST EAX,EAX
004A12C1  74 01                     JZ 0x004a12c4
004A12C3  CC                        INT3
LAB_004a12c4:
004A12C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A12C9  68 65 0E 00 00            PUSH 0xe65
004A12CE  68 3C BE 7A 00            PUSH 0x7abe3c
004A12D3  50                        PUSH EAX
004A12D4  68 04 00 FE AF            PUSH 0xaffe0004
004A12D9  E8 62 4B 20 00            CALL 0x006a5e40
LAB_004a12de:
004A12DE  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004A12E1  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A12E4  51                        PUSH ECX
004A12E5  52                        PUSH EDX
004A12E6  E8 D5 CE 20 00            CALL 0x006ae1c0
004A12EB  8D 45 B8                  LEA EAX,[EBP + -0x48]
004A12EE  8B CF                     MOV ECX,EDI
004A12F0  50                        PUSH EAX
004A12F1  6A 06                     PUSH 0x6
004A12F3  E8 2E 0E F6 FF            CALL 0x00402126
004A12F8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A12FB  43                        INC EBX
004A12FC  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004A12FF  81 E3 FF FF 00 00         AND EBX,0xffff
004A1305  3B D8                     CMP EBX,EAX
004A1307  0F 82 FE FE FF FF         JC 0x004a120b
004A130D  E9 D7 00 00 00            JMP 0x004a13e9
LAB_004a1312:
004A1312  33 FF                     XOR EDI,EDI
004A1314  3B DF                     CMP EBX,EDI
004A1316  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004A1319  0F 86 CA 00 00 00         JBE 0x004a13e9
004A131F  33 D2                     XOR EDX,EDX
LAB_004a1321:
004A1321  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1324  51                        PUSH ECX
004A1325  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1328  E8 43 B9 20 00            CALL 0x006acc70
004A132D  8B 8E 2E 02 00 00         MOV ECX,dword ptr [ESI + 0x22e]
004A1333  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
004A1337  33 C0                     XOR EAX,EAX
004A1339  66 89 95 F4 FE FF FF      MOV word ptr [EBP + 0xfffffef4],DX
004A1340  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
004A1346  89 85 02 FF FF FF         MOV dword ptr [EBP + 0xffffff02],EAX
004A134C  8D 85 F0 FE FF FF         LEA EAX,[EBP + 0xfffffef0]
004A1352  50                        PUSH EAX
004A1353  57                        PUSH EDI
004A1354  51                        PUSH ECX
004A1355  E8 E6 CD 20 00            CALL 0x006ae140
004A135A  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A135D  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A1360  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1366  6A 01                     PUSH 0x1
004A1368  52                        PUSH EDX
004A1369  50                        PUSH EAX
004A136A  89 7D BC                  MOV dword ptr [EBP + -0x44],EDI
004A136D  E8 48 15 F6 FF            CALL 0x004028ba
004A1372  8B D8                     MOV EBX,EAX
004A1374  85 DB                     TEST EBX,EBX
004A1376  75 3E                     JNZ 0x004a13b6
004A1378  68 D0 C1 7A 00            PUSH 0x7ac1d0
004A137D  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A1382  50                        PUSH EAX
004A1383  50                        PUSH EAX
004A1384  68 77 0E 00 00            PUSH 0xe77
004A1389  68 3C BE 7A 00            PUSH 0x7abe3c
004A138E  E8 3D C1 20 00            CALL 0x006ad4d0
004A1393  83 C4 18                  ADD ESP,0x18
004A1396  85 C0                     TEST EAX,EAX
004A1398  74 01                     JZ 0x004a139b
004A139A  CC                        INT3
LAB_004a139b:
004A139B  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
004A13A1  68 78 0E 00 00            PUSH 0xe78
004A13A6  68 3C BE 7A 00            PUSH 0x7abe3c
004A13AB  51                        PUSH ECX
004A13AC  68 04 00 FE AF            PUSH 0xaffe0004
004A13B1  E8 8A 4A 20 00            CALL 0x006a5e40
LAB_004a13b6:
004A13B6  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
004A13B9  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A13BC  52                        PUSH EDX
004A13BD  50                        PUSH EAX
004A13BE  E8 FD CD 20 00            CALL 0x006ae1c0
004A13C3  8D 4D B8                  LEA ECX,[EBP + -0x48]
004A13C6  51                        PUSH ECX
004A13C7  6A 06                     PUSH 0x6
004A13C9  8B CB                     MOV ECX,EBX
004A13CB  E8 56 0D F6 FF            CALL 0x00402126
004A13D0  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A13D3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A13D6  47                        INC EDI
004A13D7  42                        INC EDX
004A13D8  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A13DB  81 E2 FF FF 00 00         AND EDX,0xffff
004A13E1  3B D0                     CMP EDX,EAX
004A13E3  0F 82 38 FF FF FF         JC 0x004a1321
LAB_004a13e9:
004A13E9  8B 8E 2A 02 00 00         MOV ECX,dword ptr [ESI + 0x22a]
004A13EF  8D 95 E0 FE FF FF         LEA EDX,[EBP + 0xfffffee0]
004A13F5  52                        PUSH EDX
004A13F6  8B 96 32 02 00 00         MOV EDX,dword ptr [ESI + 0x232]
004A13FC  E8 6F B8 20 00            CALL 0x006acc70
004A1401  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
004A1404  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
004A1407  85 C0                     TEST EAX,EAX
004A1409  76 22                     JBE 0x004a142d
004A140B  0F BF 85 E4 FE FF FF      MOVSX EAX,word ptr [EBP + 0xfffffee4]
004A1412  0F BF 8D E2 FE FF FF      MOVSX ECX,word ptr [EBP + 0xfffffee2]
004A1419  0F BF 95 E0 FE FF FF      MOVSX EDX,word ptr [EBP + 0xfffffee0]
004A1420  6A 00                     PUSH 0x0
004A1422  50                        PUSH EAX
004A1423  51                        PUSH ECX
004A1424  52                        PUSH EDX
004A1425  57                        PUSH EDI
004A1426  8B CE                     MOV ECX,ESI
004A1428  E8 4E 49 F6 FF            CALL 0x00405d7b
LAB_004a142d:
004A142D  57                        PUSH EDI
004A142E  E8 DD CC 20 00            CALL 0x006ae110
LAB_004a1433:
004A1433  83 BE E6 01 00 00 07      CMP dword ptr [ESI + 0x1e6],0x7
004A143A  0F 85 B9 00 00 00         JNZ 0x004a14f9
004A1440  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A1445  33 DB                     XOR EBX,EBX
004A1447  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A144D  83 C8 FF                  OR EAX,0xffffffff
004A1450  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
004A1454  66 89 45 C6               MOV word ptr [EBP + -0x3a],AX
004A1458  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
004A145C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A145F  85 C0                     TEST EAX,EAX
004A1461  89 4D C0                  MOV dword ptr [EBP + -0x40],ECX
004A1464  0F 86 8F 00 00 00         JBE 0x004a14f9
004A146A  33 D2                     XOR EDX,EDX
LAB_004a146c:
004A146C  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A146F  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1472  50                        PUSH EAX
004A1473  E8 F8 B7 20 00            CALL 0x006acc70
004A1478  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A147B  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A147E  6A 01                     PUSH 0x1
004A1480  51                        PUSH ECX
004A1481  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1487  52                        PUSH EDX
004A1488  E8 2D 14 F6 FF            CALL 0x004028ba
004A148D  8B F8                     MOV EDI,EAX
004A148F  85 FF                     TEST EDI,EDI
004A1491  75 1A                     JNZ 0x004a14ad
004A1493  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A1498  68 8C 0E 00 00            PUSH 0xe8c
004A149D  68 3C BE 7A 00            PUSH 0x7abe3c
004A14A2  50                        PUSH EAX
004A14A3  68 04 00 FE AF            PUSH 0xaffe0004
004A14A8  E8 93 49 20 00            CALL 0x006a5e40
LAB_004a14ad:
004A14AD  8D 4D E2                  LEA ECX,[EBP + -0x1e]
004A14B0  8D 55 E6                  LEA EDX,[EBP + -0x1a]
004A14B3  51                        PUSH ECX
004A14B4  8D 45 E4                  LEA EAX,[EBP + -0x1c]
004A14B7  52                        PUSH EDX
004A14B8  50                        PUSH EAX
004A14B9  8B CF                     MOV ECX,EDI
004A14BB  E8 05 04 F6 FF            CALL 0x004018c5
004A14C0  0F BF 55 E6               MOVSX EDX,word ptr [EBP + -0x1a]
004A14C4  8B 8E 22 02 00 00         MOV ECX,dword ptr [ESI + 0x222]
004A14CA  0F BF 45 E4               MOVSX EAX,word ptr [EBP + -0x1c]
004A14CE  51                        PUSH ECX
004A14CF  52                        PUSH EDX
004A14D0  50                        PUSH EAX
004A14D1  8B CF                     MOV ECX,EDI
004A14D3  E8 93 3A F6 FF            CALL 0x00404f6b
004A14D8  8D 4D C0                  LEA ECX,[EBP + -0x40]
004A14DB  51                        PUSH ECX
004A14DC  6A 01                     PUSH 0x1
004A14DE  8B CF                     MOV ECX,EDI
004A14E0  E8 41 0C F6 FF            CALL 0x00402126
004A14E5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A14E8  43                        INC EBX
004A14E9  8B D3                     MOV EDX,EBX
004A14EB  81 E2 FF FF 00 00         AND EDX,0xffff
004A14F1  3B D0                     CMP EDX,EAX
004A14F3  0F 82 73 FF FF FF         JC 0x004a146c
LAB_004a14f9:
004A14F9  83 BE E6 01 00 00 08      CMP dword ptr [ESI + 0x1e6],0x8
004A1500  0F 85 04 02 00 00         JNZ 0x004a170a
004A1506  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A150C  33 DB                     XOR EBX,EBX
004A150E  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004A1511  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A1517  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A151A  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A151D  85 C0                     TEST EAX,EAX
004A151F  0F 86 E7 00 00 00         JBE 0x004a160c
LAB_004a1525:
004A1525  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1528  81 E3 FF FF 00 00         AND EBX,0xffff
004A152E  51                        PUSH ECX
004A152F  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1532  8B D3                     MOV EDX,EBX
004A1534  E8 37 B7 20 00            CALL 0x006acc70
004A1539  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A153C  66 3D FF FF               CMP AX,0xffff
004A1540  0F 84 AD 00 00 00         JZ 0x004a15f3
004A1546  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A1549  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A154F  6A 01                     PUSH 0x1
004A1551  50                        PUSH EAX
004A1552  52                        PUSH EDX
004A1553  E8 62 13 F6 FF            CALL 0x004028ba
004A1558  8B F8                     MOV EDI,EAX
004A155A  85 FF                     TEST EDI,EDI
004A155C  75 1A                     JNZ 0x004a1578
004A155E  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A1563  68 9A 0E 00 00            PUSH 0xe9a
004A1568  68 3C BE 7A 00            PUSH 0x7abe3c
004A156D  50                        PUSH EAX
004A156E  68 04 00 FE AF            PUSH 0xaffe0004
004A1573  E8 C8 48 20 00            CALL 0x006a5e40
LAB_004a1578:
004A1578  8B 17                     MOV EDX,dword ptr [EDI]
004A157A  8B CF                     MOV ECX,EDI
004A157C  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A157F  83 F8 08                  CMP EAX,0x8
004A1582  74 6F                     JZ 0x004a15f3
004A1584  8B 07                     MOV EAX,dword ptr [EDI]
004A1586  8B CF                     MOV ECX,EDI
004A1588  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A158B  83 F8 14                  CMP EAX,0x14
004A158E  74 63                     JZ 0x004a15f3
004A1590  8B 17                     MOV EDX,dword ptr [EDI]
004A1592  8B CF                     MOV ECX,EDI
004A1594  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1597  83 F8 1A                  CMP EAX,0x1a
004A159A  74 57                     JZ 0x004a15f3
004A159C  8B CF                     MOV ECX,EDI
004A159E  E8 B5 38 F6 FF            CALL 0x00404e58
004A15A3  85 C0                     TEST EAX,EAX
004A15A5  75 0F                     JNZ 0x004a15b6
004A15A7  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A15AA  8B CF                     MOV ECX,EDI
004A15AC  50                        PUSH EAX
004A15AD  6A 03                     PUSH 0x3
004A15AF  E8 72 0B F6 FF            CALL 0x00402126
004A15B4  EB 20                     JMP 0x004a15d6
LAB_004a15b6:
004A15B6  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A15B9  85 C0                     TEST EAX,EAX
004A15BB  75 0F                     JNZ 0x004a15cc
004A15BD  6A 01                     PUSH 0x1
004A15BF  6A 02                     PUSH 0x2
004A15C1  6A 01                     PUSH 0x1
004A15C3  50                        PUSH EAX
004A15C4  E8 C7 CC 20 00            CALL 0x006ae290
004A15C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a15cc:
004A15CC  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A15CF  51                        PUSH ECX
004A15D0  50                        PUSH EAX
004A15D1  E8 EA CB 20 00            CALL 0x006ae1c0
LAB_004a15d6:
004A15D6  8B 56 2D                  MOV EDX,dword ptr [ESI + 0x2d]
004A15D9  53                        PUSH EBX
004A15DA  52                        PUSH EDX
004A15DB  E8 90 F6 20 00            CALL 0x006b0c70
004A15E0  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004A15E3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A15E6  81 C1 FF FF 00 00         ADD ECX,0xffff
004A15EC  48                        DEC EAX
004A15ED  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
004A15F0  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
LAB_004a15f3:
004A15F3  8B 5D EC                  MOV EBX,dword ptr [EBP + -0x14]
004A15F6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004A15F9  43                        INC EBX
004A15FA  8B C3                     MOV EAX,EBX
004A15FC  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
004A15FF  25 FF FF 00 00            AND EAX,0xffff
004A1604  3B C1                     CMP EAX,ECX
004A1606  0F 82 19 FF FF FF         JC 0x004a1525
LAB_004a160c:
004A160C  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A160F  33 DB                     XOR EBX,EBX
004A1611  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A1614  85 C0                     TEST EAX,EAX
004A1616  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A1619  0F 86 A2 00 00 00         JBE 0x004a16c1
004A161F  33 D2                     XOR EDX,EDX
LAB_004a1621:
004A1621  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A1624  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1627  50                        PUSH EAX
004A1628  E8 43 B6 20 00            CALL 0x006acc70
004A162D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1630  66 3D FF FF               CMP AX,0xffff
004A1634  74 77                     JZ 0x004a16ad
004A1636  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1639  6A 01                     PUSH 0x1
004A163B  50                        PUSH EAX
004A163C  51                        PUSH ECX
004A163D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1643  E8 72 12 F6 FF            CALL 0x004028ba
004A1648  8B F8                     MOV EDI,EAX
004A164A  85 FF                     TEST EDI,EDI
004A164C  75 1B                     JNZ 0x004a1669
004A164E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A1654  68 B0 0E 00 00            PUSH 0xeb0
004A1659  68 3C BE 7A 00            PUSH 0x7abe3c
004A165E  52                        PUSH EDX
004A165F  68 04 00 FE AF            PUSH 0xaffe0004
004A1664  E8 D7 47 20 00            CALL 0x006a5e40
LAB_004a1669:
004A1669  8B 07                     MOV EAX,dword ptr [EDI]
004A166B  8B CF                     MOV ECX,EDI
004A166D  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1670  83 F8 08                  CMP EAX,0x8
004A1673  74 18                     JZ 0x004a168d
004A1675  8B 17                     MOV EDX,dword ptr [EDI]
004A1677  8B CF                     MOV ECX,EDI
004A1679  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A167C  83 F8 14                  CMP EAX,0x14
004A167F  74 0C                     JZ 0x004a168d
004A1681  8B 07                     MOV EAX,dword ptr [EDI]
004A1683  8B CF                     MOV ECX,EDI
004A1685  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1688  83 F8 1A                  CMP EAX,0x1a
004A168B  75 20                     JNZ 0x004a16ad
LAB_004a168d:
004A168D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1690  85 C0                     TEST EAX,EAX
004A1692  75 0F                     JNZ 0x004a16a3
004A1694  6A 01                     PUSH 0x1
004A1696  6A 02                     PUSH 0x2
004A1698  6A 01                     PUSH 0x1
004A169A  50                        PUSH EAX
004A169B  E8 F0 CB 20 00            CALL 0x006ae290
004A16A0  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a16a3:
004A16A3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A16A6  51                        PUSH ECX
004A16A7  50                        PUSH EAX
004A16A8  E8 13 CB 20 00            CALL 0x006ae1c0
LAB_004a16ad:
004A16AD  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004A16B0  43                        INC EBX
004A16B1  8B D3                     MOV EDX,EBX
004A16B3  81 E2 FF FF 00 00         AND EDX,0xffff
004A16B9  3B D0                     CMP EDX,EAX
004A16BB  0F 82 60 FF FF FF         JC 0x004a1621
LAB_004a16c1:
004A16C1  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A16C4  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A16C7  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A16CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A16D0  57                        PUSH EDI
004A16D1  52                        PUSH EDX
004A16D2  50                        PUSH EAX
004A16D3  E8 C3 26 F6 FF            CALL 0x00403d9b
004A16D8  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A16DB  85 C0                     TEST EAX,EAX
004A16DD  74 06                     JZ 0x004a16e5
004A16DF  50                        PUSH EAX
004A16E0  E8 2B CA 20 00            CALL 0x006ae110
LAB_004a16e5:
004A16E5  85 FF                     TEST EDI,EDI
004A16E7  74 06                     JZ 0x004a16ef
004A16E9  57                        PUSH EDI
004A16EA  E8 21 CA 20 00            CALL 0x006ae110
LAB_004a16ef:
004A16EF  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A16F2  8B 96 66 02 00 00         MOV EDX,dword ptr [ESI + 0x266]
004A16F8  8B 86 4E 02 00 00         MOV EAX,dword ptr [ESI + 0x24e]
004A16FE  51                        PUSH ECX
004A16FF  52                        PUSH EDX
004A1700  50                        PUSH EAX
004A1701  6A 01                     PUSH 0x1
004A1703  8B CE                     MOV ECX,ESI
004A1705  E8 33 FD F5 FF            CALL 0x0040143d
LAB_004a170a:
004A170A  83 BE E6 01 00 00 09      CMP dword ptr [ESI + 0x1e6],0x9
004A1711  0F 85 57 02 00 00         JNZ 0x004a196e
004A1717  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A171C  33 DB                     XOR EBX,EBX
004A171E  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A1724  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004A1727  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004A172D  66 8B 86 76 02 00 00      MOV AX,word ptr [ESI + 0x276]
004A1734  66 8B 8E 78 02 00 00      MOV CX,word ptr [ESI + 0x278]
004A173B  66 89 85 B4 FE FF FF      MOV word ptr [EBP + 0xfffffeb4],AX
004A1742  8B 86 7C 02 00 00         MOV EAX,dword ptr [ESI + 0x27c]
004A1748  89 95 B0 FE FF FF         MOV dword ptr [EBP + 0xfffffeb0],EDX
004A174E  66 8B 96 7A 02 00 00      MOV DX,word ptr [ESI + 0x27a]
004A1755  66 89 8D B6 FE FF FF      MOV word ptr [EBP + 0xfffffeb6],CX
004A175C  8B 8E 80 02 00 00         MOV ECX,dword ptr [ESI + 0x280]
004A1762  89 85 BA FE FF FF         MOV dword ptr [EBP + 0xfffffeba],EAX
004A1768  8D 86 84 02 00 00         LEA EAX,[ESI + 0x284]
004A176E  66 89 95 B8 FE FF FF      MOV word ptr [EBP + 0xfffffeb8],DX
004A1775  66 8B 96 93 02 00 00      MOV DX,word ptr [ESI + 0x293]
004A177C  89 8D BE FE FF FF         MOV dword ptr [EBP + 0xfffffebe],ECX
004A1782  8B 08                     MOV ECX,dword ptr [EAX]
004A1784  66 89 95 D1 FE FF FF      MOV word ptr [EBP + 0xfffffed1],DX
004A178B  89 8D C2 FE FF FF         MOV dword ptr [EBP + 0xfffffec2],ECX
004A1791  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
004A1794  89 95 C6 FE FF FF         MOV dword ptr [EBP + 0xfffffec6],EDX
004A179A  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
004A179D  89 8D CA FE FF FF         MOV dword ptr [EBP + 0xfffffeca],ECX
004A17A3  66 8B 50 0C               MOV DX,word ptr [EAX + 0xc]
004A17A7  66 89 95 CE FE FF FF      MOV word ptr [EBP + 0xfffffece],DX
004A17AE  8A 40 0E                  MOV AL,byte ptr [EAX + 0xe]
004A17B1  88 85 D0 FE FF FF         MOV byte ptr [EBP + 0xfffffed0],AL
004A17B7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A17BA  85 C0                     TEST EAX,EAX
004A17BC  0F 86 CA 00 00 00         JBE 0x004a188c
004A17C2  33 D2                     XOR EDX,EDX
LAB_004a17c4:
004A17C4  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A17C7  51                        PUSH ECX
004A17C8  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A17CB  E8 A0 B4 20 00            CALL 0x006acc70
004A17D0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A17D3  66 3D FF FF               CMP AX,0xffff
004A17D7  0F 84 9B 00 00 00         JZ 0x004a1878
004A17DD  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A17E0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A17E6  6A 01                     PUSH 0x1
004A17E8  50                        PUSH EAX
004A17E9  52                        PUSH EDX
004A17EA  E8 CB 10 F6 FF            CALL 0x004028ba
004A17EF  8B F8                     MOV EDI,EAX
004A17F1  85 FF                     TEST EDI,EDI
004A17F3  75 1A                     JNZ 0x004a180f
004A17F5  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A17FA  68 CF 0E 00 00            PUSH 0xecf
004A17FF  68 3C BE 7A 00            PUSH 0x7abe3c
004A1804  50                        PUSH EAX
004A1805  68 04 00 FE AF            PUSH 0xaffe0004
004A180A  E8 31 46 20 00            CALL 0x006a5e40
LAB_004a180f:
004A180F  8B 17                     MOV EDX,dword ptr [EDI]
004A1811  8B CF                     MOV ECX,EDI
004A1813  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1816  83 F8 0C                  CMP EAX,0xc
004A1819  74 4D                     JZ 0x004a1868
004A181B  8B 07                     MOV EAX,dword ptr [EDI]
004A181D  8B CF                     MOV ECX,EDI
004A181F  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1822  83 F8 18                  CMP EAX,0x18
004A1825  74 41                     JZ 0x004a1868
004A1827  8B 17                     MOV EDX,dword ptr [EDI]
004A1829  8B CF                     MOV ECX,EDI
004A182B  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A182E  83 F8 19                  CMP EAX,0x19
004A1831  74 35                     JZ 0x004a1868
004A1833  8B CF                     MOV ECX,EDI
004A1835  E8 1E 36 F6 FF            CALL 0x00404e58
004A183A  85 C0                     TEST EAX,EAX
004A183C  75 08                     JNZ 0x004a1846
004A183E  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A1841  50                        PUSH EAX
004A1842  6A 03                     PUSH 0x3
004A1844  EB 2B                     JMP 0x004a1871
LAB_004a1846:
004A1846  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1849  85 C0                     TEST EAX,EAX
004A184B  75 0F                     JNZ 0x004a185c
004A184D  6A 01                     PUSH 0x1
004A184F  6A 02                     PUSH 0x2
004A1851  6A 01                     PUSH 0x1
004A1853  50                        PUSH EAX
004A1854  E8 37 CA 20 00            CALL 0x006ae290
004A1859  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a185c:
004A185C  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A185F  51                        PUSH ECX
004A1860  50                        PUSH EAX
004A1861  E8 5A C9 20 00            CALL 0x006ae1c0
004A1866  EB 10                     JMP 0x004a1878
LAB_004a1868:
004A1868  8D 95 B0 FE FF FF         LEA EDX,[EBP + 0xfffffeb0]
004A186E  52                        PUSH EDX
004A186F  6A 11                     PUSH 0x11
LAB_004a1871:
004A1871  8B CF                     MOV ECX,EDI
004A1873  E8 AE 08 F6 FF            CALL 0x00402126
LAB_004a1878:
004A1878  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A187B  43                        INC EBX
004A187C  8B D3                     MOV EDX,EBX
004A187E  81 E2 FF FF 00 00         AND EDX,0xffff
004A1884  3B D0                     CMP EDX,EAX
004A1886  0F 82 38 FF FF FF         JC 0x004a17c4
LAB_004a188c:
004A188C  8B 46 29                  MOV EAX,dword ptr [ESI + 0x29]
004A188F  33 DB                     XOR EBX,EBX
004A1891  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
004A1894  85 C0                     TEST EAX,EAX
004A1896  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A1899  0F 86 A1 00 00 00         JBE 0x004a1940
004A189F  33 D2                     XOR EDX,EDX
LAB_004a18a1:
004A18A1  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A18A4  51                        PUSH ECX
004A18A5  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A18A8  E8 C3 B3 20 00            CALL 0x006acc70
004A18AD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A18B0  66 3D FF FF               CMP AX,0xffff
004A18B4  74 76                     JZ 0x004a192c
004A18B6  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A18B9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A18BF  6A 01                     PUSH 0x1
004A18C1  50                        PUSH EAX
004A18C2  52                        PUSH EDX
004A18C3  E8 F2 0F F6 FF            CALL 0x004028ba
004A18C8  8B F8                     MOV EDI,EAX
004A18CA  85 FF                     TEST EDI,EDI
004A18CC  75 1A                     JNZ 0x004a18e8
004A18CE  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A18D3  68 E9 0E 00 00            PUSH 0xee9
004A18D8  68 3C BE 7A 00            PUSH 0x7abe3c
004A18DD  50                        PUSH EAX
004A18DE  68 04 00 FE AF            PUSH 0xaffe0004
004A18E3  E8 58 45 20 00            CALL 0x006a5e40
LAB_004a18e8:
004A18E8  8B 17                     MOV EDX,dword ptr [EDI]
004A18EA  8B CF                     MOV ECX,EDI
004A18EC  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A18EF  83 F8 0C                  CMP EAX,0xc
004A18F2  74 18                     JZ 0x004a190c
004A18F4  8B 07                     MOV EAX,dword ptr [EDI]
004A18F6  8B CF                     MOV ECX,EDI
004A18F8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A18FB  83 F8 18                  CMP EAX,0x18
004A18FE  74 0C                     JZ 0x004a190c
004A1900  8B 17                     MOV EDX,dword ptr [EDI]
004A1902  8B CF                     MOV ECX,EDI
004A1904  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1907  83 F8 19                  CMP EAX,0x19
004A190A  75 20                     JNZ 0x004a192c
LAB_004a190c:
004A190C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A190F  85 C0                     TEST EAX,EAX
004A1911  75 0F                     JNZ 0x004a1922
004A1913  6A 01                     PUSH 0x1
004A1915  6A 02                     PUSH 0x2
004A1917  6A 01                     PUSH 0x1
004A1919  50                        PUSH EAX
004A191A  E8 71 C9 20 00            CALL 0x006ae290
004A191F  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a1922:
004A1922  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1925  51                        PUSH ECX
004A1926  50                        PUSH EAX
004A1927  E8 94 C8 20 00            CALL 0x006ae1c0
LAB_004a192c:
004A192C  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004A192F  43                        INC EBX
004A1930  8B D3                     MOV EDX,EBX
004A1932  81 E2 FF FF 00 00         AND EDX,0xffff
004A1938  3B D0                     CMP EDX,EAX
004A193A  0F 82 61 FF FF FF         JC 0x004a18a1
LAB_004a1940:
004A1940  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A1943  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A1946  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A1949  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A194F  57                        PUSH EDI
004A1950  52                        PUSH EDX
004A1951  50                        PUSH EAX
004A1952  E8 44 24 F6 FF            CALL 0x00403d9b
004A1957  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A195A  85 C0                     TEST EAX,EAX
004A195C  74 06                     JZ 0x004a1964
004A195E  50                        PUSH EAX
004A195F  E8 AC C7 20 00            CALL 0x006ae110
LAB_004a1964:
004A1964  85 FF                     TEST EDI,EDI
004A1966  74 06                     JZ 0x004a196e
004A1968  57                        PUSH EDI
004A1969  E8 A2 C7 20 00            CALL 0x006ae110
LAB_004a196e:
004A196E  83 BE E6 01 00 00 0A      CMP dword ptr [ESI + 0x1e6],0xa
004A1975  0F 85 F0 01 00 00         JNZ 0x004a1b6b
004A197B  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A1980  33 DB                     XOR EBX,EBX
004A1982  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A1988  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004A198B  8B 90 E4 00 00 00         MOV EDX,dword ptr [EAX + 0xe4]
004A1991  66 8B 86 95 02 00 00      MOV AX,word ptr [ESI + 0x295]
004A1998  66 8B 8E 97 02 00 00      MOV CX,word ptr [ESI + 0x297]
004A199F  66 89 45 A4               MOV word ptr [EBP + -0x5c],AX
004A19A3  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A19A6  89 55 A0                  MOV dword ptr [EBP + -0x60],EDX
004A19A9  66 8B 96 99 02 00 00      MOV DX,word ptr [ESI + 0x299]
004A19B0  85 C0                     TEST EAX,EAX
004A19B2  66 89 4D A6               MOV word ptr [EBP + -0x5a],CX
004A19B6  66 89 55 A8               MOV word ptr [EBP + -0x58],DX
004A19BA  0F 86 C8 00 00 00         JBE 0x004a1a88
004A19C0  33 D2                     XOR EDX,EDX
LAB_004a19c2:
004A19C2  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A19C5  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A19C8  50                        PUSH EAX
004A19C9  E8 A2 B2 20 00            CALL 0x006acc70
004A19CE  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A19D1  66 3D FF FF               CMP AX,0xffff
004A19D5  0F 84 99 00 00 00         JZ 0x004a1a74
004A19DB  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A19DE  6A 01                     PUSH 0x1
004A19E0  50                        PUSH EAX
004A19E1  51                        PUSH ECX
004A19E2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A19E8  E8 CD 0E F6 FF            CALL 0x004028ba
004A19ED  8B F8                     MOV EDI,EAX
004A19EF  85 FF                     TEST EDI,EDI
004A19F1  75 1B                     JNZ 0x004a1a0e
004A19F3  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A19F9  68 02 0F 00 00            PUSH 0xf02
004A19FE  68 3C BE 7A 00            PUSH 0x7abe3c
004A1A03  52                        PUSH EDX
004A1A04  68 04 00 FE AF            PUSH 0xaffe0004
004A1A09  E8 32 44 20 00            CALL 0x006a5e40
LAB_004a1a0e:
004A1A0E  8B 07                     MOV EAX,dword ptr [EDI]
004A1A10  8B CF                     MOV ECX,EDI
004A1A12  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1A15  83 F8 08                  CMP EAX,0x8
004A1A18  74 4D                     JZ 0x004a1a67
004A1A1A  8B 17                     MOV EDX,dword ptr [EDI]
004A1A1C  8B CF                     MOV ECX,EDI
004A1A1E  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1A21  83 F8 14                  CMP EAX,0x14
004A1A24  74 41                     JZ 0x004a1a67
004A1A26  8B 07                     MOV EAX,dword ptr [EDI]
004A1A28  8B CF                     MOV ECX,EDI
004A1A2A  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1A2D  83 F8 1A                  CMP EAX,0x1a
004A1A30  74 35                     JZ 0x004a1a67
004A1A32  8B CF                     MOV ECX,EDI
004A1A34  E8 1F 34 F6 FF            CALL 0x00404e58
004A1A39  85 C0                     TEST EAX,EAX
004A1A3B  75 08                     JNZ 0x004a1a45
004A1A3D  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A1A40  51                        PUSH ECX
004A1A41  6A 03                     PUSH 0x3
004A1A43  EB 28                     JMP 0x004a1a6d
LAB_004a1a45:
004A1A45  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1A48  85 C0                     TEST EAX,EAX
004A1A4A  75 0F                     JNZ 0x004a1a5b
004A1A4C  6A 01                     PUSH 0x1
004A1A4E  6A 02                     PUSH 0x2
004A1A50  6A 01                     PUSH 0x1
004A1A52  50                        PUSH EAX
004A1A53  E8 38 C8 20 00            CALL 0x006ae290
004A1A58  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a1a5b:
004A1A5B  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A1A5E  52                        PUSH EDX
004A1A5F  50                        PUSH EAX
004A1A60  E8 5B C7 20 00            CALL 0x006ae1c0
004A1A65  EB 0D                     JMP 0x004a1a74
LAB_004a1a67:
004A1A67  8D 45 A0                  LEA EAX,[EBP + -0x60]
004A1A6A  50                        PUSH EAX
004A1A6B  6A 0D                     PUSH 0xd
LAB_004a1a6d:
004A1A6D  8B CF                     MOV ECX,EDI
004A1A6F  E8 B2 06 F6 FF            CALL 0x00402126
LAB_004a1a74:
004A1A74  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A1A77  43                        INC EBX
004A1A78  8B D3                     MOV EDX,EBX
004A1A7A  81 E2 FF FF 00 00         AND EDX,0xffff
004A1A80  3B D0                     CMP EDX,EAX
004A1A82  0F 82 3A FF FF FF         JC 0x004a19c2
LAB_004a1a88:
004A1A88  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A1A8B  33 DB                     XOR EBX,EBX
004A1A8D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004A1A90  85 C0                     TEST EAX,EAX
004A1A92  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A1A95  0F 86 A2 00 00 00         JBE 0x004a1b3d
004A1A9B  33 D2                     XOR EDX,EDX
LAB_004a1a9d:
004A1A9D  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A1AA0  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1AA3  50                        PUSH EAX
004A1AA4  E8 C7 B1 20 00            CALL 0x006acc70
004A1AA9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1AAC  66 3D FF FF               CMP AX,0xffff
004A1AB0  74 77                     JZ 0x004a1b29
004A1AB2  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1AB5  6A 01                     PUSH 0x1
004A1AB7  50                        PUSH EAX
004A1AB8  51                        PUSH ECX
004A1AB9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1ABF  E8 F6 0D F6 FF            CALL 0x004028ba
004A1AC4  8B F8                     MOV EDI,EAX
004A1AC6  85 FF                     TEST EDI,EDI
004A1AC8  75 1B                     JNZ 0x004a1ae5
004A1ACA  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A1AD0  68 1C 0F 00 00            PUSH 0xf1c
004A1AD5  68 3C BE 7A 00            PUSH 0x7abe3c
004A1ADA  52                        PUSH EDX
004A1ADB  68 04 00 FE AF            PUSH 0xaffe0004
004A1AE0  E8 5B 43 20 00            CALL 0x006a5e40
LAB_004a1ae5:
004A1AE5  8B 07                     MOV EAX,dword ptr [EDI]
004A1AE7  8B CF                     MOV ECX,EDI
004A1AE9  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1AEC  83 F8 08                  CMP EAX,0x8
004A1AEF  74 18                     JZ 0x004a1b09
004A1AF1  8B 17                     MOV EDX,dword ptr [EDI]
004A1AF3  8B CF                     MOV ECX,EDI
004A1AF5  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1AF8  83 F8 14                  CMP EAX,0x14
004A1AFB  74 0C                     JZ 0x004a1b09
004A1AFD  8B 07                     MOV EAX,dword ptr [EDI]
004A1AFF  8B CF                     MOV ECX,EDI
004A1B01  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1B04  83 F8 1A                  CMP EAX,0x1a
004A1B07  75 20                     JNZ 0x004a1b29
LAB_004a1b09:
004A1B09  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1B0C  85 C0                     TEST EAX,EAX
004A1B0E  75 0F                     JNZ 0x004a1b1f
004A1B10  6A 01                     PUSH 0x1
004A1B12  6A 02                     PUSH 0x2
004A1B14  6A 01                     PUSH 0x1
004A1B16  50                        PUSH EAX
004A1B17  E8 74 C7 20 00            CALL 0x006ae290
004A1B1C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a1b1f:
004A1B1F  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1B22  51                        PUSH ECX
004A1B23  50                        PUSH EAX
004A1B24  E8 97 C6 20 00            CALL 0x006ae1c0
LAB_004a1b29:
004A1B29  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004A1B2C  43                        INC EBX
004A1B2D  8B D3                     MOV EDX,EBX
004A1B2F  81 E2 FF FF 00 00         AND EDX,0xffff
004A1B35  3B D0                     CMP EDX,EAX
004A1B37  0F 82 60 FF FF FF         JC 0x004a1a9d
LAB_004a1b3d:
004A1B3D  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A1B40  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004A1B43  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A1B46  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1B4C  57                        PUSH EDI
004A1B4D  52                        PUSH EDX
004A1B4E  50                        PUSH EAX
004A1B4F  E8 47 22 F6 FF            CALL 0x00403d9b
004A1B54  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1B57  85 C0                     TEST EAX,EAX
004A1B59  74 06                     JZ 0x004a1b61
004A1B5B  50                        PUSH EAX
004A1B5C  E8 AF C5 20 00            CALL 0x006ae110
LAB_004a1b61:
004A1B61  85 FF                     TEST EDI,EDI
004A1B63  74 06                     JZ 0x004a1b6b
004A1B65  57                        PUSH EDI
004A1B66  E8 A5 C5 20 00            CALL 0x006ae110
LAB_004a1b6b:
004A1B6B  83 BE E6 01 00 00 04      CMP dword ptr [ESI + 0x1e6],0x4
004A1B72  75 14                     JNZ 0x004a1b88
004A1B74  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1B77  8B 96 9F 02 00 00         MOV EDX,dword ptr [ESI + 0x29f]
004A1B7D  51                        PUSH ECX
004A1B7E  52                        PUSH EDX
004A1B7F  6A 01                     PUSH 0x1
004A1B81  8B CE                     MOV ECX,ESI
004A1B83  E8 C9 16 F6 FF            CALL 0x00403251
LAB_004a1b88:
004A1B88  83 BE E6 01 00 00 05      CMP dword ptr [ESI + 0x1e6],0x5
004A1B8F  0F 85 BF 01 00 00         JNZ 0x004a1d54
004A1B95  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A1B98  33 DB                     XOR EBX,EBX
004A1B9A  85 C0                     TEST EAX,EAX
004A1B9C  0F 86 A6 00 00 00         JBE 0x004a1c48
004A1BA2  33 D2                     XOR EDX,EDX
LAB_004a1ba4:
004A1BA4  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1BA7  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1BAA  50                        PUSH EAX
004A1BAB  E8 C0 B0 20 00            CALL 0x006acc70
004A1BB0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1BB3  66 3D FF FF               CMP AX,0xffff
004A1BB7  74 7B                     JZ 0x004a1c34
004A1BB9  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1BBC  6A 01                     PUSH 0x1
004A1BBE  50                        PUSH EAX
004A1BBF  51                        PUSH ECX
004A1BC0  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1BC6  E8 EF 0C F6 FF            CALL 0x004028ba
004A1BCB  8B F8                     MOV EDI,EAX
004A1BCD  85 FF                     TEST EDI,EDI
004A1BCF  75 1B                     JNZ 0x004a1bec
004A1BD1  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A1BD7  68 35 0F 00 00            PUSH 0xf35
004A1BDC  68 3C BE 7A 00            PUSH 0x7abe3c
004A1BE1  52                        PUSH EDX
004A1BE2  68 04 00 FE AF            PUSH 0xaffe0004
004A1BE7  E8 54 42 20 00            CALL 0x006a5e40
LAB_004a1bec:
004A1BEC  8B CF                     MOV ECX,EDI
004A1BEE  E8 65 32 F6 FF            CALL 0x00404e58
004A1BF3  85 C0                     TEST EAX,EAX
004A1BF5  75 1D                     JNZ 0x004a1c14
004A1BF7  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A1BFC  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A1BFF  52                        PUSH EDX
004A1C00  6A 03                     PUSH 0x3
004A1C02  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A1C08  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
004A1C0B  8B CF                     MOV ECX,EDI
004A1C0D  E8 14 05 F6 FF            CALL 0x00402126
004A1C12  EB 20                     JMP 0x004a1c34
LAB_004a1c14:
004A1C14  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1C17  85 C0                     TEST EAX,EAX
004A1C19  75 0F                     JNZ 0x004a1c2a
004A1C1B  6A 01                     PUSH 0x1
004A1C1D  6A 02                     PUSH 0x2
004A1C1F  6A 01                     PUSH 0x1
004A1C21  50                        PUSH EAX
004A1C22  E8 69 C6 20 00            CALL 0x006ae290
004A1C27  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a1c2a:
004A1C2A  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1C2D  51                        PUSH ECX
004A1C2E  50                        PUSH EAX
004A1C2F  E8 8C C5 20 00            CALL 0x006ae1c0
LAB_004a1c34:
004A1C34  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A1C37  43                        INC EBX
004A1C38  8B D3                     MOV EDX,EBX
004A1C3A  81 E2 FF FF 00 00         AND EDX,0xffff
004A1C40  3B D0                     CMP EDX,EAX
004A1C42  0F 82 5C FF FF FF         JC 0x004a1ba4
LAB_004a1c48:
004A1C48  8B 56 29                  MOV EDX,dword ptr [ESI + 0x29]
004A1C4B  33 DB                     XOR EBX,EBX
004A1C4D  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
004A1C50  85 C0                     TEST EAX,EAX
004A1C52  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
004A1C55  0F 86 88 00 00 00         JBE 0x004a1ce3
004A1C5B  33 D2                     XOR EDX,EDX
LAB_004a1c5d:
004A1C5D  8B 4E 29                  MOV ECX,dword ptr [ESI + 0x29]
004A1C60  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1C63  50                        PUSH EAX
004A1C64  E8 07 B0 20 00            CALL 0x006acc70
004A1C69  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1C6C  66 3D FF FF               CMP AX,0xffff
004A1C70  74 5D                     JZ 0x004a1ccf
004A1C72  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1C75  6A 01                     PUSH 0x1
004A1C77  50                        PUSH EAX
004A1C78  51                        PUSH ECX
004A1C79  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1C7F  E8 36 0C F6 FF            CALL 0x004028ba
004A1C84  8B F8                     MOV EDI,EAX
004A1C86  85 FF                     TEST EDI,EDI
004A1C88  75 1B                     JNZ 0x004a1ca5
004A1C8A  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A1C90  68 47 0F 00 00            PUSH 0xf47
004A1C95  68 3C BE 7A 00            PUSH 0x7abe3c
004A1C9A  52                        PUSH EDX
004A1C9B  68 04 00 FE AF            PUSH 0xaffe0004
004A1CA0  E8 9B 41 20 00            CALL 0x006a5e40
LAB_004a1ca5:
004A1CA5  8B CF                     MOV ECX,EDI
004A1CA7  E8 AC 31 F6 FF            CALL 0x00404e58
004A1CAC  83 F8 01                  CMP EAX,0x1
004A1CAF  75 1E                     JNZ 0x004a1ccf
004A1CB1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1CB4  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1CB7  50                        PUSH EAX
004A1CB8  51                        PUSH ECX
004A1CB9  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1CBF  E8 2F 28 F6 FF            CALL 0x004044f3
004A1CC4  83 F8 FF                  CMP EAX,-0x1
004A1CC7  89 85 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],EAX
004A1CCD  75 14                     JNZ 0x004a1ce3
LAB_004a1ccf:
004A1CCF  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004A1CD2  43                        INC EBX
004A1CD3  8B D3                     MOV EDX,EBX
004A1CD5  81 E2 FF FF 00 00         AND EDX,0xffff
004A1CDB  3B D0                     CMP EDX,EAX
004A1CDD  0F 82 7A FF FF FF         JC 0x004a1c5d
LAB_004a1ce3:
004A1CE3  8B 95 1C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff1c]
004A1CE9  83 FA FF                  CMP EDX,-0x1
004A1CEC  74 4A                     JZ 0x004a1d38
004A1CEE  8D 85 D4 FE FF FF         LEA EAX,[EBP + 0xfffffed4]
004A1CF4  50                        PUSH EAX
004A1CF5  0F BE 46 24               MOVSX EAX,byte ptr [ESI + 0x24]
004A1CF9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004A1CFC  8D 0C C8                  LEA ECX,[EAX + ECX*0x8]
004A1CFF  8D 0C 48                  LEA ECX,[EAX + ECX*0x2]
004A1D02  C1 E1 04                  SHL ECX,0x4
004A1D05  03 C8                     ADD ECX,EAX
004A1D07  8B 0C 4D 16 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5816]
004A1D0E  E8 5D AF 20 00            CALL 0x006acc70
004A1D13  8B 95 D4 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffed4]
004A1D19  8D 4D F4                  LEA ECX,[EBP + -0xc]
004A1D1C  E8 1F E1 20 00            CALL 0x006afe40
004A1D21  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
004A1D24  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1D27  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1D2A  52                        PUSH EDX
004A1D2B  50                        PUSH EAX
004A1D2C  51                        PUSH ECX
004A1D2D  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1D33  E8 63 20 F6 FF            CALL 0x00403d9b
LAB_004a1d38:
004A1D38  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1D3B  85 C0                     TEST EAX,EAX
004A1D3D  74 06                     JZ 0x004a1d45
004A1D3F  50                        PUSH EAX
004A1D40  E8 CB C3 20 00            CALL 0x006ae110
LAB_004a1d45:
004A1D45  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1D48  85 C0                     TEST EAX,EAX
004A1D4A  74 08                     JZ 0x004a1d54
004A1D4C  8B D0                     MOV EDX,EAX
004A1D4E  52                        PUSH EDX
004A1D4F  E8 BC C3 20 00            CALL 0x006ae110
LAB_004a1d54:
004A1D54  83 BE E6 01 00 00 0B      CMP dword ptr [ESI + 0x1e6],0xb
004A1D5B  0F 85 E6 01 00 00         JNZ 0x004a1f47
004A1D61  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A1D66  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004A1D69  33 D2                     XOR EDX,EDX
004A1D6B  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004A1D71  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A1D74  89 85 2C FF FF FF         MOV dword ptr [EBP + 0xffffff2c],EAX
004A1D7A  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A1D7D  39 55 F0                  CMP dword ptr [EBP + -0x10],EDX
004A1D80  0F 8E 36 01 00 00         JLE 0x004a1ebc
LAB_004a1d86:
004A1D86  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1D89  51                        PUSH ECX
004A1D8A  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1D8D  E8 DE AE 20 00            CALL 0x006acc70
004A1D92  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1D95  66 3D FF FF               CMP AX,0xffff
004A1D99  0F 84 05 01 00 00         JZ 0x004a1ea4
004A1D9F  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A1DA2  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1DA8  6A 01                     PUSH 0x1
004A1DAA  50                        PUSH EAX
004A1DAB  52                        PUSH EDX
004A1DAC  E8 09 0B F6 FF            CALL 0x004028ba
004A1DB1  8B F8                     MOV EDI,EAX
004A1DB3  85 FF                     TEST EDI,EDI
004A1DB5  75 1A                     JNZ 0x004a1dd1
004A1DB7  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A1DBC  68 5D 0F 00 00            PUSH 0xf5d
004A1DC1  68 3C BE 7A 00            PUSH 0x7abe3c
004A1DC6  50                        PUSH EAX
004A1DC7  68 04 00 FE AF            PUSH 0xaffe0004
004A1DCC  E8 6F 40 20 00            CALL 0x006a5e40
LAB_004a1dd1:
004A1DD1  8B 17                     MOV EDX,dword ptr [EDI]
004A1DD3  8B CF                     MOV ECX,EDI
004A1DD5  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004A1DDB  85 C0                     TEST EAX,EAX
004A1DDD  0F 84 C1 00 00 00         JZ 0x004a1ea4
004A1DE3  8B CF                     MOV ECX,EDI
004A1DE5  E8 6E 30 F6 FF            CALL 0x00404e58
004A1DEA  85 C0                     TEST EAX,EAX
004A1DEC  0F 85 93 00 00 00         JNZ 0x004a1e85
004A1DF2  8B 07                     MOV EAX,dword ptr [EDI]
004A1DF4  8B CF                     MOV ECX,EDI
004A1DF6  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A1DF9  83 F8 07                  CMP EAX,0x7
004A1DFC  74 0A                     JZ 0x004a1e08
004A1DFE  83 F8 13                  CMP EAX,0x13
004A1E01  74 05                     JZ 0x004a1e08
004A1E03  83 F8 1B                  CMP EAX,0x1b
004A1E06  75 6E                     JNZ 0x004a1e76
LAB_004a1e08:
004A1E08  8B CF                     MOV ECX,EDI
004A1E0A  E8 F9 07 F6 FF            CALL 0x00402608
004A1E0F  85 C0                     TEST EAX,EAX
004A1E11  75 63                     JNZ 0x004a1e76
004A1E13  66 8B 8E A3 02 00 00      MOV CX,word ptr [ESI + 0x2a3]
004A1E1A  66 8B 96 A5 02 00 00      MOV DX,word ptr [ESI + 0x2a5]
004A1E21  66 8B 86 A7 02 00 00      MOV AX,word ptr [ESI + 0x2a7]
004A1E28  66 89 8D 30 FF FF FF      MOV word ptr [EBP + 0xffffff30],CX
004A1E2F  8B 8E A9 02 00 00         MOV ECX,dword ptr [ESI + 0x2a9]
004A1E35  66 89 95 32 FF FF FF      MOV word ptr [EBP + 0xffffff32],DX
004A1E3C  8D 95 2C FF FF FF         LEA EDX,[EBP + 0xffffff2c]
004A1E42  89 8D 36 FF FF FF         MOV dword ptr [EBP + 0xffffff36],ECX
004A1E48  52                        PUSH EDX
004A1E49  6A 0F                     PUSH 0xf
004A1E4B  8B CF                     MOV ECX,EDI
004A1E4D  66 89 85 34 FF FF FF      MOV word ptr [EBP + 0xffffff34],AX
004A1E54  E8 CD 02 F6 FF            CALL 0x00402126
004A1E59  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1E5C  85 C0                     TEST EAX,EAX
004A1E5E  75 0F                     JNZ 0x004a1e6f
004A1E60  6A 01                     PUSH 0x1
004A1E62  6A 02                     PUSH 0x2
004A1E64  6A 01                     PUSH 0x1
004A1E66  50                        PUSH EAX
004A1E67  E8 24 C4 20 00            CALL 0x006ae290
004A1E6C  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a1e6f:
004A1E6F  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A1E72  51                        PUSH ECX
004A1E73  50                        PUSH EAX
004A1E74  EB 29                     JMP 0x004a1e9f
LAB_004a1e76:
004A1E76  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A1E79  8B CF                     MOV ECX,EDI
004A1E7B  52                        PUSH EDX
004A1E7C  6A 03                     PUSH 0x3
004A1E7E  E8 A3 02 F6 FF            CALL 0x00402126
004A1E83  EB 1F                     JMP 0x004a1ea4
LAB_004a1e85:
004A1E85  85 DB                     TEST EBX,EBX
004A1E87  75 11                     JNZ 0x004a1e9a
004A1E89  6A 01                     PUSH 0x1
004A1E8B  6A 02                     PUSH 0x2
004A1E8D  6A 01                     PUSH 0x1
004A1E8F  53                        PUSH EBX
004A1E90  E8 FB C3 20 00            CALL 0x006ae290
004A1E95  8B D8                     MOV EBX,EAX
004A1E97  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_004a1e9a:
004A1E9A  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1E9D  50                        PUSH EAX
004A1E9E  53                        PUSH EBX
LAB_004a1e9f:
004A1E9F  E8 1C C3 20 00            CALL 0x006ae1c0
LAB_004a1ea4:
004A1EA4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A1EA7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A1EAA  42                        INC EDX
004A1EAB  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A1EAE  81 E2 FF FF 00 00         AND EDX,0xffff
004A1EB4  3B D0                     CMP EDX,EAX
004A1EB6  0F 8C CA FE FF FF         JL 0x004a1d86
LAB_004a1ebc:
004A1EBC  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1EBF  85 C0                     TEST EAX,EAX
004A1EC1  74 1B                     JZ 0x004a1ede
004A1EC3  85 DB                     TEST EBX,EBX
004A1EC5  74 13                     JZ 0x004a1eda
004A1EC7  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1ECA  53                        PUSH EBX
004A1ECB  50                        PUSH EAX
004A1ECC  51                        PUSH ECX
004A1ECD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1ED3  E8 C3 1E F6 FF            CALL 0x00403d9b
004A1ED8  EB 53                     JMP 0x004a1f2d
LAB_004a1eda:
004A1EDA  85 C0                     TEST EAX,EAX
004A1EDC  75 4F                     JNZ 0x004a1f2d
LAB_004a1ede:
004A1EDE  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1EE1  85 C0                     TEST EAX,EAX
004A1EE3  74 48                     JZ 0x004a1f2d
004A1EE5  8B D0                     MOV EDX,EAX
004A1EE7  33 FF                     XOR EDI,EDI
004A1EE9  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
004A1EEC  85 DB                     TEST EBX,EBX
004A1EEE  7E 3D                     JLE 0x004a1f2d
004A1EF0  33 D2                     XOR EDX,EDX
LAB_004a1ef2:
004A1EF2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A1EF5  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1EF8  50                        PUSH EAX
004A1EF9  E8 72 AD 20 00            CALL 0x006acc70
004A1EFE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A1F01  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A1F04  6A 01                     PUSH 0x1
004A1F06  51                        PUSH ECX
004A1F07  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1F0D  52                        PUSH EDX
004A1F0E  E8 A7 09 F6 FF            CALL 0x004028ba
004A1F13  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A1F16  51                        PUSH ECX
004A1F17  6A 03                     PUSH 0x3
004A1F19  8B C8                     MOV ECX,EAX
004A1F1B  E8 06 02 F6 FF            CALL 0x00402126
004A1F20  47                        INC EDI
004A1F21  8B D7                     MOV EDX,EDI
004A1F23  81 E2 FF FF 00 00         AND EDX,0xffff
004A1F29  3B D3                     CMP EDX,EBX
004A1F2B  7C C5                     JL 0x004a1ef2
LAB_004a1f2d:
004A1F2D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A1F30  85 C0                     TEST EAX,EAX
004A1F32  74 06                     JZ 0x004a1f3a
004A1F34  50                        PUSH EAX
004A1F35  E8 D6 C1 20 00            CALL 0x006ae110
LAB_004a1f3a:
004A1F3A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A1F3D  85 C0                     TEST EAX,EAX
004A1F3F  74 06                     JZ 0x004a1f47
004A1F41  50                        PUSH EAX
004A1F42  E8 C9 C1 20 00            CALL 0x006ae110
LAB_004a1f47:
004A1F47  83 BE E6 01 00 00 0C      CMP dword ptr [ESI + 0x1e6],0xc
004A1F4E  0F 85 E3 01 00 00         JNZ 0x004a2137
004A1F54  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A1F5A  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A1F60  33 D2                     XOR EDX,EDX
004A1F62  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
004A1F68  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A1F6B  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A1F6E  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A1F71  3B C2                     CMP EAX,EDX
004A1F73  0F 8E 32 01 00 00         JLE 0x004a20ab
004A1F79  83 CB FF                  OR EBX,0xffffffff
LAB_004a1f7c:
004A1F7C  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A1F7F  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A1F82  50                        PUSH EAX
004A1F83  E8 E8 AC 20 00            CALL 0x006acc70
004A1F88  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A1F8B  66 3D FF FF               CMP AX,0xffff
004A1F8F  0F 84 FE 00 00 00         JZ 0x004a2093
004A1F95  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A1F98  6A 01                     PUSH 0x1
004A1F9A  50                        PUSH EAX
004A1F9B  51                        PUSH ECX
004A1F9C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A1FA2  E8 13 09 F6 FF            CALL 0x004028ba
004A1FA7  8B F8                     MOV EDI,EAX
004A1FA9  85 FF                     TEST EDI,EDI
004A1FAB  75 1B                     JNZ 0x004a1fc8
004A1FAD  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A1FB3  68 8E 0F 00 00            PUSH 0xf8e
004A1FB8  68 3C BE 7A 00            PUSH 0x7abe3c
004A1FBD  52                        PUSH EDX
004A1FBE  68 04 00 FE AF            PUSH 0xaffe0004
004A1FC3  E8 78 3E 20 00            CALL 0x006a5e40
LAB_004a1fc8:
004A1FC8  8B 07                     MOV EAX,dword ptr [EDI]
004A1FCA  8B CF                     MOV ECX,EDI
004A1FCC  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
004A1FD2  85 C0                     TEST EAX,EAX
004A1FD4  0F 84 B9 00 00 00         JZ 0x004a2093
004A1FDA  8B 17                     MOV EDX,dword ptr [EDI]
004A1FDC  8B CF                     MOV ECX,EDI
004A1FDE  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A1FE1  83 F8 07                  CMP EAX,0x7
004A1FE4  74 0A                     JZ 0x004a1ff0
004A1FE6  83 F8 13                  CMP EAX,0x13
004A1FE9  74 05                     JZ 0x004a1ff0
004A1FEB  83 F8 1B                  CMP EAX,0x1b
004A1FEE  75 4E                     JNZ 0x004a203e
LAB_004a1ff0:
004A1FF0  8B CF                     MOV ECX,EDI
004A1FF2  E8 11 06 F6 FF            CALL 0x00402608
004A1FF7  85 C0                     TEST EAX,EAX
004A1FF9  74 43                     JZ 0x004a203e
004A1FFB  8D 85 20 FF FF FF         LEA EAX,[EBP + 0xffffff20]
004A2001  8B CF                     MOV ECX,EDI
004A2003  50                        PUSH EAX
004A2004  6A 10                     PUSH 0x10
004A2006  E8 1B 01 F6 FF            CALL 0x00402126
004A200B  66 39 9E AD 02 00 00      CMP word ptr [ESI + 0x2ad],BX
004A2012  75 12                     JNZ 0x004a2026
004A2014  66 39 9E AF 02 00 00      CMP word ptr [ESI + 0x2af],BX
004A201B  75 09                     JNZ 0x004a2026
004A201D  66 39 9E B1 02 00 00      CMP word ptr [ESI + 0x2b1],BX
004A2024  74 6D                     JZ 0x004a2093
LAB_004a2026:
004A2026  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A2029  85 C0                     TEST EAX,EAX
004A202B  75 5C                     JNZ 0x004a2089
004A202D  6A 01                     PUSH 0x1
004A202F  6A 02                     PUSH 0x2
004A2031  6A 01                     PUSH 0x1
004A2033  50                        PUSH EAX
004A2034  E8 57 C2 20 00            CALL 0x006ae290
004A2039  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004A203C  EB 4B                     JMP 0x004a2089
LAB_004a203e:
004A203E  8B CF                     MOV ECX,EDI
004A2040  E8 13 2E F6 FF            CALL 0x00404e58
004A2045  85 C0                     TEST EAX,EAX
004A2047  75 0F                     JNZ 0x004a2058
004A2049  8D 55 E8                  LEA EDX,[EBP + -0x18]
004A204C  8B CF                     MOV ECX,EDI
004A204E  52                        PUSH EDX
004A204F  6A 03                     PUSH 0x3
004A2051  E8 D0 00 F6 FF            CALL 0x00402126
004A2056  EB 3B                     JMP 0x004a2093
LAB_004a2058:
004A2058  66 39 9E AD 02 00 00      CMP word ptr [ESI + 0x2ad],BX
004A205F  75 12                     JNZ 0x004a2073
004A2061  66 39 9E AF 02 00 00      CMP word ptr [ESI + 0x2af],BX
004A2068  75 09                     JNZ 0x004a2073
004A206A  66 39 9E B1 02 00 00      CMP word ptr [ESI + 0x2b1],BX
004A2071  74 20                     JZ 0x004a2093
LAB_004a2073:
004A2073  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2076  85 C0                     TEST EAX,EAX
004A2078  75 0F                     JNZ 0x004a2089
004A207A  6A 01                     PUSH 0x1
004A207C  6A 02                     PUSH 0x2
004A207E  6A 01                     PUSH 0x1
004A2080  50                        PUSH EAX
004A2081  E8 0A C2 20 00            CALL 0x006ae290
004A2086  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a2089:
004A2089  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A208C  51                        PUSH ECX
004A208D  50                        PUSH EAX
004A208E  E8 2D C1 20 00            CALL 0x006ae1c0
LAB_004a2093:
004A2093  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A2096  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2099  42                        INC EDX
004A209A  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A209D  81 E2 FF FF 00 00         AND EDX,0xffff
004A20A3  3B D0                     CMP EDX,EAX
004A20A5  0F 8C D1 FE FF FF         JL 0x004a1f7c
LAB_004a20ab:
004A20AB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A20AE  85 C0                     TEST EAX,EAX
004A20B0  74 1E                     JZ 0x004a20d0
004A20B2  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A20B5  85 C9                     TEST ECX,ECX
004A20B7  74 13                     JZ 0x004a20cc
004A20B9  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A20BC  51                        PUSH ECX
004A20BD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A20C3  50                        PUSH EAX
004A20C4  52                        PUSH EDX
004A20C5  E8 D1 1C F6 FF            CALL 0x00403d9b
004A20CA  EB 51                     JMP 0x004a211d
LAB_004a20cc:
004A20CC  85 C0                     TEST EAX,EAX
004A20CE  75 4D                     JNZ 0x004a211d
LAB_004a20d0:
004A20D0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A20D3  85 C0                     TEST EAX,EAX
004A20D5  74 46                     JZ 0x004a211d
004A20D7  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A20DA  33 FF                     XOR EDI,EDI
004A20DC  85 DB                     TEST EBX,EBX
004A20DE  7E 3D                     JLE 0x004a211d
004A20E0  33 D2                     XOR EDX,EDX
LAB_004a20e2:
004A20E2  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A20E5  51                        PUSH ECX
004A20E6  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A20E9  E8 82 AB 20 00            CALL 0x006acc70
004A20EE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A20F1  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A20F4  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A20FA  6A 01                     PUSH 0x1
004A20FC  52                        PUSH EDX
004A20FD  50                        PUSH EAX
004A20FE  E8 B7 07 F6 FF            CALL 0x004028ba
004A2103  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A2106  51                        PUSH ECX
004A2107  6A 03                     PUSH 0x3
004A2109  8B C8                     MOV ECX,EAX
004A210B  E8 16 00 F6 FF            CALL 0x00402126
004A2110  47                        INC EDI
004A2111  8B D7                     MOV EDX,EDI
004A2113  81 E2 FF FF 00 00         AND EDX,0xffff
004A2119  3B D3                     CMP EDX,EBX
004A211B  7C C5                     JL 0x004a20e2
LAB_004a211d:
004A211D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A2120  85 C0                     TEST EAX,EAX
004A2122  74 06                     JZ 0x004a212a
004A2124  50                        PUSH EAX
004A2125  E8 E6 BF 20 00            CALL 0x006ae110
LAB_004a212a:
004A212A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A212D  85 C0                     TEST EAX,EAX
004A212F  74 06                     JZ 0x004a2137
004A2131  50                        PUSH EAX
004A2132  E8 D9 BF 20 00            CALL 0x006ae110
LAB_004a2137:
004A2137  83 BE E6 01 00 00 0D      CMP dword ptr [ESI + 0x1e6],0xd
004A213E  0F 85 F6 00 00 00         JNZ 0x004a223a
004A2144  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A214A  66 8B 8E B5 02 00 00      MOV CX,word ptr [ESI + 0x2b5]
004A2151  33 DB                     XOR EBX,EBX
004A2153  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A2159  66 8B 96 B7 02 00 00      MOV DX,word ptr [ESI + 0x2b7]
004A2160  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
004A2163  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A2166  66 8B 86 B3 02 00 00      MOV AX,word ptr [ESI + 0x2b3]
004A216D  66 89 4D B2               MOV word ptr [EBP + -0x4e],CX
004A2171  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
004A2175  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2178  85 C0                     TEST EAX,EAX
004A217A  66 89 55 B4               MOV word ptr [EBP + -0x4c],DX
004A217E  0F 8E B6 00 00 00         JLE 0x004a223a
004A2184  33 D2                     XOR EDX,EDX
LAB_004a2186:
004A2186  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A2189  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A218C  50                        PUSH EAX
004A218D  E8 DE AA 20 00            CALL 0x006acc70
004A2192  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A2195  66 3D FF FF               CMP AX,0xffff
004A2199  0F 84 87 00 00 00         JZ 0x004a2226
004A219F  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A21A2  6A 01                     PUSH 0x1
004A21A4  50                        PUSH EAX
004A21A5  51                        PUSH ECX
004A21A6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A21AC  E8 09 07 F6 FF            CALL 0x004028ba
004A21B1  8B F8                     MOV EDI,EAX
004A21B3  85 FF                     TEST EDI,EDI
004A21B5  75 1B                     JNZ 0x004a21d2
004A21B7  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A21BD  68 C2 0F 00 00            PUSH 0xfc2
004A21C2  68 3C BE 7A 00            PUSH 0x7abe3c
004A21C7  52                        PUSH EDX
004A21C8  68 04 00 FE AF            PUSH 0xaffe0004
004A21CD  E8 6E 3C 20 00            CALL 0x006a5e40
LAB_004a21d2:
004A21D2  8B 86 B9 02 00 00         MOV EAX,dword ptr [ESI + 0x2b9]
004A21D8  83 F8 FF                  CMP EAX,-0x1
004A21DB  75 22                     JNZ 0x004a21ff
004A21DD  8B 87 B6 07 00 00         MOV EAX,dword ptr [EDI + 0x7b6]
004A21E3  85 C0                     TEST EAX,EAX
004A21E5  74 12                     JZ 0x004a21f9
004A21E7  8B 87 BE 07 00 00         MOV EAX,dword ptr [EDI + 0x7be]
004A21ED  85 C0                     TEST EAX,EAX
004A21EF  7E 08                     JLE 0x004a21f9
004A21F1  8D 45 AC                  LEA EAX,[EBP + -0x54]
004A21F4  50                        PUSH EAX
004A21F5  6A 07                     PUSH 0x7
004A21F7  EB 26                     JMP 0x004a221f
LAB_004a21f9:
004A21F9  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A21FC  51                        PUSH ECX
004A21FD  EB 1E                     JMP 0x004a221d
LAB_004a21ff:
004A21FF  39 87 B6 07 00 00         CMP dword ptr [EDI + 0x7b6],EAX
004A2205  75 12                     JNZ 0x004a2219
004A2207  8B 87 BE 07 00 00         MOV EAX,dword ptr [EDI + 0x7be]
004A220D  85 C0                     TEST EAX,EAX
004A220F  7E 08                     JLE 0x004a2219
004A2211  8D 55 AC                  LEA EDX,[EBP + -0x54]
004A2214  52                        PUSH EDX
004A2215  6A 07                     PUSH 0x7
004A2217  EB 06                     JMP 0x004a221f
LAB_004a2219:
004A2219  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A221C  50                        PUSH EAX
LAB_004a221d:
004A221D  6A 03                     PUSH 0x3
LAB_004a221f:
004A221F  8B CF                     MOV ECX,EDI
004A2221  E8 00 FF F5 FF            CALL 0x00402126
LAB_004a2226:
004A2226  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2229  43                        INC EBX
004A222A  8B D3                     MOV EDX,EBX
004A222C  81 E2 FF FF 00 00         AND EDX,0xffff
004A2232  3B D0                     CMP EDX,EAX
004A2234  0F 8C 4C FF FF FF         JL 0x004a2186
LAB_004a223a:
004A223A  83 BE E6 01 00 00 0E      CMP dword ptr [ESI + 0x1e6],0xe
004A2241  0F 85 C2 00 00 00         JNZ 0x004a2309
004A2247  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A224D  66 8B 96 BD 02 00 00      MOV DX,word ptr [ESI + 0x2bd]
004A2254  33 DB                     XOR EBX,EBX
004A2256  8B 81 E4 00 00 00         MOV EAX,dword ptr [ECX + 0xe4]
004A225C  66 8B 8E C1 02 00 00      MOV CX,word ptr [ESI + 0x2c1]
004A2263  89 45 88                  MOV dword ptr [EBP + -0x78],EAX
004A2266  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A2269  66 8B 86 BF 02 00 00      MOV AX,word ptr [ESI + 0x2bf]
004A2270  66 89 55 8C               MOV word ptr [EBP + -0x74],DX
004A2274  66 89 45 8E               MOV word ptr [EBP + -0x72],AX
004A2278  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A227B  85 C0                     TEST EAX,EAX
004A227D  66 89 4D 90               MOV word ptr [EBP + -0x70],CX
004A2281  0F 8E 82 00 00 00         JLE 0x004a2309
004A2287  33 D2                     XOR EDX,EDX
LAB_004a2289:
004A2289  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A228C  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A228F  50                        PUSH EAX
004A2290  E8 DB A9 20 00            CALL 0x006acc70
004A2295  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A2298  66 3D FF FF               CMP AX,0xffff
004A229C  74 5B                     JZ 0x004a22f9
004A229E  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A22A1  6A 01                     PUSH 0x1
004A22A3  50                        PUSH EAX
004A22A4  51                        PUSH ECX
004A22A5  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A22AB  E8 0A 06 F6 FF            CALL 0x004028ba
004A22B0  8B F8                     MOV EDI,EAX
004A22B2  85 FF                     TEST EDI,EDI
004A22B4  75 1B                     JNZ 0x004a22d1
004A22B6  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A22BC  68 EA 0F 00 00            PUSH 0xfea
004A22C1  68 3C BE 7A 00            PUSH 0x7abe3c
004A22C6  52                        PUSH EDX
004A22C7  68 04 00 FE AF            PUSH 0xaffe0004
004A22CC  E8 6F 3B 20 00            CALL 0x006a5e40
LAB_004a22d1:
004A22D1  83 BF F7 06 00 00 04      CMP dword ptr [EDI + 0x6f7],0x4
004A22D8  75 12                     JNZ 0x004a22ec
004A22DA  8B 87 A2 07 00 00         MOV EAX,dword ptr [EDI + 0x7a2]
004A22E0  85 C0                     TEST EAX,EAX
004A22E2  7E 08                     JLE 0x004a22ec
004A22E4  8D 45 88                  LEA EAX,[EBP + -0x78]
004A22E7  50                        PUSH EAX
004A22E8  6A 0A                     PUSH 0xa
004A22EA  EB 06                     JMP 0x004a22f2
LAB_004a22ec:
004A22EC  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A22EF  51                        PUSH ECX
004A22F0  6A 03                     PUSH 0x3
LAB_004a22f2:
004A22F2  8B CF                     MOV ECX,EDI
004A22F4  E8 2D FE F5 FF            CALL 0x00402126
LAB_004a22f9:
004A22F9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A22FC  43                        INC EBX
004A22FD  8B D3                     MOV EDX,EBX
004A22FF  81 E2 FF FF 00 00         AND EDX,0xffff
004A2305  3B D0                     CMP EDX,EAX
004A2307  7C 80                     JL 0x004a2289
LAB_004a2309:
004A2309  83 BE E6 01 00 00 0F      CMP dword ptr [ESI + 0x1e6],0xf
004A2310  0F 85 CA 00 00 00         JNZ 0x004a23e0
004A2316  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A231C  66 8B 8E C4 02 00 00      MOV CX,word ptr [ESI + 0x2c4]
004A2323  33 DB                     XOR EBX,EBX
004A2325  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A232B  8B 96 C6 02 00 00         MOV EDX,dword ptr [ESI + 0x2c6]
004A2331  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
004A2337  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A233A  8A 86 C3 02 00 00         MOV AL,byte ptr [ESI + 0x2c3]
004A2340  66 89 4D 81               MOV word ptr [EBP + -0x7f],CX
004A2344  88 45 80                  MOV byte ptr [EBP + -0x80],AL
004A2347  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A234A  85 C0                     TEST EAX,EAX
004A234C  89 55 83                  MOV dword ptr [EBP + -0x7d],EDX
004A234F  0F 8E 8B 00 00 00         JLE 0x004a23e0
004A2355  33 D2                     XOR EDX,EDX
LAB_004a2357:
004A2357  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A235A  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A235D  50                        PUSH EAX
004A235E  E8 0D A9 20 00            CALL 0x006acc70
004A2363  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A2366  66 3D FF FF               CMP AX,0xffff
004A236A  74 60                     JZ 0x004a23cc
004A236C  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A236F  6A 01                     PUSH 0x1
004A2371  50                        PUSH EAX
004A2372  51                        PUSH ECX
004A2373  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2379  E8 3C 05 F6 FF            CALL 0x004028ba
004A237E  8B F8                     MOV EDI,EAX
004A2380  85 FF                     TEST EDI,EDI
004A2382  75 1B                     JNZ 0x004a239f
004A2384  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A238A  68 03 10 00 00            PUSH 0x1003
004A238F  68 3C BE 7A 00            PUSH 0x7abe3c
004A2394  52                        PUSH EDX
004A2395  68 04 00 FE AF            PUSH 0xaffe0004
004A239A  E8 A1 3A 20 00            CALL 0x006a5e40
LAB_004a239f:
004A239F  8B 87 F7 06 00 00         MOV EAX,dword ptr [EDI + 0x6f7]
004A23A5  83 F8 06                  CMP EAX,0x6
004A23A8  74 12                     JZ 0x004a23bc
004A23AA  83 F8 12                  CMP EAX,0x12
004A23AD  74 0D                     JZ 0x004a23bc
004A23AF  83 F8 22                  CMP EAX,0x22
004A23B2  74 08                     JZ 0x004a23bc
004A23B4  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A23B7  50                        PUSH EAX
004A23B8  6A 03                     PUSH 0x3
004A23BA  EB 09                     JMP 0x004a23c5
LAB_004a23bc:
004A23BC  8D 8D 7C FF FF FF         LEA ECX,[EBP + 0xffffff7c]
004A23C2  51                        PUSH ECX
004A23C3  6A 09                     PUSH 0x9
LAB_004a23c5:
004A23C5  8B CF                     MOV ECX,EDI
004A23C7  E8 5A FD F5 FF            CALL 0x00402126
LAB_004a23cc:
004A23CC  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A23CF  43                        INC EBX
004A23D0  8B D3                     MOV EDX,EBX
004A23D2  81 E2 FF FF 00 00         AND EDX,0xffff
004A23D8  3B D0                     CMP EDX,EAX
004A23DA  0F 8C 77 FF FF FF         JL 0x004a2357
LAB_004a23e0:
004A23E0  83 BE E6 01 00 00 11      CMP dword ptr [ESI + 0x1e6],0x11
004A23E7  0F 85 BB 00 00 00         JNZ 0x004a24a8
004A23ED  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A23F3  8B 8E CE 02 00 00         MOV ECX,dword ptr [ESI + 0x2ce]
004A23F9  33 DB                     XOR EBX,EBX
004A23FB  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A2401  66 8B 96 D2 02 00 00      MOV DX,word ptr [ESI + 0x2d2]
004A2408  89 85 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EAX
004A240E  66 8B 86 D4 02 00 00      MOV AX,word ptr [ESI + 0x2d4]
004A2415  66 89 85 46 FF FF FF      MOV word ptr [EBP + 0xffffff46],AX
004A241C  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A241F  89 8D 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],ECX
004A2425  66 8B 8E D6 02 00 00      MOV CX,word ptr [ESI + 0x2d6]
004A242C  85 C0                     TEST EAX,EAX
004A242E  66 89 95 44 FF FF FF      MOV word ptr [EBP + 0xffffff44],DX
004A2435  66 89 8D 48 FF FF FF      MOV word ptr [EBP + 0xffffff48],CX
004A243C  7E 6A                     JLE 0x004a24a8
004A243E  33 D2                     XOR EDX,EDX
LAB_004a2440:
004A2440  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A2443  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A2446  50                        PUSH EAX
004A2447  E8 24 A8 20 00            CALL 0x006acc70
004A244C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A244F  66 3D FF FF               CMP AX,0xffff
004A2453  74 43                     JZ 0x004a2498
004A2455  8A 4E 24                  MOV CL,byte ptr [ESI + 0x24]
004A2458  6A 01                     PUSH 0x1
004A245A  50                        PUSH EAX
004A245B  51                        PUSH ECX
004A245C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2462  E8 53 04 F6 FF            CALL 0x004028ba
004A2467  8B F8                     MOV EDI,EAX
004A2469  85 FF                     TEST EDI,EDI
004A246B  75 1B                     JNZ 0x004a2488
004A246D  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004A2473  68 1E 10 00 00            PUSH 0x101e
004A2478  68 3C BE 7A 00            PUSH 0x7abe3c
004A247D  52                        PUSH EDX
004A247E  68 04 00 FE AF            PUSH 0xaffe0004
004A2483  E8 B8 39 20 00            CALL 0x006a5e40
LAB_004a2488:
004A2488  8D 85 3C FF FF FF         LEA EAX,[EBP + 0xffffff3c]
004A248E  8B CF                     MOV ECX,EDI
004A2490  50                        PUSH EAX
004A2491  6A 16                     PUSH 0x16
004A2493  E8 8E FC F5 FF            CALL 0x00402126
LAB_004a2498:
004A2498  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A249B  43                        INC EBX
004A249C  8B D3                     MOV EDX,EBX
004A249E  81 E2 FF FF 00 00         AND EDX,0xffff
004A24A4  3B D0                     CMP EDX,EAX
004A24A6  7C 98                     JL 0x004a2440
LAB_004a24a8:
004A24A8  83 BE E6 01 00 00 10      CMP dword ptr [ESI + 0x1e6],0x10
004A24AF  0F 85 E4 00 00 00         JNZ 0x004a2599
004A24B5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004A24BB  8B 86 D8 02 00 00         MOV EAX,dword ptr [ESI + 0x2d8]
004A24C1  33 DB                     XOR EBX,EBX
004A24C3  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
004A24C9  66 8B 8E DC 02 00 00      MOV CX,word ptr [ESI + 0x2dc]
004A24D0  89 85 0C FF FF FF         MOV dword ptr [EBP + 0xffffff0c],EAX
004A24D6  66 8B 86 E0 02 00 00      MOV AX,word ptr [ESI + 0x2e0]
004A24DD  66 89 85 14 FF FF FF      MOV word ptr [EBP + 0xffffff14],AX
004A24E4  66 8B 86 E6 02 00 00      MOV AX,word ptr [ESI + 0x2e6]
004A24EB  89 95 08 FF FF FF         MOV dword ptr [EBP + 0xffffff08],EDX
004A24F1  66 8B 96 DE 02 00 00      MOV DX,word ptr [ESI + 0x2de]
004A24F8  66 89 85 1A FF FF FF      MOV word ptr [EBP + 0xffffff1a],AX
004A24FF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2502  66 89 8D 10 FF FF FF      MOV word ptr [EBP + 0xffffff10],CX
004A2509  66 8B 8E E2 02 00 00      MOV CX,word ptr [ESI + 0x2e2]
004A2510  66 89 95 12 FF FF FF      MOV word ptr [EBP + 0xffffff12],DX
004A2517  66 8B 96 E4 02 00 00      MOV DX,word ptr [ESI + 0x2e4]
004A251E  85 C0                     TEST EAX,EAX
004A2520  66 89 8D 16 FF FF FF      MOV word ptr [EBP + 0xffffff16],CX
004A2527  66 89 95 18 FF FF FF      MOV word ptr [EBP + 0xffffff18],DX
004A252E  7E 69                     JLE 0x004a2599
004A2530  33 D2                     XOR EDX,EDX
LAB_004a2532:
004A2532  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A2535  51                        PUSH ECX
004A2536  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A2539  E8 32 A7 20 00            CALL 0x006acc70
004A253E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A2541  66 3D FF FF               CMP AX,0xffff
004A2545  74 42                     JZ 0x004a2589
004A2547  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A254A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2550  6A 01                     PUSH 0x1
004A2552  50                        PUSH EAX
004A2553  52                        PUSH EDX
004A2554  E8 61 03 F6 FF            CALL 0x004028ba
004A2559  8B F8                     MOV EDI,EAX
004A255B  85 FF                     TEST EDI,EDI
004A255D  75 1A                     JNZ 0x004a2579
004A255F  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A2564  68 32 10 00 00            PUSH 0x1032
004A2569  68 3C BE 7A 00            PUSH 0x7abe3c
004A256E  50                        PUSH EAX
004A256F  68 04 00 FE AF            PUSH 0xaffe0004
004A2574  E8 C7 38 20 00            CALL 0x006a5e40
LAB_004a2579:
004A2579  8D 8D 08 FF FF FF         LEA ECX,[EBP + 0xffffff08]
004A257F  51                        PUSH ECX
004A2580  6A 15                     PUSH 0x15
004A2582  8B CF                     MOV ECX,EDI
004A2584  E8 9D FB F5 FF            CALL 0x00402126
LAB_004a2589:
004A2589  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A258C  43                        INC EBX
004A258D  8B D3                     MOV EDX,EBX
004A258F  81 E2 FF FF 00 00         AND EDX,0xffff
004A2595  3B D0                     CMP EDX,EAX
004A2597  7C 99                     JL 0x004a2532
LAB_004a2599:
004A2599  83 BE E6 01 00 00 12      CMP dword ptr [ESI + 0x1e6],0x12
004A25A0  0F 85 B6 01 00 00         JNZ 0x004a275c
004A25A6  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A25AC  66 8B 8E E8 02 00 00      MOV CX,word ptr [ESI + 0x2e8]
004A25B3  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
004A25B6  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A25BC  66 8B 96 EA 02 00 00      MOV DX,word ptr [ESI + 0x2ea]
004A25C3  89 45 94                  MOV dword ptr [EBP + -0x6c],EAX
004A25C6  66 8B 86 EC 02 00 00      MOV AX,word ptr [ESI + 0x2ec]
004A25CD  66 89 55 9A               MOV word ptr [EBP + -0x66],DX
004A25D1  66 89 45 9C               MOV word ptr [EBP + -0x64],AX
004A25D5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A25D8  33 D2                     XOR EDX,EDX
004A25DA  3B C2                     CMP EAX,EDX
004A25DC  66 89 4D 98               MOV word ptr [EBP + -0x68],CX
004A25E0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A25E3  0F 8E EA 00 00 00         JLE 0x004a26d3
LAB_004a25e9:
004A25E9  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A25EC  51                        PUSH ECX
004A25ED  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A25F0  E8 7B A6 20 00            CALL 0x006acc70
004A25F5  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A25F8  66 3D FF FF               CMP AX,0xffff
004A25FC  0F 84 B9 00 00 00         JZ 0x004a26bb
004A2602  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A2605  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A260B  6A 01                     PUSH 0x1
004A260D  50                        PUSH EAX
004A260E  52                        PUSH EDX
004A260F  E8 A6 02 F6 FF            CALL 0x004028ba
004A2614  8B F8                     MOV EDI,EAX
004A2616  85 FF                     TEST EDI,EDI
004A2618  75 1A                     JNZ 0x004a2634
004A261A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A261F  68 42 10 00 00            PUSH 0x1042
004A2624  68 3C BE 7A 00            PUSH 0x7abe3c
004A2629  50                        PUSH EAX
004A262A  68 04 00 FE AF            PUSH 0xaffe0004
004A262F  E8 0C 38 20 00            CALL 0x006a5e40
LAB_004a2634:
004A2634  8B 17                     MOV EDX,dword ptr [EDI]
004A2636  8B CF                     MOV ECX,EDI
004A2638  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A263B  83 F8 07                  CMP EAX,0x7
004A263E  74 4E                     JZ 0x004a268e
004A2640  8B 07                     MOV EAX,dword ptr [EDI]
004A2642  8B CF                     MOV ECX,EDI
004A2644  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A2647  83 F8 13                  CMP EAX,0x13
004A264A  74 42                     JZ 0x004a268e
004A264C  8B 17                     MOV EDX,dword ptr [EDI]
004A264E  8B CF                     MOV ECX,EDI
004A2650  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A2653  83 F8 1B                  CMP EAX,0x1b
004A2656  74 36                     JZ 0x004a268e
004A2658  8B CF                     MOV ECX,EDI
004A265A  E8 F9 27 F6 FF            CALL 0x00404e58
004A265F  85 C0                     TEST EAX,EAX
004A2661  75 0F                     JNZ 0x004a2672
004A2663  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A2666  8B CF                     MOV ECX,EDI
004A2668  50                        PUSH EAX
004A2669  6A 03                     PUSH 0x3
004A266B  E8 B6 FA F5 FF            CALL 0x00402126
004A2670  EB 49                     JMP 0x004a26bb
LAB_004a2672:
004A2672  85 DB                     TEST EBX,EBX
004A2674  75 11                     JNZ 0x004a2687
004A2676  6A 01                     PUSH 0x1
004A2678  6A 02                     PUSH 0x2
004A267A  6A 01                     PUSH 0x1
004A267C  53                        PUSH EBX
004A267D  E8 0E BC 20 00            CALL 0x006ae290
004A2682  8B D8                     MOV EBX,EAX
004A2684  89 5D F8                  MOV dword ptr [EBP + -0x8],EBX
LAB_004a2687:
004A2687  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A268A  51                        PUSH ECX
004A268B  53                        PUSH EBX
004A268C  EB 28                     JMP 0x004a26b6
LAB_004a268e:
004A268E  8D 55 94                  LEA EDX,[EBP + -0x6c]
004A2691  8B CF                     MOV ECX,EDI
004A2693  52                        PUSH EDX
004A2694  6A 17                     PUSH 0x17
004A2696  E8 8B FA F5 FF            CALL 0x00402126
004A269B  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A269E  85 C0                     TEST EAX,EAX
004A26A0  75 0F                     JNZ 0x004a26b1
004A26A2  6A 01                     PUSH 0x1
004A26A4  6A 02                     PUSH 0x2
004A26A6  6A 01                     PUSH 0x1
004A26A8  50                        PUSH EAX
004A26A9  E8 E2 BB 20 00            CALL 0x006ae290
004A26AE  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a26b1:
004A26B1  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A26B4  51                        PUSH ECX
004A26B5  50                        PUSH EAX
LAB_004a26b6:
004A26B6  E8 05 BB 20 00            CALL 0x006ae1c0
LAB_004a26bb:
004A26BB  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004A26BE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A26C1  42                        INC EDX
004A26C2  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
004A26C5  81 E2 FF FF 00 00         AND EDX,0xffff
004A26CB  3B D0                     CMP EDX,EAX
004A26CD  0F 8C 16 FF FF FF         JL 0x004a25e9
LAB_004a26d3:
004A26D3  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A26D6  85 C0                     TEST EAX,EAX
004A26D8  74 1B                     JZ 0x004a26f5
004A26DA  85 DB                     TEST EBX,EBX
004A26DC  74 13                     JZ 0x004a26f1
004A26DE  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A26E1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A26E7  53                        PUSH EBX
004A26E8  50                        PUSH EAX
004A26E9  52                        PUSH EDX
004A26EA  E8 AC 16 F6 FF            CALL 0x00403d9b
004A26EF  EB 51                     JMP 0x004a2742
LAB_004a26f1:
004A26F1  85 C0                     TEST EAX,EAX
004A26F3  75 4D                     JNZ 0x004a2742
LAB_004a26f5:
004A26F5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A26F8  85 C0                     TEST EAX,EAX
004A26FA  74 46                     JZ 0x004a2742
004A26FC  8B 58 0C                  MOV EBX,dword ptr [EAX + 0xc]
004A26FF  33 FF                     XOR EDI,EDI
004A2701  85 DB                     TEST EBX,EBX
004A2703  7E 3D                     JLE 0x004a2742
004A2705  33 D2                     XOR EDX,EDX
LAB_004a2707:
004A2707  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A270A  51                        PUSH ECX
004A270B  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A270E  E8 5D A5 20 00            CALL 0x006acc70
004A2713  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
004A2716  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A2719  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A271F  6A 01                     PUSH 0x1
004A2721  52                        PUSH EDX
004A2722  50                        PUSH EAX
004A2723  E8 92 01 F6 FF            CALL 0x004028ba
004A2728  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A272B  51                        PUSH ECX
004A272C  6A 03                     PUSH 0x3
004A272E  8B C8                     MOV ECX,EAX
004A2730  E8 F1 F9 F5 FF            CALL 0x00402126
004A2735  47                        INC EDI
004A2736  8B D7                     MOV EDX,EDI
004A2738  81 E2 FF FF 00 00         AND EDX,0xffff
004A273E  3B D3                     CMP EDX,EBX
004A2740  7C C5                     JL 0x004a2707
LAB_004a2742:
004A2742  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A2745  85 C0                     TEST EAX,EAX
004A2747  74 06                     JZ 0x004a274f
004A2749  50                        PUSH EAX
004A274A  E8 C1 B9 20 00            CALL 0x006ae110
LAB_004a274f:
004A274F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2752  85 C0                     TEST EAX,EAX
004A2754  74 06                     JZ 0x004a275c
004A2756  50                        PUSH EAX
004A2757  E8 B4 B9 20 00            CALL 0x006ae110
LAB_004a275c:
004A275C  83 BE E6 01 00 00 13      CMP dword ptr [ESI + 0x1e6],0x13
004A2763  0F 85 70 01 00 00         JNZ 0x004a28d9
004A2769  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
004A276F  66 8B 8E F0 02 00 00      MOV CX,word ptr [ESI + 0x2f0]
004A2776  33 DB                     XOR EBX,EBX
004A2778  8B 82 E4 00 00 00         MOV EAX,dword ptr [EDX + 0xe4]
004A277E  66 8B 96 F2 02 00 00      MOV DX,word ptr [ESI + 0x2f2]
004A2785  89 85 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],EAX
004A278B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A278E  66 8B 86 EE 02 00 00      MOV AX,word ptr [ESI + 0x2ee]
004A2795  66 89 8D 52 FF FF FF      MOV word ptr [EBP + 0xffffff52],CX
004A279C  66 89 85 50 FF FF FF      MOV word ptr [EBP + 0xffffff50],AX
004A27A3  8B 86 F4 02 00 00         MOV EAX,dword ptr [ESI + 0x2f4]
004A27A9  89 85 56 FF FF FF         MOV dword ptr [EBP + 0xffffff56],EAX
004A27AF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A27B2  85 C0                     TEST EAX,EAX
004A27B4  66 89 95 54 FF FF FF      MOV word ptr [EBP + 0xffffff54],DX
004A27BB  0F 8E EA 00 00 00         JLE 0x004a28ab
004A27C1  33 D2                     XOR EDX,EDX
LAB_004a27c3:
004A27C3  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A27C6  51                        PUSH ECX
004A27C7  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A27CA  E8 A1 A4 20 00            CALL 0x006acc70
004A27CF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A27D2  66 3D FF FF               CMP AX,0xffff
004A27D6  0F 84 BB 00 00 00         JZ 0x004a2897
004A27DC  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A27DF  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A27E5  6A 01                     PUSH 0x1
004A27E7  50                        PUSH EAX
004A27E8  52                        PUSH EDX
004A27E9  E8 CC 00 F6 FF            CALL 0x004028ba
004A27EE  8B F8                     MOV EDI,EAX
004A27F0  85 FF                     TEST EDI,EDI
004A27F2  75 1A                     JNZ 0x004a280e
004A27F4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A27F9  68 71 10 00 00            PUSH 0x1071
004A27FE  68 3C BE 7A 00            PUSH 0x7abe3c
004A2803  50                        PUSH EAX
004A2804  68 04 00 FE AF            PUSH 0xaffe0004
004A2809  E8 32 36 20 00            CALL 0x006a5e40
LAB_004a280e:
004A280E  8B 17                     MOV EDX,dword ptr [EDI]
004A2810  8B CF                     MOV ECX,EDI
004A2812  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A2815  83 F8 0C                  CMP EAX,0xc
004A2818  74 4D                     JZ 0x004a2867
004A281A  8B 07                     MOV EAX,dword ptr [EDI]
004A281C  8B CF                     MOV ECX,EDI
004A281E  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A2821  83 F8 18                  CMP EAX,0x18
004A2824  74 41                     JZ 0x004a2867
004A2826  8B 17                     MOV EDX,dword ptr [EDI]
004A2828  8B CF                     MOV ECX,EDI
004A282A  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004A282D  83 F8 1D                  CMP EAX,0x1d
004A2830  74 35                     JZ 0x004a2867
004A2832  8B CF                     MOV ECX,EDI
004A2834  E8 1F 26 F6 FF            CALL 0x00404e58
004A2839  85 C0                     TEST EAX,EAX
004A283B  75 08                     JNZ 0x004a2845
004A283D  8D 45 E8                  LEA EAX,[EBP + -0x18]
004A2840  50                        PUSH EAX
004A2841  6A 03                     PUSH 0x3
004A2843  EB 4B                     JMP 0x004a2890
LAB_004a2845:
004A2845  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2848  85 C0                     TEST EAX,EAX
004A284A  75 0F                     JNZ 0x004a285b
004A284C  6A 01                     PUSH 0x1
004A284E  6A 02                     PUSH 0x2
004A2850  6A 01                     PUSH 0x1
004A2852  50                        PUSH EAX
004A2853  E8 38 BA 20 00            CALL 0x006ae290
004A2858  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a285b:
004A285B  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A285E  51                        PUSH ECX
004A285F  50                        PUSH EAX
004A2860  E8 5B B9 20 00            CALL 0x006ae1c0
004A2865  EB 30                     JMP 0x004a2897
LAB_004a2867:
004A2867  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A286A  85 C0                     TEST EAX,EAX
004A286C  75 0F                     JNZ 0x004a287d
004A286E  6A 01                     PUSH 0x1
004A2870  6A 02                     PUSH 0x2
004A2872  6A 01                     PUSH 0x1
004A2874  50                        PUSH EAX
004A2875  E8 16 BA 20 00            CALL 0x006ae290
004A287A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a287d:
004A287D  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A2880  52                        PUSH EDX
004A2881  50                        PUSH EAX
004A2882  E8 39 B9 20 00            CALL 0x006ae1c0
004A2887  8D 85 4C FF FF FF         LEA EAX,[EBP + 0xffffff4c]
004A288D  50                        PUSH EAX
004A288E  6A 12                     PUSH 0x12
LAB_004a2890:
004A2890  8B CF                     MOV ECX,EDI
004A2892  E8 8F F8 F5 FF            CALL 0x00402126
LAB_004a2897:
004A2897  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A289A  43                        INC EBX
004A289B  8B D3                     MOV EDX,EBX
004A289D  81 E2 FF FF 00 00         AND EDX,0xffff
004A28A3  3B D0                     CMP EDX,EAX
004A28A5  0F 8C 18 FF FF FF         JL 0x004a27c3
LAB_004a28ab:
004A28AB  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
004A28AE  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A28B1  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A28B4  57                        PUSH EDI
004A28B5  51                        PUSH ECX
004A28B6  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A28BC  52                        PUSH EDX
004A28BD  E8 D9 14 F6 FF            CALL 0x00403d9b
004A28C2  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A28C5  85 C0                     TEST EAX,EAX
004A28C7  74 06                     JZ 0x004a28cf
004A28C9  50                        PUSH EAX
004A28CA  E8 41 B8 20 00            CALL 0x006ae110
LAB_004a28cf:
004A28CF  85 FF                     TEST EDI,EDI
004A28D1  74 06                     JZ 0x004a28d9
004A28D3  57                        PUSH EDI
004A28D4  E8 37 B8 20 00            CALL 0x006ae110
LAB_004a28d9:
004A28D9  83 BE E6 01 00 00 14      CMP dword ptr [ESI + 0x1e6],0x14
004A28E0  0F 85 9F 01 00 00         JNZ 0x004a2a85
004A28E6  0F BF 86 FC 02 00 00      MOVSX EAX,word ptr [ESI + 0x2fc]
004A28ED  0F BF 8E FA 02 00 00      MOVSX ECX,word ptr [ESI + 0x2fa]
004A28F4  0F BF 96 F8 02 00 00      MOVSX EDX,word ptr [ESI + 0x2f8]
004A28FB  6A 00                     PUSH 0x0
004A28FD  50                        PUSH EAX
004A28FE  0F BF 86 02 03 00 00      MOVSX EAX,word ptr [ESI + 0x302]
004A2905  51                        PUSH ECX
004A2906  52                        PUSH EDX
004A2907  0F BF 8E 00 03 00 00      MOVSX ECX,word ptr [ESI + 0x300]
004A290E  0F BF 96 FE 02 00 00      MOVSX EDX,word ptr [ESI + 0x2fe]
004A2915  50                        PUSH EAX
004A2916  8B 46 2D                  MOV EAX,dword ptr [ESI + 0x2d]
004A2919  51                        PUSH ECX
004A291A  52                        PUSH EDX
004A291B  50                        PUSH EAX
004A291C  56                        PUSH ESI
004A291D  E8 A8 12 F6 FF            CALL 0x00403bca
004A2922  85 C0                     TEST EAX,EAX
004A2924  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
004A2927  0F 84 A4 03 00 00         JZ 0x004a2cd1
004A292D  0F BF 8E 02 03 00 00      MOVSX ECX,word ptr [ESI + 0x302]
004A2934  0F BF 96 00 03 00 00      MOVSX EDX,word ptr [ESI + 0x300]
004A293B  0F BF 86 FE 02 00 00      MOVSX EAX,word ptr [ESI + 0x2fe]
004A2942  6A 00                     PUSH 0x0
004A2944  51                        PUSH ECX
004A2945  0F BF 8E FC 02 00 00      MOVSX ECX,word ptr [ESI + 0x2fc]
004A294C  52                        PUSH EDX
004A294D  50                        PUSH EAX
004A294E  0F BF 96 FA 02 00 00      MOVSX EDX,word ptr [ESI + 0x2fa]
004A2955  0F BF 86 F8 02 00 00      MOVSX EAX,word ptr [ESI + 0x2f8]
004A295C  51                        PUSH ECX
004A295D  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A2960  52                        PUSH EDX
004A2961  50                        PUSH EAX
004A2962  51                        PUSH ECX
004A2963  56                        PUSH ESI
004A2964  E8 61 12 F6 FF            CALL 0x00403bca
004A2969  8B D8                     MOV EBX,EAX
004A296B  85 DB                     TEST EBX,EBX
004A296D  75 10                     JNZ 0x004a297f
004A296F  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004A2972  52                        PUSH EDX
004A2973  E8 98 B7 20 00            CALL 0x006ae110
004A2978  5F                        POP EDI
004A2979  5E                        POP ESI
004A297A  5B                        POP EBX
004A297B  8B E5                     MOV ESP,EBP
004A297D  5D                        POP EBP
004A297E  C3                        RET
LAB_004a297f:
004A297F  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A2984  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
004A298B  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
004A2991  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2994  85 C0                     TEST EAX,EAX
004A2996  89 8D 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],ECX
004A299C  0F 8E D4 00 00 00         JLE 0x004a2a76
004A29A2  33 FF                     XOR EDI,EDI
LAB_004a29a4:
004A29A4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004A29A7  8D 55 CC                  LEA EDX,[EBP + -0x34]
004A29AA  52                        PUSH EDX
004A29AB  8B D7                     MOV EDX,EDI
004A29AD  E8 BE A2 20 00            CALL 0x006acc70
004A29B2  8D 45 D4                  LEA EAX,[EBP + -0x2c]
004A29B5  8B D7                     MOV EDX,EDI
004A29B7  50                        PUSH EAX
004A29B8  8B CB                     MOV ECX,EBX
004A29BA  E8 B1 A2 20 00            CALL 0x006acc70
004A29BF  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A29C2  8B D7                     MOV EDX,EDI
004A29C4  51                        PUSH ECX
004A29C5  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A29C8  E8 A3 A2 20 00            CALL 0x006acc70
004A29CD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A29D0  66 3D FF FF               CMP AX,0xffff
004A29D4  0F 84 84 00 00 00         JZ 0x004a2a5e
004A29DA  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A29DD  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A29E3  6A 01                     PUSH 0x1
004A29E5  50                        PUSH EAX
004A29E6  52                        PUSH EDX
004A29E7  E8 CE FE F5 FF            CALL 0x004028ba
004A29EC  8B F8                     MOV EDI,EAX
004A29EE  85 FF                     TEST EDI,EDI
004A29F0  75 1A                     JNZ 0x004a2a0c
004A29F2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A29F7  68 9B 10 00 00            PUSH 0x109b
004A29FC  68 3C BE 7A 00            PUSH 0x7abe3c
004A2A01  50                        PUSH EAX
004A2A02  68 04 00 FE AF            PUSH 0xaffe0004
004A2A07  E8 34 34 20 00            CALL 0x006a5e40
LAB_004a2a0c:
004A2A0C  66 8B 4D CC               MOV CX,word ptr [EBP + -0x34]
004A2A10  66 8B 55 CE               MOV DX,word ptr [EBP + -0x32]
004A2A14  66 8B 45 D0               MOV AX,word ptr [EBP + -0x30]
004A2A18  66 89 8D 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],CX
004A2A1F  66 8B 4D D4               MOV CX,word ptr [EBP + -0x2c]
004A2A23  66 89 95 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],DX
004A2A2A  66 8B 55 D6               MOV DX,word ptr [EBP + -0x2a]
004A2A2E  66 89 8D 76 FF FF FF      MOV word ptr [EBP + 0xffffff76],CX
004A2A35  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
004A2A3B  66 89 85 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],AX
004A2A42  66 8B 45 D8               MOV AX,word ptr [EBP + -0x28]
004A2A46  51                        PUSH ECX
004A2A47  6A 08                     PUSH 0x8
004A2A49  8B CF                     MOV ECX,EDI
004A2A4B  66 89 95 78 FF FF FF      MOV word ptr [EBP + 0xffffff78],DX
004A2A52  66 89 85 7A FF FF FF      MOV word ptr [EBP + 0xffffff7a],AX
004A2A59  E8 C8 F6 F5 FF            CALL 0x00402126
LAB_004a2a5e:
004A2A5E  8B 7D EC                  MOV EDI,dword ptr [EBP + -0x14]
004A2A61  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2A64  47                        INC EDI
004A2A65  89 7D EC                  MOV dword ptr [EBP + -0x14],EDI
004A2A68  81 E7 FF FF 00 00         AND EDI,0xffff
004A2A6E  3B F8                     CMP EDI,EAX
004A2A70  0F 8C 2E FF FF FF         JL 0x004a29a4
LAB_004a2a76:
004A2A76  8B 55 DC                  MOV EDX,dword ptr [EBP + -0x24]
004A2A79  52                        PUSH EDX
004A2A7A  E8 91 B6 20 00            CALL 0x006ae110
004A2A7F  53                        PUSH EBX
004A2A80  E8 8B B6 20 00            CALL 0x006ae110
LAB_004a2a85:
004A2A85  83 BE E6 01 00 00 15      CMP dword ptr [ESI + 0x1e6],0x15
004A2A8C  0F 85 E5 01 00 00         JNZ 0x004a2c77
004A2A92  A1 38 2A 80 00            MOV EAX,[0x00802a38]
004A2A97  33 DB                     XOR EBX,EBX
004A2A99  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
004A2A9F  89 85 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EAX
004A2AA5  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
004A2AA8  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2AAB  85 C0                     TEST EAX,EAX
004A2AAD  0F 8E 36 01 00 00         JLE 0x004a2be9
004A2AB3  33 D2                     XOR EDX,EDX
LAB_004a2ab5:
004A2AB5  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A2AB8  51                        PUSH ECX
004A2AB9  8B 4E 2D                  MOV ECX,dword ptr [ESI + 0x2d]
004A2ABC  E8 AF A1 20 00            CALL 0x006acc70
004A2AC1  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004A2AC4  66 3D FF FF               CMP AX,0xffff
004A2AC8  0F 84 07 01 00 00         JZ 0x004a2bd5
004A2ACE  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A2AD1  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2AD7  6A 01                     PUSH 0x1
004A2AD9  50                        PUSH EAX
004A2ADA  52                        PUSH EDX
004A2ADB  E8 DA FD F5 FF            CALL 0x004028ba
004A2AE0  8B F8                     MOV EDI,EAX
004A2AE2  85 FF                     TEST EDI,EDI
004A2AE4  75 1A                     JNZ 0x004a2b00
004A2AE6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004A2AEB  68 B0 10 00 00            PUSH 0x10b0
004A2AF0  68 3C BE 7A 00            PUSH 0x7abe3c
004A2AF5  50                        PUSH EAX
004A2AF6  68 04 00 FE AF            PUSH 0xaffe0004
004A2AFB  E8 40 33 20 00            CALL 0x006a5e40
LAB_004a2b00:
004A2B00  8B 17                     MOV EDX,dword ptr [EDI]
004A2B02  8B CF                     MOV ECX,EDI
004A2B04  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
004A2B0A  85 C0                     TEST EAX,EAX
004A2B0C  0F 84 C3 00 00 00         JZ 0x004a2bd5
004A2B12  8B CF                     MOV ECX,EDI
004A2B14  E8 3F 23 F6 FF            CALL 0x00404e58
004A2B19  85 C0                     TEST EAX,EAX
004A2B1B  0F 85 94 00 00 00         JNZ 0x004a2bb5
004A2B21  8B 07                     MOV EAX,dword ptr [EDI]
004A2B23  8B CF                     MOV ECX,EDI
004A2B25  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004A2B28  83 F8 07                  CMP EAX,0x7
004A2B2B  74 17                     JZ 0x004a2b44
004A2B2D  83 F8 13                  CMP EAX,0x13
004A2B30  74 12                     JZ 0x004a2b44
004A2B32  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A2B35  51                        PUSH ECX
004A2B36  6A 03                     PUSH 0x3
004A2B38  8B CF                     MOV ECX,EDI
004A2B3A  E8 E7 F5 F5 FF            CALL 0x00402126
004A2B3F  E9 91 00 00 00            JMP 0x004a2bd5
LAB_004a2b44:
004A2B44  8B CF                     MOV ECX,EDI
004A2B46  E8 BD FA F5 FF            CALL 0x00402608
004A2B4B  85 C0                     TEST EAX,EAX
004A2B4D  0F 85 82 00 00 00         JNZ 0x004a2bd5
004A2B53  66 8B 86 06 03 00 00      MOV AX,word ptr [ESI + 0x306]
004A2B5A  66 8B 96 04 03 00 00      MOV DX,word ptr [ESI + 0x304]
004A2B61  66 8B 8E 08 03 00 00      MOV CX,word ptr [ESI + 0x308]
004A2B68  66 89 85 62 FF FF FF      MOV word ptr [EBP + 0xffffff62],AX
004A2B6F  8D 85 5C FF FF FF         LEA EAX,[EBP + 0xffffff5c]
004A2B75  66 89 95 60 FF FF FF      MOV word ptr [EBP + 0xffffff60],DX
004A2B7C  8B 96 0A 03 00 00         MOV EDX,dword ptr [ESI + 0x30a]
004A2B82  66 89 8D 64 FF FF FF      MOV word ptr [EBP + 0xffffff64],CX
004A2B89  50                        PUSH EAX
004A2B8A  6A 0F                     PUSH 0xf
004A2B8C  8B CF                     MOV ECX,EDI
004A2B8E  89 95 66 FF FF FF         MOV dword ptr [EBP + 0xffffff66],EDX
004A2B94  E8 8D F5 F5 FF            CALL 0x00402126
004A2B99  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A2B9C  85 C0                     TEST EAX,EAX
004A2B9E  75 0F                     JNZ 0x004a2baf
004A2BA0  6A 01                     PUSH 0x1
004A2BA2  6A 02                     PUSH 0x2
004A2BA4  6A 01                     PUSH 0x1
004A2BA6  50                        PUSH EAX
004A2BA7  E8 E4 B6 20 00            CALL 0x006ae290
004A2BAC  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
LAB_004a2baf:
004A2BAF  8D 4D FC                  LEA ECX,[EBP + -0x4]
004A2BB2  51                        PUSH ECX
004A2BB3  EB 1A                     JMP 0x004a2bcf
LAB_004a2bb5:
004A2BB5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2BB8  85 C0                     TEST EAX,EAX
004A2BBA  75 0F                     JNZ 0x004a2bcb
004A2BBC  6A 01                     PUSH 0x1
004A2BBE  6A 02                     PUSH 0x2
004A2BC0  6A 01                     PUSH 0x1
004A2BC2  50                        PUSH EAX
004A2BC3  E8 C8 B6 20 00            CALL 0x006ae290
004A2BC8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
LAB_004a2bcb:
004A2BCB  8D 55 FC                  LEA EDX,[EBP + -0x4]
004A2BCE  52                        PUSH EDX
LAB_004a2bcf:
004A2BCF  50                        PUSH EAX
004A2BD0  E8 EB B5 20 00            CALL 0x006ae1c0
LAB_004a2bd5:
004A2BD5  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004A2BD8  43                        INC EBX
004A2BD9  8B D3                     MOV EDX,EBX
004A2BDB  81 E2 FF FF 00 00         AND EDX,0xffff
004A2BE1  3B D0                     CMP EDX,EAX
004A2BE3  0F 8C CC FE FF FF         JL 0x004a2ab5
LAB_004a2be9:
004A2BE9  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
004A2BEC  85 C9                     TEST ECX,ECX
004A2BEE  74 1E                     JZ 0x004a2c0e
004A2BF0  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2BF3  85 C0                     TEST EAX,EAX
004A2BF5  74 13                     JZ 0x004a2c0a
004A2BF7  50                        PUSH EAX
004A2BF8  8A 46 24                  MOV AL,byte ptr [ESI + 0x24]
004A2BFB  51                        PUSH ECX
004A2BFC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2C02  50                        PUSH EAX
004A2C03  E8 93 11 F6 FF            CALL 0x00403d9b
004A2C08  EB 53                     JMP 0x004a2c5d
LAB_004a2c0a:
004A2C0A  85 C9                     TEST ECX,ECX
004A2C0C  75 4F                     JNZ 0x004a2c5d
LAB_004a2c0e:
004A2C0E  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2C11  85 C0                     TEST EAX,EAX
004A2C13  74 48                     JZ 0x004a2c5d
004A2C15  8B C8                     MOV ECX,EAX
004A2C17  33 FF                     XOR EDI,EDI
004A2C19  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
004A2C1C  85 DB                     TEST EBX,EBX
004A2C1E  7E 3D                     JLE 0x004a2c5d
004A2C20  33 D2                     XOR EDX,EDX
LAB_004a2c22:
004A2C22  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004A2C25  8D 45 FC                  LEA EAX,[EBP + -0x4]
004A2C28  50                        PUSH EAX
004A2C29  E8 42 A0 20 00            CALL 0x006acc70
004A2C2E  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
004A2C31  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
004A2C34  6A 01                     PUSH 0x1
004A2C36  51                        PUSH ECX
004A2C37  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004A2C3D  52                        PUSH EDX
004A2C3E  E8 77 FC F5 FF            CALL 0x004028ba
004A2C43  8D 4D E8                  LEA ECX,[EBP + -0x18]
004A2C46  51                        PUSH ECX
004A2C47  6A 03                     PUSH 0x3
004A2C49  8B C8                     MOV ECX,EAX
004A2C4B  E8 D6 F4 F5 FF            CALL 0x00402126
004A2C50  47                        INC EDI
004A2C51  8B D7                     MOV EDX,EDI
004A2C53  81 E2 FF FF 00 00         AND EDX,0xffff
004A2C59  3B D3                     CMP EDX,EBX
004A2C5B  7C C5                     JL 0x004a2c22
STGroupBoatC::RechargeNewCmd::cf_common_exit_004A2C5D:
004A2C5D  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004A2C60  85 C0                     TEST EAX,EAX
004A2C62  74 06                     JZ 0x004a2c6a
004A2C64  50                        PUSH EAX
004A2C65  E8 A6 B4 20 00            CALL 0x006ae110
LAB_004a2c6a:
004A2C6A  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004A2C6D  85 C0                     TEST EAX,EAX
004A2C6F  74 06                     JZ 0x004a2c77
004A2C71  50                        PUSH EAX
004A2C72  E8 99 B4 20 00            CALL 0x006ae110
LAB_004a2c77:
004A2C77  8B 95 68 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffe68]
004A2C7D  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004A2C83  5F                        POP EDI
004A2C84  5E                        POP ESI
004A2C85  5B                        POP EBX
004A2C86  8B E5                     MOV ESP,EBP
004A2C88  5D                        POP EBP
004A2C89  C3                        RET
LAB_004a2c8a:
004A2C8A  8B 85 68 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffe68]
004A2C90  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
004A2C96  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004A2C9B  74 34                     JZ 0x004a2cd1
004A2C9D  68 AC C1 7A 00            PUSH 0x7ac1ac
004A2CA2  68 CC 4C 7A 00            PUSH 0x7a4ccc
004A2CA7  56                        PUSH ESI
004A2CA8  57                        PUSH EDI
004A2CA9  68 DC 10 00 00            PUSH 0x10dc
004A2CAE  68 3C BE 7A 00            PUSH 0x7abe3c
004A2CB3  E8 18 A8 20 00            CALL 0x006ad4d0
004A2CB8  83 C4 18                  ADD ESP,0x18
004A2CBB  85 C0                     TEST EAX,EAX
004A2CBD  74 01                     JZ 0x004a2cc0
004A2CBF  CC                        INT3
LAB_004a2cc0:
004A2CC0  68 DD 10 00 00            PUSH 0x10dd
004A2CC5  68 3C BE 7A 00            PUSH 0x7abe3c
004A2CCA  57                        PUSH EDI
004A2CCB  56                        PUSH ESI
004A2CCC  E8 6F 31 20 00            CALL 0x006a5e40
LAB_004a2cd1:
004A2CD1  5F                        POP EDI
004A2CD2  5E                        POP ESI
004A2CD3  5B                        POP EBX
004A2CD4  8B E5                     MOV ESP,EBP
004A2CD6  5D                        POP EBP
004A2CD7  C3                        RET
