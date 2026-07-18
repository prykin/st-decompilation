MTaskTy::PrepareTSurf:
005E11D0  55                        PUSH EBP
005E11D1  8B EC                     MOV EBP,ESP
005E11D3  83 EC 44                  SUB ESP,0x44
005E11D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E11DB  53                        PUSH EBX
005E11DC  56                        PUSH ESI
005E11DD  57                        PUSH EDI
005E11DE  8D 55 C0                  LEA EDX,[EBP + -0x40]
005E11E1  8D 4D BC                  LEA ECX,[EBP + -0x44]
005E11E4  6A 00                     PUSH 0x0
005E11E6  52                        PUSH EDX
005E11E7  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005E11EA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E11F0  E8 FB C5 14 00            CALL 0x0072d7f0
005E11F5  8B F0                     MOV ESI,EAX
005E11F7  83 C4 08                  ADD ESP,0x8
005E11FA  85 F6                     TEST ESI,ESI
005E11FC  0F 85 94 00 00 00         JNZ 0x005e1296
005E1202  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005E1205  8B 5E 14                  MOV EBX,dword ptr [ESI + 0x14]
005E1208  85 DB                     TEST EBX,EBX
005E120A  75 18                     JNZ 0x005e1224
005E120C  66 8B 5E 0E               MOV BX,word ptr [ESI + 0xe]
005E1210  0F AF 5E 04               IMUL EBX,dword ptr [ESI + 0x4]
005E1214  83 C3 1F                  ADD EBX,0x1f
005E1217  C1 EB 03                  SHR EBX,0x3
005E121A  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005E1220  0F AF 5E 08               IMUL EBX,dword ptr [ESI + 0x8]
LAB_005e1224:
005E1224  56                        PUSH ESI
005E1225  E8 76 3D 0D 00            CALL 0x006b4fa0
005E122A  8B CB                     MOV ECX,EBX
005E122C  8B F8                     MOV EDI,EAX
005E122E  8B D1                     MOV EDX,ECX
005E1230  83 C8 FF                  OR EAX,0xffffffff
005E1233  C1 E9 02                  SHR ECX,0x2
005E1236  F3 AB                     STOSD.REP ES:EDI
005E1238  8B CA                     MOV ECX,EDX
005E123A  83 E1 03                  AND ECX,0x3
005E123D  F3 AA                     STOSB.REP ES:EDI
005E123F  8A 45 0C                  MOV AL,byte ptr [EBP + 0xc]
005E1242  84 C0                     TEST AL,AL
005E1244  74 3E                     JZ 0x005e1284
005E1246  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E1249  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E124C  6A 00                     PUSH 0x0
005E124E  6A 02                     PUSH 0x2
005E1250  50                        PUSH EAX
005E1251  51                        PUSH ECX
005E1252  6A 00                     PUSH 0x0
005E1254  6A 00                     PUSH 0x0
005E1256  6A 00                     PUSH 0x0
005E1258  56                        PUSH ESI
005E1259  E8 B2 63 0E 00            CALL 0x006c7610
005E125E  8A 55 10                  MOV DL,byte ptr [EBP + 0x10]
005E1261  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E1264  FE CA                     DEC DL
005E1266  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
005E1269  F6 DA                     NEG DL
005E126B  1A D2                     SBB DL,DL
005E126D  80 E2 EC                  AND DL,0xec
005E1270  80 C2 2C                  ADD DL,0x2c
005E1273  52                        PUSH EDX
005E1274  6A 02                     PUSH 0x2
005E1276  50                        PUSH EAX
005E1277  51                        PUSH ECX
005E1278  6A 00                     PUSH 0x0
005E127A  6A 00                     PUSH 0x0
005E127C  6A 00                     PUSH 0x0
005E127E  56                        PUSH ESI
005E127F  E8 EC 62 0E 00            CALL 0x006c7570
LAB_005e1284:
005E1284  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005E1287  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005E128D  5F                        POP EDI
005E128E  5E                        POP ESI
005E128F  5B                        POP EBX
005E1290  8B E5                     MOV ESP,EBP
005E1292  5D                        POP EBP
005E1293  C2 0C 00                  RET 0xc
LAB_005e1296:
005E1296  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
005E1299  68 D4 DA 7C 00            PUSH 0x7cdad4
005E129E  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E12A3  56                        PUSH ESI
005E12A4  6A 00                     PUSH 0x0
005E12A6  68 B9 01 00 00            PUSH 0x1b9
005E12AB  68 94 D9 7C 00            PUSH 0x7cd994
005E12B0  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E12B5  E8 16 C2 0C 00            CALL 0x006ad4d0
005E12BA  83 C4 18                  ADD ESP,0x18
005E12BD  85 C0                     TEST EAX,EAX
005E12BF  74 01                     JZ 0x005e12c2
005E12C1  CC                        INT3
LAB_005e12c2:
005E12C2  68 B9 01 00 00            PUSH 0x1b9
005E12C7  68 94 D9 7C 00            PUSH 0x7cd994
005E12CC  6A 00                     PUSH 0x0
005E12CE  56                        PUSH ESI
005E12CF  E8 6C 4B 0C 00            CALL 0x006a5e40
005E12D4  5F                        POP EDI
005E12D5  5E                        POP ESI
005E12D6  5B                        POP EBX
005E12D7  8B E5                     MOV ESP,EBP
005E12D9  5D                        POP EBP
005E12DA  C2 0C 00                  RET 0xc
