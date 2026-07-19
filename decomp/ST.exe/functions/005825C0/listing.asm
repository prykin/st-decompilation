STJellyGunC::LifeGun:
005825C0  55                        PUSH EBP
005825C1  8B EC                     MOV EBP,ESP
005825C3  83 EC 48                  SUB ESP,0x48
005825C6  53                        PUSH EBX
005825C7  56                        PUSH ESI
005825C8  57                        PUSH EDI
005825C9  8B F1                     MOV ESI,ECX
005825CB  E8 6C F4 E7 FF            CALL 0x00401a3c
005825D0  85 C0                     TEST EAX,EAX
005825D2  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
005825D8  74 19                     JZ 0x005825f3
005825DA  6A 01                     PUSH 0x1
005825DC  8B CB                     MOV ECX,EBX
005825DE  E8 E9 2C E8 FF            CALL 0x004052cc
005825E3  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
005825E9  50                        PUSH EAX
005825EA  E8 01 86 16 00            CALL 0x006eabf0
005825EF  6A 01                     PUSH 0x1
005825F1  EB 26                     JMP 0x00582619
LAB_005825f3:
005825F3  6A 00                     PUSH 0x0
005825F5  8B CB                     MOV ECX,EBX
005825F7  E8 D0 2C E8 FF            CALL 0x004052cc
005825FC  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00582602  50                        PUSH EAX
00582603  E8 E8 85 16 00            CALL 0x006eabf0
00582608  8B CE                     MOV ECX,ESI
0058260A  E8 C9 2A E8 FF            CALL 0x004050d8
0058260F  83 F8 01                  CMP EAX,0x1
00582612  75 03                     JNZ 0x00582617
00582614  50                        PUSH EAX
00582615  EB 02                     JMP 0x00582619
LAB_00582617:
00582617  6A 00                     PUSH 0x0
LAB_00582619:
00582619  8B CB                     MOV ECX,EBX
0058261B  E8 AC 2C E8 FF            CALL 0x004052cc
00582620  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00582626  50                        PUSH EAX
00582627  E8 44 42 16 00            CALL 0x006e6870
0058262C  66 8B 46 41               MOV AX,word ptr [ESI + 0x41]
00582630  66 8B 4E 43               MOV CX,word ptr [ESI + 0x43]
00582634  66 8B 56 45               MOV DX,word ptr [ESI + 0x45]
00582638  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0058263B  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
00582641  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00582644  48                        DEC EAX
00582645  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00582648  83 F8 03                  CMP EAX,0x3
0058264B  0F 87 6A 01 00 00         JA 0x005827bb
switchD_00582651::switchD:
00582651  FF 24 85 CC 2F 58 00      JMP dword ptr [EAX*0x4 + 0x582fcc]
switchD_00582651::caseD_3:
00582658  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0058265B  8D 4D E0                  LEA ECX,[EBP + -0x20]
0058265E  50                        PUSH EAX
0058265F  51                        PUSH ECX
00582660  8B CE                     MOV ECX,ESI
00582662  E8 E0 01 E8 FF            CALL 0x00402847
00582667  8B D8                     MOV EBX,EAX
00582669  83 FB FF                  CMP EBX,-0x1
0058266C  0F 84 49 01 00 00         JZ 0x005827bb
00582672  85 DB                     TEST EBX,EBX
00582674  0F 8C 4E 01 00 00         JL 0x005827c8
0058267A  83 FB 01                  CMP EBX,0x1
0058267D  0F 8F 45 01 00 00         JG 0x005827c8
00582683  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
00582689  3D FF 00 00 00            CMP EAX,0xff
0058268E  0F 84 AA 01 00 00         JZ 0x0058283e
00582694  66 8B 96 45 02 00 00      MOV DX,word ptr [ESI + 0x245]
0058269B  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005826A1  6A 01                     PUSH 0x1
005826A3  52                        PUSH EDX
005826A4  50                        PUSH EAX
005826A5  E8 10 02 E8 FF            CALL 0x004028ba
005826AA  8B F8                     MOV EDI,EAX
005826AC  85 FF                     TEST EDI,EDI
005826AE  0F 84 8A 01 00 00         JZ 0x0058283e
005826B4  8B 17                     MOV EDX,dword ptr [EDI]
005826B6  8B CF                     MOV ECX,EDI
005826B8  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
005826BE  85 C0                     TEST EAX,EAX
005826C0  0F 84 78 01 00 00         JZ 0x0058283e
005826C6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005826CB  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005826D1  83 E1 07                  AND ECX,0x7
005826D4  80 F9 01                  CMP CL,0x1
005826D7  0F 85 DA 00 00 00         JNZ 0x005827b7
005826DD  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
005826E0  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
005826E3  8B 17                     MOV EDX,dword ptr [EDI]
005826E5  50                        PUSH EAX
005826E6  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
005826E9  51                        PUSH ECX
005826EA  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
005826EE  50                        PUSH EAX
005826EF  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
005826F3  51                        PUSH ECX
005826F4  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
005826F8  50                        PUSH EAX
005826F9  51                        PUSH ECX
005826FA  8B CF                     MOV ECX,EDI
005826FC  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00582702  85 C0                     TEST EAX,EAX
00582704  89 86 52 02 00 00         MOV dword ptr [ESI + 0x252],EAX
0058270A  0F 8C A7 00 00 00         JL 0x005827b7
00582710  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00582714  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
00582718  68 98 04 00 00            PUSH 0x498
0058271D  52                        PUSH EDX
0058271E  50                        PUSH EAX
0058271F  8B CE                     MOV ECX,ESI
00582721  E8 DA 2E E8 FF            CALL 0x00405600
00582726  8B CE                     MOV ECX,ESI
00582728  E8 4A 21 E8 FF            CALL 0x00404877
0058272D  8B 4F 24                  MOV ECX,dword ptr [EDI + 0x24]
00582730  8D 9E D5 01 00 00         LEA EBX,[ESI + 0x1d5]
00582736  89 8E 41 02 00 00         MOV dword ptr [ESI + 0x241],ECX
0058273C  66 8B 57 32               MOV DX,word ptr [EDI + 0x32]
00582740  6A 0E                     PUSH 0xe
00582742  8B CB                     MOV ECX,EBX
00582744  66 89 96 45 02 00 00      MOV word ptr [ESI + 0x245],DX
0058274B  C7 86 35 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x235],0x2
00582755  E8 0A 1B E8 FF            CALL 0x00404264
0058275A  6A 0C                     PUSH 0xc
0058275C  8B CB                     MOV ECX,EBX
0058275E  E8 01 1B E8 FF            CALL 0x00404264
00582763  8B CB                     MOV ECX,EBX
00582765  E8 26 03 E8 FF            CALL 0x00402a90
0058276A  8B CE                     MOV ECX,ESI
0058276C  E8 68 05 E8 FF            CALL 0x00402cd9
00582771  85 C0                     TEST EAX,EAX
00582773  0F 85 DF 01 00 00         JNZ 0x00582958
00582779  8B 07                     MOV EAX,dword ptr [EDI]
0058277B  8D 4D EC                  LEA ECX,[EBP + -0x14]
0058277E  51                        PUSH ECX
0058277F  8D 55 F8                  LEA EDX,[EBP + -0x8]
00582782  8D 4D F4                  LEA ECX,[EBP + -0xc]
00582785  52                        PUSH EDX
00582786  51                        PUSH ECX
00582787  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
0058278D  8D 55 F0                  LEA EDX,[EBP + -0x10]
00582790  52                        PUSH EDX
00582791  51                        PUSH ECX
00582792  8B CF                     MOV ECX,EDI
00582794  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
0058279A  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0058279D  85 C0                     TEST EAX,EAX
0058279F  75 0B                     JNZ 0x005827ac
005827A1  8B 97 ED 01 00 00         MOV EDX,dword ptr [EDI + 0x1ed]
005827A7  E9 F3 04 00 00            JMP 0x00582c9f
LAB_005827ac:
005827AC  8B 8F ED 01 00 00         MOV ECX,dword ptr [EDI + 0x1ed]
005827B2  E9 06 05 00 00            JMP 0x00582cbd
LAB_005827b7:
005827B7  85 DB                     TEST EBX,EBX
005827B9  75 0D                     JNZ 0x005827c8
switchD_00582651::default:
005827BB  8B CE                     MOV ECX,ESI
005827BD  E8 14 EF E7 FF            CALL 0x004016d6
005827C2  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
LAB_005827c8:
005827C8  8B 86 39 02 00 00         MOV EAX,dword ptr [ESI + 0x239]
005827CE  33 C9                     XOR ECX,ECX
005827D0  3B C1                     CMP EAX,ECX
005827D2  0F 8D 93 07 00 00         JGE 0x00582f6b
005827D8  39 8E 4B 02 00 00         CMP dword ptr [ESI + 0x24b],ECX
005827DE  0F 84 21 07 00 00         JZ 0x00582f05
005827E4  8B 86 31 02 00 00         MOV EAX,dword ptr [ESI + 0x231]
005827EA  3B C1                     CMP EAX,ECX
005827EC  0F 85 ED 06 00 00         JNZ 0x00582edf
005827F2  0F BF 56 3E               MOVSX EDX,word ptr [ESI + 0x3e]
005827F6  0F BF 7E 38               MOVSX EDI,word ptr [ESI + 0x38]
005827FA  2B D7                     SUB EDX,EDI
005827FC  83 FA F6                  CMP EDX,-0xa
005827FF  0F 8D C7 06 00 00         JGE 0x00582ecc
00582805  A1 38 2A 80 00            MOV EAX,[0x00802a38]
0058280A  F6 80 E4 00 00 00 03      TEST byte ptr [EAX + 0xe4],0x3
00582811  0F 85 16 07 00 00         JNZ 0x00582f2d
00582817  8B 96 47 02 00 00         MOV EDX,dword ptr [ESI + 0x247]
0058281D  42                        INC EDX
0058281E  8B C2                     MOV EAX,EDX
00582820  89 96 47 02 00 00         MOV dword ptr [ESI + 0x247],EDX
00582826  83 F8 0B                  CMP EAX,0xb
00582829  0F 8C FE 06 00 00         JL 0x00582f2d
0058282F  C7 86 47 02 00 00 0A 00 00 00  MOV dword ptr [ESI + 0x247],0xa
00582839  E9 EF 06 00 00            JMP 0x00582f2d
LAB_0058283e:
0058283E  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
00582848  E9 6E FF FF FF            JMP 0x005827bb
switchD_00582651::caseD_1:
0058284D  0F BF 4E 4B               MOVSX ECX,word ptr [ESI + 0x4b]
00582851  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00582855  8B 16                     MOV EDX,dword ptr [ESI]
00582857  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0058285A  0F BF 7E 47               MOVSX EDI,word ptr [ESI + 0x47]
0058285E  8B CE                     MOV ECX,ESI
00582860  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00582863  FF 52 24                  CALL dword ptr [EDX + 0x24]
00582866  0F BF 4E 47               MOVSX ECX,word ptr [ESI + 0x47]
0058286A  3B F9                     CMP EDI,ECX
0058286C  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0058286F  75 16                     JNZ 0x00582887
00582871  0F BF 46 49               MOVSX EAX,word ptr [ESI + 0x49]
00582875  39 45 DC                  CMP dword ptr [EBP + -0x24],EAX
00582878  75 0D                     JNZ 0x00582887
0058287A  0F BF 56 4B               MOVSX EDX,word ptr [ESI + 0x4b]
0058287E  39 55 E8                  CMP dword ptr [EBP + -0x18],EDX
00582881  0F 84 DD 00 00 00         JZ 0x00582964
LAB_00582887:
00582887  0F BF 56 49               MOVSX EDX,word ptr [ESI + 0x49]
0058288B  85 C9                     TEST ECX,ECX
0058288D  0F 8C D1 00 00 00         JL 0x00582964
00582893  85 D2                     TEST EDX,EDX
00582895  0F 8C C9 00 00 00         JL 0x00582964
0058289B  0F BF 05 40 B2 7F 00      MOVSX EAX,word ptr [0x007fb240]
005828A2  3B C8                     CMP ECX,EAX
005828A4  0F 8D BA 00 00 00         JGE 0x00582964
005828AA  0F BF 3D 42 B2 7F 00      MOVSX EDI,word ptr [0x007fb242]
005828B1  3B D7                     CMP EDX,EDI
005828B3  0F 8D AB 00 00 00         JGE 0x00582964
005828B9  8B F8                     MOV EDI,EAX
005828BB  0F AF FA                  IMUL EDI,EDX
005828BE  03 3D 6C B2 7F 00         ADD EDI,dword ptr [0x007fb26c]
005828C4  80 3C 0F 00               CMP byte ptr [EDI + ECX*0x1],0x0
005828C8  0F 86 96 00 00 00         JBE 0x00582964
005828CE  8B 7E 24                  MOV EDI,dword ptr [ESI + 0x24]
005828D1  8B 3C BD 4C B2 7F 00      MOV EDI,dword ptr [EDI*0x4 + 0x7fb24c]
005828D8  85 FF                     TEST EDI,EDI
005828DA  74 0B                     JZ 0x005828e7
005828DC  0F AF C2                  IMUL EAX,EDX
005828DF  03 C7                     ADD EAX,EDI
005828E1  80 3C 08 00               CMP byte ptr [EAX + ECX*0x1],0x0
005828E5  77 7D                     JA 0x00582964
LAB_005828e7:
005828E7  A1 60 67 7E 00            MOV EAX,[0x007e6760]
005828EC  50                        PUSH EAX
005828ED  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
005828F0  6A 01                     PUSH 0x1
005828F2  50                        PUSH EAX
005828F3  52                        PUSH EDX
005828F4  51                        PUSH ECX
005828F5  8B 0D 84 B2 7F 00         MOV ECX,dword ptr [0x007fb284]
005828FB  E8 66 12 E8 FF            CALL 0x00403b66
00582900  85 C0                     TEST EAX,EAX
00582902  7C 60                     JL 0x00582964
00582904  8B CE                     MOV ECX,ESI
00582906  E8 6C 1F E8 FF            CALL 0x00404877
0058290B  6A 0E                     PUSH 0xe
0058290D  8B CB                     MOV ECX,EBX
0058290F  C7 86 41 02 00 00 FF 00 00 00  MOV dword ptr [ESI + 0x241],0xff
00582919  66 C7 86 45 02 00 00 00 00  MOV word ptr [ESI + 0x245],0x0
00582922  C7 86 35 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x235],0x2
0058292C  E8 33 19 E8 FF            CALL 0x00404264
00582931  6A 0C                     PUSH 0xc
00582933  8B CB                     MOV ECX,EBX
00582935  E8 2A 19 E8 FF            CALL 0x00404264
0058293A  8B CB                     MOV ECX,EBX
0058293C  E8 4F 01 E8 FF            CALL 0x00402a90
00582941  0F BF 4E 45               MOVSX ECX,word ptr [ESI + 0x45]
00582945  0F BF 56 43               MOVSX EDX,word ptr [ESI + 0x43]
00582949  0F BF 46 41               MOVSX EAX,word ptr [ESI + 0x41]
0058294D  51                        PUSH ECX
0058294E  52                        PUSH EDX
0058294F  50                        PUSH EAX
00582950  E8 2D 32 E8 FF            CALL 0x00405b82
00582955  83 C4 0C                  ADD ESP,0xc
LAB_00582958:
00582958  8B CE                     MOV ECX,ESI
0058295A  E8 68 ED E7 FF            CALL 0x004016c7
0058295F  E9 64 FE FF FF            JMP 0x005827c8
LAB_00582964:
00582964  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00582967  83 E8 00                  SUB EAX,0x0
0058296A  74 7A                     JZ 0x005829e6
0058296C  48                        DEC EAX
0058296D  74 33                     JZ 0x005829a2
0058296F  48                        DEC EAX
00582970  74 74                     JZ 0x005829e6
00582972  68 D4 B7 7C 00            PUSH 0x7cb7d4
00582977  68 CC 4C 7A 00            PUSH 0x7a4ccc
0058297C  6A 00                     PUSH 0x0
0058297E  6A 00                     PUSH 0x0
00582980  68 1B 01 00 00            PUSH 0x11b
00582985  68 B0 B7 7C 00            PUSH 0x7cb7b0
0058298A  E8 41 AB 12 00            CALL 0x006ad4d0
0058298F  83 C4 18                  ADD ESP,0x18
00582992  85 C0                     TEST EAX,EAX
00582994  0F 84 2A 06 00 00         JZ 0x00582fc4
0058299A  CC                        INT3
LAB_005829a2:
005829A2  8B 86 3D 02 00 00         MOV EAX,dword ptr [ESI + 0x23d]
005829A8  85 C0                     TEST EAX,EAX
005829AA  74 48                     JZ 0x005829f4
005829AC  66 8B 8E 45 02 00 00      MOV CX,word ptr [ESI + 0x245]
005829B3  8A 96 41 02 00 00         MOV DL,byte ptr [ESI + 0x241]
005829B9  6A 01                     PUSH 0x1
005829BB  51                        PUSH ECX
005829BC  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
005829C2  52                        PUSH EDX
005829C3  E8 F2 FE E7 FF            CALL 0x004028ba
005829C8  85 C0                     TEST EAX,EAX
005829CA  74 0E                     JZ 0x005829da
005829CC  8B 10                     MOV EDX,dword ptr [EAX]
005829CE  8B C8                     MOV ECX,EAX
005829D0  FF 92 F8 00 00 00         CALL dword ptr [EDX + 0xf8]
005829D6  85 C0                     TEST EAX,EAX
005829D8  75 1A                     JNZ 0x005829f4
LAB_005829da:
005829DA  C7 86 3D 02 00 00 00 00 00 00  MOV dword ptr [ESI + 0x23d],0x0
005829E4  EB 0E                     JMP 0x005829f4
LAB_005829e6:
005829E6  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005829EB  F6 80 E4 00 00 00 3F      TEST byte ptr [EAX + 0xe4],0x3f
005829F2  75 0D                     JNZ 0x00582a01
LAB_005829f4:
005829F4  8B CE                     MOV ECX,ESI
005829F6  E8 DB EC E7 FF            CALL 0x004016d6
005829FB  89 86 35 02 00 00         MOV dword ptr [ESI + 0x235],EAX
LAB_00582a01:
00582A01  66 8B 46 47               MOV AX,word ptr [ESI + 0x47]
00582A05  66 8B 56 4B               MOV DX,word ptr [ESI + 0x4b]
00582A09  66 8B 4E 49               MOV CX,word ptr [ESI + 0x49]
00582A0D  66 85 C0                  TEST AX,AX
00582A10  0F 8C B2 FD FF FF         JL 0x005827c8
00582A16  66 8B 3D 40 B2 7F 00      MOV DI,word ptr [0x007fb240]
00582A1D  66 3B C7                  CMP AX,DI
00582A20  0F 8D A2 FD FF FF         JGE 0x005827c8
00582A26  66 85 C9                  TEST CX,CX
00582A29  0F 8C 99 FD FF FF         JL 0x005827c8
00582A2F  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
00582A36  0F 8D 8C FD FF FF         JGE 0x005827c8
00582A3C  66 85 D2                  TEST DX,DX
00582A3F  0F 8C 83 FD FF FF         JL 0x005827c8
00582A45  66 3B 15 44 B2 7F 00      CMP DX,word ptr [0x007fb244]
00582A4C  0F 8D 76 FD FF FF         JGE 0x005827c8
00582A52  0F BF C9                  MOVSX ECX,CX
00582A55  0F BF FF                  MOVSX EDI,DI
00582A58  0F AF CF                  IMUL ECX,EDI
00582A5B  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
00582A62  0F BF D2                  MOVSX EDX,DX
00582A65  0F AF FA                  IMUL EDI,EDX
00582A68  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
00582A6E  03 CF                     ADD ECX,EDI
00582A70  0F BF C0                  MOVSX EAX,AX
00582A73  03 C8                     ADD ECX,EAX
00582A75  8B 1C CA                  MOV EBX,dword ptr [EDX + ECX*0x8]
00582A78  85 DB                     TEST EBX,EBX
00582A7A  0F 84 48 FD FF FF         JZ 0x005827c8
00582A80  8B 43 20                  MOV EAX,dword ptr [EBX + 0x20]
00582A83  3D E8 03 00 00            CMP EAX,0x3e8
00582A88  74 09                     JZ 0x00582a93
00582A8A  83 F8 14                  CMP EAX,0x14
00582A8D  0F 85 35 FD FF FF         JNZ 0x005827c8
LAB_00582a93:
00582A93  8B 03                     MOV EAX,dword ptr [EBX]
00582A95  8B CB                     MOV ECX,EBX
00582A97  FF 90 F0 00 00 00         CALL dword ptr [EAX + 0xf0]
00582A9D  85 C0                     TEST EAX,EAX
00582A9F  0F 84 23 FD FF FF         JZ 0x005827c8
00582AA5  8B 43 24                  MOV EAX,dword ptr [EBX + 0x24]
00582AA8  83 F8 08                  CMP EAX,0x8
00582AAB  0F 83 17 FD FF FF         JNC 0x005827c8
00582AB1  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00582AB7  85 C9                     TEST ECX,ECX
00582AB9  74 11                     JZ 0x00582acc
00582ABB  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
00582ABE  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00582AC6  0F 83 FC FC FF FF         JNC 0x005827c8
LAB_00582acc:
00582ACC  8B 46 10                  MOV EAX,dword ptr [ESI + 0x10]
00582ACF  8A 4B 24                  MOV CL,byte ptr [EBX + 0x24]
00582AD2  8A 56 24                  MOV DL,byte ptr [ESI + 0x24]
00582AD5  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00582AD8  80 B8 6F 14 00 00 00      CMP byte ptr [EAX + 0x146f],0x0
00582ADF  88 55 DC                  MOV byte ptr [EBP + -0x24],DL
00582AE2  74 3C                     JZ 0x00582b20
00582AE4  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00582AE7  81 E1 FF 00 00 00         AND ECX,0xff
00582AED  8D 14 C9                  LEA EDX,[ECX + ECX*0x8]
00582AF0  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00582AF3  81 E1 FF 00 00 00         AND ECX,0xff
00582AF9  8D 3C D0                  LEA EDI,[EAX + EDX*0x8]
00582AFC  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
00582AFF  8D 3C C9                  LEA EDI,[ECX + ECX*0x8]
00582B02  8D 0C F8                  LEA ECX,[EAX + EDI*0x8]
00582B05  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00582B08  8A 94 02 CA 11 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x11ca]
00582B0F  33 C0                     XOR EAX,EAX
00582B11  3A 94 0F CA 11 00 00      CMP DL,byte ptr [EDI + ECX*0x1 + 0x11ca]
00582B18  0F 95 C0                  SETNZ AL
00582B1B  E9 9B 00 00 00            JMP 0x00582bbb
LAB_00582b20:
00582B20  3A CA                     CMP CL,DL
00582B22  0F 84 88 00 00 00         JZ 0x00582bb0
00582B28  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00582B2B  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
00582B2E  81 E1 FF 00 00 00         AND ECX,0xff
00582B34  81 E7 FF 00 00 00         AND EDI,0xff
00582B3A  8D 14 CF                  LEA EDX,[EDI + ECX*0x8]
00582B3D  8A 94 02 2F 14 00 00      MOV DL,byte ptr [EDX + EAX*0x1 + 0x142f]
00582B44  84 D2                     TEST DL,DL
00582B46  88 55 FF                  MOV byte ptr [EBP + -0x1],DL
00582B49  75 17                     JNZ 0x00582b62
00582B4B  8D 14 F9                  LEA EDX,[ECX + EDI*0x8]
00582B4E  80 BC 02 2F 14 00 00 00   CMP byte ptr [EDX + EAX*0x1 + 0x142f],0x0
00582B56  75 07                     JNZ 0x00582b5f
00582B58  B8 FE FF FF FF            MOV EAX,0xfffffffe
00582B5D  EB 53                     JMP 0x00582bb2
LAB_00582b5f:
00582B5F  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_00582b62:
00582B62  80 FA 01                  CMP DL,0x1
00582B65  75 15                     JNZ 0x00582b7c
00582B67  8D 14 F9                  LEA EDX,[ECX + EDI*0x8]
00582B6A  80 BC 02 2F 14 00 00 00   CMP byte ptr [EDX + EAX*0x1 + 0x142f],0x0
00582B72  75 05                     JNZ 0x00582b79
00582B74  83 C8 FF                  OR EAX,0xffffffff
00582B77  EB 39                     JMP 0x00582bb2
LAB_00582b79:
00582B79  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_00582b7c:
00582B7C  84 D2                     TEST DL,DL
00582B7E  75 17                     JNZ 0x00582b97
00582B80  8D 14 F9                  LEA EDX,[ECX + EDI*0x8]
00582B83  80 BC 02 2F 14 00 00 01   CMP byte ptr [EDX + EAX*0x1 + 0x142f],0x1
00582B8B  75 07                     JNZ 0x00582b94
00582B8D  B8 01 00 00 00            MOV EAX,0x1
00582B92  EB 1E                     JMP 0x00582bb2
LAB_00582b94:
00582B94  8A 55 FF                  MOV DL,byte ptr [EBP + -0x1]
LAB_00582b97:
00582B97  80 FA 01                  CMP DL,0x1
00582B9A  75 14                     JNZ 0x00582bb0
00582B9C  8D 0C F9                  LEA ECX,[ECX + EDI*0x8]
00582B9F  80 BC 01 2F 14 00 00 01   CMP byte ptr [ECX + EAX*0x1 + 0x142f],0x1
00582BA7  75 07                     JNZ 0x00582bb0
00582BA9  B8 02 00 00 00            MOV EAX,0x2
00582BAE  EB 02                     JMP 0x00582bb2
LAB_00582bb0:
00582BB0  33 C0                     XOR EAX,EAX
LAB_00582bb2:
00582BB2  33 D2                     XOR EDX,EDX
00582BB4  85 C0                     TEST EAX,EAX
00582BB6  0F 9C C2                  SETL DL
00582BB9  8B C2                     MOV EAX,EDX
LAB_00582bbb:
00582BBB  85 C0                     TEST EAX,EAX
00582BBD  0F 84 05 FC FF FF         JZ 0x005827c8
00582BC3  8B 03                     MOV EAX,dword ptr [EBX]
00582BC5  8B CB                     MOV ECX,EBX
00582BC7  FF 90 F8 00 00 00         CALL dword ptr [EAX + 0xf8]
00582BCD  85 C0                     TEST EAX,EAX
00582BCF  0F 84 F3 FB FF FF         JZ 0x005827c8
00582BD5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00582BD8  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00582BDB  8B 13                     MOV EDX,dword ptr [EBX]
00582BDD  50                        PUSH EAX
00582BDE  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
00582BE1  51                        PUSH ECX
00582BE2  66 8B 4E 45               MOV CX,word ptr [ESI + 0x45]
00582BE6  50                        PUSH EAX
00582BE7  66 8B 46 43               MOV AX,word ptr [ESI + 0x43]
00582BEB  51                        PUSH ECX
00582BEC  66 8B 4E 41               MOV CX,word ptr [ESI + 0x41]
00582BF0  50                        PUSH EAX
00582BF1  51                        PUSH ECX
00582BF2  8B CB                     MOV ECX,EBX
00582BF4  FF 92 DC 00 00 00         CALL dword ptr [EDX + 0xdc]
00582BFA  85 C0                     TEST EAX,EAX
00582BFC  89 86 52 02 00 00         MOV dword ptr [ESI + 0x252],EAX
00582C02  0F 8C C0 FB FF FF         JL 0x005827c8
00582C08  8B CE                     MOV ECX,ESI
00582C0A  E8 68 1C E8 FF            CALL 0x00404877
00582C0F  8B 53 24                  MOV EDX,dword ptr [EBX + 0x24]
00582C12  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00582C18  89 96 41 02 00 00         MOV dword ptr [ESI + 0x241],EDX
00582C1E  66 8B 43 32               MOV AX,word ptr [EBX + 0x32]
00582C22  6A 0E                     PUSH 0xe
00582C24  8B CF                     MOV ECX,EDI
00582C26  66 89 86 45 02 00 00      MOV word ptr [ESI + 0x245],AX
00582C2D  C7 86 35 02 00 00 02 00 00 00  MOV dword ptr [ESI + 0x235],0x2
00582C37  E8 28 16 E8 FF            CALL 0x00404264
00582C3C  6A 0C                     PUSH 0xc
00582C3E  8B CF                     MOV ECX,EDI
00582C40  E8 1F 16 E8 FF            CALL 0x00404264
00582C45  8B CF                     MOV ECX,EDI
00582C47  E8 44 FE E7 FF            CALL 0x00402a90
00582C4C  0F BF 4E 43               MOVSX ECX,word ptr [ESI + 0x43]
00582C50  0F BF 56 41               MOVSX EDX,word ptr [ESI + 0x41]
00582C54  68 98 04 00 00            PUSH 0x498
00582C59  51                        PUSH ECX
00582C5A  52                        PUSH EDX
00582C5B  8B CE                     MOV ECX,ESI
00582C5D  E8 9E 29 E8 FF            CALL 0x00405600
00582C62  8B CE                     MOV ECX,ESI
00582C64  E8 70 00 E8 FF            CALL 0x00402cd9
00582C69  85 C0                     TEST EAX,EAX
00582C6B  0F 85 E7 FC FF FF         JNZ 0x00582958
00582C71  8B 03                     MOV EAX,dword ptr [EBX]
00582C73  8D 4D EC                  LEA ECX,[EBP + -0x14]
00582C76  51                        PUSH ECX
00582C77  8D 55 F8                  LEA EDX,[EBP + -0x8]
00582C7A  8D 4D F4                  LEA ECX,[EBP + -0xc]
00582C7D  52                        PUSH EDX
00582C7E  51                        PUSH ECX
00582C7F  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00582C85  8D 55 F0                  LEA EDX,[EBP + -0x10]
00582C88  52                        PUSH EDX
00582C89  51                        PUSH ECX
00582C8A  8B CB                     MOV ECX,EBX
00582C8C  FF 90 E0 00 00 00         CALL dword ptr [EAX + 0xe0]
00582C92  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
00582C95  85 C0                     TEST EAX,EAX
00582C97  75 1E                     JNZ 0x00582cb7
00582C99  8B 93 ED 01 00 00         MOV EDX,dword ptr [EBX + 0x1ed]
LAB_00582c9f:
00582C9F  8B 86 ED 01 00 00         MOV EAX,dword ptr [ESI + 0x1ed]
00582CA5  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00582CAB  52                        PUSH EDX
00582CAC  50                        PUSH EAX
00582CAD  E8 AE 77 16 00            CALL 0x006ea460
00582CB2  E9 11 FB FF FF            JMP 0x005827c8
LAB_00582cb7:
00582CB7  8B 8B ED 01 00 00         MOV ECX,dword ptr [EBX + 0x1ed]
LAB_00582cbd:
00582CBD  8B 96 ED 01 00 00         MOV EDX,dword ptr [ESI + 0x1ed]
00582CC3  51                        PUSH ECX
00582CC4  8B 8E 11 02 00 00         MOV ECX,dword ptr [ESI + 0x211]
00582CCA  52                        PUSH EDX
00582CCB  E8 10 77 16 00            CALL 0x006ea3e0
00582CD0  E9 F3 FA FF FF            JMP 0x005827c8
switchD_00582651::caseD_2:
00582CD5  6A 08                     PUSH 0x8
00582CD7  8B CB                     MOV ECX,EBX
00582CD9  E8 D1 15 E8 FF            CALL 0x004042af
00582CDE  8B F8                     MOV EDI,EAX
00582CE0  83 FF 01                  CMP EDI,0x1
00582CE3  89 7D E8                  MOV dword ptr [EBP + -0x18],EDI
00582CE6  0F 85 AE 00 00 00         JNZ 0x00582d9a
00582CEC  81 BE 41 02 00 00 FF 00 00 00  CMP dword ptr [ESI + 0x241],0xff
00582CF6  0F 84 9E 00 00 00         JZ 0x00582d9a
00582CFC  66 8B 86 45 02 00 00      MOV AX,word ptr [ESI + 0x245]
00582D03  8A 8E 41 02 00 00         MOV CL,byte ptr [ESI + 0x241]
00582D09  57                        PUSH EDI
00582D0A  50                        PUSH EAX
00582D0B  51                        PUSH ECX
00582D0C  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00582D12  E8 A3 FB E7 FF            CALL 0x004028ba
00582D17  8B D0                     MOV EDX,EAX
00582D19  85 D2                     TEST EDX,EDX
00582D1B  74 7D                     JZ 0x00582d9a
00582D1D  B9 07 00 00 00            MOV ECX,0x7
00582D22  33 C0                     XOR EAX,EAX
00582D24  BF C8 16 81 00            MOV EDI,0x8116c8
00582D29  F3 AB                     STOSD.REP ES:EDI
00582D2B  A1 60 67 7E 00            MOV EAX,[0x007e6760]
00582D30  8D 7D B8                  LEA EDI,[EBP + -0x48]
00582D33  A3 C8 16 81 00            MOV [0x008116c8],EAX
00582D38  66 8B 8E 92 02 00 00      MOV CX,word ptr [ESI + 0x292]
00582D3F  66 89 0D D4 16 81 00      MOV word ptr [0x008116d4],CX
00582D46  66 8B 86 8E 02 00 00      MOV AX,word ptr [ESI + 0x28e]
00582D4D  66 A3 D6 16 81 00         MOV [0x008116d6],AX
00582D53  8B 8E 5A 02 00 00         MOV ECX,dword ptr [ESI + 0x25a]
00582D59  89 0D D0 16 81 00         MOV dword ptr [0x008116d0],ECX
00582D5F  B9 08 00 00 00            MOV ECX,0x8
00582D64  33 C0                     XOR EAX,EAX
00582D66  C7 05 CC 16 81 00 BC 00 00 00  MOV dword ptr [0x008116cc],0xbc
00582D70  F3 AB                     STOSD.REP ES:EDI
00582D72  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00582D75  8D 4D B8                  LEA ECX,[EBP + -0x48]
00582D78  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
00582D7B  C7 45 C4 02 00 00 00      MOV dword ptr [EBP + -0x3c],0x2
00582D82  C7 45 C8 10 01 00 00      MOV dword ptr [EBP + -0x38],0x110
00582D89  C7 45 CC C8 16 81 00      MOV dword ptr [EBP + -0x34],0x8116c8
00582D90  8B 02                     MOV EAX,dword ptr [EDX]
00582D92  51                        PUSH ECX
00582D93  8B CA                     MOV ECX,EDX
00582D95  FF 10                     CALL dword ptr [EAX]
00582D97  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_00582d9a:
00582D9A  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
00582DA0  84 C0                     TEST AL,AL
00582DA2  76 2A                     JBE 0x00582dce
00582DA4  33 D2                     XOR EDX,EDX
00582DA6  8A 96 50 02 00 00         MOV DL,byte ptr [ESI + 0x250]
00582DAC  3B FA                     CMP EDI,EDX
00582DAE  75 1E                     JNZ 0x00582dce
00582DB0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00582DB5  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
00582DBB  51                        PUSH ECX
00582DBC  6A 09                     PUSH 0x9
00582DBE  8B CB                     MOV ECX,EBX
00582DC0  E8 7B 24 E8 FF            CALL 0x00405240
00582DC5  6A 09                     PUSH 0x9
00582DC7  8B CB                     MOV ECX,EBX
00582DC9  E8 86 1A E8 FF            CALL 0x00404854
LAB_00582dce:
00582DCE  6A 08                     PUSH 0x8
00582DD0  8B CB                     MOV ECX,EBX
00582DD2  E8 D5 F4 E7 FF            CALL 0x004022ac
00582DD7  48                        DEC EAX
00582DD8  3B F8                     CMP EDI,EAX
00582DDA  75 09                     JNZ 0x00582de5
00582DDC  6A 08                     PUSH 0x8
00582DDE  8B CB                     MOV ECX,EBX
00582DE0  E8 7F 14 E8 FF            CALL 0x00404264
LAB_00582de5:
00582DE5  6A 0A                     PUSH 0xa
00582DE7  8B CB                     MOV ECX,EBX
00582DE9  E8 BE F4 E7 FF            CALL 0x004022ac
00582DEE  48                        DEC EAX
00582DEF  3B F8                     CMP EDI,EAX
00582DF1  75 09                     JNZ 0x00582dfc
00582DF3  6A 0A                     PUSH 0xa
00582DF5  8B CB                     MOV ECX,EBX
00582DF7  E8 68 14 E8 FF            CALL 0x00404264
LAB_00582dfc:
00582DFC  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
00582E02  84 C0                     TEST AL,AL
00582E04  76 2C                     JBE 0x00582e32
00582E06  6A 09                     PUSH 0x9
00582E08  8B CB                     MOV ECX,EBX
00582E0A  E8 9D F4 E7 FF            CALL 0x004022ac
00582E0F  8B F8                     MOV EDI,EAX
00582E11  6A 09                     PUSH 0x9
00582E13  8B CB                     MOV ECX,EBX
00582E15  4F                        DEC EDI
00582E16  E8 94 14 E8 FF            CALL 0x004042af
00582E1B  3B C7                     CMP EAX,EDI
00582E1D  75 10                     JNZ 0x00582e2f
00582E1F  6A 09                     PUSH 0x9
00582E21  8B CB                     MOV ECX,EBX
00582E23  E8 3C 14 E8 FF            CALL 0x00404264
00582E28  C6 86 4F 02 00 00 00      MOV byte ptr [ESI + 0x24f],0x0
LAB_00582e2f:
00582E2F  8B 7D E8                  MOV EDI,dword ptr [EBP + -0x18]
LAB_00582e32:
00582E32  6A 08                     PUSH 0x8
00582E34  8B CB                     MOV ECX,EBX
00582E36  E8 71 F4 E7 FF            CALL 0x004022ac
00582E3B  48                        DEC EAX
00582E3C  3B F8                     CMP EDI,EAX
00582E3E  75 18                     JNZ 0x00582e58
00582E40  8A 86 4F 02 00 00         MOV AL,byte ptr [ESI + 0x24f]
00582E46  84 C0                     TEST AL,AL
00582E48  75 0E                     JNZ 0x00582e58
switchD_00582651::caseD_4:
00582E4A  8B CE                     MOV ECX,ESI
00582E4C  E8 76 E8 E7 FF            CALL 0x004016c7
00582E51  5F                        POP EDI
00582E52  5E                        POP ESI
00582E53  5B                        POP EBX
00582E54  8B E5                     MOV ESP,EBP
00582E56  5D                        POP EBP
00582E57  C3                        RET
LAB_00582e58:
00582E58  83 FF 0A                  CMP EDI,0xa
00582E5B  7D 5E                     JGE 0x00582ebb
00582E5D  8B 86 52 02 00 00         MOV EAX,dword ptr [ESI + 0x252]
00582E63  85 C0                     TEST EAX,EAX
00582E65  7E 54                     JLE 0x00582ebb
00582E67  66 8B 96 45 02 00 00      MOV DX,word ptr [ESI + 0x245]
00582E6E  8A 86 41 02 00 00         MOV AL,byte ptr [ESI + 0x241]
00582E74  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00582E7A  6A 01                     PUSH 0x1
00582E7C  52                        PUSH EDX
00582E7D  50                        PUSH EAX
00582E7E  E8 37 FA E7 FF            CALL 0x004028ba
00582E83  85 C0                     TEST EAX,EAX
00582E85  74 34                     JZ 0x00582ebb
00582E87  8D 4D EC                  LEA ECX,[EBP + -0x14]
00582E8A  8B 10                     MOV EDX,dword ptr [EAX]
00582E8C  51                        PUSH ECX
00582E8D  8D 4D F8                  LEA ECX,[EBP + -0x8]
00582E90  51                        PUSH ECX
00582E91  8D 4D F4                  LEA ECX,[EBP + -0xc]
00582E94  51                        PUSH ECX
00582E95  8D 4D F0                  LEA ECX,[EBP + -0x10]
00582E98  51                        PUSH ECX
00582E99  8B 8E 52 02 00 00         MOV ECX,dword ptr [ESI + 0x252]
00582E9F  51                        PUSH ECX
00582EA0  8B C8                     MOV ECX,EAX
00582EA2  FF 92 E0 00 00 00         CALL dword ptr [EDX + 0xe0]
00582EA8  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00582EAB  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00582EAE  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00582EB1  52                        PUSH EDX
00582EB2  50                        PUSH EAX
00582EB3  51                        PUSH ECX
00582EB4  8B CE                     MOV ECX,ESI
00582EB6  E8 4C 02 E8 FF            CALL 0x00403107
LAB_00582ebb:
00582EBB  8B 16                     MOV EDX,dword ptr [ESI]
00582EBD  8B CE                     MOV ECX,ESI
00582EBF  FF 92 D8 00 00 00         CALL dword ptr [EDX + 0xd8]
00582EC5  5F                        POP EDI
00582EC6  5E                        POP ESI
00582EC7  5B                        POP EBX
00582EC8  8B E5                     MOV ESP,EBP
00582ECA  5D                        POP EBP
00582ECB  C3                        RET
LAB_00582ecc:
00582ECC  3B C1                     CMP EAX,ECX
00582ECE  75 0F                     JNZ 0x00582edf
00582ED0  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
00582ED6  F6 82 E4 00 00 00 01      TEST byte ptr [EDX + 0xe4],0x1
00582EDD  74 4E                     JZ 0x00582f2d
LAB_00582edf:
00582EDF  8B 96 47 02 00 00         MOV EDX,dword ptr [ESI + 0x247]
00582EE5  42                        INC EDX
00582EE6  8B C2                     MOV EAX,EDX
00582EE8  89 96 47 02 00 00         MOV dword ptr [ESI + 0x247],EDX
00582EEE  83 F8 0B                  CMP EAX,0xb
00582EF1  7C 3A                     JL 0x00582f2d
00582EF3  C7 86 47 02 00 00 09 00 00 00  MOV dword ptr [ESI + 0x247],0x9
00582EFD  89 8E 4B 02 00 00         MOV dword ptr [ESI + 0x24b],ECX
00582F03  EB 22                     JMP 0x00582f27
LAB_00582f05:
00582F05  8B 86 47 02 00 00         MOV EAX,dword ptr [ESI + 0x247]
00582F0B  83 C0 FE                  ADD EAX,-0x2
00582F0E  89 86 47 02 00 00         MOV dword ptr [ESI + 0x247],EAX
00582F14  79 17                     JNS 0x00582f2d
00582F16  B8 01 00 00 00            MOV EAX,0x1
00582F1B  89 86 47 02 00 00         MOV dword ptr [ESI + 0x247],EAX
00582F21  89 86 4B 02 00 00         MOV dword ptr [ESI + 0x24b],EAX
LAB_00582f27:
00582F27  89 8E 31 02 00 00         MOV dword ptr [ESI + 0x231],ECX
LAB_00582f2d:
00582F2D  39 8E 31 02 00 00         CMP dword ptr [ESI + 0x231],ECX
00582F33  75 3D                     JNZ 0x00582f72
00582F35  83 BE 47 02 00 00 04      CMP dword ptr [ESI + 0x247],0x4
00582F3C  75 34                     JNZ 0x00582f72
00582F3E  0F BF 46 3E               MOVSX EAX,word ptr [ESI + 0x3e]
00582F42  0F BF 56 38               MOVSX EDX,word ptr [ESI + 0x38]
00582F46  2B C2                     SUB EAX,EDX
00582F48  83 F8 F6                  CMP EAX,-0xa
00582F4B  7C 25                     JL 0x00582f72
00582F4D  3B C1                     CMP EAX,ECX
00582F4F  C7 86 39 02 00 00 19 00 00 00  MOV dword ptr [ESI + 0x239],0x19
00582F59  74 17                     JZ 0x00582f72
00582F5B  7D 02                     JGE 0x00582f5f
00582F5D  F7 D8                     NEG EAX
LAB_00582f5f:
00582F5F  8B C8                     MOV ECX,EAX
00582F61  B8 19 00 00 00            MOV EAX,0x19
00582F66  99                        CDQ
00582F67  F7 F9                     IDIV ECX
00582F69  EB 01                     JMP 0x00582f6c
LAB_00582f6b:
00582F6B  48                        DEC EAX
LAB_00582f6c:
00582F6C  89 86 39 02 00 00         MOV dword ptr [ESI + 0x239],EAX
LAB_00582f72:
00582F72  8B 86 47 02 00 00         MOV EAX,dword ptr [ESI + 0x247]
00582F78  8D BE D5 01 00 00         LEA EDI,[ESI + 0x1d5]
00582F7E  50                        PUSH EAX
00582F7F  6A 0E                     PUSH 0xe
00582F81  8B CF                     MOV ECX,EDI
00582F83  E8 DC E0 E7 FF            CALL 0x00401064
00582F88  8B 8E 47 02 00 00         MOV ECX,dword ptr [ESI + 0x247]
00582F8E  51                        PUSH ECX
00582F8F  6A 0C                     PUSH 0xc
00582F91  8B CF                     MOV ECX,EDI
00582F93  E8 CC E0 E7 FF            CALL 0x00401064
00582F98  8B 96 47 02 00 00         MOV EDX,dword ptr [ESI + 0x247]
00582F9E  8B CF                     MOV ECX,EDI
00582FA0  52                        PUSH EDX
00582FA1  6A 0E                     PUSH 0xe
00582FA3  E8 56 23 E8 FF            CALL 0x004052fe
00582FA8  6A 0E                     PUSH 0xe
00582FAA  8B CF                     MOV ECX,EDI
00582FAC  E8 0B 01 E8 FF            CALL 0x004030bc
00582FB1  6A 0C                     PUSH 0xc
00582FB3  8B CF                     MOV ECX,EDI
00582FB5  E8 02 01 E8 FF            CALL 0x004030bc
00582FBA  8B 06                     MOV EAX,dword ptr [ESI]
00582FBC  8B CE                     MOV ECX,ESI
00582FBE  FF 90 D8 00 00 00         CALL dword ptr [EAX + 0xd8]
LAB_00582fc4:
00582FC4  5F                        POP EDI
00582FC5  5E                        POP ESI
00582FC6  5B                        POP EBX
00582FC7  8B E5                     MOV ESP,EBP
00582FC9  5D                        POP EBP
00582FCA  C3                        RET
