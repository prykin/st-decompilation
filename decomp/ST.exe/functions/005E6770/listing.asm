FUN_005e6770:
005E6770  55                        PUSH EBP
005E6771  8B EC                     MOV EBP,ESP
005E6773  81 EC 64 06 00 00         SUB ESP,0x664
005E6779  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005E677E  53                        PUSH EBX
005E677F  56                        PUSH ESI
005E6780  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
005E6783  33 DB                     XOR EBX,EBX
005E6785  57                        PUSH EDI
005E6786  8D 55 B8                  LEA EDX,[EBP + -0x48]
005E6789  8D 4D B4                  LEA ECX,[EBP + -0x4c]
005E678C  53                        PUSH EBX
005E678D  52                        PUSH EDX
005E678E  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
005E6791  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E6797  E8 54 70 14 00            CALL 0x0072d7f0
005E679C  8B F0                     MOV ESI,EAX
005E679E  83 C4 08                  ADD ESP,0x8
005E67A1  3B F3                     CMP ESI,EBX
005E67A3  0F 85 A7 0A 00 00         JNZ 0x005e7250
005E67A9  8B 75 F8                  MOV ESI,dword ptr [EBP + -0x8]
005E67AC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005E67AF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005E67B2  6A 0A                     PUSH 0xa
005E67B4  6A 0A                     PUSH 0xa
005E67B6  89 1D 2E F3 80 00         MOV dword ptr [0x0080f32e],EBX
005E67BC  53                        PUSH EBX
005E67BD  89 86 64 1A 00 00         MOV dword ptr [ESI + 0x1a64],EAX
005E67C3  89 8E 68 1A 00 00         MOV dword ptr [ESI + 0x1a68],ECX
005E67C9  E8 22 ED 0C 00            CALL 0x006b54f0
005E67CE  89 86 F0 1A 00 00         MOV dword ptr [ESI + 0x1af0],EAX
005E67D4  A0 68 17 81 00            MOV AL,[0x00811768]
005E67D9  3C 01                     CMP AL,0x1
005E67DB  74 09                     JZ 0x005e67e6
005E67DD  A0 A0 67 80 00            MOV AL,[0x008067a0]
005E67E2  84 C0                     TEST AL,AL
005E67E4  74 12                     JZ 0x005e67f8
LAB_005e67e6:
005E67E6  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E67EC  53                        PUSH EBX
005E67ED  6A 01                     PUSH 0x1
005E67EF  52                        PUSH EDX
005E67F0  E8 4E B5 E1 FF            CALL 0x00401d43
005E67F5  83 C4 0C                  ADD ESP,0xc
LAB_005e67f8:
005E67F8  A1 30 2A 80 00            MOV EAX,[0x00802a30]
005E67FD  3B C3                     CMP EAX,EBX
005E67FF  74 28                     JZ 0x005e6829
005E6801  39 98 A9 00 00 00         CMP dword ptr [EAX + 0xa9],EBX
005E6807  74 14                     JZ 0x005e681d
005E6809  8B 48 1C                  MOV ECX,dword ptr [EAX + 0x1c]
005E680C  83 F9 FF                  CMP ECX,-0x1
005E680F  74 18                     JZ 0x005e6829
005E6811  8B 40 60                  MOV EAX,dword ptr [EAX + 0x60]
005E6814  51                        PUSH ECX
005E6815  50                        PUSH EAX
005E6816  E8 D5 D2 0C 00            CALL 0x006b3af0
005E681B  EB 0C                     JMP 0x005e6829
LAB_005e681d:
005E681D  8B 88 AD 00 00 00         MOV ECX,dword ptr [EAX + 0xad]
005E6823  51                        PUSH ECX
005E6824  E8 E7 22 0D 00            CALL 0x006b8b10
LAB_005e6829:
005E6829  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005E682F  6A 01                     PUSH 0x1
005E6831  53                        PUSH EBX
005E6832  68 9C C7 7C 00            PUSH 0x7cc79c
005E6837  52                        PUSH EDX
005E6838  E8 B3 41 12 00            CALL 0x0070a9f0
005E683D  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E6843  83 C4 10                  ADD ESP,0x10
005E6846  89 41 2C                  MOV dword ptr [ECX + 0x2c],EAX
005E6849  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E684F  8D 8D 9C F9 FF FF         LEA ECX,[EBP + 0xfffff99c]
005E6855  53                        PUSH EBX
005E6856  8B 42 2C                  MOV EAX,dword ptr [EDX + 0x2c]
005E6859  51                        PUSH ECX
005E685A  50                        PUSH EAX
005E685B  89 46 5D                  MOV dword ptr [ESI + 0x5d],EAX
005E685E  E8 FD 5A 0D 00            CALL 0x006bc360
005E6863  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E6869  8D 8D 9C F9 FF FF         LEA ECX,[EBP + 0xfffff99c]
005E686F  C7 82 40 01 00 00 1F 00 00 00  MOV dword ptr [EDX + 0x140],0x1f
005E6879  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E687F  05 44 01 00 00            ADD EAX,0x144
005E6884  50                        PUSH EAX
005E6885  6A 15                     PUSH 0x15
005E6887  68 8B 00 00 00            PUSH 0x8b
005E688C  68 00 01 00 00            PUSH 0x100
005E6891  53                        PUSH EBX
005E6892  51                        PUSH ECX
005E6893  E8 E8 1E 13 00            CALL 0x00718780
005E6898  8B 15 80 67 80 00         MOV EDX,dword ptr [0x00806780]
005E689E  6A 01                     PUSH 0x1
005E68A0  53                        PUSH EBX
005E68A1  68 90 C7 7C 00            PUSH 0x7cc790
005E68A6  6A 01                     PUSH 0x1
005E68A8  52                        PUSH EDX
005E68A9  E8 F2 3C 12 00            CALL 0x0070a5a0
005E68AE  50                        PUSH EAX
005E68AF  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E68B4  6A 01                     PUSH 0x1
005E68B6  53                        PUSH EBX
005E68B7  8B 88 F0 02 00 00         MOV ECX,dword ptr [EAX + 0x2f0]
005E68BD  53                        PUSH EBX
005E68BE  51                        PUSH ECX
005E68BF  E8 65 C9 E1 FF            CALL 0x00403229
005E68C4  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E68CA  83 C4 40                  ADD ESP,0x40
005E68CD  8B 82 44 05 00 00         MOV EAX,dword ptr [EDX + 0x544]
005E68D3  68 FF 00 00 00            PUSH 0xff
005E68D8  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
005E68DB  8B 50 04                  MOV EDX,dword ptr [EAX + 0x4]
005E68DE  51                        PUSH ECX
005E68DF  52                        PUSH EDX
005E68E0  53                        PUSH EBX
005E68E1  53                        PUSH EBX
005E68E2  53                        PUSH EBX
005E68E3  50                        PUSH EAX
005E68E4  E8 87 D8 0C 00            CALL 0x006b4170
005E68E9  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E68EE  8B 80 48 05 00 00         MOV EAX,dword ptr [EAX + 0x548]
005E68F4  3B C3                     CMP EAX,EBX
005E68F6  74 06                     JZ 0x005e68fe
005E68F8  50                        PUSH EAX
005E68F9  E8 72 EC 0C 00            CALL 0x006b5570
LAB_005e68fe:
005E68FE  6A 0A                     PUSH 0xa
005E6900  6A 0A                     PUSH 0xa
005E6902  53                        PUSH EBX
005E6903  E8 E8 EB 0C 00            CALL 0x006b54f0
005E6908  8B 0D 6C 17 81 00         MOV ECX,dword ptr [0x0081176c]
005E690E  89 81 48 05 00 00         MOV dword ptr [ECX + 0x548],EAX
005E6914  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E691A  39 9A 89 03 00 00         CMP dword ptr [EDX + 0x389],EBX
005E6920  74 5F                     JZ 0x005e6981
005E6922  C7 46 2D 28 00 00 00      MOV dword ptr [ESI + 0x2d],0x28
005E6929  66 C7 46 31 01 00         MOV word ptr [ESI + 0x31],0x1
005E692F  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6934  8D 7E 1D                  LEA EDI,[ESI + 0x1d]
005E6937  57                        PUSH EDI
005E6938  8B 88 48 05 00 00         MOV ECX,dword ptr [EAX + 0x548]
005E693E  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
005E6942  66 89 56 33               MOV word ptr [ESI + 0x33],DX
005E6946  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E694B  8B 88 89 03 00 00         MOV ECX,dword ptr [EAX + 0x389]
005E6951  51                        PUSH ECX
005E6952  6A 02                     PUSH 0x2
005E6954  8B CE                     MOV ECX,ESI
005E6956  E8 25 F7 0F 00            CALL 0x006e6080
005E695B  C7 46 2D 22 00 00 00      MOV dword ptr [ESI + 0x2d],0x22
005E6962  66 89 5E 33               MOV word ptr [ESI + 0x33],BX
005E6966  66 89 5E 31               MOV word ptr [ESI + 0x31],BX
005E696A  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E6970  57                        PUSH EDI
005E6971  8B CE                     MOV ECX,ESI
005E6973  8B 82 89 03 00 00         MOV EAX,dword ptr [EDX + 0x389]
005E6979  50                        PUSH EAX
005E697A  6A 02                     PUSH 0x2
005E697C  E8 FF F6 0F 00            CALL 0x006e6080
LAB_005e6981:
005E6981  6A 01                     PUSH 0x1
005E6983  8B CE                     MOV ECX,ESI
005E6985  E8 6A DA E1 FF            CALL 0x004043f4
005E698A  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005E698D  6A 01                     PUSH 0x1
005E698F  8D 48 28                  LEA ECX,[EAX + 0x28]
005E6992  51                        PUSH ECX
005E6993  50                        PUSH EAX
005E6994  E8 47 E6 0C 00            CALL 0x006b4fe0
005E6999  8B 56 5D                  MOV EDX,dword ptr [ESI + 0x5d]
005E699C  50                        PUSH EAX
005E699D  33 C0                     XOR EAX,EAX
005E699F  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
005E69A3  50                        PUSH EAX
005E69A4  68 8F 01 00 00            PUSH 0x18f
005E69A9  68 E4 01 00 00            PUSH 0x1e4
005E69AE  E8 0D E7 0C 00            CALL 0x006b50c0
005E69B3  89 86 EC 1A 00 00         MOV dword ptr [ESI + 0x1aec],EAX
005E69B9  8B 48 14                  MOV ECX,dword ptr [EAX + 0x14]
005E69BC  3B CB                     CMP ECX,EBX
005E69BE  74 04                     JZ 0x005e69c4
005E69C0  8B D9                     MOV EBX,ECX
005E69C2  EB 1A                     JMP 0x005e69de
LAB_005e69c4:
005E69C4  33 DB                     XOR EBX,EBX
005E69C6  66 8B 58 0E               MOV BX,word ptr [EAX + 0xe]
005E69CA  0F AF 58 04               IMUL EBX,dword ptr [EAX + 0x4]
005E69CE  83 C3 1F                  ADD EBX,0x1f
005E69D1  C1 EB 03                  SHR EBX,0x3
005E69D4  81 E3 FC FF FF 1F         AND EBX,0x1ffffffc
005E69DA  0F AF 58 08               IMUL EBX,dword ptr [EAX + 0x8]
LAB_005e69de:
005E69DE  50                        PUSH EAX
005E69DF  E8 BC E5 0C 00            CALL 0x006b4fa0
005E69E4  8B CB                     MOV ECX,EBX
005E69E6  8B F8                     MOV EDI,EAX
005E69E8  8B D1                     MOV EDX,ECX
005E69EA  33 C0                     XOR EAX,EAX
005E69EC  C1 E9 02                  SHR ECX,0x2
005E69EF  F3 AB                     STOSD.REP ES:EDI
005E69F1  8B CA                     MOV ECX,EDX
005E69F3  BB 3F 00 00 00            MOV EBX,0x3f
005E69F8  83 E1 03                  AND ECX,0x3
005E69FB  F3 AA                     STOSB.REP ES:EDI
005E69FD  8D BE 94 1A 00 00         LEA EDI,[ESI + 0x1a94]
LAB_005e6a03:
005E6A03  8B 86 EC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1aec]
005E6A09  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6A0F  56                        PUSH ESI
005E6A10  6A 13                     PUSH 0x13
005E6A12  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005E6A15  51                        PUSH ECX
005E6A16  68 11 22 40 00            PUSH 0x402211
005E6A1B  6A 31                     PUSH 0x31
005E6A1D  57                        PUSH EDI
005E6A1E  52                        PUSH EDX
005E6A1F  E8 0C B9 0C 00            CALL 0x006b2330
005E6A24  8B 07                     MOV EAX,dword ptr [EDI]
005E6A26  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6A2C  53                        PUSH EBX
005E6A2D  68 14 01 00 00            PUSH 0x114
005E6A32  6A FF                     PUSH -0x1
005E6A34  50                        PUSH EAX
005E6A35  51                        PUSH ECX
005E6A36  E8 05 CC 0C 00            CALL 0x006b3640
005E6A3B  8B 17                     MOV EDX,dword ptr [EDI]
005E6A3D  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6A42  52                        PUSH EDX
005E6A43  50                        PUSH EAX
005E6A44  E8 A7 D0 0C 00            CALL 0x006b3af0
005E6A49  83 C3 13                  ADD EBX,0x13
005E6A4C  83 C7 04                  ADD EDI,0x4
005E6A4F  81 FB E1 01 00 00         CMP EBX,0x1e1
005E6A55  7C AC                     JL 0x005e6a03
005E6A57  8B CE                     MOV ECX,ESI
005E6A59  E8 E3 BE E1 FF            CALL 0x00402941
005E6A5E  8B 8E 5B 1A 00 00         MOV ECX,dword ptr [ESI + 0x1a5b]
005E6A64  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6A69  81 C1 40 01 00 00         ADD ECX,0x140
005E6A6F  8D 55 FC                  LEA EDX,[EBP + -0x4]
005E6A72  51                        PUSH ECX
005E6A73  68 9D 01 00 00            PUSH 0x19d
005E6A78  68 04 02 00 00            PUSH 0x204
005E6A7D  68 99 30 40 00            PUSH 0x403099
005E6A82  6A 32                     PUSH 0x32
005E6A84  52                        PUSH EDX
005E6A85  50                        PUSH EAX
005E6A86  E8 A5 B8 0C 00            CALL 0x006b2330
005E6A8B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
005E6A8E  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6A94  6A 38                     PUSH 0x38
005E6A96  68 12 01 00 00            PUSH 0x112
005E6A9B  6A FF                     PUSH -0x1
005E6A9D  51                        PUSH ECX
005E6A9E  52                        PUSH EDX
005E6A9F  E8 9C CB 0C 00            CALL 0x006b3640
005E6AA4  6A 33                     PUSH 0x33
005E6AA6  E8 85 7A 14 00            CALL 0x0072e530
005E6AAB  33 DB                     XOR EBX,EBX
005E6AAD  83 C4 04                  ADD ESP,0x4
005E6AB0  3B C3                     CMP EAX,EBX
005E6AB2  74 35                     JZ 0x005e6ae9
005E6AB4  83 C9 FF                  OR ECX,0xffffffff
005E6AB7  BF 01 00 00 00            MOV EDI,0x1
005E6ABC  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6AC0  88 18                     MOV byte ptr [EAX],BL
005E6AC2  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005E6AC5  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E6AC9  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E6ACC  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E6ACF  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E6AD2  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005E6AD5  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005E6AD8  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E6ADB  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E6ADE  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E6AE1  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005E6AE4  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005E6AE7  EB 07                     JMP 0x005e6af0
LAB_005e6ae9:
005E6AE9  33 C0                     XOR EAX,EAX
005E6AEB  BF 01 00 00 00            MOV EDI,0x1
LAB_005e6af0:
005E6AF0  3B C3                     CMP EAX,EBX
005E6AF2  89 86 F8 1A 00 00         MOV dword ptr [ESI + 0x1af8],EAX
005E6AF8  74 64                     JZ 0x005e6b5e
005E6AFA  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6AFF  53                        PUSH EBX
005E6B00  57                        PUSH EDI
005E6B01  6A 10                     PUSH 0x10
005E6B03  57                        PUSH EDI
005E6B04  68 9D 01 00 00            PUSH 0x19d
005E6B09  68 04 02 00 00            PUSH 0x204
005E6B0E  6A 38                     PUSH 0x38
005E6B10  68 12 01 00 00            PUSH 0x112
005E6B15  50                        PUSH EAX
005E6B16  E8 D5 8E 0D 00            CALL 0x006bf9f0
005E6B1B  8B 8E F8 1A 00 00         MOV ECX,dword ptr [ESI + 0x1af8]
005E6B21  50                        PUSH EAX
005E6B22  6A 38                     PUSH 0x38
005E6B24  68 12 01 00 00            PUSH 0x112
005E6B29  6A 02                     PUSH 0x2
005E6B2B  E8 6D DA E1 FF            CALL 0x0040459d
005E6B30  85 C0                     TEST EAX,EAX
005E6B32  74 2A                     JZ 0x005e6b5e
005E6B34  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E6B3A  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005E6B3D  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6B41  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E6B44  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E6B4A  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E6B4D  3B C3                     CMP EAX,EBX
005E6B4F  7C 0D                     JL 0x005e6b5e
005E6B51  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6B57  50                        PUSH EAX
005E6B58  52                        PUSH EDX
005E6B59  E8 92 CF 0C 00            CALL 0x006b3af0
LAB_005e6b5e:
005E6B5E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E6B61  83 F8 FF                  CMP EAX,-0x1
005E6B64  74 13                     JZ 0x005e6b79
005E6B66  50                        PUSH EAX
005E6B67  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6B6C  50                        PUSH EAX
005E6B6D  E8 3E D0 0C 00            CALL 0x006b3bb0
005E6B72  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_005e6b79:
005E6B79  39 9E 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EBX
005E6B7F  0F 84 B0 00 00 00         JZ 0x005e6c35
005E6B85  39 9E 68 1A 00 00         CMP dword ptr [ESI + 0x1a68],EBX
005E6B8B  0F 85 A4 00 00 00         JNZ 0x005e6c35
005E6B91  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6B96  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005E6B9C  83 F9 FF                  CMP ECX,-0x1
005E6B9F  74 22                     JZ 0x005e6bc3
005E6BA1  8B 90 AD 03 00 00         MOV EDX,dword ptr [EAX + 0x3ad]
005E6BA7  52                        PUSH EDX
005E6BA8  8B 90 A9 03 00 00         MOV EDX,dword ptr [EAX + 0x3a9]
005E6BAE  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005E6BB4  52                        PUSH EDX
005E6BB5  6A FE                     PUSH -0x2
005E6BB7  51                        PUSH ECX
005E6BB8  50                        PUSH EAX
005E6BB9  E8 12 C9 0C 00            CALL 0x006b34d0
005E6BBE  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6bc3:
005E6BC3  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005E6BC9  83 F9 FF                  CMP ECX,-0x1
005E6BCC  74 22                     JZ 0x005e6bf0
005E6BCE  8B 90 3E 04 00 00         MOV EDX,dword ptr [EAX + 0x43e]
005E6BD4  52                        PUSH EDX
005E6BD5  8B 90 3A 04 00 00         MOV EDX,dword ptr [EAX + 0x43a]
005E6BDB  8B 80 66 04 00 00         MOV EAX,dword ptr [EAX + 0x466]
005E6BE1  52                        PUSH EDX
005E6BE2  6A FE                     PUSH -0x2
005E6BE4  51                        PUSH ECX
005E6BE5  50                        PUSH EAX
005E6BE6  E8 E5 C8 0C 00            CALL 0x006b34d0
005E6BEB  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6bf0:
005E6BF0  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005E6BF6  83 F9 FF                  CMP ECX,-0x1
005E6BF9  74 22                     JZ 0x005e6c1d
005E6BFB  8B 90 CF 04 00 00         MOV EDX,dword ptr [EAX + 0x4cf]
005E6C01  52                        PUSH EDX
005E6C02  8B 90 CB 04 00 00         MOV EDX,dword ptr [EAX + 0x4cb]
005E6C08  8B 80 F7 04 00 00         MOV EAX,dword ptr [EAX + 0x4f7]
005E6C0E  52                        PUSH EDX
005E6C0F  6A FE                     PUSH -0x2
005E6C11  51                        PUSH ECX
005E6C12  50                        PUSH EAX
005E6C13  E8 B8 C8 0C 00            CALL 0x006b34d0
005E6C18  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6c1d:
005E6C1D  8B 88 40 05 00 00         MOV ECX,dword ptr [EAX + 0x540]
005E6C23  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6C29  51                        PUSH ECX
005E6C2A  52                        PUSH EDX
005E6C2B  E8 00 C8 0C 00            CALL 0x006b3430
005E6C30  E9 89 01 00 00            JMP 0x005e6dbe
LAB_005e6c35:
005E6C35  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E6C3B  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6C41  05 40 01 00 00            ADD EAX,0x140
005E6C46  8D 4D FC                  LEA ECX,[EBP + -0x4]
005E6C49  50                        PUSH EAX
005E6C4A  68 21 01 00 00            PUSH 0x121
005E6C4F  68 F9 00 00 00            PUSH 0xf9
005E6C54  68 D2 42 40 00            PUSH 0x4042d2
005E6C59  6A 32                     PUSH 0x32
005E6C5B  51                        PUSH ECX
005E6C5C  52                        PUSH EDX
005E6C5D  E8 CE B6 0C 00            CALL 0x006b2330
005E6C62  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E6C65  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6C6B  68 B4 00 00 00            PUSH 0xb4
005E6C70  6A 0A                     PUSH 0xa
005E6C72  6A FF                     PUSH -0x1
005E6C74  50                        PUSH EAX
005E6C75  51                        PUSH ECX
005E6C76  E8 C5 C9 0C 00            CALL 0x006b3640
005E6C7B  6A 33                     PUSH 0x33
005E6C7D  E8 AE 78 14 00            CALL 0x0072e530
005E6C82  83 C4 04                  ADD ESP,0x4
005E6C85  3B C3                     CMP EAX,EBX
005E6C87  74 31                     JZ 0x005e6cba
005E6C89  83 C9 FF                  OR ECX,0xffffffff
005E6C8C  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6C90  C6 00 00                  MOV byte ptr [EAX],0x0
005E6C93  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005E6C96  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E6C9A  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E6C9D  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E6CA0  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E6CA3  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005E6CA6  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005E6CA9  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E6CAC  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E6CAF  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E6CB2  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005E6CB5  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005E6CB8  EB 02                     JMP 0x005e6cbc
LAB_005e6cba:
005E6CBA  33 C0                     XOR EAX,EAX
LAB_005e6cbc:
005E6CBC  3B C3                     CMP EAX,EBX
005E6CBE  89 86 00 1B 00 00         MOV dword ptr [ESI + 0x1b00],EAX
005E6CC4  0F 84 D8 00 00 00         JZ 0x005e6da2
005E6CCA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6CD0  53                        PUSH EBX
005E6CD1  57                        PUSH EDI
005E6CD2  6A 10                     PUSH 0x10
005E6CD4  57                        PUSH EDI
005E6CD5  68 21 01 00 00            PUSH 0x121
005E6CDA  68 F9 00 00 00            PUSH 0xf9
005E6CDF  68 B4 00 00 00            PUSH 0xb4
005E6CE4  6A 0A                     PUSH 0xa
005E6CE6  52                        PUSH EDX
005E6CE7  E8 04 8D 0D 00            CALL 0x006bf9f0
005E6CEC  8B 8E 00 1B 00 00         MOV ECX,dword ptr [ESI + 0x1b00]
005E6CF2  50                        PUSH EAX
005E6CF3  68 B4 00 00 00            PUSH 0xb4
005E6CF8  6A 0A                     PUSH 0xa
005E6CFA  6A 04                     PUSH 0x4
005E6CFC  E8 9C D8 E1 FF            CALL 0x0040459d
005E6D01  85 C0                     TEST EAX,EAX
005E6D03  0F 84 99 00 00 00         JZ 0x005e6da2
005E6D09  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005E6D0F  8B 48 13                  MOV ECX,dword ptr [EAX + 0x13]
005E6D12  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6D16  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E6D19  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005E6D1F  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E6D22  3B C3                     CMP EAX,EBX
005E6D24  7C 0D                     JL 0x005e6d33
005E6D26  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6D2C  50                        PUSH EAX
005E6D2D  52                        PUSH EDX
005E6D2E  E8 BD CD 0C 00            CALL 0x006b3af0
LAB_005e6d33:
005E6D33  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6D38  8B 88 91 03 00 00         MOV ECX,dword ptr [EAX + 0x391]
005E6D3E  83 F9 FF                  CMP ECX,-0x1
005E6D41  74 12                     JZ 0x005e6d55
005E6D43  8B 80 D5 03 00 00         MOV EAX,dword ptr [EAX + 0x3d5]
005E6D49  51                        PUSH ECX
005E6D4A  50                        PUSH EAX
005E6D4B  E8 A0 CD 0C 00            CALL 0x006b3af0
005E6D50  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6d55:
005E6D55  8B 88 22 04 00 00         MOV ECX,dword ptr [EAX + 0x422]
005E6D5B  83 F9 FF                  CMP ECX,-0x1
005E6D5E  74 12                     JZ 0x005e6d72
005E6D60  51                        PUSH ECX
005E6D61  8B 88 66 04 00 00         MOV ECX,dword ptr [EAX + 0x466]
005E6D67  51                        PUSH ECX
005E6D68  E8 83 CD 0C 00            CALL 0x006b3af0
005E6D6D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6d72:
005E6D72  8B 88 B3 04 00 00         MOV ECX,dword ptr [EAX + 0x4b3]
005E6D78  83 F9 FF                  CMP ECX,-0x1
005E6D7B  74 12                     JZ 0x005e6d8f
005E6D7D  8B 90 F7 04 00 00         MOV EDX,dword ptr [EAX + 0x4f7]
005E6D83  51                        PUSH ECX
005E6D84  52                        PUSH EDX
005E6D85  E8 66 CD 0C 00            CALL 0x006b3af0
005E6D8A  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6d8f:
005E6D8F  8B 80 40 05 00 00         MOV EAX,dword ptr [EAX + 0x540]
005E6D95  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6D9B  50                        PUSH EAX
005E6D9C  51                        PUSH ECX
005E6D9D  E8 4E CD 0C 00            CALL 0x006b3af0
LAB_005e6da2:
005E6DA2  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E6DA5  83 F8 FF                  CMP EAX,-0x1
005E6DA8  74 14                     JZ 0x005e6dbe
005E6DAA  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6DB0  50                        PUSH EAX
005E6DB1  52                        PUSH EDX
005E6DB2  E8 F9 CD 0C 00            CALL 0x006b3bb0
005E6DB7  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_005e6dbe:
005E6DBE  39 9E 64 1A 00 00         CMP dword ptr [ESI + 0x1a64],EBX
005E6DC4  0F 85 E9 01 00 00         JNZ 0x005e6fb3
005E6DCA  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E6DD0  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6DD6  05 40 01 00 00            ADD EAX,0x140
005E6DDB  8D 4D FC                  LEA ECX,[EBP + -0x4]
005E6DDE  50                        PUSH EAX
005E6DDF  6A 62                     PUSH 0x62
005E6DE1  68 90 01 00 00            PUSH 0x190
005E6DE6  68 61 3B 40 00            PUSH 0x403b61
005E6DEB  6A 32                     PUSH 0x32
005E6DED  51                        PUSH ECX
005E6DEE  52                        PUSH EDX
005E6DEF  E8 3C B5 0C 00            CALL 0x006b2330
005E6DF4  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E6DF7  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6DFD  68 F1 01 00 00            PUSH 0x1f1
005E6E02  68 C8 00 00 00            PUSH 0xc8
005E6E07  6A FF                     PUSH -0x1
005E6E09  50                        PUSH EAX
005E6E0A  51                        PUSH ECX
005E6E0B  E8 30 C8 0C 00            CALL 0x006b3640
005E6E10  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6E15  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005E6E1B  83 F9 FF                  CMP ECX,-0x1
005E6E1E  74 22                     JZ 0x005e6e42
005E6E20  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005E6E26  52                        PUSH EDX
005E6E27  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005E6E2D  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005E6E33  52                        PUSH EDX
005E6E34  6A FE                     PUSH -0x2
005E6E36  51                        PUSH ECX
005E6E37  50                        PUSH EAX
005E6E38  E8 93 C6 0C 00            CALL 0x006b34d0
005E6E3D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6e42:
005E6E42  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005E6E48  83 F9 FF                  CMP ECX,-0x1
005E6E4B  74 1D                     JZ 0x005e6e6a
005E6E4D  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005E6E53  52                        PUSH EDX
005E6E54  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005E6E5A  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005E6E60  52                        PUSH EDX
005E6E61  6A FE                     PUSH -0x2
005E6E63  51                        PUSH ECX
005E6E64  50                        PUSH EAX
005E6E65  E8 66 C6 0C 00            CALL 0x006b34d0
LAB_005e6e6a:
005E6E6A  6A 33                     PUSH 0x33
005E6E6C  E8 BF 76 14 00            CALL 0x0072e530
005E6E71  83 C4 04                  ADD ESP,0x4
005E6E74  3B C3                     CMP EAX,EBX
005E6E76  74 31                     JZ 0x005e6ea9
005E6E78  83 C9 FF                  OR ECX,0xffffffff
005E6E7B  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6E7F  C6 00 00                  MOV byte ptr [EAX],0x0
005E6E82  89 48 03                  MOV dword ptr [EAX + 0x3],ECX
005E6E85  C6 40 01 02               MOV byte ptr [EAX + 0x1],0x2
005E6E89  89 58 07                  MOV dword ptr [EAX + 0x7],EBX
005E6E8C  89 58 0B                  MOV dword ptr [EAX + 0xb],EBX
005E6E8F  89 58 0F                  MOV dword ptr [EAX + 0xf],EBX
005E6E92  89 78 1B                  MOV dword ptr [EAX + 0x1b],EDI
005E6E95  89 78 13                  MOV dword ptr [EAX + 0x13],EDI
005E6E98  89 48 17                  MOV dword ptr [EAX + 0x17],ECX
005E6E9B  89 58 27                  MOV dword ptr [EAX + 0x27],EBX
005E6E9E  89 58 23                  MOV dword ptr [EAX + 0x23],EBX
005E6EA1  89 78 2F                  MOV dword ptr [EAX + 0x2f],EDI
005E6EA4  89 78 2B                  MOV dword ptr [EAX + 0x2b],EDI
005E6EA7  EB 02                     JMP 0x005e6eab
LAB_005e6ea9:
005E6EA9  33 C0                     XOR EAX,EAX
LAB_005e6eab:
005E6EAB  3B C3                     CMP EAX,EBX
005E6EAD  89 86 FC 1A 00 00         MOV dword ptr [ESI + 0x1afc],EAX
005E6EB3  0F 84 D5 00 00 00         JZ 0x005e6f8e
005E6EB9  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6EBF  53                        PUSH EBX
005E6EC0  57                        PUSH EDI
005E6EC1  6A 10                     PUSH 0x10
005E6EC3  57                        PUSH EDI
005E6EC4  6A 62                     PUSH 0x62
005E6EC6  68 90 01 00 00            PUSH 0x190
005E6ECB  68 F1 01 00 00            PUSH 0x1f1
005E6ED0  68 C8 00 00 00            PUSH 0xc8
005E6ED5  51                        PUSH ECX
005E6ED6  E8 15 8B 0D 00            CALL 0x006bf9f0
005E6EDB  8B 8E FC 1A 00 00         MOV ECX,dword ptr [ESI + 0x1afc]
005E6EE1  50                        PUSH EAX
005E6EE2  68 F1 01 00 00            PUSH 0x1f1
005E6EE7  68 C8 00 00 00            PUSH 0xc8
005E6EEC  57                        PUSH EDI
005E6EED  E8 AB D6 E1 FF            CALL 0x0040459d
005E6EF2  85 C0                     TEST EAX,EAX
005E6EF4  0F 84 94 00 00 00         JZ 0x005e6f8e
005E6EFA  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005E6F00  8B 50 13                  MOV EDX,dword ptr [EAX + 0x13]
005E6F03  C6 40 02 01               MOV byte ptr [EAX + 0x2],0x1
005E6F07  89 50 17                  MOV dword ptr [EAX + 0x17],EDX
005E6F0A  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005E6F10  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E6F13  3B C3                     CMP EAX,EBX
005E6F15  7C 0C                     JL 0x005e6f23
005E6F17  50                        PUSH EAX
005E6F18  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E6F1D  50                        PUSH EAX
005E6F1E  E8 CD CB 0C 00            CALL 0x006b3af0
LAB_005e6f23:
005E6F23  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6F28  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005E6F2E  83 F9 FF                  CMP ECX,-0x1
005E6F31  74 12                     JZ 0x005e6f45
005E6F33  51                        PUSH ECX
005E6F34  8B 88 A4 05 00 00         MOV ECX,dword ptr [EAX + 0x5a4]
005E6F3A  51                        PUSH ECX
005E6F3B  E8 B0 CB 0C 00            CALL 0x006b3af0
005E6F40  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6f45:
005E6F45  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005E6F4B  83 F9 FF                  CMP ECX,-0x1
005E6F4E  74 12                     JZ 0x005e6f62
005E6F50  8B 90 35 06 00 00         MOV EDX,dword ptr [EAX + 0x635]
005E6F56  51                        PUSH ECX
005E6F57  52                        PUSH EDX
005E6F58  E8 93 CB 0C 00            CALL 0x006b3af0
005E6F5D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6f62:
005E6F62  8B 80 58 05 00 00         MOV EAX,dword ptr [EAX + 0x558]
005E6F68  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6F6E  50                        PUSH EAX
005E6F6F  51                        PUSH ECX
005E6F70  E8 7B CB 0C 00            CALL 0x006b3af0
005E6F75  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005E6F7B  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E6F81  8B 82 54 05 00 00         MOV EAX,dword ptr [EDX + 0x554]
005E6F87  50                        PUSH EAX
005E6F88  51                        PUSH ECX
005E6F89  E8 62 CB 0C 00            CALL 0x006b3af0
LAB_005e6f8e:
005E6F8E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
005E6F91  83 F8 FF                  CMP EAX,-0x1
005E6F94  0F 84 A3 00 00 00         JZ 0x005e703d
005E6F9A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E6FA0  50                        PUSH EAX
005E6FA1  52                        PUSH EDX
005E6FA2  E8 09 CC 0C 00            CALL 0x006b3bb0
005E6FA7  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
005E6FAE  E9 8A 00 00 00            JMP 0x005e703d
LAB_005e6fb3:
005E6FB3  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E6FB8  8B 88 60 05 00 00         MOV ECX,dword ptr [EAX + 0x560]
005E6FBE  83 F9 FF                  CMP ECX,-0x1
005E6FC1  74 22                     JZ 0x005e6fe5
005E6FC3  8B 90 7C 05 00 00         MOV EDX,dword ptr [EAX + 0x57c]
005E6FC9  52                        PUSH EDX
005E6FCA  8B 90 78 05 00 00         MOV EDX,dword ptr [EAX + 0x578]
005E6FD0  8B 80 A4 05 00 00         MOV EAX,dword ptr [EAX + 0x5a4]
005E6FD6  52                        PUSH EDX
005E6FD7  6A FE                     PUSH -0x2
005E6FD9  51                        PUSH ECX
005E6FDA  50                        PUSH EAX
005E6FDB  E8 F0 C4 0C 00            CALL 0x006b34d0
005E6FE0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e6fe5:
005E6FE5  8B 88 F1 05 00 00         MOV ECX,dword ptr [EAX + 0x5f1]
005E6FEB  83 F9 FF                  CMP ECX,-0x1
005E6FEE  74 22                     JZ 0x005e7012
005E6FF0  8B 90 0D 06 00 00         MOV EDX,dword ptr [EAX + 0x60d]
005E6FF6  52                        PUSH EDX
005E6FF7  8B 90 09 06 00 00         MOV EDX,dword ptr [EAX + 0x609]
005E6FFD  8B 80 35 06 00 00         MOV EAX,dword ptr [EAX + 0x635]
005E7003  52                        PUSH EDX
005E7004  6A FE                     PUSH -0x2
005E7006  51                        PUSH ECX
005E7007  50                        PUSH EAX
005E7008  E8 C3 C4 0C 00            CALL 0x006b34d0
005E700D  A1 6C 17 81 00            MOV EAX,[0x0081176c]
LAB_005e7012:
005E7012  8B 88 58 05 00 00         MOV ECX,dword ptr [EAX + 0x558]
005E7018  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E701E  51                        PUSH ECX
005E701F  52                        PUSH EDX
005E7020  E8 0B C4 0C 00            CALL 0x006b3430
005E7025  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005E702A  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E7030  8B 88 54 05 00 00         MOV ECX,dword ptr [EAX + 0x554]
005E7036  51                        PUSH ECX
005E7037  52                        PUSH EDX
005E7038  E8 F3 C3 0C 00            CALL 0x006b3430
LAB_005e703d:
005E703D  A0 68 17 81 00            MOV AL,[0x00811768]
005E7042  84 C0                     TEST AL,AL
005E7044  75 09                     JNZ 0x005e704f
005E7046  A0 A0 67 80 00            MOV AL,[0x008067a0]
005E704B  84 C0                     TEST AL,AL
005E704D  74 1F                     JZ 0x005e706e
LAB_005e704f:
005E704F  8B 46 5D                  MOV EAX,dword ptr [ESI + 0x5d]
005E7052  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E7058  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005E705E  53                        PUSH EBX
005E705F  6A 02                     PUSH 0x2
005E7061  6A 0A                     PUSH 0xa
005E7063  50                        PUSH EAX
005E7064  51                        PUSH ECX
005E7065  52                        PUSH EDX
005E7066  E8 1F D4 E1 FF            CALL 0x0040448a
005E706B  83 C4 18                  ADD ESP,0x18
LAB_005e706e:
005E706E  8B 86 F8 1A 00 00         MOV EAX,dword ptr [ESI + 0x1af8]
005E7074  3B C3                     CMP EAX,EBX
005E7076  74 18                     JZ 0x005e7090
005E7078  80 38 00                  CMP byte ptr [EAX],0x0
005E707B  74 13                     JZ 0x005e7090
005E707D  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E7080  3B C3                     CMP EAX,EBX
005E7082  7C 0C                     JL 0x005e7090
005E7084  50                        PUSH EAX
005E7085  A1 A8 75 80 00            MOV EAX,[0x008075a8]
005E708A  50                        PUSH EAX
005E708B  E8 A0 C3 0C 00            CALL 0x006b3430
LAB_005e7090:
005E7090  8B 86 00 1B 00 00         MOV EAX,dword ptr [ESI + 0x1b00]
005E7096  3B C3                     CMP EAX,EBX
005E7098  74 19                     JZ 0x005e70b3
005E709A  80 38 00                  CMP byte ptr [EAX],0x0
005E709D  74 14                     JZ 0x005e70b3
005E709F  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E70A2  3B C3                     CMP EAX,EBX
005E70A4  7C 0D                     JL 0x005e70b3
005E70A6  8B 0D A8 75 80 00         MOV ECX,dword ptr [0x008075a8]
005E70AC  50                        PUSH EAX
005E70AD  51                        PUSH ECX
005E70AE  E8 7D C3 0C 00            CALL 0x006b3430
LAB_005e70b3:
005E70B3  8B 86 FC 1A 00 00         MOV EAX,dword ptr [ESI + 0x1afc]
005E70B9  3B C3                     CMP EAX,EBX
005E70BB  74 19                     JZ 0x005e70d6
005E70BD  80 38 00                  CMP byte ptr [EAX],0x0
005E70C0  74 14                     JZ 0x005e70d6
005E70C2  8B 40 03                  MOV EAX,dword ptr [EAX + 0x3]
005E70C5  3B C3                     CMP EAX,EBX
005E70C7  7C 0D                     JL 0x005e70d6
005E70C9  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
005E70CF  50                        PUSH EAX
005E70D0  52                        PUSH EDX
005E70D1  E8 5A C3 0C 00            CALL 0x006b3430
LAB_005e70d6:
005E70D6  8B CE                     MOV ECX,ESI
005E70D8  E8 68 AA E1 FF            CALL 0x00401b45
005E70DD  8B 3D 30 2A 80 00         MOV EDI,dword ptr [0x00802a30]
005E70E3  3B FB                     CMP EDI,EBX
005E70E5  74 4C                     JZ 0x005e7133
005E70E7  8B 87 C9 00 00 00         MOV EAX,dword ptr [EDI + 0xc9]
005E70ED  8B 8F C5 00 00 00         MOV ECX,dword ptr [EDI + 0xc5]
005E70F3  50                        PUSH EAX
005E70F4  51                        PUSH ECX
005E70F5  53                        PUSH EBX
005E70F6  8B CF                     MOV ECX,EDI
005E70F8  C6 87 93 04 00 00 01      MOV byte ptr [EDI + 0x493],0x1
005E70FF  66 C7 87 94 04 00 00 FF FF  MOV word ptr [EDI + 0x494],0xffff
005E7108  E8 71 DF E1 FF            CALL 0x0040507e
005E710D  8B 97 C9 00 00 00         MOV EDX,dword ptr [EDI + 0xc9]
005E7113  8B 87 C5 00 00 00         MOV EAX,dword ptr [EDI + 0xc5]
005E7119  52                        PUSH EDX
005E711A  50                        PUSH EAX
005E711B  8B CF                     MOV ECX,EDI
005E711D  E8 FC B2 E1 FF            CALL 0x0040241e
005E7122  C6 87 D2 00 00 00 00      MOV byte ptr [EDI + 0xd2],0x0
005E7129  C7 87 DF 04 00 00 FF FF FF FF  MOV dword ptr [EDI + 0x4df],0xffffffff
LAB_005e7133:
005E7133  B9 7E 00 00 00            MOV ECX,0x7e
005E7138  33 C0                     XOR EAX,EAX
005E713A  8D BD 9C FD FF FF         LEA EDI,[EBP + 0xfffffd9c]
005E7140  C6 46 65 03               MOV byte ptr [ESI + 0x65],0x3
005E7144  F3 AB                     STOSD.REP ES:EDI
005E7146  66 AB                     STOSW ES:EDI
005E7148  B9 02 00 00 00            MOV ECX,0x2
005E714D  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E7153  AA                        STOSB ES:EDI
005E7154  89 8D 70 FE FF FF         MOV dword ptr [EBP + 0xfffffe70],ECX
005E715A  89 8D 97 FE FF FF         MOV dword ptr [EBP + 0xfffffe97],ECX
005E7160  8A 0D A0 67 80 00         MOV CL,byte ptr [0x008067a0]
005E7166  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
005E7169  F6 D9                     NEG CL
005E716B  1B C9                     SBB ECX,ECX
005E716D  C7 85 5F FE FF FF 40 23 00 00  MOV dword ptr [EBP + 0xfffffe5f],0x2340
005E7177  83 E1 04                  AND ECX,0x4
005E717A  89 85 6C FE FF FF         MOV dword ptr [EBP + 0xfffffe6c],EAX
005E7180  81 C1 4D 69 00 00         ADD ECX,0x694d
005E7186  C7 85 74 FE FF FF 43 69 00 00  MOV dword ptr [EBP + 0xfffffe74],0x6943
005E7190  C7 85 86 FE FF FF BC 24 00 00  MOV dword ptr [EBP + 0xfffffe86],0x24bc
005E719A  89 85 93 FE FF FF         MOV dword ptr [EBP + 0xfffffe93],EAX
005E71A0  89 8D 9B FE FF FF         MOV dword ptr [EBP + 0xfffffe9b],ECX
005E71A6  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005E71AC  3B C3                     CMP EAX,EBX
005E71AE  74 5F                     JZ 0x005e720f
005E71B0  B9 06 00 00 00            MOV ECX,0x6
005E71B5  83 C8 FF                  OR EAX,0xffffffff
005E71B8  8D 7D 98                  LEA EDI,[EBP + -0x68]
005E71BB  F3 AB                     STOSD.REP ES:EDI
005E71BD  66 AB                     STOSW ES:EDI
005E71BF  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005E71C5  E8 C7 DF E1 FF            CALL 0x00405191
005E71CA  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E71D0  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
005E71D3  53                        PUSH EBX
005E71D4  53                        PUSH EBX
005E71D5  8B 82 E6 02 00 00         MOV EAX,dword ptr [EDX + 0x2e6]
005E71DB  8D 95 9C FD FF FF         LEA EDX,[EBP + 0xfffffd9c]
005E71E1  52                        PUSH EDX
005E71E2  53                        PUSH EBX
005E71E3  89 88 AB 1C 00 00         MOV dword ptr [EAX + 0x1cab],ECX
005E71E9  8B 86 5B 1A 00 00         MOV EAX,dword ptr [ESI + 0x1a5b]
005E71EF  8B 88 E6 02 00 00         MOV ECX,dword ptr [EAX + 0x2e6]
005E71F5  E8 1D A5 E1 FF            CALL 0x00401717
005E71FA  8B 96 5B 1A 00 00         MOV EDX,dword ptr [ESI + 0x1a5b]
005E7200  8D 4D 98                  LEA ECX,[EBP + -0x68]
005E7203  51                        PUSH ECX
005E7204  8B 8A E6 02 00 00         MOV ECX,dword ptr [EDX + 0x2e6]
005E720A  E8 42 D9 E1 FF            CALL 0x00404b51
LAB_005e720f:
005E720F  53                        PUSH EBX
005E7210  B9 58 76 80 00            MOV ECX,0x807658
005E7215  E8 82 C0 E1 FF            CALL 0x0040329c
005E721A  F6 05 01 73 80 00 08      TEST byte ptr [0x00807301],0x8
005E7221  74 10                     JZ 0x005e7233
005E7223  53                        PUSH EBX
005E7224  53                        PUSH EBX
005E7225  6A 02                     PUSH 0x2
005E7227  6A 14                     PUSH 0x14
005E7229  B9 58 76 80 00            MOV ECX,0x807658
005E722E  E8 9E BD E1 FF            CALL 0x00402fd1
LAB_005e7233:
005E7233  6A FF                     PUSH -0x1
005E7235  53                        PUSH EBX
005E7236  6A 0B                     PUSH 0xb
005E7238  8B CE                     MOV ECX,ESI
005E723A  E8 B2 D9 E1 FF            CALL 0x00404bf1
005E723F  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
005E7242  A3 F8 8D 85 00            MOV [0x00858df8],EAX
005E7247  5F                        POP EDI
005E7248  5E                        POP ESI
005E7249  5B                        POP EBX
005E724A  8B E5                     MOV ESP,EBP
005E724C  5D                        POP EBP
005E724D  C2 08 00                  RET 0x8
LAB_005e7250:
005E7250  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
005E7253  68 84 DD 7C 00            PUSH 0x7cdd84
005E7258  68 CC 4C 7A 00            PUSH 0x7a4ccc
005E725D  56                        PUSH ESI
005E725E  53                        PUSH EBX
005E725F  68 A3 00 00 00            PUSH 0xa3
005E7264  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7269  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005E726F  E8 5C 62 0C 00            CALL 0x006ad4d0
005E7274  83 C4 18                  ADD ESP,0x18
005E7277  85 C0                     TEST EAX,EAX
005E7279  74 01                     JZ 0x005e727c
005E727B  CC                        INT3
LAB_005e727c:
005E727C  68 A3 00 00 00            PUSH 0xa3
005E7281  68 5C DD 7C 00            PUSH 0x7cdd5c
005E7286  53                        PUSH EBX
005E7287  56                        PUSH ESI
005E7288  E8 B3 EB 0B 00            CALL 0x006a5e40
005E728D  5F                        POP EDI
005E728E  5E                        POP ESI
005E728F  5B                        POP EBX
005E7290  8B E5                     MOV ESP,EBP
005E7292  5D                        POP EBP
005E7293  C2 08 00                  RET 0x8
