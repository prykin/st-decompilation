STAllPlayersC::PutOnPlaceGuardBoats:
00448120  55                        PUSH EBP
00448121  8B EC                     MOV EBP,ESP
00448123  81 EC 00 01 00 00         SUB ESP,0x100
00448129  53                        PUSH EBX
0044812A  56                        PUSH ESI
0044812B  89 4D DC                  MOV dword ptr [EBP + -0x24],ECX
0044812E  33 C0                     XOR EAX,EAX
00448130  57                        PUSH EDI
00448131  BF 02 00 00 00            MOV EDI,0x2
00448136  83 CA FF                  OR EDX,0xffffffff
00448139  B9 01 00 00 00            MOV ECX,0x1
0044813E  BB 03 00 00 00            MOV EBX,0x3
00448143  BE 04 00 00 00            MOV ESI,0x4
00448148  66 89 85 44 FF FF FF      MOV word ptr [EBP + 0xffffff44],AX
0044814F  66 89 BD 46 FF FF FF      MOV word ptr [EBP + 0xffffff46],DI
00448156  66 89 85 48 FF FF FF      MOV word ptr [EBP + 0xffffff48],AX
0044815D  66 89 95 4A FF FF FF      MOV word ptr [EBP + 0xffffff4a],DX
00448164  66 89 BD 4C FF FF FF      MOV word ptr [EBP + 0xffffff4c],DI
0044816B  66 89 85 4E FF FF FF      MOV word ptr [EBP + 0xffffff4e],AX
00448172  66 89 8D 50 FF FF FF      MOV word ptr [EBP + 0xffffff50],CX
00448179  66 89 BD 52 FF FF FF      MOV word ptr [EBP + 0xffffff52],DI
00448180  66 89 85 54 FF FF FF      MOV word ptr [EBP + 0xffffff54],AX
00448187  66 89 85 56 FF FF FF      MOV word ptr [EBP + 0xffffff56],AX
0044818E  66 89 9D 58 FF FF FF      MOV word ptr [EBP + 0xffffff58],BX
00448195  66 89 85 5A FF FF FF      MOV word ptr [EBP + 0xffffff5a],AX
0044819C  66 89 85 5C FF FF FF      MOV word ptr [EBP + 0xffffff5c],AX
004481A3  66 89 8D 5E FF FF FF      MOV word ptr [EBP + 0xffffff5e],CX
004481AA  66 89 85 60 FF FF FF      MOV word ptr [EBP + 0xffffff60],AX
004481B1  66 89 95 62 FF FF FF      MOV word ptr [EBP + 0xffffff62],DX
004481B8  66 89 9D 64 FF FF FF      MOV word ptr [EBP + 0xffffff64],BX
004481BF  66 89 85 66 FF FF FF      MOV word ptr [EBP + 0xffffff66],AX
004481C6  66 89 8D 68 FF FF FF      MOV word ptr [EBP + 0xffffff68],CX
004481CD  66 89 9D 6A FF FF FF      MOV word ptr [EBP + 0xffffff6a],BX
004481D4  66 89 85 6C FF FF FF      MOV word ptr [EBP + 0xffffff6c],AX
004481DB  66 89 95 6E FF FF FF      MOV word ptr [EBP + 0xffffff6e],DX
004481E2  66 89 8D 70 FF FF FF      MOV word ptr [EBP + 0xffffff70],CX
004481E9  66 89 85 72 FF FF FF      MOV word ptr [EBP + 0xffffff72],AX
004481F0  66 89 8D 74 FF FF FF      MOV word ptr [EBP + 0xffffff74],CX
004481F7  66 89 8D 76 FF FF FF      MOV word ptr [EBP + 0xffffff76],CX
004481FE  66 89 85 78 FF FF FF      MOV word ptr [EBP + 0xffffff78],AX
00448205  66 89 85 7A FF FF FF      MOV word ptr [EBP + 0xffffff7a],AX
0044820C  66 89 B5 7C FF FF FF      MOV word ptr [EBP + 0xffffff7c],SI
00448213  66 89 85 7E FF FF FF      MOV word ptr [EBP + 0xffffff7e],AX
0044821A  66 89 55 80               MOV word ptr [EBP + -0x80],DX
0044821E  66 89 75 82               MOV word ptr [EBP + -0x7e],SI
00448222  66 89 45 84               MOV word ptr [EBP + -0x7c],AX
00448226  66 89 4D 86               MOV word ptr [EBP + -0x7a],CX
0044822A  66 89 75 88               MOV word ptr [EBP + -0x78],SI
0044822E  66 89 45 8A               MOV word ptr [EBP + -0x76],AX
00448232  66 89 45 8C               MOV word ptr [EBP + -0x74],AX
00448236  66 89 45 8E               MOV word ptr [EBP + -0x72],AX
0044823A  66 89 45 90               MOV word ptr [EBP + -0x70],AX
0044823E  66 89 55 92               MOV word ptr [EBP + -0x6e],DX
00448242  66 89 45 94               MOV word ptr [EBP + -0x6c],AX
00448246  66 89 45 96               MOV word ptr [EBP + -0x6a],AX
0044824A  66 89 4D 98               MOV word ptr [EBP + -0x68],CX
0044824E  66 89 45 9A               MOV word ptr [EBP + -0x66],AX
00448252  66 89 45 9C               MOV word ptr [EBP + -0x64],AX
00448256  66 89 45 A0               MOV word ptr [EBP + -0x60],AX
0044825A  66 89 7D A2               MOV word ptr [EBP + -0x5e],DI
0044825E  66 89 45 A4               MOV word ptr [EBP + -0x5c],AX
00448262  66 89 45 A6               MOV word ptr [EBP + -0x5a],AX
00448266  66 89 7D A8               MOV word ptr [EBP + -0x58],DI
0044826A  66 89 4D AA               MOV word ptr [EBP + -0x56],CX
0044826E  66 89 45 AC               MOV word ptr [EBP + -0x54],AX
00448272  66 89 5D AE               MOV word ptr [EBP + -0x52],BX
00448276  66 89 45 B0               MOV word ptr [EBP + -0x50],AX
0044827A  66 89 45 B2               MOV word ptr [EBP + -0x4e],AX
0044827E  66 89 4D B4               MOV word ptr [EBP + -0x4c],CX
00448282  66 89 4D B6               MOV word ptr [EBP + -0x4a],CX
00448286  66 89 45 B8               MOV word ptr [EBP + -0x48],AX
0044828A  66 89 5D BA               MOV word ptr [EBP + -0x46],BX
0044828E  66 89 4D BC               MOV word ptr [EBP + -0x44],CX
00448292  66 89 45 BE               MOV word ptr [EBP + -0x42],AX
00448296  66 89 4D C0               MOV word ptr [EBP + -0x40],CX
0044829A  66 89 45 C2               MOV word ptr [EBP + -0x3e],AX
0044829E  66 89 45 C4               MOV word ptr [EBP + -0x3c],AX
004482A2  66 89 75 C6               MOV word ptr [EBP + -0x3a],SI
004482A6  66 89 45 C8               MOV word ptr [EBP + -0x38],AX
004482AA  66 89 45 CA               MOV word ptr [EBP + -0x36],AX
004482AE  66 89 45 CC               MOV word ptr [EBP + -0x34],AX
004482B2  66 89 4D CE               MOV word ptr [EBP + -0x32],CX
004482B6  66 89 45 D0               MOV word ptr [EBP + -0x30],AX
004482BA  66 89 75 D2               MOV word ptr [EBP + -0x2e],SI
004482BE  66 89 4D D4               MOV word ptr [EBP + -0x2c],CX
004482C2  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
004482C5  3B C8                     CMP ECX,EAX
004482C7  66 89 45 D6               MOV word ptr [EBP + -0x2a],AX
004482CB  66 89 45 D8               MOV word ptr [EBP + -0x28],AX
004482CF  66 89 45 DA               MOV word ptr [EBP + -0x26],AX
004482D3  89 85 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],EAX
004482D9  C7 85 24 FF FF FF B4 00 00 00  MOV dword ptr [EBP + 0xffffff24],0xb4
004482E3  C7 85 28 FF FF FF 5A 00 00 00  MOV dword ptr [EBP + 0xffffff28],0x5a
004482ED  C7 85 2C FF FF FF 0E 01 00 00  MOV dword ptr [EBP + 0xffffff2c],0x10e
004482F7  C7 85 30 FF FF FF 2D 00 00 00  MOV dword ptr [EBP + 0xffffff30],0x2d
00448301  C7 85 34 FF FF FF E1 00 00 00  MOV dword ptr [EBP + 0xffffff34],0xe1
0044830B  C7 85 38 FF FF FF 87 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x87
00448315  C7 85 3C FF FF FF 3B 01 00 00  MOV dword ptr [EBP + 0xffffff3c],0x13b
0044831F  0F 84 9A 10 00 00         JZ 0x004493bf
00448325  8B 59 0C                  MOV EBX,dword ptr [ECX + 0xc]
00448328  3B D8                     CMP EBX,EAX
0044832A  0F 84 8F 10 00 00         JZ 0x004493bf
00448330  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
00448333  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00448336  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00448339  3B C7                     CMP EAX,EDI
0044833B  75 0C                     JNZ 0x00448349
0044833D  39 75 10                  CMP dword ptr [EBP + 0x10],ESI
00448340  75 07                     JNZ 0x00448349
00448342  8B C2                     MOV EAX,EDX
00448344  E9 E7 00 00 00            JMP 0x00448430
LAB_00448349:
00448349  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0044834C  6A 00                     PUSH 0x0
0044834E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00448351  8D 4C C6 64               LEA ECX,[ESI + EAX*0x8 + 0x64]
00448355  8D 04 BF                  LEA EAX,[EDI + EDI*0x4]
00448358  0F BF D1                  MOVSX EDX,CX
0044835B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
0044835E  52                        PUSH EDX
0044835F  8D 4C C7 64               LEA ECX,[EDI + EAX*0x8 + 0x64]
00448363  0F BF D1                  MOVSX EDX,CX
00448366  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00448369  52                        PUSH EDX
0044836A  6A 00                     PUSH 0x0
0044836C  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
0044836F  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00448372  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
00448376  0F BF D1                  MOVSX EDX,CX
00448379  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044837C  52                        PUSH EDX
0044837D  8D 04 89                  LEA EAX,[ECX + ECX*0x4]
00448380  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
00448383  8D 4C C1 64               LEA ECX,[ECX + EAX*0x8 + 0x64]
00448387  0F BF D1                  MOVSX EDX,CX
0044838A  52                        PUSH EDX
0044838B  E8 7D 4B 26 00            CALL 0x006acf0d
00448390  8B C8                     MOV ECX,EAX
00448392  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00448395  2B F0                     SUB ESI,EAX
00448397  83 C4 18                  ADD ESP,0x18
0044839A  8D 04 B6                  LEA EAX,[ESI + ESI*0x4]
0044839D  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004483A0  8D 44 D6 64               LEA EAX,[ESI + EDX*0x8 + 0x64]
004483A4  0F BF C0                  MOVSX EAX,AX
004483A7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004483AA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004483AD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004483B0  C1 E0 03                  SHL EAX,0x3
004483B3  99                        CDQ
004483B4  F7 F9                     IDIV ECX
004483B6  3D 64 FC FF FF            CMP EAX,0xfffffc64
004483BB  7D 07                     JGE 0x004483c4
004483BD  B8 5A 00 00 00            MOV EAX,0x5a
004483C2  EB 6C                     JMP 0x00448430
LAB_004483c4:
004483C4  3D 63 FC FF FF            CMP EAX,0xfffffc63
004483C9  7E 1B                     JLE 0x004483e6
004483CB  3D 81 FE FF FF            CMP EAX,0xfffffe81
004483D0  7D 14                     JGE 0x004483e6
004483D2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004483D5  33 C0                     XOR EAX,EAX
004483D7  3B F9                     CMP EDI,ECX
004483D9  0F 9E C0                  SETLE AL
004483DC  48                        DEC EAX
004483DD  24 A6                     AND AL,0xa6
004483DF  05 87 00 00 00            ADD EAX,0x87
004483E4  EB 4A                     JMP 0x00448430
LAB_004483e6:
004483E6  3D 80 FE FF FF            CMP EAX,0xfffffe80
004483EB  7E 1B                     JLE 0x00448408
004483ED  3D 7F 01 00 00            CMP EAX,0x17f
004483F2  7D 14                     JGE 0x00448408
004483F4  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004483F7  33 C0                     XOR EAX,EAX
004483F9  3B F9                     CMP EDI,ECX
004483FB  0F 9E C0                  SETLE AL
004483FE  48                        DEC EAX
004483FF  24 4C                     AND AL,0x4c
00448401  05 B4 00 00 00            ADD EAX,0xb4
00448406  EB 28                     JMP 0x00448430
LAB_00448408:
00448408  3D 7E 01 00 00            CMP EAX,0x17e
0044840D  7E 1C                     JLE 0x0044842b
0044840F  3D 9C 03 00 00            CMP EAX,0x39c
00448414  7D 15                     JGE 0x0044842b
00448416  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00448419  33 C0                     XOR EAX,EAX
0044841B  3B F9                     CMP EDI,ECX
0044841D  0F 9E C0                  SETLE AL
00448420  48                        DEC EAX
00448421  83 E0 5A                  AND EAX,0x5a
00448424  05 E1 00 00 00            ADD EAX,0xe1
00448429  EB 05                     JMP 0x00448430
LAB_0044842b:
0044842B  B8 0E 01 00 00            MOV EAX,0x10e
LAB_00448430:
00448430  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00448436  3D 87 00 00 00            CMP EAX,0x87
0044843B  8B 91 E4 00 00 00         MOV EDX,dword ptr [ECX + 0xe4]
00448441  66 8B 4D 0C               MOV CX,word ptr [EBP + 0xc]
00448445  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
00448448  66 8B 55 10               MOV DX,word ptr [EBP + 0x10]
0044844C  66 89 4D F0               MOV word ptr [EBP + -0x10],CX
00448450  66 8B 4D 14               MOV CX,word ptr [EBP + 0x14]
00448454  66 89 55 F2               MOV word ptr [EBP + -0xe],DX
00448458  66 89 4D F4               MOV word ptr [EBP + -0xc],CX
0044845C  0F 8F B0 09 00 00         JG 0x00448e12
00448462  0F 84 3B 08 00 00         JZ 0x00448ca3
00448468  40                        INC EAX
00448469  83 F8 5B                  CMP EAX,0x5b
0044846C  0F 87 4D 0F 00 00         JA 0x004493bf
00448472  33 D2                     XOR EDX,EDX
00448474  8A 90 DC 93 44 00         MOV DL,byte ptr [EAX + 0x4493dc]
switchD_0044847a::switchD:
0044847A  FF 24 95 C8 93 44 00      JMP dword ptr [EDX*0x4 + 0x4493c8]
switchD_0044847a::caseD_5a:
00448481  8D 4B FF                  LEA ECX,[EBX + -0x1]
00448484  B8 89 88 88 88            MOV EAX,0x88888889
00448489  F7 E9                     IMUL ECX
0044848B  03 D1                     ADD EDX,ECX
0044848D  33 F6                     XOR ESI,ESI
0044848F  C1 FA 03                  SAR EDX,0x3
00448492  8B C2                     MOV EAX,EDX
00448494  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00448497  C1 E8 1F                  SHR EAX,0x1f
0044849A  03 D0                     ADD EDX,EAX
0044849C  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
0044849F  0F 88 1A 0F 00 00         JS 0x004493bf
004484A5  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004484A8  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004484AB  8B C3                     MOV EAX,EBX
004484AD  EB 02                     JMP 0x004484b1
LAB_004484af:
004484AF  33 F6                     XOR ESI,ESI
LAB_004484b1:
004484B1  8B C8                     MOV ECX,EAX
004484B3  83 F8 0F                  CMP EAX,0xf
004484B6  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004484B9  7C 08                     JL 0x004484c3
004484BB  B9 0F 00 00 00            MOV ECX,0xf
004484C0  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_004484c3:
004484C3  3B CE                     CMP ECX,ESI
004484C5  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
004484C8  0F 8E AC 00 00 00         JLE 0x0044857a
004484CE  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
004484D1  8D 9D 46 FF FF FF         LEA EBX,[EBP + 0xffffff46]
LAB_004484d7:
004484D7  8D 4D 18                  LEA ECX,[EBP + 0x18]
004484DA  8B D7                     MOV EDX,EDI
004484DC  51                        PUSH ECX
004484DD  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
004484E0  E8 8B 47 26 00            CALL 0x006acc70
004484E5  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004484E8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004484EB  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004484EE  6A 01                     PUSH 0x1
004484F0  52                        PUSH EDX
004484F1  50                        PUSH EAX
004484F2  E8 C3 A3 FB FF            CALL 0x004028ba
004484F7  8B F0                     MOV ESI,EAX
004484F9  85 F6                     TEST ESI,ESI
004484FB  0F 84 A3 00 00 00         JZ 0x004485a4
00448501  66 8B 4B FE               MOV CX,word ptr [EBX + -0x2]
00448505  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448508  66 03 4D 0C               ADD CX,word ptr [EBP + 0xc]
0044850C  66 8B 03                  MOV AX,word ptr [EBX]
0044850F  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00448513  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448517  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0044851A  2B D1                     SUB EDX,ECX
0044851C  8B CE                     MOV ECX,ESI
0044851E  83 EA 03                  SUB EDX,0x3
00448521  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00448525  E8 B2 A9 FB FF            CALL 0x00402edc
0044852A  83 F8 05                  CMP EAX,0x5
0044852D  75 25                     JNZ 0x00448554
0044852F  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00448532  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00448535  83 EC 10                  SUB ESP,0x10
00448538  8B CC                     MOV ECX,ESP
0044853A  89 11                     MOV dword ptr [ECX],EDX
0044853C  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0044853F  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00448542  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00448545  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00448548  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0044854B  8B CE                     MOV ECX,ESI
0044854D  E8 AB 97 FB FF            CALL 0x00401cfd
00448552  EB 0D                     JMP 0x00448561
LAB_00448554:
00448554  8D 4D EC                  LEA ECX,[EBP + -0x14]
00448557  51                        PUSH ECX
00448558  6A 05                     PUSH 0x5
0044855A  8B CE                     MOV ECX,ESI
0044855C  E8 C5 9B FB FF            CALL 0x00402126
LAB_00448561:
00448561  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00448564  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00448567  40                        INC EAX
00448568  47                        INC EDI
00448569  83 C3 06                  ADD EBX,0x6
0044856C  3B C1                     CMP EAX,ECX
0044856E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00448571  0F 8C 60 FF FF FF         JL 0x004484d7
00448577  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0044857a:
0044857A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
0044857D  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
00448580  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00448583  41                        INC ECX
00448584  83 C7 0F                  ADD EDI,0xf
00448587  83 E8 0F                  SUB EAX,0xf
0044858A  3B CA                     CMP ECX,EDX
0044858C  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
0044858F  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00448592  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00448595  0F 8E 14 FF FF FF         JLE 0x004484af
0044859B  5F                        POP EDI
0044859C  5E                        POP ESI
0044859D  5B                        POP EBX
0044859E  8B E5                     MOV ESP,EBP
004485A0  5D                        POP EBP
004485A1  C2 20 00                  RET 0x20
LAB_004485a4:
004485A4  68 A4 86 7A 00            PUSH 0x7a86a4
004485A9  68 CC 4C 7A 00            PUSH 0x7a4ccc
004485AE  6A 00                     PUSH 0x0
004485B0  6A 00                     PUSH 0x0
004485B2  68 2C 2D 00 00            PUSH 0x2d2c
004485B7  68 04 60 7A 00            PUSH 0x7a6004
004485BC  E8 0F 4F 26 00            CALL 0x006ad4d0
004485C1  83 C4 18                  ADD ESP,0x18
004485C4  85 C0                     TEST EAX,EAX
004485C6  0F 84 F3 0D 00 00         JZ 0x004493bf
004485CC  CC                        INT3
switchD_0044847a::caseD_2d:
004485D6  8D 4B FF                  LEA ECX,[EBX + -0x1]
004485D9  B8 67 66 66 66            MOV EAX,0x66666667
004485DE  F7 E9                     IMUL ECX
004485E0  C1 FA 02                  SAR EDX,0x2
004485E3  8B C2                     MOV EAX,EDX
004485E5  33 FF                     XOR EDI,EDI
004485E7  C1 E8 1F                  SHR EAX,0x1f
004485EA  03 D0                     ADD EDX,EAX
004485EC  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
004485EF  0F 88 CA 0D 00 00         JS 0x004493bf
004485F5  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
004485F8  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
004485FB  8B C3                     MOV EAX,EBX
LAB_004485fd:
004485FD  8B C8                     MOV ECX,EAX
004485FF  83 F8 0A                  CMP EAX,0xa
00448602  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00448605  7C 08                     JL 0x0044860f
00448607  B9 0A 00 00 00            MOV ECX,0xa
0044860C  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_0044860f:
0044860F  85 C9                     TEST ECX,ECX
00448611  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
00448618  0F 8E D7 00 00 00         JLE 0x004486f5
0044861E  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00448621  8D 75 A0                  LEA ESI,[EBP + -0x60]
00448624  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00448627:
00448627  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0044862A  8D 55 18                  LEA EDX,[EBP + 0x18]
0044862D  52                        PUSH EDX
0044862E  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00448631  E8 3A 46 26 00            CALL 0x006acc70
00448636  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00448639  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044863C  6A 01                     PUSH 0x1
0044863E  50                        PUSH EAX
0044863F  51                        PUSH ECX
00448640  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00448643  E8 72 A2 FB FF            CALL 0x004028ba
00448648  8B D8                     MOV EBX,EAX
0044864A  85 DB                     TEST EBX,EBX
0044864C  0F 84 C7 00 00 00         JZ 0x00448719
00448652  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
00448657  75 1B                     JNZ 0x00448674
00448659  66 8B 16                  MOV DX,word ptr [ESI]
0044865C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044865F  66 03 D7                  ADD DX,DI
00448662  8D 4C 02 02               LEA ECX,[EDX + EAX*0x1 + 0x2]
00448666  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448669  2B D7                     SUB EDX,EDI
0044866B  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
0044866F  83 EA 03                  SUB EDX,0x3
00448672  EB 18                     JMP 0x0044868c
LAB_00448674:
00448674  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00448677  66 8B 06                  MOV AX,word ptr [ESI]
0044867A  66 2B C7                  SUB AX,DI
0044867D  8D 54 0F 03               LEA EDX,[EDI + ECX*0x1 + 0x3]
00448681  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00448684  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00448688  8D 54 08 FE               LEA EDX,[EAX + ECX*0x1 + -0x2]
LAB_0044868c:
0044868C  66 8B 46 02               MOV AX,word ptr [ESI + 0x2]
00448690  8B CB                     MOV ECX,EBX
00448692  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00448696  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
0044869A  E8 3D A8 FB FF            CALL 0x00402edc
0044869F  83 F8 05                  CMP EAX,0x5
004486A2  75 25                     JNZ 0x004486c9
004486A4  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
004486A7  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
004486AA  83 EC 10                  SUB ESP,0x10
004486AD  8B CC                     MOV ECX,ESP
004486AF  89 11                     MOV dword ptr [ECX],EDX
004486B1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
004486B4  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004486B7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
004486BA  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
004486BD  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
004486C0  8B CB                     MOV ECX,EBX
004486C2  E8 36 96 FB FF            CALL 0x00401cfd
004486C7  EB 0D                     JMP 0x004486d6
LAB_004486c9:
004486C9  8D 4D EC                  LEA ECX,[EBP + -0x14]
004486CC  51                        PUSH ECX
004486CD  6A 05                     PUSH 0x5
004486CF  8B CB                     MOV ECX,EBX
004486D1  E8 50 9A FB FF            CALL 0x00402126
LAB_004486d6:
004486D6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
004486D9  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
004486DC  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004486DF  40                        INC EAX
004486E0  43                        INC EBX
004486E1  83 C6 06                  ADD ESI,0x6
004486E4  3B C1                     CMP EAX,ECX
004486E6  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
004486E9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
004486EC  0F 8C 35 FF FF FF         JL 0x00448627
004486F2  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_004486f5:
004486F5  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004486F8  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004486FB  47                        INC EDI
004486FC  83 C6 0A                  ADD ESI,0xa
004486FF  83 E8 0A                  SUB EAX,0xa
00448702  3B F9                     CMP EDI,ECX
00448704  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00448707  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044870A  0F 8E ED FE FF FF         JLE 0x004485fd
00448710  5F                        POP EDI
00448711  5E                        POP ESI
00448712  5B                        POP EBX
00448713  8B E5                     MOV ESP,EBP
00448715  5D                        POP EBP
00448716  C2 20 00                  RET 0x20
LAB_00448719:
00448719  68 68 86 7A 00            PUSH 0x7a8668
0044871E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448723  6A 00                     PUSH 0x0
00448725  6A 00                     PUSH 0x0
00448727  68 45 2D 00 00            PUSH 0x2d45
0044872C  68 04 60 7A 00            PUSH 0x7a6004
00448731  E8 9A 4D 26 00            CALL 0x006ad4d0
00448736  83 C4 18                  ADD ESP,0x18
00448739  85 C0                     TEST EAX,EAX
0044873B  0F 84 7E 0C 00 00         JZ 0x004493bf
00448741  CC                        INT3
switchD_0044847a::caseD_0:
0044874B  8D 4B FF                  LEA ECX,[EBX + -0x1]
0044874E  B8 89 88 88 88            MOV EAX,0x88888889
00448753  F7 E9                     IMUL ECX
00448755  03 D1                     ADD EDX,ECX
00448757  33 F6                     XOR ESI,ESI
00448759  C1 FA 03                  SAR EDX,0x3
0044875C  8B C2                     MOV EAX,EDX
0044875E  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00448761  C1 E8 1F                  SHR EAX,0x1f
00448764  03 D0                     ADD EDX,EAX
00448766  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00448769  0F 88 50 0C 00 00         JS 0x004493bf
0044876F  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00448772  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00448775  8B C3                     MOV EAX,EBX
00448777  EB 02                     JMP 0x0044877b
LAB_00448779:
00448779  33 F6                     XOR ESI,ESI
LAB_0044877b:
0044877B  8B C8                     MOV ECX,EAX
0044877D  83 F8 0F                  CMP EAX,0xf
00448780  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00448783  7C 08                     JL 0x0044878d
00448785  B9 0F 00 00 00            MOV ECX,0xf
0044878A  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_0044878d:
0044878D  3B CE                     CMP ECX,ESI
0044878F  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00448792  0F 8E AB 00 00 00         JLE 0x00448843
00448798  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
0044879B  8D 9D 46 FF FF FF         LEA EBX,[EBP + 0xffffff46]
LAB_004487a1:
004487A1  8D 4D 18                  LEA ECX,[EBP + 0x18]
004487A4  8B D7                     MOV EDX,EDI
004487A6  51                        PUSH ECX
004487A7  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
004487AA  E8 C1 44 26 00            CALL 0x006acc70
004487AF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004487B2  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004487B5  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004487B8  6A 01                     PUSH 0x1
004487BA  52                        PUSH EDX
004487BB  50                        PUSH EAX
004487BC  E8 F9 A0 FB FF            CALL 0x004028ba
004487C1  8B F0                     MOV ESI,EAX
004487C3  85 F6                     TEST ESI,ESI
004487C5  0F 84 A2 00 00 00         JZ 0x0044886d
004487CB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004487CE  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004487D1  8D 44 0A 03               LEA EAX,[EDX + ECX*0x1 + 0x3]
004487D5  66 8B 4B FE               MOV CX,word ptr [EBX + -0x2]
004487D9  66 03 4D 10               ADD CX,word ptr [EBP + 0x10]
004487DD  66 8B 13                  MOV DX,word ptr [EBX]
004487E0  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
004487E4  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
004487E8  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
004487EC  8B CE                     MOV ECX,ESI
004487EE  E8 E9 A6 FB FF            CALL 0x00402edc
004487F3  83 F8 05                  CMP EAX,0x5
004487F6  75 25                     JNZ 0x0044881d
004487F8  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
004487FB  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
004487FE  83 EC 10                  SUB ESP,0x10
00448801  8B C4                     MOV EAX,ESP
00448803  89 08                     MOV dword ptr [EAX],ECX
00448805  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00448808  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
0044880B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044880E  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
00448811  8B CE                     MOV ECX,ESI
00448813  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00448816  E8 E2 94 FB FF            CALL 0x00401cfd
0044881B  EB 0D                     JMP 0x0044882a
LAB_0044881d:
0044881D  8D 45 EC                  LEA EAX,[EBP + -0x14]
00448820  8B CE                     MOV ECX,ESI
00448822  50                        PUSH EAX
00448823  6A 05                     PUSH 0x5
00448825  E8 FC 98 FB FF            CALL 0x00402126
LAB_0044882a:
0044882A  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0044882D  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00448830  40                        INC EAX
00448831  47                        INC EDI
00448832  83 C3 06                  ADD EBX,0x6
00448835  3B C1                     CMP EAX,ECX
00448837  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
0044883A  0F 8C 61 FF FF FF         JL 0x004487a1
00448840  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_00448843:
00448843  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00448846  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00448849  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0044884C  41                        INC ECX
0044884D  83 C7 0F                  ADD EDI,0xf
00448850  83 E8 0F                  SUB EAX,0xf
00448853  3B CA                     CMP ECX,EDX
00448855  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00448858  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0044885B  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0044885E  0F 8E 15 FF FF FF         JLE 0x00448779
00448864  5F                        POP EDI
00448865  5E                        POP ESI
00448866  5B                        POP EBX
00448867  8B E5                     MOV ESP,EBP
00448869  5D                        POP EBP
0044886A  C2 20 00                  RET 0x20
LAB_0044886d:
0044886D  68 30 86 7A 00            PUSH 0x7a8630
00448872  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448877  6A 00                     PUSH 0x0
00448879  6A 00                     PUSH 0x0
0044887B  68 83 2D 00 00            PUSH 0x2d83
00448880  68 04 60 7A 00            PUSH 0x7a6004
00448885  E8 46 4C 26 00            CALL 0x006ad4d0
0044888A  83 C4 18                  ADD ESP,0x18
0044888D  85 C0                     TEST EAX,EAX
0044888F  0F 84 2A 0B 00 00         JZ 0x004493bf
00448895  CC                        INT3
switchD_0044847a::caseD_ffffffff:
0044889F  8D 4B FF                  LEA ECX,[EBX + -0x1]
004488A2  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004488A7  F7 E9                     IMUL ECX
004488A9  C1 FA 05                  SAR EDX,0x5
004488AC  8B CA                     MOV ECX,EDX
004488AE  33 F6                     XOR ESI,ESI
004488B0  C1 E9 1F                  SHR ECX,0x1f
004488B3  03 D1                     ADD EDX,ECX
004488B5  C7 45 E4 FF FF FF FF      MOV dword ptr [EBP + -0x1c],0xffffffff
004488BC  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
004488C2  0F 88 F7 0A 00 00         JS 0x004493bf
004488C8  8B D3                     MOV EDX,EBX
004488CA  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
004488CD  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
004488D0  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
LAB_004488d3:
004488D3  B9 08 00 00 00            MOV ECX,0x8
004488D8  33 C0                     XOR EAX,EAX
004488DA  8D BD 00 FF FF FF         LEA EDI,[EBP + 0xffffff00]
004488E0  83 FA 64                  CMP EDX,0x64
004488E3  F3 AB                     STOSD.REP ES:EDI
004488E5  8B C2                     MOV EAX,EDX
004488E7  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
004488EA  7C 08                     JL 0x004488f4
004488EC  B8 64 00 00 00            MOV EAX,0x64
004488F1  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
LAB_004488f4:
004488F4  85 C0                     TEST EAX,EAX
004488F6  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
004488FD  0F 8E 44 03 00 00         JLE 0x00448c47
00448903  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00448906  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
LAB_00448909:
00448909  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0044890C  8D 45 18                  LEA EAX,[EBP + 0x18]
0044890F  50                        PUSH EAX
00448910  E8 5B 43 26 00            CALL 0x006acc70
00448915  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00448918  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0044891B  6A 01                     PUSH 0x1
0044891D  51                        PUSH ECX
0044891E  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00448921  52                        PUSH EDX
00448922  E8 93 9F FB FF            CALL 0x004028ba
00448927  85 C0                     TEST EAX,EAX
00448929  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
0044892C  0F 84 3F 03 00 00         JZ 0x00448c71
00448932  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00448935:
00448935  40                        INC EAX
00448936  25 07 00 00 80            AND EAX,0x80000007
0044893B  79 05                     JNS 0x00448942
0044893D  48                        DEC EAX
0044893E  83 C8 F8                  OR EAX,0xfffffff8
00448941  40                        INC EAX
LAB_00448942:
00448942  8B 8C 85 20 FF FF FF      MOV ECX,dword ptr [EBP + EAX*0x4 + 0xffffff20]
00448949  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044894C  8B C1                     MOV EAX,ECX
0044894E  BF 5A 00 00 00            MOV EDI,0x5a
00448953  99                        CDQ
00448954  F7 FF                     IDIV EDI
00448956  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00448959  85 D2                     TEST EDX,EDX
0044895B  8B 94 85 00 FF FF FF      MOV EDX,dword ptr [EBP + EAX*0x4 + 0xffffff00]
00448962  75 07                     JNZ 0x0044896b
00448964  83 FA 0F                  CMP EDX,0xf
00448967  75 07                     JNZ 0x00448970
00448969  EB CA                     JMP 0x00448935
LAB_0044896b:
0044896B  83 FA 0A                  CMP EDX,0xa
0044896E  74 C5                     JZ 0x00448935
LAB_00448970:
00448970  8B BC 85 00 FF FF FF      MOV EDI,dword ptr [EBP + EAX*0x4 + 0xffffff00]
00448977  8D 84 85 00 FF FF FF      LEA EAX,[EBP + EAX*0x4 + 0xffffff00]
0044897E  47                        INC EDI
0044897F  81 F9 B4 00 00 00         CMP ECX,0xb4
00448985  89 38                     MOV dword ptr [EAX],EDI
00448987  8B C7                     MOV EAX,EDI
00448989  0F 8F 35 01 00 00         JG 0x00448ac4
0044898F  0F 84 FE 00 00 00         JZ 0x00448a93
00448995  81 F9 87 00 00 00         CMP ECX,0x87
0044899B  0F 87 3D 01 00 00         JA 0x00448ade
004489A1  33 D2                     XOR EDX,EDX
004489A3  8A 91 4C 94 44 00         MOV DL,byte ptr [ECX + 0x44944c]
switchD_004489a9::switchD:
004489A9  FF 24 95 38 94 44 00      JMP dword ptr [EDX*0x4 + 0x449438]
switchD_004489a9::caseD_0:
004489B0  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004489B3  8D 4C 1E 03               LEA ECX,[ESI + EBX*0x1 + 0x3]
004489B7  D1 E0                     SHL EAX,0x1
004489B9  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
004489BD  66 8B 94 05 3E FF FF FF   MOV DX,word ptr [EBP + EAX*0x1 + 0xffffff3e]
004489C5  66 8B 84 05 40 FF FF FF   MOV AX,word ptr [EBP + EAX*0x1 + 0xffffff40]
004489CD  66 03 55 10               ADD DX,word ptr [EBP + 0x10]
004489D1  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
004489D5  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
004489D9  E9 EF 01 00 00            JMP 0x00448bcd
switchD_004489a9::caseD_2d:
004489DE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
004489E1  D1 E0                     SHL EAX,0x1
004489E3  66 83 7C 05 9E 00         CMP word ptr [EBP + EAX*0x1 + -0x62],0x0
004489E9  75 1D                     JNZ 0x00448a08
004489EB  66 8B 4C 05 9A            MOV CX,word ptr [EBP + EAX*0x1 + -0x66]
004489F0  66 03 CE                  ADD CX,SI
004489F3  8D 54 19 02               LEA EDX,[ECX + EBX*0x1 + 0x2]
004489F7  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004489FA  2B CE                     SUB ECX,ESI
004489FC  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00448A00  83 E9 03                  SUB ECX,0x3
00448A03  E9 B8 01 00 00            JMP 0x00448bc0
LAB_00448a08:
00448A08  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448A0B  8D 4C 1E 03               LEA ECX,[ESI + EBX*0x1 + 0x3]
00448A0F  2B D6                     SUB EDX,ESI
00448A11  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448A15  83 EA 02                  SUB EDX,0x2
00448A18  66 03 54 05 9A            ADD DX,word ptr [EBP + EAX*0x1 + -0x66]
00448A1D  E9 0E 01 00 00            JMP 0x00448b30
switchD_004489a9::caseD_5a:
00448A22  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448A25  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448A28  D1 E0                     SHL EAX,0x1
00448A2A  2B D6                     SUB EDX,ESI
00448A2C  66 8B 8C 05 3E FF FF FF   MOV CX,word ptr [EBP + EAX*0x1 + 0xffffff3e]
00448A34  66 03 CB                  ADD CX,BX
00448A37  83 EA 03                  SUB EDX,0x3
00448A3A  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448A3E  EB 6F                     JMP 0x00448aaf
switchD_004489a9::caseD_87:
00448A40  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448A43  8B CE                     MOV ECX,ESI
00448A45  D1 E0                     SHL EAX,0x1
00448A47  66 83 7C 05 9E 00         CMP word ptr [EBP + EAX*0x1 + -0x62],0x0
00448A4D  75 29                     JNZ 0x00448a78
00448A4F  F7 D9                     NEG ECX
00448A51  8D 54 19 FD               LEA EDX,[ECX + EBX*0x1 + -0x3]
00448A55  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00448A59  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448A5C  03 CA                     ADD ECX,EDX
00448A5E  66 2B 4C 05 9A            SUB CX,word ptr [EBP + EAX*0x1 + -0x66]
00448A63  66 8B 44 05 9C            MOV AX,word ptr [EBP + EAX*0x1 + -0x64]
00448A68  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00448A6C  83 E9 02                  SUB ECX,0x2
00448A6F  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
00448A73  E9 55 01 00 00            JMP 0x00448bcd
LAB_00448a78:
00448A78  F7 D9                     NEG ECX
00448A7A  8D 54 19 FE               LEA EDX,[ECX + EBX*0x1 + -0x2]
00448A7E  66 03 54 05 9A            ADD DX,word ptr [EBP + EAX*0x1 + -0x66]
00448A83  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00448A87  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448A8A  8D 4C 11 FD               LEA ECX,[ECX + EDX*0x1 + -0x3]
00448A8E  E9 2D 01 00 00            JMP 0x00448bc0
LAB_00448a93:
00448A93  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448A96  8B CB                     MOV ECX,EBX
00448A98  D1 E0                     SHL EAX,0x1
00448A9A  2B CE                     SUB ECX,ESI
00448A9C  66 8B 94 05 3E FF FF FF   MOV DX,word ptr [EBP + EAX*0x1 + 0xffffff3e]
00448AA4  83 E9 03                  SUB ECX,0x3
00448AA7  66 03 55 10               ADD DX,word ptr [EBP + 0x10]
00448AAB  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
LAB_00448aaf:
00448AAF  66 8B 84 05 40 FF FF FF   MOV AX,word ptr [EBP + EAX*0x1 + 0xffffff40]
00448AB7  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00448ABB  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00448ABF  E9 09 01 00 00            JMP 0x00448bcd
LAB_00448ac4:
00448AC4  81 E9 E1 00 00 00         SUB ECX,0xe1
00448ACA  0F 84 B3 00 00 00         JZ 0x00448b83
00448AD0  83 E9 2D                  SUB ECX,0x2d
00448AD3  0F 84 81 00 00 00         JZ 0x00448b5a
00448AD9  83 E9 2D                  SUB ECX,0x2d
00448ADC  74 2E                     JZ 0x00448b0c
switchD_004489a9::caseD_1:
00448ADE  68 EC 85 7A 00            PUSH 0x7a85ec
00448AE3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448AE8  6A 00                     PUSH 0x0
00448AEA  6A 00                     PUSH 0x0
00448AEC  68 63 2E 00 00            PUSH 0x2e63
00448AF1  68 04 60 7A 00            PUSH 0x7a6004
00448AF6  E8 D5 49 26 00            CALL 0x006ad4d0
00448AFB  83 C4 18                  ADD ESP,0x18
00448AFE  85 C0                     TEST EAX,EAX
00448B00  0F 84 C7 00 00 00         JZ 0x00448bcd
00448B06  CC                        INT3
LAB_00448b0c:
00448B0C  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448B0F  D1 E0                     SHL EAX,0x1
00448B11  66 83 7C 05 9E 00         CMP word ptr [EBP + EAX*0x1 + -0x62],0x0
00448B17  75 29                     JNZ 0x00448b42
00448B19  66 8B 54 05 9A            MOV DX,word ptr [EBP + EAX*0x1 + -0x66]
00448B1E  8D 4C 1E 03               LEA ECX,[ESI + EBX*0x1 + 0x3]
00448B22  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448B26  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00448B29  66 03 D6                  ADD DX,SI
00448B2C  8D 54 0A 02               LEA EDX,[EDX + ECX*0x1 + 0x2]
LAB_00448b30:
00448B30  66 8B 44 05 9C            MOV AX,word ptr [EBP + EAX*0x1 + -0x64]
00448B35  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00448B39  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00448B3D  E9 8B 00 00 00            JMP 0x00448bcd
LAB_00448b42:
00448B42  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448B45  8D 0C 1E                  LEA ECX,[ESI + EBX*0x1]
00448B48  66 2B 4C 05 9A            SUB CX,word ptr [EBP + EAX*0x1 + -0x66]
00448B4D  83 C1 02                  ADD ECX,0x2
00448B50  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448B54  8D 4C 16 03               LEA ECX,[ESI + EDX*0x1 + 0x3]
00448B58  EB 66                     JMP 0x00448bc0
LAB_00448b5a:
00448B5A  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448B5D  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448B60  D1 E0                     SHL EAX,0x1
00448B62  66 8B 8C 05 3E FF FF FF   MOV CX,word ptr [EBP + EAX*0x1 + 0xffffff3e]
00448B6A  66 03 CB                  ADD CX,BX
00448B6D  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448B71  8D 4C 16 03               LEA ECX,[ESI + EDX*0x1 + 0x3]
00448B75  66 8B 94 05 40 FF FF FF   MOV DX,word ptr [EBP + EAX*0x1 + 0xffffff40]
00448B7D  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
00448B81  EB 46                     JMP 0x00448bc9
LAB_00448b83:
00448B83  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
00448B86  8B CB                     MOV ECX,EBX
00448B88  D1 E0                     SHL EAX,0x1
00448B8A  66 83 7C 05 9E 00         CMP word ptr [EBP + EAX*0x1 + -0x62],0x0
00448B90  75 17                     JNZ 0x00448ba9
00448B92  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448B95  2B CE                     SUB ECX,ESI
00448B97  66 2B 4C 05 9A            SUB CX,word ptr [EBP + EAX*0x1 + -0x66]
00448B9C  83 E9 02                  SUB ECX,0x2
00448B9F  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448BA3  8D 4C 16 03               LEA ECX,[ESI + EDX*0x1 + 0x3]
00448BA7  EB 17                     JMP 0x00448bc0
LAB_00448ba9:
00448BA9  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00448BAC  2B CE                     SUB ECX,ESI
00448BAE  83 E9 03                  SUB ECX,0x3
00448BB1  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448BB5  8D 0C 16                  LEA ECX,[ESI + EDX*0x1]
00448BB8  66 2B 4C 05 9A            SUB CX,word ptr [EBP + EAX*0x1 + -0x66]
00448BBD  83 C1 02                  ADD ECX,0x2
LAB_00448bc0:
00448BC0  66 8B 54 05 9C            MOV DX,word ptr [EBP + EAX*0x1 + -0x64]
00448BC5  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
LAB_00448bc9:
00448BC9  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
LAB_00448bcd:
00448BCD  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
00448BD0  8B CF                     MOV ECX,EDI
00448BD2  E8 05 A3 FB FF            CALL 0x00402edc
00448BD7  83 F8 05                  CMP EAX,0x5
00448BDA  75 14                     JNZ 0x00448bf0
00448BDC  6A 03                     PUSH 0x3
00448BDE  8B CF                     MOV ECX,EDI
00448BE0  E8 14 C2 FB FF            CALL 0x00404df9
00448BE5  83 F8 01                  CMP EAX,0x1
00448BE8  75 06                     JNZ 0x00448bf0
00448BEA  8D 45 EC                  LEA EAX,[EBP + -0x14]
00448BED  50                        PUSH EAX
00448BEE  EB 35                     JMP 0x00448c25
LAB_00448bf0:
00448BF0  8B CF                     MOV ECX,EDI
00448BF2  E8 E5 A2 FB FF            CALL 0x00402edc
00448BF7  83 F8 05                  CMP EAX,0x5
00448BFA  75 25                     JNZ 0x00448c21
00448BFC  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00448BFF  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00448C02  83 EC 10                  SUB ESP,0x10
00448C05  8B CC                     MOV ECX,ESP
00448C07  89 11                     MOV dword ptr [ECX],EDX
00448C09  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00448C0C  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00448C0F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00448C12  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00448C15  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00448C18  8B CF                     MOV ECX,EDI
00448C1A  E8 DE 90 FB FF            CALL 0x00401cfd
00448C1F  EB 0D                     JMP 0x00448c2e
LAB_00448c21:
00448C21  8D 4D EC                  LEA ECX,[EBP + -0x14]
00448C24  51                        PUSH ECX
LAB_00448c25:
00448C25  6A 05                     PUSH 0x5
00448C27  8B CF                     MOV ECX,EDI
00448C29  E8 F8 94 FB FF            CALL 0x00402126
LAB_00448c2e:
00448C2E  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00448C31  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00448C34  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00448C37  40                        INC EAX
00448C38  42                        INC EDX
00448C39  3B C1                     CMP EAX,ECX
00448C3B  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00448C3E  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
00448C41  0F 8C C2 FC FF FF         JL 0x00448909
LAB_00448c47:
00448C47  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00448C4A  8B 85 40 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff40]
00448C50  83 C2 64                  ADD EDX,0x64
00448C53  46                        INC ESI
00448C54  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00448C57  8B 55 E8                  MOV EDX,dword ptr [EBP + -0x18]
00448C5A  83 EA 64                  SUB EDX,0x64
00448C5D  3B F0                     CMP ESI,EAX
00448C5F  89 55 E8                  MOV dword ptr [EBP + -0x18],EDX
00448C62  0F 8E 6B FC FF FF         JLE 0x004488d3
00448C68  5F                        POP EDI
00448C69  5E                        POP ESI
00448C6A  5B                        POP EBX
00448C6B  8B E5                     MOV ESP,EBP
00448C6D  5D                        POP EBP
00448C6E  C2 20 00                  RET 0x20
LAB_00448c71:
00448C71  68 B0 85 7A 00            PUSH 0x7a85b0
00448C76  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448C7B  6A 00                     PUSH 0x0
00448C7D  6A 00                     PUSH 0x0
00448C7F  68 0B 2E 00 00            PUSH 0x2e0b
00448C84  68 04 60 7A 00            PUSH 0x7a6004
00448C89  E8 42 48 26 00            CALL 0x006ad4d0
00448C8E  83 C4 18                  ADD ESP,0x18
00448C91  85 C0                     TEST EAX,EAX
00448C93  0F 84 26 07 00 00         JZ 0x004493bf
00448C99  CC                        INT3
LAB_00448ca3:
00448CA3  8D 4B FF                  LEA ECX,[EBX + -0x1]
00448CA6  B8 67 66 66 66            MOV EAX,0x66666667
00448CAB  F7 E9                     IMUL ECX
00448CAD  C1 FA 02                  SAR EDX,0x2
00448CB0  8B C2                     MOV EAX,EDX
00448CB2  33 FF                     XOR EDI,EDI
00448CB4  C1 E8 1F                  SHR EAX,0x1f
00448CB7  03 D0                     ADD EDX,EAX
00448CB9  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00448CBC  0F 88 FD 06 00 00         JS 0x004493bf
00448CC2  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00448CC5  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00448CC8  8B C3                     MOV EAX,EBX
LAB_00448cca:
00448CCA  8B C8                     MOV ECX,EAX
00448CCC  83 F8 0A                  CMP EAX,0xa
00448CCF  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00448CD2  7C 08                     JL 0x00448cdc
00448CD4  B9 0A 00 00 00            MOV ECX,0xa
00448CD9  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00448cdc:
00448CDC  85 C9                     TEST ECX,ECX
00448CDE  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
00448CE5  0F 8E D1 00 00 00         JLE 0x00448dbc
00448CEB  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00448CEE  8D 75 A0                  LEA ESI,[EBP + -0x60]
00448CF1  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00448cf4:
00448CF4  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00448CF7  8D 55 18                  LEA EDX,[EBP + 0x18]
00448CFA  52                        PUSH EDX
00448CFB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00448CFE  E8 6D 3F 26 00            CALL 0x006acc70
00448D03  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00448D06  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00448D09  6A 01                     PUSH 0x1
00448D0B  50                        PUSH EAX
00448D0C  51                        PUSH ECX
00448D0D  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00448D10  E8 A5 9B FB FF            CALL 0x004028ba
00448D15  8B D8                     MOV EBX,EAX
00448D17  85 DB                     TEST EBX,EBX
00448D19  0F 84 C1 00 00 00         JZ 0x00448de0
00448D1F  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
00448D24  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00448D27  75 16                     JNZ 0x00448d3f
00448D29  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00448D2C  2B D7                     SUB EDX,EDI
00448D2E  2B C7                     SUB EAX,EDI
00448D30  83 EA 03                  SUB EDX,0x3
00448D33  66 2B 06                  SUB AX,word ptr [ESI]
00448D36  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00448D3A  83 E8 02                  SUB EAX,0x2
00448D3D  EB 14                     JMP 0x00448d53
LAB_00448d3f:
00448D3F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00448D42  2B D7                     SUB EDX,EDI
00448D44  66 03 16                  ADD DX,word ptr [ESI]
00448D47  2B C7                     SUB EAX,EDI
00448D49  83 EA 02                  SUB EDX,0x2
00448D4C  83 E8 03                  SUB EAX,0x3
00448D4F  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
LAB_00448d53:
00448D53  66 8B 4E 02               MOV CX,word ptr [ESI + 0x2]
00448D57  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
00448D5B  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
00448D5F  8B CB                     MOV ECX,EBX
00448D61  E8 76 A1 FB FF            CALL 0x00402edc
00448D66  83 F8 05                  CMP EAX,0x5
00448D69  75 25                     JNZ 0x00448d90
00448D6B  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00448D6E  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00448D71  83 EC 10                  SUB ESP,0x10
00448D74  8B D4                     MOV EDX,ESP
00448D76  89 02                     MOV dword ptr [EDX],EAX
00448D78  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00448D7B  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
00448D7E  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
00448D81  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
00448D84  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
00448D87  8B CB                     MOV ECX,EBX
00448D89  E8 6F 8F FB FF            CALL 0x00401cfd
00448D8E  EB 0D                     JMP 0x00448d9d
LAB_00448d90:
00448D90  8D 55 EC                  LEA EDX,[EBP + -0x14]
00448D93  8B CB                     MOV ECX,EBX
00448D95  52                        PUSH EDX
00448D96  6A 05                     PUSH 0x5
00448D98  E8 89 93 FB FF            CALL 0x00402126
LAB_00448d9d:
00448D9D  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00448DA0  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00448DA3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00448DA6  40                        INC EAX
00448DA7  43                        INC EBX
00448DA8  83 C6 06                  ADD ESI,0x6
00448DAB  3B C1                     CMP EAX,ECX
00448DAD  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00448DB0  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00448DB3  0F 8C 3B FF FF FF         JL 0x00448cf4
00448DB9  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00448dbc:
00448DBC  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00448DBF  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00448DC2  47                        INC EDI
00448DC3  83 C6 0A                  ADD ESI,0xa
00448DC6  83 E8 0A                  SUB EAX,0xa
00448DC9  3B F9                     CMP EDI,ECX
00448DCB  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00448DCE  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00448DD1  0F 8E F3 FE FF FF         JLE 0x00448cca
00448DD7  5F                        POP EDI
00448DD8  5E                        POP ESI
00448DD9  5B                        POP EBX
00448DDA  8B E5                     MOV ESP,EBP
00448DDC  5D                        POP EBP
00448DDD  C2 20 00                  RET 0x20
LAB_00448de0:
00448DE0  68 74 85 7A 00            PUSH 0x7a8574
00448DE5  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448DEA  6A 00                     PUSH 0x0
00448DEC  6A 00                     PUSH 0x0
00448DEE  68 64 2D 00 00            PUSH 0x2d64
00448DF3  68 04 60 7A 00            PUSH 0x7a6004
00448DF8  E8 D3 46 26 00            CALL 0x006ad4d0
00448DFD  83 C4 18                  ADD ESP,0x18
00448E00  85 C0                     TEST EAX,EAX
00448E02  0F 84 B7 05 00 00         JZ 0x004493bf
00448E08  CC                        INT3
LAB_00448e12:
00448E12  05 4C FF FF FF            ADD EAX,0xffffff4c
00448E17  3D 87 00 00 00            CMP EAX,0x87
00448E1C  0F 87 9D 05 00 00         JA 0x004493bf
00448E22  33 C9                     XOR ECX,ECX
00448E24  8A 88 E8 94 44 00         MOV CL,byte ptr [EAX + 0x4494e8]
switchD_00448e2a::switchD:
00448E2A  FF 24 8D D4 94 44 00      JMP dword ptr [ECX*0x4 + 0x4494d4]
switchD_00448e2a::caseD_b4:
00448E31  8D 4B FF                  LEA ECX,[EBX + -0x1]
00448E34  B8 89 88 88 88            MOV EAX,0x88888889
00448E39  F7 E9                     IMUL ECX
00448E3B  03 D1                     ADD EDX,ECX
00448E3D  33 F6                     XOR ESI,ESI
00448E3F  C1 FA 03                  SAR EDX,0x3
00448E42  8B C2                     MOV EAX,EDX
00448E44  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
00448E47  C1 E8 1F                  SHR EAX,0x1f
00448E4A  03 D0                     ADD EDX,EAX
00448E4C  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00448E4F  0F 88 6A 05 00 00         JS 0x004493bf
00448E55  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00448E58  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
00448E5B  8B C3                     MOV EAX,EBX
00448E5D  EB 02                     JMP 0x00448e61
LAB_00448e5f:
00448E5F  33 F6                     XOR ESI,ESI
LAB_00448e61:
00448E61  8B C8                     MOV ECX,EAX
00448E63  83 F8 0F                  CMP EAX,0xf
00448E66  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00448E69  7C 08                     JL 0x00448e73
00448E6B  B9 0F 00 00 00            MOV ECX,0xf
00448E70  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00448e73:
00448E73  3B CE                     CMP ECX,ESI
00448E75  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
00448E78  0F 8E AC 00 00 00         JLE 0x00448f2a
00448E7E  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00448E81  8D 9D 46 FF FF FF         LEA EBX,[EBP + 0xffffff46]
LAB_00448e87:
00448E87  8D 4D 18                  LEA ECX,[EBP + 0x18]
00448E8A  8B D7                     MOV EDX,EDI
00448E8C  51                        PUSH ECX
00448E8D  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00448E90  E8 DB 3D 26 00            CALL 0x006acc70
00448E95  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00448E98  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00448E9B  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00448E9E  6A 01                     PUSH 0x1
00448EA0  52                        PUSH EDX
00448EA1  50                        PUSH EAX
00448EA2  E8 13 9A FB FF            CALL 0x004028ba
00448EA7  8B F0                     MOV ESI,EAX
00448EA9  85 F6                     TEST ESI,ESI
00448EAB  0F 84 A3 00 00 00         JZ 0x00448f54
00448EB1  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00448EB4  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00448EB7  66 8B 53 FE               MOV DX,word ptr [EBX + -0x2]
00448EBB  2B C8                     SUB ECX,EAX
00448EBD  66 03 55 10               ADD DX,word ptr [EBP + 0x10]
00448EC1  66 8B 03                  MOV AX,word ptr [EBX]
00448EC4  83 E9 03                  SUB ECX,0x3
00448EC7  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00448ECB  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
00448ECF  8B CE                     MOV ECX,ESI
00448ED1  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00448ED5  E8 02 A0 FB FF            CALL 0x00402edc
00448EDA  83 F8 05                  CMP EAX,0x5
00448EDD  75 25                     JNZ 0x00448f04
00448EDF  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00448EE2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00448EE5  83 EC 10                  SUB ESP,0x10
00448EE8  8B CC                     MOV ECX,ESP
00448EEA  89 11                     MOV dword ptr [ECX],EDX
00448EEC  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00448EEF  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00448EF2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00448EF5  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
00448EF8  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00448EFB  8B CE                     MOV ECX,ESI
00448EFD  E8 FB 8D FB FF            CALL 0x00401cfd
00448F02  EB 0D                     JMP 0x00448f11
LAB_00448f04:
00448F04  8D 4D EC                  LEA ECX,[EBP + -0x14]
00448F07  51                        PUSH ECX
00448F08  6A 05                     PUSH 0x5
00448F0A  8B CE                     MOV ECX,ESI
00448F0C  E8 15 92 FB FF            CALL 0x00402126
LAB_00448f11:
00448F11  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00448F14  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00448F17  40                        INC EAX
00448F18  47                        INC EDI
00448F19  83 C3 06                  ADD EBX,0x6
00448F1C  3B C1                     CMP EAX,ECX
00448F1E  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00448F21  0F 8C 60 FF FF FF         JL 0x00448e87
00448F27  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_00448f2a:
00448F2A  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00448F2D  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00448F30  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00448F33  41                        INC ECX
00448F34  83 C7 0F                  ADD EDI,0xf
00448F37  83 E8 0F                  SUB EAX,0xf
00448F3A  3B CA                     CMP ECX,EDX
00448F3C  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00448F3F  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00448F42  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
00448F45  0F 8E 14 FF FF FF         JLE 0x00448e5f
00448F4B  5F                        POP EDI
00448F4C  5E                        POP ESI
00448F4D  5B                        POP EBX
00448F4E  8B E5                     MOV ESP,EBP
00448F50  5D                        POP EBP
00448F51  C2 20 00                  RET 0x20
LAB_00448f54:
00448F54  68 38 85 7A 00            PUSH 0x7a8538
00448F59  68 CC 4C 7A 00            PUSH 0x7a4ccc
00448F5E  6A 00                     PUSH 0x0
00448F60  6A 00                     PUSH 0x0
00448F62  68 9B 2D 00 00            PUSH 0x2d9b
00448F67  68 04 60 7A 00            PUSH 0x7a6004
00448F6C  E8 5F 45 26 00            CALL 0x006ad4d0
00448F71  83 C4 18                  ADD ESP,0x18
00448F74  85 C0                     TEST EAX,EAX
00448F76  0F 84 43 04 00 00         JZ 0x004493bf
00448F7C  CC                        INT3
switchD_00448e2a::caseD_13b:
00448F86  8D 4B FF                  LEA ECX,[EBX + -0x1]
00448F89  B8 67 66 66 66            MOV EAX,0x66666667
00448F8E  F7 E9                     IMUL ECX
00448F90  C1 FA 03                  SAR EDX,0x3
00448F93  8B C2                     MOV EAX,EDX
00448F95  33 FF                     XOR EDI,EDI
00448F97  C1 E8 1F                  SHR EAX,0x1f
00448F9A  03 D0                     ADD EDX,EAX
00448F9C  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00448F9F  0F 88 1A 04 00 00         JS 0x004493bf
00448FA5  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00448FA8  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
00448FAB  8B C3                     MOV EAX,EBX
LAB_00448fad:
00448FAD  8B C8                     MOV ECX,EAX
00448FAF  83 F8 14                  CMP EAX,0x14
00448FB2  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00448FB5  7C 08                     JL 0x00448fbf
00448FB7  B9 14 00 00 00            MOV ECX,0x14
00448FBC  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00448fbf:
00448FBF  85 C9                     TEST ECX,ECX
00448FC1  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
00448FC8  0F 8E D5 00 00 00         JLE 0x004490a3
00448FCE  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00448FD1  8D 75 A0                  LEA ESI,[EBP + -0x60]
00448FD4  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_00448fd7:
00448FD7  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00448FDA  8D 55 18                  LEA EDX,[EBP + 0x18]
00448FDD  52                        PUSH EDX
00448FDE  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00448FE1  E8 8A 3C 26 00            CALL 0x006acc70
00448FE6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00448FE9  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00448FEC  6A 01                     PUSH 0x1
00448FEE  50                        PUSH EAX
00448FEF  51                        PUSH ECX
00448FF0  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00448FF3  E8 C2 98 FB FF            CALL 0x004028ba
00448FF8  8B D8                     MOV EBX,EAX
00448FFA  85 DB                     TEST EBX,EBX
00448FFC  0F 84 C5 00 00 00         JZ 0x004490c7
00449002  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
00449007  75 19                     JNZ 0x00449022
00449009  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044900C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0044900F  8D 44 17 03               LEA EAX,[EDI + EDX*0x1 + 0x3]
00449013  8D 14 0F                  LEA EDX,[EDI + ECX*0x1]
00449016  66 03 16                  ADD DX,word ptr [ESI]
00449019  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
0044901D  83 C2 02                  ADD EDX,0x2
00449020  EB 18                     JMP 0x0044903a
LAB_00449022:
00449022  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00449025  66 8B CF                  MOV CX,DI
00449028  66 2B 0E                  SUB CX,word ptr [ESI]
0044902B  8D 44 11 02               LEA EAX,[ECX + EDX*0x1 + 0x2]
0044902F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00449032  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
00449036  8D 54 0F 03               LEA EDX,[EDI + ECX*0x1 + 0x3]
LAB_0044903a:
0044903A  66 8B 46 02               MOV AX,word ptr [ESI + 0x2]
0044903E  8B CB                     MOV ECX,EBX
00449040  66 89 55 F8               MOV word ptr [EBP + -0x8],DX
00449044  66 89 45 FA               MOV word ptr [EBP + -0x6],AX
00449048  E8 8F 9E FB FF            CALL 0x00402edc
0044904D  83 F8 05                  CMP EAX,0x5
00449050  75 25                     JNZ 0x00449077
00449052  8B 55 EC                  MOV EDX,dword ptr [EBP + -0x14]
00449055  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00449058  83 EC 10                  SUB ESP,0x10
0044905B  8B CC                     MOV ECX,ESP
0044905D  89 11                     MOV dword ptr [ECX],EDX
0044905F  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
00449062  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
00449065  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00449068  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
0044906B  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
0044906E  8B CB                     MOV ECX,EBX
00449070  E8 88 8C FB FF            CALL 0x00401cfd
00449075  EB 0D                     JMP 0x00449084
LAB_00449077:
00449077  8D 4D EC                  LEA ECX,[EBP + -0x14]
0044907A  51                        PUSH ECX
0044907B  6A 05                     PUSH 0x5
0044907D  8B CB                     MOV ECX,EBX
0044907F  E8 A2 90 FB FF            CALL 0x00402126
LAB_00449084:
00449084  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00449087  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0044908A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0044908D  40                        INC EAX
0044908E  43                        INC EBX
0044908F  83 C6 06                  ADD ESI,0x6
00449092  3B C1                     CMP EAX,ECX
00449094  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00449097  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
0044909A  0F 8C 37 FF FF FF         JL 0x00448fd7
004490A0  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_004490a3:
004490A3  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
004490A6  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
004490A9  47                        INC EDI
004490AA  83 C6 14                  ADD ESI,0x14
004490AD  83 E8 14                  SUB EAX,0x14
004490B0  3B F9                     CMP EDI,ECX
004490B2  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
004490B5  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
004490B8  0F 8E EF FE FF FF         JLE 0x00448fad
004490BE  5F                        POP EDI
004490BF  5E                        POP ESI
004490C0  5B                        POP EBX
004490C1  8B E5                     MOV ESP,EBP
004490C3  5D                        POP EBP
004490C4  C2 20 00                  RET 0x20
LAB_004490c7:
004490C7  68 FC 84 7A 00            PUSH 0x7a84fc
004490CC  68 CC 4C 7A 00            PUSH 0x7a4ccc
004490D1  6A 00                     PUSH 0x0
004490D3  6A 00                     PUSH 0x0
004490D5  68 B3 2D 00 00            PUSH 0x2db3
004490DA  68 04 60 7A 00            PUSH 0x7a6004
004490DF  E8 EC 43 26 00            CALL 0x006ad4d0
004490E4  83 C4 18                  ADD ESP,0x18
004490E7  85 C0                     TEST EAX,EAX
004490E9  0F 84 D0 02 00 00         JZ 0x004493bf
004490EF  CC                        INT3
switchD_00448e2a::caseD_e1:
004490F9  8D 4B FF                  LEA ECX,[EBX + -0x1]
004490FC  B8 67 66 66 66            MOV EAX,0x66666667
00449101  F7 E9                     IMUL ECX
00449103  C1 FA 03                  SAR EDX,0x3
00449106  8B C2                     MOV EAX,EDX
00449108  33 FF                     XOR EDI,EDI
0044910A  C1 E8 1F                  SHR EAX,0x1f
0044910D  03 D0                     ADD EDX,EAX
0044910F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00449112  0F 88 A7 02 00 00         JS 0x004493bf
00449118  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
0044911B  89 5D E4                  MOV dword ptr [EBP + -0x1c],EBX
0044911E  8B C3                     MOV EAX,EBX
LAB_00449120:
00449120  8B C8                     MOV ECX,EAX
00449122  83 F8 14                  CMP EAX,0x14
00449125  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
00449128  7C 08                     JL 0x00449132
0044912A  B9 14 00 00 00            MOV ECX,0x14
0044912F  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_00449132:
00449132  85 C9                     TEST ECX,ECX
00449134  C7 45 1C 00 00 00 00      MOV dword ptr [EBP + 0x1c],0x0
0044913B  0F 8E E1 00 00 00         JLE 0x00449222
00449141  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00449144  8D 75 A0                  LEA ESI,[EBP + -0x60]
00449147  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0044914a:
0044914A  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
0044914D  8D 55 18                  LEA EDX,[EBP + 0x18]
00449150  52                        PUSH EDX
00449151  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00449154  E8 17 3B 26 00            CALL 0x006acc70
00449159  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0044915C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0044915F  6A 01                     PUSH 0x1
00449161  50                        PUSH EAX
00449162  51                        PUSH ECX
00449163  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00449166  E8 4F 97 FB FF            CALL 0x004028ba
0044916B  8B D8                     MOV EBX,EAX
0044916D  85 DB                     TEST EBX,EBX
0044916F  0F 84 D1 00 00 00         JZ 0x00449246
00449175  66 83 7E 04 00            CMP word ptr [ESI + 0x4],0x0
0044917A  75 24                     JNZ 0x004491a0
0044917C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0044917F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00449182  2B D7                     SUB EDX,EDI
00449184  66 2B 16                  SUB DX,word ptr [ESI]
00449187  8D 4C 07 03               LEA ECX,[EDI + EAX*0x1 + 0x3]
0044918B  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
0044918F  83 EA 02                  SUB EDX,0x2
00449192  66 89 55 F6               MOV word ptr [EBP + -0xa],DX
00449196  66 8B 56 02               MOV DX,word ptr [ESI + 0x2]
0044919A  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
0044919E  EB 25                     JMP 0x004491c5
LAB_004491a0:
004491A0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
004491A3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004491A6  2B C7                     SUB EAX,EDI
004491A8  66 8B CF                  MOV CX,DI
004491AB  83 E8 03                  SUB EAX,0x3
004491AE  66 2B 0E                  SUB CX,word ptr [ESI]
004491B1  66 89 45 F6               MOV word ptr [EBP + -0xa],AX
004491B5  8D 44 11 02               LEA EAX,[ECX + EDX*0x1 + 0x2]
004491B9  66 8B 4E 02               MOV CX,word ptr [ESI + 0x2]
004491BD  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
004491C1  66 89 4D FA               MOV word ptr [EBP + -0x6],CX
LAB_004491c5:
004491C5  8B CB                     MOV ECX,EBX
004491C7  E8 10 9D FB FF            CALL 0x00402edc
004491CC  83 F8 05                  CMP EAX,0x5
004491CF  75 25                     JNZ 0x004491f6
004491D1  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
004491D4  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
004491D7  83 EC 10                  SUB ESP,0x10
004491DA  8B D4                     MOV EDX,ESP
004491DC  89 02                     MOV dword ptr [EDX],EAX
004491DE  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
004491E1  89 4A 04                  MOV dword ptr [EDX + 0x4],ECX
004491E4  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
004491E7  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
004491EA  89 4A 0C                  MOV dword ptr [EDX + 0xc],ECX
004491ED  8B CB                     MOV ECX,EBX
004491EF  E8 09 8B FB FF            CALL 0x00401cfd
004491F4  EB 0D                     JMP 0x00449203
LAB_004491f6:
004491F6  8D 55 EC                  LEA EDX,[EBP + -0x14]
004491F9  8B CB                     MOV ECX,EBX
004491FB  52                        PUSH EDX
004491FC  6A 05                     PUSH 0x5
004491FE  E8 23 8F FB FF            CALL 0x00402126
LAB_00449203:
00449203  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
00449206  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
00449209  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0044920C  40                        INC EAX
0044920D  43                        INC EBX
0044920E  83 C6 06                  ADD ESI,0x6
00449211  3B C1                     CMP EAX,ECX
00449213  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00449216  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00449219  0F 8C 2B FF FF FF         JL 0x0044914a
0044921F  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
LAB_00449222:
00449222  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
00449225  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00449228  47                        INC EDI
00449229  83 C6 14                  ADD ESI,0x14
0044922C  83 E8 14                  SUB EAX,0x14
0044922F  3B F9                     CMP EDI,ECX
00449231  89 75 E8                  MOV dword ptr [EBP + -0x18],ESI
00449234  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00449237  0F 8E E3 FE FF FF         JLE 0x00449120
0044923D  5F                        POP EDI
0044923E  5E                        POP ESI
0044923F  5B                        POP EBX
00449240  8B E5                     MOV ESP,EBP
00449242  5D                        POP EBP
00449243  C2 20 00                  RET 0x20
LAB_00449246:
00449246  68 C0 84 7A 00            PUSH 0x7a84c0
0044924B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00449250  6A 00                     PUSH 0x0
00449252  6A 00                     PUSH 0x0
00449254  68 D2 2D 00 00            PUSH 0x2dd2
00449259  68 04 60 7A 00            PUSH 0x7a6004
0044925E  E8 6D 42 26 00            CALL 0x006ad4d0
00449263  83 C4 18                  ADD ESP,0x18
00449266  85 C0                     TEST EAX,EAX
00449268  0F 84 51 01 00 00         JZ 0x004493bf
0044926E  CC                        INT3
switchD_00448e2a::caseD_10e:
00449278  8D 4B FF                  LEA ECX,[EBX + -0x1]
0044927B  B8 89 88 88 88            MOV EAX,0x88888889
00449280  F7 E9                     IMUL ECX
00449282  03 D1                     ADD EDX,ECX
00449284  33 F6                     XOR ESI,ESI
00449286  C1 FA 03                  SAR EDX,0x3
00449289  8B C2                     MOV EAX,EDX
0044928B  89 75 E0                  MOV dword ptr [EBP + -0x20],ESI
0044928E  C1 E8 1F                  SHR EAX,0x1f
00449291  03 D0                     ADD EDX,EAX
00449293  89 55 E4                  MOV dword ptr [EBP + -0x1c],EDX
00449296  0F 88 23 01 00 00         JS 0x004493bf
0044929C  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0044929F  89 5D E8                  MOV dword ptr [EBP + -0x18],EBX
004492A2  8B C3                     MOV EAX,EBX
004492A4  EB 02                     JMP 0x004492a8
LAB_004492a6:
004492A6  33 F6                     XOR ESI,ESI
LAB_004492a8:
004492A8  8B C8                     MOV ECX,EAX
004492AA  83 F8 0F                  CMP EAX,0xf
004492AD  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
004492B0  7C 08                     JL 0x004492ba
004492B2  B9 0F 00 00 00            MOV ECX,0xf
004492B7  89 4D 14                  MOV dword ptr [EBP + 0x14],ECX
LAB_004492ba:
004492BA  3B CE                     CMP ECX,ESI
004492BC  89 75 1C                  MOV dword ptr [EBP + 0x1c],ESI
004492BF  0F 8E AB 00 00 00         JLE 0x00449370
004492C5  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
004492C8  8D 9D 46 FF FF FF         LEA EBX,[EBP + 0xffffff46]
LAB_004492ce:
004492CE  8D 4D 18                  LEA ECX,[EBP + 0x18]
004492D1  8B D7                     MOV EDX,EDI
004492D3  51                        PUSH ECX
004492D4  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
004492D7  E8 94 39 26 00            CALL 0x006acc70
004492DC  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
004492DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004492E2  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
004492E5  6A 01                     PUSH 0x1
004492E7  52                        PUSH EDX
004492E8  50                        PUSH EAX
004492E9  E8 CC 95 FB FF            CALL 0x004028ba
004492EE  8B F0                     MOV ESI,EAX
004492F0  85 F6                     TEST ESI,ESI
004492F2  0F 84 A2 00 00 00         JZ 0x0044939a
004492F8  66 8B 4B FE               MOV CX,word ptr [EBX + -0x2]
004492FC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
004492FF  66 03 4D 0C               ADD CX,word ptr [EBP + 0xc]
00449303  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00449306  66 89 4D F6               MOV word ptr [EBP + -0xa],CX
0044930A  8D 4C 10 03               LEA ECX,[EAX + EDX*0x1 + 0x3]
0044930E  66 8B 13                  MOV DX,word ptr [EBX]
00449311  66 89 4D F8               MOV word ptr [EBP + -0x8],CX
00449315  8B CE                     MOV ECX,ESI
00449317  66 89 55 FA               MOV word ptr [EBP + -0x6],DX
0044931B  E8 BC 9B FB FF            CALL 0x00402edc
00449320  83 F8 05                  CMP EAX,0x5
00449323  75 25                     JNZ 0x0044934a
00449325  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
00449328  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
0044932B  83 EC 10                  SUB ESP,0x10
0044932E  8B C4                     MOV EAX,ESP
00449330  89 08                     MOV dword ptr [EAX],ECX
00449332  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00449335  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00449338  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0044933B  89 48 08                  MOV dword ptr [EAX + 0x8],ECX
0044933E  8B CE                     MOV ECX,ESI
00449340  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00449343  E8 B5 89 FB FF            CALL 0x00401cfd
00449348  EB 0D                     JMP 0x00449357
LAB_0044934a:
0044934A  8D 45 EC                  LEA EAX,[EBP + -0x14]
0044934D  8B CE                     MOV ECX,ESI
0044934F  50                        PUSH EAX
00449350  6A 05                     PUSH 0x5
00449352  E8 CF 8D FB FF            CALL 0x00402126
LAB_00449357:
00449357  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
0044935A  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0044935D  40                        INC EAX
0044935E  47                        INC EDI
0044935F  83 C3 06                  ADD EBX,0x6
00449362  3B C1                     CMP EAX,ECX
00449364  89 45 1C                  MOV dword ptr [EBP + 0x1c],EAX
00449367  0F 8C 61 FF FF FF         JL 0x004492ce
0044936D  8B 45 E8                  MOV EAX,dword ptr [EBP + -0x18]
LAB_00449370:
00449370  8B 4D E0                  MOV ECX,dword ptr [EBP + -0x20]
00449373  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00449376  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00449379  41                        INC ECX
0044937A  83 C7 0F                  ADD EDI,0xf
0044937D  83 E8 0F                  SUB EAX,0xf
00449380  3B CA                     CMP ECX,EDX
00449382  89 4D E0                  MOV dword ptr [EBP + -0x20],ECX
00449385  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00449388  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0044938B  0F 8E 15 FF FF FF         JLE 0x004492a6
00449391  5F                        POP EDI
00449392  5E                        POP ESI
00449393  5B                        POP EBX
00449394  8B E5                     MOV ESP,EBP
00449396  5D                        POP EBP
00449397  C2 20 00                  RET 0x20
LAB_0044939a:
0044939A  68 84 84 7A 00            PUSH 0x7a8484
0044939F  68 CC 4C 7A 00            PUSH 0x7a4ccc
004493A4  6A 00                     PUSH 0x0
004493A6  6A 00                     PUSH 0x0
004493A8  68 F1 2D 00 00            PUSH 0x2df1
004493AD  68 04 60 7A 00            PUSH 0x7a6004
004493B2  E8 19 41 26 00            CALL 0x006ad4d0
004493B7  83 C4 18                  ADD ESP,0x18
004493BA  85 C0                     TEST EAX,EAX
004493BC  74 01                     JZ 0x004493bf
004493BE  CC                        INT3
switchD_0044847a::caseD_1:
004493BF  5F                        POP EDI
004493C0  5E                        POP ESI
004493C1  5B                        POP EBX
004493C2  8B E5                     MOV ESP,EBP
004493C4  5D                        POP EBP
004493C5  C2 20 00                  RET 0x20
