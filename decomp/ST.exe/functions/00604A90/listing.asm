STExplosionC::SaveObj:
00604A90  55                        PUSH EBP
00604A91  8B EC                     MOV EBP,ESP
00604A93  6A FF                     PUSH -0x1
00604A95  68 18 CC 79 00            PUSH 0x79cc18
00604A9A  68 64 D9 72 00            PUSH 0x72d964
00604A9F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
00604AA5  50                        PUSH EAX
00604AA6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
00604AAD  81 EC A0 00 00 00         SUB ESP,0xa0
00604AB3  53                        PUSH EBX
00604AB4  56                        PUSH ESI
00604AB5  57                        PUSH EDI
00604AB6  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00604AB9  89 8D 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],ECX
00604ABF  C7 45 BC 00 00 00 00      MOV dword ptr [EBP + -0x44],0x0
00604AC6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00604ACB  89 85 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EAX
00604AD1  8D 8D 78 FF FF FF         LEA ECX,[EBP + 0xffffff78]
00604AD7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00604ADD  8D 95 7C FF FF FF         LEA EDX,[EBP + 0xffffff7c]
00604AE3  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00604AE6  50                        PUSH EAX
00604AE7  68 21 DA 72 00            PUSH 0x72da21
00604AEC  6A 02                     PUSH 0x2
00604AEE  52                        PUSH EDX
00604AEF  E8 FC 8C 12 00            CALL 0x0072d7f0
00604AF4  83 C4 10                  ADD ESP,0x10
00604AF7  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00604AFA  8B F0                     MOV ESI,EAX
00604AFC  85 F6                     TEST ESI,ESI
00604AFE  0F 85 8E 02 00 00         JNZ 0x00604d92
00604B04  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
00604B07  89 03                     MOV dword ptr [EBX],EAX
00604B09  68 E2 00 00 00            PUSH 0xe2
00604B0E  E8 5D 61 0A 00            CALL 0x006aac70
00604B13  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00604B16  C7 03 E2 00 00 00         MOV dword ptr [EBX],0xe2
00604B1C  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00604B22  C7 82 E1 01 00 00 01 00 00 00  MOV dword ptr [EDX + 0x1e1],0x1
00604B2C  B9 10 00 00 00            MOV ECX,0x10
00604B31  8D B2 D5 01 00 00         LEA ESI,[EDX + 0x1d5]
00604B37  8B F8                     MOV EDI,EAX
00604B39  F3 A5                     MOVSD.REP ES:EDI,ESI
00604B3B  8B 8A 15 02 00 00         MOV ECX,dword ptr [EDX + 0x215]
00604B41  89 48 40                  MOV dword ptr [EAX + 0x40],ECX
00604B44  8D B2 19 02 00 00         LEA ESI,[EDX + 0x219]
00604B4A  B9 14 00 00 00            MOV ECX,0x14
00604B4F  8D 78 44                  LEA EDI,[EAX + 0x44]
00604B52  F3 A5                     MOVSD.REP ES:EDI,ESI
00604B54  8B 8A 69 02 00 00         MOV ECX,dword ptr [EDX + 0x269]
00604B5A  89 88 94 00 00 00         MOV dword ptr [EAX + 0x94],ECX
00604B60  8A 8A 6D 02 00 00         MOV CL,byte ptr [EDX + 0x26d]
00604B66  88 88 98 00 00 00         MOV byte ptr [EAX + 0x98],CL
00604B6C  8B 8A 6E 02 00 00         MOV ECX,dword ptr [EDX + 0x26e]
00604B72  89 88 99 00 00 00         MOV dword ptr [EAX + 0x99],ECX
00604B78  8B 8A B7 02 00 00         MOV ECX,dword ptr [EDX + 0x2b7]
00604B7E  89 88 DE 00 00 00         MOV dword ptr [EAX + 0xde],ECX
00604B84  8D 8A 72 02 00 00         LEA ECX,[EDX + 0x272]
00604B8A  05 9D 00 00 00            ADD EAX,0x9d
00604B8F  8B 31                     MOV ESI,dword ptr [ECX]
00604B91  89 30                     MOV dword ptr [EAX],ESI
00604B93  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
00604B96  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00604B99  8B 71 08                  MOV ESI,dword ptr [ECX + 0x8]
00604B9C  89 70 08                  MOV dword ptr [EAX + 0x8],ESI
00604B9F  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00604BA2  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
00604BA5  8B 82 15 02 00 00         MOV EAX,dword ptr [EDX + 0x215]
00604BAB  33 FF                     XOR EDI,EDI
00604BAD  3B C7                     CMP EAX,EDI
00604BAF  74 64                     JZ 0x00604c15
00604BB1  89 7D C8                  MOV dword ptr [EBP + -0x38],EDI
00604BB4  8D 55 E4                  LEA EDX,[EBP + -0x1c]
00604BB7  52                        PUSH EDX
00604BB8  50                        PUSH EAX
00604BB9  E8 62 B4 0A 00            CALL 0x006b0020
00604BBE  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00604BC1  8B 45 E4                  MOV EAX,dword ptr [EBP + -0x1c]
00604BC4  83 C0 04                  ADD EAX,0x4
00604BC7  8B 13                     MOV EDX,dword ptr [EBX]
00604BC9  03 D0                     ADD EDX,EAX
00604BCB  89 13                     MOV dword ptr [EBX],EDX
00604BCD  8B C2                     MOV EAX,EDX
00604BCF  50                        PUSH EAX
00604BD0  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
00604BD3  51                        PUSH ECX
00604BD4  E8 77 83 0A 00            CALL 0x006acf50
00604BD9  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00604BDC  8B 13                     MOV EDX,dword ptr [EBX]
00604BDE  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00604BE1  2B D1                     SUB EDX,ECX
00604BE3  8D 44 02 FC               LEA EAX,[EDX + EAX*0x1 + -0x4]
00604BE7  89 08                     MOV dword ptr [EAX],ECX
00604BE9  8B 3B                     MOV EDI,dword ptr [EBX]
00604BEB  8B 4D E4                  MOV ECX,dword ptr [EBP + -0x1c]
00604BEE  2B F9                     SUB EDI,ECX
00604BF0  03 7D BC                  ADD EDI,dword ptr [EBP + -0x44]
00604BF3  8B 75 C8                  MOV ESI,dword ptr [EBP + -0x38]
00604BF6  8B C1                     MOV EAX,ECX
00604BF8  C1 E9 02                  SHR ECX,0x2
00604BFB  F3 A5                     MOVSD.REP ES:EDI,ESI
00604BFD  8B C8                     MOV ECX,EAX
00604BFF  83 E1 03                  AND ECX,0x3
00604C02  F3 A4                     MOVSB.REP ES:EDI,ESI
00604C04  8D 4D C8                  LEA ECX,[EBP + -0x38]
00604C07  51                        PUSH ECX
00604C08  E8 53 64 0A 00            CALL 0x006ab060
00604C0D  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00604C13  33 FF                     XOR EDI,EDI
LAB_00604c15:
00604C15  8B B2 69 02 00 00         MOV ESI,dword ptr [EDX + 0x269]
00604C1B  3B F7                     CMP ESI,EDI
00604C1D  0F 84 36 01 00 00         JZ 0x00604d59
00604C23  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00604C26  8D 04 F5 00 00 00 00      LEA EAX,[ESI*0x8 + 0x0]
00604C2D  83 C0 03                  ADD EAX,0x3
00604C30  24 FC                     AND AL,0xfc
00604C32  E8 09 8E 12 00            CALL 0x0072da40
00604C37  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
00604C3A  8B C4                     MOV EAX,ESP
00604C3C  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
00604C3F  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
00604C46  89 7D D4                  MOV dword ptr [EBP + -0x2c],EDI
00604C49  3B F7                     CMP ESI,EDI
00604C4B  7E 5C                     JLE 0x00604ca9
00604C4D  8B F0                     MOV ESI,EAX
00604C4F  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00604C55  8D 82 19 02 00 00         LEA EAX,[EDX + 0x219]
00604C5B  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
LAB_00604c61:
00604C61  8B 08                     MOV ECX,dword ptr [EAX]
00604C63  85 C9                     TEST ECX,ECX
00604C65  74 1B                     JZ 0x00604c82
00604C67  8D 45 D8                  LEA EAX,[EBP + -0x28]
00604C6A  50                        PUSH EAX
00604C6B  E8 0E F0 DF FF            CALL 0x00403c7e
00604C70  89 45 C8                  MOV dword ptr [EBP + -0x38],EAX
00604C73  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00604C76  8D 7C 07 04               LEA EDI,[EDI + EAX*0x1 + 0x4]
00604C7A  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
00604C7D  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
00604C80  89 0E                     MOV dword ptr [ESI],ECX
LAB_00604c82:
00604C82  8B 4D D4                  MOV ECX,dword ptr [EBP + -0x2c]
00604C85  41                        INC ECX
00604C86  89 4D D4                  MOV dword ptr [EBP + -0x2c],ECX
00604C89  8B 85 58 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff58]
00604C8F  83 C0 04                  ADD EAX,0x4
00604C92  89 85 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EAX
00604C98  83 C6 08                  ADD ESI,0x8
00604C9B  8B 95 5C FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff5c]
00604CA1  3B 8A 69 02 00 00         CMP ECX,dword ptr [EDX + 0x269]
00604CA7  7C B8                     JL 0x00604c61
LAB_00604ca9:
00604CA9  8B 13                     MOV EDX,dword ptr [EBX]
00604CAB  03 D7                     ADD EDX,EDI
00604CAD  89 13                     MOV dword ptr [EBX],EDX
00604CAF  8B C2                     MOV EAX,EDX
00604CB1  50                        PUSH EAX
00604CB2  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00604CB5  50                        PUSH EAX
00604CB6  E8 95 82 0A 00            CALL 0x006acf50
00604CBB  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00604CBE  8B 1B                     MOV EBX,dword ptr [EBX]
00604CC0  2B DF                     SUB EBX,EDI
00604CC2  03 D8                     ADD EBX,EAX
00604CC4  C7 45 D4 00 00 00 00      MOV dword ptr [EBP + -0x2c],0x0
00604CCB  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00604CD1  8B 81 69 02 00 00         MOV EAX,dword ptr [ECX + 0x269]
00604CD7  85 C0                     TEST EAX,EAX
00604CD9  7E 7E                     JLE 0x00604d59
00604CDB  8B 55 E0                  MOV EDX,dword ptr [EBP + -0x20]
00604CDE  8D 42 04                  LEA EAX,[EDX + 0x4]
00604CE1  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
00604CE7  8D 91 19 02 00 00         LEA EDX,[ECX + 0x219]
00604CED  89 95 50 FF FF FF         MOV dword ptr [EBP + 0xffffff50],EDX
LAB_00604cf3:
00604CF3  8B 95 50 FF FF FF         MOV EDX,dword ptr [EBP + 0xffffff50]
00604CF9  83 3A 00                  CMP dword ptr [EDX],0x0
00604CFC  74 3C                     JZ 0x00604d3a
00604CFE  89 5D C0                  MOV dword ptr [EBP + -0x40],EBX
00604D01  8B 08                     MOV ECX,dword ptr [EAX]
00604D03  89 0B                     MOV dword ptr [EBX],ECX
00604D05  83 C3 04                  ADD EBX,0x4
00604D08  8B 70 FC                  MOV ESI,dword ptr [EAX + -0x4]
00604D0B  89 75 C8                  MOV dword ptr [EBP + -0x38],ESI
00604D0E  8B 08                     MOV ECX,dword ptr [EAX]
00604D10  8B FB                     MOV EDI,EBX
00604D12  8B D1                     MOV EDX,ECX
00604D14  C1 E9 02                  SHR ECX,0x2
00604D17  F3 A5                     MOVSD.REP ES:EDI,ESI
00604D19  8B CA                     MOV ECX,EDX
00604D1B  83 E1 03                  AND ECX,0x3
00604D1E  F3 A4                     MOVSB.REP ES:EDI,ESI
00604D20  8D 45 C8                  LEA EAX,[EBP + -0x38]
00604D23  50                        PUSH EAX
00604D24  E8 37 63 0A 00            CALL 0x006ab060
00604D29  8B 4D C0                  MOV ECX,dword ptr [EBP + -0x40]
00604D2C  03 19                     ADD EBX,dword ptr [ECX]
00604D2E  8B 8D 5C FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff5c]
00604D34  8B 85 54 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff54]
LAB_00604d3a:
00604D3A  8B 55 D4                  MOV EDX,dword ptr [EBP + -0x2c]
00604D3D  42                        INC EDX
00604D3E  89 55 D4                  MOV dword ptr [EBP + -0x2c],EDX
00604D41  83 85 50 FF FF FF 04      ADD dword ptr [EBP + 0xffffff50],0x4
00604D48  83 C0 08                  ADD EAX,0x8
00604D4B  89 85 54 FF FF FF         MOV dword ptr [EBP + 0xffffff54],EAX
00604D51  3B 91 69 02 00 00         CMP EDX,dword ptr [ECX + 0x269]
00604D57  7C 9A                     JL 0x00604cf3
LAB_00604d59:
00604D59  8B 85 78 FF FF FF         MOV EAX,dword ptr [EBP + 0xffffff78]
00604D5F  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00604D64  EB 7E                     JMP 0x00604de4
LAB_00604d92:
00604D92  8B 8D 78 FF FF FF         MOV ECX,dword ptr [EBP + 0xffffff78]
00604D98  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00604D9E  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00604DA1  85 C0                     TEST EAX,EAX
00604DA3  74 09                     JZ 0x00604dae
00604DA5  8D 55 BC                  LEA EDX,[EBP + -0x44]
00604DA8  52                        PUSH EDX
00604DA9  E8 B2 62 0A 00            CALL 0x006ab060
LAB_00604dae:
00604DAE  68 94 F6 7C 00            PUSH 0x7cf694
00604DB3  68 CC 4C 7A 00            PUSH 0x7a4ccc
00604DB8  56                        PUSH ESI
00604DB9  6A 00                     PUSH 0x0
00604DBB  68 DF 02 00 00            PUSH 0x2df
00604DC0  68 30 F6 7C 00            PUSH 0x7cf630
00604DC5  E8 06 87 0A 00            CALL 0x006ad4d0
00604DCA  83 C4 18                  ADD ESP,0x18
00604DCD  85 C0                     TEST EAX,EAX
00604DCF  74 01                     JZ 0x00604dd2
00604DD1  CC                        INT3
LAB_00604dd2:
00604DD2  68 E1 02 00 00            PUSH 0x2e1
00604DD7  68 30 F6 7C 00            PUSH 0x7cf630
00604DDC  6A 00                     PUSH 0x0
00604DDE  56                        PUSH ESI
00604DDF  E8 5C 10 0A 00            CALL 0x006a5e40
LAB_00604de4:
00604DE4  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00604DE7  8D A5 44 FF FF FF         LEA ESP,[EBP + 0xffffff44]
00604DED  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
00604DF0  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
00604DF7  5F                        POP EDI
00604DF8  5E                        POP ESI
00604DF9  5B                        POP EBX
00604DFA  8B E5                     MOV ESP,EBP
00604DFC  5D                        POP EBP
00604DFD  C2 04 00                  RET 0x4
