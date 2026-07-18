FUN_00594850:
00594850  55                        PUSH EBP
00594851  8B EC                     MOV EBP,ESP
00594853  81 EC AC 00 00 00         SUB ESP,0xac
00594859  56                        PUSH ESI
0059485A  57                        PUSH EDI
0059485B  B9 0F 00 00 00            MOV ECX,0xf
00594860  33 C0                     XOR EAX,EAX
00594862  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
00594868  33 D2                     XOR EDX,EDX
0059486A  F3 AB                     STOSD.REP ES:EDI
0059486C  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0059486F  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
00594874  88 85 6B FF FF FF         MOV byte ptr [EBP + 0xffffff6b],AL
0059487A  83 C9 FF                  OR ECX,0xffffffff
0059487D  33 C0                     XOR EAX,EAX
0059487F  8D B5 70 FF FF FF         LEA ESI,[EBP + 0xffffff70]
00594885  F2 AE                     SCASB.REPNE ES:EDI
00594887  F7 D1                     NOT ECX
00594889  2B F9                     SUB EDI,ECX
0059488B  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0059488E  8B C1                     MOV EAX,ECX
00594890  8B F7                     MOV ESI,EDI
00594892  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00594895  C7 85 54 FF FF FF F4 FF FF FF  MOV dword ptr [EBP + 0xffffff54],0xfffffff4
0059489F  C1 E9 02                  SHR ECX,0x2
005948A2  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
005948A8  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
005948AE  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
005948B4  C7 85 64 FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff64],0x190
005948BE  88 95 68 FF FF FF         MOV byte ptr [EBP + 0xffffff68],DL
005948C4  88 95 69 FF FF FF         MOV byte ptr [EBP + 0xffffff69],DL
005948CA  88 95 6A FF FF FF         MOV byte ptr [EBP + 0xffffff6a],DL
005948D0  C6 85 6C FF FF FF 03      MOV byte ptr [EBP + 0xffffff6c],0x3
005948D7  C6 85 6D FF FF FF 02      MOV byte ptr [EBP + 0xffffff6d],0x2
005948DE  C6 85 6E FF FF FF 01      MOV byte ptr [EBP + 0xffffff6e],0x1
005948E5  C6 85 6F FF FF FF 22      MOV byte ptr [EBP + 0xffffff6f],0x22
005948EC  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
005948EF  F3 A5                     MOVSD.REP ES:EDI,ESI
005948F1  8B C8                     MOV ECX,EAX
005948F3  B0 0D                     MOV AL,0xd
005948F5  83 E1 03                  AND ECX,0x3
005948F8  88 45 E9                  MOV byte ptr [EBP + -0x17],AL
005948FB  F3 A4                     MOVSB.REP ES:EDI,ESI
005948FD  C6 45 EA 0F               MOV byte ptr [EBP + -0x16],0xf
00594901  C6 45 EB 02               MOV byte ptr [EBP + -0x15],0x2
00594905  C6 45 EC FA               MOV byte ptr [EBP + -0x14],0xfa
00594909  C6 45 ED 03               MOV byte ptr [EBP + -0x13],0x3
0059490D  C6 45 EE FB               MOV byte ptr [EBP + -0x12],0xfb
00594911  C6 45 EF 01               MOV byte ptr [EBP + -0x11],0x1
00594915  C6 45 F0 F9               MOV byte ptr [EBP + -0x10],0xf9
00594919  C6 45 F1 05               MOV byte ptr [EBP + -0xf],0x5
0059491D  C6 45 F2 FD               MOV byte ptr [EBP + -0xe],0xfd
00594921  C6 45 F3 06               MOV byte ptr [EBP + -0xd],0x6
00594925  C6 45 F4 FE               MOV byte ptr [EBP + -0xc],0xfe
00594929  C6 45 F5 7C               MOV byte ptr [EBP + -0xb],0x7c
0059492D  C6 45 F6 79               MOV byte ptr [EBP + -0xa],0x79
00594931  C6 45 F7 73               MOV byte ptr [EBP + -0x9],0x73
00594935  C6 45 F8 76               MOV byte ptr [EBP + -0x8],0x76
00594939  C6 45 F9 F8               MOV byte ptr [EBP + -0x7],0xf8
0059493D  C6 45 FA F6               MOV byte ptr [EBP + -0x6],0xf6
00594941  C6 45 FB 1A               MOV byte ptr [EBP + -0x5],0x1a
00594945  C6 45 FC F7               MOV byte ptr [EBP + -0x4],0xf7
00594949  C6 45 90 20               MOV byte ptr [EBP + -0x70],0x20
0059494D  C6 45 91 21               MOV byte ptr [EBP + -0x6f],0x21
00594951  C6 45 92 22               MOV byte ptr [EBP + -0x6e],0x22
00594955  C6 45 93 23               MOV byte ptr [EBP + -0x6d],0x23
00594959  C6 45 94 25               MOV byte ptr [EBP + -0x6c],0x25
0059495D  C6 45 95 26               MOV byte ptr [EBP + -0x6b],0x26
00594961  C6 45 96 27               MOV byte ptr [EBP + -0x6a],0x27
00594965  C6 45 97 28               MOV byte ptr [EBP + -0x69],0x28
00594969  C6 45 98 29               MOV byte ptr [EBP + -0x68],0x29
0059496D  C6 45 99 2C               MOV byte ptr [EBP + -0x67],0x2c
00594971  C6 45 9A 2D               MOV byte ptr [EBP + -0x66],0x2d
00594975  C6 45 9B 2E               MOV byte ptr [EBP + -0x65],0x2e
00594979  C6 45 9C 2F               MOV byte ptr [EBP + -0x64],0x2f
0059497D  C6 45 9D 30               MOV byte ptr [EBP + -0x63],0x30
00594981  C6 45 9E 31               MOV byte ptr [EBP + -0x62],0x31
00594985  C6 45 9F 32               MOV byte ptr [EBP + -0x61],0x32
00594989  C6 45 A0 33               MOV byte ptr [EBP + -0x60],0x33
0059498D  C6 45 A1 34               MOV byte ptr [EBP + -0x5f],0x34
00594991  C6 45 A2 35               MOV byte ptr [EBP + -0x5e],0x35
00594995  C6 45 A3 36               MOV byte ptr [EBP + -0x5d],0x36
00594999  C6 45 A4 37               MOV byte ptr [EBP + -0x5c],0x37
0059499D  C6 45 A5 38               MOV byte ptr [EBP + -0x5b],0x38
005949A1  88 45 B0                  MOV byte ptr [EBP + -0x50],AL
005949A4  88 45 D2                  MOV byte ptr [EBP + -0x2e],AL
005949A7  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005949AA  B9 0A 00 00 00            MOV ECX,0xa
005949AF  50                        PUSH EAX
005949B0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005949B3  68 1C 00 20 00            PUSH 0x20001c
005949B8  52                        PUSH EDX
005949B9  6A 01                     PUSH 0x1
005949BB  6A 02                     PUSH 0x2
005949BD  88 4D B1                  MOV byte ptr [EBP + -0x4f],CL
005949C0  88 4D D3                  MOV byte ptr [EBP + -0x2d],CL
005949C3  51                        PUSH ECX
005949C4  8D 4D E8                  LEA ECX,[EBP + -0x18]
005949C7  51                        PUSH ECX
005949C8  8D 4D 90                  LEA ECX,[EBP + -0x70]
005949CB  50                        PUSH EAX
005949CC  51                        PUSH ECX
005949CD  52                        PUSH EDX
005949CE  C6 45 A6 39               MOV byte ptr [EBP + -0x5a],0x39
005949D2  C6 45 A7 3A               MOV byte ptr [EBP + -0x59],0x3a
005949D6  C6 45 A8 3D               MOV byte ptr [EBP + -0x58],0x3d
005949DA  C6 45 A9 3E               MOV byte ptr [EBP + -0x57],0x3e
005949DE  C6 45 AA 3F               MOV byte ptr [EBP + -0x56],0x3f
005949E2  C6 45 AB 41               MOV byte ptr [EBP + -0x55],0x41
005949E6  C6 45 AC 42               MOV byte ptr [EBP + -0x54],0x42
005949EA  C6 45 AD 43               MOV byte ptr [EBP + -0x53],0x43
005949EE  C6 45 AE 44               MOV byte ptr [EBP + -0x52],0x44
005949F2  C6 45 AF 45               MOV byte ptr [EBP + -0x51],0x45
005949F6  C6 45 B2 46               MOV byte ptr [EBP + -0x4e],0x46
005949FA  C6 45 B3 47               MOV byte ptr [EBP + -0x4d],0x47
005949FE  C6 45 B4 48               MOV byte ptr [EBP + -0x4c],0x48
00594A02  C6 45 B5 49               MOV byte ptr [EBP + -0x4b],0x49
00594A06  C6 45 B6 4A               MOV byte ptr [EBP + -0x4a],0x4a
00594A0A  C6 45 B7 4B               MOV byte ptr [EBP + -0x49],0x4b
00594A0E  C6 45 B8 4C               MOV byte ptr [EBP + -0x48],0x4c
00594A12  C6 45 B9 4D               MOV byte ptr [EBP + -0x47],0x4d
00594A16  C6 45 BA 4E               MOV byte ptr [EBP + -0x46],0x4e
00594A1A  C6 45 BB 4F               MOV byte ptr [EBP + -0x45],0x4f
00594A1E  C6 45 BC 50               MOV byte ptr [EBP + -0x44],0x50
00594A22  C6 45 BD 51               MOV byte ptr [EBP + -0x43],0x51
00594A26  C6 45 BE 52               MOV byte ptr [EBP + -0x42],0x52
00594A2A  C6 45 BF 53               MOV byte ptr [EBP + -0x41],0x53
00594A2E  C6 45 C0 54               MOV byte ptr [EBP + -0x40],0x54
00594A32  C6 45 C1 55               MOV byte ptr [EBP + -0x3f],0x55
00594A36  C6 45 C2 56               MOV byte ptr [EBP + -0x3e],0x56
00594A3A  C6 45 C3 57               MOV byte ptr [EBP + -0x3d],0x57
00594A3E  C6 45 C4 58               MOV byte ptr [EBP + -0x3c],0x58
00594A42  C6 45 C5 59               MOV byte ptr [EBP + -0x3b],0x59
00594A46  C6 45 C6 5A               MOV byte ptr [EBP + -0x3a],0x5a
00594A4A  C6 45 C7 5C               MOV byte ptr [EBP + -0x39],0x5c
00594A4E  C6 45 C8 5F               MOV byte ptr [EBP + -0x38],0x5f
00594A52  C6 45 C9 61               MOV byte ptr [EBP + -0x37],0x61
00594A56  C6 45 CA 62               MOV byte ptr [EBP + -0x36],0x62
00594A5A  C6 45 CB 63               MOV byte ptr [EBP + -0x35],0x63
00594A5E  C6 45 CC 64               MOV byte ptr [EBP + -0x34],0x64
00594A62  C6 45 CD 65               MOV byte ptr [EBP + -0x33],0x65
00594A66  C6 45 CE 66               MOV byte ptr [EBP + -0x32],0x66
00594A6A  C6 45 CF 67               MOV byte ptr [EBP + -0x31],0x67
00594A6E  C6 45 D0 68               MOV byte ptr [EBP + -0x30],0x68
00594A72  C6 45 D1 69               MOV byte ptr [EBP + -0x2f],0x69
00594A76  C6 45 D4 6A               MOV byte ptr [EBP + -0x2c],0x6a
00594A7A  C6 45 D5 6B               MOV byte ptr [EBP + -0x2b],0x6b
00594A7E  C6 45 D6 6C               MOV byte ptr [EBP + -0x2a],0x6c
00594A82  C6 45 D7 6D               MOV byte ptr [EBP + -0x29],0x6d
00594A86  C6 45 D8 6E               MOV byte ptr [EBP + -0x28],0x6e
00594A8A  C6 45 D9 6F               MOV byte ptr [EBP + -0x27],0x6f
00594A8E  C6 45 DA 70               MOV byte ptr [EBP + -0x26],0x70
00594A92  C6 45 DB 71               MOV byte ptr [EBP + -0x25],0x71
00594A96  C6 45 DC 72               MOV byte ptr [EBP + -0x24],0x72
00594A9A  C6 45 DD 73               MOV byte ptr [EBP + -0x23],0x73
00594A9E  C6 45 DE 74               MOV byte ptr [EBP + -0x22],0x74
00594AA2  C6 45 DF 75               MOV byte ptr [EBP + -0x21],0x75
00594AA6  C6 45 E0 76               MOV byte ptr [EBP + -0x20],0x76
00594AAA  C6 45 E1 77               MOV byte ptr [EBP + -0x1f],0x77
00594AAE  C6 45 E2 78               MOV byte ptr [EBP + -0x1e],0x78
00594AB2  C6 45 E3 79               MOV byte ptr [EBP + -0x1d],0x79
00594AB6  C6 45 E4 7A               MOV byte ptr [EBP + -0x1c],0x7a
00594ABA  C6 45 E5 7C               MOV byte ptr [EBP + -0x1b],0x7c
00594ABE  C6 45 E6 7E               MOV byte ptr [EBP + -0x1a],0x7e
00594AC2  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
00594AC8  52                        PUSH EDX
00594AC9  68 9D 01 00 00            PUSH 0x19d
00594ACE  E8 1D 87 17 00            CALL 0x0070d1f0
00594AD3  83 C4 30                  ADD ESP,0x30
00594AD6  5F                        POP EDI
00594AD7  5E                        POP ESI
00594AD8  8B E5                     MOV ESP,EBP
00594ADA  5D                        POP EBP
00594ADB  C3                        RET
