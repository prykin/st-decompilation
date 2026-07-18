FUN_00541f60:
00541F60  55                        PUSH EBP
00541F61  8B EC                     MOV EBP,ESP
00541F63  81 EC 8C 00 00 00         SUB ESP,0x8c
00541F69  53                        PUSH EBX
00541F6A  56                        PUSH ESI
00541F6B  57                        PUSH EDI
00541F6C  B9 0F 00 00 00            MOV ECX,0xf
00541F71  33 C0                     XOR EAX,EAX
00541F73  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
00541F79  F3 AB                     STOSD.REP ES:EDI
00541F7B  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
00541F7E  BF B4 1B 7C 00            MOV EDI,0x7c1bb4
00541F83  88 45 8B                  MOV byte ptr [EBP + -0x75],AL
00541F86  83 C9 FF                  OR ECX,0xffffffff
00541F89  33 C0                     XOR EAX,EAX
00541F8B  33 D2                     XOR EDX,EDX
00541F8D  F2 AE                     SCASB.REPNE ES:EDI
00541F8F  F7 D1                     NOT ECX
00541F91  2B F9                     SUB EDI,ECX
00541F93  8D 5D 90                  LEA EBX,[EBP + -0x70]
00541F96  8B C1                     MOV EAX,ECX
00541F98  8B F7                     MOV ESI,EDI
00541F9A  8B FB                     MOV EDI,EBX
00541F9C  C7 85 74 FF FF FF F8 FF FF FF  MOV dword ptr [EBP + 0xffffff74],0xfffffff8
00541FA6  C1 E9 02                  SHR ECX,0x2
00541FA9  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
00541FAF  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00541FB5  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00541FB8  C7 45 84 90 01 00 00      MOV dword ptr [EBP + -0x7c],0x190
00541FBF  88 55 88                  MOV byte ptr [EBP + -0x78],DL
00541FC2  88 55 89                  MOV byte ptr [EBP + -0x77],DL
00541FC5  88 55 8A                  MOV byte ptr [EBP + -0x76],DL
00541FC8  C6 45 8C 01               MOV byte ptr [EBP + -0x74],0x1
00541FCC  C6 45 8D 02               MOV byte ptr [EBP + -0x73],0x2
00541FD0  C6 45 8E 01               MOV byte ptr [EBP + -0x72],0x1
00541FD4  C6 45 8F 22               MOV byte ptr [EBP + -0x71],0x22
00541FD8  B3 4F                     MOV BL,0x4f
00541FDA  F3 A5                     MOVSD.REP ES:EDI,ESI
00541FDC  8B C8                     MOV ECX,EAX
00541FDE  B0 63                     MOV AL,0x63
00541FE0  83 E1 03                  AND ECX,0x3
00541FE3  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00541FE6  F3 A4                     MOVSB.REP ES:EDI,ESI
00541FE8  B1 8D                     MOV CL,0x8d
00541FEA  88 45 ED                  MOV byte ptr [EBP + -0x13],AL
00541FED  88 4D EE                  MOV byte ptr [EBP + -0x12],CL
00541FF0  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
00541FF3  B1 AC                     MOV CL,0xac
00541FF5  88 5D F0                  MOV byte ptr [EBP + -0x10],BL
00541FF8  88 5D F1                  MOV byte ptr [EBP + -0xf],BL
00541FFB  88 5D F2                  MOV byte ptr [EBP + -0xe],BL
00541FFE  C6 45 F3 82               MOV byte ptr [EBP + -0xd],0x82
00542002  88 4D F4                  MOV byte ptr [EBP + -0xc],CL
00542005  88 4D F5                  MOV byte ptr [EBP + -0xb],CL
00542008  88 4D F6                  MOV byte ptr [EBP + -0xa],CL
0054200B  88 4D F7                  MOV byte ptr [EBP + -0x9],CL
0054200E  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
00542011  C6 45 F9 6E               MOV byte ptr [EBP + -0x7],0x6e
00542015  88 45 FA                  MOV byte ptr [EBP + -0x6],AL
00542018  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
0054201B  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
0054201E  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
00542021  88 45 FE                  MOV byte ptr [EBP + -0x2],AL
00542024  C6 45 B0 20               MOV byte ptr [EBP + -0x50],0x20
00542028  C6 45 B1 21               MOV byte ptr [EBP + -0x4f],0x21
0054202C  C6 45 B2 22               MOV byte ptr [EBP + -0x4e],0x22
00542030  C6 45 B3 23               MOV byte ptr [EBP + -0x4d],0x23
00542034  C6 45 B4 25               MOV byte ptr [EBP + -0x4c],0x25
00542038  C6 45 B5 26               MOV byte ptr [EBP + -0x4b],0x26
0054203C  C6 45 B6 27               MOV byte ptr [EBP + -0x4a],0x27
00542040  C6 45 B7 28               MOV byte ptr [EBP + -0x49],0x28
00542044  C6 45 B8 29               MOV byte ptr [EBP + -0x48],0x29
00542048  C6 45 B9 2C               MOV byte ptr [EBP + -0x47],0x2c
0054204C  C6 45 BA 2D               MOV byte ptr [EBP + -0x46],0x2d
00542050  C6 45 BB 2E               MOV byte ptr [EBP + -0x45],0x2e
00542054  C6 45 BC 2F               MOV byte ptr [EBP + -0x44],0x2f
00542058  C6 45 BD 30               MOV byte ptr [EBP + -0x43],0x30
0054205C  C6 45 BE 31               MOV byte ptr [EBP + -0x42],0x31
00542060  C6 45 BF 32               MOV byte ptr [EBP + -0x41],0x32
00542064  C6 45 C0 33               MOV byte ptr [EBP + -0x40],0x33
00542068  C6 45 C1 34               MOV byte ptr [EBP + -0x3f],0x34
0054206C  C6 45 C2 35               MOV byte ptr [EBP + -0x3e],0x35
00542070  C6 45 C3 36               MOV byte ptr [EBP + -0x3d],0x36
00542074  C6 45 C4 37               MOV byte ptr [EBP + -0x3c],0x37
00542078  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054207B  8D 45 EC                  LEA EAX,[EBP + -0x14]
0054207E  51                        PUSH ECX
0054207F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00542082  68 1C 02 10 00            PUSH 0x10021c
00542087  52                        PUSH EDX
00542088  6A 01                     PUSH 0x1
0054208A  6A 06                     PUSH 0x6
0054208C  6A 03                     PUSH 0x3
0054208E  50                        PUSH EAX
0054208F  8D 45 B0                  LEA EAX,[EBP + -0x50]
00542092  51                        PUSH ECX
00542093  50                        PUSH EAX
00542094  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
0054209A  52                        PUSH EDX
0054209B  51                        PUSH ECX
0054209C  68 9D 01 00 00            PUSH 0x19d
005420A1  C6 45 C5 38               MOV byte ptr [EBP + -0x3b],0x38
005420A5  C6 45 C6 39               MOV byte ptr [EBP + -0x3a],0x39
005420A9  C6 45 C7 3A               MOV byte ptr [EBP + -0x39],0x3a
005420AD  C6 45 C8 3D               MOV byte ptr [EBP + -0x38],0x3d
005420B1  C6 45 C9 3E               MOV byte ptr [EBP + -0x37],0x3e
005420B5  C6 45 CA 3F               MOV byte ptr [EBP + -0x36],0x3f
005420B9  C6 45 CB 41               MOV byte ptr [EBP + -0x35],0x41
005420BD  C6 45 CC 42               MOV byte ptr [EBP + -0x34],0x42
005420C1  C6 45 CD 43               MOV byte ptr [EBP + -0x33],0x43
005420C5  C6 45 CE 44               MOV byte ptr [EBP + -0x32],0x44
005420C9  C6 45 CF 45               MOV byte ptr [EBP + -0x31],0x45
005420CD  C6 45 D0 0D               MOV byte ptr [EBP + -0x30],0xd
005420D1  C6 45 D1 0A               MOV byte ptr [EBP + -0x2f],0xa
005420D5  C6 45 D2 46               MOV byte ptr [EBP + -0x2e],0x46
005420D9  C6 45 D3 47               MOV byte ptr [EBP + -0x2d],0x47
005420DD  C6 45 D4 48               MOV byte ptr [EBP + -0x2c],0x48
005420E1  C6 45 D5 49               MOV byte ptr [EBP + -0x2b],0x49
005420E5  C6 45 D6 4A               MOV byte ptr [EBP + -0x2a],0x4a
005420E9  C6 45 D7 4B               MOV byte ptr [EBP + -0x29],0x4b
005420ED  C6 45 D8 4C               MOV byte ptr [EBP + -0x28],0x4c
005420F1  C6 45 D9 4D               MOV byte ptr [EBP + -0x27],0x4d
005420F5  C6 45 DA 4E               MOV byte ptr [EBP + -0x26],0x4e
005420F9  88 5D DB                  MOV byte ptr [EBP + -0x25],BL
005420FC  C6 45 DC 50               MOV byte ptr [EBP + -0x24],0x50
00542100  C6 45 DD 51               MOV byte ptr [EBP + -0x23],0x51
00542104  C6 45 DE 52               MOV byte ptr [EBP + -0x22],0x52
00542108  C6 45 DF 53               MOV byte ptr [EBP + -0x21],0x53
0054210C  C6 45 E0 54               MOV byte ptr [EBP + -0x20],0x54
00542110  C6 45 E1 55               MOV byte ptr [EBP + -0x1f],0x55
00542114  C6 45 E2 56               MOV byte ptr [EBP + -0x1e],0x56
00542118  C6 45 E3 57               MOV byte ptr [EBP + -0x1d],0x57
0054211C  C6 45 E4 58               MOV byte ptr [EBP + -0x1c],0x58
00542120  C6 45 E5 59               MOV byte ptr [EBP + -0x1b],0x59
00542124  C6 45 E6 5A               MOV byte ptr [EBP + -0x1a],0x5a
00542128  C6 45 E7 5C               MOV byte ptr [EBP + -0x19],0x5c
0054212C  C6 45 E8 7C               MOV byte ptr [EBP + -0x18],0x7c
00542130  C6 45 E9 7E               MOV byte ptr [EBP + -0x17],0x7e
00542134  C6 45 EA 2A               MOV byte ptr [EBP + -0x16],0x2a
00542138  E8 B3 B0 1C 00            CALL 0x0070d1f0
0054213D  83 C4 30                  ADD ESP,0x30
00542140  5F                        POP EDI
00542141  5E                        POP ESI
00542142  5B                        POP EBX
00542143  8B E5                     MOV ESP,EBP
00542145  5D                        POP EBP
00542146  C3                        RET
