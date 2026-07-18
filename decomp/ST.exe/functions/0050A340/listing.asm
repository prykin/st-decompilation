FUN_0050a340:
0050A340  55                        PUSH EBP
0050A341  8B EC                     MOV EBP,ESP
0050A343  83 EC 60                  SUB ESP,0x60
0050A346  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0050A34B  53                        PUSH EBX
0050A34C  56                        PUSH ESI
0050A34D  89 4D E8                  MOV dword ptr [EBP + -0x18],ECX
0050A350  57                        PUSH EDI
0050A351  8D 55 A4                  LEA EDX,[EBP + -0x5c]
0050A354  8D 4D A0                  LEA ECX,[EBP + -0x60]
0050A357  6A 00                     PUSH 0x0
0050A359  52                        PUSH EDX
0050A35A  89 45 A0                  MOV dword ptr [EBP + -0x60],EAX
0050A35D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050A363  E8 88 34 22 00            CALL 0x0072d7f0
0050A368  8B F0                     MOV ESI,EAX
0050A36A  83 C4 08                  ADD ESP,0x8
0050A36D  85 F6                     TEST ESI,ESI
0050A36F  0F 85 5D 1A 00 00         JNZ 0x0050bdd2
0050A375  8B 5D E8                  MOV EBX,dword ptr [EBP + -0x18]
0050A378  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
0050A37E  83 F8 04                  CMP EAX,0x4
0050A381  0F 87 73 01 00 00         JA 0x0050a4fa
switchD_0050a387::switchD:
0050A387  FF 24 85 18 BE 50 00      JMP dword ptr [EAX*0x4 + 0x50be18]
switchD_0050a387::caseD_0:
0050A38E  8B 83 D9 09 00 00         MOV EAX,dword ptr [EBX + 0x9d9]
0050A394  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A39A  50                        PUSH EAX
0050A39B  6A 01                     PUSH 0x1
0050A39D  6A 46                     PUSH 0x46
0050A39F  6A 00                     PUSH 0x0
0050A3A1  51                        PUSH ECX
0050A3A2  E8 82 8E EF FF            CALL 0x00403229
0050A3A7  8B 93 FD 09 00 00         MOV EDX,dword ptr [EBX + 0x9fd]
0050A3AD  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A3B3  52                        PUSH EDX
0050A3B4  6A 06                     PUSH 0x6
0050A3B6  6A 00                     PUSH 0x0
0050A3B8  6A 00                     PUSH 0x0
0050A3BA  50                        PUSH EAX
0050A3BB  E8 69 8E EF FF            CALL 0x00403229
0050A3C0  83 C4 28                  ADD ESP,0x28
0050A3C3  E9 32 01 00 00            JMP 0x0050a4fa
switchD_0050a387::caseD_4:
0050A3C8  8B 8B FD 09 00 00         MOV ECX,dword ptr [EBX + 0x9fd]
0050A3CE  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A3D4  51                        PUSH ECX
0050A3D5  6A 06                     PUSH 0x6
0050A3D7  6A 00                     PUSH 0x0
0050A3D9  6A 00                     PUSH 0x0
0050A3DB  52                        PUSH EDX
0050A3DC  E8 48 8E EF FF            CALL 0x00403229
0050A3E1  8B 83 DD 09 00 00         MOV EAX,dword ptr [EBX + 0x9dd]
0050A3E7  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A3ED  50                        PUSH EAX
0050A3EE  6A 01                     PUSH 0x1
0050A3F0  6A 46                     PUSH 0x46
0050A3F2  6A 00                     PUSH 0x0
0050A3F4  51                        PUSH ECX
0050A3F5  E8 2F 8E EF FF            CALL 0x00403229
0050A3FA  83 C4 28                  ADD ESP,0x28
0050A3FD  E9 F8 00 00 00            JMP 0x0050a4fa
switchD_0050a387::caseD_1:
0050A402  80 BB FB 0B 00 00 02      CMP byte ptr [EBX + 0xbfb],0x2
0050A409  75 3A                     JNZ 0x0050a445
0050A40B  8B 93 05 0A 00 00         MOV EDX,dword ptr [EBX + 0xa05]
0050A411  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A417  52                        PUSH EDX
0050A418  6A 06                     PUSH 0x6
0050A41A  6A 00                     PUSH 0x0
0050A41C  6A 00                     PUSH 0x0
0050A41E  50                        PUSH EAX
0050A41F  E8 05 8E EF FF            CALL 0x00403229
0050A424  8B 8B E1 09 00 00         MOV ECX,dword ptr [EBX + 0x9e1]
0050A42A  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A430  51                        PUSH ECX
0050A431  6A 01                     PUSH 0x1
0050A433  6A 46                     PUSH 0x46
0050A435  6A 00                     PUSH 0x0
0050A437  52                        PUSH EDX
0050A438  E8 EC 8D EF FF            CALL 0x00403229
0050A43D  83 C4 28                  ADD ESP,0x28
0050A440  E9 B5 00 00 00            JMP 0x0050a4fa
LAB_0050a445:
0050A445  8B 83 05 0A 00 00         MOV EAX,dword ptr [EBX + 0xa05]
0050A44B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A451  50                        PUSH EAX
0050A452  6A 06                     PUSH 0x6
0050A454  6A 00                     PUSH 0x0
0050A456  6A 00                     PUSH 0x0
0050A458  51                        PUSH ECX
0050A459  E8 CB 8D EF FF            CALL 0x00403229
0050A45E  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050A464  83 C4 14                  ADD ESP,0x14
0050A467  83 C0 AD                  ADD EAX,-0x53
0050A46A  83 F8 20                  CMP EAX,0x20
0050A46D  77 6F                     JA 0x0050a4de
0050A46F  33 D2                     XOR EDX,EDX
0050A471  8A 90 48 BE 50 00         MOV DL,byte ptr [EAX + 0x50be48]
switchD_0050a477::switchD:
0050A477  FF 24 95 2C BE 50 00      JMP dword ptr [EDX*0x4 + 0x50be2c]
switchD_0050a477::caseD_53:
0050A47E  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050A484  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A48A  52                        PUSH EDX
0050A48B  6A 01                     PUSH 0x1
0050A48D  6A 46                     PUSH 0x46
0050A48F  6A 00                     PUSH 0x0
0050A491  50                        PUSH EAX
0050A492  EB 5E                     JMP 0x0050a4f2
switchD_0050a477::caseD_5e:
0050A494  8B 8B DD 09 00 00         MOV ECX,dword ptr [EBX + 0x9dd]
0050A49A  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A4A0  51                        PUSH ECX
0050A4A1  6A 01                     PUSH 0x1
0050A4A3  6A 46                     PUSH 0x46
0050A4A5  6A 00                     PUSH 0x0
0050A4A7  52                        PUSH EDX
0050A4A8  EB 48                     JMP 0x0050a4f2
switchD_0050a477::caseD_62:
0050A4AA  8B 83 F5 09 00 00         MOV EAX,dword ptr [EBX + 0x9f5]
0050A4B0  EB 32                     JMP 0x0050a4e4
switchD_0050a477::caseD_67:
0050A4B2  8B 93 ED 09 00 00         MOV EDX,dword ptr [EBX + 0x9ed]
0050A4B8  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A4BE  52                        PUSH EDX
0050A4BF  6A 01                     PUSH 0x1
0050A4C1  6A 46                     PUSH 0x46
0050A4C3  6A 00                     PUSH 0x0
0050A4C5  50                        PUSH EAX
0050A4C6  EB 2A                     JMP 0x0050a4f2
switchD_0050a477::caseD_5b:
0050A4C8  8B 8B E5 09 00 00         MOV ECX,dword ptr [EBX + 0x9e5]
0050A4CE  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A4D4  51                        PUSH ECX
0050A4D5  6A 01                     PUSH 0x1
0050A4D7  6A 46                     PUSH 0x46
0050A4D9  6A 00                     PUSH 0x0
0050A4DB  52                        PUSH EDX
0050A4DC  EB 14                     JMP 0x0050a4f2
switchD_0050a477::caseD_5f:
0050A4DE  8B 83 D9 09 00 00         MOV EAX,dword ptr [EBX + 0x9d9]
LAB_0050a4e4:
0050A4E4  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A4EA  50                        PUSH EAX
0050A4EB  6A 01                     PUSH 0x1
0050A4ED  6A 46                     PUSH 0x46
0050A4EF  6A 00                     PUSH 0x0
0050A4F1  51                        PUSH ECX
LAB_0050a4f2:
0050A4F2  E8 32 8D EF FF            CALL 0x00403229
0050A4F7  83 C4 14                  ADD ESP,0x14
switchD_0050a387::caseD_2:
0050A4FA  33 C0                     XOR EAX,EAX
0050A4FC  8A 83 FA 0B 00 00         MOV AL,byte ptr [EBX + 0xbfa]
0050A502  48                        DEC EAX
0050A503  0F 84 EE 02 00 00         JZ 0x0050a7f7
0050A509  83 E8 03                  SUB EAX,0x3
0050A50C  0F 85 8D 18 00 00         JNZ 0x0050bd9f
0050A512  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050A518  05 23 FF FF FF            ADD EAX,0xffffff23
0050A51D  83 F8 21                  CMP EAX,0x21
0050A520  0F 87 79 18 00 00         JA 0x0050bd9f
0050A526  33 D2                     XOR EDX,EDX
0050A528  8A 90 78 BE 50 00         MOV DL,byte ptr [EAX + 0x50be78]
switchD_0050a52e::switchD:
0050A52E  FF 24 95 6C BE 50 00      JMP dword ptr [EDX*0x4 + 0x50be6c]
switchD_0050a52e::caseD_dd:
0050A535  8B 83 09 0A 00 00         MOV EAX,dword ptr [EBX + 0xa09]
0050A53B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A541  50                        PUSH EAX
0050A542  6A 01                     PUSH 0x1
0050A544  6A 52                     PUSH 0x52
0050A546  6A 2C                     PUSH 0x2c
0050A548  51                        PUSH ECX
0050A549  E8 DB 8C EF FF            CALL 0x00403229
0050A54E  8B 83 D2 02 00 00         MOV EAX,dword ptr [EBX + 0x2d2]
0050A554  33 D2                     XOR EDX,EDX
0050A556  8A 93 11 0C 00 00         MOV DL,byte ptr [EBX + 0xc11]
0050A55C  52                        PUSH EDX
0050A55D  50                        PUSH EAX
0050A55E  E8 3D 0E 20 00            CALL 0x0070b3a0
0050A563  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A569  50                        PUSH EAX
0050A56A  6A 01                     PUSH 0x1
0050A56C  6A 54                     PUSH 0x54
0050A56E  6A 2E                     PUSH 0x2e
0050A570  51                        PUSH ECX
0050A571  E8 B3 8C EF FF            CALL 0x00403229
0050A576  8B 93 DD 09 00 00         MOV EDX,dword ptr [EBX + 0x9dd]
0050A57C  83 C4 30                  ADD ESP,0x30
0050A57F  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A585  6A 00                     PUSH 0x0
0050A587  6A 0D                     PUSH 0xd
0050A589  6A 62                     PUSH 0x62
0050A58B  6A 12                     PUSH 0x12
0050A58D  6A 70                     PUSH 0x70
0050A58F  6A 00                     PUSH 0x0
0050A591  52                        PUSH EDX
0050A592  E8 09 66 20 00            CALL 0x00710ba0
0050A597  8B F8                     MOV EDI,EAX
0050A599  85 FF                     TEST EDI,EDI
0050A59B  74 6E                     JZ 0x0050a60b
0050A59D  8B 83 F5 0B 00 00         MOV EAX,dword ptr [EBX + 0xbf5]
0050A5A3  3D FE 00 00 00            CMP EAX,0xfe
0050A5A8  75 0E                     JNZ 0x0050a5b8
0050A5AA  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050A5B0  50                        PUSH EAX
0050A5B1  E8 14 AF EF FF            CALL 0x004054ca
0050A5B6  EB 06                     JMP 0x0050a5be
LAB_0050a5b8:
0050A5B8  50                        PUSH EAX
0050A5B9  E8 01 74 EF FF            CALL 0x004019bf
LAB_0050a5be:
0050A5BE  83 C4 04                  ADD ESP,0x4
0050A5C1  8B F0                     MOV ESI,EAX
0050A5C3  56                        PUSH ESI
0050A5C4  E8 FC 9A EF FF            CALL 0x004040c5
0050A5C9  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050A5CF  83 C4 04                  ADD ESP,0x4
0050A5D2  50                        PUSH EAX
0050A5D3  6A FF                     PUSH -0x1
0050A5D5  6A FF                     PUSH -0x1
0050A5D7  51                        PUSH ECX
0050A5D8  56                        PUSH ESI
0050A5D9  E8 62 5B 1A 00            CALL 0x006b0140
0050A5DE  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A5E4  50                        PUSH EAX
0050A5E5  E8 D6 73 20 00            CALL 0x007119c0
0050A5EA  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A5F0  57                        PUSH EDI
0050A5F1  6A 01                     PUSH 0x1
0050A5F3  6A 58                     PUSH 0x58
0050A5F5  6A 70                     PUSH 0x70
0050A5F7  52                        PUSH EDX
0050A5F8  E8 2C 8C EF FF            CALL 0x00403229
0050A5FD  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A603  83 C4 14                  ADD ESP,0x14
0050A606  E8 F5 68 20 00            CALL 0x00710f00
LAB_0050a60b:
0050A60B  8B 83 DD 09 00 00         MOV EAX,dword ptr [EBX + 0x9dd]
0050A611  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050A617  6A 00                     PUSH 0x0
0050A619  6A 14                     PUSH 0x14
0050A61B  6A 5A                     PUSH 0x5a
0050A61D  6A 23                     PUSH 0x23
0050A61F  6A 78                     PUSH 0x78
0050A621  6A 00                     PUSH 0x0
0050A623  50                        PUSH EAX
0050A624  E8 77 65 20 00            CALL 0x00710ba0
0050A629  8B F8                     MOV EDI,EAX
0050A62B  85 FF                     TEST EDI,EDI
0050A62D  0F 84 6C 17 00 00         JZ 0x0050bd9f
0050A633  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050A639  33 F6                     XOR ESI,ESI
0050A63B  51                        PUSH ECX
0050A63C  68 44 27 7C 00            PUSH 0x7c2744
0050A641  68 3A F3 80 00            PUSH 0x80f33a
0050A646  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050A64C  33 C0                     XOR EAX,EAX
0050A64E  83 C4 0C                  ADD ESP,0xc
0050A651  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050A657  83 F8 04                  CMP EAX,0x4
0050A65A  77 21                     JA 0x0050a67d
switchD_0050a65c::switchD:
0050A65C  FF 24 85 9C BE 50 00      JMP dword ptr [EAX*0x4 + 0x50be9c]
switchD_0050a65c::caseD_0:
0050A663  BE 04 00 00 00            MOV ESI,0x4
0050A668  EB 13                     JMP 0x0050a67d
switchD_0050a65c::caseD_2:
0050A66A  BE 06 00 00 00            MOV ESI,0x6
0050A66F  EB 0C                     JMP 0x0050a67d
switchD_0050a65c::caseD_1:
0050A671  BE 07 00 00 00            MOV ESI,0x7
0050A676  EB 05                     JMP 0x0050a67d
switchD_0050a65c::caseD_4:
0050A678  BE 05 00 00 00            MOV ESI,0x5
switchD_0050a65c::default:
0050A67D  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050A683  56                        PUSH ESI
0050A684  6A FF                     PUSH -0x1
0050A686  6A FF                     PUSH -0x1
0050A688  68 3A F3 80 00            PUSH 0x80f33a
0050A68D  E8 2E 73 20 00            CALL 0x007119c0
0050A692  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A698  57                        PUSH EDI
0050A699  6A 01                     PUSH 0x1
0050A69B  6A 69                     PUSH 0x69
0050A69D  6A 78                     PUSH 0x78
0050A69F  52                        PUSH EDX
0050A6A0  E8 84 8B EF FF            CALL 0x00403229
0050A6A5  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050A6AB  83 C4 14                  ADD ESP,0x14
0050A6AE  E8 4D 68 20 00            CALL 0x00710f00
0050A6B3  E9 E7 16 00 00            JMP 0x0050bd9f
switchD_0050a52e::caseD_fd:
0050A6B8  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050A6BE  84 C0                     TEST AL,AL
0050A6C0  76 2D                     JBE 0x0050a6ef
0050A6C2  3C 15                     CMP AL,0x15
0050A6C4  77 29                     JA 0x0050a6ef
0050A6C6  25 FF 00 00 00            AND EAX,0xff
0050A6CB  48                        DEC EAX
0050A6CC  50                        PUSH EAX
0050A6CD  8B 83 CE 02 00 00         MOV EAX,dword ptr [EBX + 0x2ce]
0050A6D3  50                        PUSH EAX
0050A6D4  E8 C7 0C 20 00            CALL 0x0070b3a0
0050A6D9  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A6DF  50                        PUSH EAX
0050A6E0  6A 01                     PUSH 0x1
0050A6E2  6A 51                     PUSH 0x51
0050A6E4  6A 29                     PUSH 0x29
0050A6E6  51                        PUSH ECX
0050A6E7  E8 3D 8B EF FF            CALL 0x00403229
0050A6EC  83 C4 1C                  ADD ESP,0x1c
LAB_0050a6ef:
0050A6EF  8B 93 CA 02 00 00         MOV EDX,dword ptr [EBX + 0x2ca]
0050A6F5  6A 0A                     PUSH 0xa
0050A6F7  52                        PUSH EDX
0050A6F8  E8 A3 0C 20 00            CALL 0x0070b3a0
0050A6FD  50                        PUSH EAX
0050A6FE  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A704  6A 06                     PUSH 0x6
0050A706  6A 4F                     PUSH 0x4f
0050A708  6A 27                     PUSH 0x27
0050A70A  50                        PUSH EAX
0050A70B  E8 19 8B EF FF            CALL 0x00403229
0050A710  8B 8B DD 09 00 00         MOV ECX,dword ptr [EBX + 0x9dd]
0050A716  83 C4 1C                  ADD ESP,0x1c
0050A719  6A 00                     PUSH 0x0
0050A71B  6A 19                     PUSH 0x19
0050A71D  6A 73                     PUSH 0x73
0050A71F  6A 0B                     PUSH 0xb
0050A721  6A 5D                     PUSH 0x5d
0050A723  6A 00                     PUSH 0x0
0050A725  51                        PUSH ECX
0050A726  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A72C  E8 6F 64 20 00            CALL 0x00710ba0
0050A731  8B F0                     MOV ESI,EAX
0050A733  85 F6                     TEST ESI,ESI
0050A735  74 53                     JZ 0x0050a78a
0050A737  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050A73D  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050A743  6A FF                     PUSH -0x1
0050A745  6A FF                     PUSH -0x1
0050A747  6A 05                     PUSH 0x5
0050A749  6A FF                     PUSH -0x1
0050A74B  6A FE                     PUSH -0x2
0050A74D  52                        PUSH EDX
0050A74E  50                        PUSH EAX
0050A74F  E8 B8 7F EF FF            CALL 0x0040270c
0050A754  83 C4 04                  ADD ESP,0x4
0050A757  50                        PUSH EAX
0050A758  E8 E3 59 1A 00            CALL 0x006b0140
0050A75D  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A763  50                        PUSH EAX
0050A764  E8 07 74 20 00            CALL 0x00711b70
0050A769  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A76F  56                        PUSH ESI
0050A770  6A 01                     PUSH 0x1
0050A772  6A 51                     PUSH 0x51
0050A774  6A 5D                     PUSH 0x5d
0050A776  51                        PUSH ECX
0050A777  E8 AD 8A EF FF            CALL 0x00403229
0050A77C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A782  83 C4 14                  ADD ESP,0x14
0050A785  E8 76 67 20 00            CALL 0x00710f00
LAB_0050a78a:
0050A78A  8B 93 DD 09 00 00         MOV EDX,dword ptr [EBX + 0x9dd]
0050A790  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A796  6A 00                     PUSH 0x0
0050A798  6A 1C                     PUSH 0x1c
0050A79A  68 9F 00 00 00            PUSH 0x9f
0050A79F  6A 26                     PUSH 0x26
0050A7A1  6A 27                     PUSH 0x27
0050A7A3  6A 00                     PUSH 0x0
0050A7A5  52                        PUSH EDX
0050A7A6  E8 F5 63 20 00            CALL 0x00710ba0
0050A7AB  8B F0                     MOV ESI,EAX
0050A7AD  85 F6                     TEST ESI,ESI
0050A7AF  0F 84 EA 15 00 00         JZ 0x0050bd9f
0050A7B5  8B 83 16 0C 00 00         MOV EAX,dword ptr [EBX + 0xc16]
0050A7BB  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A7C1  6A FF                     PUSH -0x1
0050A7C3  6A FF                     PUSH -0x1
0050A7C5  6A 03                     PUSH 0x3
0050A7C7  6A FF                     PUSH -0x1
0050A7C9  6A FE                     PUSH -0x2
0050A7CB  50                        PUSH EAX
0050A7CC  E8 9F 73 20 00            CALL 0x00711b70
0050A7D1  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A7D7  56                        PUSH ESI
0050A7D8  6A 01                     PUSH 0x1
0050A7DA  6A 6C                     PUSH 0x6c
0050A7DC  6A 27                     PUSH 0x27
0050A7DE  51                        PUSH ECX
0050A7DF  E8 45 8A EF FF            CALL 0x00403229
0050A7E4  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A7EA  83 C4 14                  ADD ESP,0x14
0050A7ED  E8 0E 67 20 00            CALL 0x00710f00
0050A7F2  E9 A8 15 00 00            JMP 0x0050bd9f
LAB_0050a7f7:
0050A7F7  80 BB FB 0B 00 00 02      CMP byte ptr [EBX + 0xbfb],0x2
0050A7FE  0F 85 AB 01 00 00         JNZ 0x0050a9af
0050A804  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050A80A  85 C0                     TEST EAX,EAX
0050A80C  0F 84 86 15 00 00         JZ 0x0050bd98
0050A812  8B 93 11 0A 00 00         MOV EDX,dword ptr [EBX + 0xa11]
0050A818  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A81E  52                        PUSH EDX
0050A81F  6A 01                     PUSH 0x1
0050A821  6A 50                     PUSH 0x50
0050A823  6A 28                     PUSH 0x28
0050A825  50                        PUSH EAX
0050A826  E8 FE 89 EF FF            CALL 0x00403229
0050A82B  8A 8B 1A 0C 00 00         MOV CL,byte ptr [EBX + 0xc1a]
0050A831  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050A837  51                        PUSH ECX
0050A838  52                        PUSH EDX
0050A839  E8 B7 AE EF FF            CALL 0x004056f5
0050A83E  50                        PUSH EAX
0050A83F  8B 83 C2 02 00 00         MOV EAX,dword ptr [EBX + 0x2c2]
0050A845  50                        PUSH EAX
0050A846  E8 55 0B 20 00            CALL 0x0070b3a0
0050A84B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050A851  50                        PUSH EAX
0050A852  6A 01                     PUSH 0x1
0050A854  6A 52                     PUSH 0x52
0050A856  6A 2A                     PUSH 0x2a
0050A858  51                        PUSH ECX
0050A859  E8 CB 89 EF FF            CALL 0x00403229
0050A85E  8B 93 B2 02 00 00         MOV EDX,dword ptr [EBX + 0x2b2]
0050A864  6A 01                     PUSH 0x1
0050A866  52                        PUSH EDX
0050A867  E8 34 0B 20 00            CALL 0x0070b3a0
0050A86C  83 C4 40                  ADD ESP,0x40
0050A86F  50                        PUSH EAX
0050A870  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A876  6A 01                     PUSH 0x1
0050A878  6A 7B                     PUSH 0x7b
0050A87A  6A 33                     PUSH 0x33
0050A87C  50                        PUSH EAX
0050A87D  E8 A7 89 EF FF            CALL 0x00403229
0050A882  33 C0                     XOR EAX,EAX
0050A884  83 C4 14                  ADD ESP,0x14
0050A887  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050A88D  8B C8                     MOV ECX,EAX
0050A88F  C1 E1 05                  SHL ECX,0x5
0050A892  03 C8                     ADD ECX,EAX
0050A894  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050A899  F7 E9                     IMUL ECX
0050A89B  C1 FA 05                  SAR EDX,0x5
0050A89E  8B CA                     MOV ECX,EDX
0050A8A0  B8 00 00 00 00            MOV EAX,0x0
0050A8A5  C1 E9 1F                  SHR ECX,0x1f
0050A8A8  03 D1                     ADD EDX,ECX
0050A8AA  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050A8AD  74 36                     JZ 0x0050a8e5
0050A8AF  BE 35 00 00 00            MOV ESI,0x35
0050A8B4  8B FA                     MOV EDI,EDX
0050A8B6  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0050a8b9:
0050A8B9  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050A8BF  6A 01                     PUSH 0x1
0050A8C1  52                        PUSH EDX
0050A8C2  E8 D9 0A 20 00            CALL 0x0070b3a0
0050A8C7  50                        PUSH EAX
0050A8C8  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A8CE  6A 01                     PUSH 0x1
0050A8D0  6A 7D                     PUSH 0x7d
0050A8D2  56                        PUSH ESI
0050A8D3  50                        PUSH EAX
0050A8D4  E8 50 89 EF FF            CALL 0x00403229
0050A8D9  83 C4 1C                  ADD ESP,0x1c
0050A8DC  83 C6 04                  ADD ESI,0x4
0050A8DF  4F                        DEC EDI
0050A8E0  75 D7                     JNZ 0x0050a8b9
0050A8E2  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0050a8e5:
0050A8E5  83 F8 21                  CMP EAX,0x21
0050A8E8  73 35                     JNC 0x0050a91f
0050A8EA  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050a8f1:
0050A8F1  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050A8F7  6A 00                     PUSH 0x0
0050A8F9  51                        PUSH ECX
0050A8FA  E8 A1 0A 20 00            CALL 0x0070b3a0
0050A8FF  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A905  50                        PUSH EAX
0050A906  6A 01                     PUSH 0x1
0050A908  6A 7D                     PUSH 0x7d
0050A90A  56                        PUSH ESI
0050A90B  52                        PUSH EDX
0050A90C  E8 18 89 EF FF            CALL 0x00403229
0050A911  83 C6 04                  ADD ESI,0x4
0050A914  83 C4 1C                  ADD ESP,0x1c
0050A917  81 FE B9 00 00 00         CMP ESI,0xb9
0050A91D  7C D2                     JL 0x0050a8f1
LAB_0050a91f:
0050A91F  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050A925  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A92B  6A 0B                     PUSH 0xb
0050A92D  6A 7A                     PUSH 0x7a
0050A92F  6A 6C                     PUSH 0x6c
0050A931  6A 5C                     PUSH 0x5c
0050A933  6A 00                     PUSH 0x0
0050A935  50                        PUSH EAX
0050A936  E8 55 61 20 00            CALL 0x00710a90
0050A93B  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050A941  8A 93 1A 0C 00 00         MOV DL,byte ptr [EBX + 0xc1a]
0050A947  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050A94D  51                        PUSH ECX
0050A94E  6A 00                     PUSH 0x0
0050A950  52                        PUSH EDX
0050A951  50                        PUSH EAX
0050A952  E8 2D 8D EF FF            CALL 0x00403684
0050A957  83 C4 0C                  ADD ESP,0xc
0050A95A  50                        PUSH EAX
0050A95B  E8 E0 57 1A 00            CALL 0x006b0140
0050A960  8B F8                     MOV EDI,EAX
0050A962  83 C9 FF                  OR ECX,0xffffffff
0050A965  33 C0                     XOR EAX,EAX
0050A967  6A 0A                     PUSH 0xa
0050A969  F2 AE                     SCASB.REPNE ES:EDI
0050A96B  F7 D1                     NOT ECX
0050A96D  2B F9                     SUB EDI,ECX
0050A96F  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
0050A975  8B D1                     MOV EDX,ECX
0050A977  8B F7                     MOV ESI,EDI
0050A979  8B F8                     MOV EDI,EAX
0050A97B  50                        PUSH EAX
0050A97C  C1 E9 02                  SHR ECX,0x2
0050A97F  F3 A5                     MOVSD.REP ES:EDI,ESI
0050A981  8B CA                     MOV ECX,EDX
0050A983  83 E1 03                  AND ECX,0x3
0050A986  F3 A4                     MOVSB.REP ES:EDI,ESI
0050A988  E8 D3 3B 22 00            CALL 0x0072e560
0050A98D  83 C4 08                  ADD ESP,0x8
0050A990  85 C0                     TEST EAX,EAX
0050A992  0F 84 CC 05 00 00         JZ 0x0050af64
LAB_0050a998:
0050A998  6A 0A                     PUSH 0xa
0050A99A  50                        PUSH EAX
0050A99B  C6 00 20                  MOV byte ptr [EAX],0x20
0050A99E  E8 BD 3B 22 00            CALL 0x0072e560
0050A9A3  83 C4 08                  ADD ESP,0x8
0050A9A6  85 C0                     TEST EAX,EAX
0050A9A8  75 EE                     JNZ 0x0050a998
0050A9AA  E9 B5 05 00 00            JMP 0x0050af64
LAB_0050a9af:
0050A9AF  8B B3 F5 0B 00 00         MOV ESI,dword ptr [EBX + 0xbf5]
0050A9B5  8D 46 AD                  LEA EAX,[ESI + -0x53]
0050A9B8  83 F8 20                  CMP EAX,0x20
0050A9BB  0F 87 D7 13 00 00         JA 0x0050bd98
0050A9C1  33 C9                     XOR ECX,ECX
0050A9C3  8A 88 E8 BE 50 00         MOV CL,byte ptr [EAX + 0x50bee8]
switchD_0050a9c9::switchD:
0050A9C9  FF 24 8D B0 BE 50 00      JMP dword ptr [ECX*0x4 + 0x50beb0]
switchD_0050a9c9::caseD_5d:
0050A9D0  8B CB                     MOV ECX,EBX
0050A9D2  E8 3F 91 EF FF            CALL 0x00403b16
0050A9D7  E9 BC 13 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_53:
0050A9DC  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050A9E2  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050A9E8  6A 2B                     PUSH 0x2b
0050A9EA  68 A4 00 00 00            PUSH 0xa4
0050A9EF  6A 4C                     PUSH 0x4c
0050A9F1  6A 24                     PUSH 0x24
0050A9F3  6A 00                     PUSH 0x0
0050A9F5  52                        PUSH EDX
0050A9F6  E8 95 60 20 00            CALL 0x00710a90
0050A9FB  33 C0                     XOR EAX,EAX
0050A9FD  8A 83 3C 0C 00 00         MOV AL,byte ptr [EBX + 0xc3c]
0050AA03  83 F8 04                  CMP EAX,0x4
0050AA06  0F 87 8C 13 00 00         JA 0x0050bd98
switchD_0050aa0c::switchD:
0050AA0C  FF 24 85 0C BF 50 00      JMP dword ptr [EAX*0x4 + 0x50bf0c]
switchD_0050aa0c::caseD_0:
0050AA13  A1 18 76 80 00            MOV EAX,[0x00807618]
0050AA18  6A FF                     PUSH -0x1
0050AA1A  6A FF                     PUSH -0x1
0050AA1C  6A 05                     PUSH 0x5
0050AA1E  6A FF                     PUSH -0x1
0050AA20  6A FE                     PUSH -0x2
0050AA22  50                        PUSH EAX
0050AA23  68 BB 36 00 00            PUSH 0x36bb
0050AA28  E9 5E 09 00 00            JMP 0x0050b38b
switchD_0050aa0c::caseD_1:
0050AA2D  8B 8B 0D 0A 00 00         MOV ECX,dword ptr [EBX + 0xa0d]
0050AA33  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AA39  51                        PUSH ECX
0050AA3A  6A 01                     PUSH 0x1
0050AA3C  6A 51                     PUSH 0x51
0050AA3E  6A 27                     PUSH 0x27
0050AA40  52                        PUSH EDX
0050AA41  E8 E3 87 EF FF            CALL 0x00403229
0050AA46  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050AA4C  83 C4 14                  ADD ESP,0x14
0050AA4F  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AA55  6A 0B                     PUSH 0xb
0050AA57  68 C3 00 00 00            PUSH 0xc3
0050AA5C  6A 6C                     PUSH 0x6c
0050AA5E  6A 15                     PUSH 0x15
0050AA60  6A 00                     PUSH 0x0
0050AA62  50                        PUSH EAX
0050AA63  E8 28 60 20 00            CALL 0x00710a90
0050AA68  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050AA6E  6A FF                     PUSH -0x1
0050AA70  6A FF                     PUSH -0x1
0050AA72  6A 05                     PUSH 0x5
0050AA74  6A FF                     PUSH -0x1
0050AA76  6A FE                     PUSH -0x2
0050AA78  51                        PUSH ECX
0050AA79  68 BD 36 00 00            PUSH 0x36bd
0050AA7E  E8 BD 56 1A 00            CALL 0x006b0140
0050AA83  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AA89  50                        PUSH EAX
0050AA8A  E8 E1 70 20 00            CALL 0x00711b70
0050AA8F  8A 93 3D 0C 00 00         MOV DL,byte ptr [EBX + 0xc3d]
0050AA95  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050AA9B  68 14 27 00 00            PUSH 0x2714
0050AAA0  52                        PUSH EDX
0050AAA1  6A 50                     PUSH 0x50
0050AAA3  6A 5C                     PUSH 0x5c
0050AAA5  50                        PUSH EAX
0050AAA6  8B CB                     MOV ECX,EBX
0050AAA8  E8 6E A4 EF FF            CALL 0x00404f1b
0050AAAD  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050AAB3  6A 01                     PUSH 0x1
0050AAB5  51                        PUSH ECX
0050AAB6  E8 E5 08 20 00            CALL 0x0070b3a0
0050AABB  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AAC1  50                        PUSH EAX
0050AAC2  6A 01                     PUSH 0x1
0050AAC4  6A 7B                     PUSH 0x7b
0050AAC6  6A 33                     PUSH 0x33
0050AAC8  52                        PUSH EDX
0050AAC9  E8 5B 87 EF FF            CALL 0x00403229
0050AACE  8B 83 3D 0C 00 00         MOV EAX,dword ptr [EBX + 0xc3d]
0050AAD4  83 C4 1C                  ADD ESP,0x1c
0050AAD7  8B C8                     MOV ECX,EAX
0050AAD9  C1 E1 05                  SHL ECX,0x5
0050AADC  03 C8                     ADD ECX,EAX
0050AADE  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050AAE3  F7 E1                     MUL ECX
0050AAE5  B8 00 00 00 00            MOV EAX,0x0
0050AAEA  C1 EA 05                  SHR EDX,0x5
0050AAED  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050AAF0  74 36                     JZ 0x0050ab28
0050AAF2  BE 35 00 00 00            MOV ESI,0x35
0050AAF7  8B FA                     MOV EDI,EDX
0050AAF9  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
LAB_0050aafc:
0050AAFC  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050AB02  6A 01                     PUSH 0x1
0050AB04  52                        PUSH EDX
0050AB05  E8 96 08 20 00            CALL 0x0070b3a0
0050AB0A  50                        PUSH EAX
0050AB0B  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050AB11  6A 01                     PUSH 0x1
0050AB13  6A 7D                     PUSH 0x7d
0050AB15  56                        PUSH ESI
0050AB16  50                        PUSH EAX
0050AB17  E8 0D 87 EF FF            CALL 0x00403229
0050AB1C  83 C4 1C                  ADD ESP,0x1c
0050AB1F  83 C6 04                  ADD ESI,0x4
0050AB22  4F                        DEC EDI
0050AB23  75 D7                     JNZ 0x0050aafc
0050AB25  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0050ab28:
0050AB28  83 F8 21                  CMP EAX,0x21
0050AB2B  0F 83 67 12 00 00         JNC 0x0050bd98
0050AB31  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050ab38:
0050AB38  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050AB3E  6A 00                     PUSH 0x0
0050AB40  51                        PUSH ECX
0050AB41  E8 5A 08 20 00            CALL 0x0070b3a0
0050AB46  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AB4C  50                        PUSH EAX
0050AB4D  6A 01                     PUSH 0x1
0050AB4F  6A 7D                     PUSH 0x7d
0050AB51  56                        PUSH ESI
0050AB52  52                        PUSH EDX
0050AB53  E8 D1 86 EF FF            CALL 0x00403229
0050AB58  83 C6 04                  ADD ESI,0x4
0050AB5B  83 C4 1C                  ADD ESP,0x1c
0050AB5E  81 FE B9 00 00 00         CMP ESI,0xb9
0050AB64  7C D2                     JL 0x0050ab38
0050AB66  E9 2D 12 00 00            JMP 0x0050bd98
switchD_0050aa0c::caseD_2:
0050AB6B  A1 18 76 80 00            MOV EAX,[0x00807618]
0050AB70  6A FF                     PUSH -0x1
0050AB72  6A FF                     PUSH -0x1
0050AB74  6A 05                     PUSH 0x5
0050AB76  6A FF                     PUSH -0x1
0050AB78  6A FE                     PUSH -0x2
0050AB7A  50                        PUSH EAX
0050AB7B  68 BC 36 00 00            PUSH 0x36bc
0050AB80  E8 BB 55 1A 00            CALL 0x006b0140
0050AB85  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AB8B  50                        PUSH EAX
0050AB8C  E8 DF 6F 20 00            CALL 0x00711b70
0050AB91  8B 8B 3D 0C 00 00         MOV ECX,dword ptr [EBX + 0xc3d]
0050AB97  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050AB9D  51                        PUSH ECX
0050AB9E  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050ABA3  56                        PUSH ESI
0050ABA4  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050ABAA  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050ABB0  83 C4 0C                  ADD ESP,0xc
0050ABB3  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050ABB9  6A 0F                     PUSH 0xf
0050ABBB  68 9B 00 00 00            PUSH 0x9b
0050ABC0  6A 79                     PUSH 0x79
0050ABC2  6A 28                     PUSH 0x28
0050ABC4  6A 00                     PUSH 0x0
0050ABC6  52                        PUSH EDX
0050ABC7  E8 C4 5E 20 00            CALL 0x00710a90
0050ABCC  8B 8B BC 01 00 00         MOV ECX,dword ptr [EBX + 0x1bc]
0050ABD2  6A 01                     PUSH 0x1
0050ABD4  6A FF                     PUSH -0x1
0050ABD6  6A FF                     PUSH -0x1
0050ABD8  56                        PUSH ESI
0050ABD9  E9 B5 11 00 00            JMP 0x0050bd93
switchD_0050aa0c::caseD_3:
0050ABDE  A1 18 76 80 00            MOV EAX,[0x00807618]
0050ABE3  6A FF                     PUSH -0x1
0050ABE5  6A FF                     PUSH -0x1
0050ABE7  6A 05                     PUSH 0x5
0050ABE9  6A FF                     PUSH -0x1
0050ABEB  6A FE                     PUSH -0x2
0050ABED  50                        PUSH EAX
0050ABEE  68 BE 36 00 00            PUSH 0x36be
0050ABF3  E9 93 07 00 00            JMP 0x0050b38b
switchD_0050aa0c::caseD_4:
0050ABF8  8A 83 31 0C 00 00         MOV AL,byte ptr [EBX + 0xc31]
0050ABFE  84 C0                     TEST AL,AL
0050AC00  0F 84 92 11 00 00         JZ 0x0050bd98
0050AC06  8B CB                     MOV ECX,EBX
0050AC08  E8 C9 A6 EF FF            CALL 0x004052d6
0050AC0D  8B CB                     MOV ECX,EBX
0050AC0F  E8 BD 92 EF FF            CALL 0x00403ed1
0050AC14  E9 7F 11 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_54:
0050AC19  8A 83 31 0C 00 00         MOV AL,byte ptr [EBX + 0xc31]
0050AC1F  84 C0                     TEST AL,AL
0050AC21  74 13                     JZ 0x0050ac36
0050AC23  8B CB                     MOV ECX,EBX
0050AC25  E8 AC A6 EF FF            CALL 0x004052d6
0050AC2A  8B CB                     MOV ECX,EBX
0050AC2C  E8 A0 92 EF FF            CALL 0x00403ed1
0050AC31  E9 62 11 00 00            JMP 0x0050bd98
LAB_0050ac36:
0050AC36  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050AC3C  6A 2B                     PUSH 0x2b
0050AC3E  68 A4 00 00 00            PUSH 0xa4
0050AC43  6A 4C                     PUSH 0x4c
0050AC45  6A 24                     PUSH 0x24
0050AC47  6A 00                     PUSH 0x0
0050AC49  51                        PUSH ECX
0050AC4A  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AC50  E8 3B 5E 20 00            CALL 0x00710a90
0050AC55  66 83 BB 2F 0C 00 00 00   CMP word ptr [EBX + 0xc2f],0x0
0050AC5D  0F 84 12 07 00 00         JZ 0x0050b375
0050AC63  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050AC69  52                        PUSH EDX
0050AC6A  68 3C 27 00 00            PUSH 0x273c
0050AC6F  E8 CC 54 1A 00            CALL 0x006b0140
0050AC74  50                        PUSH EAX
0050AC75  33 C0                     XOR EAX,EAX
0050AC77  66 8B 83 2F 0C 00 00      MOV AX,word ptr [EBX + 0xc2f]
0050AC7E  50                        PUSH EAX
0050AC7F  68 64 28 7C 00            PUSH 0x7c2864
0050AC84  68 3A F3 80 00            PUSH 0x80f33a
0050AC89  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050AC8F  83 C4 10                  ADD ESP,0x10
0050AC92  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AC98  6A FF                     PUSH -0x1
0050AC9A  6A FF                     PUSH -0x1
0050AC9C  6A 05                     PUSH 0x5
0050AC9E  6A FF                     PUSH -0x1
0050ACA0  6A FE                     PUSH -0x2
0050ACA2  68 3A F3 80 00            PUSH 0x80f33a
0050ACA7  E8 C4 6E 20 00            CALL 0x00711b70
0050ACAC  E9 E7 10 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_5e:
0050ACB1  8B 93 09 0A 00 00         MOV EDX,dword ptr [EBX + 0xa09]
0050ACB7  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050ACBD  52                        PUSH EDX
0050ACBE  6A 01                     PUSH 0x1
0050ACC0  6A 52                     PUSH 0x52
0050ACC2  6A 2C                     PUSH 0x2c
0050ACC4  50                        PUSH EAX
0050ACC5  E8 5F 85 EF FF            CALL 0x00403229
0050ACCA  8B 8B D2 02 00 00         MOV ECX,dword ptr [EBX + 0x2d2]
0050ACD0  6A 00                     PUSH 0x0
0050ACD2  51                        PUSH ECX
0050ACD3  E8 C8 06 20 00            CALL 0x0070b3a0
0050ACD8  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050ACDE  50                        PUSH EAX
0050ACDF  6A 01                     PUSH 0x1
0050ACE1  6A 54                     PUSH 0x54
0050ACE3  6A 2E                     PUSH 0x2e
0050ACE5  52                        PUSH EDX
0050ACE6  E8 3E 85 EF FF            CALL 0x00403229
0050ACEB  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050ACF1  83 C4 30                  ADD ESP,0x30
0050ACF4  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050ACFA  6A 0B                     PUSH 0xb
0050ACFC  6A 5F                     PUSH 0x5f
0050ACFE  6A 50                     PUSH 0x50
0050AD00  6A 73                     PUSH 0x73
0050AD02  6A 00                     PUSH 0x0
0050AD04  50                        PUSH EAX
0050AD05  E8 86 5D 20 00            CALL 0x00710a90
0050AD0A  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050AD10  6A FF                     PUSH -0x1
0050AD12  6A FF                     PUSH -0x1
0050AD14  6A 02                     PUSH 0x2
0050AD16  6A FF                     PUSH -0x1
0050AD18  6A FE                     PUSH -0x2
0050AD1A  51                        PUSH ECX
0050AD1B  68 1D 27 00 00            PUSH 0x271d
0050AD20  E8 1B 54 1A 00            CALL 0x006b0140
0050AD25  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AD2B  50                        PUSH EAX
0050AD2C  E8 3F 6E 20 00            CALL 0x00711b70
0050AD31  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AD37  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AD3D  6A 17                     PUSH 0x17
0050AD3F  6A 5F                     PUSH 0x5f
0050AD41  6A 5D                     PUSH 0x5d
0050AD43  6A 73                     PUSH 0x73
0050AD45  6A 00                     PUSH 0x0
0050AD47  52                        PUSH EDX
0050AD48  E8 43 5D 20 00            CALL 0x00710a90
0050AD4D  A1 18 76 80 00            MOV EAX,[0x00807618]
0050AD52  6A FF                     PUSH -0x1
0050AD54  6A FF                     PUSH -0x1
0050AD56  6A 05                     PUSH 0x5
0050AD58  6A FF                     PUSH -0x1
0050AD5A  6A FE                     PUSH -0x2
0050AD5C  50                        PUSH EAX
0050AD5D  68 21 27 00 00            PUSH 0x2721
0050AD62  E8 D9 53 1A 00            CALL 0x006b0140
0050AD67  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AD6D  50                        PUSH EAX
0050AD6E  E8 FD 6D 20 00            CALL 0x00711b70
0050AD73  33 C9                     XOR ECX,ECX
0050AD75  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050AD7B  66 8B 8B 34 0C 00 00      MOV CX,word ptr [EBX + 0xc34]
0050AD82  51                        PUSH ECX
0050AD83  68 FC 28 7C 00            PUSH 0x7c28fc
0050AD88  56                        PUSH ESI
0050AD89  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050AD8F  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AD95  83 C4 0C                  ADD ESP,0xc
0050AD98  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050AD9E  6A 0F                     PUSH 0xf
0050ADA0  6A 26                     PUSH 0x26
0050ADA2  6A 73                     PUSH 0x73
0050ADA4  68 91 00 00 00            PUSH 0x91
0050ADA9  6A 00                     PUSH 0x0
0050ADAB  52                        PUSH EDX
0050ADAC  E8 DF 5C 20 00            CALL 0x00710a90
0050ADB1  6A 04                     PUSH 0x4
0050ADB3  6A FF                     PUSH -0x1
0050ADB5  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050ADBB  6A FF                     PUSH -0x1
0050ADBD  56                        PUSH ESI
0050ADBE  E9 D0 0F 00 00            JMP 0x0050bd93
switchD_0050a9c9::caseD_5c:
0050ADC3  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050ADC9  85 C0                     TEST EAX,EAX
0050ADCB  0F 84 D6 01 00 00         JZ 0x0050afa7
0050ADD1  8B 83 11 0A 00 00         MOV EAX,dword ptr [EBX + 0xa11]
0050ADD7  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050ADDD  50                        PUSH EAX
0050ADDE  6A 01                     PUSH 0x1
0050ADE0  6A 50                     PUSH 0x50
0050ADE2  6A 28                     PUSH 0x28
0050ADE4  51                        PUSH ECX
0050ADE5  E8 3F 84 EF FF            CALL 0x00403229
0050ADEA  8A 93 1A 0C 00 00         MOV DL,byte ptr [EBX + 0xc1a]
0050ADF0  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050ADF6  52                        PUSH EDX
0050ADF7  50                        PUSH EAX
0050ADF8  E8 F8 A8 EF FF            CALL 0x004056f5
0050ADFD  8B 8B BA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ba]
0050AE03  50                        PUSH EAX
0050AE04  51                        PUSH ECX
0050AE05  E8 96 05 20 00            CALL 0x0070b3a0
0050AE0A  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AE10  50                        PUSH EAX
0050AE11  6A 01                     PUSH 0x1
0050AE13  6A 52                     PUSH 0x52
0050AE15  6A 2A                     PUSH 0x2a
0050AE17  52                        PUSH EDX
0050AE18  E8 0C 84 EF FF            CALL 0x00403229
0050AE1D  8B 83 B2 02 00 00         MOV EAX,dword ptr [EBX + 0x2b2]
0050AE23  6A 01                     PUSH 0x1
0050AE25  50                        PUSH EAX
0050AE26  E8 75 05 20 00            CALL 0x0070b3a0
0050AE2B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050AE31  83 C4 40                  ADD ESP,0x40
0050AE34  50                        PUSH EAX
0050AE35  6A 01                     PUSH 0x1
0050AE37  6A 7B                     PUSH 0x7b
0050AE39  6A 33                     PUSH 0x33
0050AE3B  51                        PUSH ECX
0050AE3C  E8 E8 83 EF FF            CALL 0x00403229
0050AE41  33 C0                     XOR EAX,EAX
0050AE43  83 C4 14                  ADD ESP,0x14
0050AE46  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050AE4C  8B C8                     MOV ECX,EAX
0050AE4E  C1 E1 05                  SHL ECX,0x5
0050AE51  03 C8                     ADD ECX,EAX
0050AE53  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050AE58  F7 E9                     IMUL ECX
0050AE5A  C1 FA 05                  SAR EDX,0x5
0050AE5D  8B C2                     MOV EAX,EDX
0050AE5F  C1 E8 1F                  SHR EAX,0x1f
0050AE62  03 D0                     ADD EDX,EAX
0050AE64  B8 00 00 00 00            MOV EAX,0x0
0050AE69  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050AE6C  74 36                     JZ 0x0050aea4
0050AE6E  BE 35 00 00 00            MOV ESI,0x35
0050AE73  8B FA                     MOV EDI,EDX
0050AE75  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0050ae78:
0050AE78  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050AE7E  6A 01                     PUSH 0x1
0050AE80  51                        PUSH ECX
0050AE81  E8 1A 05 20 00            CALL 0x0070b3a0
0050AE86  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AE8C  50                        PUSH EAX
0050AE8D  6A 01                     PUSH 0x1
0050AE8F  6A 7D                     PUSH 0x7d
0050AE91  56                        PUSH ESI
0050AE92  52                        PUSH EDX
0050AE93  E8 91 83 EF FF            CALL 0x00403229
0050AE98  83 C4 1C                  ADD ESP,0x1c
0050AE9B  83 C6 04                  ADD ESI,0x4
0050AE9E  4F                        DEC EDI
0050AE9F  75 D7                     JNZ 0x0050ae78
0050AEA1  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0050aea4:
0050AEA4  83 F8 21                  CMP EAX,0x21
0050AEA7  73 35                     JNC 0x0050aede
0050AEA9  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050aeb0:
0050AEB0  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050AEB6  6A 00                     PUSH 0x0
0050AEB8  50                        PUSH EAX
0050AEB9  E8 E2 04 20 00            CALL 0x0070b3a0
0050AEBE  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050AEC4  50                        PUSH EAX
0050AEC5  6A 01                     PUSH 0x1
0050AEC7  6A 7D                     PUSH 0x7d
0050AEC9  56                        PUSH ESI
0050AECA  51                        PUSH ECX
0050AECB  E8 59 83 EF FF            CALL 0x00403229
0050AED0  83 C6 04                  ADD ESI,0x4
0050AED3  83 C4 1C                  ADD ESP,0x1c
0050AED6  81 FE B9 00 00 00         CMP ESI,0xb9
0050AEDC  7C D2                     JL 0x0050aeb0
LAB_0050aede:
0050AEDE  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AEE4  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AEEA  6A 0B                     PUSH 0xb
0050AEEC  6A 7A                     PUSH 0x7a
0050AEEE  6A 6C                     PUSH 0x6c
0050AEF0  6A 5C                     PUSH 0x5c
0050AEF2  6A 00                     PUSH 0x0
0050AEF4  52                        PUSH EDX
0050AEF5  E8 96 5B 20 00            CALL 0x00710a90
0050AEFA  A1 18 76 80 00            MOV EAX,[0x00807618]
0050AEFF  8A 8B 1A 0C 00 00         MOV CL,byte ptr [EBX + 0xc1a]
0050AF05  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050AF0B  50                        PUSH EAX
0050AF0C  6A 00                     PUSH 0x0
0050AF0E  51                        PUSH ECX
0050AF0F  52                        PUSH EDX
0050AF10  E8 6F 87 EF FF            CALL 0x00403684
0050AF15  83 C4 0C                  ADD ESP,0xc
0050AF18  50                        PUSH EAX
0050AF19  E8 22 52 1A 00            CALL 0x006b0140
0050AF1E  8B F8                     MOV EDI,EAX
0050AF20  83 C9 FF                  OR ECX,0xffffffff
0050AF23  33 C0                     XOR EAX,EAX
0050AF25  6A 0A                     PUSH 0xa
0050AF27  F2 AE                     SCASB.REPNE ES:EDI
0050AF29  F7 D1                     NOT ECX
0050AF2B  2B F9                     SUB EDI,ECX
0050AF2D  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
0050AF33  8B D1                     MOV EDX,ECX
0050AF35  8B F7                     MOV ESI,EDI
0050AF37  8B F8                     MOV EDI,EAX
0050AF39  50                        PUSH EAX
0050AF3A  C1 E9 02                  SHR ECX,0x2
0050AF3D  F3 A5                     MOVSD.REP ES:EDI,ESI
0050AF3F  8B CA                     MOV ECX,EDX
0050AF41  83 E1 03                  AND ECX,0x3
0050AF44  F3 A4                     MOVSB.REP ES:EDI,ESI
0050AF46  E8 15 36 22 00            CALL 0x0072e560
0050AF4B  83 C4 08                  ADD ESP,0x8
0050AF4E  85 C0                     TEST EAX,EAX
0050AF50  74 12                     JZ 0x0050af64
LAB_0050af52:
0050AF52  6A 0A                     PUSH 0xa
0050AF54  50                        PUSH EAX
0050AF55  C6 00 20                  MOV byte ptr [EAX],0x20
0050AF58  E8 03 36 22 00            CALL 0x0072e560
0050AF5D  83 C4 08                  ADD ESP,0x8
0050AF60  85 C0                     TEST EAX,EAX
0050AF62  75 EE                     JNZ 0x0050af52
LAB_0050af64:
0050AF64  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050AF6A  6A FF                     PUSH -0x1
0050AF6C  6A FF                     PUSH -0x1
0050AF6E  6A 05                     PUSH 0x5
0050AF70  6A FF                     PUSH -0x1
0050AF72  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
0050AF78  6A FE                     PUSH -0x2
0050AF7A  50                        PUSH EAX
0050AF7B  E8 F0 6B 20 00            CALL 0x00711b70
0050AF80  66 8B 83 20 0C 00 00      MOV AX,word ptr [EBX + 0xc20]
0050AF87  66 8B 8B 1C 0C 00 00      MOV CX,word ptr [EBX + 0xc1c]
0050AF8E  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050AF94  6A 04                     PUSH 0x4
0050AF96  6A 07                     PUSH 0x7
0050AF98  50                        PUSH EAX
0050AF99  51                        PUSH ECX
0050AF9A  52                        PUSH EDX
0050AF9B  8B CB                     MOV ECX,EBX
0050AF9D  E8 99 7A EF FF            CALL 0x00402a3b
0050AFA2  E9 F1 0D 00 00            JMP 0x0050bd98
LAB_0050afa7:
0050AFA7  83 FE 5C                  CMP ESI,0x5c
0050AFAA  0F 84 92 00 00 00         JZ 0x0050b042
0050AFB0  83 FE 6E                  CMP ESI,0x6e
0050AFB3  0F 85 DF 0D 00 00         JNZ 0x0050bd98
0050AFB9  33 C0                     XOR EAX,EAX
0050AFBB  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050AFC1  66 8B 83 2F 0C 00 00      MOV AX,word ptr [EBX + 0xc2f]
0050AFC8  50                        PUSH EAX
0050AFC9  68 90 18 7C 00            PUSH 0x7c1890
0050AFCE  56                        PUSH ESI
0050AFCF  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050AFD5  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050AFDB  83 C4 0C                  ADD ESP,0xc
0050AFDE  6A 0F                     PUSH 0xf
0050AFE0  68 B7 00 00 00            PUSH 0xb7
0050AFE5  6A 58                     PUSH 0x58
0050AFE7  6A 1C                     PUSH 0x1c
0050AFE9  6A 00                     PUSH 0x0
0050AFEB  51                        PUSH ECX
0050AFEC  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050AFF2  E8 99 5A 20 00            CALL 0x00710a90
0050AFF7  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050AFFD  6A 05                     PUSH 0x5
0050AFFF  6A FF                     PUSH -0x1
0050B001  6A FF                     PUSH -0x1
0050B003  56                        PUSH ESI
0050B004  E8 B7 69 20 00            CALL 0x007119c0
0050B009  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B00F  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B015  6A 0E                     PUSH 0xe
0050B017  68 C3 00 00 00            PUSH 0xc3
0050B01C  6A 69                     PUSH 0x69
0050B01E  6A 16                     PUSH 0x16
0050B020  6A 00                     PUSH 0x0
0050B022  52                        PUSH EDX
0050B023  E8 68 5A 20 00            CALL 0x00710a90
0050B028  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B02D  6A FF                     PUSH -0x1
0050B02F  6A FF                     PUSH -0x1
0050B031  6A 05                     PUSH 0x5
0050B033  6A FF                     PUSH -0x1
0050B035  6A FE                     PUSH -0x2
0050B037  50                        PUSH EAX
0050B038  68 3B 27 00 00            PUSH 0x273b
0050B03D  E9 49 03 00 00            JMP 0x0050b38b
LAB_0050b042:
0050B042  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B048  6A 2B                     PUSH 0x2b
0050B04A  68 A4 00 00 00            PUSH 0xa4
0050B04F  6A 4C                     PUSH 0x4c
0050B051  6A 24                     PUSH 0x24
0050B053  6A 00                     PUSH 0x0
0050B055  51                        PUSH ECX
0050B056  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B05C  E8 2F 5A 20 00            CALL 0x00710a90
0050B061  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050B067  6A FF                     PUSH -0x1
0050B069  6A FF                     PUSH -0x1
0050B06B  6A 05                     PUSH 0x5
0050B06D  6A FF                     PUSH -0x1
0050B06F  6A FE                     PUSH -0x2
0050B071  52                        PUSH EDX
0050B072  E9 0F 03 00 00            JMP 0x0050b386
switchD_0050a9c9::caseD_63:
0050B077  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050B07D  85 C0                     TEST EAX,EAX
0050B07F  0F 84 D1 02 00 00         JZ 0x0050b356
0050B085  8B 83 11 0A 00 00         MOV EAX,dword ptr [EBX + 0xa11]
0050B08B  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B091  50                        PUSH EAX
0050B092  6A 01                     PUSH 0x1
0050B094  6A 50                     PUSH 0x50
0050B096  6A 28                     PUSH 0x28
0050B098  51                        PUSH ECX
0050B099  E8 8B 81 EF FF            CALL 0x00403229
0050B09E  8A 93 1A 0C 00 00         MOV DL,byte ptr [EBX + 0xc1a]
0050B0A4  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050B0AA  52                        PUSH EDX
0050B0AB  50                        PUSH EAX
0050B0AC  E8 44 A6 EF FF            CALL 0x004056f5
0050B0B1  8B 8B BA 02 00 00         MOV ECX,dword ptr [EBX + 0x2ba]
0050B0B7  50                        PUSH EAX
0050B0B8  51                        PUSH ECX
0050B0B9  E8 E2 02 20 00            CALL 0x0070b3a0
0050B0BE  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B0C4  50                        PUSH EAX
0050B0C5  6A 01                     PUSH 0x1
0050B0C7  6A 52                     PUSH 0x52
0050B0C9  6A 2A                     PUSH 0x2a
0050B0CB  52                        PUSH EDX
0050B0CC  E8 58 81 EF FF            CALL 0x00403229
0050B0D1  8B 83 B2 02 00 00         MOV EAX,dword ptr [EBX + 0x2b2]
0050B0D7  6A 01                     PUSH 0x1
0050B0D9  50                        PUSH EAX
0050B0DA  E8 C1 02 20 00            CALL 0x0070b3a0
0050B0DF  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B0E5  83 C4 40                  ADD ESP,0x40
0050B0E8  50                        PUSH EAX
0050B0E9  6A 01                     PUSH 0x1
0050B0EB  6A 7B                     PUSH 0x7b
0050B0ED  6A 33                     PUSH 0x33
0050B0EF  51                        PUSH ECX
0050B0F0  E8 34 81 EF FF            CALL 0x00403229
0050B0F5  33 C0                     XOR EAX,EAX
0050B0F7  83 C4 14                  ADD ESP,0x14
0050B0FA  8A 83 24 0C 00 00         MOV AL,byte ptr [EBX + 0xc24]
0050B100  8B C8                     MOV ECX,EAX
0050B102  C1 E1 05                  SHL ECX,0x5
0050B105  03 C8                     ADD ECX,EAX
0050B107  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050B10C  F7 E9                     IMUL ECX
0050B10E  C1 FA 05                  SAR EDX,0x5
0050B111  8B C2                     MOV EAX,EDX
0050B113  C1 E8 1F                  SHR EAX,0x1f
0050B116  03 D0                     ADD EDX,EAX
0050B118  B8 00 00 00 00            MOV EAX,0x0
0050B11D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050B120  74 36                     JZ 0x0050b158
0050B122  BE 35 00 00 00            MOV ESI,0x35
0050B127  8B FA                     MOV EDI,EDX
0050B129  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
LAB_0050b12c:
0050B12C  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050B132  6A 01                     PUSH 0x1
0050B134  51                        PUSH ECX
0050B135  E8 66 02 20 00            CALL 0x0070b3a0
0050B13A  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B140  50                        PUSH EAX
0050B141  6A 01                     PUSH 0x1
0050B143  6A 7D                     PUSH 0x7d
0050B145  56                        PUSH ESI
0050B146  52                        PUSH EDX
0050B147  E8 DD 80 EF FF            CALL 0x00403229
0050B14C  83 C4 1C                  ADD ESP,0x1c
0050B14F  83 C6 04                  ADD ESI,0x4
0050B152  4F                        DEC EDI
0050B153  75 D7                     JNZ 0x0050b12c
0050B155  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
LAB_0050b158:
0050B158  83 F8 21                  CMP EAX,0x21
0050B15B  73 35                     JNC 0x0050b192
0050B15D  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050b164:
0050B164  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B16A  6A 00                     PUSH 0x0
0050B16C  50                        PUSH EAX
0050B16D  E8 2E 02 20 00            CALL 0x0070b3a0
0050B172  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B178  50                        PUSH EAX
0050B179  6A 01                     PUSH 0x1
0050B17B  6A 7D                     PUSH 0x7d
0050B17D  56                        PUSH ESI
0050B17E  51                        PUSH ECX
0050B17F  E8 A5 80 EF FF            CALL 0x00403229
0050B184  83 C6 04                  ADD ESI,0x4
0050B187  83 C4 1C                  ADD ESP,0x1c
0050B18A  81 FE B9 00 00 00         CMP ESI,0xb9
0050B190  7C D2                     JL 0x0050b164
LAB_0050b192:
0050B192  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B198  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B19E  6A 0B                     PUSH 0xb
0050B1A0  6A 7A                     PUSH 0x7a
0050B1A2  6A 69                     PUSH 0x69
0050B1A4  6A 5C                     PUSH 0x5c
0050B1A6  6A 00                     PUSH 0x0
0050B1A8  52                        PUSH EDX
0050B1A9  E8 E2 58 20 00            CALL 0x00710a90
0050B1AE  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B1B3  8A 8B 1A 0C 00 00         MOV CL,byte ptr [EBX + 0xc1a]
0050B1B9  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050B1BF  50                        PUSH EAX
0050B1C0  6A 00                     PUSH 0x0
0050B1C2  51                        PUSH ECX
0050B1C3  52                        PUSH EDX
0050B1C4  E8 BB 84 EF FF            CALL 0x00403684
0050B1C9  83 C4 0C                  ADD ESP,0xc
0050B1CC  50                        PUSH EAX
0050B1CD  E8 6E 4F 1A 00            CALL 0x006b0140
0050B1D2  8B F8                     MOV EDI,EAX
0050B1D4  83 C9 FF                  OR ECX,0xffffffff
0050B1D7  33 C0                     XOR EAX,EAX
0050B1D9  6A 0A                     PUSH 0xa
0050B1DB  F2 AE                     SCASB.REPNE ES:EDI
0050B1DD  F7 D1                     NOT ECX
0050B1DF  2B F9                     SUB EDI,ECX
0050B1E1  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
0050B1E7  8B D1                     MOV EDX,ECX
0050B1E9  8B F7                     MOV ESI,EDI
0050B1EB  8B F8                     MOV EDI,EAX
0050B1ED  50                        PUSH EAX
0050B1EE  C1 E9 02                  SHR ECX,0x2
0050B1F1  F3 A5                     MOVSD.REP ES:EDI,ESI
0050B1F3  8B CA                     MOV ECX,EDX
0050B1F5  83 E1 03                  AND ECX,0x3
0050B1F8  F3 A4                     MOVSB.REP ES:EDI,ESI
0050B1FA  E8 61 33 22 00            CALL 0x0072e560
0050B1FF  83 C4 08                  ADD ESP,0x8
0050B202  85 C0                     TEST EAX,EAX
0050B204  74 12                     JZ 0x0050b218
LAB_0050b206:
0050B206  6A 0A                     PUSH 0xa
0050B208  50                        PUSH EAX
0050B209  C6 00 20                  MOV byte ptr [EAX],0x20
0050B20C  E8 4F 33 22 00            CALL 0x0072e560
0050B211  83 C4 08                  ADD ESP,0x8
0050B214  85 C0                     TEST EAX,EAX
0050B216  75 EE                     JNZ 0x0050b206
LAB_0050b218:
0050B218  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B21E  6A FF                     PUSH -0x1
0050B220  6A FF                     PUSH -0x1
0050B222  6A 05                     PUSH 0x5
0050B224  6A FF                     PUSH -0x1
0050B226  8D 83 E1 01 00 00         LEA EAX,[EBX + 0x1e1]
0050B22C  6A FE                     PUSH -0x2
0050B22E  50                        PUSH EAX
0050B22F  E8 3C 69 20 00            CALL 0x00711b70
0050B234  8B 83 DD 09 00 00         MOV EAX,dword ptr [EBX + 0x9dd]
0050B23A  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B240  6A 00                     PUSH 0x0
0050B242  6A 0C                     PUSH 0xc
0050B244  6A 18                     PUSH 0x18
0050B246  6A 13                     PUSH 0x13
0050B248  6A 64                     PUSH 0x64
0050B24A  6A 00                     PUSH 0x0
0050B24C  50                        PUSH EAX
0050B24D  E8 4E 59 20 00            CALL 0x00710ba0
0050B252  8B F0                     MOV ESI,EAX
0050B254  85 F6                     TEST ESI,ESI
0050B256  0F 84 9B 00 00 00         JZ 0x0050b2f7
0050B25C  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0050B262  33 C9                     XOR ECX,ECX
0050B264  66 8B 8B 1C 0C 00 00      MOV CX,word ptr [EBX + 0xc1c]
0050B26B  51                        PUSH ECX
0050B26C  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050B271  68 3A F3 80 00            PUSH 0x80f33a
0050B276  FF D7                     CALL EDI
0050B278  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B27E  83 C4 0C                  ADD ESP,0xc
0050B281  6A 07                     PUSH 0x7
0050B283  6A FF                     PUSH -0x1
0050B285  6A FF                     PUSH -0x1
0050B287  68 3A F3 80 00            PUSH 0x80f33a
0050B28C  E8 2F 67 20 00            CALL 0x007119c0
0050B291  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B297  56                        PUSH ESI
0050B298  6A 01                     PUSH 0x1
0050B29A  6A 59                     PUSH 0x59
0050B29C  6A 64                     PUSH 0x64
0050B29E  52                        PUSH EDX
0050B29F  E8 85 7F EF FF            CALL 0x00403229
0050B2A4  33 C0                     XOR EAX,EAX
0050B2A6  66 8B 83 20 0C 00 00      MOV AX,word ptr [EBX + 0xc20]
0050B2AD  50                        PUSH EAX
0050B2AE  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050B2B3  68 3A F3 80 00            PUSH 0x80f33a
0050B2B8  FF D7                     CALL EDI
0050B2BA  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B2C0  83 C4 20                  ADD ESP,0x20
0050B2C3  6A 05                     PUSH 0x5
0050B2C5  6A FF                     PUSH -0x1
0050B2C7  6A FF                     PUSH -0x1
0050B2C9  68 3A F3 80 00            PUSH 0x80f33a
0050B2CE  E8 ED 66 20 00            CALL 0x007119c0
0050B2D3  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B2D9  56                        PUSH ESI
0050B2DA  6A 01                     PUSH 0x1
0050B2DC  6A 59                     PUSH 0x59
0050B2DE  68 AF 00 00 00            PUSH 0xaf
0050B2E3  51                        PUSH ECX
0050B2E4  E8 40 7F EF FF            CALL 0x00403229
0050B2E9  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B2EF  83 C4 14                  ADD ESP,0x14
0050B2F2  E8 09 5C 20 00            CALL 0x00710f00
LAB_0050b2f7:
0050B2F7  8B 15 94 67 80 00         MOV EDX,dword ptr [0x00806794]
0050B2FD  6A 00                     PUSH 0x0
0050B2FF  6A 00                     PUSH 0x0
0050B301  6A 01                     PUSH 0x1
0050B303  6A 00                     PUSH 0x0
0050B305  6A FF                     PUSH -0x1
0050B307  68 E8 28 7C 00            PUSH 0x7c28e8
0050B30C  6A 01                     PUSH 0x1
0050B30E  52                        PUSH EDX
0050B30F  E8 DC E7 1F 00            CALL 0x00709af0
0050B314  50                        PUSH EAX
0050B315  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B31B  6A 01                     PUSH 0x1
0050B31D  6A 56                     PUSH 0x56
0050B31F  68 82 00 00 00            PUSH 0x82
0050B324  50                        PUSH EAX
0050B325  E8 FF 7E EF FF            CALL 0x00403229
0050B32A  8B 8B 1B 0B 00 00         MOV ECX,dword ptr [EBX + 0xb1b]
0050B330  6A 00                     PUSH 0x0
0050B332  51                        PUSH ECX
0050B333  E8 68 00 20 00            CALL 0x0070b3a0
0050B338  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B33E  50                        PUSH EAX
0050B33F  6A 01                     PUSH 0x1
0050B341  6A 56                     PUSH 0x56
0050B343  68 A1 00 00 00            PUSH 0xa1
0050B348  52                        PUSH EDX
0050B349  E8 DB 7E EF FF            CALL 0x00403229
0050B34E  83 C4 50                  ADD ESP,0x50
0050B351  E9 42 0A 00 00            JMP 0x0050bd98
LAB_0050b356:
0050B356  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B35C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B362  6A 2B                     PUSH 0x2b
0050B364  68 A4 00 00 00            PUSH 0xa4
0050B369  6A 4C                     PUSH 0x4c
0050B36B  6A 24                     PUSH 0x24
0050B36D  6A 00                     PUSH 0x0
0050B36F  50                        PUSH EAX
0050B370  E8 1B 57 20 00            CALL 0x00710a90
LAB_0050b375:
0050B375  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050B37B  6A FF                     PUSH -0x1
0050B37D  6A FF                     PUSH -0x1
0050B37F  6A 05                     PUSH 0x5
0050B381  6A FF                     PUSH -0x1
0050B383  6A FE                     PUSH -0x2
0050B385  51                        PUSH ECX
LAB_0050b386:
0050B386  68 13 27 00 00            PUSH 0x2713
LAB_0050b38b:
0050B38B  E8 B0 4D 1A 00            CALL 0x006b0140
0050B390  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B396  50                        PUSH EAX
0050B397  E8 D4 67 20 00            CALL 0x00711b70
0050B39C  E9 F7 09 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_61:
0050B3A1  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B3A7  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B3AD  6A 0C                     PUSH 0xc
0050B3AF  68 A5 00 00 00            PUSH 0xa5
0050B3B4  6A 50                     PUSH 0x50
0050B3B6  6A 25                     PUSH 0x25
0050B3B8  6A 00                     PUSH 0x0
0050B3BA  52                        PUSH EDX
0050B3BB  E8 D0 56 20 00            CALL 0x00710a90
0050B3C0  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B3C5  6A 05                     PUSH 0x5
0050B3C7  6A FF                     PUSH -0x1
0050B3C9  6A FF                     PUSH -0x1
0050B3CB  50                        PUSH EAX
0050B3CC  68 38 27 00 00            PUSH 0x2738
0050B3D1  E8 6A 4D 1A 00            CALL 0x006b0140
0050B3D6  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B3DC  50                        PUSH EAX
0050B3DD  E8 DE 65 20 00            CALL 0x007119c0
0050B3E2  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050B3E8  6A 01                     PUSH 0x1
0050B3EA  51                        PUSH ECX
0050B3EB  E8 B0 FF 1F 00            CALL 0x0070b3a0
0050B3F0  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B3F6  50                        PUSH EAX
0050B3F7  6A 01                     PUSH 0x1
0050B3F9  6A 5B                     PUSH 0x5b
0050B3FB  6A 33                     PUSH 0x33
0050B3FD  52                        PUSH EDX
0050B3FE  E8 26 7E EF FF            CALL 0x00403229
0050B403  33 C0                     XOR EAX,EAX
0050B405  83 C4 1C                  ADD ESP,0x1c
0050B408  8A 83 2A 0C 00 00         MOV AL,byte ptr [EBX + 0xc2a]
0050B40E  BF 00 00 00 00            MOV EDI,0x0
0050B413  8B C8                     MOV ECX,EAX
0050B415  C1 E1 05                  SHL ECX,0x5
0050B418  03 C8                     ADD ECX,EAX
0050B41A  B8 1F 85 EB 51            MOV EAX,0x51eb851f
0050B41F  F7 E9                     IMUL ECX
0050B421  C1 FA 05                  SAR EDX,0x5
0050B424  8B C2                     MOV EAX,EDX
0050B426  C1 E8 1F                  SHR EAX,0x1f
0050B429  03 D0                     ADD EDX,EAX
0050B42B  74 39                     JZ 0x0050b466
0050B42D  BE 35 00 00 00            MOV ESI,0x35
0050B432  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
0050B435  8B FA                     MOV EDI,EDX
LAB_0050b437:
0050B437  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050B43D  6A 01                     PUSH 0x1
0050B43F  51                        PUSH ECX
0050B440  E8 5B FF 1F 00            CALL 0x0070b3a0
0050B445  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B44B  50                        PUSH EAX
0050B44C  6A 01                     PUSH 0x1
0050B44E  6A 5D                     PUSH 0x5d
0050B450  56                        PUSH ESI
0050B451  52                        PUSH EDX
0050B452  E8 D2 7D EF FF            CALL 0x00403229
0050B457  8B 45 F0                  MOV EAX,dword ptr [EBP + -0x10]
0050B45A  83 C4 1C                  ADD ESP,0x1c
0050B45D  83 C6 04                  ADD ESI,0x4
0050B460  48                        DEC EAX
0050B461  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0050B464  75 D1                     JNZ 0x0050b437
LAB_0050b466:
0050B466  83 FF 21                  CMP EDI,0x21
0050B469  73 35                     JNC 0x0050b4a0
0050B46B  8D 34 BD 35 00 00 00      LEA ESI,[EDI*0x4 + 0x35]
LAB_0050b472:
0050B472  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B478  6A 00                     PUSH 0x0
0050B47A  50                        PUSH EAX
0050B47B  E8 20 FF 1F 00            CALL 0x0070b3a0
0050B480  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B486  50                        PUSH EAX
0050B487  6A 01                     PUSH 0x1
0050B489  6A 5D                     PUSH 0x5d
0050B48B  56                        PUSH ESI
0050B48C  51                        PUSH ECX
0050B48D  E8 97 7D EF FF            CALL 0x00403229
0050B492  83 C6 04                  ADD ESI,0x4
0050B495  83 C4 1C                  ADD ESP,0x1c
0050B498  81 FE B9 00 00 00         CMP ESI,0xb9
0050B49E  7C D2                     JL 0x0050b472
LAB_0050b4a0:
0050B4A0  33 D2                     XOR EDX,EDX
0050B4A2  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050B4A8  8A 93 2A 0C 00 00         MOV DL,byte ptr [EBX + 0xc2a]
0050B4AE  52                        PUSH EDX
0050B4AF  68 E0 28 7C 00            PUSH 0x7c28e0
0050B4B4  56                        PUSH ESI
0050B4B5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050B4BB  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B4C1  83 C4 0C                  ADD ESP,0xc
0050B4C4  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B4CA  6A 0C                     PUSH 0xc
0050B4CC  68 C3 00 00 00            PUSH 0xc3
0050B4D1  6A 68                     PUSH 0x68
0050B4D3  6A 15                     PUSH 0x15
0050B4D5  6A 00                     PUSH 0x0
0050B4D7  50                        PUSH EAX
0050B4D8  E8 B3 55 20 00            CALL 0x00710a90
0050B4DD  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B4E3  6A 05                     PUSH 0x5
0050B4E5  6A FF                     PUSH -0x1
0050B4E7  6A FF                     PUSH -0x1
0050B4E9  56                        PUSH ESI
0050B4EA  E8 D1 64 20 00            CALL 0x007119c0
0050B4EF  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050B4F5  6A 01                     PUSH 0x1
0050B4F7  51                        PUSH ECX
0050B4F8  E8 A3 FE 1F 00            CALL 0x0070b3a0
0050B4FD  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B503  50                        PUSH EAX
0050B504  6A 01                     PUSH 0x1
0050B506  6A 7B                     PUSH 0x7b
0050B508  6A 33                     PUSH 0x33
0050B50A  52                        PUSH EDX
0050B50B  E8 19 7D EF FF            CALL 0x00403229
0050B510  33 C0                     XOR EAX,EAX
0050B512  83 C4 1C                  ADD ESP,0x1c
0050B515  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
0050B51B  33 C9                     XOR ECX,ECX
0050B51D  85 C0                     TEST EAX,EAX
0050B51F  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050B522  76 36                     JBE 0x0050b55a
0050B524  BE 35 00 00 00            MOV ESI,0x35
0050B529  8B F8                     MOV EDI,EAX
0050B52B  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050b52e:
0050B52E  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B534  6A 01                     PUSH 0x1
0050B536  50                        PUSH EAX
0050B537  E8 64 FE 1F 00            CALL 0x0070b3a0
0050B53C  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B542  50                        PUSH EAX
0050B543  6A 01                     PUSH 0x1
0050B545  6A 7D                     PUSH 0x7d
0050B547  56                        PUSH ESI
0050B548  51                        PUSH ECX
0050B549  E8 DB 7C EF FF            CALL 0x00403229
0050B54E  83 C4 1C                  ADD ESP,0x1c
0050B551  83 C6 04                  ADD ESI,0x4
0050B554  4F                        DEC EDI
0050B555  75 D7                     JNZ 0x0050b52e
0050B557  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050b55a:
0050B55A  83 F9 21                  CMP ECX,0x21
0050B55D  0F 83 35 08 00 00         JNC 0x0050bd98
0050B563  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050b56a:
0050B56A  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050B570  6A 00                     PUSH 0x0
0050B572  52                        PUSH EDX
0050B573  E8 28 FE 1F 00            CALL 0x0070b3a0
0050B578  50                        PUSH EAX
0050B579  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B57F  6A 01                     PUSH 0x1
0050B581  6A 7D                     PUSH 0x7d
0050B583  56                        PUSH ESI
0050B584  50                        PUSH EAX
0050B585  E8 9F 7C EF FF            CALL 0x00403229
0050B58A  83 C6 04                  ADD ESI,0x4
0050B58D  83 C4 1C                  ADD ESP,0x1c
0050B590  81 FE B9 00 00 00         CMP ESI,0xb9
0050B596  7C D2                     JL 0x0050b56a
0050B598  E9 FB 07 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_70:
0050B59D  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050B5A3  6A 01                     PUSH 0x1
0050B5A5  51                        PUSH ECX
0050B5A6  E8 F5 FD 1F 00            CALL 0x0070b3a0
0050B5AB  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B5B1  50                        PUSH EAX
0050B5B2  6A 01                     PUSH 0x1
0050B5B4  6A 7B                     PUSH 0x7b
0050B5B6  6A 33                     PUSH 0x33
0050B5B8  52                        PUSH EDX
0050B5B9  E8 6B 7C EF FF            CALL 0x00403229
0050B5BE  33 C0                     XOR EAX,EAX
0050B5C0  83 C4 1C                  ADD ESP,0x1c
0050B5C3  8A 83 29 0C 00 00         MOV AL,byte ptr [EBX + 0xc29]
0050B5C9  8B F8                     MOV EDI,EAX
0050B5CB  33 C0                     XOR EAX,EAX
0050B5CD  85 FF                     TEST EDI,EDI
0050B5CF  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0050B5D2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050B5D5  76 37                     JBE 0x0050b60e
0050B5D7  BE 35 00 00 00            MOV ESI,0x35
0050B5DC  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
LAB_0050b5df:
0050B5DF  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050B5E5  6A 01                     PUSH 0x1
0050B5E7  51                        PUSH ECX
0050B5E8  E8 B3 FD 1F 00            CALL 0x0070b3a0
0050B5ED  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B5F3  50                        PUSH EAX
0050B5F4  6A 01                     PUSH 0x1
0050B5F6  6A 7D                     PUSH 0x7d
0050B5F8  56                        PUSH ESI
0050B5F9  52                        PUSH EDX
0050B5FA  E8 2A 7C EF FF            CALL 0x00403229
0050B5FF  83 C4 1C                  ADD ESP,0x1c
0050B602  83 C6 04                  ADD ESI,0x4
0050B605  4F                        DEC EDI
0050B606  75 D7                     JNZ 0x0050b5df
0050B608  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050B60B  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
LAB_0050b60e:
0050B60E  83 F8 21                  CMP EAX,0x21
0050B611  73 35                     JNC 0x0050b648
0050B613  8D 34 85 35 00 00 00      LEA ESI,[EAX*0x4 + 0x35]
LAB_0050b61a:
0050B61A  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B620  6A 00                     PUSH 0x0
0050B622  50                        PUSH EAX
0050B623  E8 78 FD 1F 00            CALL 0x0070b3a0
0050B628  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B62E  50                        PUSH EAX
0050B62F  6A 01                     PUSH 0x1
0050B631  6A 7D                     PUSH 0x7d
0050B633  56                        PUSH ESI
0050B634  51                        PUSH ECX
0050B635  E8 EF 7B EF FF            CALL 0x00403229
0050B63A  83 C6 04                  ADD ESI,0x4
0050B63D  83 C4 1C                  ADD ESP,0x1c
0050B640  81 FE B9 00 00 00         CMP ESI,0xb9
0050B646  7C D2                     JL 0x0050b61a
LAB_0050b648:
0050B648  8B 93 E1 09 00 00         MOV EDX,dword ptr [EBX + 0x9e1]
0050B64E  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B654  6A 00                     PUSH 0x0
0050B656  6A 2B                     PUSH 0x2b
0050B658  68 A4 00 00 00            PUSH 0xa4
0050B65D  6A 06                     PUSH 0x6
0050B65F  6A 24                     PUSH 0x24
0050B661  6A 00                     PUSH 0x0
0050B663  52                        PUSH EDX
0050B664  E8 37 55 20 00            CALL 0x00710ba0
0050B669  8B F0                     MOV ESI,EAX
0050B66B  85 F6                     TEST ESI,ESI
0050B66D  0F 84 25 07 00 00         JZ 0x0050bd98
0050B673  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B678  6A FF                     PUSH -0x1
0050B67A  83 FF 21                  CMP EDI,0x21
0050B67D  6A FF                     PUSH -0x1
0050B67F  6A 05                     PUSH 0x5
0050B681  6A FF                     PUSH -0x1
0050B683  1B C9                     SBB ECX,ECX
0050B685  6A FF                     PUSH -0x1
0050B687  81 C1 C4 36 00 00         ADD ECX,0x36c4
0050B68D  50                        PUSH EAX
0050B68E  51                        PUSH ECX
0050B68F  E8 AC 4A 1A 00            CALL 0x006b0140
0050B694  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B69A  50                        PUSH EAX
0050B69B  E8 D0 64 20 00            CALL 0x00711b70
0050B6A0  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B6A6  56                        PUSH ESI
0050B6A7  6A 01                     PUSH 0x1
0050B6A9  6A 4C                     PUSH 0x4c
0050B6AB  6A 24                     PUSH 0x24
0050B6AD  52                        PUSH EDX
0050B6AE  E8 76 7B EF FF            CALL 0x00403229
0050B6B3  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B6B9  83 C4 14                  ADD ESP,0x14
0050B6BC  E8 3F 58 20 00            CALL 0x00710f00
0050B6C1  E9 D2 06 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_62:
0050B6C6  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B6CC  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B6D2  6A 0B                     PUSH 0xb
0050B6D4  6A 66                     PUSH 0x66
0050B6D6  6A 66                     PUSH 0x66
0050B6D8  6A 15                     PUSH 0x15
0050B6DA  6A 00                     PUSH 0x0
0050B6DC  50                        PUSH EAX
0050B6DD  E8 AE 53 20 00            CALL 0x00710a90
0050B6E2  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
0050B6E8  6A 05                     PUSH 0x5
0050B6EA  6A FF                     PUSH -0x1
0050B6EC  6A FF                     PUSH -0x1
0050B6EE  51                        PUSH ECX
0050B6EF  68 25 27 00 00            PUSH 0x2725
0050B6F4  E8 47 4A 1A 00            CALL 0x006b0140
0050B6F9  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B6FF  50                        PUSH EAX
0050B700  E8 BB 62 20 00            CALL 0x007119c0
0050B705  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050B70B  8B 3D E8 BD 85 00         MOV EDI,dword ptr [0x0085bde8]
0050B711  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050B717  52                        PUSH EDX
0050B718  68 90 18 7C 00            PUSH 0x7c1890
0050B71D  56                        PUSH ESI
0050B71E  FF D7                     CALL EDI
0050B720  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B726  83 C4 0C                  ADD ESP,0xc
0050B729  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B72F  6A 0B                     PUSH 0xb
0050B731  6A 24                     PUSH 0x24
0050B733  6A 66                     PUSH 0x66
0050B735  6A 7F                     PUSH 0x7f
0050B737  6A 00                     PUSH 0x0
0050B739  50                        PUSH EAX
0050B73A  E8 51 53 20 00            CALL 0x00710a90
0050B73F  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B745  6A 05                     PUSH 0x5
0050B747  6A FF                     PUSH -0x1
0050B749  6A FF                     PUSH -0x1
0050B74B  56                        PUSH ESI
0050B74C  E8 6F 62 20 00            CALL 0x007119c0
0050B751  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B757  6A 0B                     PUSH 0xb
0050B759  6A 17                     PUSH 0x17
0050B75B  6A 4F                     PUSH 0x4f
0050B75D  68 8E 00 00 00            PUSH 0x8e
0050B762  6A 00                     PUSH 0x0
0050B764  51                        PUSH ECX
0050B765  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B76B  E8 20 53 20 00            CALL 0x00710a90
0050B770  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050B776  6A 05                     PUSH 0x5
0050B778  6A FF                     PUSH -0x1
0050B77A  6A FF                     PUSH -0x1
0050B77C  52                        PUSH EDX
0050B77D  68 40 27 00 00            PUSH 0x2740
0050B782  E8 B9 49 1A 00            CALL 0x006b0140
0050B787  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B78D  50                        PUSH EAX
0050B78E  E8 2D 62 20 00            CALL 0x007119c0
0050B793  8B 83 16 0C 00 00         MOV EAX,dword ptr [EBX + 0xc16]
0050B799  50                        PUSH EAX
0050B79A  68 90 18 7C 00            PUSH 0x7c1890
0050B79F  56                        PUSH ESI
0050B7A0  FF D7                     CALL EDI
0050B7A2  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B7A8  83 C4 0C                  ADD ESP,0xc
0050B7AB  6A 0B                     PUSH 0xb
0050B7AD  6A 24                     PUSH 0x24
0050B7AF  6A 4F                     PUSH 0x4f
0050B7B1  68 A5 00 00 00            PUSH 0xa5
0050B7B6  6A 00                     PUSH 0x0
0050B7B8  51                        PUSH ECX
0050B7B9  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B7BF  E8 CC 52 20 00            CALL 0x00710a90
0050B7C4  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050B7CA  6A 04                     PUSH 0x4
0050B7CC  6A FF                     PUSH -0x1
0050B7CE  6A FF                     PUSH -0x1
0050B7D0  56                        PUSH ESI
0050B7D1  E8 EA 61 20 00            CALL 0x007119c0
0050B7D6  8B 93 B2 02 00 00         MOV EDX,dword ptr [EBX + 0x2b2]
0050B7DC  6A 01                     PUSH 0x1
0050B7DE  52                        PUSH EDX
0050B7DF  E8 BC FB 1F 00            CALL 0x0070b3a0
0050B7E4  50                        PUSH EAX
0050B7E5  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050B7EB  6A 01                     PUSH 0x1
0050B7ED  6A 7B                     PUSH 0x7b
0050B7EF  6A 33                     PUSH 0x33
0050B7F1  50                        PUSH EAX
0050B7F2  E8 32 7A EF FF            CALL 0x00403229
0050B7F7  8B 8B 12 0C 00 00         MOV ECX,dword ptr [EBX + 0xc12]
0050B7FD  8B B3 16 0C 00 00         MOV ESI,dword ptr [EBX + 0xc16]
0050B803  83 C4 1C                  ADD ESP,0x1c
0050B806  3B CE                     CMP ECX,ESI
0050B808  76 07                     JBE 0x0050b811
0050B80A  B8 21 00 00 00            MOV EAX,0x21
0050B80F  EB 13                     JMP 0x0050b824
LAB_0050b811:
0050B811  85 F6                     TEST ESI,ESI
0050B813  74 0D                     JZ 0x0050b822
0050B815  8B C1                     MOV EAX,ECX
0050B817  33 D2                     XOR EDX,EDX
0050B819  C1 E0 05                  SHL EAX,0x5
0050B81C  03 C1                     ADD EAX,ECX
0050B81E  F7 F6                     DIV ESI
0050B820  EB 02                     JMP 0x0050b824
LAB_0050b822:
0050B822  33 C0                     XOR EAX,EAX
LAB_0050b824:
0050B824  33 C9                     XOR ECX,ECX
0050B826  85 C0                     TEST EAX,EAX
0050B828  76 36                     JBE 0x0050b860
0050B82A  BE 35 00 00 00            MOV ESI,0x35
0050B82F  8B F8                     MOV EDI,EAX
0050B831  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050b834:
0050B834  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050B83A  6A 01                     PUSH 0x1
0050B83C  51                        PUSH ECX
0050B83D  E8 5E FB 1F 00            CALL 0x0070b3a0
0050B842  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B848  50                        PUSH EAX
0050B849  6A 01                     PUSH 0x1
0050B84B  6A 7D                     PUSH 0x7d
0050B84D  56                        PUSH ESI
0050B84E  52                        PUSH EDX
0050B84F  E8 D5 79 EF FF            CALL 0x00403229
0050B854  83 C4 1C                  ADD ESP,0x1c
0050B857  83 C6 04                  ADD ESI,0x4
0050B85A  4F                        DEC EDI
0050B85B  75 D7                     JNZ 0x0050b834
0050B85D  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050b860:
0050B860  83 F9 21                  CMP ECX,0x21
0050B863  0F 83 2F 05 00 00         JNC 0x0050bd98
0050B869  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050b870:
0050B870  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B876  6A 00                     PUSH 0x0
0050B878  50                        PUSH EAX
0050B879  E8 22 FB 1F 00            CALL 0x0070b3a0
0050B87E  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B884  50                        PUSH EAX
0050B885  6A 01                     PUSH 0x1
0050B887  6A 7D                     PUSH 0x7d
0050B889  56                        PUSH ESI
0050B88A  51                        PUSH ECX
0050B88B  E8 99 79 EF FF            CALL 0x00403229
0050B890  83 C6 04                  ADD ESI,0x4
0050B893  83 C4 1C                  ADD ESP,0x1c
0050B896  81 FE B9 00 00 00         CMP ESI,0xb9
0050B89C  7C D2                     JL 0x0050b870
0050B89E  E9 F5 04 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_67:
0050B8A3  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B8A9  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B8AF  6A 0B                     PUSH 0xb
0050B8B1  68 85 00 00 00            PUSH 0x85
0050B8B6  6A 5D                     PUSH 0x5d
0050B8B8  6A 34                     PUSH 0x34
0050B8BA  6A 00                     PUSH 0x0
0050B8BC  52                        PUSH EDX
0050B8BD  E8 CE 51 20 00            CALL 0x00710a90
0050B8C2  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B8C7  6A 05                     PUSH 0x5
0050B8C9  6A FF                     PUSH -0x1
0050B8CB  6A FF                     PUSH -0x1
0050B8CD  50                        PUSH EAX
0050B8CE  68 2B 27 00 00            PUSH 0x272b
0050B8D3  E8 68 48 1A 00            CALL 0x006b0140
0050B8D8  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B8DE  50                        PUSH EAX
0050B8DF  E8 DC 60 20 00            CALL 0x007119c0
0050B8E4  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050B8EA  6A 01                     PUSH 0x1
0050B8EC  51                        PUSH ECX
0050B8ED  E8 AE FA 1F 00            CALL 0x0070b3a0
0050B8F2  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B8F8  50                        PUSH EAX
0050B8F9  6A 01                     PUSH 0x1
0050B8FB  6A 50                     PUSH 0x50
0050B8FD  6A 33                     PUSH 0x33
0050B8FF  52                        PUSH EDX
0050B900  E8 24 79 EF FF            CALL 0x00403229
0050B905  8A 83 11 0C 00 00         MOV AL,byte ptr [EBX + 0xc11]
0050B90B  83 C4 1C                  ADD ESP,0x1c
0050B90E  33 F6                     XOR ESI,ESI
0050B910  84 C0                     TEST AL,AL
0050B912  76 38                     JBE 0x0050b94c
0050B914  BF 35 00 00 00            MOV EDI,0x35
LAB_0050b919:
0050B919  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B91F  6A 01                     PUSH 0x1
0050B921  50                        PUSH EAX
0050B922  E8 79 FA 1F 00            CALL 0x0070b3a0
0050B927  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B92D  50                        PUSH EAX
0050B92E  6A 01                     PUSH 0x1
0050B930  6A 52                     PUSH 0x52
0050B932  57                        PUSH EDI
0050B933  51                        PUSH ECX
0050B934  E8 F0 78 EF FF            CALL 0x00403229
0050B939  33 D2                     XOR EDX,EDX
0050B93B  83 C4 1C                  ADD ESP,0x1c
0050B93E  8A 93 11 0C 00 00         MOV DL,byte ptr [EBX + 0xc11]
0050B944  46                        INC ESI
0050B945  83 C7 04                  ADD EDI,0x4
0050B948  3B F2                     CMP ESI,EDX
0050B94A  72 CD                     JC 0x0050b919
LAB_0050b94c:
0050B94C  83 FE 21                  CMP ESI,0x21
0050B94F  73 35                     JNC 0x0050b986
0050B951  8D 34 B5 35 00 00 00      LEA ESI,[ESI*0x4 + 0x35]
LAB_0050b958:
0050B958  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050B95E  6A 00                     PUSH 0x0
0050B960  50                        PUSH EAX
0050B961  E8 3A FA 1F 00            CALL 0x0070b3a0
0050B966  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050B96C  50                        PUSH EAX
0050B96D  6A 01                     PUSH 0x1
0050B96F  6A 52                     PUSH 0x52
0050B971  56                        PUSH ESI
0050B972  51                        PUSH ECX
0050B973  E8 B1 78 EF FF            CALL 0x00403229
0050B978  83 C6 04                  ADD ESI,0x4
0050B97B  83 C4 1C                  ADD ESP,0x1c
0050B97E  81 FE B9 00 00 00         CMP ESI,0xb9
0050B984  7C D2                     JL 0x0050b958
LAB_0050b986:
0050B986  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B98C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B992  6A 0B                     PUSH 0xb
0050B994  68 85 00 00 00            PUSH 0x85
0050B999  6A 7D                     PUSH 0x7d
0050B99B  6A 34                     PUSH 0x34
0050B99D  6A 00                     PUSH 0x0
0050B99F  52                        PUSH EDX
0050B9A0  E8 EB 50 20 00            CALL 0x00710a90
0050B9A5  A1 18 76 80 00            MOV EAX,[0x00807618]
0050B9AA  6A 05                     PUSH 0x5
0050B9AC  6A FF                     PUSH -0x1
0050B9AE  6A FF                     PUSH -0x1
0050B9B0  50                        PUSH EAX
0050B9B1  68 2C 27 00 00            PUSH 0x272c
0050B9B6  E8 85 47 1A 00            CALL 0x006b0140
0050B9BB  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050B9C1  50                        PUSH EAX
0050B9C2  E8 F9 5F 20 00            CALL 0x007119c0
0050B9C7  8B 8B B2 02 00 00         MOV ECX,dword ptr [EBX + 0x2b2]
0050B9CD  6A 01                     PUSH 0x1
0050B9CF  51                        PUSH ECX
0050B9D0  E8 CB F9 1F 00            CALL 0x0070b3a0
0050B9D5  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050B9DB  50                        PUSH EAX
0050B9DC  6A 01                     PUSH 0x1
0050B9DE  6A 71                     PUSH 0x71
0050B9E0  6A 33                     PUSH 0x33
0050B9E2  52                        PUSH EDX
0050B9E3  E8 41 78 EF FF            CALL 0x00403229
0050B9E8  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050B9EE  83 C4 1C                  ADD ESP,0x1c
0050B9F1  33 F6                     XOR ESI,ESI
0050B9F3  85 C0                     TEST EAX,EAX
0050B9F5  76 36                     JBE 0x0050ba2d
0050B9F7  BF 35 00 00 00            MOV EDI,0x35
LAB_0050b9fc:
0050B9FC  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050BA02  6A 01                     PUSH 0x1
0050BA04  50                        PUSH EAX
0050BA05  E8 96 F9 1F 00            CALL 0x0070b3a0
0050BA0A  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050BA10  50                        PUSH EAX
0050BA11  6A 01                     PUSH 0x1
0050BA13  6A 73                     PUSH 0x73
0050BA15  57                        PUSH EDI
0050BA16  51                        PUSH ECX
0050BA17  E8 0D 78 EF FF            CALL 0x00403229
0050BA1C  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050BA22  83 C4 1C                  ADD ESP,0x1c
0050BA25  46                        INC ESI
0050BA26  83 C7 04                  ADD EDI,0x4
0050BA29  3B F0                     CMP ESI,EAX
0050BA2B  72 CF                     JC 0x0050b9fc
LAB_0050ba2d:
0050BA2D  83 FE 21                  CMP ESI,0x21
0050BA30  0F 83 62 03 00 00         JNC 0x0050bd98
0050BA36  8D 34 B5 35 00 00 00      LEA ESI,[ESI*0x4 + 0x35]
LAB_0050ba3d:
0050BA3D  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050BA43  6A 00                     PUSH 0x0
0050BA45  52                        PUSH EDX
0050BA46  E8 55 F9 1F 00            CALL 0x0070b3a0
0050BA4B  50                        PUSH EAX
0050BA4C  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050BA52  6A 01                     PUSH 0x1
0050BA54  6A 73                     PUSH 0x73
0050BA56  56                        PUSH ESI
0050BA57  50                        PUSH EAX
0050BA58  E8 CC 77 EF FF            CALL 0x00403229
0050BA5D  83 C6 04                  ADD ESI,0x4
0050BA60  83 C4 1C                  ADD ESP,0x1c
0050BA63  81 FE B9 00 00 00         CMP ESI,0xb9
0050BA69  7C D2                     JL 0x0050ba3d
0050BA6B  E9 28 03 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_64:
0050BA70  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050BA76  6A 0B                     PUSH 0xb
0050BA78  68 BB 00 00 00            PUSH 0xbb
0050BA7D  6A 59                     PUSH 0x59
0050BA7F  6A 19                     PUSH 0x19
0050BA81  6A 00                     PUSH 0x0
0050BA83  51                        PUSH ECX
0050BA84  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050BA8A  E8 01 50 20 00            CALL 0x00710a90
0050BA8F  8B 15 18 76 80 00         MOV EDX,dword ptr [0x00807618]
0050BA95  6A 05                     PUSH 0x5
0050BA97  6A FF                     PUSH -0x1
0050BA99  6A FF                     PUSH -0x1
0050BA9B  52                        PUSH EDX
0050BA9C  68 2D 27 00 00            PUSH 0x272d
0050BAA1  E8 9A 46 1A 00            CALL 0x006b0140
0050BAA6  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050BAAC  50                        PUSH EAX
0050BAAD  E8 0E 5F 20 00            CALL 0x007119c0
0050BAB2  8B 83 12 0C 00 00         MOV EAX,dword ptr [EBX + 0xc12]
0050BAB8  8D B3 E1 01 00 00         LEA ESI,[EBX + 0x1e1]
0050BABE  50                        PUSH EAX
0050BABF  68 E4 1A 7C 00            PUSH 0x7c1ae4
0050BAC4  56                        PUSH ESI
0050BAC5  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050BACB  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050BAD1  83 C4 0C                  ADD ESP,0xc
0050BAD4  6A 0B                     PUSH 0xb
0050BAD6  6A 24                     PUSH 0x24
0050BAD8  6A 65                     PUSH 0x65
0050BADA  6A 66                     PUSH 0x66
0050BADC  6A 00                     PUSH 0x0
0050BADE  51                        PUSH ECX
0050BADF  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050BAE5  E8 A6 4F 20 00            CALL 0x00710a90
0050BAEA  8B 8B C4 01 00 00         MOV ECX,dword ptr [EBX + 0x1c4]
0050BAF0  6A 07                     PUSH 0x7
0050BAF2  6A FF                     PUSH -0x1
0050BAF4  6A FF                     PUSH -0x1
0050BAF6  56                        PUSH ESI
0050BAF7  E8 C4 5E 20 00            CALL 0x007119c0
0050BAFC  8B 93 B2 02 00 00         MOV EDX,dword ptr [EBX + 0x2b2]
0050BB02  6A 01                     PUSH 0x1
0050BB04  52                        PUSH EDX
0050BB05  E8 96 F8 1F 00            CALL 0x0070b3a0
0050BB0A  50                        PUSH EAX
0050BB0B  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050BB11  6A 01                     PUSH 0x1
0050BB13  6A 7B                     PUSH 0x7b
0050BB15  6A 33                     PUSH 0x33
0050BB17  50                        PUSH EAX
0050BB18  E8 0C 77 EF FF            CALL 0x00403229
0050BB1D  8B 8B 16 0C 00 00         MOV ECX,dword ptr [EBX + 0xc16]
0050BB23  83 C4 1C                  ADD ESP,0x1c
0050BB26  85 C9                     TEST ECX,ECX
0050BB28  74 13                     JZ 0x0050bb3d
0050BB2A  8B 93 12 0C 00 00         MOV EDX,dword ptr [EBX + 0xc12]
0050BB30  8B C2                     MOV EAX,EDX
0050BB32  C1 E0 05                  SHL EAX,0x5
0050BB35  03 C2                     ADD EAX,EDX
0050BB37  33 D2                     XOR EDX,EDX
0050BB39  F7 F1                     DIV ECX
0050BB3B  EB 02                     JMP 0x0050bb3f
LAB_0050bb3d:
0050BB3D  33 C0                     XOR EAX,EAX
LAB_0050bb3f:
0050BB3F  33 C9                     XOR ECX,ECX
0050BB41  85 C0                     TEST EAX,EAX
0050BB43  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0050BB46  76 36                     JBE 0x0050bb7e
0050BB48  BE 35 00 00 00            MOV ESI,0x35
0050BB4D  8B F8                     MOV EDI,EAX
0050BB4F  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0050bb52:
0050BB52  8B 8B B6 02 00 00         MOV ECX,dword ptr [EBX + 0x2b6]
0050BB58  6A 01                     PUSH 0x1
0050BB5A  51                        PUSH ECX
0050BB5B  E8 40 F8 1F 00            CALL 0x0070b3a0
0050BB60  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050BB66  50                        PUSH EAX
0050BB67  6A 01                     PUSH 0x1
0050BB69  6A 7D                     PUSH 0x7d
0050BB6B  56                        PUSH ESI
0050BB6C  52                        PUSH EDX
0050BB6D  E8 B7 76 EF FF            CALL 0x00403229
0050BB72  83 C4 1C                  ADD ESP,0x1c
0050BB75  83 C6 04                  ADD ESI,0x4
0050BB78  4F                        DEC EDI
0050BB79  75 D7                     JNZ 0x0050bb52
0050BB7B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
LAB_0050bb7e:
0050BB7E  83 F9 21                  CMP ECX,0x21
0050BB81  0F 83 11 02 00 00         JNC 0x0050bd98
0050BB87  8D 34 8D 35 00 00 00      LEA ESI,[ECX*0x4 + 0x35]
LAB_0050bb8e:
0050BB8E  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050BB94  6A 00                     PUSH 0x0
0050BB96  50                        PUSH EAX
0050BB97  E8 04 F8 1F 00            CALL 0x0070b3a0
0050BB9C  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050BBA2  50                        PUSH EAX
0050BBA3  6A 01                     PUSH 0x1
0050BBA5  6A 7D                     PUSH 0x7d
0050BBA7  56                        PUSH ESI
0050BBA8  51                        PUSH ECX
0050BBA9  E8 7B 76 EF FF            CALL 0x00403229
0050BBAE  83 C6 04                  ADD ESI,0x4
0050BBB1  83 C4 1C                  ADD ESP,0x1c
0050BBB4  81 FE B9 00 00 00         CMP ESI,0xb9
0050BBBA  7C D2                     JL 0x0050bb8e
0050BBBC  E9 D7 01 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_5b:
0050BBC1  8B CB                     MOV ECX,EBX
0050BBC3  E8 CF 8A EF FF            CALL 0x00404697
0050BBC8  E9 CB 01 00 00            JMP 0x0050bd98
switchD_0050a9c9::caseD_6d:
0050BBCD  8D 83 24 0C 00 00         LEA EAX,[EBX + 0xc24]
0050BBD3  8D 93 12 0C 00 00         LEA EDX,[EBX + 0xc12]
0050BBD9  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050BBDC  B8 DC F3 FF FF            MOV EAX,0xfffff3dc
0050BBE1  2B C3                     SUB EAX,EBX
0050BBE3  BE 63 00 00 00            MOV ESI,0x63
0050BBE8  C7 45 F0 2C 00 00 00      MOV dword ptr [EBP + -0x10],0x2c
0050BBEF  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
0050BBF2  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
LAB_0050bbf5:
0050BBF5  8B 83 11 0A 00 00         MOV EAX,dword ptr [EBX + 0xa11]
0050BBFB  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0050BBFE  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050BC04  50                        PUSH EAX
0050BC05  6A 01                     PUSH 0x1
0050BC07  8D 4F FE                  LEA ECX,[EDI + -0x2]
0050BC0A  6A 55                     PUSH 0x55
0050BC0C  51                        PUSH ECX
0050BC0D  52                        PUSH EDX
0050BC0E  E8 16 76 EF FF            CALL 0x00403229
0050BC13  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050BC16  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0050BC19  8A 48 F6                  MOV CL,byte ptr [EAX + -0xa]
0050BC1C  8B 02                     MOV EAX,dword ptr [EDX]
0050BC1E  51                        PUSH ECX
0050BC1F  50                        PUSH EAX
0050BC20  E8 D0 9A EF FF            CALL 0x004056f5
0050BC25  8B 8B C2 02 00 00         MOV ECX,dword ptr [EBX + 0x2c2]
0050BC2B  50                        PUSH EAX
0050BC2C  51                        PUSH ECX
0050BC2D  E8 6E F7 1F 00            CALL 0x0070b3a0
0050BC32  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050BC38  50                        PUSH EAX
0050BC39  6A 01                     PUSH 0x1
0050BC3B  6A 57                     PUSH 0x57
0050BC3D  57                        PUSH EDI
0050BC3E  52                        PUSH EDX
0050BC3F  E8 E5 75 EF FF            CALL 0x00403229
0050BC44  8B 83 B2 02 00 00         MOV EAX,dword ptr [EBX + 0x2b2]
0050BC4A  6A 04                     PUSH 0x4
0050BC4C  50                        PUSH EAX
0050BC4D  E8 4E F7 1F 00            CALL 0x0070b3a0
0050BC52  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050BC58  83 C4 40                  ADD ESP,0x40
0050BC5B  8D 4E FE                  LEA ECX,[ESI + -0x2]
0050BC5E  50                        PUSH EAX
0050BC5F  6A 01                     PUSH 0x1
0050BC61  6A 58                     PUSH 0x58
0050BC63  51                        PUSH ECX
0050BC64  52                        PUSH EDX
0050BC65  E8 BF 75 EF FF            CALL 0x00403229
0050BC6A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050BC6D  33 C9                     XOR ECX,ECX
0050BC6F  83 C4 14                  ADD ESP,0x14
0050BC72  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
0050BC79  8A 08                     MOV CL,byte ptr [EAX]
0050BC7B  B8 67 66 66 66            MOV EAX,0x66666667
0050BC80  F7 E9                     IMUL ECX
0050BC82  C1 FA 02                  SAR EDX,0x2
0050BC85  8B CA                     MOV ECX,EDX
0050BC87  C1 E9 1F                  SHR ECX,0x1f
0050BC8A  03 D1                     ADD EDX,ECX
0050BC8C  74 39                     JZ 0x0050bcc7
0050BC8E  BF 7E 00 00 00            MOV EDI,0x7e
0050BC93  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
0050BC96  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0050bc99:
0050BC99  8B 93 B6 02 00 00         MOV EDX,dword ptr [EBX + 0x2b6]
0050BC9F  6A 07                     PUSH 0x7
0050BCA1  52                        PUSH EDX
0050BCA2  E8 F9 F6 1F 00            CALL 0x0070b3a0
0050BCA7  50                        PUSH EAX
0050BCA8  8B 83 94 01 00 00         MOV EAX,dword ptr [EBX + 0x194]
0050BCAE  6A 01                     PUSH 0x1
0050BCB0  57                        PUSH EDI
0050BCB1  56                        PUSH ESI
0050BCB2  50                        PUSH EAX
0050BCB3  E8 71 75 EF FF            CALL 0x00403229
0050BCB8  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0050BCBB  83 C4 1C                  ADD ESP,0x1c
0050BCBE  83 EF 04                  SUB EDI,0x4
0050BCC1  48                        DEC EAX
0050BCC2  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0050BCC5  75 D2                     JNZ 0x0050bc99
LAB_0050bcc7:
0050BCC7  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0050BCCA  83 F8 0A                  CMP EAX,0xa
0050BCCD  73 48                     JNC 0x0050bd17
0050BCCF  8B C8                     MOV ECX,EAX
0050BCD1  BF 7E 00 00 00            MOV EDI,0x7e
0050BCD6  B8 0A 00 00 00            MOV EAX,0xa
0050BCDB  8D 14 8D 00 00 00 00      LEA EDX,[ECX*0x4 + 0x0]
0050BCE2  2B FA                     SUB EDI,EDX
0050BCE4  2B C1                     SUB EAX,ECX
0050BCE6  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
LAB_0050bce9:
0050BCE9  8B 83 B6 02 00 00         MOV EAX,dword ptr [EBX + 0x2b6]
0050BCEF  6A 08                     PUSH 0x8
0050BCF1  50                        PUSH EAX
0050BCF2  E8 A9 F6 1F 00            CALL 0x0070b3a0
0050BCF7  8B 8B 94 01 00 00         MOV ECX,dword ptr [EBX + 0x194]
0050BCFD  50                        PUSH EAX
0050BCFE  6A 01                     PUSH 0x1
0050BD00  57                        PUSH EDI
0050BD01  56                        PUSH ESI
0050BD02  51                        PUSH ECX
0050BD03  E8 21 75 EF FF            CALL 0x00403229
0050BD08  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0050BD0B  83 C4 1C                  ADD ESP,0x1c
0050BD0E  83 EF 04                  SUB EDI,0x4
0050BD11  48                        DEC EAX
0050BD12  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
0050BD15  75 D2                     JNZ 0x0050bce9
LAB_0050bd17:
0050BD17  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0050BD1A  8B 7D F0                  MOV EDI,dword ptr [EBP + -0x10]
0050BD1D  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
0050BD20  83 C0 04                  ADD EAX,0x4
0050BD23  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0050BD26  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0050BD29  83 C7 65                  ADD EDI,0x65
0050BD2C  40                        INC EAX
0050BD2D  03 D0                     ADD EDX,EAX
0050BD2F  83 C6 1A                  ADD ESI,0x1a
0050BD32  83 FA 02                  CMP EDX,0x2
0050BD35  89 7D F0                  MOV dword ptr [EBP + -0x10],EDI
0050BD38  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0050BD3B  0F 82 B4 FE FF FF         JC 0x0050bbf5
0050BD41  33 C0                     XOR EAX,EAX
0050BD43  33 C9                     XOR ECX,ECX
0050BD45  8A 83 25 0C 00 00         MOV AL,byte ptr [EBX + 0xc25]
0050BD4B  8A 8B 24 0C 00 00         MOV CL,byte ptr [EBX + 0xc24]
0050BD51  50                        PUSH EAX
0050BD52  51                        PUSH ECX
0050BD53  68 D4 28 7C 00            PUSH 0x7c28d4
0050BD58  68 3A F3 80 00            PUSH 0x80f33a
0050BD5D  FF 15 E8 BD 85 00         CALL dword ptr [0x0085bde8]
0050BD63  8B 93 94 01 00 00         MOV EDX,dword ptr [EBX + 0x194]
0050BD69  83 C4 10                  ADD ESP,0x10
0050BD6C  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050BD72  6A 0B                     PUSH 0xb
0050BD74  6A 2F                     PUSH 0x2f
0050BD76  6A 4D                     PUSH 0x4d
0050BD78  6A 5F                     PUSH 0x5f
0050BD7A  6A 00                     PUSH 0x0
0050BD7C  52                        PUSH EDX
0050BD7D  E8 0E 4D 20 00            CALL 0x00710a90
0050BD82  8B 8B B8 01 00 00         MOV ECX,dword ptr [EBX + 0x1b8]
0050BD88  6A 05                     PUSH 0x5
0050BD8A  6A FF                     PUSH -0x1
0050BD8C  6A FF                     PUSH -0x1
0050BD8E  68 3A F3 80 00            PUSH 0x80f33a
LAB_0050bd93:
0050BD93  E8 28 5C 20 00            CALL 0x007119c0
switchD_0050a9c9::caseD_5f:
0050BD98  8B CB                     MOV ECX,EBX
0050BD9A  E8 16 5C EF FF            CALL 0x004019b5
switchD_0050a52e::caseD_df:
0050BD9F  8B 83 5C 01 00 00         MOV EAX,dword ptr [EBX + 0x15c]
0050BDA5  85 C0                     TEST EAX,EAX
0050BDA7  7C 19                     JL 0x0050bdc2
0050BDA9  8B 8B A8 00 00 00         MOV ECX,dword ptr [EBX + 0xa8]
0050BDAF  8B 53 50                  MOV EDX,dword ptr [EBX + 0x50]
0050BDB2  51                        PUSH ECX
0050BDB3  52                        PUSH EDX
0050BDB4  6A FF                     PUSH -0x1
0050BDB6  50                        PUSH EAX
0050BDB7  A1 A8 75 80 00            MOV EAX,[0x008075a8]
0050BDBC  50                        PUSH EAX
0050BDBD  E8 7E 78 1A 00            CALL 0x006b3640
LAB_0050bdc2:
0050BDC2  8B 4D A0                  MOV ECX,dword ptr [EBP + -0x60]
0050BDC5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0050BDCB  5F                        POP EDI
0050BDCC  5E                        POP ESI
0050BDCD  5B                        POP EBX
0050BDCE  8B E5                     MOV ESP,EBP
0050BDD0  5D                        POP EBP
0050BDD1  C3                        RET
LAB_0050bdd2:
0050BDD2  8B 55 A0                  MOV EDX,dword ptr [EBP + -0x60]
0050BDD5  68 B4 28 7C 00            PUSH 0x7c28b4
0050BDDA  68 CC 4C 7A 00            PUSH 0x7a4ccc
0050BDDF  56                        PUSH ESI
0050BDE0  6A 00                     PUSH 0x0
0050BDE2  68 F0 06 00 00            PUSH 0x6f0
0050BDE7  68 00 27 7C 00            PUSH 0x7c2700
0050BDEC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0050BDF2  E8 D9 16 1A 00            CALL 0x006ad4d0
0050BDF7  83 C4 18                  ADD ESP,0x18
0050BDFA  85 C0                     TEST EAX,EAX
0050BDFC  74 01                     JZ 0x0050bdff
0050BDFE  CC                        INT3
LAB_0050bdff:
0050BDFF  68 F0 06 00 00            PUSH 0x6f0
0050BE04  68 00 27 7C 00            PUSH 0x7c2700
0050BE09  6A 00                     PUSH 0x0
0050BE0B  56                        PUSH ESI
0050BE0C  E8 2F A0 19 00            CALL 0x006a5e40
0050BE11  5F                        POP EDI
0050BE12  5E                        POP ESI
0050BE13  5B                        POP EBX
0050BE14  8B E5                     MOV ESP,EBP
0050BE16  5D                        POP EBP
0050BE17  C3                        RET
