FUN_005419e0:
005419E0  55                        PUSH EBP
005419E1  8B EC                     MOV EBP,ESP
005419E3  81 EC A0 00 00 00         SUB ESP,0xa0
005419E9  53                        PUSH EBX
005419EA  56                        PUSH ESI
005419EB  57                        PUSH EDI
005419EC  B9 0F 00 00 00            MOV ECX,0xf
005419F1  33 C0                     XOR EAX,EAX
005419F3  8D BD 60 FF FF FF         LEA EDI,[EBP + 0xffffff60]
005419F9  F3 AB                     STOSD.REP ES:EDI
005419FB  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005419FE  BF D0 1B 7C 00            MOV EDI,0x7c1bd0
00541A03  88 85 77 FF FF FF         MOV byte ptr [EBP + 0xffffff77],AL
00541A09  83 C9 FF                  OR ECX,0xffffffff
00541A0C  33 C0                     XOR EAX,EAX
00541A0E  33 D2                     XOR EDX,EDX
00541A10  F2 AE                     SCASB.REPNE ES:EDI
00541A12  F7 D1                     NOT ECX
00541A14  2B F9                     SUB EDI,ECX
00541A16  8D 9D 7C FF FF FF         LEA EBX,[EBP + 0xffffff7c]
00541A1C  8B C1                     MOV EAX,ECX
00541A1E  8B F7                     MOV ESI,EDI
00541A20  8B FB                     MOV EDI,EBX
00541A22  C7 85 60 FF FF FF F3 FF FF FF  MOV dword ptr [EBP + 0xffffff60],0xfffffff3
00541A2C  C1 E9 02                  SHR ECX,0x2
00541A2F  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
00541A35  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
00541A3B  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
00541A41  C7 85 70 FF FF FF BC 02 00 00  MOV dword ptr [EBP + 0xffffff70],0x2bc
00541A4B  88 95 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],DL
00541A51  88 95 75 FF FF FF         MOV byte ptr [EBP + 0xffffff75],DL
00541A57  88 95 76 FF FF FF         MOV byte ptr [EBP + 0xffffff76],DL
00541A5D  C6 85 78 FF FF FF 01      MOV byte ptr [EBP + 0xffffff78],0x1
00541A64  C6 85 79 FF FF FF 02      MOV byte ptr [EBP + 0xffffff79],0x2
00541A6B  C6 85 7A FF FF FF 01      MOV byte ptr [EBP + 0xffffff7a],0x1
00541A72  C6 85 7B FF FF FF 22      MOV byte ptr [EBP + 0xffffff7b],0x22
00541A79  B3 20                     MOV BL,0x20
00541A7B  F3 A5                     MOVSD.REP ES:EDI,ESI
00541A7D  8B C8                     MOV ECX,EAX
00541A7F  B0 8E                     MOV AL,0x8e
00541A81  83 E1 03                  AND ECX,0x3
00541A84  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
00541A87  F3 A4                     MOVSB.REP ES:EDI,ESI
00541A89  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
00541A8C  B1 30                     MOV CL,0x30
00541A8E  B0 31                     MOV AL,0x31
00541A90  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
00541A93  C6 45 F5 75               MOV byte ptr [EBP + -0xb],0x75
00541A97  C6 45 F6 28               MOV byte ptr [EBP + -0xa],0x28
00541A9B  C6 45 F7 45               MOV byte ptr [EBP + -0x9],0x45
00541A9F  C6 45 F8 44               MOV byte ptr [EBP + -0x8],0x44
00541AA3  C6 45 F9 43               MOV byte ptr [EBP + -0x7],0x43
00541AA7  88 5D FA                  MOV byte ptr [EBP + -0x6],BL
00541AAA  88 4D FD                  MOV byte ptr [EBP + -0x3],CL
00541AAD  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
00541AB0  88 5D 9C                  MOV byte ptr [EBP + -0x64],BL
00541AB3  C6 45 9D 21               MOV byte ptr [EBP + -0x63],0x21
00541AB7  C6 45 9E 22               MOV byte ptr [EBP + -0x62],0x22
00541ABB  C6 45 9F 23               MOV byte ptr [EBP + -0x61],0x23
00541ABF  C6 45 A0 25               MOV byte ptr [EBP + -0x60],0x25
00541AC3  C6 45 A1 26               MOV byte ptr [EBP + -0x5f],0x26
00541AC7  C6 45 A2 27               MOV byte ptr [EBP + -0x5e],0x27
00541ACB  C6 45 A3 28               MOV byte ptr [EBP + -0x5d],0x28
00541ACF  C6 45 A4 29               MOV byte ptr [EBP + -0x5c],0x29
00541AD3  C6 45 A5 2C               MOV byte ptr [EBP + -0x5b],0x2c
00541AD7  C6 45 A6 2D               MOV byte ptr [EBP + -0x5a],0x2d
00541ADB  C6 45 A7 2E               MOV byte ptr [EBP + -0x59],0x2e
00541ADF  C6 45 A8 2F               MOV byte ptr [EBP + -0x58],0x2f
00541AE3  88 4D A9                  MOV byte ptr [EBP + -0x57],CL
00541AE6  88 45 AA                  MOV byte ptr [EBP + -0x56],AL
00541AE9  C6 45 AB 32               MOV byte ptr [EBP + -0x55],0x32
00541AED  C6 45 AC 33               MOV byte ptr [EBP + -0x54],0x33
00541AF1  C6 45 AD 34               MOV byte ptr [EBP + -0x53],0x34
00541AF5  C6 45 AE 35               MOV byte ptr [EBP + -0x52],0x35
00541AF9  C6 45 AF 36               MOV byte ptr [EBP + -0x51],0x36
00541AFD  C6 45 B0 37               MOV byte ptr [EBP + -0x50],0x37
00541B01  C6 45 B1 38               MOV byte ptr [EBP + -0x4f],0x38
00541B05  C6 45 B2 39               MOV byte ptr [EBP + -0x4e],0x39
00541B09  C6 45 B3 3A               MOV byte ptr [EBP + -0x4d],0x3a
00541B0D  C6 45 B4 3D               MOV byte ptr [EBP + -0x4c],0x3d
00541B11  C6 45 B5 3E               MOV byte ptr [EBP + -0x4b],0x3e
00541B15  C6 45 B6 3F               MOV byte ptr [EBP + -0x4a],0x3f
00541B19  C6 45 B7 41               MOV byte ptr [EBP + -0x49],0x41
00541B1D  C6 45 B8 42               MOV byte ptr [EBP + -0x48],0x42
00541B21  B1 0D                     MOV CL,0xd
00541B23  B0 0A                     MOV AL,0xa
00541B25  88 4D BC                  MOV byte ptr [EBP + -0x44],CL
00541B28  88 4D DE                  MOV byte ptr [EBP + -0x22],CL
00541B2B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00541B2E  88 45 BD                  MOV byte ptr [EBP + -0x43],AL
00541B31  51                        PUSH ECX
00541B32  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00541B35  68 1C 02 00 01            PUSH 0x100021c
00541B3A  52                        PUSH EDX
00541B3B  88 45 DF                  MOV byte ptr [EBP + -0x21],AL
00541B3E  6A 01                     PUSH 0x1
00541B40  6A 05                     PUSH 0x5
00541B42  8D 45 F4                  LEA EAX,[EBP + -0xc]
00541B45  6A 02                     PUSH 0x2
00541B47  50                        PUSH EAX
00541B48  8D 45 9C                  LEA EAX,[EBP + -0x64]
00541B4B  51                        PUSH ECX
00541B4C  50                        PUSH EAX
00541B4D  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
00541B53  52                        PUSH EDX
00541B54  51                        PUSH ECX
00541B55  68 9D 01 00 00            PUSH 0x19d
00541B5A  C6 45 B9 43               MOV byte ptr [EBP + -0x47],0x43
00541B5E  C6 45 BA 44               MOV byte ptr [EBP + -0x46],0x44
00541B62  C6 45 BB 45               MOV byte ptr [EBP + -0x45],0x45
00541B66  C6 45 BE 46               MOV byte ptr [EBP + -0x42],0x46
00541B6A  C6 45 BF 47               MOV byte ptr [EBP + -0x41],0x47
00541B6E  C6 45 C0 48               MOV byte ptr [EBP + -0x40],0x48
00541B72  C6 45 C1 49               MOV byte ptr [EBP + -0x3f],0x49
00541B76  C6 45 C2 4A               MOV byte ptr [EBP + -0x3e],0x4a
00541B7A  C6 45 C3 4B               MOV byte ptr [EBP + -0x3d],0x4b
00541B7E  C6 45 C4 4C               MOV byte ptr [EBP + -0x3c],0x4c
00541B82  C6 45 C5 4D               MOV byte ptr [EBP + -0x3b],0x4d
00541B86  C6 45 C6 4E               MOV byte ptr [EBP + -0x3a],0x4e
00541B8A  C6 45 C7 4F               MOV byte ptr [EBP + -0x39],0x4f
00541B8E  C6 45 C8 50               MOV byte ptr [EBP + -0x38],0x50
00541B92  C6 45 C9 51               MOV byte ptr [EBP + -0x37],0x51
00541B96  C6 45 CA 52               MOV byte ptr [EBP + -0x36],0x52
00541B9A  C6 45 CB 53               MOV byte ptr [EBP + -0x35],0x53
00541B9E  C6 45 CC 54               MOV byte ptr [EBP + -0x34],0x54
00541BA2  C6 45 CD 55               MOV byte ptr [EBP + -0x33],0x55
00541BA6  C6 45 CE 56               MOV byte ptr [EBP + -0x32],0x56
00541BAA  C6 45 CF 57               MOV byte ptr [EBP + -0x31],0x57
00541BAE  C6 45 D0 58               MOV byte ptr [EBP + -0x30],0x58
00541BB2  C6 45 D1 59               MOV byte ptr [EBP + -0x2f],0x59
00541BB6  C6 45 D2 5A               MOV byte ptr [EBP + -0x2e],0x5a
00541BBA  C6 45 D3 5C               MOV byte ptr [EBP + -0x2d],0x5c
00541BBE  C6 45 D4 5F               MOV byte ptr [EBP + -0x2c],0x5f
00541BC2  C6 45 D5 61               MOV byte ptr [EBP + -0x2b],0x61
00541BC6  C6 45 D6 62               MOV byte ptr [EBP + -0x2a],0x62
00541BCA  C6 45 D7 63               MOV byte ptr [EBP + -0x29],0x63
00541BCE  C6 45 D8 64               MOV byte ptr [EBP + -0x28],0x64
00541BD2  C6 45 D9 65               MOV byte ptr [EBP + -0x27],0x65
00541BD6  C6 45 DA 66               MOV byte ptr [EBP + -0x26],0x66
00541BDA  C6 45 DB 67               MOV byte ptr [EBP + -0x25],0x67
00541BDE  C6 45 DC 68               MOV byte ptr [EBP + -0x24],0x68
00541BE2  C6 45 DD 69               MOV byte ptr [EBP + -0x23],0x69
00541BE6  C6 45 E0 6A               MOV byte ptr [EBP + -0x20],0x6a
00541BEA  C6 45 E1 6B               MOV byte ptr [EBP + -0x1f],0x6b
00541BEE  C6 45 E2 6C               MOV byte ptr [EBP + -0x1e],0x6c
00541BF2  C6 45 E3 6D               MOV byte ptr [EBP + -0x1d],0x6d
00541BF6  C6 45 E4 6E               MOV byte ptr [EBP + -0x1c],0x6e
00541BFA  C6 45 E5 6F               MOV byte ptr [EBP + -0x1b],0x6f
00541BFE  C6 45 E6 70               MOV byte ptr [EBP + -0x1a],0x70
00541C02  C6 45 E7 71               MOV byte ptr [EBP + -0x19],0x71
00541C06  C6 45 E8 72               MOV byte ptr [EBP + -0x18],0x72
00541C0A  C6 45 E9 73               MOV byte ptr [EBP + -0x17],0x73
00541C0E  C6 45 EA 74               MOV byte ptr [EBP + -0x16],0x74
00541C12  C6 45 EB 75               MOV byte ptr [EBP + -0x15],0x75
00541C16  C6 45 EC 76               MOV byte ptr [EBP + -0x14],0x76
00541C1A  C6 45 ED 77               MOV byte ptr [EBP + -0x13],0x77
00541C1E  C6 45 EE 78               MOV byte ptr [EBP + -0x12],0x78
00541C22  C6 45 EF 79               MOV byte ptr [EBP + -0x11],0x79
00541C26  C6 45 F0 7A               MOV byte ptr [EBP + -0x10],0x7a
00541C2A  C6 45 F1 7C               MOV byte ptr [EBP + -0xf],0x7c
00541C2E  C6 45 F2 7E               MOV byte ptr [EBP + -0xe],0x7e
00541C32  E8 B9 B5 1C 00            CALL 0x0070d1f0
00541C37  83 C4 30                  ADD ESP,0x30
00541C3A  5F                        POP EDI
00541C3B  5E                        POP ESI
00541C3C  5B                        POP EBX
00541C3D  8B E5                     MOV ESP,EBP
00541C3F  5D                        POP EBP
00541C40  C3                        RET
