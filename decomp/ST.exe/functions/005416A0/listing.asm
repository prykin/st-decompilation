FUN_005416a0:
005416A0  55                        PUSH EBP
005416A1  8B EC                     MOV EBP,ESP
005416A3  81 EC AC 00 00 00         SUB ESP,0xac
005416A9  53                        PUSH EBX
005416AA  56                        PUSH ESI
005416AB  57                        PUSH EDI
005416AC  B9 0F 00 00 00            MOV ECX,0xf
005416B1  33 C0                     XOR EAX,EAX
005416B3  8D BD 54 FF FF FF         LEA EDI,[EBP + 0xffffff54]
005416B9  F3 AB                     STOSD.REP ES:EDI
005416BB  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005416BE  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
005416C3  88 85 6B FF FF FF         MOV byte ptr [EBP + 0xffffff6b],AL
005416C9  83 C9 FF                  OR ECX,0xffffffff
005416CC  33 C0                     XOR EAX,EAX
005416CE  33 D2                     XOR EDX,EDX
005416D0  F2 AE                     SCASB.REPNE ES:EDI
005416D2  F7 D1                     NOT ECX
005416D4  2B F9                     SUB EDI,ECX
005416D6  8D 9D 70 FF FF FF         LEA EBX,[EBP + 0xffffff70]
005416DC  8B C1                     MOV EAX,ECX
005416DE  8B F7                     MOV ESI,EDI
005416E0  8B FB                     MOV EDI,EBX
005416E2  C7 85 54 FF FF FF F0 FF FF FF  MOV dword ptr [EBP + 0xffffff54],0xfffffff0
005416EC  C1 E9 02                  SHR ECX,0x2
005416EF  89 95 58 FF FF FF         MOV dword ptr [EBP + 0xffffff58],EDX
005416F5  89 95 5C FF FF FF         MOV dword ptr [EBP + 0xffffff5c],EDX
005416FB  89 95 60 FF FF FF         MOV dword ptr [EBP + 0xffffff60],EDX
00541701  C7 85 64 FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff64],0x190
0054170B  88 95 68 FF FF FF         MOV byte ptr [EBP + 0xffffff68],DL
00541711  88 95 69 FF FF FF         MOV byte ptr [EBP + 0xffffff69],DL
00541717  88 95 6A FF FF FF         MOV byte ptr [EBP + 0xffffff6a],DL
0054171D  C6 85 6C FF FF FF 03      MOV byte ptr [EBP + 0xffffff6c],0x3
00541724  C6 85 6D FF FF FF 02      MOV byte ptr [EBP + 0xffffff6d],0x2
0054172B  C6 85 6E FF FF FF 01      MOV byte ptr [EBP + 0xffffff6e],0x1
00541732  C6 85 6F FF FF FF 22      MOV byte ptr [EBP + 0xffffff6f],0x22
00541739  B3 43                     MOV BL,0x43
0054173B  F3 A5                     MOVSD.REP ES:EDI,ESI
0054173D  8B C8                     MOV ECX,EAX
0054173F  B0 74                     MOV AL,0x74
00541741  83 E1 03                  AND ECX,0x3
00541744  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
00541747  F3 A4                     MOVSB.REP ES:EDI,ESI
00541749  B1 49                     MOV CL,0x49
0054174B  C6 45 EA 13               MOV byte ptr [EBP + -0x16],0x13
0054174F  88 4D E9                  MOV byte ptr [EBP + -0x17],CL
00541752  C6 45 EB 15               MOV byte ptr [EBP + -0x15],0x15
00541756  C6 45 EC 10               MOV byte ptr [EBP + -0x14],0x10
0054175A  C6 45 ED 72               MOV byte ptr [EBP + -0x13],0x72
0054175E  C6 45 EE CF               MOV byte ptr [EBP + -0x12],0xcf
00541762  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
00541765  C6 45 F0 16               MOV byte ptr [EBP + -0x10],0x16
00541769  C6 45 F1 3F               MOV byte ptr [EBP + -0xf],0x3f
0054176D  C6 45 F2 28               MOV byte ptr [EBP + -0xe],0x28
00541771  88 45 F3                  MOV byte ptr [EBP + -0xd],AL
00541774  88 5D F4                  MOV byte ptr [EBP + -0xc],BL
00541777  C6 45 F5 6A               MOV byte ptr [EBP + -0xb],0x6a
0054177B  88 45 F6                  MOV byte ptr [EBP + -0xa],AL
0054177E  C6 45 F7 6E               MOV byte ptr [EBP + -0x9],0x6e
00541782  C6 45 F8 C4               MOV byte ptr [EBP + -0x8],0xc4
00541786  C6 45 F9 C5               MOV byte ptr [EBP + -0x7],0xc5
0054178A  C6 45 FA 53               MOV byte ptr [EBP + -0x6],0x53
0054178E  C6 45 FB C2               MOV byte ptr [EBP + -0x5],0xc2
00541792  C6 45 FC 62               MOV byte ptr [EBP + -0x4],0x62
00541796  C6 45 90 20               MOV byte ptr [EBP + -0x70],0x20
0054179A  C6 45 91 21               MOV byte ptr [EBP + -0x6f],0x21
0054179E  C6 45 92 22               MOV byte ptr [EBP + -0x6e],0x22
005417A2  C6 45 93 23               MOV byte ptr [EBP + -0x6d],0x23
005417A6  C6 45 94 25               MOV byte ptr [EBP + -0x6c],0x25
005417AA  C6 45 95 26               MOV byte ptr [EBP + -0x6b],0x26
005417AE  C6 45 96 27               MOV byte ptr [EBP + -0x6a],0x27
005417B2  C6 45 97 28               MOV byte ptr [EBP + -0x69],0x28
005417B6  C6 45 98 29               MOV byte ptr [EBP + -0x68],0x29
005417BA  C6 45 99 2C               MOV byte ptr [EBP + -0x67],0x2c
005417BE  C6 45 9A 2D               MOV byte ptr [EBP + -0x66],0x2d
005417C2  C6 45 9B 2E               MOV byte ptr [EBP + -0x65],0x2e
005417C6  C6 45 9C 2F               MOV byte ptr [EBP + -0x64],0x2f
005417CA  C6 45 9D 30               MOV byte ptr [EBP + -0x63],0x30
005417CE  C6 45 9E 31               MOV byte ptr [EBP + -0x62],0x31
005417D2  C6 45 9F 32               MOV byte ptr [EBP + -0x61],0x32
005417D6  C6 45 A0 33               MOV byte ptr [EBP + -0x60],0x33
005417DA  C6 45 A1 34               MOV byte ptr [EBP + -0x5f],0x34
005417DE  C6 45 A2 35               MOV byte ptr [EBP + -0x5e],0x35
005417E2  C6 45 A3 36               MOV byte ptr [EBP + -0x5d],0x36
005417E6  88 4D B5                  MOV byte ptr [EBP + -0x4b],CL
005417E9  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005417EC  51                        PUSH ECX
005417ED  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005417F0  68 1C 00 40 00            PUSH 0x40001c
005417F5  88 5D AD                  MOV byte ptr [EBP + -0x53],BL
005417F8  6A 01                     PUSH 0x1
005417FA  BB 0A 00 00 00            MOV EBX,0xa
005417FF  88 45 DE                  MOV byte ptr [EBP + -0x22],AL
00541802  6A 01                     PUSH 0x1
00541804  6A 02                     PUSH 0x2
00541806  8D 45 E8                  LEA EAX,[EBP + -0x18]
00541809  53                        PUSH EBX
0054180A  50                        PUSH EAX
0054180B  8D 45 90                  LEA EAX,[EBP + -0x70]
0054180E  51                        PUSH ECX
0054180F  C6 45 A4 37               MOV byte ptr [EBP + -0x5c],0x37
00541813  C6 45 A5 38               MOV byte ptr [EBP + -0x5b],0x38
00541817  C6 45 A6 39               MOV byte ptr [EBP + -0x5a],0x39
0054181B  C6 45 A7 3A               MOV byte ptr [EBP + -0x59],0x3a
0054181F  C6 45 A8 3D               MOV byte ptr [EBP + -0x58],0x3d
00541823  C6 45 A9 3E               MOV byte ptr [EBP + -0x57],0x3e
00541827  C6 45 AA 3F               MOV byte ptr [EBP + -0x56],0x3f
0054182B  C6 45 AB 41               MOV byte ptr [EBP + -0x55],0x41
0054182F  C6 45 AC 42               MOV byte ptr [EBP + -0x54],0x42
00541833  C6 45 AE 44               MOV byte ptr [EBP + -0x52],0x44
00541837  C6 45 AF 45               MOV byte ptr [EBP + -0x51],0x45
0054183B  C6 45 B0 0D               MOV byte ptr [EBP + -0x50],0xd
0054183F  88 5D B1                  MOV byte ptr [EBP + -0x4f],BL
00541842  C6 45 B2 46               MOV byte ptr [EBP + -0x4e],0x46
00541846  C6 45 B3 47               MOV byte ptr [EBP + -0x4d],0x47
0054184A  C6 45 B4 48               MOV byte ptr [EBP + -0x4c],0x48
0054184E  C6 45 B6 4A               MOV byte ptr [EBP + -0x4a],0x4a
00541852  C6 45 B7 4B               MOV byte ptr [EBP + -0x49],0x4b
00541856  C6 45 B8 4C               MOV byte ptr [EBP + -0x48],0x4c
0054185A  C6 45 B9 4D               MOV byte ptr [EBP + -0x47],0x4d
0054185E  C6 45 BA 4E               MOV byte ptr [EBP + -0x46],0x4e
00541862  C6 45 BB 4F               MOV byte ptr [EBP + -0x45],0x4f
00541866  C6 45 BC 50               MOV byte ptr [EBP + -0x44],0x50
0054186A  C6 45 BD 51               MOV byte ptr [EBP + -0x43],0x51
0054186E  C6 45 BE 52               MOV byte ptr [EBP + -0x42],0x52
00541872  C6 45 BF 53               MOV byte ptr [EBP + -0x41],0x53
00541876  C6 45 C0 54               MOV byte ptr [EBP + -0x40],0x54
0054187A  C6 45 C1 55               MOV byte ptr [EBP + -0x3f],0x55
0054187E  C6 45 C2 56               MOV byte ptr [EBP + -0x3e],0x56
00541882  C6 45 C3 57               MOV byte ptr [EBP + -0x3d],0x57
00541886  C6 45 C4 58               MOV byte ptr [EBP + -0x3c],0x58
0054188A  C6 45 C5 59               MOV byte ptr [EBP + -0x3b],0x59
0054188E  C6 45 C6 5A               MOV byte ptr [EBP + -0x3a],0x5a
00541892  C6 45 C7 5C               MOV byte ptr [EBP + -0x39],0x5c
00541896  C6 45 C8 5F               MOV byte ptr [EBP + -0x38],0x5f
0054189A  C6 45 C9 61               MOV byte ptr [EBP + -0x37],0x61
0054189E  C6 45 CA 62               MOV byte ptr [EBP + -0x36],0x62
005418A2  C6 45 CB 63               MOV byte ptr [EBP + -0x35],0x63
005418A6  C6 45 CC 64               MOV byte ptr [EBP + -0x34],0x64
005418AA  C6 45 CD 65               MOV byte ptr [EBP + -0x33],0x65
005418AE  C6 45 CE 66               MOV byte ptr [EBP + -0x32],0x66
005418B2  C6 45 CF 67               MOV byte ptr [EBP + -0x31],0x67
005418B6  C6 45 D0 68               MOV byte ptr [EBP + -0x30],0x68
005418BA  C6 45 D1 69               MOV byte ptr [EBP + -0x2f],0x69
005418BE  C6 45 D2 0D               MOV byte ptr [EBP + -0x2e],0xd
005418C2  88 5D D3                  MOV byte ptr [EBP + -0x2d],BL
005418C5  C6 45 D4 6A               MOV byte ptr [EBP + -0x2c],0x6a
005418C9  C6 45 D5 6B               MOV byte ptr [EBP + -0x2b],0x6b
005418CD  C6 45 D6 6C               MOV byte ptr [EBP + -0x2a],0x6c
005418D1  C6 45 D7 6D               MOV byte ptr [EBP + -0x29],0x6d
005418D5  C6 45 D8 6E               MOV byte ptr [EBP + -0x28],0x6e
005418D9  C6 45 D9 6F               MOV byte ptr [EBP + -0x27],0x6f
005418DD  C6 45 DA 70               MOV byte ptr [EBP + -0x26],0x70
005418E1  C6 45 DB 71               MOV byte ptr [EBP + -0x25],0x71
005418E5  C6 45 DC 72               MOV byte ptr [EBP + -0x24],0x72
005418E9  C6 45 DD 73               MOV byte ptr [EBP + -0x23],0x73
005418ED  C6 45 DF 75               MOV byte ptr [EBP + -0x21],0x75
005418F1  C6 45 E0 76               MOV byte ptr [EBP + -0x20],0x76
005418F5  C6 45 E1 77               MOV byte ptr [EBP + -0x1f],0x77
005418F9  C6 45 E2 78               MOV byte ptr [EBP + -0x1e],0x78
005418FD  C6 45 E3 79               MOV byte ptr [EBP + -0x1d],0x79
00541901  C6 45 E4 7A               MOV byte ptr [EBP + -0x1c],0x7a
00541905  C6 45 E5 7C               MOV byte ptr [EBP + -0x1b],0x7c
00541909  C6 45 E6 7E               MOV byte ptr [EBP + -0x1a],0x7e
0054190D  50                        PUSH EAX
0054190E  8D 8D 54 FF FF FF         LEA ECX,[EBP + 0xffffff54]
00541914  52                        PUSH EDX
00541915  51                        PUSH ECX
00541916  68 9D 01 00 00            PUSH 0x19d
0054191B  E8 D0 B8 1C 00            CALL 0x0070d1f0
00541920  83 C4 30                  ADD ESP,0x30
00541923  5F                        POP EDI
00541924  5E                        POP ESI
00541925  5B                        POP EBX
00541926  8B E5                     MOV ESP,EBP
00541928  5D                        POP EBP
00541929  C3                        RET
