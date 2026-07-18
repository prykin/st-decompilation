FUN_005a1160:
005A1160  55                        PUSH EBP
005A1161  8B EC                     MOV EBP,ESP
005A1163  81 EC 8C 00 00 00         SUB ESP,0x8c
005A1169  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005A116E  53                        PUSH EBX
005A116F  56                        PUSH ESI
005A1170  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005A1173  57                        PUSH EDI
005A1174  8D 95 78 FF FF FF         LEA EDX,[EBP + 0xffffff78]
005A117A  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
005A1180  6A 00                     PUSH 0x0
005A1182  52                        PUSH EDX
005A1183  89 85 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EAX
005A1189  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005A118F  E8 5C C6 18 00            CALL 0x0072d7f0
005A1194  8B F0                     MOV ESI,EAX
005A1196  83 C4 08                  ADD ESP,0x8
005A1199  85 F6                     TEST ESI,ESI
005A119B  0F 85 AE 01 00 00         JNZ 0x005a134f
005A11A1  A1 24 C0 79 00            MOV EAX,[0x0079c024]
005A11A6  8B 0D 20 C0 79 00         MOV ECX,dword ptr [0x0079c020]
005A11AC  50                        PUSH EAX
005A11AD  51                        PUSH ECX
005A11AE  68 80 76 80 00            PUSH 0x807680
005A11B3  68 DC 6E 7C 00            PUSH 0x7c6edc
005A11B8  68 3A F3 80 00            PUSH 0x80f33a
005A11BD  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
005A11C3  56                        PUSH ESI
005A11C4  8D 55 FC                  LEA EDX,[EBP + -0x4]
005A11C7  56                        PUSH ESI
005A11C8  52                        PUSH EDX
005A11C9  68 3A F3 80 00            PUSH 0x80f33a
005A11CE  E8 6B 24 E6 FF            CALL 0x0040363e
005A11D3  83 C4 24                  ADD ESP,0x24
005A11D6  85 C0                     TEST EAX,EAX
005A11D8  0F 84 56 01 00 00         JZ 0x005a1334
005A11DE  8B F8                     MOV EDI,EAX
005A11E0  83 C9 FF                  OR ECX,0xffffffff
005A11E3  33 C0                     XOR EAX,EAX
005A11E5  F2 AE                     SCASB.REPNE ES:EDI
005A11E7  F7 D1                     NOT ECX
005A11E9  2B F9                     SUB EDI,ECX
005A11EB  8B C1                     MOV EAX,ECX
005A11ED  8B F7                     MOV ESI,EDI
005A11EF  BF 26 F1 80 00            MOV EDI,0x80f126
005A11F4  C1 E9 02                  SHR ECX,0x2
005A11F7  F3 A5                     MOVSD.REP ES:EDI,ESI
005A11F9  8B C8                     MOV ECX,EAX
005A11FB  83 E1 03                  AND ECX,0x3
005A11FE  F3 A4                     MOVSB.REP ES:EDI,ESI
005A1200  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005A1203  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A1209  8B 58 14                  MOV EBX,dword ptr [EAX + 0x14]
005A120C  85 DB                     TEST EBX,EBX
005A120E  75 18                     JNZ 0x005a1228
005A1210  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005A1214  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005A1218  83 C3 1F                  ADD EBX,0x1f
005A121B  C1 EB 03                  SHR EBX,0x3
005A121E  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005A1224  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005a1228:
005A1228  50                        PUSH EAX
005A1229  E8 72 3D 11 00            CALL 0x006b4fa0
005A122E  8B CB                     MOV ECX,EBX
005A1230  8B F8                     MOV EDI,EAX
005A1232  8B D1                     MOV EDX,ECX
005A1234  83 C8 FF                  OR EAX,0xffffffff
005A1237  C1 E9 02                  SHR ECX,0x2
005A123A  F3 AB                     STOSD.REP ES:EDI
005A123C  8B CA                     MOV ECX,EDX
005A123E  68 F0 00 00 00            PUSH 0xf0
005A1243  83 E1 03                  AND ECX,0x3
005A1246  68 B8 01 00 00            PUSH 0x1b8
005A124B  F3 AA                     STOSB.REP ES:EDI
005A124D  8B 86 C0 1A 00 00         MOV EAX,dword ptr [ESI + 0x1ac0]
005A1253  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A1259  6A 16                     PUSH 0x16
005A125B  6A 00                     PUSH 0x0
005A125D  6A 00                     PUSH 0x0
005A125F  50                        PUSH EAX
005A1260  E8 2B F8 16 00            CALL 0x00710a90
005A1265  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005A126B  6A FF                     PUSH -0x1
005A126D  BB 02 00 00 00            MOV EBX,0x2
005A1272  6A FF                     PUSH -0x1
005A1274  53                        PUSH EBX
005A1275  6A FF                     PUSH -0x1
005A1277  6A FE                     PUSH -0x2
005A1279  51                        PUSH ECX
005A127A  68 BD 25 00 00            PUSH 0x25bd
005A127F  E8 BC EE 10 00            CALL 0x006b0140
005A1284  8B 8E 73 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a73]
005A128A  50                        PUSH EAX
005A128B  E8 E0 08 17 00            CALL 0x00711b70
005A1290  8B 96 BC 1A 00 00         MOV EDX,dword ptr [ESI + 0x1abc]
005A1296  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005A129B  52                        PUSH EDX
005A129C  50                        PUSH EAX
005A129D  E8 2E 23 11 00            CALL 0x006b35d0
005A12A2  B9 08 00 00 00            MOV ECX,0x8
005A12A7  33 C0                     XOR EAX,EAX
005A12A9  8D 7D D8                  LEA EDI,[EBP + -0x28]
005A12AC  F3 AB                     STOSD.REP ES:EDI
005A12AE  B9 08 00 00 00            MOV ECX,0x8
005A12B3  8D 7D B8                  LEA EDI,[EBP + -0x48]
005A12B6  F3 AB                     STOSD.REP ES:EDI
005A12B8  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005A12BB  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005A12C1  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
005A12C4  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
005A12C7  C7 45 E8 57 69 00 00      MOV dword ptr [EBP + -0x18],0x6957
005A12CE  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
005A12D1  89 5D C4                  MOV dword ptr [EBP + -0x3c],EBX
005A12D4  C7 45 C8 56 69 00 00      MOV dword ptr [EBP + -0x38],0x6956
005A12DB  8B 89 E6 02 00 00         MOV ECX,dword ptr [ECX + 0x2e6]
005A12E1  85 C9                     TEST ECX,ECX
005A12E3  74 32                     JZ 0x005a1317
005A12E5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005A12E8  68 B8 25 00 00            PUSH 0x25b8
005A12ED  52                        PUSH EDX
005A12EE  8D 45 B8                  LEA EAX,[EBP + -0x48]
005A12F1  6A 00                     PUSH 0x0
005A12F3  8D 55 D8                  LEA EDX,[EBP + -0x28]
005A12F6  50                        PUSH EAX
005A12F7  52                        PUSH EDX
005A12F8  6A 01                     PUSH 0x1
005A12FA  68 B7 25 00 00            PUSH 0x25b7
005A12FF  E8 A4 2C E6 FF            CALL 0x00403fa8
005A1304  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
005A130A  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1310  5F                        POP EDI
005A1311  5E                        POP ESI
005A1312  5B                        POP EBX
005A1313  8B E5                     MOV ESP,EBP
005A1315  5D                        POP EBP
005A1316  C3                        RET
LAB_005a1317:
005A1317  8B 06                     MOV EAX,dword ptr [ESI]
005A1319  8D 4D D8                  LEA ECX,[EBP + -0x28]
005A131C  51                        PUSH ECX
005A131D  8B CE                     MOV ECX,ESI
005A131F  FF 10                     CALL dword ptr [EAX]
005A1321  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
005A1327  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A132D  5F                        POP EDI
005A132E  5E                        POP ESI
005A132F  5B                        POP EBX
005A1330  8B E5                     MOV ESP,EBP
005A1332  5D                        POP EBP
005A1333  C3                        RET
LAB_005a1334:
005A1334  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
005A1337  E8 B1 19 E6 FF            CALL 0x00402ced
005A133C  8B 95 74 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff74]
005A1342  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005A1348  5F                        POP EDI
005A1349  5E                        POP ESI
005A134A  5B                        POP EBX
005A134B  8B E5                     MOV ESP,EBP
005A134D  5D                        POP EBP
005A134E  C3                        RET
LAB_005a134f:
005A134F  8B 85 74 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff74]
005A1355  68 08 C4 7C 00            PUSH 0x7cc408
005A135A  68 CC 4C 7A 00            PUSH 0x7a4ccc
005A135F  56                        PUSH ESI
005A1360  6A 00                     PUSH 0x0
005A1362  68 35 09 00 00            PUSH 0x935
005A1367  68 70 BF 7C 00            PUSH 0x7cbf70
005A136C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005A1371  E8 5A C1 10 00            CALL 0x006ad4d0
005A1376  83 C4 18                  ADD ESP,0x18
005A1379  85 C0                     TEST EAX,EAX
005A137B  74 01                     JZ 0x005a137e
005A137D  CC                        INT3
LAB_005a137e:
005A137E  68 35 09 00 00            PUSH 0x935
005A1383  68 70 BF 7C 00            PUSH 0x7cbf70
005A1388  6A 00                     PUSH 0x0
005A138A  56                        PUSH ESI
005A138B  E8 B0 4A 10 00            CALL 0x006a5e40
005A1390  5F                        POP EDI
005A1391  5E                        POP ESI
005A1392  5B                        POP EBX
005A1393  8B E5                     MOV ESP,EBP
005A1395  5D                        POP EBP
005A1396  C3                        RET
