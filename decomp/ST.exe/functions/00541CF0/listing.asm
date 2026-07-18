FUN_00541cf0:
00541CF0  55                        PUSH EBP
00541CF1  8B EC                     MOV EBP,ESP
00541CF3  81 EC 8C 00 00 00         SUB ESP,0x8c
00541CF9  56                        PUSH ESI
00541CFA  57                        PUSH EDI
00541CFB  B9 0F 00 00 00            MOV ECX,0xf
00541D00  33 C0                     XOR EAX,EAX
00541D02  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
00541D08  33 D2                     XOR EDX,EDX
00541D0A  F3 AB                     STOSD.REP ES:EDI
00541D0C  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00541D0F  BF B4 1B 7C 00            MOV EDI,0x7c1bb4
00541D14  88 45 8B                  MOV byte ptr [EBP + -0x75],AL
00541D17  83 C9 FF                  OR ECX,0xffffffff
00541D1A  33 C0                     XOR EAX,EAX
00541D1C  8D 75 90                  LEA ESI,[EBP + -0x70]
00541D1F  F2 AE                     SCASB.REPNE ES:EDI
00541D21  F7 D1                     NOT ECX
00541D23  2B F9                     SUB EDI,ECX
00541D25  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00541D28  8B C1                     MOV EAX,ECX
00541D2A  8B F7                     MOV ESI,EDI
00541D2C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00541D2F  C7 85 74 FF FF FF F8 FF FF FF  MOV dword ptr [EBP + 0xffffff74],0xfffffff8
00541D39  C1 E9 02                  SHR ECX,0x2
00541D3C  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00541D42  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00541D48  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00541D4B  C7 45 84 90 01 00 00      MOV dword ptr [EBP + -0x7c],0x190
00541D52  88 55 88                  MOV byte ptr [EBP + -0x78],DL
00541D55  88 55 89                  MOV byte ptr [EBP + -0x77],DL
00541D58  88 55 8A                  MOV byte ptr [EBP + -0x76],DL
00541D5B  C6 45 8C 01               MOV byte ptr [EBP + -0x74],0x1
00541D5F  C6 45 8D 02               MOV byte ptr [EBP + -0x73],0x2
00541D63  C6 45 8E 01               MOV byte ptr [EBP + -0x72],0x1
00541D67  C6 45 8F 22               MOV byte ptr [EBP + -0x71],0x22
00541D6B  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00541D6E  F3 A5                     MOVSD.REP ES:EDI,ESI
00541D70  8B C8                     MOV ECX,EAX
00541D72  B0 10                     MOV AL,0x10
00541D74  88 45 EE                  MOV byte ptr [EBP + -0x12],AL
00541D77  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
00541D7A  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
00541D7D  88 45 F1                  MOV byte ptr [EBP + -0xf],AL
00541D80  88 45 F2                  MOV byte ptr [EBP + -0xe],AL
00541D83  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
00541D86  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
00541D89  88 45 F6                  MOV byte ptr [EBP + -0xa],AL
00541D8C  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
00541D8F  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00541D92  83 E1 03                  AND ECX,0x3
00541D95  B0 5F                     MOV AL,0x5f
00541D97  F3 A4                     MOVSB.REP ES:EDI,ESI
00541D99  C6 45 ED 13               MOV byte ptr [EBP + -0x13],0x13
00541D9D  C6 45 F3 12               MOV byte ptr [EBP + -0xd],0x12
00541DA1  C6 45 F9 CF               MOV byte ptr [EBP + -0x7],0xcf
00541DA5  88 45 FA                  MOV byte ptr [EBP + -0x6],AL
00541DA8  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
00541DAB  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00541DAE  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
00541DB1  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
00541DB4  C6 45 B0 20               MOV byte ptr [EBP + -0x50],0x20
00541DB8  C6 45 B1 21               MOV byte ptr [EBP + -0x4f],0x21
00541DBC  C6 45 B2 22               MOV byte ptr [EBP + -0x4e],0x22
00541DC0  C6 45 B3 23               MOV byte ptr [EBP + -0x4d],0x23
00541DC4  C6 45 B4 25               MOV byte ptr [EBP + -0x4c],0x25
00541DC8  C6 45 B5 26               MOV byte ptr [EBP + -0x4b],0x26
00541DCC  C6 45 B6 27               MOV byte ptr [EBP + -0x4a],0x27
00541DD0  C6 45 B7 28               MOV byte ptr [EBP + -0x49],0x28
00541DD4  C6 45 B8 29               MOV byte ptr [EBP + -0x48],0x29
00541DD8  C6 45 B9 2C               MOV byte ptr [EBP + -0x47],0x2c
00541DDC  C6 45 BA 2D               MOV byte ptr [EBP + -0x46],0x2d
00541DE0  C6 45 BB 2E               MOV byte ptr [EBP + -0x45],0x2e
00541DE4  C6 45 BC 2F               MOV byte ptr [EBP + -0x44],0x2f
00541DE8  C6 45 BD 30               MOV byte ptr [EBP + -0x43],0x30
00541DEC  C6 45 BE 31               MOV byte ptr [EBP + -0x42],0x31
00541DF0  C6 45 BF 32               MOV byte ptr [EBP + -0x41],0x32
00541DF4  C6 45 C0 33               MOV byte ptr [EBP + -0x40],0x33
00541DF8  C6 45 C1 34               MOV byte ptr [EBP + -0x3f],0x34
00541DFC  C6 45 C2 35               MOV byte ptr [EBP + -0x3e],0x35
00541E00  C6 45 C3 36               MOV byte ptr [EBP + -0x3d],0x36
00541E04  C6 45 C4 37               MOV byte ptr [EBP + -0x3c],0x37
00541E08  C6 45 C5 38               MOV byte ptr [EBP + -0x3b],0x38
00541E0C  C6 45 C6 39               MOV byte ptr [EBP + -0x3a],0x39
00541E10  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00541E13  8D 45 EC                  LEA EAX,[EBP + -0x14]
00541E16  51                        PUSH ECX
00541E17  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00541E1A  68 1C 02 10 00            PUSH 0x10021c
00541E1F  52                        PUSH EDX
00541E20  6A 01                     PUSH 0x1
00541E22  6A 06                     PUSH 0x6
00541E24  6A 03                     PUSH 0x3
00541E26  50                        PUSH EAX
00541E27  8D 45 B0                  LEA EAX,[EBP + -0x50]
00541E2A  51                        PUSH ECX
00541E2B  50                        PUSH EAX
00541E2C  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00541E32  52                        PUSH EDX
00541E33  51                        PUSH ECX
00541E34  68 9D 01 00 00            PUSH 0x19d
00541E39  C6 45 C7 3A               MOV byte ptr [EBP + -0x39],0x3a
00541E3D  C6 45 C8 3D               MOV byte ptr [EBP + -0x38],0x3d
00541E41  C6 45 C9 3E               MOV byte ptr [EBP + -0x37],0x3e
00541E45  C6 45 CA 3F               MOV byte ptr [EBP + -0x36],0x3f
00541E49  C6 45 CB 41               MOV byte ptr [EBP + -0x35],0x41
00541E4D  C6 45 CC 42               MOV byte ptr [EBP + -0x34],0x42
00541E51  C6 45 CD 43               MOV byte ptr [EBP + -0x33],0x43
00541E55  C6 45 CE 44               MOV byte ptr [EBP + -0x32],0x44
00541E59  C6 45 CF 45               MOV byte ptr [EBP + -0x31],0x45
00541E5D  C6 45 D0 0D               MOV byte ptr [EBP + -0x30],0xd
00541E61  C6 45 D1 0A               MOV byte ptr [EBP + -0x2f],0xa
00541E65  C6 45 D2 46               MOV byte ptr [EBP + -0x2e],0x46
00541E69  C6 45 D3 47               MOV byte ptr [EBP + -0x2d],0x47
00541E6D  C6 45 D4 48               MOV byte ptr [EBP + -0x2c],0x48
00541E71  C6 45 D5 49               MOV byte ptr [EBP + -0x2b],0x49
00541E75  C6 45 D6 4A               MOV byte ptr [EBP + -0x2a],0x4a
00541E79  C6 45 D7 4B               MOV byte ptr [EBP + -0x29],0x4b
00541E7D  C6 45 D8 4C               MOV byte ptr [EBP + -0x28],0x4c
00541E81  C6 45 D9 4D               MOV byte ptr [EBP + -0x27],0x4d
00541E85  C6 45 DA 4E               MOV byte ptr [EBP + -0x26],0x4e
00541E89  C6 45 DB 4F               MOV byte ptr [EBP + -0x25],0x4f
00541E8D  C6 45 DC 50               MOV byte ptr [EBP + -0x24],0x50
00541E91  C6 45 DD 51               MOV byte ptr [EBP + -0x23],0x51
00541E95  C6 45 DE 52               MOV byte ptr [EBP + -0x22],0x52
00541E99  C6 45 DF 53               MOV byte ptr [EBP + -0x21],0x53
00541E9D  C6 45 E0 54               MOV byte ptr [EBP + -0x20],0x54
00541EA1  C6 45 E1 55               MOV byte ptr [EBP + -0x1f],0x55
00541EA5  C6 45 E2 56               MOV byte ptr [EBP + -0x1e],0x56
00541EA9  C6 45 E3 57               MOV byte ptr [EBP + -0x1d],0x57
00541EAD  C6 45 E4 58               MOV byte ptr [EBP + -0x1c],0x58
00541EB1  C6 45 E5 59               MOV byte ptr [EBP + -0x1b],0x59
00541EB5  C6 45 E6 5A               MOV byte ptr [EBP + -0x1a],0x5a
00541EB9  C6 45 E7 5C               MOV byte ptr [EBP + -0x19],0x5c
00541EBD  C6 45 E8 7C               MOV byte ptr [EBP + -0x18],0x7c
00541EC1  C6 45 E9 7E               MOV byte ptr [EBP + -0x17],0x7e
00541EC5  C6 45 EA 2A               MOV byte ptr [EBP + -0x16],0x2a
00541EC9  E8 22 B3 1C 00            CALL 0x0070d1f0
00541ECE  83 C4 30                  ADD ESP,0x30
00541ED1  5F                        POP EDI
00541ED2  5E                        POP ESI
00541ED3  8B E5                     MOV ESP,EBP
00541ED5  5D                        POP EBP
00541ED6  C3                        RET
