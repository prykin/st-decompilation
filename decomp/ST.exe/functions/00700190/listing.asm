FUN_00700190:
00700190  55                        PUSH EBP
00700191  8B EC                     MOV EBP,ESP
00700193  83 EC 24                  SUB ESP,0x24
00700196  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00700199  53                        PUSH EBX
0070019A  48                        DEC EAX
0070019B  56                        PUSH ESI
0070019C  57                        PUSH EDI
0070019D  C7 45 EC 00 00 00 00      MOV dword ptr [EBP + -0x14],0x0
007001A4  C7 05 00 70 85 00 01 00 00 00  MOV dword ptr [0x00857000],0x1
007001AE  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
007001B1  0F 88 5C 07 00 00         JS 0x00700913
LAB_007001b7:
007001B7  83 7D 34 01               CMP dword ptr [EBP + 0x34],0x1
007001BB  0F 85 8E 00 00 00         JNZ 0x0070024f
007001C1  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
007001C4  48                        DEC EAX
007001C5  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
007001C8  0F 88 45 07 00 00         JS 0x00700913
007001CE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
007001D1  33 C0                     XOR EAX,EAX
007001D3  8A 06                     MOV AL,byte ptr [ESI]
007001D5  46                        INC ESI
007001D6  85 C0                     TEST EAX,EAX
007001D8  74 2D                     JZ 0x00700207
007001DA  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
LAB_007001dd:
007001DD  A8 80                     TEST AL,0x80
007001DF  74 16                     JZ 0x007001f7
007001E1  A8 40                     TEST AL,0x40
007001E3  74 06                     JZ 0x007001eb
007001E5  46                        INC ESI
007001E6  83 E0 3F                  AND EAX,0x3f
007001E9  EB 0F                     JMP 0x007001fa
LAB_007001eb:
007001EB  8B D0                     MOV EDX,EAX
007001ED  83 E2 3F                  AND EDX,0x3f
007001F0  03 F2                     ADD ESI,EDX
007001F2  83 E0 3F                  AND EAX,0x3f
007001F5  EB 03                     JMP 0x007001fa
LAB_007001f7:
007001F7  83 E0 7F                  AND EAX,0x7f
LAB_007001fa:
007001FA  2B C8                     SUB ECX,EAX
007001FC  85 C9                     TEST ECX,ECX
007001FE  7E 07                     JLE 0x00700207
00700200  33 C0                     XOR EAX,EAX
00700202  8A 06                     MOV AL,byte ptr [ESI]
00700204  46                        INC ESI
00700205  EB D6                     JMP 0x007001dd
LAB_00700207:
00700207  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0070020A  33 C0                     XOR EAX,EAX
0070020C  8A 02                     MOV AL,byte ptr [EDX]
0070020E  42                        INC EDX
0070020F  85 C0                     TEST EAX,EAX
00700211  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00700214  74 30                     JZ 0x00700246
00700216  8B 4D 3C                  MOV ECX,dword ptr [EBP + 0x3c]
LAB_00700219:
00700219  A8 80                     TEST AL,0x80
0070021B  74 16                     JZ 0x00700233
0070021D  A8 40                     TEST AL,0x40
0070021F  74 06                     JZ 0x00700227
00700221  42                        INC EDX
00700222  83 E0 3F                  AND EAX,0x3f
00700225  EB 0F                     JMP 0x00700236
LAB_00700227:
00700227  8B F8                     MOV EDI,EAX
00700229  83 E7 3F                  AND EDI,0x3f
0070022C  03 D7                     ADD EDX,EDI
0070022E  83 E0 3F                  AND EAX,0x3f
00700231  EB 03                     JMP 0x00700236
LAB_00700233:
00700233  83 E0 7F                  AND EAX,0x7f
LAB_00700236:
00700236  2B C8                     SUB ECX,EAX
00700238  85 C9                     TEST ECX,ECX
0070023A  7E 07                     JLE 0x00700243
0070023C  33 C0                     XOR EAX,EAX
0070023E  8A 02                     MOV AL,byte ptr [EDX]
00700240  42                        INC EDX
00700241  EB D6                     JMP 0x00700219
LAB_00700243:
00700243  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
LAB_00700246:
00700246  C7 45 34 02 00 00 00      MOV dword ptr [EBP + 0x34],0x2
0070024D  EB 03                     JMP 0x00700252
LAB_0070024f:
0070024F  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
LAB_00700252:
00700252  33 C0                     XOR EAX,EAX
00700254  8A 06                     MOV AL,byte ptr [ESI]
00700256  46                        INC ESI
00700257  85 C0                     TEST EAX,EAX
00700259  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0070025C  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
0070025F  0F 84 78 06 00 00         JZ 0x007008dd
00700265  8B C8                     MOV ECX,EAX
00700267  81 E1 C0 00 00 00         AND ECX,0xc0
0070026D  81 F9 C0 00 00 00         CMP ECX,0xc0
00700273  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00700276  75 0D                     JNZ 0x00700285
00700278  8B D6                     MOV EDX,ESI
0070027A  33 C9                     XOR ECX,ECX
0070027C  8A 0A                     MOV CL,byte ptr [EDX]
0070027E  42                        INC EDX
0070027F  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00700282  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_00700285:
00700285  8B 7D 38                  MOV EDI,dword ptr [EBP + 0x38]
00700288  8B 75 40                  MOV ESI,dword ptr [EBP + 0x40]
0070028B  33 C9                     XOR ECX,ECX
0070028D  8A 0F                     MOV CL,byte ptr [EDI]
0070028F  47                        INC EDI
00700290  F6 C1 80                  TEST CL,0x80
00700293  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00700296  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
00700299  8B D1                     MOV EDX,ECX
0070029B  74 15                     JZ 0x007002b2
0070029D  83 E2 3F                  AND EDX,0x3f
007002A0  F6 C1 40                  TEST CL,0x40
007002A3  74 06                     JZ 0x007002ab
007002A5  47                        INC EDI
007002A6  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
007002A9  EB 0A                     JMP 0x007002b5
LAB_007002ab:
007002AB  03 FA                     ADD EDI,EDX
007002AD  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
007002B0  EB 03                     JMP 0x007002b5
LAB_007002b2:
007002B2  83 E2 7F                  AND EDX,0x7f
LAB_007002b5:
007002B5  3B D6                     CMP EDX,ESI
007002B7  7F 2A                     JG 0x007002e3
LAB_007002b9:
007002B9  33 C9                     XOR ECX,ECX
007002BB  2B F2                     SUB ESI,EDX
007002BD  8A 0F                     MOV CL,byte ptr [EDI]
007002BF  47                        INC EDI
007002C0  F6 C1 80                  TEST CL,0x80
007002C3  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007002C6  8B D1                     MOV EDX,ECX
007002C8  74 0F                     JZ 0x007002d9
007002CA  83 E2 3F                  AND EDX,0x3f
007002CD  F6 C1 40                  TEST CL,0x40
007002D0  74 03                     JZ 0x007002d5
007002D2  47                        INC EDI
007002D3  EB 07                     JMP 0x007002dc
LAB_007002d5:
007002D5  03 FA                     ADD EDI,EDX
007002D7  EB 03                     JMP 0x007002dc
LAB_007002d9:
007002D9  83 E2 7F                  AND EDX,0x7f
LAB_007002dc:
007002DC  3B D6                     CMP EDX,ESI
007002DE  7E D9                     JLE 0x007002b9
007002E0  89 7D 38                  MOV dword ptr [EBP + 0x38],EDI
LAB_007002e3:
007002E3  8B 5D 24                  MOV EBX,dword ptr [EBP + 0x24]
007002E6  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007002E9  8B 4D 30                  MOV ECX,dword ptr [EBP + 0x30]
007002EC  2B D6                     SUB EDX,ESI
007002EE  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007002F1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
007002F4  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007002F7  EB 03                     JMP 0x007002fc
LAB_007002f9:
007002F9  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_007002fc:
007002FC  A8 80                     TEST AL,0x80
007002FE  74 18                     JZ 0x00700318
00700300  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700303  83 E0 3F                  AND EAX,0x3f
00700306  3B C3                     CMP EAX,EBX
00700308  7F 4A                     JG 0x00700354
0070030A  81 7D E0 80 00 00 00      CMP dword ptr [EBP + -0x20],0x80
00700311  75 0F                     JNZ 0x00700322
00700313  01 45 1C                  ADD dword ptr [EBP + 0x1c],EAX
00700316  EB 0A                     JMP 0x00700322
LAB_00700318:
00700318  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0070031B  83 E0 7F                  AND EAX,0x7f
0070031E  3B C3                     CMP EAX,EBX
00700320  7F 32                     JG 0x00700354
LAB_00700322:
00700322  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700325  2B D8                     SUB EBX,EAX
00700327  33 C0                     XOR EAX,EAX
00700329  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070032C  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070032F  8A 03                     MOV AL,byte ptr [EBX]
00700331  43                        INC EBX
00700332  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00700335  25 C0 00 00 00            AND EAX,0xc0
0070033A  3D C0 00 00 00            CMP EAX,0xc0
0070033F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00700342  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00700345  75 B2                     JNZ 0x007002f9
00700347  33 C0                     XOR EAX,EAX
00700349  8A 03                     MOV AL,byte ptr [EBX]
0070034B  43                        INC EBX
0070034C  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0070034F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
00700352  EB A5                     JMP 0x007002f9
LAB_00700354:
00700354  2B C3                     SUB EAX,EBX
00700356  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00700359  81 E3 C0 00 00 00         AND EBX,0xc0
0070035F  80 FB 80                  CMP BL,0x80
00700362  75 0E                     JNZ 0x00700372
00700364  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00700367  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
0070036A  03 DA                     ADD EBX,EDX
0070036C  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0070036F  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
LAB_00700372:
00700372  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
00700375  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
0070037C  85 DB                     TEST EBX,EBX
0070037E  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00700381  0F 8E BD 04 00 00         JLE 0x00700844
LAB_00700387:
00700387  3B D3                     CMP EDX,EBX
00700389  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0070038C  7D 7A                     JGE 0x00700408
0070038E  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00700391  81 E2 80 00 00 00         AND EDX,0x80
00700397  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0070039a:
0070039A  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
0070039D  33 D2                     XOR EDX,EDX
0070039F  8A 13                     MOV DL,byte ptr [EBX]
007003A1  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
007003A4  89 55 DC                  MOV dword ptr [EBP + -0x24],EDX
007003A7  81 E2 80 00 00 00         AND EDX,0x80
007003AD  33 D3                     XOR EDX,EBX
007003AF  75 57                     JNZ 0x00700408
007003B1  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
007003B4  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
007003B7  2B DA                     SUB EBX,EDX
007003B9  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
007003BC  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
007003BF  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
007003C2  42                        INC EDX
007003C3  89 5D F4                  MOV dword ptr [EBP + -0xc],EBX
007003C6  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
007003C9  8B D3                     MOV EDX,EBX
007003CB  81 E2 80 00 00 00         AND EDX,0x80
007003D1  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
007003D4  8B D3                     MOV EDX,EBX
007003D6  74 1B                     JZ 0x007003f3
007003D8  83 E2 3F                  AND EDX,0x3f
007003DB  F6 C3 40                  TEST BL,0x40
007003DE  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
007003E1  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
007003E4  74 06                     JZ 0x007003ec
007003E6  43                        INC EBX
007003E7  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
007003EA  EB 0D                     JMP 0x007003f9
LAB_007003ec:
007003EC  03 DA                     ADD EBX,EDX
007003EE  89 5D 38                  MOV dword ptr [EBP + 0x38],EBX
007003F1  EB 06                     JMP 0x007003f9
LAB_007003f3:
007003F3  83 E2 7F                  AND EDX,0x7f
007003F6  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
LAB_007003f9:
007003F9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007003FC  03 DA                     ADD EBX,EDX
007003FE  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00700401  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00700404  3B D3                     CMP EDX,EBX
00700406  7C 92                     JL 0x0070039a
LAB_00700408:
00700408  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0070040B  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
0070040E  03 DA                     ADD EBX,EDX
00700410  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
00700413  3B DA                     CMP EBX,EDX
00700415  7E 05                     JLE 0x0070041c
00700417  2B 55 E0                  SUB EDX,dword ptr [EBP + -0x20]
0070041A  EB 03                     JMP 0x0070041f
LAB_0070041c:
0070041C  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
LAB_0070041f:
0070041F  8B 5D E0                  MOV EBX,dword ptr [EBP + -0x20]
00700422  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00700425  03 DA                     ADD EBX,EDX
00700427  3B C2                     CMP EAX,EDX
00700429  89 5D E0                  MOV dword ptr [EBP + -0x20],EBX
0070042C  0F 8F E9 01 00 00         JG 0x0070061b
00700432  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00700435  81 E2 80 00 00 00         AND EDX,0x80
0070043B  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
0070043E  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_00700441:
00700441  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700444  2B D8                     SUB EBX,EAX
00700446  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00700449  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0070044C  85 DB                     TEST EBX,EBX
0070044E  0F 84 66 01 00 00         JZ 0x007005ba
00700454  F6 45 F0 40               TEST byte ptr [EBP + -0x10],0x40
00700458  0F 84 B4 00 00 00         JZ 0x00700512
0070045E  85 C9                     TEST ECX,ECX
00700460  7E 3F                     JLE 0x007004a1
00700462  83 F9 01                  CMP ECX,0x1
00700465  75 06                     JNZ 0x0070046d
00700467  B9 02 00 00 00            MOV ECX,0x2
0070046C  48                        DEC EAX
LAB_0070046d:
0070046D  85 C0                     TEST EAX,EAX
0070046F  0F 8E 5D 01 00 00         JLE 0x007005d2
00700475  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00700479  74 1A                     JZ 0x00700495
0070047B  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070047E  33 C9                     XOR ECX,ECX
00700480  66 8B 0F                  MOV CX,word ptr [EDI]
00700483  3B D9                     CMP EBX,ECX
00700485  77 11                     JA 0x00700498
00700487  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
0070048A  83 C7 02                  ADD EDI,0x2
0070048D  88 0E                     MOV byte ptr [ESI],CL
0070048F  46                        INC ESI
00700490  33 C9                     XOR ECX,ECX
00700492  48                        DEC EAX
00700493  EB 0F                     JMP 0x007004a4
LAB_00700495:
00700495  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_00700498:
00700498  83 C7 02                  ADD EDI,0x2
0070049B  46                        INC ESI
0070049C  33 C9                     XOR ECX,ECX
0070049E  48                        DEC EAX
0070049F  EB 03                     JMP 0x007004a4
LAB_007004a1:
007004A1  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_007004a4:
007004A4  85 C0                     TEST EAX,EAX
007004A6  0F 8E 26 01 00 00         JLE 0x007005d2
007004AC  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
007004AF  81 E1 80 00 00 00         AND ECX,0x80
007004B5  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_007004b8:
007004B8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007004BB  85 C9                     TEST ECX,ECX
007004BD  74 0E                     JZ 0x007004cd
007004BF  33 C9                     XOR ECX,ECX
007004C1  66 8B 0F                  MOV CX,word ptr [EDI]
007004C4  3B D9                     CMP EBX,ECX
007004C6  77 05                     JA 0x007004cd
007004C8  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
007004CB  88 0E                     MOV byte ptr [ESI],CL
LAB_007004cd:
007004CD  83 C7 02                  ADD EDI,0x2
007004D0  46                        INC ESI
007004D1  48                        DEC EAX
007004D2  B9 01 00 00 00            MOV ECX,0x1
007004D7  85 C0                     TEST EAX,EAX
007004D9  0F 8E F3 00 00 00         JLE 0x007005d2
007004DF  48                        DEC EAX
007004E0  B9 02 00 00 00            MOV ECX,0x2
007004E5  85 C0                     TEST EAX,EAX
007004E7  0F 8E E5 00 00 00         JLE 0x007005d2
007004ED  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007004F0  85 C9                     TEST ECX,ECX
007004F2  74 0E                     JZ 0x00700502
007004F4  33 C9                     XOR ECX,ECX
007004F6  66 8B 0F                  MOV CX,word ptr [EDI]
007004F9  3B D9                     CMP EBX,ECX
007004FB  77 05                     JA 0x00700502
007004FD  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
00700500  88 0E                     MOV byte ptr [ESI],CL
LAB_00700502:
00700502  83 C7 02                  ADD EDI,0x2
00700505  46                        INC ESI
00700506  33 C9                     XOR ECX,ECX
00700508  48                        DEC EAX
00700509  85 C0                     TEST EAX,EAX
0070050B  7F AB                     JG 0x007004b8
0070050D  E9 C0 00 00 00            JMP 0x007005d2
LAB_00700512:
00700512  85 C9                     TEST ECX,ECX
00700514  7E 41                     JLE 0x00700557
00700516  83 F9 01                  CMP ECX,0x1
00700519  75 07                     JNZ 0x00700522
0070051B  42                        INC EDX
0070051C  B9 02 00 00 00            MOV ECX,0x2
00700521  48                        DEC EAX
LAB_00700522:
00700522  85 C0                     TEST EAX,EAX
00700524  0F 8E A8 00 00 00         JLE 0x007005d2
0070052A  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
0070052E  74 1A                     JZ 0x0070054a
00700530  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700533  33 C9                     XOR ECX,ECX
00700535  66 8B 0F                  MOV CX,word ptr [EDI]
00700538  3B D9                     CMP EBX,ECX
0070053A  77 11                     JA 0x0070054d
0070053C  8A 0A                     MOV CL,byte ptr [EDX]
0070053E  83 C7 02                  ADD EDI,0x2
00700541  88 0E                     MOV byte ptr [ESI],CL
00700543  46                        INC ESI
00700544  42                        INC EDX
00700545  33 C9                     XOR ECX,ECX
00700547  48                        DEC EAX
00700548  EB 10                     JMP 0x0070055a
LAB_0070054a:
0070054A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0070054d:
0070054D  83 C7 02                  ADD EDI,0x2
00700550  46                        INC ESI
00700551  42                        INC EDX
00700552  33 C9                     XOR ECX,ECX
00700554  48                        DEC EAX
00700555  EB 03                     JMP 0x0070055a
LAB_00700557:
00700557  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0070055a:
0070055A  85 C0                     TEST EAX,EAX
0070055C  7E 74                     JLE 0x007005d2
0070055E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00700561  81 E1 80 00 00 00         AND ECX,0x80
00700567  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_0070056a:
0070056A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070056D  85 C9                     TEST ECX,ECX
0070056F  74 0D                     JZ 0x0070057e
00700571  33 C9                     XOR ECX,ECX
00700573  66 8B 0F                  MOV CX,word ptr [EDI]
00700576  3B D9                     CMP EBX,ECX
00700578  77 04                     JA 0x0070057e
0070057A  8A 0A                     MOV CL,byte ptr [EDX]
0070057C  88 0E                     MOV byte ptr [ESI],CL
LAB_0070057e:
0070057E  83 C7 02                  ADD EDI,0x2
00700581  46                        INC ESI
00700582  42                        INC EDX
00700583  48                        DEC EAX
00700584  85 C0                     TEST EAX,EAX
00700586  B9 01 00 00 00            MOV ECX,0x1
0070058B  7E 45                     JLE 0x007005d2
0070058D  42                        INC EDX
0070058E  48                        DEC EAX
0070058F  85 C0                     TEST EAX,EAX
00700591  B9 02 00 00 00            MOV ECX,0x2
00700596  7E 3A                     JLE 0x007005d2
00700598  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0070059B  85 C9                     TEST ECX,ECX
0070059D  74 0D                     JZ 0x007005ac
0070059F  33 C9                     XOR ECX,ECX
007005A1  66 8B 0F                  MOV CX,word ptr [EDI]
007005A4  3B D9                     CMP EBX,ECX
007005A6  77 04                     JA 0x007005ac
007005A8  8A 0A                     MOV CL,byte ptr [EDX]
007005AA  88 0E                     MOV byte ptr [ESI],CL
LAB_007005ac:
007005AC  83 C7 02                  ADD EDI,0x2
007005AF  46                        INC ESI
007005B0  42                        INC EDX
007005B1  33 C9                     XOR ECX,ECX
007005B3  48                        DEC EAX
007005B4  85 C0                     TEST EAX,EAX
007005B6  7F B2                     JG 0x0070056a
007005B8  EB 18                     JMP 0x007005d2
LAB_007005ba:
007005BA  48                        DEC EAX
007005BB  78 15                     JS 0x007005d2
007005BD  40                        INC EAX
LAB_007005be:
007005BE  83 F9 01                  CMP ECX,0x1
007005C1  74 04                     JZ 0x007005c7
007005C3  46                        INC ESI
007005C4  83 C7 02                  ADD EDI,0x2
LAB_007005c7:
007005C7  41                        INC ECX
007005C8  83 F9 02                  CMP ECX,0x2
007005CB  7E 02                     JLE 0x007005cf
007005CD  33 C9                     XOR ECX,ECX
LAB_007005cf:
007005CF  48                        DEC EAX
007005D0  75 EC                     JNZ 0x007005be
LAB_007005d2:
007005D2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007005D5  85 C0                     TEST EAX,EAX
007005D7  7E 3B                     JLE 0x00700614
007005D9  33 DB                     XOR EBX,EBX
007005DB  8A 1A                     MOV BL,byte ptr [EDX]
007005DD  8B C3                     MOV EAX,EBX
007005DF  89 5D F0                  MOV dword ptr [EBP + -0x10],EBX
007005E2  25 80 00 00 00            AND EAX,0x80
007005E7  42                        INC EDX
007005E8  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007005EB  85 C0                     TEST EAX,EAX
007005ED  8B C3                     MOV EAX,EBX
007005EF  74 12                     JZ 0x00700603
007005F1  83 E0 3F                  AND EAX,0x3f
007005F4  F6 C3 40                  TEST BL,0x40
007005F7  74 0D                     JZ 0x00700606
007005F9  33 DB                     XOR EBX,EBX
007005FB  8A 1A                     MOV BL,byte ptr [EDX]
007005FD  42                        INC EDX
007005FE  89 5D EC                  MOV dword ptr [EBP + -0x14],EBX
00700601  EB 03                     JMP 0x00700606
LAB_00700603:
00700603  83 E0 7F                  AND EAX,0x7f
LAB_00700606:
00700606  3B 45 FC                  CMP EAX,dword ptr [EBP + -0x4]
00700609  0F 8E 32 FE FF FF         JLE 0x00700441
0070060F  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00700612  EB 0A                     JMP 0x0070061e
LAB_00700614:
00700614  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00700617  33 C0                     XOR EAX,EAX
00700619  EB 03                     JMP 0x0070061e
LAB_0070061b:
0070061B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
LAB_0070061e:
0070061E  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700621  2B C3                     SUB EAX,EBX
00700623  85 DB                     TEST EBX,EBX
00700625  0F 8E 92 01 00 00         JLE 0x007007bd
0070062B  8A 5D F0                  MOV BL,byte ptr [EBP + -0x10]
0070062E  F6 C3 80                  TEST BL,0x80
00700631  0F 84 C1 01 00 00         JZ 0x007007f8
00700637  F6 C3 40                  TEST BL,0x40
0070063A  0F 84 BA 00 00 00         JZ 0x007006fa
00700640  85 C9                     TEST ECX,ECX
00700642  7E 42                     JLE 0x00700686
00700644  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00700647  83 F9 01                  CMP ECX,0x1
0070064A  75 01                     JNZ 0x0070064d
0070064C  4A                        DEC EDX
LAB_0070064d:
0070064D  85 D2                     TEST EDX,EDX
0070064F  B9 02 00 00 00            MOV ECX,0x2
00700654  0F 8E 63 01 00 00         JLE 0x007007bd
0070065A  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
0070065E  74 1A                     JZ 0x0070067a
00700660  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700663  33 C9                     XOR ECX,ECX
00700665  66 8B 0F                  MOV CX,word ptr [EDI]
00700668  3B D9                     CMP EBX,ECX
0070066A  77 11                     JA 0x0070067d
0070066C  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
0070066F  83 C7 02                  ADD EDI,0x2
00700672  88 0E                     MOV byte ptr [ESI],CL
00700674  46                        INC ESI
00700675  33 C9                     XOR ECX,ECX
00700677  4A                        DEC EDX
00700678  EB 12                     JMP 0x0070068c
LAB_0070067a:
0070067A  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0070067d:
0070067D  83 C7 02                  ADD EDI,0x2
00700680  46                        INC ESI
00700681  33 C9                     XOR ECX,ECX
00700683  4A                        DEC EDX
00700684  EB 06                     JMP 0x0070068c
LAB_00700686:
00700686  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00700689  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
LAB_0070068c:
0070068C  85 D2                     TEST EDX,EDX
0070068E  0F 8E 29 01 00 00         JLE 0x007007bd
00700694  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00700697  81 E1 80 00 00 00         AND ECX,0x80
0070069D  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
LAB_007006a0:
007006A0  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007006A3  85 C9                     TEST ECX,ECX
007006A5  74 0E                     JZ 0x007006b5
007006A7  33 C9                     XOR ECX,ECX
007006A9  66 8B 0F                  MOV CX,word ptr [EDI]
007006AC  3B D9                     CMP EBX,ECX
007006AE  77 05                     JA 0x007006b5
007006B0  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
007006B3  88 0E                     MOV byte ptr [ESI],CL
LAB_007006b5:
007006B5  83 C7 02                  ADD EDI,0x2
007006B8  46                        INC ESI
007006B9  4A                        DEC EDX
007006BA  B9 01 00 00 00            MOV ECX,0x1
007006BF  85 D2                     TEST EDX,EDX
007006C1  0F 8E F6 00 00 00         JLE 0x007007bd
007006C7  4A                        DEC EDX
007006C8  B9 02 00 00 00            MOV ECX,0x2
007006CD  85 D2                     TEST EDX,EDX
007006CF  0F 8E E8 00 00 00         JLE 0x007007bd
007006D5  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007006D8  85 C9                     TEST ECX,ECX
007006DA  74 0E                     JZ 0x007006ea
007006DC  33 C9                     XOR ECX,ECX
007006DE  66 8B 0F                  MOV CX,word ptr [EDI]
007006E1  3B D9                     CMP EBX,ECX
007006E3  77 05                     JA 0x007006ea
007006E5  8A 4D EC                  MOV CL,byte ptr [EBP + -0x14]
007006E8  88 0E                     MOV byte ptr [ESI],CL
LAB_007006ea:
007006EA  83 C7 02                  ADD EDI,0x2
007006ED  46                        INC ESI
007006EE  33 C9                     XOR ECX,ECX
007006F0  4A                        DEC EDX
007006F1  85 D2                     TEST EDX,EDX
007006F3  7F AB                     JG 0x007006a0
007006F5  E9 C3 00 00 00            JMP 0x007007bd
LAB_007006fa:
007006FA  85 C9                     TEST ECX,ECX
007006FC  7E 47                     JLE 0x00700745
007006FE  83 F9 01                  CMP ECX,0x1
00700701  75 10                     JNZ 0x00700713
00700703  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700706  42                        INC EDX
00700707  4B                        DEC EBX
00700708  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
0070070B  B9 02 00 00 00            MOV ECX,0x2
00700710  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00700713:
00700713  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700716  85 DB                     TEST EBX,EBX
00700718  0F 8E 9F 00 00 00         JLE 0x007007bd
0070071E  F6 45 F4 80               TEST byte ptr [EBP + -0xc],0x80
00700722  74 10                     JZ 0x00700734
00700724  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700727  33 C9                     XOR ECX,ECX
00700729  66 8B 0F                  MOV CX,word ptr [EDI]
0070072C  3B D9                     CMP EBX,ECX
0070072E  77 04                     JA 0x00700734
00700730  8A 0A                     MOV CL,byte ptr [EDX]
00700732  88 0E                     MOV byte ptr [ESI],CL
LAB_00700734:
00700734  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700737  83 C7 02                  ADD EDI,0x2
0070073A  46                        INC ESI
0070073B  42                        INC EDX
0070073C  33 C9                     XOR ECX,ECX
0070073E  4B                        DEC EBX
0070073F  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
00700742  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
LAB_00700745:
00700745  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700748  85 DB                     TEST EBX,EBX
0070074A  7E 71                     JLE 0x007007bd
0070074C  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0070074F  81 E1 80 00 00 00         AND ECX,0x80
00700755  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00700758  EB 03                     JMP 0x0070075d
LAB_0070075a:
0070075A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
LAB_0070075d:
0070075D  85 C9                     TEST ECX,ECX
0070075F  74 10                     JZ 0x00700771
00700761  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
00700764  33 C9                     XOR ECX,ECX
00700766  66 8B 0F                  MOV CX,word ptr [EDI]
00700769  3B D9                     CMP EBX,ECX
0070076B  77 04                     JA 0x00700771
0070076D  8A 0A                     MOV CL,byte ptr [EDX]
0070076F  88 0E                     MOV byte ptr [ESI],CL
LAB_00700771:
00700771  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00700774  83 C7 02                  ADD EDI,0x2
00700777  46                        INC ESI
00700778  42                        INC EDX
00700779  4B                        DEC EBX
0070077A  B9 01 00 00 00            MOV ECX,0x1
0070077F  85 DB                     TEST EBX,EBX
00700781  7E 37                     JLE 0x007007ba
00700783  42                        INC EDX
00700784  4B                        DEC EBX
00700785  85 DB                     TEST EBX,EBX
00700787  B9 02 00 00 00            MOV ECX,0x2
0070078C  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0070078F  7E 29                     JLE 0x007007ba
00700791  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00700794  85 C9                     TEST ECX,ECX
00700796  74 10                     JZ 0x007007a8
00700798  8B 5D 18                  MOV EBX,dword ptr [EBP + 0x18]
0070079B  33 C9                     XOR ECX,ECX
0070079D  66 8B 0F                  MOV CX,word ptr [EDI]
007007A0  3B D9                     CMP EBX,ECX
007007A2  77 04                     JA 0x007007a8
007007A4  8A 0A                     MOV CL,byte ptr [EDX]
007007A6  88 0E                     MOV byte ptr [ESI],CL
LAB_007007a8:
007007A8  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
007007AB  83 C7 02                  ADD EDI,0x2
007007AE  46                        INC ESI
007007AF  42                        INC EDX
007007B0  33 C9                     XOR ECX,ECX
007007B2  4B                        DEC EBX
007007B3  85 DB                     TEST EBX,EBX
007007B5  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
007007B8  7F A0                     JG 0x0070075a
LAB_007007ba:
007007BA  89 55 1C                  MOV dword ptr [EBP + 0x1c],EDX
LAB_007007bd:
007007BD  85 C0                     TEST EAX,EAX
007007BF  7F 57                     JG 0x00700818
007007C1  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
007007C4  8B 5D 28                  MOV EBX,dword ptr [EBP + 0x28]
007007C7  3B D3                     CMP EDX,EBX
007007C9  7D 4D                     JGE 0x00700818
007007CB  8B 5D 1C                  MOV EBX,dword ptr [EBP + 0x1c]
007007CE  33 D2                     XOR EDX,EDX
007007D0  8A 13                     MOV DL,byte ptr [EBX]
007007D2  8B C2                     MOV EAX,EDX
007007D4  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
007007D7  24 80                     AND AL,0x80
007007D9  43                        INC EBX
007007DA  84 C0                     TEST AL,AL
007007DC  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007007DF  8B C2                     MOV EAX,EDX
007007E1  74 32                     JZ 0x00700815
007007E3  83 E0 3F                  AND EAX,0x3f
007007E6  F6 C2 40                  TEST DL,0x40
007007E9  74 2D                     JZ 0x00700818
007007EB  33 D2                     XOR EDX,EDX
007007ED  8A 13                     MOV DL,byte ptr [EBX]
007007EF  43                        INC EBX
007007F0  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
007007F3  89 5D 1C                  MOV dword ptr [EBP + 0x1c],EBX
007007F6  EB 20                     JMP 0x00700818
LAB_007007f8:
007007F8  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007007FB  4A                        DEC EDX
007007FC  78 BF                     JS 0x007007bd
007007FE  42                        INC EDX
LAB_007007ff:
007007FF  83 F9 01                  CMP ECX,0x1
00700802  74 04                     JZ 0x00700808
00700804  46                        INC ESI
00700805  83 C7 02                  ADD EDI,0x2
LAB_00700808:
00700808  41                        INC ECX
00700809  83 F9 02                  CMP ECX,0x2
0070080C  7E 02                     JLE 0x00700810
0070080E  33 C9                     XOR ECX,ECX
LAB_00700810:
00700810  4A                        DEC EDX
00700811  75 EC                     JNZ 0x007007ff
00700813  EB A8                     JMP 0x007007bd
LAB_00700815:
00700815  83 E0 7F                  AND EAX,0x7f
LAB_00700818:
00700818  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0070081B  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0070081E  3B D3                     CMP EDX,EBX
00700820  7D 20                     JGE 0x00700842
00700822  2B DA                     SUB EBX,EDX
00700824  33 D2                     XOR EDX,EDX
00700826  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00700829  8B 5D 38                  MOV EBX,dword ptr [EBP + 0x38]
0070082C  8A 13                     MOV DL,byte ptr [EBX]
0070082E  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
00700831  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
00700834  33 D2                     XOR EDX,EDX
00700836  85 DB                     TEST EBX,EBX
00700838  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0070083B  7E 07                     JLE 0x00700844
0070083D  E9 45 FB FF FF            JMP 0x00700387
LAB_00700842:
00700842  2B D3                     SUB EDX,EBX
LAB_00700844:
00700844  8B 75 3C                  MOV ESI,dword ptr [EBP + 0x3c]
00700847  8B 7D 28                  MOV EDI,dword ptr [EBP + 0x28]
0070084A  8B 4D 40                  MOV ECX,dword ptr [EBP + 0x40]
0070084D  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00700850  2B F7                     SUB ESI,EDI
00700852  2B F1                     SUB ESI,ECX
00700854  3B D6                     CMP EDX,ESI
00700856  7D 35                     JGE 0x0070088d
LAB_00700858:
00700858  2B F2                     SUB ESI,EDX
0070085A  8B 55 38                  MOV EDX,dword ptr [EBP + 0x38]
0070085D  33 C9                     XOR ECX,ECX
0070085F  8A 0A                     MOV CL,byte ptr [EDX]
00700861  42                        INC EDX
00700862  F6 C1 80                  TEST CL,0x80
00700865  89 55 38                  MOV dword ptr [EBP + 0x38],EDX
00700868  74 1A                     JZ 0x00700884
0070086A  8B D1                     MOV EDX,ECX
0070086C  83 E2 3F                  AND EDX,0x3f
0070086F  F6 C1 40                  TEST CL,0x40
00700872  8B 4D 38                  MOV ECX,dword ptr [EBP + 0x38]
00700875  74 06                     JZ 0x0070087d
00700877  41                        INC ECX
00700878  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
0070087B  EB 0C                     JMP 0x00700889
LAB_0070087d:
0070087D  03 CA                     ADD ECX,EDX
0070087F  89 4D 38                  MOV dword ptr [EBP + 0x38],ECX
00700882  EB 05                     JMP 0x00700889
LAB_00700884:
00700884  83 E1 7F                  AND ECX,0x7f
00700887  8B D1                     MOV EDX,ECX
LAB_00700889:
00700889  3B D6                     CMP EDX,ESI
0070088B  7C CB                     JL 0x00700858
LAB_0070088d:
0070088D  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00700890  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
00700893  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00700896  2B CA                     SUB ECX,EDX
00700898  2B CF                     SUB ECX,EDI
0070089A  3B C1                     CMP EAX,ECX
0070089C  7D 2F                     JGE 0x007008cd
LAB_0070089e:
0070089E  81 E3 C0 00 00 00         AND EBX,0xc0
007008A4  2B C8                     SUB ECX,EAX
007008A6  80 FB 80                  CMP BL,0x80
007008A9  75 02                     JNZ 0x007008ad
007008AB  03 F0                     ADD ESI,EAX
LAB_007008ad:
007008AD  33 DB                     XOR EBX,EBX
007008AF  8A 1E                     MOV BL,byte ptr [ESI]
007008B1  8B D3                     MOV EDX,EBX
007008B3  8B C3                     MOV EAX,EBX
007008B5  80 E2 80                  AND DL,0x80
007008B8  46                        INC ESI
007008B9  84 D2                     TEST DL,DL
007008BB  74 09                     JZ 0x007008c6
007008BD  83 E0 3F                  AND EAX,0x3f
007008C0  F6 C3 40                  TEST BL,0x40
007008C3  74 01                     JZ 0x007008c6
007008C5  46                        INC ESI
LAB_007008c6:
007008C6  3B C1                     CMP EAX,ECX
007008C8  7C D4                     JL 0x0070089e
007008CA  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_007008cd:
007008CD  81 E3 C0 00 00 00         AND EBX,0xc0
007008D3  80 FB 80                  CMP BL,0x80
007008D6  75 05                     JNZ 0x007008dd
007008D8  03 F1                     ADD ESI,ECX
007008DA  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
LAB_007008dd:
007008DD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007008E0  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007008E3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007008E6  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
007008E9  03 F8                     ADD EDI,EAX
007008EB  8B 45 34                  MOV EAX,dword ptr [EBP + 0x34]
007008EE  03 F1                     ADD ESI,ECX
007008F0  40                        INC EAX
007008F1  83 F8 02                  CMP EAX,0x2
007008F4  89 7D 08                  MOV dword ptr [EBP + 0x8],EDI
007008F7  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
007008FA  89 45 34                  MOV dword ptr [EBP + 0x34],EAX
007008FD  7E 07                     JLE 0x00700906
007008FF  C7 45 34 00 00 00 00      MOV dword ptr [EBP + 0x34],0x0
LAB_00700906:
00700906  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
00700909  48                        DEC EAX
0070090A  89 45 2C                  MOV dword ptr [EBP + 0x2c],EAX
0070090D  0F 89 A4 F8 FF FF         JNS 0x007001b7
LAB_00700913:
00700913  5F                        POP EDI
00700914  5E                        POP ESI
00700915  5B                        POP EBX
00700916  8B E5                     MOV ESP,EBP
00700918  5D                        POP EBP
00700919  C2 3C 00                  RET 0x3c
