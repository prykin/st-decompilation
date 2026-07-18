FUN_0072b0b0:
0072B0B0  55                        PUSH EBP
0072B0B1  8B EC                     MOV EBP,ESP
0072B0B3  6A FF                     PUSH -0x1
0072B0B5  68 30 E3 79 00            PUSH 0x79e330
0072B0BA  68 64 D9 72 00            PUSH 0x72d964
0072B0BF  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
0072B0C5  50                        PUSH EAX
0072B0C6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
0072B0CD  81 EC 88 00 00 00         SUB ESP,0x88
0072B0D3  53                        PUSH EBX
0072B0D4  56                        PUSH ESI
0072B0D5  57                        PUSH EDI
0072B0D6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
0072B0D9  33 FF                     XOR EDI,EDI
0072B0DB  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
0072B0DE  57                        PUSH EDI
0072B0DF  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0072B0E2  50                        PUSH EAX
0072B0E3  8D 4D E0                  LEA ECX,[EBP + -0x20]
0072B0E6  51                        PUSH ECX
0072B0E7  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B0ED  8B 02                     MOV EAX,dword ptr [EDX]
0072B0EF  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0072B0F2  51                        PUSH ECX
0072B0F3  E8 48 0D F9 FF            CALL 0x006bbe40
0072B0F8  85 C0                     TEST EAX,EAX
0072B0FA  0F 85 E6 05 00 00         JNZ 0x0072b6e6
0072B100  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B105  F6 00 01                  TEST byte ptr [EAX],0x1
0072B108  0F 84 86 00 00 00         JZ 0x0072b194
0072B10E  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
0072B111  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0072B114  8B 50 10                  MOV EDX,dword ptr [EAX + 0x10]
0072B117  52                        PUSH EDX
0072B118  51                        PUSH ECX
0072B119  51                        PUSH ECX
0072B11A  8B 88 C0 00 00 00         MOV ECX,dword ptr [EAX + 0xc0]
0072B120  51                        PUSH ECX
0072B121  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0072B124  51                        PUSH ECX
0072B125  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
0072B128  0F AF D1                  IMUL EDX,ECX
0072B12B  03 50 04                  ADD EDX,dword ptr [EAX + 0x4]
0072B12E  03 55 E0                  ADD EDX,dword ptr [EBP + -0x20]
0072B131  52                        PUSH EDX
0072B132  E8 29 39 FA FF            CALL 0x006cea60
0072B137  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072B13E  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B143  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072B146  89 55 A8                  MOV dword ptr [EBP + -0x58],EDX
0072B149  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
0072B14C  03 CA                     ADD ECX,EDX
0072B14E  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0072B151  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072B154  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0072B157  8B 58 10                  MOV EBX,dword ptr [EAX + 0x10]
0072B15A  03 D9                     ADD EBX,ECX
0072B15C  EB 42                     JMP 0x0072b1a0
LAB_0072b194:
0072B194  83 CB FF                  OR EBX,0xffffffff
0072B197  89 5D A8                  MOV dword ptr [EBP + -0x58],EBX
0072B19A  89 5D 9C                  MOV dword ptr [EBP + -0x64],EBX
0072B19D  89 5D 84                  MOV dword ptr [EBP + -0x7c],EBX
LAB_0072b1a0:
0072B1A0  89 5D 80                  MOV dword ptr [EBP + -0x80],EBX
0072B1A3  83 20 FE                  AND dword ptr [EAX],0xfffffffe
0072B1A6  33 C0                     XOR EAX,EAX
0072B1A8  89 45 CC                  MOV dword ptr [EBP + -0x34],EAX
0072B1AB  89 45 D0                  MOV dword ptr [EBP + -0x30],EAX
0072B1AE  89 45 D4                  MOV dword ptr [EBP + -0x2c],EAX
0072B1B1  89 45 D8                  MOV dword ptr [EBP + -0x28],EAX
0072B1B4  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B1B9  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
0072B1BC  8B F1                     MOV ESI,ECX
0072B1BE  C1 E6 04                  SHL ESI,0x4
0072B1C1  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B1C7  8D 74 16 14               LEA ESI,[ESI + EDX*0x1 + 0x14]
0072B1CB  8B 8C CA 1C 01 00 00      MOV ECX,dword ptr [EDX + ECX*0x8 + 0x11c]
0072B1D2  01 48 28                  ADD dword ptr [EAX + 0x28],ECX
0072B1D5  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B1DA  8B 50 50                  MOV EDX,dword ptr [EAX + 0x50]
0072B1DD  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072B1E3  8B 94 D1 20 01 00 00      MOV EDX,dword ptr [ECX + EDX*0x8 + 0x120]
0072B1EA  01 50 2C                  ADD dword ptr [EAX + 0x2c],EDX
0072B1ED  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B1F2  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
0072B1F5  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B1FB  8B 8C CA 1C 01 00 00      MOV ECX,dword ptr [EDX + ECX*0x8 + 0x11c]
0072B202  01 48 18                  ADD dword ptr [EAX + 0x18],ECX
0072B205  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B20A  8B 50 50                  MOV EDX,dword ptr [EAX + 0x50]
0072B20D  8B 0D 34 71 85 00         MOV ECX,dword ptr [0x00857134]
0072B213  8B 94 D1 20 01 00 00      MOV EDX,dword ptr [ECX + EDX*0x8 + 0x120]
0072B21A  01 50 1C                  ADD dword ptr [EAX + 0x1c],EDX
0072B21D  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B222  F6 00 20                  TEST byte ptr [EAX],0x20
0072B225  0F 84 C5 00 00 00         JZ 0x0072b2f0
0072B22B  83 78 20 FF               CMP dword ptr [EAX + 0x20],-0x1
0072B22F  75 0B                     JNZ 0x0072b23c
0072B231  50                        PUSH EAX
0072B232  E8 19 47 FA FF            CALL 0x006cf950
0072B237  A1 18 71 85 00            MOV EAX,[0x00857118]
LAB_0072b23c:
0072B23C  39 78 30                  CMP dword ptr [EAX + 0x30],EDI
0072B23F  0F 8E AB 00 00 00         JLE 0x0072b2f0
0072B245  39 78 34                  CMP dword ptr [EAX + 0x34],EDI
0072B248  0F 8E A2 00 00 00         JLE 0x0072b2f0
0072B24E  56                        PUSH ESI
0072B24F  83 C0 28                  ADD EAX,0x28
0072B252  50                        PUSH EAX
0072B253  8D 45 CC                  LEA EAX,[EBP + -0x34]
0072B256  50                        PUSH EAX
0072B257  E8 54 4C FA FF            CALL 0x006cfeb0
0072B25C  83 C4 0C                  ADD ESP,0xc
0072B25F  85 C0                     TEST EAX,EAX
0072B261  0F 84 89 00 00 00         JZ 0x0072b2f0
0072B267  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0072B26E  8B 75 D0                  MOV ESI,dword ptr [EBP + -0x30]
0072B271  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0072B274  0F AF F0                  IMUL ESI,EAX
0072B277  03 75 CC                  ADD ESI,dword ptr [EBP + -0x34]
0072B27A  03 75 E0                  ADD ESI,dword ptr [EBP + -0x20]
0072B27D  89 75 A4                  MOV dword ptr [EBP + -0x5c],ESI
0072B280  8B 4D D8                  MOV ECX,dword ptr [EBP + -0x28]
0072B283  51                        PUSH ECX
0072B284  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
0072B287  51                        PUSH ECX
0072B288  50                        PUSH EAX
0072B289  56                        PUSH ESI
0072B28A  51                        PUSH ECX
0072B28B  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B291  8B 82 C0 00 00 00         MOV EAX,dword ptr [EDX + 0xc0]
0072B297  50                        PUSH EAX
0072B298  E8 C3 37 FA FF            CALL 0x006cea60
0072B29D  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0072B2A0  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B2A5  2B 48 28                  SUB ECX,dword ptr [EAX + 0x28]
0072B2A8  89 8D 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],ECX
0072B2AE  8B 55 D0                  MOV EDX,dword ptr [EBP + -0x30]
0072B2B1  2B 50 2C                  SUB EDX,dword ptr [EAX + 0x2c]
0072B2B4  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
0072B2BA  57                        PUSH EDI
0072B2BB  57                        PUSH EDI
0072B2BC  57                        PUSH EDI
0072B2BD  57                        PUSH EDI
0072B2BE  8B B8 B0 00 00 00         MOV EDI,dword ptr [EAX + 0xb0]
0072B2C4  57                        PUSH EDI
0072B2C5  8B 7D D8                  MOV EDI,dword ptr [EBP + -0x28]
0072B2C8  57                        PUSH EDI
0072B2C9  8B 7D D4                  MOV EDI,dword ptr [EBP + -0x2c]
0072B2CC  57                        PUSH EDI
0072B2CD  52                        PUSH EDX
0072B2CE  51                        PUSH ECX
0072B2CF  8B 88 C4 00 00 00         MOV ECX,dword ptr [EAX + 0xc4]
0072B2D5  8B 90 CC 00 00 00         MOV EDX,dword ptr [EAX + 0xcc]
0072B2DB  8B 04 8A                  MOV EAX,dword ptr [EDX + ECX*0x4]
0072B2DE  50                        PUSH EAX
0072B2DF  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
0072B2E2  51                        PUSH ECX
0072B2E3  56                        PUSH ESI
0072B2E4  E8 37 75 FA FF            CALL 0x006d2820
0072B2E9  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_0072b2f0:
0072B2F0  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B2F6  8B 02                     MOV EAX,dword ptr [EDX]
0072B2F8  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
0072B2FB  8B 08                     MOV ECX,dword ptr [EAX]
0072B2FD  6A 00                     PUSH 0x0
0072B2FF  50                        PUSH EAX
0072B300  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
0072B306  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B30B  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
0072B30E  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0072B311  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
0072B314  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0072B317  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
0072B31A  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0072B31D  8B 48 10                  MOV ECX,dword ptr [EAX + 0x10]
0072B320  89 4D BC                  MOV dword ptr [EBP + -0x44],ECX
0072B323  8D 55 B0                  LEA EDX,[EBP + -0x50]
0072B326  52                        PUSH EDX
0072B327  8B 00                     MOV EAX,dword ptr [EAX]
0072B329  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
0072B32C  51                        PUSH ECX
0072B32D  FF 15 54 BE 85 00         CALL dword ptr [0x0085be54]
0072B333  8B 75 B0                  MOV ESI,dword ptr [EBP + -0x50]
0072B336  89 75 AC                  MOV dword ptr [EBP + -0x54],ESI
0072B339  8B 7D B4                  MOV EDI,dword ptr [EBP + -0x4c]
0072B33C  89 7D A0                  MOV dword ptr [EBP + -0x60],EDI
0072B33F  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0072B342  85 C0                     TEST EAX,EAX
0072B344  0F 84 1F 02 00 00         JZ 0x0072b569
0072B34A  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0072B34D  85 C0                     TEST EAX,EAX
0072B34F  0F 84 14 02 00 00         JZ 0x0072b569
0072B355  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0072B358  85 C0                     TEST EAX,EAX
0072B35A  0F 8C A7 00 00 00         JL 0x0072b407
0072B360  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B366  83 C2 04                  ADD EDX,0x4
0072B369  52                        PUSH EDX
0072B36A  8D 55 CC                  LEA EDX,[EBP + -0x34]
0072B36D  8D 4D 88                  LEA ECX,[EBP + -0x78]
0072B370  E8 EB 50 F8 FF            CALL 0x006b0460
0072B375  85 C0                     TEST EAX,EAX
0072B377  0F 84 8A 00 00 00         JZ 0x0072b407
0072B37D  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B383  8B 42 04                  MOV EAX,dword ptr [EDX + 0x4]
0072B386  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0072B389  3B C8                     CMP ECX,EAX
0072B38B  89 4D A8                  MOV dword ptr [EBP + -0x58],ECX
0072B38E  7C 03                     JL 0x0072b393
0072B390  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
LAB_0072b393:
0072B393  8B 5A 0C                  MOV EBX,dword ptr [EDX + 0xc]
0072B396  03 C3                     ADD EAX,EBX
0072B398  8B 5D D4                  MOV EBX,dword ptr [EBP + -0x2c]
0072B39B  03 CB                     ADD ECX,EBX
0072B39D  3B C8                     CMP ECX,EAX
0072B39F  89 4D 9C                  MOV dword ptr [EBP + -0x64],ECX
0072B3A2  7F 03                     JG 0x0072b3a7
0072B3A4  89 45 9C                  MOV dword ptr [EBP + -0x64],EAX
LAB_0072b3a7:
0072B3A7  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
0072B3AA  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0072B3AD  3B C8                     CMP ECX,EAX
0072B3AF  89 4D 84                  MOV dword ptr [EBP + -0x7c],ECX
0072B3B2  7C 03                     JL 0x0072b3b7
0072B3B4  89 45 84                  MOV dword ptr [EBP + -0x7c],EAX
LAB_0072b3b7:
0072B3B7  8B 5A 10                  MOV EBX,dword ptr [EDX + 0x10]
0072B3BA  03 C3                     ADD EAX,EBX
0072B3BC  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0072B3BF  03 D9                     ADD EBX,ECX
0072B3C1  3B D8                     CMP EBX,EAX
0072B3C3  0F 8F 9A 01 00 00         JG 0x0072b563
0072B3C9  8B D8                     MOV EBX,EAX
0072B3CB  E9 93 01 00 00            JMP 0x0072b563
LAB_0072b407:
0072B407  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
0072B40A  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0072B410  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
0072B413  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0072B419  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0072B41C  03 D0                     ADD EDX,EAX
0072B41E  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
0072B424  8B 5D D8                  MOV EBX,dword ptr [EBP + -0x28]
0072B427  03 D9                     ADD EBX,ECX
0072B429  89 9D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EBX
0072B42F  03 C6                     ADD EAX,ESI
0072B431  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0072B434  03 CF                     ADD ECX,EDI
0072B436  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0072B439  03 D6                     ADD EDX,ESI
0072B43B  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
0072B43E  03 DF                     ADD EBX,EDI
0072B440  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
0072B443  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B449  8B 02                     MOV EAX,dword ptr [EDX]
0072B44B  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
0072B44E  8B 11                     MOV EDX,dword ptr [ECX]
0072B450  6A 00                     PUSH 0x0
0072B452  68 00 00 00 01            PUSH 0x1000000
0072B457  8D 9D 6C FF FF FF         LEA EBX,[EBP + 0xffffff6c]
0072B45D  53                        PUSH EBX
0072B45E  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
0072B461  50                        PUSH EAX
0072B462  8D 45 B0                  LEA EAX,[EBP + -0x50]
0072B465  50                        PUSH EAX
0072B466  51                        PUSH ECX
0072B467  FF 52 14                  CALL dword ptr [EDX + 0x14]
0072B46A  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0072B46D  85 C0                     TEST EAX,EAX
0072B46F  0F 84 E5 00 00 00         JZ 0x0072b55a
0072B475  6A 00                     PUSH 0x0
0072B477  8D 4D C0                  LEA ECX,[EBP + -0x40]
0072B47A  51                        PUSH ECX
0072B47B  8D 55 DC                  LEA EDX,[EBP + -0x24]
0072B47E  52                        PUSH EDX
0072B47F  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B484  8B 08                     MOV ECX,dword ptr [EAX]
0072B486  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
0072B489  52                        PUSH EDX
0072B48A  E8 B1 09 F9 FF            CALL 0x006bbe40
0072B48F  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0072B492  85 C0                     TEST EAX,EAX
0072B494  0F 85 C0 00 00 00         JNZ 0x0072b55a
0072B49A  50                        PUSH EAX
0072B49B  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0072B49E  50                        PUSH EAX
0072B49F  8D 4D E0                  LEA ECX,[EBP + -0x20]
0072B4A2  51                        PUSH ECX
0072B4A3  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B4A9  8B 02                     MOV EAX,dword ptr [EDX]
0072B4AB  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0072B4AE  51                        PUSH ECX
0072B4AF  E8 8C 09 F9 FF            CALL 0x006bbe40
0072B4B4  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
0072B4B7  85 C0                     TEST EAX,EAX
0072B4B9  75 7E                     JNZ 0x0072b539
0072B4BB  C7 45 FC 02 00 00 00      MOV dword ptr [EBP + -0x4],0x2
0072B4C2  8B 55 D8                  MOV EDX,dword ptr [EBP + -0x28]
0072B4C5  52                        PUSH EDX
0072B4C6  8B 45 D4                  MOV EAX,dword ptr [EBP + -0x2c]
0072B4C9  50                        PUSH EAX
0072B4CA  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0072B4CD  50                        PUSH EAX
0072B4CE  8B 8D 70 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff70]
0072B4D4  0F AF C8                  IMUL ECX,EAX
0072B4D7  03 8D 6C FF FF FF         ADD ECX,dword ptr [EBP + 0xffffff6c]
0072B4DD  03 4D E0                  ADD ECX,dword ptr [EBP + -0x20]
0072B4E0  51                        PUSH ECX
0072B4E1  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0072B4E4  50                        PUSH EAX
0072B4E5  0F AF 45 B4               IMUL EAX,dword ptr [EBP + -0x4c]
0072B4E9  03 45 DC                  ADD EAX,dword ptr [EBP + -0x24]
0072B4EC  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
0072B4EF  50                        PUSH EAX
0072B4F0  E8 6B 35 FA FF            CALL 0x006cea60
0072B4F5  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072B4FC  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
0072B4FF  EB 20                     JMP 0x0072b521
LAB_0072b521:
0072B521  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B527  8B 02                     MOV EAX,dword ptr [EDX]
0072B529  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
0072B52C  8B 08                     MOV ECX,dword ptr [EAX]
0072B52E  6A 00                     PUSH 0x0
0072B530  50                        PUSH EAX
0072B531  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
0072B537  EB 03                     JMP 0x0072b53c
LAB_0072b539:
0072B539  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
LAB_0072b53c:
0072B53C  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B542  8B 02                     MOV EAX,dword ptr [EDX]
0072B544  8B 40 34                  MOV EAX,dword ptr [EAX + 0x34]
0072B547  8B 08                     MOV ECX,dword ptr [EAX]
0072B549  6A 00                     PUSH 0x0
0072B54B  50                        PUSH EAX
0072B54C  FF 91 80 00 00 00         CALL dword ptr [ECX + 0x80]
0072B552  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B558  EB 09                     JMP 0x0072b563
LAB_0072b55a:
0072B55A  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B560  8B 5D 80                  MOV EBX,dword ptr [EBP + -0x80]
LAB_0072b563:
0072B563  8B 02                     MOV EAX,dword ptr [EDX]
0072B565  0C 01                     OR AL,0x1
0072B567  89 02                     MOV dword ptr [EDX],EAX
LAB_0072b569:
0072B569  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0072B56C  85 C0                     TEST EAX,EAX
0072B56E  0F 8C 34 01 00 00         JL 0x0072b6a8
0072B574  89 85 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EAX
0072B57A  8B 4D 84                  MOV ECX,dword ptr [EBP + -0x7c]
0072B57D  89 8D 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],ECX
0072B583  8B 55 9C                  MOV EDX,dword ptr [EBP + -0x64]
0072B586  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
0072B58C  89 9D 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EBX
0072B592  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0072B595  8B C2                     MOV EAX,EDX
0072B597  89 5D BC                  MOV dword ptr [EBP + -0x44],EBX
0072B59A  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
0072B59D  03 D6                     ADD EDX,ESI
0072B59F  89 55 B0                  MOV dword ptr [EBP + -0x50],EDX
0072B5A2  03 CF                     ADD ECX,EDI
0072B5A4  89 4D B4                  MOV dword ptr [EBP + -0x4c],ECX
0072B5A7  03 C6                     ADD EAX,ESI
0072B5A9  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0072B5AC  8B C3                     MOV EAX,EBX
0072B5AE  03 C7                     ADD EAX,EDI
0072B5B0  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
0072B5B3  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B5B8  8B 00                     MOV EAX,dword ptr [EAX]
0072B5BA  8B 48 34                  MOV ECX,dword ptr [EAX + 0x34]
0072B5BD  8B 11                     MOV EDX,dword ptr [ECX]
0072B5BF  6A 00                     PUSH 0x0
0072B5C1  68 00 00 00 01            PUSH 0x1000000
0072B5C6  8D B5 6C FF FF FF         LEA ESI,[EBP + 0xffffff6c]
0072B5CC  56                        PUSH ESI
0072B5CD  8B 40 44                  MOV EAX,dword ptr [EAX + 0x44]
0072B5D0  50                        PUSH EAX
0072B5D1  8D 45 B0                  LEA EAX,[EBP + -0x50]
0072B5D4  50                        PUSH EAX
0072B5D5  51                        PUSH ECX
0072B5D6  FF 52 14                  CALL dword ptr [EDX + 0x14]
0072B5D9  8B F0                     MOV ESI,EAX
0072B5DB  85 F6                     TEST ESI,ESI
0072B5DD  0F 84 C2 00 00 00         JZ 0x0072b6a5
0072B5E3  6A 00                     PUSH 0x0
0072B5E5  8D 4D C0                  LEA ECX,[EBP + -0x40]
0072B5E8  51                        PUSH ECX
0072B5E9  8D 55 DC                  LEA EDX,[EBP + -0x24]
0072B5EC  52                        PUSH EDX
0072B5ED  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B5F2  8B 08                     MOV ECX,dword ptr [EAX]
0072B5F4  8B 51 34                  MOV EDX,dword ptr [ECX + 0x34]
0072B5F7  52                        PUSH EDX
0072B5F8  E8 43 08 F9 FF            CALL 0x006bbe40
0072B5FD  8B F0                     MOV ESI,EAX
0072B5FF  85 F6                     TEST ESI,ESI
0072B601  0F 85 9E 00 00 00         JNZ 0x0072b6a5
0072B607  50                        PUSH EAX
0072B608  8D 45 E4                  LEA EAX,[EBP + -0x1c]
0072B60B  50                        PUSH EAX
0072B60C  8D 4D E0                  LEA ECX,[EBP + -0x20]
0072B60F  51                        PUSH ECX
0072B610  8B 15 34 71 85 00         MOV EDX,dword ptr [0x00857134]
0072B616  8B 02                     MOV EAX,dword ptr [EDX]
0072B618  8B 48 44                  MOV ECX,dword ptr [EAX + 0x44]
0072B61B  51                        PUSH ECX
0072B61C  E8 1F 08 F9 FF            CALL 0x006bbe40
0072B621  8B F0                     MOV ESI,EAX
0072B623  85 F6                     TEST ESI,ESI
0072B625  75 69                     JNZ 0x0072b690
0072B627  C7 45 FC 03 00 00 00      MOV dword ptr [EBP + -0x4],0x3
0072B62E  2B 5D 84                  SUB EBX,dword ptr [EBP + -0x7c]
0072B631  53                        PUSH EBX
0072B632  8B 45 9C                  MOV EAX,dword ptr [EBP + -0x64]
0072B635  2B 45 A8                  SUB EAX,dword ptr [EBP + -0x58]
0072B638  50                        PUSH EAX
0072B639  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
0072B63C  50                        PUSH EAX
0072B63D  8B 95 70 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff70]
0072B643  0F AF D0                  IMUL EDX,EAX
0072B646  03 95 6C FF FF FF         ADD EDX,dword ptr [EBP + 0xffffff6c]
0072B64C  03 55 E0                  ADD EDX,dword ptr [EBP + -0x20]
0072B64F  52                        PUSH EDX
0072B650  8B 45 C0                  MOV EAX,dword ptr [EBP + -0x40]
0072B653  50                        PUSH EAX
0072B654  0F AF 45 B4               IMUL EAX,dword ptr [EBP + -0x4c]
0072B658  03 45 DC                  ADD EAX,dword ptr [EBP + -0x24]
0072B65B  03 45 B0                  ADD EAX,dword ptr [EBP + -0x50]
0072B65E  50                        PUSH EAX
0072B65F  E8 FC 33 FA FF            CALL 0x006cea60
0072B664  EB 0E                     JMP 0x0072b674
LAB_0072b674:
0072B674  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0072B67B  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B680  8B 08                     MOV ECX,dword ptr [EAX]
0072B682  8B 41 44                  MOV EAX,dword ptr [ECX + 0x44]
0072B685  8B 10                     MOV EDX,dword ptr [EAX]
0072B687  6A 00                     PUSH 0x0
0072B689  50                        PUSH EAX
0072B68A  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_0072b690:
0072B690  A1 34 71 85 00            MOV EAX,[0x00857134]
0072B695  8B 08                     MOV ECX,dword ptr [EAX]
0072B697  8B 41 34                  MOV EAX,dword ptr [ECX + 0x34]
0072B69A  8B 10                     MOV EDX,dword ptr [EAX]
0072B69C  6A 00                     PUSH 0x0
0072B69E  50                        PUSH EAX
0072B69F  FF 92 80 00 00 00         CALL dword ptr [EDX + 0x80]
LAB_0072b6a5:
0072B6A5  09 75 C8                  OR dword ptr [EBP + -0x38],ESI
LAB_0072b6a8:
0072B6A8  8B 45 C8                  MOV EAX,dword ptr [EBP + -0x38]
0072B6AB  85 C0                     TEST EAX,EAX
0072B6AD  75 08                     JNZ 0x0072b6b7
0072B6AF  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B6B4  83 20 F9                  AND dword ptr [EAX],0xfffffff9
LAB_0072b6b7:
0072B6B7  A1 18 71 85 00            MOV EAX,[0x00857118]
0072B6BC  8B 4D CC                  MOV ECX,dword ptr [EBP + -0x34]
0072B6BF  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
0072B6C2  8B 15 18 71 85 00         MOV EDX,dword ptr [0x00857118]
0072B6C8  8B 45 D0                  MOV EAX,dword ptr [EBP + -0x30]
0072B6CB  89 42 08                  MOV dword ptr [EDX + 0x8],EAX
0072B6CE  8B 0D 18 71 85 00         MOV ECX,dword ptr [0x00857118]
0072B6D4  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
0072B6D7  89 51 0C                  MOV dword ptr [ECX + 0xc],EDX
0072B6DA  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
0072B6DD  8B 0D 18 71 85 00         MOV ECX,dword ptr [0x00857118]
0072B6E3  89 41 10                  MOV dword ptr [ECX + 0x10],EAX
LAB_0072b6e6:
0072B6E6  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
0072B6E9  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
0072B6F0  5F                        POP EDI
0072B6F1  5E                        POP ESI
0072B6F2  5B                        POP EBX
0072B6F3  8B E5                     MOV ESP,EBP
0072B6F5  5D                        POP EBP
0072B6F6  C3                        RET
