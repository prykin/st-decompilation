FUN_005defe0:
005DEFE0  55                        PUSH EBP
005DEFE1  8B EC                     MOV EBP,ESP
005DEFE3  81 EC 94 00 00 00         SUB ESP,0x94
005DEFE9  56                        PUSH ESI
005DEFEA  57                        PUSH EDI
005DEFEB  B9 0F 00 00 00            MOV ECX,0xf
005DEFF0  33 C0                     XOR EAX,EAX
005DEFF2  8D BD 6C FF FF FF         LEA EDI,[EBP + 0xffffff6c]
005DEFF8  33 D2                     XOR EDX,EDX
005DEFFA  F3 AB                     STOSD.REP ES:EDI
005DEFFC  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005DEFFF  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
005DF004  88 45 83                  MOV byte ptr [EBP + -0x7d],AL
005DF007  83 C9 FF                  OR ECX,0xffffffff
005DF00A  33 C0                     XOR EAX,EAX
005DF00C  8D 75 88                  LEA ESI,[EBP + -0x78]
005DF00F  F2 AE                     SCASB.REPNE ES:EDI
005DF011  F7 D1                     NOT ECX
005DF013  2B F9                     SUB EDI,ECX
005DF015  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
005DF018  8B C1                     MOV EAX,ECX
005DF01A  8B F7                     MOV ESI,EDI
005DF01C  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005DF01F  C7 85 6C FF FF FF F0 FF FF FF  MOV dword ptr [EBP + 0xffffff6c],0xfffffff0
005DF029  C1 E9 02                  SHR ECX,0x2
005DF02C  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
005DF032  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
005DF038  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
005DF03E  C7 85 7C FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff7c],0x190
005DF048  88 55 80                  MOV byte ptr [EBP + -0x80],DL
005DF04B  88 55 81                  MOV byte ptr [EBP + -0x7f],DL
005DF04E  88 55 82                  MOV byte ptr [EBP + -0x7e],DL
005DF051  C6 45 84 03               MOV byte ptr [EBP + -0x7c],0x3
005DF055  C6 45 85 02               MOV byte ptr [EBP + -0x7b],0x2
005DF059  C6 45 86 01               MOV byte ptr [EBP + -0x7a],0x1
005DF05D  C6 45 87 22               MOV byte ptr [EBP + -0x79],0x22
005DF061  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
005DF064  F3 A5                     MOVSD.REP ES:EDI,ESI
005DF066  8B C8                     MOV ECX,EAX
005DF068  B0 2C                     MOV AL,0x2c
005DF06A  83 E1 03                  AND ECX,0x3
005DF06D  C6 45 F5 1B               MOV byte ptr [EBP + -0xb],0x1b
005DF071  F3 A4                     MOVSB.REP ES:EDI,ESI
005DF073  C6 45 F6 17               MOV byte ptr [EBP + -0xa],0x17
005DF077  C6 45 F7 18               MOV byte ptr [EBP + -0x9],0x18
005DF07B  C6 45 F8 16               MOV byte ptr [EBP + -0x8],0x16
005DF07F  C6 45 F9 2F               MOV byte ptr [EBP + -0x7],0x2f
005DF083  C6 45 FA 2B               MOV byte ptr [EBP + -0x6],0x2b
005DF087  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
005DF08A  C6 45 FC 2A               MOV byte ptr [EBP + -0x4],0x2a
005DF08E  C6 45 FD 0B               MOV byte ptr [EBP + -0x3],0xb
005DF092  C6 45 FE 0C               MOV byte ptr [EBP + -0x2],0xc
005DF096  C6 45 A8 22               MOV byte ptr [EBP + -0x58],0x22
005DF09A  C6 45 A9 27               MOV byte ptr [EBP + -0x57],0x27
005DF09E  C6 45 AA 28               MOV byte ptr [EBP + -0x56],0x28
005DF0A2  C6 45 AB 29               MOV byte ptr [EBP + -0x55],0x29
005DF0A6  88 45 AC                  MOV byte ptr [EBP + -0x54],AL
005DF0A9  C6 45 AD 2D               MOV byte ptr [EBP + -0x53],0x2d
005DF0AD  C6 45 AE 2E               MOV byte ptr [EBP + -0x52],0x2e
005DF0B1  C6 45 AF 30               MOV byte ptr [EBP + -0x51],0x30
005DF0B5  C6 45 B0 31               MOV byte ptr [EBP + -0x50],0x31
005DF0B9  C6 45 B1 32               MOV byte ptr [EBP + -0x4f],0x32
005DF0BD  C6 45 B2 33               MOV byte ptr [EBP + -0x4e],0x33
005DF0C1  C6 45 B3 34               MOV byte ptr [EBP + -0x4d],0x34
005DF0C5  C6 45 B4 35               MOV byte ptr [EBP + -0x4c],0x35
005DF0C9  C6 45 B5 36               MOV byte ptr [EBP + -0x4b],0x36
005DF0CD  C6 45 B6 37               MOV byte ptr [EBP + -0x4a],0x37
005DF0D1  C6 45 B7 38               MOV byte ptr [EBP + -0x49],0x38
005DF0D5  C6 45 B8 39               MOV byte ptr [EBP + -0x48],0x39
005DF0D9  C6 45 B9 41               MOV byte ptr [EBP + -0x47],0x41
005DF0DD  C6 45 BA 42               MOV byte ptr [EBP + -0x46],0x42
005DF0E1  C6 45 BB 43               MOV byte ptr [EBP + -0x45],0x43
005DF0E5  C6 45 BC 44               MOV byte ptr [EBP + -0x44],0x44
005DF0E9  C6 45 BD 45               MOV byte ptr [EBP + -0x43],0x45
005DF0ED  C6 45 BE 46               MOV byte ptr [EBP + -0x42],0x46
005DF0F1  C6 45 BF 47               MOV byte ptr [EBP + -0x41],0x47
005DF0F5  C6 45 C0 48               MOV byte ptr [EBP + -0x40],0x48
005DF0F9  C6 45 C1 49               MOV byte ptr [EBP + -0x3f],0x49
005DF0FD  C6 45 C2 4A               MOV byte ptr [EBP + -0x3e],0x4a
005DF101  C6 45 C3 4B               MOV byte ptr [EBP + -0x3d],0x4b
005DF105  C6 45 C4 4C               MOV byte ptr [EBP + -0x3c],0x4c
005DF109  C6 45 C5 4D               MOV byte ptr [EBP + -0x3b],0x4d
005DF10D  C6 45 C6 4E               MOV byte ptr [EBP + -0x3a],0x4e
005DF111  C6 45 C7 4F               MOV byte ptr [EBP + -0x39],0x4f
005DF115  B1 0D                     MOV CL,0xd
005DF117  B0 0A                     MOV AL,0xa
005DF119  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
005DF11C  88 4D EA                  MOV byte ptr [EBP + -0x16],CL
005DF11F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DF122  88 45 C9                  MOV byte ptr [EBP + -0x37],AL
005DF125  51                        PUSH ECX
005DF126  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DF129  68 1C 01 40 00            PUSH 0x40011c
005DF12E  6A 01                     PUSH 0x1
005DF130  88 45 EB                  MOV byte ptr [EBP + -0x15],AL
005DF133  6A 01                     PUSH 0x1
005DF135  6A 02                     PUSH 0x2
005DF137  8D 45 F4                  LEA EAX,[EBP + -0xc]
005DF13A  6A 05                     PUSH 0x5
005DF13C  50                        PUSH EAX
005DF13D  8D 45 A8                  LEA EAX,[EBP + -0x58]
005DF140  51                        PUSH ECX
005DF141  50                        PUSH EAX
005DF142  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
005DF148  52                        PUSH EDX
005DF149  51                        PUSH ECX
005DF14A  68 9D 01 00 00            PUSH 0x19d
005DF14F  C6 45 CA 50               MOV byte ptr [EBP + -0x36],0x50
005DF153  C6 45 CB 51               MOV byte ptr [EBP + -0x35],0x51
005DF157  C6 45 CC 52               MOV byte ptr [EBP + -0x34],0x52
005DF15B  C6 45 CD 53               MOV byte ptr [EBP + -0x33],0x53
005DF15F  C6 45 CE 54               MOV byte ptr [EBP + -0x32],0x54
005DF163  C6 45 CF 55               MOV byte ptr [EBP + -0x31],0x55
005DF167  C6 45 D0 56               MOV byte ptr [EBP + -0x30],0x56
005DF16B  C6 45 D1 57               MOV byte ptr [EBP + -0x2f],0x57
005DF16F  C6 45 D2 58               MOV byte ptr [EBP + -0x2e],0x58
005DF173  C6 45 D3 59               MOV byte ptr [EBP + -0x2d],0x59
005DF177  C6 45 D4 5A               MOV byte ptr [EBP + -0x2c],0x5a
005DF17B  C6 45 D5 61               MOV byte ptr [EBP + -0x2b],0x61
005DF17F  C6 45 D6 62               MOV byte ptr [EBP + -0x2a],0x62
005DF183  C6 45 D7 63               MOV byte ptr [EBP + -0x29],0x63
005DF187  C6 45 D8 64               MOV byte ptr [EBP + -0x28],0x64
005DF18B  C6 45 D9 65               MOV byte ptr [EBP + -0x27],0x65
005DF18F  C6 45 DA 66               MOV byte ptr [EBP + -0x26],0x66
005DF193  C6 45 DB 67               MOV byte ptr [EBP + -0x25],0x67
005DF197  C6 45 DC 68               MOV byte ptr [EBP + -0x24],0x68
005DF19B  C6 45 DD 69               MOV byte ptr [EBP + -0x23],0x69
005DF19F  C6 45 DE 6A               MOV byte ptr [EBP + -0x22],0x6a
005DF1A3  C6 45 DF 6B               MOV byte ptr [EBP + -0x21],0x6b
005DF1A7  C6 45 E0 6C               MOV byte ptr [EBP + -0x20],0x6c
005DF1AB  C6 45 E1 6D               MOV byte ptr [EBP + -0x1f],0x6d
005DF1AF  C6 45 E2 6E               MOV byte ptr [EBP + -0x1e],0x6e
005DF1B3  C6 45 E3 6F               MOV byte ptr [EBP + -0x1d],0x6f
005DF1B7  C6 45 E4 70               MOV byte ptr [EBP + -0x1c],0x70
005DF1BB  C6 45 E5 71               MOV byte ptr [EBP + -0x1b],0x71
005DF1BF  C6 45 E6 72               MOV byte ptr [EBP + -0x1a],0x72
005DF1C3  C6 45 E7 73               MOV byte ptr [EBP + -0x19],0x73
005DF1C7  C6 45 E8 74               MOV byte ptr [EBP + -0x18],0x74
005DF1CB  C6 45 E9 75               MOV byte ptr [EBP + -0x17],0x75
005DF1CF  C6 45 EC 76               MOV byte ptr [EBP + -0x14],0x76
005DF1D3  C6 45 ED 77               MOV byte ptr [EBP + -0x13],0x77
005DF1D7  C6 45 EE 78               MOV byte ptr [EBP + -0x12],0x78
005DF1DB  C6 45 EF 79               MOV byte ptr [EBP + -0x11],0x79
005DF1DF  C6 45 F0 7A               MOV byte ptr [EBP + -0x10],0x7a
005DF1E3  E8 08 E0 12 00            CALL 0x0070d1f0
005DF1E8  83 C4 30                  ADD ESP,0x30
005DF1EB  5F                        POP EDI
005DF1EC  5E                        POP ESI
005DF1ED  8B E5                     MOV ESP,EBP
005DF1EF  5D                        POP EBP
005DF1F0  C3                        RET
