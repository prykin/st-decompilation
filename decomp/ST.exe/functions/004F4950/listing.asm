FUN_004f4950:
004F4950  55                        PUSH EBP
004F4951  8B EC                     MOV EBP,ESP
004F4953  81 EC A4 00 00 00         SUB ESP,0xa4
004F4959  53                        PUSH EBX
004F495A  56                        PUSH ESI
004F495B  57                        PUSH EDI
004F495C  B9 0F 00 00 00            MOV ECX,0xf
004F4961  33 C0                     XOR EAX,EAX
004F4963  8D BD 5C FF FF FF         LEA EDI,[EBP + 0xffffff5c]
004F4969  F3 AB                     STOSD.REP ES:EDI
004F496B  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
004F496E  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
004F4973  88 85 73 FF FF FF         MOV byte ptr [EBP + 0xffffff73],AL
004F4979  83 C9 FF                  OR ECX,0xffffffff
004F497C  33 C0                     XOR EAX,EAX
004F497E  33 D2                     XOR EDX,EDX
004F4980  F2 AE                     SCASB.REPNE ES:EDI
004F4982  F7 D1                     NOT ECX
004F4984  2B F9                     SUB EDI,ECX
004F4986  8D 9D 78 FF FF FF         LEA EBX,[EBP + 0xffffff78]
004F498C  8B C1                     MOV EAX,ECX
004F498E  8B F7                     MOV ESI,EDI
004F4990  8B FB                     MOV EDI,EBX
004F4992  C7 85 5C FF FF FF F3 FF FF FF  MOV dword ptr [EBP + 0xffffff5c],0xfffffff3
004F499C  C1 E9 02                  SHR ECX,0x2
004F499F  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
004F49A5  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
004F49AB  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004F49B1  C7 85 6C FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff6c],0x190
004F49BB  88 95 70 FF FF FF         MOV byte ptr [EBP + 0xffffff70],DL
004F49C1  88 95 71 FF FF FF         MOV byte ptr [EBP + 0xffffff71],DL
004F49C7  88 95 72 FF FF FF         MOV byte ptr [EBP + 0xffffff72],DL
004F49CD  C6 85 74 FF FF FF 03      MOV byte ptr [EBP + 0xffffff74],0x3
004F49D4  C6 85 75 FF FF FF 02      MOV byte ptr [EBP + 0xffffff75],0x2
004F49DB  C6 85 76 FF FF FF 01      MOV byte ptr [EBP + 0xffffff76],0x1
004F49E2  C6 85 77 FF FF FF 22      MOV byte ptr [EBP + 0xffffff77],0x22
004F49E9  B3 3D                     MOV BL,0x3d
004F49EB  F3 A5                     MOVSD.REP ES:EDI,ESI
004F49ED  8B C8                     MOV ECX,EAX
004F49EF  B0 28                     MOV AL,0x28
004F49F1  83 E1 03                  AND ECX,0x3
004F49F4  88 55 F0                  MOV byte ptr [EBP + -0x10],DL
004F49F7  F3 A4                     MOVSB.REP ES:EDI,ESI
004F49F9  B1 75                     MOV CL,0x75
004F49FB  88 45 F2                  MOV byte ptr [EBP + -0xe],AL
004F49FE  88 4D F1                  MOV byte ptr [EBP + -0xf],CL
004F4A01  C6 45 F3 45               MOV byte ptr [EBP + -0xd],0x45
004F4A05  C6 45 F4 44               MOV byte ptr [EBP + -0xc],0x44
004F4A09  C6 45 F5 43               MOV byte ptr [EBP + -0xb],0x43
004F4A0D  C6 45 F6 2D               MOV byte ptr [EBP + -0xa],0x2d
004F4A11  C6 45 F7 46               MOV byte ptr [EBP + -0x9],0x46
004F4A15  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
004F4A18  C6 45 F9 29               MOV byte ptr [EBP + -0x7],0x29
004F4A1C  C6 45 FA 2A               MOV byte ptr [EBP + -0x6],0x2a
004F4A20  88 4D FB                  MOV byte ptr [EBP + -0x5],CL
004F4A23  C6 45 FC 3F               MOV byte ptr [EBP + -0x4],0x3f
004F4A27  C6 45 FD 3E               MOV byte ptr [EBP + -0x3],0x3e
004F4A2B  88 5D FE                  MOV byte ptr [EBP + -0x2],BL
004F4A2E  C6 45 FF 3C               MOV byte ptr [EBP + -0x1],0x3c
004F4A32  C6 45 98 20               MOV byte ptr [EBP + -0x68],0x20
004F4A36  C6 45 99 21               MOV byte ptr [EBP + -0x67],0x21
004F4A3A  C6 45 9A 22               MOV byte ptr [EBP + -0x66],0x22
004F4A3E  C6 45 9B 23               MOV byte ptr [EBP + -0x65],0x23
004F4A42  C6 45 9C 25               MOV byte ptr [EBP + -0x64],0x25
004F4A46  C6 45 9D 26               MOV byte ptr [EBP + -0x63],0x26
004F4A4A  C6 45 9E 27               MOV byte ptr [EBP + -0x62],0x27
004F4A4E  88 45 9F                  MOV byte ptr [EBP + -0x61],AL
004F4A51  C6 45 A0 29               MOV byte ptr [EBP + -0x60],0x29
004F4A55  C6 45 A1 2C               MOV byte ptr [EBP + -0x5f],0x2c
004F4A59  C6 45 A2 2D               MOV byte ptr [EBP + -0x5e],0x2d
004F4A5D  C6 45 A3 2E               MOV byte ptr [EBP + -0x5d],0x2e
004F4A61  C6 45 A4 2F               MOV byte ptr [EBP + -0x5c],0x2f
004F4A65  C6 45 A5 30               MOV byte ptr [EBP + -0x5b],0x30
004F4A69  C6 45 A6 31               MOV byte ptr [EBP + -0x5a],0x31
004F4A6D  C6 45 A7 32               MOV byte ptr [EBP + -0x59],0x32
004F4A71  C6 45 A8 33               MOV byte ptr [EBP + -0x58],0x33
004F4A75  C6 45 A9 34               MOV byte ptr [EBP + -0x57],0x34
004F4A79  C6 45 AA 35               MOV byte ptr [EBP + -0x56],0x35
004F4A7D  C6 45 AB 36               MOV byte ptr [EBP + -0x55],0x36
004F4A81  C6 45 AC 37               MOV byte ptr [EBP + -0x54],0x37
004F4A85  C6 45 AD 38               MOV byte ptr [EBP + -0x53],0x38
004F4A89  C6 45 AE 39               MOV byte ptr [EBP + -0x52],0x39
004F4A8D  C6 45 AF 3A               MOV byte ptr [EBP + -0x51],0x3a
004F4A91  88 5D B0                  MOV byte ptr [EBP + -0x50],BL
004F4A94  88 4D E7                  MOV byte ptr [EBP + -0x19],CL
004F4A97  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004F4A9A  51                        PUSH ECX
004F4A9B  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F4A9E  B0 0A                     MOV AL,0xa
004F4AA0  68 1C 08 00 01            PUSH 0x100081c
004F4AA5  52                        PUSH EDX
004F4AA6  88 45 B9                  MOV byte ptr [EBP + -0x47],AL
004F4AA9  88 45 DB                  MOV byte ptr [EBP + -0x25],AL
004F4AAC  6A 01                     PUSH 0x1
004F4AAE  6A 05                     PUSH 0x5
004F4AB0  8D 45 F0                  LEA EAX,[EBP + -0x10]
004F4AB3  6A 03                     PUSH 0x3
004F4AB5  50                        PUSH EAX
004F4AB6  8D 45 98                  LEA EAX,[EBP + -0x68]
004F4AB9  51                        PUSH ECX
004F4ABA  50                        PUSH EAX
004F4ABB  8D 8D 5C FF FF FF         LEA ECX,[EBP + 0xffffff5c]
004F4AC1  B3 0D                     MOV BL,0xd
004F4AC3  52                        PUSH EDX
004F4AC4  51                        PUSH ECX
004F4AC5  C6 45 B1 3E               MOV byte ptr [EBP + -0x4f],0x3e
004F4AC9  C6 45 B2 3F               MOV byte ptr [EBP + -0x4e],0x3f
004F4ACD  C6 45 B3 41               MOV byte ptr [EBP + -0x4d],0x41
004F4AD1  C6 45 B4 42               MOV byte ptr [EBP + -0x4c],0x42
004F4AD5  C6 45 B5 43               MOV byte ptr [EBP + -0x4b],0x43
004F4AD9  C6 45 B6 44               MOV byte ptr [EBP + -0x4a],0x44
004F4ADD  C6 45 B7 45               MOV byte ptr [EBP + -0x49],0x45
004F4AE1  88 5D B8                  MOV byte ptr [EBP + -0x48],BL
004F4AE4  C6 45 BA 46               MOV byte ptr [EBP + -0x46],0x46
004F4AE8  C6 45 BB 47               MOV byte ptr [EBP + -0x45],0x47
004F4AEC  C6 45 BC 48               MOV byte ptr [EBP + -0x44],0x48
004F4AF0  C6 45 BD 49               MOV byte ptr [EBP + -0x43],0x49
004F4AF4  C6 45 BE 4A               MOV byte ptr [EBP + -0x42],0x4a
004F4AF8  C6 45 BF 4B               MOV byte ptr [EBP + -0x41],0x4b
004F4AFC  C6 45 C0 4C               MOV byte ptr [EBP + -0x40],0x4c
004F4B00  C6 45 C1 4D               MOV byte ptr [EBP + -0x3f],0x4d
004F4B04  C6 45 C2 4E               MOV byte ptr [EBP + -0x3e],0x4e
004F4B08  C6 45 C3 4F               MOV byte ptr [EBP + -0x3d],0x4f
004F4B0C  C6 45 C4 50               MOV byte ptr [EBP + -0x3c],0x50
004F4B10  C6 45 C5 51               MOV byte ptr [EBP + -0x3b],0x51
004F4B14  C6 45 C6 52               MOV byte ptr [EBP + -0x3a],0x52
004F4B18  C6 45 C7 53               MOV byte ptr [EBP + -0x39],0x53
004F4B1C  C6 45 C8 54               MOV byte ptr [EBP + -0x38],0x54
004F4B20  C6 45 C9 55               MOV byte ptr [EBP + -0x37],0x55
004F4B24  C6 45 CA 56               MOV byte ptr [EBP + -0x36],0x56
004F4B28  C6 45 CB 57               MOV byte ptr [EBP + -0x35],0x57
004F4B2C  C6 45 CC 58               MOV byte ptr [EBP + -0x34],0x58
004F4B30  C6 45 CD 59               MOV byte ptr [EBP + -0x33],0x59
004F4B34  C6 45 CE 5A               MOV byte ptr [EBP + -0x32],0x5a
004F4B38  C6 45 CF 5C               MOV byte ptr [EBP + -0x31],0x5c
004F4B3C  C6 45 D0 5F               MOV byte ptr [EBP + -0x30],0x5f
004F4B40  C6 45 D1 61               MOV byte ptr [EBP + -0x2f],0x61
004F4B44  C6 45 D2 62               MOV byte ptr [EBP + -0x2e],0x62
004F4B48  C6 45 D3 63               MOV byte ptr [EBP + -0x2d],0x63
004F4B4C  C6 45 D4 64               MOV byte ptr [EBP + -0x2c],0x64
004F4B50  C6 45 D5 65               MOV byte ptr [EBP + -0x2b],0x65
004F4B54  C6 45 D6 66               MOV byte ptr [EBP + -0x2a],0x66
004F4B58  C6 45 D7 67               MOV byte ptr [EBP + -0x29],0x67
004F4B5C  C6 45 D8 68               MOV byte ptr [EBP + -0x28],0x68
004F4B60  C6 45 D9 69               MOV byte ptr [EBP + -0x27],0x69
004F4B64  88 5D DA                  MOV byte ptr [EBP + -0x26],BL
004F4B67  C6 45 DC 6A               MOV byte ptr [EBP + -0x24],0x6a
004F4B6B  C6 45 DD 6B               MOV byte ptr [EBP + -0x23],0x6b
004F4B6F  C6 45 DE 6C               MOV byte ptr [EBP + -0x22],0x6c
004F4B73  C6 45 DF 6D               MOV byte ptr [EBP + -0x21],0x6d
004F4B77  C6 45 E0 6E               MOV byte ptr [EBP + -0x20],0x6e
004F4B7B  C6 45 E1 6F               MOV byte ptr [EBP + -0x1f],0x6f
004F4B7F  C6 45 E2 70               MOV byte ptr [EBP + -0x1e],0x70
004F4B83  C6 45 E3 71               MOV byte ptr [EBP + -0x1d],0x71
004F4B87  C6 45 E4 72               MOV byte ptr [EBP + -0x1c],0x72
004F4B8B  C6 45 E5 73               MOV byte ptr [EBP + -0x1b],0x73
004F4B8F  C6 45 E6 74               MOV byte ptr [EBP + -0x1a],0x74
004F4B93  C6 45 E8 76               MOV byte ptr [EBP + -0x18],0x76
004F4B97  C6 45 E9 77               MOV byte ptr [EBP + -0x17],0x77
004F4B9B  C6 45 EA 78               MOV byte ptr [EBP + -0x16],0x78
004F4B9F  C6 45 EB 79               MOV byte ptr [EBP + -0x15],0x79
004F4BA3  C6 45 EC 7A               MOV byte ptr [EBP + -0x14],0x7a
004F4BA7  C6 45 ED 7C               MOV byte ptr [EBP + -0x13],0x7c
004F4BAB  C6 45 EE 7E               MOV byte ptr [EBP + -0x12],0x7e
004F4BAF  68 9D 01 00 00            PUSH 0x19d
004F4BB4  E8 37 86 21 00            CALL 0x0070d1f0
004F4BB9  83 C4 30                  ADD ESP,0x30
004F4BBC  5F                        POP EDI
004F4BBD  5E                        POP ESI
004F4BBE  5B                        POP EBX
004F4BBF  8B E5                     MOV ESP,EBP
004F4BC1  5D                        POP EBP
004F4BC2  C3                        RET
