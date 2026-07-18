FUN_005421d0:
005421D0  55                        PUSH EBP
005421D1  8B EC                     MOV EBP,ESP
005421D3  81 EC 8C 00 00 00         SUB ESP,0x8c
005421D9  53                        PUSH EBX
005421DA  56                        PUSH ESI
005421DB  57                        PUSH EDI
005421DC  B9 0F 00 00 00            MOV ECX,0xf
005421E1  33 C0                     XOR EAX,EAX
005421E3  8D BD 74 FF FF FF         LEA EDI,[EBP + 0xffffff74]
005421E9  F3 AB                     STOSD.REP ES:EDI
005421EB  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005421EE  BF B4 1B 7C 00            MOV EDI,0x7c1bb4
005421F3  88 45 8B                  MOV byte ptr [EBP + -0x75],AL
005421F6  83 C9 FF                  OR ECX,0xffffffff
005421F9  33 C0                     XOR EAX,EAX
005421FB  33 D2                     XOR EDX,EDX
005421FD  F2 AE                     SCASB.REPNE ES:EDI
005421FF  F7 D1                     NOT ECX
00542201  2B F9                     SUB EDI,ECX
00542203  8D 5D 90                  LEA EBX,[EBP + -0x70]
00542206  8B C1                     MOV EAX,ECX
00542208  8B F7                     MOV ESI,EDI
0054220A  8B FB                     MOV EDI,EBX
0054220C  C7 85 74 FF FF FF F8 FF FF FF  MOV dword ptr [EBP + 0xffffff74],0xfffffff8
00542216  C1 E9 02                  SHR ECX,0x2
00542219  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
0054221F  89 95 7C FF FF FF         MOV dword ptr [EBP + 0xffffff7c],EDX
00542225  89 55 80                  MOV dword ptr [EBP + -0x80],EDX
00542228  C7 45 84 90 01 00 00      MOV dword ptr [EBP + -0x7c],0x190
0054222F  88 55 88                  MOV byte ptr [EBP + -0x78],DL
00542232  88 55 89                  MOV byte ptr [EBP + -0x77],DL
00542235  88 55 8A                  MOV byte ptr [EBP + -0x76],DL
00542238  C6 45 8C 01               MOV byte ptr [EBP + -0x74],0x1
0054223C  C6 45 8D 02               MOV byte ptr [EBP + -0x73],0x2
00542240  C6 45 8E 01               MOV byte ptr [EBP + -0x72],0x1
00542244  C6 45 8F 22               MOV byte ptr [EBP + -0x71],0x22
00542248  B3 43                     MOV BL,0x43
0054224A  F3 A5                     MOVSD.REP ES:EDI,ESI
0054224C  8B C8                     MOV ECX,EAX
0054224E  B0 28                     MOV AL,0x28
00542250  83 E1 03                  AND ECX,0x3
00542253  88 55 EC                  MOV byte ptr [EBP + -0x14],DL
00542256  F3 A4                     MOVSB.REP ES:EDI,ESI
00542258  B1 3F                     MOV CL,0x3f
0054225A  C6 45 EE 46               MOV byte ptr [EBP + -0x12],0x46
0054225E  88 4D ED                  MOV byte ptr [EBP + -0x13],CL
00542261  88 45 EF                  MOV byte ptr [EBP + -0x11],AL
00542264  C6 45 F0 29               MOV byte ptr [EBP + -0x10],0x29
00542268  88 5D F1                  MOV byte ptr [EBP + -0xf],BL
0054226B  88 5D F2                  MOV byte ptr [EBP + -0xe],BL
0054226E  C6 45 F3 45               MOV byte ptr [EBP + -0xd],0x45
00542272  C6 45 F4 47               MOV byte ptr [EBP + -0xc],0x47
00542276  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
00542279  88 45 F6                  MOV byte ptr [EBP + -0xa],AL
0054227C  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
0054227F  88 45 F8                  MOV byte ptr [EBP + -0x8],AL
00542282  C6 45 F9 3D               MOV byte ptr [EBP + -0x7],0x3d
00542286  C6 45 FA 41               MOV byte ptr [EBP + -0x6],0x41
0054228A  88 4D FB                  MOV byte ptr [EBP + -0x5],CL
0054228D  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
00542290  C6 45 FD 74               MOV byte ptr [EBP + -0x3],0x74
00542294  C6 45 FE 74               MOV byte ptr [EBP + -0x2],0x74
00542298  C6 45 B0 20               MOV byte ptr [EBP + -0x50],0x20
0054229C  C6 45 B1 21               MOV byte ptr [EBP + -0x4f],0x21
005422A0  C6 45 B2 22               MOV byte ptr [EBP + -0x4e],0x22
005422A4  C6 45 B3 23               MOV byte ptr [EBP + -0x4d],0x23
005422A8  C6 45 B4 25               MOV byte ptr [EBP + -0x4c],0x25
005422AC  C6 45 B5 26               MOV byte ptr [EBP + -0x4b],0x26
005422B0  C6 45 B6 27               MOV byte ptr [EBP + -0x4a],0x27
005422B4  88 45 B7                  MOV byte ptr [EBP + -0x49],AL
005422B7  C6 45 B8 29               MOV byte ptr [EBP + -0x48],0x29
005422BB  C6 45 B9 2C               MOV byte ptr [EBP + -0x47],0x2c
005422BF  C6 45 BA 2D               MOV byte ptr [EBP + -0x46],0x2d
005422C3  C6 45 BB 2E               MOV byte ptr [EBP + -0x45],0x2e
005422C7  C6 45 BC 2F               MOV byte ptr [EBP + -0x44],0x2f
005422CB  C6 45 BD 30               MOV byte ptr [EBP + -0x43],0x30
005422CF  C6 45 BE 31               MOV byte ptr [EBP + -0x42],0x31
005422D3  C6 45 BF 32               MOV byte ptr [EBP + -0x41],0x32
005422D7  C6 45 C0 33               MOV byte ptr [EBP + -0x40],0x33
005422DB  C6 45 C1 34               MOV byte ptr [EBP + -0x3f],0x34
005422DF  C6 45 C2 35               MOV byte ptr [EBP + -0x3e],0x35
005422E3  C6 45 C3 36               MOV byte ptr [EBP + -0x3d],0x36
005422E7  C6 45 C4 37               MOV byte ptr [EBP + -0x3c],0x37
005422EB  C6 45 C5 38               MOV byte ptr [EBP + -0x3b],0x38
005422EF  88 4D CA                  MOV byte ptr [EBP + -0x36],CL
005422F2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005422F5  51                        PUSH ECX
005422F6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005422F9  68 1C 02 10 00            PUSH 0x10021c
005422FE  52                        PUSH EDX
005422FF  6A 01                     PUSH 0x1
00542301  6A 06                     PUSH 0x6
00542303  8D 45 EC                  LEA EAX,[EBP + -0x14]
00542306  6A 03                     PUSH 0x3
00542308  50                        PUSH EAX
00542309  8D 45 B0                  LEA EAX,[EBP + -0x50]
0054230C  51                        PUSH ECX
0054230D  50                        PUSH EAX
0054230E  8D 8D 74 FF FF FF         LEA ECX,[EBP + 0xffffff74]
00542314  52                        PUSH EDX
00542315  51                        PUSH ECX
00542316  68 9D 01 00 00            PUSH 0x19d
0054231B  C6 45 C6 39               MOV byte ptr [EBP + -0x3a],0x39
0054231F  C6 45 C7 3A               MOV byte ptr [EBP + -0x39],0x3a
00542323  C6 45 C8 3D               MOV byte ptr [EBP + -0x38],0x3d
00542327  C6 45 C9 3E               MOV byte ptr [EBP + -0x37],0x3e
0054232B  C6 45 CB 41               MOV byte ptr [EBP + -0x35],0x41
0054232F  C6 45 CC 42               MOV byte ptr [EBP + -0x34],0x42
00542333  88 5D CD                  MOV byte ptr [EBP + -0x33],BL
00542336  C6 45 CE 44               MOV byte ptr [EBP + -0x32],0x44
0054233A  C6 45 CF 45               MOV byte ptr [EBP + -0x31],0x45
0054233E  C6 45 D0 0D               MOV byte ptr [EBP + -0x30],0xd
00542342  C6 45 D1 0A               MOV byte ptr [EBP + -0x2f],0xa
00542346  C6 45 D2 46               MOV byte ptr [EBP + -0x2e],0x46
0054234A  C6 45 D3 47               MOV byte ptr [EBP + -0x2d],0x47
0054234E  C6 45 D4 48               MOV byte ptr [EBP + -0x2c],0x48
00542352  C6 45 D5 49               MOV byte ptr [EBP + -0x2b],0x49
00542356  C6 45 D6 4A               MOV byte ptr [EBP + -0x2a],0x4a
0054235A  C6 45 D7 4B               MOV byte ptr [EBP + -0x29],0x4b
0054235E  C6 45 D8 4C               MOV byte ptr [EBP + -0x28],0x4c
00542362  C6 45 D9 4D               MOV byte ptr [EBP + -0x27],0x4d
00542366  C6 45 DA 4E               MOV byte ptr [EBP + -0x26],0x4e
0054236A  C6 45 DB 4F               MOV byte ptr [EBP + -0x25],0x4f
0054236E  C6 45 DC 50               MOV byte ptr [EBP + -0x24],0x50
00542372  C6 45 DD 51               MOV byte ptr [EBP + -0x23],0x51
00542376  C6 45 DE 52               MOV byte ptr [EBP + -0x22],0x52
0054237A  C6 45 DF 53               MOV byte ptr [EBP + -0x21],0x53
0054237E  C6 45 E0 54               MOV byte ptr [EBP + -0x20],0x54
00542382  C6 45 E1 55               MOV byte ptr [EBP + -0x1f],0x55
00542386  C6 45 E2 56               MOV byte ptr [EBP + -0x1e],0x56
0054238A  C6 45 E3 57               MOV byte ptr [EBP + -0x1d],0x57
0054238E  C6 45 E4 58               MOV byte ptr [EBP + -0x1c],0x58
00542392  C6 45 E5 59               MOV byte ptr [EBP + -0x1b],0x59
00542396  C6 45 E6 5A               MOV byte ptr [EBP + -0x1a],0x5a
0054239A  C6 45 E7 5C               MOV byte ptr [EBP + -0x19],0x5c
0054239E  C6 45 E8 7C               MOV byte ptr [EBP + -0x18],0x7c
005423A2  C6 45 E9 7E               MOV byte ptr [EBP + -0x17],0x7e
005423A6  C6 45 EA 2A               MOV byte ptr [EBP + -0x16],0x2a
005423AA  E8 41 AE 1C 00            CALL 0x0070d1f0
005423AF  83 C4 30                  ADD ESP,0x30
005423B2  5F                        POP EDI
005423B3  5E                        POP ESI
005423B4  5B                        POP EBX
005423B5  8B E5                     MOV ESP,EBP
005423B7  5D                        POP EBP
005423B8  C3                        RET
