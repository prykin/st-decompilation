FUN_0052cce0:
0052CCE0  55                        PUSH EBP
0052CCE1  8B EC                     MOV EBP,ESP
0052CCE3  81 EC AC 00 00 00         SUB ESP,0xac
0052CCE9  56                        PUSH ESI
0052CCEA  57                        PUSH EDI
0052CCEB  B9 0F 00 00 00            MOV ECX,0xf
0052CCF0  33 C0                     XOR EAX,EAX
0052CCF2  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
0052CCF8  33 D2                     XOR EDX,EDX
0052CCFA  F3 AB                     STOSD.REP ES:EDI
0052CCFC  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
0052CCFF  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
0052CD04  88 85 6B FF FF FF         MOV byte ptr [EBP + 0xffffff6b],AL
0052CD0A  83 C9 FF                  OR ECX,0xffffffff
0052CD0D  33 C0                     XOR EAX,EAX
0052CD0F  8D B5 70 FF FF FF         LEA ESI,[EBP + 0xffffff70]
0052CD15  F2 AE                     SCASB.REPNE ES:EDI
0052CD17  F7 D1                     NOT ECX
0052CD19  2B F9                     SUB EDI,ECX
0052CD1B  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
0052CD1E  8B C1                     MOV EAX,ECX
0052CD20  8B F7                     MOV ESI,EDI
0052CD22  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
0052CD25  C7 85 54 FF FF FF F1 FF FF FF  MOV dword ptr [EBP + 0xffffff54],0xfffffff1
0052CD2F  C1 E9 02                  SHR ECX,0x2
0052CD32  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
0052CD38  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
0052CD3E  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
0052CD44  C7 85 64 FF FF FF BC 02 00 00  MOV dword ptr [EBP + 0xffffff64],0x2bc
0052CD4E  88 95 68 FF FF FF         MOV byte ptr [EBP + 0xffffff68],DL
0052CD54  88 95 69 FF FF FF         MOV byte ptr [EBP + 0xffffff69],DL
0052CD5A  88 95 6A FF FF FF         MOV byte ptr [EBP + 0xffffff6a],DL
0052CD60  C6 85 6C FF FF FF 03      MOV byte ptr [EBP + 0xffffff6c],0x3
0052CD67  C6 85 6D FF FF FF 02      MOV byte ptr [EBP + 0xffffff6d],0x2
0052CD6E  C6 85 6E FF FF FF 01      MOV byte ptr [EBP + 0xffffff6e],0x1
0052CD75  C6 85 6F FF FF FF 22      MOV byte ptr [EBP + 0xffffff6f],0x22
0052CD7C  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
0052CD7F  F3 A5                     MOVSD.REP ES:EDI,ESI
0052CD81  8B C8                     MOV ECX,EAX
0052CD83  B0 A6                     MOV AL,0xa6
0052CD85  83 E1 03                  AND ECX,0x3
0052CD88  88 45 E9                  MOV byte ptr [EBP + -0x17],AL
0052CD8B  F3 A4                     MOVSB.REP ES:EDI,ESI
0052CD8D  B9 0A 00 00 00            MOV ECX,0xa
0052CD92  88 45 EB                  MOV byte ptr [EBP + -0x15],AL
0052CD95  88 4D EA                  MOV byte ptr [EBP + -0x16],CL
0052CD98  C6 45 EC 10               MOV byte ptr [EBP + -0x14],0x10
0052CD9C  88 45 ED                  MOV byte ptr [EBP + -0x13],AL
0052CD9F  C6 45 EE 16               MOV byte ptr [EBP + -0x12],0x16
0052CDA3  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
0052CDA6  C6 45 F0 1C               MOV byte ptr [EBP + -0x10],0x1c
0052CDAA  88 45 F1                  MOV byte ptr [EBP + -0xf],AL
0052CDAD  C6 45 F2 22               MOV byte ptr [EBP + -0xe],0x22
0052CDB1  88 45 F3                  MOV byte ptr [EBP + -0xd],AL
0052CDB4  C6 45 F4 28               MOV byte ptr [EBP + -0xc],0x28
0052CDB8  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
0052CDBB  C6 45 F6 2E               MOV byte ptr [EBP + -0xa],0x2e
0052CDBF  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
0052CDC2  C6 45 F8 35               MOV byte ptr [EBP + -0x8],0x35
0052CDC6  88 45 F9                  MOV byte ptr [EBP + -0x7],AL
0052CDC9  C6 45 FA AC               MOV byte ptr [EBP + -0x6],0xac
0052CDCD  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
0052CDD0  C6 45 FC 8E               MOV byte ptr [EBP + -0x4],0x8e
0052CDD4  C6 45 90 20               MOV byte ptr [EBP + -0x70],0x20
0052CDD8  C6 45 91 21               MOV byte ptr [EBP + -0x6f],0x21
0052CDDC  C6 45 92 22               MOV byte ptr [EBP + -0x6e],0x22
0052CDE0  C6 45 93 23               MOV byte ptr [EBP + -0x6d],0x23
0052CDE4  C6 45 94 25               MOV byte ptr [EBP + -0x6c],0x25
0052CDE8  C6 45 95 26               MOV byte ptr [EBP + -0x6b],0x26
0052CDEC  C6 45 96 27               MOV byte ptr [EBP + -0x6a],0x27
0052CDF0  C6 45 97 28               MOV byte ptr [EBP + -0x69],0x28
0052CDF4  C6 45 98 29               MOV byte ptr [EBP + -0x68],0x29
0052CDF8  C6 45 99 2C               MOV byte ptr [EBP + -0x67],0x2c
0052CDFC  C6 45 9A 2D               MOV byte ptr [EBP + -0x66],0x2d
0052CE00  C6 45 9B 2E               MOV byte ptr [EBP + -0x65],0x2e
0052CE04  C6 45 9C 2F               MOV byte ptr [EBP + -0x64],0x2f
0052CE08  C6 45 9D 30               MOV byte ptr [EBP + -0x63],0x30
0052CE0C  C6 45 9E 31               MOV byte ptr [EBP + -0x62],0x31
0052CE10  C6 45 9F 32               MOV byte ptr [EBP + -0x61],0x32
0052CE14  C6 45 A0 33               MOV byte ptr [EBP + -0x60],0x33
0052CE18  C6 45 A1 34               MOV byte ptr [EBP + -0x5f],0x34
0052CE1C  C6 45 A2 35               MOV byte ptr [EBP + -0x5e],0x35
0052CE20  C6 45 A3 36               MOV byte ptr [EBP + -0x5d],0x36
0052CE24  C6 45 A4 37               MOV byte ptr [EBP + -0x5c],0x37
0052CE28  B0 0D                     MOV AL,0xd
0052CE2A  88 4D B1                  MOV byte ptr [EBP + -0x4f],CL
0052CE2D  88 45 B0                  MOV byte ptr [EBP + -0x50],AL
0052CE30  88 45 D2                  MOV byte ptr [EBP + -0x2e],AL
0052CE33  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0052CE36  88 4D D3                  MOV byte ptr [EBP + -0x2d],CL
0052CE39  50                        PUSH EAX
0052CE3A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0052CE3D  68 1C 00 10 00            PUSH 0x10001c
0052CE42  6A 01                     PUSH 0x1
0052CE44  6A 02                     PUSH 0x2
0052CE46  6A 02                     PUSH 0x2
0052CE48  51                        PUSH ECX
0052CE49  8D 4D E8                  LEA ECX,[EBP + -0x18]
0052CE4C  51                        PUSH ECX
0052CE4D  8D 4D 90                  LEA ECX,[EBP + -0x70]
0052CE50  50                        PUSH EAX
0052CE51  51                        PUSH ECX
0052CE52  C6 45 A5 38               MOV byte ptr [EBP + -0x5b],0x38
0052CE56  C6 45 A6 39               MOV byte ptr [EBP + -0x5a],0x39
0052CE5A  C6 45 A7 3A               MOV byte ptr [EBP + -0x59],0x3a
0052CE5E  C6 45 A8 3D               MOV byte ptr [EBP + -0x58],0x3d
0052CE62  C6 45 A9 3E               MOV byte ptr [EBP + -0x57],0x3e
0052CE66  C6 45 AA 3F               MOV byte ptr [EBP + -0x56],0x3f
0052CE6A  C6 45 AB 41               MOV byte ptr [EBP + -0x55],0x41
0052CE6E  C6 45 AC 42               MOV byte ptr [EBP + -0x54],0x42
0052CE72  C6 45 AD 43               MOV byte ptr [EBP + -0x53],0x43
0052CE76  C6 45 AE 44               MOV byte ptr [EBP + -0x52],0x44
0052CE7A  C6 45 AF 45               MOV byte ptr [EBP + -0x51],0x45
0052CE7E  C6 45 B2 46               MOV byte ptr [EBP + -0x4e],0x46
0052CE82  C6 45 B3 47               MOV byte ptr [EBP + -0x4d],0x47
0052CE86  C6 45 B4 48               MOV byte ptr [EBP + -0x4c],0x48
0052CE8A  C6 45 B5 49               MOV byte ptr [EBP + -0x4b],0x49
0052CE8E  C6 45 B6 4A               MOV byte ptr [EBP + -0x4a],0x4a
0052CE92  C6 45 B7 4B               MOV byte ptr [EBP + -0x49],0x4b
0052CE96  C6 45 B8 4C               MOV byte ptr [EBP + -0x48],0x4c
0052CE9A  C6 45 B9 4D               MOV byte ptr [EBP + -0x47],0x4d
0052CE9E  C6 45 BA 4E               MOV byte ptr [EBP + -0x46],0x4e
0052CEA2  C6 45 BB 4F               MOV byte ptr [EBP + -0x45],0x4f
0052CEA6  C6 45 BC 50               MOV byte ptr [EBP + -0x44],0x50
0052CEAA  C6 45 BD 51               MOV byte ptr [EBP + -0x43],0x51
0052CEAE  C6 45 BE 52               MOV byte ptr [EBP + -0x42],0x52
0052CEB2  C6 45 BF 53               MOV byte ptr [EBP + -0x41],0x53
0052CEB6  C6 45 C0 54               MOV byte ptr [EBP + -0x40],0x54
0052CEBA  C6 45 C1 55               MOV byte ptr [EBP + -0x3f],0x55
0052CEBE  C6 45 C2 56               MOV byte ptr [EBP + -0x3e],0x56
0052CEC2  C6 45 C3 57               MOV byte ptr [EBP + -0x3d],0x57
0052CEC6  C6 45 C4 58               MOV byte ptr [EBP + -0x3c],0x58
0052CECA  C6 45 C5 59               MOV byte ptr [EBP + -0x3b],0x59
0052CECE  C6 45 C6 5A               MOV byte ptr [EBP + -0x3a],0x5a
0052CED2  C6 45 C7 5C               MOV byte ptr [EBP + -0x39],0x5c
0052CED6  C6 45 C8 5F               MOV byte ptr [EBP + -0x38],0x5f
0052CEDA  C6 45 C9 61               MOV byte ptr [EBP + -0x37],0x61
0052CEDE  C6 45 CA 62               MOV byte ptr [EBP + -0x36],0x62
0052CEE2  C6 45 CB 63               MOV byte ptr [EBP + -0x35],0x63
0052CEE6  C6 45 CC 64               MOV byte ptr [EBP + -0x34],0x64
0052CEEA  C6 45 CD 65               MOV byte ptr [EBP + -0x33],0x65
0052CEEE  C6 45 CE 66               MOV byte ptr [EBP + -0x32],0x66
0052CEF2  C6 45 CF 67               MOV byte ptr [EBP + -0x31],0x67
0052CEF6  C6 45 D0 68               MOV byte ptr [EBP + -0x30],0x68
0052CEFA  C6 45 D1 69               MOV byte ptr [EBP + -0x2f],0x69
0052CEFE  C6 45 D4 6A               MOV byte ptr [EBP + -0x2c],0x6a
0052CF02  C6 45 D5 6B               MOV byte ptr [EBP + -0x2b],0x6b
0052CF06  C6 45 D6 6C               MOV byte ptr [EBP + -0x2a],0x6c
0052CF0A  C6 45 D7 6D               MOV byte ptr [EBP + -0x29],0x6d
0052CF0E  C6 45 D8 6E               MOV byte ptr [EBP + -0x28],0x6e
0052CF12  C6 45 D9 6F               MOV byte ptr [EBP + -0x27],0x6f
0052CF16  C6 45 DA 70               MOV byte ptr [EBP + -0x26],0x70
0052CF1A  C6 45 DB 71               MOV byte ptr [EBP + -0x25],0x71
0052CF1E  C6 45 DC 72               MOV byte ptr [EBP + -0x24],0x72
0052CF22  C6 45 DD 73               MOV byte ptr [EBP + -0x23],0x73
0052CF26  C6 45 DE 74               MOV byte ptr [EBP + -0x22],0x74
0052CF2A  C6 45 DF 75               MOV byte ptr [EBP + -0x21],0x75
0052CF2E  C6 45 E0 76               MOV byte ptr [EBP + -0x20],0x76
0052CF32  C6 45 E1 77               MOV byte ptr [EBP + -0x1f],0x77
0052CF36  C6 45 E2 78               MOV byte ptr [EBP + -0x1e],0x78
0052CF3A  C6 45 E3 79               MOV byte ptr [EBP + -0x1d],0x79
0052CF3E  C6 45 E4 7A               MOV byte ptr [EBP + -0x1c],0x7a
0052CF42  C6 45 E5 7C               MOV byte ptr [EBP + -0x1b],0x7c
0052CF46  C6 45 E6 7E               MOV byte ptr [EBP + -0x1a],0x7e
0052CF4A  52                        PUSH EDX
0052CF4B  8D 95 54 FF FF FF         LEA EDX,[EBP + 0xffffff54]
0052CF51  52                        PUSH EDX
0052CF52  68 9D 01 00 00            PUSH 0x19d
0052CF57  E8 94 02 1E 00            CALL 0x0070d1f0
0052CF5C  83 C4 30                  ADD ESP,0x30
0052CF5F  5F                        POP EDI
0052CF60  5E                        POP ESI
0052CF61  8B E5                     MOV ESP,EBP
0052CF63  5D                        POP EBP
0052CF64  C3                        RET
