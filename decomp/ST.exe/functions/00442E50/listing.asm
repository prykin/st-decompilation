STAllPlayersC::_AssignMDPairs:
00442E50  55                        PUSH EBP
00442E51  8B EC                     MOV EBP,ESP
00442E53  81 EC 98 01 00 00         SUB ESP,0x198
00442E59  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00442E5E  53                        PUSH EBX
00442E5F  56                        PUSH ESI
00442E60  89 8D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],ECX
00442E66  33 DB                     XOR EBX,EBX
00442E68  57                        PUSH EDI
00442E69  8D 95 F4 FE FF FF         LEA EDX,[EBP + 0xfffffef4]
00442E6F  8D 8D F0 FE FF FF         LEA ECX,[EBP + 0xfffffef0]
00442E75  53                        PUSH EBX
00442E76  52                        PUSH EDX
00442E77  C7 85 44 FF FF FF 04 00 00 00  MOV dword ptr [EBP + 0xffffff44],0x4
00442E81  C7 85 34 FF FF FF 38 00 00 00  MOV dword ptr [EBP + 0xffffff34],0x38
00442E8B  C7 85 38 FF FF FF 39 00 00 00  MOV dword ptr [EBP + 0xffffff38],0x39
00442E95  C7 85 3C FF FF FF 4F 00 00 00  MOV dword ptr [EBP + 0xffffff3c],0x4f
00442E9F  C7 85 40 FF FF FF 5E 00 00 00  MOV dword ptr [EBP + 0xffffff40],0x5e
00442EA9  89 5D 80                  MOV dword ptr [EBP + -0x80],EBX
00442EAC  89 5D B8                  MOV dword ptr [EBP + -0x48],EBX
00442EAF  89 85 F0 FE FF FF         MOV dword ptr [EBP + 0xfffffef0],EAX
00442EB5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00442EBB  E8 30 A9 2E 00            CALL 0x0072d7f0
00442EC0  8B F0                     MOV ESI,EAX
00442EC2  83 C4 08                  ADD ESP,0x8
00442EC5  3B F3                     CMP ESI,EBX
00442EC7  0F 85 A1 0C 00 00         JNZ 0x00443b6e
00442ECD  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00442ED0  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00442ED3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00442ED6  3B C3                     CMP EAX,EBX
00442ED8  74 28                     JZ 0x00442f02
00442EDA  3B CB                     CMP ECX,EBX
00442EDC  74 24                     JZ 0x00442f02
00442EDE  3B D3                     CMP EDX,EBX
00442EE0  74 20                     JZ 0x00442f02
00442EE2  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00442EE5  3B FB                     CMP EDI,EBX
00442EE7  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00442EEA  74 19                     JZ 0x00442f05
00442EEC  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00442EEF  3B C3                     CMP EAX,EBX
00442EF1  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
00442EF4  74 0F                     JZ 0x00442f05
00442EF6  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
00442EF9  3B C3                     CMP EAX,EBX
00442EFB  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
00442EFE  75 1F                     JNZ 0x00442f1f
00442F00  EB 03                     JMP 0x00442f05
LAB_00442f02:
00442F02  8B 7D C8                  MOV EDI,dword ptr [EBP + -0x38]
LAB_00442f05:
00442F05  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00442F0A  68 CE 24 00 00            PUSH 0x24ce
00442F0F  68 04 60 7A 00            PUSH 0x7a6004
00442F14  50                        PUSH EAX
00442F15  68 09 00 FE AF            PUSH 0xaffe0009
00442F1A  E8 21 2F 26 00            CALL 0x006a5e40
LAB_00442f1f:
00442F1F  8B 95 44 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff44]
00442F25  33 C9                     XOR ECX,ECX
00442F27  3B D3                     CMP EDX,EBX
00442F29  7E 3A                     JLE 0x00442f65
00442F2B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00442F2E  8D 85 34 FF FF FF         LEA EAX,[EBP + 0xffffff34]
LAB_00442f34:
00442F34  3B 30                     CMP ESI,dword ptr [EAX]
00442F36  74 0A                     JZ 0x00442f42
00442F38  41                        INC ECX
00442F39  83 C0 04                  ADD EAX,0x4
00442F3C  3B CA                     CMP ECX,EDX
00442F3E  7C F4                     JL 0x00442f34
00442F40  EB 23                     JMP 0x00442f65
LAB_00442f42:
00442F42  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
00442F46  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
00442F49  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
00442F4C  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
00442F4F  C1 E2 04                  SHL EDX,0x4
00442F52  03 D0                     ADD EDX,EAX
00442F54  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
00442F5B  8B 8C 50 2F 4E 7F 00      MOV ECX,dword ptr [EAX + EDX*0x2 + 0x7f4e2f]
00442F62  89 4D 80                  MOV dword ptr [EBP + -0x80],ECX
LAB_00442f65:
00442F65  8B 45 80                  MOV EAX,dword ptr [EBP + -0x80]
00442F68  3B C3                     CMP EAX,EBX
00442F6A  74 0A                     JZ 0x00442f76
00442F6C  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00442F6F  3B C3                     CMP EAX,EBX
00442F71  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00442F74  75 1B                     JNZ 0x00442f91
LAB_00442f76:
00442F76  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00442F7C  68 D1 24 00 00            PUSH 0x24d1
00442F81  68 04 60 7A 00            PUSH 0x7a6004
00442F86  52                        PUSH EDX
00442F87  68 09 00 FE AF            PUSH 0xaffe0009
00442F8C  E8 AF 2E 26 00            CALL 0x006a5e40
LAB_00442f91:
00442F91  33 F6                     XOR ESI,ESI
00442F93  BB FF FF 00 00            MOV EBX,0xffff
00442F98  85 FF                     TEST EDI,EDI
00442F9A  7E 19                     JLE 0x00442fb5
LAB_00442f9c:
00442F9C  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00442F9F  8D 45 FC                  LEA EAX,[EBP + -0x4]
00442FA2  50                        PUSH EAX
00442FA3  8B D6                     MOV EDX,ESI
00442FA5  E8 C6 9C 26 00            CALL 0x006acc70
00442FAA  66 39 5D FC               CMP word ptr [EBP + -0x4],BX
00442FAE  75 05                     JNZ 0x00442fb5
00442FB0  46                        INC ESI
00442FB1  3B F7                     CMP ESI,EDI
00442FB3  7C E7                     JL 0x00442f9c
LAB_00442fb5:
00442FB5  3B F7                     CMP ESI,EDI
00442FB7  75 1B                     JNZ 0x00442fd4
00442FB9  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00442FBF  68 E2 24 00 00            PUSH 0x24e2
00442FC4  68 04 60 7A 00            PUSH 0x7a6004
00442FC9  51                        PUSH ECX
00442FCA  68 09 00 FE AF            PUSH 0xaffe0009
00442FCF  E8 6C 2E 26 00            CALL 0x006a5e40
LAB_00442fd4:
00442FD4  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00442FD7  33 F6                     XOR ESI,ESI
00442FD9  85 C0                     TEST EAX,EAX
00442FDB  7E 23                     JLE 0x00443000
00442FDD  8B 7D C4                  MOV EDI,dword ptr [EBP + -0x3c]
LAB_00442fe0:
00442FE0  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00442FE3  8D 55 FC                  LEA EDX,[EBP + -0x4]
00442FE6  52                        PUSH EDX
00442FE7  8B D6                     MOV EDX,ESI
00442FE9  E8 82 9C 26 00            CALL 0x006acc70
00442FEE  85 FF                     TEST EDI,EDI
00442FF0  74 06                     JZ 0x00442ff8
00442FF2  66 39 5D FC               CMP word ptr [EBP + -0x4],BX
00442FF6  75 08                     JNZ 0x00443000
LAB_00442ff8:
00442FF8  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00442FFB  46                        INC ESI
00442FFC  3B F0                     CMP ESI,EAX
00442FFE  7C E0                     JL 0x00442fe0
LAB_00443000:
00443000  3B 75 D8                  CMP ESI,dword ptr [EBP + -0x28]
00443003  75 1A                     JNZ 0x0044301f
00443005  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044300A  68 F4 24 00 00            PUSH 0x24f4
0044300F  68 04 60 7A 00            PUSH 0x7a6004
00443014  50                        PUSH EAX
00443015  68 09 00 FE AF            PUSH 0xaffe0009
0044301A  E8 21 2E 26 00            CALL 0x006a5e40
LAB_0044301f:
0044301F  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00443022  33 F6                     XOR ESI,ESI
00443024  85 C0                     TEST EAX,EAX
00443026  7E 1E                     JLE 0x00443046
00443028  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
LAB_0044302b:
0044302B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044302E  8B D6                     MOV EDX,ESI
00443030  51                        PUSH ECX
00443031  8B CF                     MOV ECX,EDI
00443033  E8 38 9C 26 00            CALL 0x006acc70
00443038  66 39 5D FC               CMP word ptr [EBP + -0x4],BX
0044303C  75 08                     JNZ 0x00443046
0044303E  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00443041  46                        INC ESI
00443042  3B F0                     CMP ESI,EAX
00443044  7C E5                     JL 0x0044302b
LAB_00443046:
00443046  3B 75 CC                  CMP ESI,dword ptr [EBP + -0x34]
00443049  75 1B                     JNZ 0x00443066
0044304B  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00443051  68 07 25 00 00            PUSH 0x2507
00443056  68 04 60 7A 00            PUSH 0x7a6004
0044305B  52                        PUSH EDX
0044305C  68 09 00 FE AF            PUSH 0xaffe0009
00443061  E8 DA 2D 26 00            CALL 0x006a5e40
LAB_00443066:
00443066  6A 01                     PUSH 0x1
00443068  6A 24                     PUSH 0x24
0044306A  6A 00                     PUSH 0x0
0044306C  6A 00                     PUSH 0x0
0044306E  E8 1D B2 26 00            CALL 0x006ae290
00443073  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
00443076  33 DB                     XOR EBX,EBX
00443078  85 C9                     TEST ECX,ECX
0044307A  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0044307D  0F 8E AA 00 00 00         JLE 0x0044312d
LAB_00443083:
00443083  8B 4D 80                  MOV ECX,dword ptr [EBP + -0x80]
00443086  8D 45 94                  LEA EAX,[EBP + -0x6c]
00443089  50                        PUSH EAX
0044308A  8B D3                     MOV EDX,EBX
0044308C  E8 DF 9B 26 00            CALL 0x006acc70
00443091  66 81 7D 9A FF FF         CMP word ptr [EBP + -0x66],0xffff
00443097  0F 84 81 00 00 00         JZ 0x0044311e
0044309D  66 81 7D A2 FF FF         CMP word ptr [EBP + -0x5e],0xffff
004430A3  74 79                     JZ 0x0044311e
004430A5  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004430A8  33 FF                     XOR EDI,EDI
004430AA  33 F6                     XOR ESI,ESI
004430AC  85 C0                     TEST EAX,EAX
004430AE  7E 27                     JLE 0x004430d7
LAB_004430b0:
004430B0  8D 4D FC                  LEA ECX,[EBP + -0x4]
004430B3  8B D6                     MOV EDX,ESI
004430B5  51                        PUSH ECX
004430B6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004430B9  E8 B2 9B 26 00            CALL 0x006acc70
004430BE  66 8B 55 9A               MOV DX,word ptr [EBP + -0x66]
004430C2  66 3B 55 FC               CMP DX,word ptr [EBP + -0x4]
004430C6  74 0A                     JZ 0x004430d2
004430C8  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004430CB  46                        INC ESI
004430CC  3B F0                     CMP ESI,EAX
004430CE  7C E0                     JL 0x004430b0
004430D0  EB 05                     JMP 0x004430d7
LAB_004430d2:
004430D2  BF 01 00 00 00            MOV EDI,0x1
LAB_004430d7:
004430D7  85 FF                     TEST EDI,EDI
004430D9  74 43                     JZ 0x0044311e
004430DB  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004430DE  33 FF                     XOR EDI,EDI
004430E0  33 F6                     XOR ESI,ESI
004430E2  85 C0                     TEST EAX,EAX
004430E4  7E 27                     JLE 0x0044310d
LAB_004430e6:
004430E6  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
004430E9  8D 45 FC                  LEA EAX,[EBP + -0x4]
004430EC  50                        PUSH EAX
004430ED  8B D6                     MOV EDX,ESI
004430EF  E8 7C 9B 26 00            CALL 0x006acc70
004430F4  66 8B 4D A2               MOV CX,word ptr [EBP + -0x5e]
004430F8  66 3B 4D FC               CMP CX,word ptr [EBP + -0x4]
004430FC  74 0A                     JZ 0x00443108
004430FE  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00443101  46                        INC ESI
00443102  3B F0                     CMP ESI,EAX
00443104  7C E0                     JL 0x004430e6
00443106  EB 05                     JMP 0x0044310d
LAB_00443108:
00443108  BF 01 00 00 00            MOV EDI,0x1
LAB_0044310d:
0044310D  85 FF                     TEST EDI,EDI
0044310F  74 0D                     JZ 0x0044311e
00443111  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00443114  8D 55 94                  LEA EDX,[EBP + -0x6c]
00443117  52                        PUSH EDX
00443118  50                        PUSH EAX
00443119  E8 A2 B0 26 00            CALL 0x006ae1c0
LAB_0044311e:
0044311E  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00443121  43                        INC EBX
00443122  3B D8                     CMP EBX,EAX
00443124  0F 8C 59 FF FF FF         JL 0x00443083
0044312A  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
LAB_0044312d:
0044312D  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00443130  85 C9                     TEST ECX,ECX
00443132  75 46                     JNZ 0x0044317a
00443134  50                        PUSH EAX
00443135  E8 D6 AF 26 00            CALL 0x006ae110
0044313A  68 FC 81 7A 00            PUSH 0x7a81fc
0044313F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00443144  6A 00                     PUSH 0x0
00443146  6A 00                     PUSH 0x0
00443148  68 22 25 00 00            PUSH 0x2522
0044314D  68 04 60 7A 00            PUSH 0x7a6004
00443152  E8 79 A3 26 00            CALL 0x006ad4d0
00443157  83 C4 18                  ADD ESP,0x18
0044315A  85 C0                     TEST EAX,EAX
0044315C  74 01                     JZ 0x0044315f
0044315E  CC                        INT3
LAB_0044315f:
0044315F  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00443165  68 24 25 00 00            PUSH 0x2524
0044316A  68 04 60 7A 00            PUSH 0x7a6004
0044316F  51                        PUSH ECX
00443170  68 09 00 FE AF            PUSH 0xaffe0009
00443175  E8 C6 2C 26 00            CALL 0x006a5e40
LAB_0044317a:
0044317A  8B 55 C8                  MOV EDX,dword ptr [EBP + -0x38]
0044317D  6A 01                     PUSH 0x1
0044317F  6A 06                     PUSH 0x6
00443181  52                        PUSH EDX
00443182  6A 00                     PUSH 0x0
00443184  E8 07 B1 26 00            CALL 0x006ae290
00443189  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
0044318C  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0044318F  6A 01                     PUSH 0x1
00443191  6A 06                     PUSH 0x6
00443193  50                        PUSH EAX
00443194  6A 00                     PUSH 0x0
00443196  E8 F5 B0 26 00            CALL 0x006ae290
0044319B  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0044319E  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004431A2  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004431A5  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004431A8  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004431AB  C1 E1 04                  SHL ECX,0x4
004431AE  03 C8                     ADD ECX,EAX
004431B0  8B 34 4D 25 4E 7F 00      MOV ESI,dword ptr [ECX*0x2 + 0x7f4e25]
004431B7  85 F6                     TEST ESI,ESI
004431B9  89 B5 48 FF FF FF         MOV dword ptr [EBP + 0xffffff48],ESI
004431BF  75 3E                     JNZ 0x004431ff
004431C1  68 C8 81 7A 00            PUSH 0x7a81c8
004431C6  68 CC 4C 7A 00            PUSH 0x7a4ccc
004431CB  56                        PUSH ESI
004431CC  56                        PUSH ESI
004431CD  68 2C 25 00 00            PUSH 0x252c
004431D2  68 04 60 7A 00            PUSH 0x7a6004
004431D7  E8 F4 A2 26 00            CALL 0x006ad4d0
004431DC  83 C4 18                  ADD ESP,0x18
004431DF  85 C0                     TEST EAX,EAX
004431E1  74 01                     JZ 0x004431e4
004431E3  CC                        INT3
LAB_004431e4:
004431E4  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
004431EA  68 2D 25 00 00            PUSH 0x252d
004431EF  68 04 60 7A 00            PUSH 0x7a6004
004431F4  52                        PUSH EDX
004431F5  68 04 00 FE AF            PUSH 0xaffe0004
004431FA  E8 41 2C 26 00            CALL 0x006a5e40
LAB_004431ff:
004431FF  8B 5E 0C                  MOV EBX,dword ptr [ESI + 0xc]
00443202  33 FF                     XOR EDI,EDI
00443204  85 DB                     TEST EBX,EBX
00443206  89 5D DC                  MOV dword ptr [EBP + -0x24],EBX
00443209  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
0044320C  0F 8E F1 03 00 00         JLE 0x00443603
LAB_00443212:
00443212  8D 45 E8                  LEA EAX,[EBP + -0x18]
00443215  8B D7                     MOV EDX,EDI
00443217  50                        PUSH EAX
00443218  8B CE                     MOV ECX,ESI
0044321A  E8 51 9A 26 00            CALL 0x006acc70
0044321F  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
00443222  85 C9                     TEST ECX,ECX
00443224  0F 84 CD 03 00 00         JZ 0x004435f7
0044322A  8B 11                     MOV EDX,dword ptr [ECX]
0044322C  FF 52 0C                  CALL dword ptr [EDX + 0xc]
0044322F  83 F8 08                  CMP EAX,0x8
00443232  0F 85 BF 03 00 00         JNZ 0x004435f7
00443238  8B 4D E8                  MOV ECX,dword ptr [EBP + -0x18]
0044323B  E8 75 FB FB FF            CALL 0x00402db5
00443240  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
00443243  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00443246  85 C9                     TEST ECX,ECX
00443248  89 8D 4C FF FF FF         MOV dword ptr [EBP + 0xffffff4c],ECX
0044324E  0F 86 9D 03 00 00         JBE 0x004435f1
00443254  33 D2                     XOR EDX,EDX
00443256  85 C9                     TEST ECX,ECX
00443258  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
0044325B  0F 8E 90 03 00 00         JLE 0x004435f1
00443261  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00443264  EB 06                     JMP 0x0044326c
LAB_00443266:
00443266  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00443269  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
LAB_0044326c:
0044326C  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044326F  51                        PUSH ECX
00443270  8B C8                     MOV ECX,EAX
00443272  E8 F9 99 26 00            CALL 0x006acc70
00443277  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044327A  66 3D FF FF               CMP AX,0xffff
0044327E  0F 84 49 03 00 00         JZ 0x004435cd
00443284  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00443287  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
0044328D  6A 01                     PUSH 0x1
0044328F  50                        PUSH EAX
00443290  52                        PUSH EDX
00443291  E8 24 F6 FB FF            CALL 0x004028ba
00443296  8B F0                     MOV ESI,EAX
00443298  85 F6                     TEST ESI,ESI
0044329A  89 75 C4                  MOV dword ptr [EBP + -0x3c],ESI
0044329D  75 3D                     JNZ 0x004432dc
0044329F  68 98 81 7A 00            PUSH 0x7a8198
004432A4  68 CC 4C 7A 00            PUSH 0x7a4ccc
004432A9  50                        PUSH EAX
004432AA  50                        PUSH EAX
004432AB  68 39 25 00 00            PUSH 0x2539
004432B0  68 04 60 7A 00            PUSH 0x7a6004
004432B5  E8 16 A2 26 00            CALL 0x006ad4d0
004432BA  83 C4 18                  ADD ESP,0x18
004432BD  85 C0                     TEST EAX,EAX
004432BF  74 01                     JZ 0x004432c2
004432C1  CC                        INT3
LAB_004432c2:
004432C2  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
004432C7  68 3A 25 00 00            PUSH 0x253a
004432CC  68 04 60 7A 00            PUSH 0x7a6004
004432D1  50                        PUSH EAX
004432D2  68 04 00 FE AF            PUSH 0xaffe0004
004432D7  E8 64 2B 26 00            CALL 0x006a5e40
LAB_004432dc:
004432DC  8B 16                     MOV EDX,dword ptr [ESI]
004432DE  8B CE                     MOV ECX,ESI
004432E0  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004432E3  83 F8 08                  CMP EAX,0x8
004432E6  74 1C                     JZ 0x00443304
004432E8  8B 06                     MOV EAX,dword ptr [ESI]
004432EA  8B CE                     MOV ECX,ESI
004432EC  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
004432EF  83 F8 14                  CMP EAX,0x14
004432F2  74 10                     JZ 0x00443304
004432F4  8B 16                     MOV EDX,dword ptr [ESI]
004432F6  8B CE                     MOV ECX,ESI
004432F8  FF 52 2C                  CALL dword ptr [EDX + 0x2c]
004432FB  83 F8 1A                  CMP EAX,0x1a
004432FE  0F 85 C9 02 00 00         JNZ 0x004435cd
LAB_00443304:
00443304  8B CE                     MOV ECX,ESI
00443306  E8 D1 FB FB FF            CALL 0x00402edc
0044330B  83 F8 0C                  CMP EAX,0xc
0044330E  0F 85 B9 02 00 00         JNZ 0x004435cd
00443314  33 FF                     XOR EDI,EDI
00443316  85 DB                     TEST EBX,EBX
00443318  7E 1D                     JLE 0x00443337
LAB_0044331a:
0044331A  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0044331D  8D 45 F2                  LEA EAX,[EBP + -0xe]
00443320  50                        PUSH EAX
00443321  8B D7                     MOV EDX,EDI
00443323  E8 48 99 26 00            CALL 0x006acc70
00443328  66 8B 4D FC               MOV CX,word ptr [EBP + -0x4]
0044332C  66 3B 4D F2               CMP CX,word ptr [EBP + -0xe]
00443330  74 05                     JZ 0x00443337
00443332  47                        INC EDI
00443333  3B FB                     CMP EDI,EBX
00443335  7C E3                     JL 0x0044331a
LAB_00443337:
00443337  3B FB                     CMP EDI,EBX
00443339  0F 8C 8E 02 00 00         JL 0x004435cd
0044333F  8D 95 68 FE FF FF         LEA EDX,[EBP + 0xfffffe68]
00443345  8B CE                     MOV ECX,ESI
00443347  52                        PUSH EDX
00443348  E8 80 F1 FB FF            CALL 0x004024cd
0044334D  B9 10 00 00 00            MOV ECX,0x10
00443352  8B F0                     MOV ESI,EAX
00443354  8D BD AC FE FF FF         LEA EDI,[EBP + 0xfffffeac]
0044335A  83 C8 FF                  OR EAX,0xffffffff
0044335D  F3 A5                     MOVSD.REP ES:EDI,ESI
0044335F  66 A5                     MOVSW ES:EDI,ESI
00443361  39 85 B2 FE FF FF         CMP dword ptr [EBP + 0xfffffeb2],EAX
00443367  0F 84 60 02 00 00         JZ 0x004435cd
0044336D  39 85 BC FE FF FF         CMP dword ptr [EBP + 0xfffffebc],EAX
00443373  0F 84 54 02 00 00         JZ 0x004435cd
00443379  66 8B 85 AC FE FF FF      MOV AX,word ptr [EBP + 0xfffffeac]
00443380  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
00443387  66 85 C0                  TEST AX,AX
0044338A  7C 57                     JL 0x004433e3
0044338C  66 3B C6                  CMP AX,SI
0044338F  7D 52                     JGE 0x004433e3
00443391  66 8B 95 AE FE FF FF      MOV DX,word ptr [EBP + 0xfffffeae]
00443398  66 85 D2                  TEST DX,DX
0044339B  7C 46                     JL 0x004433e3
0044339D  66 3B 15 42 B2 7F 00      CMP DX,word ptr [0x007fb242]
004433A4  7D 3D                     JGE 0x004433e3
004433A6  66 8B 8D B0 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb0]
004433AD  66 85 C9                  TEST CX,CX
004433B0  7C 31                     JL 0x004433e3
004433B2  66 3B 0D 44 B2 7F 00      CMP CX,word ptr [0x007fb244]
004433B9  7D 28                     JGE 0x004433e3
004433BB  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004433C2  0F BF C9                  MOVSX ECX,CX
004433C5  0F BF D2                  MOVSX EDX,DX
004433C8  0F AF CF                  IMUL ECX,EDI
004433CB  0F BF F6                  MOVSX ESI,SI
004433CE  0F AF D6                  IMUL EDX,ESI
004433D1  0F BF C0                  MOVSX EAX,AX
004433D4  03 CA                     ADD ECX,EDX
004433D6  8B 15 48 B2 7F 00         MOV EDX,dword ptr [0x007fb248]
004433DC  03 C8                     ADD ECX,EAX
004433DE  8B 04 CA                  MOV EAX,dword ptr [EDX + ECX*0x8]
004433E1  EB 02                     JMP 0x004433e5
LAB_004433e3:
004433E3  33 C0                     XOR EAX,EAX
LAB_004433e5:
004433E5  85 C0                     TEST EAX,EAX
004433E7  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
004433EA  0F 84 DD 01 00 00         JZ 0x004435cd
004433F0  66 8B 40 32               MOV AX,word ptr [EAX + 0x32]
004433F4  33 F6                     XOR ESI,ESI
004433F6  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
004433F9  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
004433FC  85 C0                     TEST EAX,EAX
004433FE  0F 8E 9E 00 00 00         JLE 0x004434a2
00443404  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00443407  8B D8                     MOV EBX,EAX
LAB_00443409:
00443409  8D 4D F2                  LEA ECX,[EBP + -0xe]
0044340C  8B D6                     MOV EDX,ESI
0044340E  51                        PUSH ECX
0044340F  8B CF                     MOV ECX,EDI
00443411  E8 5A 98 26 00            CALL 0x006acc70
00443416  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00443419  66 3B 45 F2               CMP AX,word ptr [EBP + -0xe]
0044341D  74 07                     JZ 0x00443426
0044341F  46                        INC ESI
00443420  3B F3                     CMP ESI,EBX
00443422  7C E5                     JL 0x00443409
00443424  EB 7C                     JMP 0x004434a2
LAB_00443426:
00443426  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443429  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0044342C  85 FF                     TEST EDI,EDI
0044342E  76 59                     JBE 0x00443489
00443430  8B 9D C6 FE FF FF         MOV EBX,dword ptr [EBP + 0xfffffec6]
00443436  33 F6                     XOR ESI,ESI
00443438  85 FF                     TEST EDI,EDI
0044343A  7E 37                     JLE 0x00443473
LAB_0044343c:
0044343C  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0044343F  8D 55 F4                  LEA EDX,[EBP + -0xc]
00443442  52                        PUSH EDX
00443443  8B D6                     MOV EDX,ESI
00443445  E8 26 98 26 00            CALL 0x006acc70
0044344A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044344D  66 39 45 F4               CMP word ptr [EBP + -0xc],AX
00443451  74 07                     JZ 0x0044345a
00443453  46                        INC ESI
00443454  3B F7                     CMP ESI,EDI
00443456  7C E4                     JL 0x0044343c
00443458  EB 19                     JMP 0x00443473
LAB_0044345a:
0044345A  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
0044345D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443460  03 C3                     ADD EAX,EBX
00443462  89 45 F6                  MOV dword ptr [EBP + -0xa],EAX
00443465  8D 45 F4                  LEA EAX,[EBP + -0xc]
00443468  50                        PUSH EAX
00443469  56                        PUSH ESI
0044346A  51                        PUSH ECX
0044346B  E8 D0 AC 26 00            CALL 0x006ae140
00443470  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00443473:
00443473  3B F7                     CMP ESI,EDI
00443475  75 2B                     JNZ 0x004434a2
00443477  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044347A  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0044347E  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00443481  52                        PUSH EDX
00443482  56                        PUSH ESI
00443483  89 5D F6                  MOV dword ptr [EBP + -0xa],EBX
00443486  50                        PUSH EAX
00443487  EB 14                     JMP 0x0044349d
LAB_00443489:
00443489  8B 95 C6 FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffec6]
0044348F  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
00443493  8D 45 F4                  LEA EAX,[EBP + -0xc]
00443496  89 55 F6                  MOV dword ptr [EBP + -0xa],EDX
00443499  50                        PUSH EAX
0044349A  6A 00                     PUSH 0x0
0044349C  51                        PUSH ECX
LAB_0044349d:
0044349D  E8 9E AC 26 00            CALL 0x006ae140
LAB_004434a2:
004434A2  66 8B 95 B6 FE FF FF      MOV DX,word ptr [EBP + 0xfffffeb6]
004434A9  66 85 D2                  TEST DX,DX
004434AC  7C 5E                     JL 0x0044350c
004434AE  66 8B 35 40 B2 7F 00      MOV SI,word ptr [0x007fb240]
004434B5  66 3B D6                  CMP DX,SI
004434B8  7D 52                     JGE 0x0044350c
004434BA  66 8B 8D B8 FE FF FF      MOV CX,word ptr [EBP + 0xfffffeb8]
004434C1  66 85 C9                  TEST CX,CX
004434C4  7C 46                     JL 0x0044350c
004434C6  66 3B 0D 42 B2 7F 00      CMP CX,word ptr [0x007fb242]
004434CD  7D 3D                     JGE 0x0044350c
004434CF  66 8B 85 BA FE FF FF      MOV AX,word ptr [EBP + 0xfffffeba]
004434D6  66 85 C0                  TEST AX,AX
004434D9  7C 31                     JL 0x0044350c
004434DB  66 3B 05 44 B2 7F 00      CMP AX,word ptr [0x007fb244]
004434E2  7D 28                     JGE 0x0044350c
004434E4  0F BF 3D 46 B2 7F 00      MOVSX EDI,word ptr [0x007fb246]
004434EB  0F BF C0                  MOVSX EAX,AX
004434EE  0F BF C9                  MOVSX ECX,CX
004434F1  0F AF C7                  IMUL EAX,EDI
004434F4  0F BF F6                  MOVSX ESI,SI
004434F7  0F AF CE                  IMUL ECX,ESI
004434FA  0F BF D2                  MOVSX EDX,DX
004434FD  03 C1                     ADD EAX,ECX
004434FF  8B 0D 48 B2 7F 00         MOV ECX,dword ptr [0x007fb248]
00443505  03 C2                     ADD EAX,EDX
00443507  8B 04 C1                  MOV EAX,dword ptr [ECX + EAX*0x8]
0044350A  EB 02                     JMP 0x0044350e
LAB_0044350c:
0044350C  33 C0                     XOR EAX,EAX
LAB_0044350e:
0044350E  85 C0                     TEST EAX,EAX
00443510  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00443513  0F 84 B4 00 00 00         JZ 0x004435cd
00443519  66 8B 50 32               MOV DX,word ptr [EAX + 0x32]
0044351D  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00443520  33 F6                     XOR ESI,ESI
00443522  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00443525  85 C0                     TEST EAX,EAX
00443527  0F 8E A0 00 00 00         JLE 0x004435cd
0044352D  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00443530  8B D8                     MOV EBX,EAX
LAB_00443532:
00443532  8D 45 F2                  LEA EAX,[EBP + -0xe]
00443535  8B D6                     MOV EDX,ESI
00443537  50                        PUSH EAX
00443538  8B CF                     MOV ECX,EDI
0044353A  E8 31 97 26 00            CALL 0x006acc70
0044353F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00443542  66 3B 45 F2               CMP AX,word ptr [EBP + -0xe]
00443546  74 07                     JZ 0x0044354f
00443548  46                        INC ESI
00443549  3B F3                     CMP ESI,EBX
0044354B  7C E5                     JL 0x00443532
0044354D  EB 7E                     JMP 0x004435cd
LAB_0044354f:
0044354F  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
00443552  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
00443555  85 FF                     TEST EDI,EDI
00443557  76 5B                     JBE 0x004435b4
00443559  33 F6                     XOR ESI,ESI
0044355B  85 FF                     TEST EDI,EDI
0044355D  7E 39                     JLE 0x00443598
LAB_0044355f:
0044355F  8D 4D F4                  LEA ECX,[EBP + -0xc]
00443562  8B D6                     MOV EDX,ESI
00443564  51                        PUSH ECX
00443565  8B CB                     MOV ECX,EBX
00443567  E8 04 97 26 00            CALL 0x006acc70
0044356C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044356F  66 39 45 F4               CMP word ptr [EBP + -0xc],AX
00443573  74 07                     JZ 0x0044357c
00443575  46                        INC ESI
00443576  3B F7                     CMP ESI,EDI
00443578  7C E5                     JL 0x0044355f
0044357A  EB 1C                     JMP 0x00443598
LAB_0044357c:
0044357C  8B 95 CA FE FF FF         MOV EDX,dword ptr [EBP + 0xfffffeca]
00443582  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
00443585  03 C2                     ADD EAX,EDX
00443587  89 45 F6                  MOV dword ptr [EBP + -0xa],EAX
0044358A  8D 45 F4                  LEA EAX,[EBP + -0xc]
0044358D  50                        PUSH EAX
0044358E  56                        PUSH ESI
0044358F  53                        PUSH EBX
00443590  E8 AB AB 26 00            CALL 0x006ae140
00443595  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_00443598:
00443598  3B F7                     CMP ESI,EDI
0044359A  75 31                     JNZ 0x004435cd
0044359C  8B 8D CA FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeca]
004435A2  8D 55 F4                  LEA EDX,[EBP + -0xc]
004435A5  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004435A9  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004435AC  52                        PUSH EDX
004435AD  56                        PUSH ESI
004435AE  89 4D F6                  MOV dword ptr [EBP + -0xa],ECX
004435B1  50                        PUSH EAX
004435B2  EB 14                     JMP 0x004435c8
LAB_004435b4:
004435B4  8B 8D CA FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffeca]
004435BA  8D 55 F4                  LEA EDX,[EBP + -0xc]
004435BD  52                        PUSH EDX
004435BE  6A 00                     PUSH 0x0
004435C0  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004435C4  89 4D F6                  MOV dword ptr [EBP + -0xa],ECX
004435C7  53                        PUSH EBX
LAB_004435c8:
004435C8  E8 73 AB 26 00            CALL 0x006ae140
STAllPlayersC::_AssignMDPairs::cf_common_join_004435CD:
004435CD  8B 55 C0                  MOV EDX,dword ptr [EBP + -0x40]
004435D0  8B 85 4C FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff4c]
004435D6  42                        INC EDX
004435D7  3B D0                     CMP EDX,EAX
004435D9  89 55 C0                  MOV dword ptr [EBP + -0x40],EDX
004435DC  0F 8C 84 FC FF FF         JL 0x00443266
004435E2  8B 7D E0                  MOV EDI,dword ptr [EBP + -0x20]
004435E5  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
004435E8  8B B5 48 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff48]
004435EE  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
LAB_004435f1:
004435F1  50                        PUSH EAX
004435F2  E8 19 AB 26 00            CALL 0x006ae110
LAB_004435f7:
004435F7  47                        INC EDI
004435F8  3B FB                     CMP EDI,EBX
004435FA  89 7D E0                  MOV dword ptr [EBP + -0x20],EDI
004435FD  0F 8C 0F FC FF FF         JL 0x00443212
LAB_00443603:
00443603  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
00443606  33 D2                     XOR EDX,EDX
00443608  85 C0                     TEST EAX,EAX
0044360A  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0044360D  7E 75                     JLE 0x00443684
LAB_0044360f:
0044360F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00443612  8D 45 FC                  LEA EAX,[EBP + -0x4]
00443615  50                        PUSH EAX
00443616  E8 55 96 26 00            CALL 0x006acc70
0044361B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044361E  66 3D FF FF               CMP AX,0xffff
00443622  74 52                     JZ 0x00443676
00443624  8B 5D E4                  MOV EBX,dword ptr [EBP + -0x1c]
00443627  33 F6                     XOR ESI,ESI
00443629  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
0044362C  3B FE                     CMP EDI,ESI
0044362E  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
00443631  76 32                     JBE 0x00443665
00443633  7E 1B                     JLE 0x00443650
LAB_00443635:
00443635  8D 4D F4                  LEA ECX,[EBP + -0xc]
00443638  8B D6                     MOV EDX,ESI
0044363A  51                        PUSH ECX
0044363B  8B CB                     MOV ECX,EBX
0044363D  E8 2E 96 26 00            CALL 0x006acc70
00443642  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00443645  66 39 45 F4               CMP word ptr [EBP + -0xc],AX
00443649  74 05                     JZ 0x00443650
0044364B  46                        INC ESI
0044364C  3B F7                     CMP ESI,EDI
0044364E  7C E5                     JL 0x00443635
LAB_00443650:
00443650  3B F7                     CMP ESI,EDI
00443652  75 22                     JNZ 0x00443676
00443654  8D 55 F4                  LEA EDX,[EBP + -0xc]
00443657  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
0044365B  C7 45 F6 00 00 00 00      MOV dword ptr [EBP + -0xa],0x0
00443662  52                        PUSH EDX
00443663  EB 0B                     JMP 0x00443670
LAB_00443665:
00443665  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
00443669  8D 45 F4                  LEA EAX,[EBP + -0xc]
0044366C  89 75 F6                  MOV dword ptr [EBP + -0xa],ESI
0044366F  50                        PUSH EAX
LAB_00443670:
00443670  53                        PUSH EBX
00443671  E8 4A AB 26 00            CALL 0x006ae1c0
LAB_00443676:
00443676  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00443679  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0044367C  42                        INC EDX
0044367D  3B D0                     CMP EDX,EAX
0044367F  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00443682  7C 8B                     JL 0x0044360f
LAB_00443684:
00443684  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00443687  33 D2                     XOR EDX,EDX
00443689  85 C0                     TEST EAX,EAX
0044368B  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
0044368E  7E 75                     JLE 0x00443705
LAB_00443690:
00443690  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443693  51                        PUSH ECX
00443694  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00443697  E8 D4 95 26 00            CALL 0x006acc70
0044369C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044369F  66 3D FF FF               CMP AX,0xffff
004436A3  74 52                     JZ 0x004436f7
004436A5  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
004436A8  33 F6                     XOR ESI,ESI
004436AA  8B 7B 0C                  MOV EDI,dword ptr [EBX + 0xc]
004436AD  3B FE                     CMP EDI,ESI
004436AF  89 7D DC                  MOV dword ptr [EBP + -0x24],EDI
004436B2  76 32                     JBE 0x004436e6
004436B4  7E 1B                     JLE 0x004436d1
LAB_004436b6:
004436B6  8D 55 F4                  LEA EDX,[EBP + -0xc]
004436B9  8B CB                     MOV ECX,EBX
004436BB  52                        PUSH EDX
004436BC  8B D6                     MOV EDX,ESI
004436BE  E8 AD 95 26 00            CALL 0x006acc70
004436C3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
004436C6  66 39 45 F4               CMP word ptr [EBP + -0xc],AX
004436CA  74 05                     JZ 0x004436d1
004436CC  46                        INC ESI
004436CD  3B F7                     CMP ESI,EDI
004436CF  7C E5                     JL 0x004436b6
LAB_004436d1:
004436D1  3B F7                     CMP ESI,EDI
004436D3  75 22                     JNZ 0x004436f7
004436D5  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004436D9  8D 45 F4                  LEA EAX,[EBP + -0xc]
004436DC  C7 45 F6 00 00 00 00      MOV dword ptr [EBP + -0xa],0x0
004436E3  50                        PUSH EAX
004436E4  EB 0B                     JMP 0x004436f1
LAB_004436e6:
004436E6  8D 4D F4                  LEA ECX,[EBP + -0xc]
004436E9  66 89 45 F4               MOV word ptr [EBP + -0xc],AX
004436ED  89 75 F6                  MOV dword ptr [EBP + -0xa],ESI
004436F0  51                        PUSH ECX
LAB_004436f1:
004436F1  53                        PUSH EBX
004436F2  E8 C9 AA 26 00            CALL 0x006ae1c0
LAB_004436f7:
004436F7  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
004436FA  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
004436FD  42                        INC EDX
004436FE  3B D0                     CMP EDX,EAX
00443700  89 55 E0                  MOV dword ptr [EBP + -0x20],EDX
00443703  7C 8B                     JL 0x00443690
LAB_00443705:
00443705  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
00443708  33 DB                     XOR EBX,EBX
0044370A  8B 42 0C                  MOV EAX,dword ptr [EDX + 0xc]
0044370D  85 C0                     TEST EAX,EAX
0044370F  89 45 DC                  MOV dword ptr [EBP + -0x24],EAX
00443712  0F 8E 18 01 00 00         JLE 0x00443830
LAB_00443718:
00443718  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0044371B  8D 45 94                  LEA EAX,[EBP + -0x6c]
0044371E  50                        PUSH EAX
0044371F  8B D3                     MOV EDX,EBX
00443721  E8 4A 95 26 00            CALL 0x006acc70
00443726  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443729  33 F6                     XOR ESI,ESI
0044372B  8B 79 0C                  MOV EDI,dword ptr [ECX + 0xc]
0044372E  85 FF                     TEST EDI,EDI
00443730  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00443733  7E 25                     JLE 0x0044375a
LAB_00443735:
00443735  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443738  8D 55 F4                  LEA EDX,[EBP + -0xc]
0044373B  52                        PUSH EDX
0044373C  8B D6                     MOV EDX,ESI
0044373E  E8 2D 95 26 00            CALL 0x006acc70
00443743  66 8B 45 F4               MOV AX,word ptr [EBP + -0xc]
00443747  66 3B 45 9A               CMP AX,word ptr [EBP + -0x66]
0044374B  74 07                     JZ 0x00443754
0044374D  46                        INC ESI
0044374E  3B F7                     CMP ESI,EDI
00443750  7C E3                     JL 0x00443735
00443752  EB 06                     JMP 0x0044375a
LAB_00443754:
00443754  8B 4D F6                  MOV ECX,dword ptr [EBP + -0xa]
00443757  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
LAB_0044375a:
0044375A  3B F7                     CMP ESI,EDI
0044375C  75 40                     JNZ 0x0044379e
0044375E  68 68 81 7A 00            PUSH 0x7a8168
00443763  68 CC 4C 7A 00            PUSH 0x7a4ccc
00443768  6A 00                     PUSH 0x0
0044376A  6A 00                     PUSH 0x0
0044376C  68 A4 25 00 00            PUSH 0x25a4
00443771  68 04 60 7A 00            PUSH 0x7a6004
00443776  E8 55 9D 26 00            CALL 0x006ad4d0
0044377B  83 C4 18                  ADD ESP,0x18
0044377E  85 C0                     TEST EAX,EAX
00443780  74 01                     JZ 0x00443783
00443782  CC                        INT3
LAB_00443783:
00443783  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00443789  68 A5 25 00 00            PUSH 0x25a5
0044378E  68 04 60 7A 00            PUSH 0x7a6004
00443793  52                        PUSH EDX
00443794  68 08 00 FE AF            PUSH 0xaffe0008
00443799  E8 A2 26 26 00            CALL 0x006a5e40
LAB_0044379e:
0044379E  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
004437A1  33 F6                     XOR ESI,ESI
004437A3  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
004437A6  85 FF                     TEST EDI,EDI
004437A8  89 7D D8                  MOV dword ptr [EBP + -0x28],EDI
004437AB  7E 25                     JLE 0x004437d2
LAB_004437ad:
004437AD  8D 4D F4                  LEA ECX,[EBP + -0xc]
004437B0  8B D6                     MOV EDX,ESI
004437B2  51                        PUSH ECX
004437B3  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
004437B6  E8 B5 94 26 00            CALL 0x006acc70
004437BB  66 8B 55 F4               MOV DX,word ptr [EBP + -0xc]
004437BF  66 3B 55 A2               CMP DX,word ptr [EBP + -0x5e]
004437C3  74 07                     JZ 0x004437cc
004437C5  46                        INC ESI
004437C6  3B F7                     CMP ESI,EDI
004437C8  7C E3                     JL 0x004437ad
004437CA  EB 06                     JMP 0x004437d2
LAB_004437cc:
004437CC  8B 45 F6                  MOV EAX,dword ptr [EBP + -0xa]
004437CF  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
LAB_004437d2:
004437D2  3B F7                     CMP ESI,EDI
004437D4  75 40                     JNZ 0x00443816
004437D6  68 38 81 7A 00            PUSH 0x7a8138
004437DB  68 CC 4C 7A 00            PUSH 0x7a4ccc
004437E0  6A 00                     PUSH 0x0
004437E2  6A 00                     PUSH 0x0
004437E4  68 AD 25 00 00            PUSH 0x25ad
004437E9  68 04 60 7A 00            PUSH 0x7a6004
004437EE  E8 DD 9C 26 00            CALL 0x006ad4d0
004437F3  83 C4 18                  ADD ESP,0x18
004437F6  85 C0                     TEST EAX,EAX
004437F8  74 01                     JZ 0x004437fb
004437FA  CC                        INT3
LAB_004437fb:
004437FB  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00443801  68 AE 25 00 00            PUSH 0x25ae
00443806  68 04 60 7A 00            PUSH 0x7a6004
0044380B  51                        PUSH ECX
0044380C  68 08 00 FE AF            PUSH 0xaffe0008
00443811  E8 2A 26 26 00            CALL 0x006a5e40
LAB_00443816:
00443816  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
00443819  8D 55 94                  LEA EDX,[EBP + -0x6c]
0044381C  52                        PUSH EDX
0044381D  53                        PUSH EBX
0044381E  50                        PUSH EAX
0044381F  E8 1C A9 26 00            CALL 0x006ae140
00443824  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00443827  43                        INC EBX
00443828  3B D8                     CMP EBX,EAX
0044382A  0F 8C E8 FE FF FF         JL 0x00443718
LAB_00443830:
00443830  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443833  51                        PUSH ECX
00443834  E8 D7 A8 26 00            CALL 0x006ae110
00443839  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0044383C  52                        PUSH EDX
0044383D  E8 CE A8 26 00            CALL 0x006ae110
00443842  8B 5D CC                  MOV EBX,dword ptr [EBP + -0x34]
00443845  33 FF                     XOR EDI,EDI
00443847  33 F6                     XOR ESI,ESI
00443849  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
0044384C  85 DB                     TEST EBX,EBX
0044384E  7E 1F                     JLE 0x0044386f
LAB_00443850:
00443850  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00443853  8D 45 FC                  LEA EAX,[EBP + -0x4]
00443856  50                        PUSH EAX
00443857  8B D6                     MOV EDX,ESI
00443859  E8 12 94 26 00            CALL 0x006acc70
0044385E  66 81 7D FC FF FF         CMP word ptr [EBP + -0x4],0xffff
00443864  74 01                     JZ 0x00443867
00443866  47                        INC EDI
LAB_00443867:
00443867  46                        INC ESI
00443868  3B F3                     CMP ESI,EBX
0044386A  7C E4                     JL 0x00443850
0044386C  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
LAB_0044386f:
0044386F  6A 01                     PUSH 0x1
00443871  6A 24                     PUSH 0x24
00443873  57                        PUSH EDI
00443874  6A 00                     PUSH 0x0
00443876  E8 15 AA 26 00            CALL 0x006ae290
0044387B  85 FF                     TEST EDI,EDI
0044387D  89 45 E4                  MOV dword ptr [EBP + -0x1c],EAX
00443880  0F 8E 69 01 00 00         JLE 0x004439ef
00443886  89 7D C0                  MOV dword ptr [EBP + -0x40],EDI
00443889  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_0044388c:
0044388C  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
0044388F  33 DB                     XOR EBX,EBX
00443891  85 C0                     TEST EAX,EAX
00443893  C7 45 BC 00 E1 F5 05      MOV dword ptr [EBP + -0x44],0x5f5e100
0044389A  0F 8E 96 00 00 00         JLE 0x00443936
004438A0  EB 03                     JMP 0x004438a5
LAB_004438a2:
004438A2  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_004438a5:
004438A5  8D 4D 94                  LEA ECX,[EBP + -0x6c]
004438A8  8B D3                     MOV EDX,EBX
004438AA  51                        PUSH ECX
004438AB  8B CF                     MOV ECX,EDI
004438AD  E8 BE 93 26 00            CALL 0x006acc70
004438B2  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004438B5  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
004438B8  8B 75 A4                  MOV ESI,dword ptr [EBP + -0x5c]
004438BB  03 C2                     ADD EAX,EDX
004438BD  83 F8 64                  CMP EAX,0x64
004438C0  7F 04                     JG 0x004438c6
004438C2  33 FF                     XOR EDI,EDI
004438C4  EB 19                     JMP 0x004438df
LAB_004438c6:
004438C6  8D 48 9C                  LEA ECX,[EAX + -0x64]
004438C9  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004438CE  0F AF CE                  IMUL ECX,ESI
004438D1  F7 E9                     IMUL ECX
004438D3  C1 FA 05                  SAR EDX,0x5
004438D6  8B CA                     MOV ECX,EDX
004438D8  C1 E9 1F                  SHR ECX,0x1f
004438DB  03 D1                     ADD EDX,ECX
004438DD  8B FA                     MOV EDI,EDX
LAB_004438df:
004438DF  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004438E2  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
004438E5  03 C2                     ADD EAX,EDX
004438E7  83 F8 64                  CMP EAX,0x64
004438EA  7F 04                     JG 0x004438f0
004438EC  33 C0                     XOR EAX,EAX
004438EE  EB 19                     JMP 0x00443909
LAB_004438f0:
004438F0  8D 48 9C                  LEA ECX,[EAX + -0x64]
004438F3  B8 1F 85 EB 51            MOV EAX,0x51eb851f
004438F8  0F AF CE                  IMUL ECX,ESI
004438FB  F7 E9                     IMUL ECX
004438FD  C1 FA 05                  SAR EDX,0x5
00443900  8B CA                     MOV ECX,EDX
00443902  C1 E9 1F                  SHR ECX,0x1f
00443905  03 D1                     ADD EDX,ECX
00443907  8B C2                     MOV EAX,EDX
LAB_00443909:
00443909  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
0044390C  89 85 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EAX
00443912  03 C6                     ADD EAX,ESI
00443914  03 C7                     ADD EAX,EDI
00443916  3B C1                     CMP EAX,ECX
00443918  7D 09                     JGE 0x00443923
0044391A  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0044391D  89 9D 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EBX
LAB_00443923:
00443923  8B 45 DC                  MOV EAX,dword ptr [EBP + -0x24]
00443926  43                        INC EBX
00443927  3B D8                     CMP EBX,EAX
00443929  0F 8C 73 FF FF FF         JL 0x004438a2
0044392F  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
00443932  8B D8                     MOV EBX,EAX
00443934  EB 03                     JMP 0x00443939
LAB_00443936:
00443936  8B 5D DC                  MOV EBX,dword ptr [EBP + -0x24]
LAB_00443939:
00443939  8B B5 50 FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff50]
0044393F  8D 55 94                  LEA EDX,[EBP + -0x6c]
00443942  52                        PUSH EDX
00443943  8B D6                     MOV EDX,ESI
00443945  8B CF                     MOV ECX,EDI
00443947  E8 24 93 26 00            CALL 0x006acc70
0044394C  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0044394F  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00443952  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00443955  03 C8                     ADD ECX,EAX
00443957  89 4D B0                  MOV dword ptr [EBP + -0x50],ECX
0044395A  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0044395D  03 D1                     ADD EDX,ECX
0044395F  89 55 B4                  MOV dword ptr [EBP + -0x4c],EDX
00443962  8D 55 94                  LEA EDX,[EBP + -0x6c]
00443965  52                        PUSH EDX
00443966  56                        PUSH ESI
00443967  57                        PUSH EDI
00443968  E8 D3 A7 26 00            CALL 0x006ae140
0044396D  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443970  8D 45 94                  LEA EAX,[EBP + -0x6c]
00443973  50                        PUSH EAX
00443974  51                        PUSH ECX
00443975  E8 46 A8 26 00            CALL 0x006ae1c0
0044397A  33 F6                     XOR ESI,ESI
0044397C  85 DB                     TEST EBX,EBX
0044397E  7E 60                     JLE 0x004439e0
LAB_00443980:
00443980  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
00443986  8B CF                     MOV ECX,EDI
00443988  52                        PUSH EDX
00443989  8B D6                     MOV EDX,ESI
0044398B  E8 E0 92 26 00            CALL 0x006acc70
00443990  66 8B 8D 5A FF FF FF      MOV CX,word ptr [EBP + 0xffffff5a]
00443997  33 C0                     XOR EAX,EAX
00443999  66 3B 4D 9A               CMP CX,word ptr [EBP + -0x66]
0044399D  75 0E                     JNZ 0x004439ad
0044399F  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
004439A2  B8 01 00 00 00            MOV EAX,0x1
004439A7  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
LAB_004439ad:
004439AD  66 8B 8D 62 FF FF FF      MOV CX,word ptr [EBP + 0xffffff62]
004439B4  66 3B 4D A2               CMP CX,word ptr [EBP + -0x5e]
004439B8  75 0E                     JNZ 0x004439c8
004439BA  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
004439BD  B8 01 00 00 00            MOV EAX,0x1
004439C2  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
LAB_004439c8:
004439C8  83 F8 01                  CMP EAX,0x1
004439CB  75 0E                     JNZ 0x004439db
004439CD  8D 85 54 FF FF FF         LEA EAX,[EBP + 0xffffff54]
004439D3  50                        PUSH EAX
004439D4  56                        PUSH ESI
004439D5  57                        PUSH EDI
004439D6  E8 65 A7 26 00            CALL 0x006ae140
LAB_004439db:
004439DB  46                        INC ESI
004439DC  3B F3                     CMP ESI,EBX
004439DE  7C A0                     JL 0x00443980
LAB_004439e0:
004439E0  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
004439E3  48                        DEC EAX
004439E4  89 45 C0                  MOV dword ptr [EBP + -0x40],EAX
004439E7  0F 85 9F FE FF FF         JNZ 0x0044388c
004439ED  EB 03                     JMP 0x004439f2
LAB_004439ef:
004439EF  8B 7D D0                  MOV EDI,dword ptr [EBP + -0x30]
LAB_004439f2:
004439F2  57                        PUSH EDI
004439F3  E8 18 A7 26 00            CALL 0x006ae110
004439F8  8B 7D CC                  MOV EDI,dword ptr [EBP + -0x34]
004439FB  6A 01                     PUSH 0x1
004439FD  6A 02                     PUSH 0x2
004439FF  57                        PUSH EDI
00443A00  6A 00                     PUSH 0x0
00443A02  E8 89 A8 26 00            CALL 0x006ae290
00443A07  33 F6                     XOR ESI,ESI
00443A09  8B D8                     MOV EBX,EAX
00443A0B  85 FF                     TEST EDI,EDI
00443A0D  7E 1E                     JLE 0x00443a2d
LAB_00443a0f:
00443A0F  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443A12  8B D6                     MOV EDX,ESI
00443A14  51                        PUSH ECX
00443A15  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00443A18  E8 53 92 26 00            CALL 0x006acc70
00443A1D  8D 55 FC                  LEA EDX,[EBP + -0x4]
00443A20  52                        PUSH EDX
00443A21  56                        PUSH ESI
00443A22  53                        PUSH EBX
00443A23  E8 18 A7 26 00            CALL 0x006ae140
00443A28  46                        INC ESI
00443A29  3B F7                     CMP ESI,EDI
00443A2B  7C E2                     JL 0x00443a0f
LAB_00443a2d:
00443A2D  8B 75 D4                  MOV ESI,dword ptr [EBP + -0x2c]
00443A30  6A 01                     PUSH 0x1
00443A32  6A 0E                     PUSH 0xe
00443A34  56                        PUSH ESI
00443A35  6A 00                     PUSH 0x0
00443A37  E8 54 A8 26 00            CALL 0x006ae290
00443A3C  85 F6                     TEST ESI,ESI
00443A3E  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00443A41  C7 45 E0 00 00 00 00      MOV dword ptr [EBP + -0x20],0x0
00443A48  0F 8E FA 00 00 00         JLE 0x00443b48
LAB_00443a4e:
00443A4E  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00443A51  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00443A54  8D 45 94                  LEA EAX,[EBP + -0x6c]
00443A57  50                        PUSH EAX
00443A58  E8 13 92 26 00            CALL 0x006acc70
00443A5D  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00443A60  33 F6                     XOR ESI,ESI
00443A62  85 C0                     TEST EAX,EAX
00443A64  BF 00 E1 F5 05            MOV EDI,0x5f5e100
00443A69  7E 75                     JLE 0x00443ae0
LAB_00443a6b:
00443A6B  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443A6E  8B D6                     MOV EDX,ESI
00443A70  51                        PUSH ECX
00443A71  8B CB                     MOV ECX,EBX
00443A73  E8 F8 91 26 00            CALL 0x006acc70
00443A78  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00443A7B  66 3D FF FF               CMP AX,0xffff
00443A7F  74 57                     JZ 0x00443ad8
00443A81  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00443A84  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00443A8A  6A 01                     PUSH 0x1
00443A8C  50                        PUSH EAX
00443A8D  52                        PUSH EDX
00443A8E  E8 27 EE FB FF            CALL 0x004028ba
00443A93  8D 4D EE                  LEA ECX,[EBP + -0x12]
00443A96  8D 55 F0                  LEA EDX,[EBP + -0x10]
00443A99  51                        PUSH ECX
00443A9A  8D 4D EC                  LEA ECX,[EBP + -0x14]
00443A9D  52                        PUSH EDX
00443A9E  51                        PUSH ECX
00443A9F  8B C8                     MOV ECX,EAX
00443AA1  89 45 C4                  MOV dword ptr [EBP + -0x3c],EAX
00443AA4  E8 1C DE FB FF            CALL 0x004018c5
00443AA9  0F BF 55 98               MOVSX EDX,word ptr [EBP + -0x68]
00443AAD  0F BF 45 96               MOVSX EAX,word ptr [EBP + -0x6a]
00443AB1  0F BF 4D 94               MOVSX ECX,word ptr [EBP + -0x6c]
00443AB5  52                        PUSH EDX
00443AB6  50                        PUSH EAX
00443AB7  0F BF 55 EE               MOVSX EDX,word ptr [EBP + -0x12]
00443ABB  0F BF 45 F0               MOVSX EAX,word ptr [EBP + -0x10]
00443ABF  51                        PUSH ECX
00443AC0  52                        PUSH EDX
00443AC1  0F BF 4D EC               MOVSX ECX,word ptr [EBP + -0x14]
00443AC5  50                        PUSH EAX
00443AC6  51                        PUSH ECX
00443AC7  E8 04 73 26 00            CALL 0x006aadd0
00443ACC  3B C7                     CMP EAX,EDI
00443ACE  7D 08                     JGE 0x00443ad8
00443AD0  8B F8                     MOV EDI,EAX
00443AD2  89 B5 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ESI
LAB_00443ad8:
00443AD8  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00443ADB  46                        INC ESI
00443ADC  3B F0                     CMP ESI,EAX
00443ADE  7C 8B                     JL 0x00443a6b
LAB_00443ae0:
00443AE0  8B B5 7C FF FF FF         MOV ESI,dword ptr [EBP + 0xffffff7c]
00443AE6  8D 55 FC                  LEA EDX,[EBP + -0x4]
00443AE9  52                        PUSH EDX
00443AEA  8B D6                     MOV EDX,ESI
00443AEC  8B CB                     MOV ECX,EBX
00443AEE  E8 7D 91 26 00            CALL 0x006acc70
00443AF3  66 8B 45 9A               MOV AX,word ptr [EBP + -0x66]
00443AF7  66 8B 55 FC               MOV DX,word ptr [EBP + -0x4]
00443AFB  66 8B 4D A2               MOV CX,word ptr [EBP + -0x5e]
00443AFF  66 89 45 84               MOV word ptr [EBP + -0x7c],AX
00443B03  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
00443B06  66 89 55 88               MOV word ptr [EBP + -0x78],DX
00443B0A  89 45 8A                  MOV dword ptr [EBP + -0x76],EAX
00443B0D  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00443B10  8D 55 84                  LEA EDX,[EBP + -0x7c]
00443B13  66 89 4D 86               MOV word ptr [EBP + -0x7a],CX
00443B17  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00443B1A  52                        PUSH EDX
00443B1B  50                        PUSH EAX
00443B1C  89 4D 8E                  MOV dword ptr [EBP + -0x72],ECX
00443B1F  E8 9C A6 26 00            CALL 0x006ae1c0
00443B24  8D 4D FC                  LEA ECX,[EBP + -0x4]
00443B27  C7 45 FC FF FF 00 00      MOV dword ptr [EBP + -0x4],0xffff
00443B2E  51                        PUSH ECX
00443B2F  56                        PUSH ESI
00443B30  53                        PUSH EBX
00443B31  E8 0A A6 26 00            CALL 0x006ae140
00443B36  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
00443B39  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00443B3C  40                        INC EAX
00443B3D  3B C1                     CMP EAX,ECX
00443B3F  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00443B42  0F 8C 06 FF FF FF         JL 0x00443a4e
LAB_00443b48:
00443B48  53                        PUSH EBX
00443B49  E8 C2 A5 26 00            CALL 0x006ae110
00443B4E  8B 55 E4                  MOV EDX,dword ptr [EBP + -0x1c]
00443B51  52                        PUSH EDX
00443B52  E8 B9 A5 26 00            CALL 0x006ae110
00443B57  8B 85 F0 FE FF FF         MOV EAX,dword ptr [EBP + 0xfffffef0]
00443B5D  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00443B62  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00443B65  5F                        POP EDI
00443B66  5E                        POP ESI
00443B67  5B                        POP EBX
00443B68  8B E5                     MOV ESP,EBP
00443B6A  5D                        POP EBP
00443B6B  C2 14 00                  RET 0x14
LAB_00443b6e:
00443B6E  8B 8D F0 FE FF FF         MOV ECX,dword ptr [EBP + 0xfffffef0]
00443B74  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
00443B7A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00443B80  74 34                     JZ 0x00443bb6
00443B82  68 14 81 7A 00            PUSH 0x7a8114
00443B87  68 CC 4C 7A 00            PUSH 0x7a4ccc
00443B8C  56                        PUSH ESI
00443B8D  53                        PUSH EBX
00443B8E  68 ED 25 00 00            PUSH 0x25ed
00443B93  68 04 60 7A 00            PUSH 0x7a6004
00443B98  E8 33 99 26 00            CALL 0x006ad4d0
00443B9D  83 C4 18                  ADD ESP,0x18
00443BA0  85 C0                     TEST EAX,EAX
00443BA2  74 01                     JZ 0x00443ba5
00443BA4  CC                        INT3
LAB_00443ba5:
00443BA5  68 EE 25 00 00            PUSH 0x25ee
00443BAA  68 04 60 7A 00            PUSH 0x7a6004
00443BAF  53                        PUSH EBX
00443BB0  56                        PUSH ESI
00443BB1  E8 8A 22 26 00            CALL 0x006a5e40
LAB_00443bb6:
00443BB6  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00443BB9  5F                        POP EDI
00443BBA  5E                        POP ESI
00443BBB  5B                        POP EBX
00443BBC  8B E5                     MOV ESP,EBP
00443BBE  5D                        POP EBP
00443BBF  C2 14 00                  RET 0x14
