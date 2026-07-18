FUN_00553e20:
00553E20  55                        PUSH EBP
00553E21  8B EC                     MOV EBP,ESP
00553E23  81 EC 94 00 00 00         SUB ESP,0x94
00553E29  56                        PUSH ESI
00553E2A  57                        PUSH EDI
00553E2B  B9 0F 00 00 00            MOV ECX,0xf
00553E30  33 C0                     XOR EAX,EAX
00553E32  8D BD 6C FF FF FF         LEA EDI,[EBP + 0xffffff6c]
00553E38  33 D2                     XOR EDX,EDX
00553E3A  F3 AB                     STOSD.REP ES:EDI
00553E3C  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00553E3F  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
00553E44  88 45 83                  MOV byte ptr [EBP + -0x7d],AL
00553E47  83 C9 FF                  OR ECX,0xffffffff
00553E4A  33 C0                     XOR EAX,EAX
00553E4C  8D 75 88                  LEA ESI,[EBP + -0x78]
00553E4F  F2 AE                     SCASB.REPNE ES:EDI
00553E51  F7 D1                     NOT ECX
00553E53  2B F9                     SUB EDI,ECX
00553E55  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
00553E58  8B C1                     MOV EAX,ECX
00553E5A  8B F7                     MOV ESI,EDI
00553E5C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
00553E5F  C7 85 6C FF FF FF F0 FF FF FF  MOV dword ptr [EBP + 0xffffff6c],0xfffffff0
00553E69  C1 E9 02                  SHR ECX,0x2
00553E6C  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
00553E72  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
00553E78  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00553E7E  C7 85 7C FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff7c],0x190
00553E88  88 55 80                  MOV byte ptr [EBP + -0x80],DL
00553E8B  88 55 81                  MOV byte ptr [EBP + -0x7f],DL
00553E8E  88 55 82                  MOV byte ptr [EBP + -0x7e],DL
00553E91  C6 45 84 03               MOV byte ptr [EBP + -0x7c],0x3
00553E95  C6 45 85 02               MOV byte ptr [EBP + -0x7b],0x2
00553E99  C6 45 86 01               MOV byte ptr [EBP + -0x7a],0x1
00553E9D  C6 45 87 22               MOV byte ptr [EBP + -0x79],0x22
00553EA1  88 55 10                  MOV byte ptr [EBP + 0x10],DL
00553EA4  F3 A5                     MOVSD.REP ES:EDI,ESI
00553EA6  8B C8                     MOV ECX,EAX
00553EA8  B0 0A                     MOV AL,0xa
00553EAA  83 E1 03                  AND ECX,0x3
00553EAD  C6 45 11 E2               MOV byte ptr [EBP + 0x11],0xe2
00553EB1  F3 A4                     MOVSB.REP ES:EDI,ESI
00553EB3  B1 0D                     MOV CL,0xd
00553EB5  C6 45 12 FA               MOV byte ptr [EBP + 0x12],0xfa
00553EB9  C6 45 13 E4               MOV byte ptr [EBP + 0x13],0xe4
00553EBD  C6 45 A8 20               MOV byte ptr [EBP + -0x58],0x20
00553EC1  C6 45 A9 21               MOV byte ptr [EBP + -0x57],0x21
00553EC5  C6 45 AA 22               MOV byte ptr [EBP + -0x56],0x22
00553EC9  C6 45 AB 23               MOV byte ptr [EBP + -0x55],0x23
00553ECD  C6 45 AC 25               MOV byte ptr [EBP + -0x54],0x25
00553ED1  C6 45 AD 26               MOV byte ptr [EBP + -0x53],0x26
00553ED5  C6 45 AE 27               MOV byte ptr [EBP + -0x52],0x27
00553ED9  C6 45 AF 28               MOV byte ptr [EBP + -0x51],0x28
00553EDD  C6 45 B0 29               MOV byte ptr [EBP + -0x50],0x29
00553EE1  C6 45 B1 2C               MOV byte ptr [EBP + -0x4f],0x2c
00553EE5  C6 45 B2 2D               MOV byte ptr [EBP + -0x4e],0x2d
00553EE9  C6 45 B3 2E               MOV byte ptr [EBP + -0x4d],0x2e
00553EED  C6 45 B4 2F               MOV byte ptr [EBP + -0x4c],0x2f
00553EF1  C6 45 B5 30               MOV byte ptr [EBP + -0x4b],0x30
00553EF5  C6 45 B6 31               MOV byte ptr [EBP + -0x4a],0x31
00553EF9  C6 45 B7 32               MOV byte ptr [EBP + -0x49],0x32
00553EFD  C6 45 B8 33               MOV byte ptr [EBP + -0x48],0x33
00553F01  C6 45 B9 34               MOV byte ptr [EBP + -0x47],0x34
00553F05  C6 45 BA 35               MOV byte ptr [EBP + -0x46],0x35
00553F09  C6 45 BB 36               MOV byte ptr [EBP + -0x45],0x36
00553F0D  C6 45 BC 37               MOV byte ptr [EBP + -0x44],0x37
00553F11  C6 45 BD 38               MOV byte ptr [EBP + -0x43],0x38
00553F15  C6 45 BE 39               MOV byte ptr [EBP + -0x42],0x39
00553F19  C6 45 BF 3A               MOV byte ptr [EBP + -0x41],0x3a
00553F1D  C6 45 C0 3D               MOV byte ptr [EBP + -0x40],0x3d
00553F21  C6 45 C1 3E               MOV byte ptr [EBP + -0x3f],0x3e
00553F25  C6 45 C2 3F               MOV byte ptr [EBP + -0x3e],0x3f
00553F29  C6 45 C3 41               MOV byte ptr [EBP + -0x3d],0x41
00553F2D  C6 45 C4 42               MOV byte ptr [EBP + -0x3c],0x42
00553F31  C6 45 C5 43               MOV byte ptr [EBP + -0x3b],0x43
00553F35  C6 45 C6 44               MOV byte ptr [EBP + -0x3a],0x44
00553F39  C6 45 C7 45               MOV byte ptr [EBP + -0x39],0x45
00553F3D  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
00553F40  88 45 C9                  MOV byte ptr [EBP + -0x37],AL
00553F43  C6 45 CA 46               MOV byte ptr [EBP + -0x36],0x46
00553F47  C6 45 CB 47               MOV byte ptr [EBP + -0x35],0x47
00553F4B  C6 45 CC 48               MOV byte ptr [EBP + -0x34],0x48
00553F4F  C6 45 CD 49               MOV byte ptr [EBP + -0x33],0x49
00553F53  88 4D EA                  MOV byte ptr [EBP + -0x16],CL
00553F56  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00553F59  51                        PUSH ECX
00553F5A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553F5D  68 1C 02 40 00            PUSH 0x40021c
00553F62  6A 01                     PUSH 0x1
00553F64  88 45 EB                  MOV byte ptr [EBP + -0x15],AL
00553F67  6A 01                     PUSH 0x1
00553F69  6A 03                     PUSH 0x3
00553F6B  8D 45 10                  LEA EAX,[EBP + 0x10]
00553F6E  6A 01                     PUSH 0x1
00553F70  50                        PUSH EAX
00553F71  8D 45 A8                  LEA EAX,[EBP + -0x58]
00553F74  51                        PUSH ECX
00553F75  50                        PUSH EAX
00553F76  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
00553F7C  52                        PUSH EDX
00553F7D  51                        PUSH ECX
00553F7E  68 9D 01 00 00            PUSH 0x19d
00553F83  C6 45 CE 4A               MOV byte ptr [EBP + -0x32],0x4a
00553F87  C6 45 CF 4B               MOV byte ptr [EBP + -0x31],0x4b
00553F8B  C6 45 D0 4C               MOV byte ptr [EBP + -0x30],0x4c
00553F8F  C6 45 D1 4D               MOV byte ptr [EBP + -0x2f],0x4d
00553F93  C6 45 D2 4E               MOV byte ptr [EBP + -0x2e],0x4e
00553F97  C6 45 D3 4F               MOV byte ptr [EBP + -0x2d],0x4f
00553F9B  C6 45 D4 50               MOV byte ptr [EBP + -0x2c],0x50
00553F9F  C6 45 D5 51               MOV byte ptr [EBP + -0x2b],0x51
00553FA3  C6 45 D6 52               MOV byte ptr [EBP + -0x2a],0x52
00553FA7  C6 45 D7 53               MOV byte ptr [EBP + -0x29],0x53
00553FAB  C6 45 D8 54               MOV byte ptr [EBP + -0x28],0x54
00553FAF  C6 45 D9 55               MOV byte ptr [EBP + -0x27],0x55
00553FB3  C6 45 DA 56               MOV byte ptr [EBP + -0x26],0x56
00553FB7  C6 45 DB 57               MOV byte ptr [EBP + -0x25],0x57
00553FBB  C6 45 DC 58               MOV byte ptr [EBP + -0x24],0x58
00553FBF  C6 45 DD 59               MOV byte ptr [EBP + -0x23],0x59
00553FC3  C6 45 DE 5A               MOV byte ptr [EBP + -0x22],0x5a
00553FC7  C6 45 DF 5C               MOV byte ptr [EBP + -0x21],0x5c
00553FCB  C6 45 E0 5F               MOV byte ptr [EBP + -0x20],0x5f
00553FCF  C6 45 E1 61               MOV byte ptr [EBP + -0x1f],0x61
00553FD3  C6 45 E2 62               MOV byte ptr [EBP + -0x1e],0x62
00553FD7  C6 45 E3 63               MOV byte ptr [EBP + -0x1d],0x63
00553FDB  C6 45 E4 64               MOV byte ptr [EBP + -0x1c],0x64
00553FDF  C6 45 E5 65               MOV byte ptr [EBP + -0x1b],0x65
00553FE3  C6 45 E6 66               MOV byte ptr [EBP + -0x1a],0x66
00553FE7  C6 45 E7 67               MOV byte ptr [EBP + -0x19],0x67
00553FEB  C6 45 E8 68               MOV byte ptr [EBP + -0x18],0x68
00553FEF  C6 45 E9 69               MOV byte ptr [EBP + -0x17],0x69
00553FF3  C6 45 EC 6A               MOV byte ptr [EBP + -0x14],0x6a
00553FF7  C6 45 ED 6B               MOV byte ptr [EBP + -0x13],0x6b
00553FFB  C6 45 EE 6C               MOV byte ptr [EBP + -0x12],0x6c
00553FFF  C6 45 EF 6D               MOV byte ptr [EBP + -0x11],0x6d
00554003  C6 45 F0 6E               MOV byte ptr [EBP + -0x10],0x6e
00554007  C6 45 F1 6F               MOV byte ptr [EBP + -0xf],0x6f
0055400B  C6 45 F2 70               MOV byte ptr [EBP + -0xe],0x70
0055400F  C6 45 F3 71               MOV byte ptr [EBP + -0xd],0x71
00554013  C6 45 F4 72               MOV byte ptr [EBP + -0xc],0x72
00554017  C6 45 F5 73               MOV byte ptr [EBP + -0xb],0x73
0055401B  C6 45 F6 74               MOV byte ptr [EBP + -0xa],0x74
0055401F  C6 45 F7 75               MOV byte ptr [EBP + -0x9],0x75
00554023  C6 45 F8 76               MOV byte ptr [EBP + -0x8],0x76
00554027  C6 45 F9 77               MOV byte ptr [EBP + -0x7],0x77
0055402B  C6 45 FA 78               MOV byte ptr [EBP + -0x6],0x78
0055402F  C6 45 FB 79               MOV byte ptr [EBP + -0x5],0x79
00554033  C6 45 FC 7A               MOV byte ptr [EBP + -0x4],0x7a
00554037  C6 45 FD 7C               MOV byte ptr [EBP + -0x3],0x7c
0055403B  C6 45 FE 7E               MOV byte ptr [EBP + -0x2],0x7e
0055403F  E8 AC 91 1B 00            CALL 0x0070d1f0
00554044  83 C4 30                  ADD ESP,0x30
00554047  5F                        POP EDI
00554048  5E                        POP ESI
00554049  8B E5                     MOV ESP,EBP
0055404B  5D                        POP EBP
0055404C  C3                        RET
