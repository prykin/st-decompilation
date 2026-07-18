FUN_005df290:
005DF290  55                        PUSH EBP
005DF291  8B EC                     MOV EBP,ESP
005DF293  81 EC 94 00 00 00         SUB ESP,0x94
005DF299  56                        PUSH ESI
005DF29A  57                        PUSH EDI
005DF29B  B9 0F 00 00 00            MOV ECX,0xf
005DF2A0  33 C0                     XOR EAX,EAX
005DF2A2  8D BD 6C FF FF FF         LEA EDI,[EBP + 0xffffff6c]
005DF2A8  33 D2                     XOR EDX,EDX
005DF2AA  F3 AB                     STOSD.REP ES:EDI
005DF2AC  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005DF2AF  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
005DF2B4  88 45 83                  MOV byte ptr [EBP + -0x7d],AL
005DF2B7  83 C9 FF                  OR ECX,0xffffffff
005DF2BA  33 C0                     XOR EAX,EAX
005DF2BC  8D 75 88                  LEA ESI,[EBP + -0x78]
005DF2BF  F2 AE                     SCASB.REPNE ES:EDI
005DF2C1  F7 D1                     NOT ECX
005DF2C3  2B F9                     SUB EDI,ECX
005DF2C5  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
005DF2C8  8B C1                     MOV EAX,ECX
005DF2CA  8B F7                     MOV ESI,EDI
005DF2CC  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005DF2CF  C7 85 6C FF FF FF F4 FF FF FF  MOV dword ptr [EBP + 0xffffff6c],0xfffffff4
005DF2D9  C1 E9 02                  SHR ECX,0x2
005DF2DC  89 95 70 FF FF FF         MOV dword ptr [EBP + 0xffffff70],EDX
005DF2E2  89 95 74 FF FF FF         MOV dword ptr [EBP + 0xffffff74],EDX
005DF2E8  89 95 78 FF FF FF         MOV dword ptr [EBP + 0xffffff78],EDX
005DF2EE  C7 85 7C FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff7c],0x190
005DF2F8  88 55 80                  MOV byte ptr [EBP + -0x80],DL
005DF2FB  88 55 81                  MOV byte ptr [EBP + -0x7f],DL
005DF2FE  88 55 82                  MOV byte ptr [EBP + -0x7e],DL
005DF301  C6 45 84 03               MOV byte ptr [EBP + -0x7c],0x3
005DF305  C6 45 85 02               MOV byte ptr [EBP + -0x7b],0x2
005DF309  C6 45 86 01               MOV byte ptr [EBP + -0x7a],0x1
005DF30D  C6 45 87 22               MOV byte ptr [EBP + -0x79],0x22
005DF311  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
005DF314  F3 A5                     MOVSD.REP ES:EDI,ESI
005DF316  8B C8                     MOV ECX,EAX
005DF318  B0 2C                     MOV AL,0x2c
005DF31A  83 E1 03                  AND ECX,0x3
005DF31D  C6 45 F5 1B               MOV byte ptr [EBP + -0xb],0x1b
005DF321  F3 A4                     MOVSB.REP ES:EDI,ESI
005DF323  C6 45 F6 17               MOV byte ptr [EBP + -0xa],0x17
005DF327  C6 45 F7 18               MOV byte ptr [EBP + -0x9],0x18
005DF32B  C6 45 F8 16               MOV byte ptr [EBP + -0x8],0x16
005DF32F  C6 45 F9 2F               MOV byte ptr [EBP + -0x7],0x2f
005DF333  C6 45 FA 2B               MOV byte ptr [EBP + -0x6],0x2b
005DF337  88 45 FB                  MOV byte ptr [EBP + -0x5],AL
005DF33A  C6 45 FC 2A               MOV byte ptr [EBP + -0x4],0x2a
005DF33E  C6 45 FD 0B               MOV byte ptr [EBP + -0x3],0xb
005DF342  C6 45 FE 0C               MOV byte ptr [EBP + -0x2],0xc
005DF346  C6 45 A8 22               MOV byte ptr [EBP + -0x58],0x22
005DF34A  C6 45 A9 27               MOV byte ptr [EBP + -0x57],0x27
005DF34E  C6 45 AA 28               MOV byte ptr [EBP + -0x56],0x28
005DF352  C6 45 AB 29               MOV byte ptr [EBP + -0x55],0x29
005DF356  88 45 AC                  MOV byte ptr [EBP + -0x54],AL
005DF359  C6 45 AD 2D               MOV byte ptr [EBP + -0x53],0x2d
005DF35D  C6 45 AE 2E               MOV byte ptr [EBP + -0x52],0x2e
005DF361  C6 45 AF 30               MOV byte ptr [EBP + -0x51],0x30
005DF365  C6 45 B0 31               MOV byte ptr [EBP + -0x50],0x31
005DF369  C6 45 B1 32               MOV byte ptr [EBP + -0x4f],0x32
005DF36D  C6 45 B2 33               MOV byte ptr [EBP + -0x4e],0x33
005DF371  C6 45 B3 34               MOV byte ptr [EBP + -0x4d],0x34
005DF375  C6 45 B4 35               MOV byte ptr [EBP + -0x4c],0x35
005DF379  C6 45 B5 36               MOV byte ptr [EBP + -0x4b],0x36
005DF37D  C6 45 B6 37               MOV byte ptr [EBP + -0x4a],0x37
005DF381  C6 45 B7 38               MOV byte ptr [EBP + -0x49],0x38
005DF385  C6 45 B8 39               MOV byte ptr [EBP + -0x48],0x39
005DF389  C6 45 B9 41               MOV byte ptr [EBP + -0x47],0x41
005DF38D  C6 45 BA 42               MOV byte ptr [EBP + -0x46],0x42
005DF391  C6 45 BB 43               MOV byte ptr [EBP + -0x45],0x43
005DF395  C6 45 BC 44               MOV byte ptr [EBP + -0x44],0x44
005DF399  C6 45 BD 45               MOV byte ptr [EBP + -0x43],0x45
005DF39D  C6 45 BE 46               MOV byte ptr [EBP + -0x42],0x46
005DF3A1  C6 45 BF 47               MOV byte ptr [EBP + -0x41],0x47
005DF3A5  C6 45 C0 48               MOV byte ptr [EBP + -0x40],0x48
005DF3A9  C6 45 C1 49               MOV byte ptr [EBP + -0x3f],0x49
005DF3AD  C6 45 C2 4A               MOV byte ptr [EBP + -0x3e],0x4a
005DF3B1  C6 45 C3 4B               MOV byte ptr [EBP + -0x3d],0x4b
005DF3B5  C6 45 C4 4C               MOV byte ptr [EBP + -0x3c],0x4c
005DF3B9  C6 45 C5 4D               MOV byte ptr [EBP + -0x3b],0x4d
005DF3BD  C6 45 C6 4E               MOV byte ptr [EBP + -0x3a],0x4e
005DF3C1  C6 45 C7 4F               MOV byte ptr [EBP + -0x39],0x4f
005DF3C5  B1 0D                     MOV CL,0xd
005DF3C7  B0 0A                     MOV AL,0xa
005DF3C9  88 4D C8                  MOV byte ptr [EBP + -0x38],CL
005DF3CC  88 4D EA                  MOV byte ptr [EBP + -0x16],CL
005DF3CF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DF3D2  88 45 C9                  MOV byte ptr [EBP + -0x37],AL
005DF3D5  51                        PUSH ECX
005DF3D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DF3D9  68 1C 01 40 00            PUSH 0x40011c
005DF3DE  52                        PUSH EDX
005DF3DF  88 45 EB                  MOV byte ptr [EBP + -0x15],AL
005DF3E2  6A 01                     PUSH 0x1
005DF3E4  6A 02                     PUSH 0x2
005DF3E6  8D 45 F4                  LEA EAX,[EBP + -0xc]
005DF3E9  6A 05                     PUSH 0x5
005DF3EB  50                        PUSH EAX
005DF3EC  8D 45 A8                  LEA EAX,[EBP + -0x58]
005DF3EF  51                        PUSH ECX
005DF3F0  50                        PUSH EAX
005DF3F1  8D 8D 6C FF FF FF         LEA ECX,[EBP + 0xffffff6c]
005DF3F7  52                        PUSH EDX
005DF3F8  51                        PUSH ECX
005DF3F9  68 9D 01 00 00            PUSH 0x19d
005DF3FE  C6 45 CA 50               MOV byte ptr [EBP + -0x36],0x50
005DF402  C6 45 CB 51               MOV byte ptr [EBP + -0x35],0x51
005DF406  C6 45 CC 52               MOV byte ptr [EBP + -0x34],0x52
005DF40A  C6 45 CD 53               MOV byte ptr [EBP + -0x33],0x53
005DF40E  C6 45 CE 54               MOV byte ptr [EBP + -0x32],0x54
005DF412  C6 45 CF 55               MOV byte ptr [EBP + -0x31],0x55
005DF416  C6 45 D0 56               MOV byte ptr [EBP + -0x30],0x56
005DF41A  C6 45 D1 57               MOV byte ptr [EBP + -0x2f],0x57
005DF41E  C6 45 D2 58               MOV byte ptr [EBP + -0x2e],0x58
005DF422  C6 45 D3 59               MOV byte ptr [EBP + -0x2d],0x59
005DF426  C6 45 D4 5A               MOV byte ptr [EBP + -0x2c],0x5a
005DF42A  C6 45 D5 61               MOV byte ptr [EBP + -0x2b],0x61
005DF42E  C6 45 D6 62               MOV byte ptr [EBP + -0x2a],0x62
005DF432  C6 45 D7 63               MOV byte ptr [EBP + -0x29],0x63
005DF436  C6 45 D8 64               MOV byte ptr [EBP + -0x28],0x64
005DF43A  C6 45 D9 65               MOV byte ptr [EBP + -0x27],0x65
005DF43E  C6 45 DA 66               MOV byte ptr [EBP + -0x26],0x66
005DF442  C6 45 DB 67               MOV byte ptr [EBP + -0x25],0x67
005DF446  C6 45 DC 68               MOV byte ptr [EBP + -0x24],0x68
005DF44A  C6 45 DD 69               MOV byte ptr [EBP + -0x23],0x69
005DF44E  C6 45 DE 6A               MOV byte ptr [EBP + -0x22],0x6a
005DF452  C6 45 DF 6B               MOV byte ptr [EBP + -0x21],0x6b
005DF456  C6 45 E0 6C               MOV byte ptr [EBP + -0x20],0x6c
005DF45A  C6 45 E1 6D               MOV byte ptr [EBP + -0x1f],0x6d
005DF45E  C6 45 E2 6E               MOV byte ptr [EBP + -0x1e],0x6e
005DF462  C6 45 E3 6F               MOV byte ptr [EBP + -0x1d],0x6f
005DF466  C6 45 E4 70               MOV byte ptr [EBP + -0x1c],0x70
005DF46A  C6 45 E5 71               MOV byte ptr [EBP + -0x1b],0x71
005DF46E  C6 45 E6 72               MOV byte ptr [EBP + -0x1a],0x72
005DF472  C6 45 E7 73               MOV byte ptr [EBP + -0x19],0x73
005DF476  C6 45 E8 74               MOV byte ptr [EBP + -0x18],0x74
005DF47A  C6 45 E9 75               MOV byte ptr [EBP + -0x17],0x75
005DF47E  C6 45 EC 76               MOV byte ptr [EBP + -0x14],0x76
005DF482  C6 45 ED 77               MOV byte ptr [EBP + -0x13],0x77
005DF486  C6 45 EE 78               MOV byte ptr [EBP + -0x12],0x78
005DF48A  C6 45 EF 79               MOV byte ptr [EBP + -0x11],0x79
005DF48E  C6 45 F0 7A               MOV byte ptr [EBP + -0x10],0x7a
005DF492  E8 59 DD 12 00            CALL 0x0070d1f0
005DF497  83 C4 30                  ADD ESP,0x30
005DF49A  5F                        POP EDI
005DF49B  5E                        POP ESI
005DF49C  8B E5                     MOV ESP,EBP
005DF49E  5D                        POP EBP
005DF49F  C3                        RET
