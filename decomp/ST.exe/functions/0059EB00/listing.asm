FUN_0059eb00:
0059EB00  55                        PUSH EBP
0059EB01  8B EC                     MOV EBP,ESP
0059EB03  81 EC A8 0D 00 00         SUB ESP,0xda8
0059EB09  53                        PUSH EBX
0059EB0A  56                        PUSH ESI
0059EB0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059EB0E  57                        PUSH EDI
0059EB0F  B9 23 02 00 00            MOV ECX,0x223
0059EB14  33 C0                     XOR EAX,EAX
0059EB16  8D BD 58 F2 FF FF         LEA EDI,[EBP + 0xfffff258]
0059EB1C  33 F6                     XOR ESI,ESI
0059EB1E  F3 AB                     STOSD.REP ES:EDI
0059EB20  B9 35 01 00 00            MOV ECX,0x135
0059EB25  8D BD E4 FA FF FF         LEA EDI,[EBP + 0xfffffae4]
0059EB2B  F3 AB                     STOSD.REP ES:EDI
0059EB2D  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059EB32  8D 55 BC                  LEA EDX,[EBP + -0x44]
0059EB35  8D 4D B8                  LEA ECX,[EBP + -0x48]
0059EB38  56                        PUSH ESI
0059EB39  52                        PUSH EDX
0059EB3A  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059EB3D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0059EB43  E8 A8 EC 18 00            CALL 0x0072d7f0
0059EB48  8B F8                     MOV EDI,EAX
0059EB4A  83 C4 08                  ADD ESP,0x8
0059EB4D  3B FE                     CMP EDI,ESI
0059EB4F  0F 85 40 05 00 00         JNZ 0x0059f095
0059EB55  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
0059EB58  8B 8B 8E 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e8e]
0059EB5E  8D 83 8E 1E 00 00         LEA EAX,[EBX + 0x1e8e]
0059EB64  3B CE                     CMP ECX,ESI
0059EB66  74 06                     JZ 0x0059eb6e
0059EB68  50                        PUSH EAX
0059EB69  E8 F2 C4 10 00            CALL 0x006ab060
LAB_0059eb6e:
0059EB6E  8B 83 92 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e92]
0059EB74  8D BB 92 1E 00 00         LEA EDI,[EBX + 0x1e92]
0059EB7A  3B C6                     CMP EAX,ESI
0059EB7C  74 06                     JZ 0x0059eb84
0059EB7E  57                        PUSH EDI
0059EB7F  E8 DC C4 10 00            CALL 0x006ab060
LAB_0059eb84:
0059EB84  8B 43 5D                  MOV EAX,dword ptr [EBX + 0x5d]
0059EB87  6A 01                     PUSH 0x1
0059EB89  8D 48 28                  LEA ECX,[EAX + 0x28]
0059EB8C  51                        PUSH ECX
0059EB8D  50                        PUSH EAX
0059EB8E  E8 4D 64 11 00            CALL 0x006b4fe0
0059EB93  8B 53 5D                  MOV EDX,dword ptr [EBX + 0x5d]
0059EB96  50                        PUSH EAX
0059EB97  33 C0                     XOR EAX,EAX
0059EB99  66 8B 42 0E               MOV AX,word ptr [EDX + 0xe]
0059EB9D  50                        PUSH EAX
0059EB9E  68 75 01 00 00            PUSH 0x175
0059EBA3  68 74 01 00 00            PUSH 0x174
0059EBA8  E8 13 65 11 00            CALL 0x006b50c0
0059EBAD  6A 08                     PUSH 0x8
0059EBAF  68 75 01 00 00            PUSH 0x175
0059EBB4  89 83 8E 1E 00 00         MOV dword ptr [EBX + 0x1e8e],EAX
0059EBBA  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
0059EBC0  68 74 01 00 00            PUSH 0x174
0059EBC5  6A 5E                     PUSH 0x5e
0059EBC7  68 99 01 00 00            PUSH 0x199
0059EBCC  51                        PUSH ECX
0059EBCD  E8 AE 5C 12 00            CALL 0x006c4880
0059EBD2  6A 08                     PUSH 0x8
0059EBD4  68 75 01 00 00            PUSH 0x175
0059EBD9  89 07                     MOV dword ptr [EDI],EAX
0059EBDB  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
0059EBE1  68 74 01 00 00            PUSH 0x174
0059EBE6  6A 5E                     PUSH 0x5e
0059EBE8  6A 13                     PUSH 0x13
0059EBEA  52                        PUSH EDX
0059EBEB  E8 90 5C 12 00            CALL 0x006c4880
0059EBF0  6A 01                     PUSH 0x1
0059EBF2  6A 01                     PUSH 0x1
0059EBF4  56                        PUSH ESI
0059EBF5  89 83 9A 1E 00 00         MOV dword ptr [EBX + 0x1e9a],EAX
0059EBFB  E8 F0 68 11 00            CALL 0x006b54f0
0059EC00  68 A0 16 80 00            PUSH 0x8016a0
0059EC05  50                        PUSH EAX
0059EC06  89 83 E8 1A 00 00         MOV dword ptr [EBX + 0x1ae8],EAX
0059EC0C  E8 8F 6E 11 00            CALL 0x006b5aa0
0059EC11  6A 01                     PUSH 0x1
0059EC13  6A 01                     PUSH 0x1
0059EC15  56                        PUSH ESI
0059EC16  E8 D5 68 11 00            CALL 0x006b54f0
0059EC1B  68 A0 16 80 00            PUSH 0x8016a0
0059EC20  50                        PUSH EAX
0059EC21  89 83 EC 1A 00 00         MOV dword ptr [EBX + 0x1aec],EAX
0059EC27  E8 74 6E 11 00            CALL 0x006b5aa0
0059EC2C  6A 0A                     PUSH 0xa
0059EC2E  68 5C 02 00 00            PUSH 0x25c
0059EC33  6A 14                     PUSH 0x14
0059EC35  56                        PUSH ESI
0059EC36  E8 55 F6 10 00            CALL 0x006ae290
0059EC3B  8B 8B FF 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cff]
0059EC41  89 83 BE 1E 00 00         MOV dword ptr [EBX + 0x1ebe],EAX
0059EC47  B8 5B 01 00 00            MOV EAX,0x15b
0059EC4C  BA 02 00 00 00            MOV EDX,0x2
0059EC51  2B C1                     SUB EAX,ECX
0059EC53  80 3D 4C 73 80 00 00      CMP byte ptr [0x0080734c],0x0
0059EC5A  89 85 F4 FA FF FF         MOV dword ptr [EBP + 0xfffffaf4],EAX
0059EC60  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059EC63  89 B5 E4 FA FF FF         MOV dword ptr [EBP + 0xfffffae4],ESI
0059EC69  C7 85 EC FA FF FF 14 00 00 00  MOV dword ptr [EBP + 0xfffffaec],0x14
0059EC73  C7 85 F0 FA FF FF 64 00 00 00  MOV dword ptr [EBP + 0xfffffaf0],0x64
0059EC7D  C7 85 F8 FA FF FF 69 01 00 00  MOV dword ptr [EBP + 0xfffffaf8],0x169
0059EC87  89 B5 FC FA FF FF         MOV dword ptr [EBP + 0xfffffafc],ESI
0059EC8D  89 B5 00 FB FF FF         MOV dword ptr [EBP + 0xfffffb00],ESI
0059EC93  89 85 0C FB FF FF         MOV dword ptr [EBP + 0xfffffb0c],EAX
0059EC99  89 95 10 FB FF FF         MOV dword ptr [EBP + 0xfffffb10],EDX
0059EC9F  C7 85 14 FB FF FF 60 81 00 00  MOV dword ptr [EBP + 0xfffffb14],0x8160
0059ECA9  89 85 2C FB FF FF         MOV dword ptr [EBP + 0xfffffb2c],EAX
0059ECAF  89 95 30 FB FF FF         MOV dword ptr [EBP + 0xfffffb30],EDX
0059ECB5  C7 85 34 FB FF FF 61 81 00 00  MOV dword ptr [EBP + 0xfffffb34],0x8161
0059ECBF  89 85 4C FB FF FF         MOV dword ptr [EBP + 0xfffffb4c],EAX
0059ECC5  89 95 50 FB FF FF         MOV dword ptr [EBP + 0xfffffb50],EDX
0059ECCB  C7 85 54 FB FF FF FF 63 00 00  MOV dword ptr [EBP + 0xfffffb54],0x63ff
0059ECD5  89 85 6C FB FF FF         MOV dword ptr [EBP + 0xfffffb6c],EAX
0059ECDB  89 95 70 FB FF FF         MOV dword ptr [EBP + 0xfffffb70],EDX
0059ECE1  C7 85 74 FB FF FF 63 81 00 00  MOV dword ptr [EBP + 0xfffffb74],0x8163
0059ECEB  74 07                     JZ 0x0059ecf4
0059ECED  C7 45 B4 01 00 00 00      MOV dword ptr [EBP + -0x4c],0x1
LAB_0059ecf4:
0059ECF4  89 B5 14 FC FF FF         MOV dword ptr [EBP + 0xfffffc14],ESI
0059ECFA  8B B3 F7 1C 00 00         MOV ESI,dword ptr [EBX + 0x1cf7]
0059ED00  89 B5 1C FC FF FF         MOV dword ptr [EBP + 0xfffffc1c],ESI
0059ED06  8B B3 FB 1C 00 00         MOV ESI,dword ptr [EBX + 0x1cfb]
0059ED0C  89 8D 24 FC FF FF         MOV dword ptr [EBP + 0xfffffc24],ECX
0059ED12  8B 8B 03 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d03]
0059ED18  89 B5 20 FC FF FF         MOV dword ptr [EBP + 0xfffffc20],ESI
0059ED1E  89 8D 28 FC FF FF         MOV dword ptr [EBP + 0xfffffc28],ECX
0059ED24  B9 5F 00 00 00            MOV ECX,0x5f
0059ED29  8D B5 14 FC FF FF         LEA ESI,[EBP + 0xfffffc14]
0059ED2F  8D BD 94 FD FF FF         LEA EDI,[EBP + 0xfffffd94]
0059ED35  89 95 10 FC FF FF         MOV dword ptr [EBP + 0xfffffc10],EDX
0059ED3B  89 95 18 FC FF FF         MOV dword ptr [EBP + 0xfffffc18],EDX
0059ED41  C7 85 24 FD FF FF F4 01 00 00  MOV dword ptr [EBP + 0xfffffd24],0x1f4
0059ED4B  C7 85 28 FD FF FF 32 00 00 00  MOV dword ptr [EBP + 0xfffffd28],0x32
0059ED55  89 85 74 FC FF FF         MOV dword ptr [EBP + 0xfffffc74],EAX
0059ED5B  89 95 78 FC FF FF         MOV dword ptr [EBP + 0xfffffc78],EDX
0059ED61  C7 85 7C FC FF FF 64 81 00 00  MOV dword ptr [EBP + 0xfffffc7c],0x8164
0059ED6B  89 95 90 FD FF FF         MOV dword ptr [EBP + 0xfffffd90],EDX
0059ED71  F3 A5                     MOVSD.REP ES:EDI,ESI
0059ED73  8B 8B 88 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d88]
0059ED79  33 F6                     XOR ESI,ESI
0059ED7B  89 8D 9C FD FF FF         MOV dword ptr [EBP + 0xfffffd9c],ECX
0059ED81  8B 8B 8C 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d8c]
0059ED87  89 8D A0 FD FF FF         MOV dword ptr [EBP + 0xfffffda0],ECX
0059ED8D  8B 8B 90 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d90]
0059ED93  89 8D A4 FD FF FF         MOV dword ptr [EBP + 0xfffffda4],ECX
0059ED99  8B 8B 94 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d94]
0059ED9F  89 8D A8 FD FF FF         MOV dword ptr [EBP + 0xfffffda8],ECX
0059EDA5  8B 8B 19 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e19]
0059EDAB  89 8D 20 FF FF FF         MOV dword ptr [EBP + 0xffffff20],ECX
0059EDB1  8B 8B 1D 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1d]
0059EDB7  89 8D 24 FF FF FF         MOV dword ptr [EBP + 0xffffff24],ECX
0059EDBD  8B 8B 21 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e21]
0059EDC3  89 85 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EAX
0059EDC9  8D 85 E4 FA FF FF         LEA EAX,[EBP + 0xfffffae4]
0059EDCF  89 8D 28 FF FF FF         MOV dword ptr [EBP + 0xffffff28],ECX
0059EDD5  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059EDD8  56                        PUSH ESI
0059EDD9  50                        PUSH EAX
0059EDDA  8D 83 20 1B 00 00         LEA EAX,[EBX + 0x1b20]
0059EDE0  C7 85 FC FD FF FF 65 81 00 00  MOV dword ptr [EBP + 0xfffffdfc],0x8165
0059EDEA  C7 85 10 FF FF FF 03 00 00 00  MOV dword ptr [EBP + 0xffffff10],0x3
0059EDF4  C7 85 14 FF FF FF 01 00 00 00  MOV dword ptr [EBP + 0xffffff14],0x1
0059EDFE  89 B5 1C FF FF FF         MOV dword ptr [EBP + 0xffffff1c],ESI
0059EE04  C7 85 2C FF FF FF 26 01 00 00  MOV dword ptr [EBP + 0xffffff2c],0x126
0059EE0E  C7 85 30 FF FF FF 0E 00 00 00  MOV dword ptr [EBP + 0xffffff30],0xe
0059EE18  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
0059EE1E  C7 85 6C FF FF FF 66 81 00 00  MOV dword ptr [EBP + 0xffffff6c],0x8166
0059EE28  8B 11                     MOV EDX,dword ptr [ECX]
0059EE2A  56                        PUSH ESI
0059EE2B  50                        PUSH EAX
0059EE2C  6A 07                     PUSH 0x7
0059EE2E  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059EE31  8B 83 DF 1C 00 00         MOV EAX,dword ptr [EBX + 0x1cdf]
0059EE37  83 F8 FF                  CMP EAX,-0x1
0059EE3A  74 1D                     JZ 0x0059ee59
0059EE3C  8B 8B FB 1C 00 00         MOV ECX,dword ptr [EBX + 0x1cfb]
0059EE42  8B 93 F7 1C 00 00         MOV EDX,dword ptr [EBX + 0x1cf7]
0059EE48  51                        PUSH ECX
0059EE49  52                        PUSH EDX
0059EE4A  6A FE                     PUSH -0x2
0059EE4C  50                        PUSH EAX
0059EE4D  8B 83 23 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d23]
0059EE53  50                        PUSH EAX
0059EE54  E8 77 46 11 00            CALL 0x006b34d0
LAB_0059ee59:
0059EE59  8B 83 70 1D 00 00         MOV EAX,dword ptr [EBX + 0x1d70]
0059EE5F  83 F8 FF                  CMP EAX,-0x1
0059EE62  74 1D                     JZ 0x0059ee81
0059EE64  8B 8B 8C 1D 00 00         MOV ECX,dword ptr [EBX + 0x1d8c]
0059EE6A  8B 93 88 1D 00 00         MOV EDX,dword ptr [EBX + 0x1d88]
0059EE70  51                        PUSH ECX
0059EE71  52                        PUSH EDX
0059EE72  6A FE                     PUSH -0x2
0059EE74  50                        PUSH EAX
0059EE75  8B 83 B4 1D 00 00         MOV EAX,dword ptr [EBX + 0x1db4]
0059EE7B  50                        PUSH EAX
0059EE7C  E8 4F 46 11 00            CALL 0x006b34d0
LAB_0059ee81:
0059EE81  8B 83 01 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e01]
0059EE87  83 F8 FF                  CMP EAX,-0x1
0059EE8A  74 1D                     JZ 0x0059eea9
0059EE8C  8B 8B 1D 1E 00 00         MOV ECX,dword ptr [EBX + 0x1e1d]
0059EE92  8B 93 19 1E 00 00         MOV EDX,dword ptr [EBX + 0x1e19]
0059EE98  51                        PUSH ECX
0059EE99  52                        PUSH EDX
0059EE9A  6A FE                     PUSH -0x2
0059EE9C  50                        PUSH EAX
0059EE9D  8B 83 45 1E 00 00         MOV EAX,dword ptr [EBX + 0x1e45]
0059EEA3  50                        PUSH EAX
0059EEA4  E8 27 46 11 00            CALL 0x006b34d0
LAB_0059eea9:
0059EEA9  8B 93 E8 1A 00 00         MOV EDX,dword ptr [EBX + 0x1ae8]
0059EEAF  B9 23 02 00 00            MOV ECX,0x223
0059EEB4  33 C0                     XOR EAX,EAX
0059EEB6  8D BD 58 F2 FF FF         LEA EDI,[EBP + 0xfffff258]
0059EEBC  F3 AB                     STOSD.REP ES:EDI
0059EEBE  8B 8B 73 1A 00 00         MOV ECX,dword ptr [EBX + 0x1a73]
0059EEC4  8B 43 08                  MOV EAX,dword ptr [EBX + 0x8]
0059EEC7  89 95 78 F2 FF FF         MOV dword ptr [EBP + 0xfffff278],EDX
0059EECD  8D 95 58 F2 FF FF         LEA EDX,[EBP + 0xfffff258]
0059EED3  89 8D 60 F2 FF FF         MOV dword ptr [EBP + 0xfffff260],ECX
0059EED9  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059EEDC  89 85 E4 F2 FF FF         MOV dword ptr [EBP + 0xfffff2e4],EAX
0059EEE2  89 85 C8 FA FF FF         MOV dword ptr [EBP + 0xfffffac8],EAX
0059EEE8  89 85 84 F2 FF FF         MOV dword ptr [EBP + 0xfffff284],EAX
0059EEEE  89 85 A4 F2 FF FF         MOV dword ptr [EBP + 0xfffff2a4],EAX
0059EEF4  56                        PUSH ESI
0059EEF5  B8 02 00 00 00            MOV EAX,0x2
0059EEFA  52                        PUSH EDX
0059EEFB  8D 93 C4 1A 00 00         LEA EDX,[EBX + 0x1ac4]
0059EF01  C7 85 58 F2 FF FF 01 00 00 00  MOV dword ptr [EBP + 0xfffff258],0x1
0059EF0B  C7 85 5C F2 FF FF 99 00 00 00  MOV dword ptr [EBP + 0xfffff25c],0x99
0059EF15  C7 85 64 F2 FF FF A8 01 00 00  MOV dword ptr [EBP + 0xfffff264],0x1a8
0059EF1F  C7 85 68 F2 FF FF 27 01 00 00  MOV dword ptr [EBP + 0xfffff268],0x127
0059EF29  C7 85 6C F2 FF FF 56 01 00 00  MOV dword ptr [EBP + 0xfffff26c],0x156
0059EF33  C7 85 70 F2 FF FF 17 00 00 00  MOV dword ptr [EBP + 0xfffff270],0x17
0059EF3D  C7 85 74 F2 FF FF 20 00 00 00  MOV dword ptr [EBP + 0xfffff274],0x20
0059EF47  89 85 E8 F2 FF FF         MOV dword ptr [EBP + 0xfffff2e8],EAX
0059EF4D  89 85 CC FA FF FF         MOV dword ptr [EBP + 0xfffffacc],EAX
0059EF53  89 85 88 F2 FF FF         MOV dword ptr [EBP + 0xfffff288],EAX
0059EF59  89 85 A8 F2 FF FF         MOV dword ptr [EBP + 0xfffff2a8],EAX
0059EF5F  C7 85 8C F2 FF FF FF 68 00 00  MOV dword ptr [EBP + 0xfffff28c],0x68ff
0059EF69  C7 85 AC F2 FF FF 88 69 00 00  MOV dword ptr [EBP + 0xfffff2ac],0x6988
0059EF73  C7 85 D0 FA FF FF 55 69 00 00  MOV dword ptr [EBP + 0xfffffad0],0x6955
0059EF7D  C7 85 EC F2 FF FF FF 63 00 00  MOV dword ptr [EBP + 0xfffff2ec],0x63ff
0059EF87  8B 01                     MOV EAX,dword ptr [ECX]
0059EF89  56                        PUSH ESI
0059EF8A  52                        PUSH EDX
0059EF8B  6A 06                     PUSH 0x6
0059EF8D  FF 50 08                  CALL dword ptr [EAX + 0x8]
0059EF90  8B 83 EC 1A 00 00         MOV EAX,dword ptr [EBX + 0x1aec]
0059EF96  8B 4B 0C                  MOV ECX,dword ptr [EBX + 0xc]
0059EF99  89 85 78 F2 FF FF         MOV dword ptr [EBP + 0xfffff278],EAX
0059EF9F  8D 85 58 F2 FF FF         LEA EAX,[EBP + 0xfffff258]
0059EFA5  56                        PUSH ESI
0059EFA6  50                        PUSH EAX
0059EFA7  8D 83 C8 1A 00 00         LEA EAX,[EBX + 0x1ac8]
0059EFAD  C7 85 5C F2 FF FF 89 00 00 00  MOV dword ptr [EBP + 0xfffff25c],0x89
0059EFB7  C7 85 68 F2 FF FF 54 01 00 00  MOV dword ptr [EBP + 0xfffff268],0x154
0059EFC1  C7 85 74 F2 FF FF 10 00 00 00  MOV dword ptr [EBP + 0xfffff274],0x10
0059EFCB  8B 11                     MOV EDX,dword ptr [ECX]
0059EFCD  56                        PUSH ESI
0059EFCE  50                        PUSH EAX
0059EFCF  6A 06                     PUSH 0x6
0059EFD1  FF 52 08                  CALL dword ptr [EDX + 0x8]
0059EFD4  68 89 69 00 00            PUSH 0x6989
0059EFD9  68 04 69 00 00            PUSH 0x6904
0059EFDE  6A 19                     PUSH 0x19
0059EFE0  68 D3 00 00 00            PUSH 0xd3
0059EFE5  68 7A 01 00 00            PUSH 0x17a
0059EFEA  68 30 02 00 00            PUSH 0x230
0059EFEF  6A 01                     PUSH 0x1
0059EFF1  6A 01                     PUSH 0x1
0059EFF3  8B CB                     MOV ECX,EBX
0059EFF5  89 B3 C2 1E 00 00         MOV dword ptr [EBX + 0x1ec2],ESI
0059EFFB  C7 83 C6 1E 00 00 FF FF FF FF  MOV dword ptr [EBX + 0x1ec6],0xffffffff
0059F005  89 B3 CA 1E 00 00         MOV dword ptr [EBX + 0x1eca],ESI
0059F00B  E8 0B 46 E6 FF            CALL 0x0040361b
0059F010  68 8A 69 00 00            PUSH 0x698a
0059F015  68 05 69 00 00            PUSH 0x6905
0059F01A  6A 19                     PUSH 0x19
0059F01C  68 60 01 00 00            PUSH 0x160
0059F021  68 96 01 00 00            PUSH 0x196
0059F026  68 A3 01 00 00            PUSH 0x1a3
0059F02B  56                        PUSH ESI
0059F02C  6A 01                     PUSH 0x1
0059F02E  8B CB                     MOV ECX,EBX
0059F030  89 83 B6 1E 00 00         MOV dword ptr [EBX + 0x1eb6],EAX
0059F036  E8 E0 45 E6 FF            CALL 0x0040361b
0059F03B  68 8D 69 00 00            PUSH 0x698d
0059F040  89 83 BA 1E 00 00         MOV dword ptr [EBX + 0x1eba],EAX
0059F046  68 03 69 00 00            PUSH 0x6903
0059F04B  6A 19                     PUSH 0x19
0059F04D  68 AB 00 00 00            PUSH 0xab
0059F052  68 B5 01 00 00            PUSH 0x1b5
0059F057  68 FD 01 00 00            PUSH 0x1fd
0059F05C  6A 01                     PUSH 0x1
0059F05E  6A 01                     PUSH 0x1
0059F060  8B CB                     MOV ECX,EBX
0059F062  E8 B4 45 E6 FF            CALL 0x0040361b
0059F067  8D 4B 1D                  LEA ECX,[EBX + 0x1d]
0059F06A  89 83 24 1B 00 00         MOV dword ptr [EBX + 0x1b24],EAX
0059F070  51                        PUSH ECX
0059F071  56                        PUSH ESI
0059F072  6A 0F                     PUSH 0xf
0059F074  8B CB                     MOV ECX,EBX
0059F076  C7 43 2D 61 00 00 00      MOV dword ptr [EBX + 0x2d],0x61
0059F07D  89 73 35                  MOV dword ptr [EBX + 0x35],ESI
0059F080  E8 FB 6F 14 00            CALL 0x006e6080
0059F085  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0059F088  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0059F08E  5F                        POP EDI
0059F08F  5E                        POP ESI
0059F090  5B                        POP EBX
0059F091  8B E5                     MOV ESP,EBP
0059F093  5D                        POP EBP
0059F094  C3                        RET
LAB_0059f095:
0059F095  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0059F098  68 88 C3 7C 00            PUSH 0x7cc388
0059F09D  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059F0A2  57                        PUSH EDI
0059F0A3  56                        PUSH ESI
0059F0A4  68 F0 07 00 00            PUSH 0x7f0
0059F0A9  68 70 BF 7C 00            PUSH 0x7cbf70
0059F0AE  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059F0B3  E8 18 E4 10 00            CALL 0x006ad4d0
0059F0B8  83 C4 18                  ADD ESP,0x18
0059F0BB  85 C0                     TEST EAX,EAX
0059F0BD  74 01                     JZ 0x0059f0c0
0059F0BF  CC                        INT3
LAB_0059f0c0:
0059F0C0  68 F0 07 00 00            PUSH 0x7f0
0059F0C5  68 70 BF 7C 00            PUSH 0x7cbf70
0059F0CA  56                        PUSH ESI
0059F0CB  57                        PUSH EDI
0059F0CC  E8 6F 6D 10 00            CALL 0x006a5e40
0059F0D1  5F                        POP EDI
0059F0D2  5E                        POP ESI
0059F0D3  5B                        POP EBX
0059F0D4  8B E5                     MOV ESP,EBP
0059F0D6  5D                        POP EBP
0059F0D7  C3                        RET
