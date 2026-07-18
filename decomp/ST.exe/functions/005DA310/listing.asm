FUN_005da310:
005DA310  55                        PUSH EBP
005DA311  8B EC                     MOV EBP,ESP
005DA313  81 EC A0 00 00 00         SUB ESP,0xa0
005DA319  56                        PUSH ESI
005DA31A  57                        PUSH EDI
005DA31B  B9 0F 00 00 00            MOV ECX,0xf
005DA320  33 C0                     XOR EAX,EAX
005DA322  8D BD 60 FF FF FF         LEA EDI,[EBP + 0xffffff60]
005DA328  33 D2                     XOR EDX,EDX
005DA32A  F3 AB                     STOSD.REP ES:EDI
005DA32C  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005DA32F  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
005DA334  88 85 77 FF FF FF         MOV byte ptr [EBP + 0xffffff77],AL
005DA33A  83 C9 FF                  OR ECX,0xffffffff
005DA33D  33 C0                     XOR EAX,EAX
005DA33F  8D B5 7C FF FF FF         LEA ESI,[EBP + 0xffffff7c]
005DA345  F2 AE                     SCASB.REPNE ES:EDI
005DA347  F7 D1                     NOT ECX
005DA349  2B F9                     SUB EDI,ECX
005DA34B  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
005DA34E  8B C1                     MOV EAX,ECX
005DA350  8B F7                     MOV ESI,EDI
005DA352  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005DA355  C7 85 60 FF FF FF F4 FF FF FF  MOV dword ptr [EBP + 0xffffff60],0xfffffff4
005DA35F  C1 E9 02                  SHR ECX,0x2
005DA362  89 95 64 FF FF FF         MOV dword ptr [EBP + 0xffffff64],EDX
005DA368  89 95 68 FF FF FF         MOV dword ptr [EBP + 0xffffff68],EDX
005DA36E  89 95 6C FF FF FF         MOV dword ptr [EBP + 0xffffff6c],EDX
005DA374  C7 85 70 FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff70],0x190
005DA37E  88 95 74 FF FF FF         MOV byte ptr [EBP + 0xffffff74],DL
005DA384  88 95 75 FF FF FF         MOV byte ptr [EBP + 0xffffff75],DL
005DA38A  88 95 76 FF FF FF         MOV byte ptr [EBP + 0xffffff76],DL
005DA390  C6 85 78 FF FF FF 03      MOV byte ptr [EBP + 0xffffff78],0x3
005DA397  C6 85 79 FF FF FF 02      MOV byte ptr [EBP + 0xffffff79],0x2
005DA39E  C6 85 7A FF FF FF 01      MOV byte ptr [EBP + 0xffffff7a],0x1
005DA3A5  C6 85 7B FF FF FF 22      MOV byte ptr [EBP + 0xffffff7b],0x22
005DA3AC  88 55 F4                  MOV byte ptr [EBP + -0xc],DL
005DA3AF  F3 A5                     MOVSD.REP ES:EDI,ESI
005DA3B1  8B C8                     MOV ECX,EAX
005DA3B3  B0 0D                     MOV AL,0xd
005DA3B5  83 E1 03                  AND ECX,0x3
005DA3B8  C6 45 F5 14               MOV byte ptr [EBP + -0xb],0x14
005DA3BC  F3 A4                     MOVSB.REP ES:EDI,ESI
005DA3BE  B1 FE                     MOV CL,0xfe
005DA3C0  C6 45 F6 16               MOV byte ptr [EBP + -0xa],0x16
005DA3C4  C6 45 F7 0C               MOV byte ptr [EBP + -0x9],0xc
005DA3C8  C6 45 F8 0E               MOV byte ptr [EBP + -0x8],0xe
005DA3CC  88 45 F9                  MOV byte ptr [EBP + -0x7],AL
005DA3CF  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
005DA3D2  C6 45 FB 0F               MOV byte ptr [EBP + -0x5],0xf
005DA3D6  88 4D FC                  MOV byte ptr [EBP + -0x4],CL
005DA3D9  C6 45 9C 20               MOV byte ptr [EBP + -0x64],0x20
005DA3DD  C6 45 9D 21               MOV byte ptr [EBP + -0x63],0x21
005DA3E1  C6 45 9E 22               MOV byte ptr [EBP + -0x62],0x22
005DA3E5  C6 45 9F 23               MOV byte ptr [EBP + -0x61],0x23
005DA3E9  C6 45 A0 25               MOV byte ptr [EBP + -0x60],0x25
005DA3ED  C6 45 A1 26               MOV byte ptr [EBP + -0x5f],0x26
005DA3F1  C6 45 A2 27               MOV byte ptr [EBP + -0x5e],0x27
005DA3F5  C6 45 A3 28               MOV byte ptr [EBP + -0x5d],0x28
005DA3F9  C6 45 A4 29               MOV byte ptr [EBP + -0x5c],0x29
005DA3FD  C6 45 A5 2C               MOV byte ptr [EBP + -0x5b],0x2c
005DA401  C6 45 A6 2D               MOV byte ptr [EBP + -0x5a],0x2d
005DA405  C6 45 A7 2E               MOV byte ptr [EBP + -0x59],0x2e
005DA409  C6 45 A8 2F               MOV byte ptr [EBP + -0x58],0x2f
005DA40D  C6 45 A9 30               MOV byte ptr [EBP + -0x57],0x30
005DA411  C6 45 AA 31               MOV byte ptr [EBP + -0x56],0x31
005DA415  C6 45 AB 32               MOV byte ptr [EBP + -0x55],0x32
005DA419  C6 45 AC 33               MOV byte ptr [EBP + -0x54],0x33
005DA41D  C6 45 AD 34               MOV byte ptr [EBP + -0x53],0x34
005DA421  C6 45 AE 35               MOV byte ptr [EBP + -0x52],0x35
005DA425  C6 45 AF 36               MOV byte ptr [EBP + -0x51],0x36
005DA429  C6 45 B0 37               MOV byte ptr [EBP + -0x50],0x37
005DA42D  C6 45 B1 38               MOV byte ptr [EBP + -0x4f],0x38
005DA431  C6 45 B2 39               MOV byte ptr [EBP + -0x4e],0x39
005DA435  C6 45 B3 3A               MOV byte ptr [EBP + -0x4d],0x3a
005DA439  C6 45 B4 3D               MOV byte ptr [EBP + -0x4c],0x3d
005DA43D  C6 45 B5 3E               MOV byte ptr [EBP + -0x4b],0x3e
005DA441  C6 45 B6 3F               MOV byte ptr [EBP + -0x4a],0x3f
005DA445  C6 45 B7 41               MOV byte ptr [EBP + -0x49],0x41
005DA449  C6 45 B8 42               MOV byte ptr [EBP + -0x48],0x42
005DA44D  C6 45 B9 43               MOV byte ptr [EBP + -0x47],0x43
005DA451  C6 45 BA 44               MOV byte ptr [EBP + -0x46],0x44
005DA455  C6 45 BB 45               MOV byte ptr [EBP + -0x45],0x45
005DA459  88 45 BC                  MOV byte ptr [EBP + -0x44],AL
005DA45C  B1 0A                     MOV CL,0xa
005DA45E  88 45 DE                  MOV byte ptr [EBP + -0x22],AL
005DA461  88 4D BD                  MOV byte ptr [EBP + -0x43],CL
005DA464  88 4D DF                  MOV byte ptr [EBP + -0x21],CL
005DA467  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DA46A  8D 45 F4                  LEA EAX,[EBP + -0xc]
005DA46D  51                        PUSH ECX
005DA46E  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DA471  68 1C 01 20 00            PUSH 0x20011c
005DA476  52                        PUSH EDX
005DA477  6A 01                     PUSH 0x1
005DA479  6A 02                     PUSH 0x2
005DA47B  6A 04                     PUSH 0x4
005DA47D  50                        PUSH EAX
005DA47E  8D 45 9C                  LEA EAX,[EBP + -0x64]
005DA481  51                        PUSH ECX
005DA482  50                        PUSH EAX
005DA483  8D 8D 60 FF FF FF         LEA ECX,[EBP + 0xffffff60]
005DA489  52                        PUSH EDX
005DA48A  51                        PUSH ECX
005DA48B  68 9D 01 00 00            PUSH 0x19d
005DA490  C6 45 BE 46               MOV byte ptr [EBP + -0x42],0x46
005DA494  C6 45 BF 47               MOV byte ptr [EBP + -0x41],0x47
005DA498  C6 45 C0 48               MOV byte ptr [EBP + -0x40],0x48
005DA49C  C6 45 C1 49               MOV byte ptr [EBP + -0x3f],0x49
005DA4A0  C6 45 C2 4A               MOV byte ptr [EBP + -0x3e],0x4a
005DA4A4  C6 45 C3 4B               MOV byte ptr [EBP + -0x3d],0x4b
005DA4A8  C6 45 C4 4C               MOV byte ptr [EBP + -0x3c],0x4c
005DA4AC  C6 45 C5 4D               MOV byte ptr [EBP + -0x3b],0x4d
005DA4B0  C6 45 C6 4E               MOV byte ptr [EBP + -0x3a],0x4e
005DA4B4  C6 45 C7 4F               MOV byte ptr [EBP + -0x39],0x4f
005DA4B8  C6 45 C8 50               MOV byte ptr [EBP + -0x38],0x50
005DA4BC  C6 45 C9 51               MOV byte ptr [EBP + -0x37],0x51
005DA4C0  C6 45 CA 52               MOV byte ptr [EBP + -0x36],0x52
005DA4C4  C6 45 CB 53               MOV byte ptr [EBP + -0x35],0x53
005DA4C8  C6 45 CC 54               MOV byte ptr [EBP + -0x34],0x54
005DA4CC  C6 45 CD 55               MOV byte ptr [EBP + -0x33],0x55
005DA4D0  C6 45 CE 56               MOV byte ptr [EBP + -0x32],0x56
005DA4D4  C6 45 CF 57               MOV byte ptr [EBP + -0x31],0x57
005DA4D8  C6 45 D0 58               MOV byte ptr [EBP + -0x30],0x58
005DA4DC  C6 45 D1 59               MOV byte ptr [EBP + -0x2f],0x59
005DA4E0  C6 45 D2 5A               MOV byte ptr [EBP + -0x2e],0x5a
005DA4E4  C6 45 D3 5C               MOV byte ptr [EBP + -0x2d],0x5c
005DA4E8  C6 45 D4 5F               MOV byte ptr [EBP + -0x2c],0x5f
005DA4EC  C6 45 D5 61               MOV byte ptr [EBP + -0x2b],0x61
005DA4F0  C6 45 D6 62               MOV byte ptr [EBP + -0x2a],0x62
005DA4F4  C6 45 D7 63               MOV byte ptr [EBP + -0x29],0x63
005DA4F8  C6 45 D8 64               MOV byte ptr [EBP + -0x28],0x64
005DA4FC  C6 45 D9 65               MOV byte ptr [EBP + -0x27],0x65
005DA500  C6 45 DA 66               MOV byte ptr [EBP + -0x26],0x66
005DA504  C6 45 DB 67               MOV byte ptr [EBP + -0x25],0x67
005DA508  C6 45 DC 68               MOV byte ptr [EBP + -0x24],0x68
005DA50C  C6 45 DD 69               MOV byte ptr [EBP + -0x23],0x69
005DA510  C6 45 E0 6A               MOV byte ptr [EBP + -0x20],0x6a
005DA514  C6 45 E1 6B               MOV byte ptr [EBP + -0x1f],0x6b
005DA518  C6 45 E2 6C               MOV byte ptr [EBP + -0x1e],0x6c
005DA51C  C6 45 E3 6D               MOV byte ptr [EBP + -0x1d],0x6d
005DA520  C6 45 E4 6E               MOV byte ptr [EBP + -0x1c],0x6e
005DA524  C6 45 E5 6F               MOV byte ptr [EBP + -0x1b],0x6f
005DA528  C6 45 E6 70               MOV byte ptr [EBP + -0x1a],0x70
005DA52C  C6 45 E7 71               MOV byte ptr [EBP + -0x19],0x71
005DA530  C6 45 E8 72               MOV byte ptr [EBP + -0x18],0x72
005DA534  C6 45 E9 73               MOV byte ptr [EBP + -0x17],0x73
005DA538  C6 45 EA 74               MOV byte ptr [EBP + -0x16],0x74
005DA53C  C6 45 EB 75               MOV byte ptr [EBP + -0x15],0x75
005DA540  C6 45 EC 76               MOV byte ptr [EBP + -0x14],0x76
005DA544  C6 45 ED 77               MOV byte ptr [EBP + -0x13],0x77
005DA548  C6 45 EE 78               MOV byte ptr [EBP + -0x12],0x78
005DA54C  C6 45 EF 79               MOV byte ptr [EBP + -0x11],0x79
005DA550  C6 45 F0 7A               MOV byte ptr [EBP + -0x10],0x7a
005DA554  C6 45 F1 7C               MOV byte ptr [EBP + -0xf],0x7c
005DA558  C6 45 F2 7E               MOV byte ptr [EBP + -0xe],0x7e
005DA55C  E8 8F 2C 13 00            CALL 0x0070d1f0
005DA561  83 C4 30                  ADD ESP,0x30
005DA564  5F                        POP EDI
005DA565  5E                        POP ESI
005DA566  8B E5                     MOV ESP,EBP
005DA568  5D                        POP EBP
005DA569  C3                        RET
