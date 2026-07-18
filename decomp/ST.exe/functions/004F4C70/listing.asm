FUN_004f4c70:
004F4C70  55                        PUSH EBP
004F4C71  8B EC                     MOV EBP,ESP
004F4C73  81 EC 9C 00 00 00         SUB ESP,0x9c
004F4C79  56                        PUSH ESI
004F4C7A  57                        PUSH EDI
004F4C7B  B9 0F 00 00 00            MOV ECX,0xf
004F4C80  33 C0                     XOR EAX,EAX
004F4C82  8D BD 64 FF FF FF         LEA EDI,[EBP + 0xffffff64]
004F4C88  33 D2                     XOR EDX,EDX
004F4C8A  F3 AB                     STOSD.REP ES:EDI
004F4C8C  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
004F4C8F  BF D0 1B 7C 00            MOV EDI,0x7c1bd0
004F4C94  88 85 7B FF FF FF         MOV byte ptr [EBP + 0xffffff7b],AL
004F4C9A  83 C9 FF                  OR ECX,0xffffffff
004F4C9D  33 C0                     XOR EAX,EAX
004F4C9F  8D 75 80                  LEA ESI,[EBP + -0x80]
004F4CA2  F2 AE                     SCASB.REPNE ES:EDI
004F4CA4  F7 D1                     NOT ECX
004F4CA6  2B F9                     SUB EDI,ECX
004F4CA8  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
004F4CAB  8B C1                     MOV EAX,ECX
004F4CAD  8B F7                     MOV ESI,EDI
004F4CAF  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
004F4CB2  C7 85 64 FF FF FF F3 FF FF FF  MOV dword ptr [EBP + 0xffffff64],0xfffffff3
004F4CBC  C1 E9 02                  SHR ECX,0x2
004F4CBF  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
004F4CC5  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
004F4CCB  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
004F4CD1  C7 85 74 FF FF FF BC 02 00 00  MOV dword ptr [EBP + 0xffffff74],0x2bc
004F4CDB  88 95 78 FF FF FF         MOV byte ptr [EBP + 0xffffff78],DL
004F4CE1  88 95 79 FF FF FF         MOV byte ptr [EBP + 0xffffff79],DL
004F4CE7  88 95 7A FF FF FF         MOV byte ptr [EBP + 0xffffff7a],DL
004F4CED  C6 85 7C FF FF FF 01      MOV byte ptr [EBP + 0xffffff7c],0x1
004F4CF4  C6 85 7D FF FF FF 02      MOV byte ptr [EBP + 0xffffff7d],0x2
004F4CFB  C6 85 7E FF FF FF 01      MOV byte ptr [EBP + 0xffffff7e],0x1
004F4D02  C6 85 7F FF FF FF 22      MOV byte ptr [EBP + 0xffffff7f],0x22
004F4D09  C6 45 F8 FF               MOV byte ptr [EBP + -0x8],0xff
004F4D0D  F3 A5                     MOVSD.REP ES:EDI,ESI
004F4D0F  8B C8                     MOV ECX,EAX
004F4D11  B0 0A                     MOV AL,0xa
004F4D13  83 E1 03                  AND ECX,0x3
004F4D16  88 55 F9                  MOV byte ptr [EBP + -0x7],DL
004F4D19  F3 A4                     MOVSB.REP ES:EDI,ESI
004F4D1B  B1 0D                     MOV CL,0xd
004F4D1D  C6 45 FA AC               MOV byte ptr [EBP + -0x6],0xac
004F4D21  C6 45 FB AD               MOV byte ptr [EBP + -0x5],0xad
004F4D25  C6 45 FC AE               MOV byte ptr [EBP + -0x4],0xae
004F4D29  C6 45 A0 20               MOV byte ptr [EBP + -0x60],0x20
004F4D2D  C6 45 A1 21               MOV byte ptr [EBP + -0x5f],0x21
004F4D31  C6 45 A2 22               MOV byte ptr [EBP + -0x5e],0x22
004F4D35  C6 45 A3 23               MOV byte ptr [EBP + -0x5d],0x23
004F4D39  C6 45 A4 25               MOV byte ptr [EBP + -0x5c],0x25
004F4D3D  C6 45 A5 26               MOV byte ptr [EBP + -0x5b],0x26
004F4D41  C6 45 A6 27               MOV byte ptr [EBP + -0x5a],0x27
004F4D45  C6 45 A7 28               MOV byte ptr [EBP + -0x59],0x28
004F4D49  C6 45 A8 29               MOV byte ptr [EBP + -0x58],0x29
004F4D4D  C6 45 A9 2C               MOV byte ptr [EBP + -0x57],0x2c
004F4D51  C6 45 AA 2D               MOV byte ptr [EBP + -0x56],0x2d
004F4D55  C6 45 AB 2E               MOV byte ptr [EBP + -0x55],0x2e
004F4D59  C6 45 AC 2F               MOV byte ptr [EBP + -0x54],0x2f
004F4D5D  C6 45 AD 30               MOV byte ptr [EBP + -0x53],0x30
004F4D61  C6 45 AE 31               MOV byte ptr [EBP + -0x52],0x31
004F4D65  C6 45 AF 32               MOV byte ptr [EBP + -0x51],0x32
004F4D69  C6 45 B0 33               MOV byte ptr [EBP + -0x50],0x33
004F4D6D  C6 45 B1 34               MOV byte ptr [EBP + -0x4f],0x34
004F4D71  C6 45 B2 35               MOV byte ptr [EBP + -0x4e],0x35
004F4D75  C6 45 B3 36               MOV byte ptr [EBP + -0x4d],0x36
004F4D79  C6 45 B4 37               MOV byte ptr [EBP + -0x4c],0x37
004F4D7D  C6 45 B5 38               MOV byte ptr [EBP + -0x4b],0x38
004F4D81  C6 45 B6 39               MOV byte ptr [EBP + -0x4a],0x39
004F4D85  C6 45 B7 3A               MOV byte ptr [EBP + -0x49],0x3a
004F4D89  C6 45 B8 3D               MOV byte ptr [EBP + -0x48],0x3d
004F4D8D  C6 45 B9 3E               MOV byte ptr [EBP + -0x47],0x3e
004F4D91  C6 45 BA 3F               MOV byte ptr [EBP + -0x46],0x3f
004F4D95  C6 45 BB 41               MOV byte ptr [EBP + -0x45],0x41
004F4D99  C6 45 BC 42               MOV byte ptr [EBP + -0x44],0x42
004F4D9D  C6 45 BD 43               MOV byte ptr [EBP + -0x43],0x43
004F4DA1  C6 45 BE 44               MOV byte ptr [EBP + -0x42],0x44
004F4DA5  C6 45 BF 45               MOV byte ptr [EBP + -0x41],0x45
004F4DA9  88 4D C0                  MOV byte ptr [EBP + -0x40],CL
004F4DAC  88 45 C1                  MOV byte ptr [EBP + -0x3f],AL
004F4DAF  C6 45 C2 46               MOV byte ptr [EBP + -0x3e],0x46
004F4DB3  C6 45 C3 47               MOV byte ptr [EBP + -0x3d],0x47
004F4DB7  C6 45 C4 48               MOV byte ptr [EBP + -0x3c],0x48
004F4DBB  88 4D E2                  MOV byte ptr [EBP + -0x1e],CL
004F4DBE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004F4DC1  51                        PUSH ECX
004F4DC2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004F4DC5  68 1C 08 20 00            PUSH 0x20081c
004F4DCA  6A 01                     PUSH 0x1
004F4DCC  88 45 E3                  MOV byte ptr [EBP + -0x1d],AL
004F4DCF  6A 01                     PUSH 0x1
004F4DD1  6A 04                     PUSH 0x4
004F4DD3  8D 45 F8                  LEA EAX,[EBP + -0x8]
004F4DD6  6A 01                     PUSH 0x1
004F4DD8  50                        PUSH EAX
004F4DD9  8D 45 A0                  LEA EAX,[EBP + -0x60]
004F4DDC  51                        PUSH ECX
004F4DDD  50                        PUSH EAX
004F4DDE  8D 8D 64 FF FF FF         LEA ECX,[EBP + 0xffffff64]
004F4DE4  52                        PUSH EDX
004F4DE5  51                        PUSH ECX
004F4DE6  68 9D 01 00 00            PUSH 0x19d
004F4DEB  C6 45 C5 49               MOV byte ptr [EBP + -0x3b],0x49
004F4DEF  C6 45 C6 4A               MOV byte ptr [EBP + -0x3a],0x4a
004F4DF3  C6 45 C7 4B               MOV byte ptr [EBP + -0x39],0x4b
004F4DF7  C6 45 C8 4C               MOV byte ptr [EBP + -0x38],0x4c
004F4DFB  C6 45 C9 4D               MOV byte ptr [EBP + -0x37],0x4d
004F4DFF  C6 45 CA 4E               MOV byte ptr [EBP + -0x36],0x4e
004F4E03  C6 45 CB 4F               MOV byte ptr [EBP + -0x35],0x4f
004F4E07  C6 45 CC 50               MOV byte ptr [EBP + -0x34],0x50
004F4E0B  C6 45 CD 51               MOV byte ptr [EBP + -0x33],0x51
004F4E0F  C6 45 CE 52               MOV byte ptr [EBP + -0x32],0x52
004F4E13  C6 45 CF 53               MOV byte ptr [EBP + -0x31],0x53
004F4E17  C6 45 D0 54               MOV byte ptr [EBP + -0x30],0x54
004F4E1B  C6 45 D1 55               MOV byte ptr [EBP + -0x2f],0x55
004F4E1F  C6 45 D2 56               MOV byte ptr [EBP + -0x2e],0x56
004F4E23  C6 45 D3 57               MOV byte ptr [EBP + -0x2d],0x57
004F4E27  C6 45 D4 58               MOV byte ptr [EBP + -0x2c],0x58
004F4E2B  C6 45 D5 59               MOV byte ptr [EBP + -0x2b],0x59
004F4E2F  C6 45 D6 5A               MOV byte ptr [EBP + -0x2a],0x5a
004F4E33  C6 45 D7 5C               MOV byte ptr [EBP + -0x29],0x5c
004F4E37  C6 45 D8 5F               MOV byte ptr [EBP + -0x28],0x5f
004F4E3B  C6 45 D9 61               MOV byte ptr [EBP + -0x27],0x61
004F4E3F  C6 45 DA 62               MOV byte ptr [EBP + -0x26],0x62
004F4E43  C6 45 DB 63               MOV byte ptr [EBP + -0x25],0x63
004F4E47  C6 45 DC 64               MOV byte ptr [EBP + -0x24],0x64
004F4E4B  C6 45 DD 65               MOV byte ptr [EBP + -0x23],0x65
004F4E4F  C6 45 DE 66               MOV byte ptr [EBP + -0x22],0x66
004F4E53  C6 45 DF 67               MOV byte ptr [EBP + -0x21],0x67
004F4E57  C6 45 E0 68               MOV byte ptr [EBP + -0x20],0x68
004F4E5B  C6 45 E1 69               MOV byte ptr [EBP + -0x1f],0x69
004F4E5F  C6 45 E4 6A               MOV byte ptr [EBP + -0x1c],0x6a
004F4E63  C6 45 E5 6B               MOV byte ptr [EBP + -0x1b],0x6b
004F4E67  C6 45 E6 6C               MOV byte ptr [EBP + -0x1a],0x6c
004F4E6B  C6 45 E7 6D               MOV byte ptr [EBP + -0x19],0x6d
004F4E6F  C6 45 E8 6E               MOV byte ptr [EBP + -0x18],0x6e
004F4E73  C6 45 E9 6F               MOV byte ptr [EBP + -0x17],0x6f
004F4E77  C6 45 EA 70               MOV byte ptr [EBP + -0x16],0x70
004F4E7B  C6 45 EB 71               MOV byte ptr [EBP + -0x15],0x71
004F4E7F  C6 45 EC 72               MOV byte ptr [EBP + -0x14],0x72
004F4E83  C6 45 ED 73               MOV byte ptr [EBP + -0x13],0x73
004F4E87  C6 45 EE 74               MOV byte ptr [EBP + -0x12],0x74
004F4E8B  C6 45 EF 75               MOV byte ptr [EBP + -0x11],0x75
004F4E8F  C6 45 F0 76               MOV byte ptr [EBP + -0x10],0x76
004F4E93  C6 45 F1 77               MOV byte ptr [EBP + -0xf],0x77
004F4E97  C6 45 F2 78               MOV byte ptr [EBP + -0xe],0x78
004F4E9B  C6 45 F3 79               MOV byte ptr [EBP + -0xd],0x79
004F4E9F  C6 45 F4 7A               MOV byte ptr [EBP + -0xc],0x7a
004F4EA3  C6 45 F5 7C               MOV byte ptr [EBP + -0xb],0x7c
004F4EA7  C6 45 F6 7E               MOV byte ptr [EBP + -0xa],0x7e
004F4EAB  E8 40 83 21 00            CALL 0x0070d1f0
004F4EB0  83 C4 30                  ADD ESP,0x30
004F4EB3  5F                        POP EDI
004F4EB4  5E                        POP ESI
004F4EB5  8B E5                     MOV ESP,EBP
004F4EB7  5D                        POP EBP
004F4EB8  C3                        RET
