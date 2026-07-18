FUN_005412b0:
005412B0  55                        PUSH EBP
005412B1  8B EC                     MOV EBP,ESP
005412B3  81 EC C8 00 00 00         SUB ESP,0xc8
005412B9  53                        PUSH EBX
005412BA  56                        PUSH ESI
005412BB  57                        PUSH EDI
005412BC  B9 0F 00 00 00            MOV ECX,0xf
005412C1  33 C0                     XOR EAX,EAX
005412C3  8D BD 38 FF FF FF         LEA EDI,[EBP + 0xffffff38]
005412C9  F3 AB                     STOSD.REP ES:EDI
005412CB  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005412CE  BF B4 1B 7C 00            MOV EDI,0x7c1bb4
005412D3  88 85 4F FF FF FF         MOV byte ptr [EBP + 0xffffff4f],AL
005412D9  83 C9 FF                  OR ECX,0xffffffff
005412DC  33 C0                     XOR EAX,EAX
005412DE  33 D2                     XOR EDX,EDX
005412E0  F2 AE                     SCASB.REPNE ES:EDI
005412E2  F7 D1                     NOT ECX
005412E4  2B F9                     SUB EDI,ECX
005412E6  8D 9D 54 FF FF FF         LEA EBX,[EBP + 0xffffff54]
005412EC  8B C1                     MOV EAX,ECX
005412EE  8B F7                     MOV ESI,EDI
005412F0  8B FB                     MOV EDI,EBX
005412F2  C7 85 38 FF FF FF F7 FF FF FF  MOV dword ptr [EBP + 0xffffff38],0xfffffff7
005412FC  C1 E9 02                  SHR ECX,0x2
005412FF  89 95 3C FF FF FF         MOV dword ptr [EBP + 0xffffff3c],EDX
00541305  89 95 40 FF FF FF         MOV dword ptr [EBP + 0xffffff40],EDX
0054130B  89 95 44 FF FF FF         MOV dword ptr [EBP + 0xffffff44],EDX
00541311  C7 85 48 FF FF FF 90 01 00 00  MOV dword ptr [EBP + 0xffffff48],0x190
0054131B  88 95 4C FF FF FF         MOV byte ptr [EBP + 0xffffff4c],DL
00541321  88 95 4D FF FF FF         MOV byte ptr [EBP + 0xffffff4d],DL
00541327  88 95 4E FF FF FF         MOV byte ptr [EBP + 0xffffff4e],DL
0054132D  C6 85 50 FF FF FF 01      MOV byte ptr [EBP + 0xffffff50],0x1
00541334  C6 85 51 FF FF FF 02      MOV byte ptr [EBP + 0xffffff51],0x2
0054133B  C6 85 52 FF FF FF 01      MOV byte ptr [EBP + 0xffffff52],0x1
00541342  C6 85 53 FF FF FF 22      MOV byte ptr [EBP + 0xffffff53],0x22
00541349  B3 5C                     MOV BL,0x5c
0054134B  F3 A5                     MOVSD.REP ES:EDI,ESI
0054134D  8B C8                     MOV ECX,EAX
0054134F  B0 43                     MOV AL,0x43
00541351  83 E1 03                  AND ECX,0x3
00541354  88 55 CC                  MOV byte ptr [EBP + -0x34],DL
00541357  F3 A4                     MOVSB.REP ES:EDI,ESI
00541359  B1 10                     MOV CL,0x10
0054135B  C6 45 CD 6A               MOV byte ptr [EBP + -0x33],0x6a
0054135F  88 4D DC                  MOV byte ptr [EBP + -0x24],CL
00541362  88 4D DD                  MOV byte ptr [EBP + -0x23],CL
00541365  B1 11                     MOV CL,0x11
00541367  C6 45 CE 46               MOV byte ptr [EBP + -0x32],0x46
0054136B  88 4D DE                  MOV byte ptr [EBP + -0x22],CL
0054136E  88 4D DF                  MOV byte ptr [EBP + -0x21],CL
00541371  88 4D E0                  MOV byte ptr [EBP + -0x20],CL
00541374  88 4D E1                  MOV byte ptr [EBP + -0x1f],CL
00541377  B1 16                     MOV CL,0x16
00541379  C6 45 CF 28               MOV byte ptr [EBP + -0x31],0x28
0054137D  88 4D E3                  MOV byte ptr [EBP + -0x1d],CL
00541380  88 4D E4                  MOV byte ptr [EBP + -0x1c],CL
00541383  B1 17                     MOV CL,0x17
00541385  C6 45 D0 29               MOV byte ptr [EBP + -0x30],0x29
00541389  88 4D E5                  MOV byte ptr [EBP + -0x1b],CL
0054138C  88 4D E6                  MOV byte ptr [EBP + -0x1a],CL
0054138F  88 4D E7                  MOV byte ptr [EBP + -0x19],CL
00541392  88 4D E8                  MOV byte ptr [EBP + -0x18],CL
00541395  B1 AF                     MOV CL,0xaf
00541397  88 45 D1                  MOV byte ptr [EBP + -0x2f],AL
0054139A  88 45 D2                  MOV byte ptr [EBP + -0x2e],AL
0054139D  88 45 D3                  MOV byte ptr [EBP + -0x2d],AL
005413A0  C6 45 D4 CF               MOV byte ptr [EBP + -0x2c],0xcf
005413A4  C6 45 D5 57               MOV byte ptr [EBP + -0x2b],0x57
005413A8  C6 45 D6 A2               MOV byte ptr [EBP + -0x2a],0xa2
005413AC  C6 45 D7 5B               MOV byte ptr [EBP + -0x29],0x5b
005413B0  88 5D D8                  MOV byte ptr [EBP + -0x28],BL
005413B3  88 5D D9                  MOV byte ptr [EBP + -0x27],BL
005413B6  88 5D DA                  MOV byte ptr [EBP + -0x26],BL
005413B9  C6 45 DB 15               MOV byte ptr [EBP + -0x25],0x15
005413BD  C6 45 E2 1B               MOV byte ptr [EBP + -0x1e],0x1b
005413C1  C6 45 E9 B1               MOV byte ptr [EBP + -0x17],0xb1
005413C5  C6 45 EA 84               MOV byte ptr [EBP + -0x16],0x84
005413C9  C6 45 EB AE               MOV byte ptr [EBP + -0x15],0xae
005413CD  C6 45 EC C1               MOV byte ptr [EBP + -0x14],0xc1
005413D1  88 4D ED                  MOV byte ptr [EBP + -0x13],CL
005413D4  88 4D EE                  MOV byte ptr [EBP + -0x12],CL
005413D7  88 4D EF                  MOV byte ptr [EBP + -0x11],CL
005413DA  C6 45 F0 3F               MOV byte ptr [EBP + -0x10],0x3f
005413DE  B1 34                     MOV CL,0x34
005413E0  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005413E3  88 45 F5                  MOV byte ptr [EBP + -0xb],AL
005413E6  88 45 F6                  MOV byte ptr [EBP + -0xa],AL
005413E9  88 4D F8                  MOV byte ptr [EBP + -0x8],CL
005413EC  88 4D F9                  MOV byte ptr [EBP + -0x7],CL
005413EF  88 4D FA                  MOV byte ptr [EBP + -0x6],CL
005413F2  88 4D 85                  MOV byte ptr [EBP + -0x7b],CL
005413F5  88 45 91                  MOV byte ptr [EBP + -0x6f],AL
005413F8  B1 0D                     MOV CL,0xd
005413FA  B0 0A                     MOV AL,0xa
005413FC  C6 45 F1 46               MOV byte ptr [EBP + -0xf],0x46
00541400  C6 45 F2 28               MOV byte ptr [EBP + -0xe],0x28
00541404  C6 45 F3 29               MOV byte ptr [EBP + -0xd],0x29
00541408  C6 45 F7 39               MOV byte ptr [EBP + -0x9],0x39
0054140C  C6 45 FB 35               MOV byte ptr [EBP + -0x5],0x35
00541410  C6 45 FC 35               MOV byte ptr [EBP + -0x4],0x35
00541414  C6 45 FD 36               MOV byte ptr [EBP + -0x3],0x36
00541418  C6 85 74 FF FF FF 20      MOV byte ptr [EBP + 0xffffff74],0x20
0054141F  C6 85 75 FF FF FF 21      MOV byte ptr [EBP + 0xffffff75],0x21
00541426  C6 85 76 FF FF FF 22      MOV byte ptr [EBP + 0xffffff76],0x22
0054142D  C6 85 77 FF FF FF 23      MOV byte ptr [EBP + 0xffffff77],0x23
00541434  C6 85 78 FF FF FF 25      MOV byte ptr [EBP + 0xffffff78],0x25
0054143B  C6 85 79 FF FF FF 26      MOV byte ptr [EBP + 0xffffff79],0x26
00541442  C6 85 7A FF FF FF 27      MOV byte ptr [EBP + 0xffffff7a],0x27
00541449  C6 85 7B FF FF FF 28      MOV byte ptr [EBP + 0xffffff7b],0x28
00541450  C6 85 7C FF FF FF 29      MOV byte ptr [EBP + 0xffffff7c],0x29
00541457  C6 85 7D FF FF FF 2C      MOV byte ptr [EBP + 0xffffff7d],0x2c
0054145E  C6 85 7E FF FF FF 2D      MOV byte ptr [EBP + 0xffffff7e],0x2d
00541465  C6 85 7F FF FF FF 2E      MOV byte ptr [EBP + 0xffffff7f],0x2e
0054146C  C6 45 80 2F               MOV byte ptr [EBP + -0x80],0x2f
00541470  C6 45 81 30               MOV byte ptr [EBP + -0x7f],0x30
00541474  C6 45 82 31               MOV byte ptr [EBP + -0x7e],0x31
00541478  C6 45 83 32               MOV byte ptr [EBP + -0x7d],0x32
0054147C  C6 45 84 33               MOV byte ptr [EBP + -0x7c],0x33
00541480  C6 45 86 35               MOV byte ptr [EBP + -0x7a],0x35
00541484  C6 45 87 36               MOV byte ptr [EBP + -0x79],0x36
00541488  C6 45 88 37               MOV byte ptr [EBP + -0x78],0x37
0054148C  C6 45 89 38               MOV byte ptr [EBP + -0x77],0x38
00541490  C6 45 8A 39               MOV byte ptr [EBP + -0x76],0x39
00541494  C6 45 8B 3A               MOV byte ptr [EBP + -0x75],0x3a
00541498  C6 45 8C 3D               MOV byte ptr [EBP + -0x74],0x3d
0054149C  C6 45 8D 3E               MOV byte ptr [EBP + -0x73],0x3e
005414A0  C6 45 8E 3F               MOV byte ptr [EBP + -0x72],0x3f
005414A4  C6 45 8F 41               MOV byte ptr [EBP + -0x71],0x41
005414A8  C6 45 90 42               MOV byte ptr [EBP + -0x70],0x42
005414AC  C6 45 92 44               MOV byte ptr [EBP + -0x6e],0x44
005414B0  C6 45 93 45               MOV byte ptr [EBP + -0x6d],0x45
005414B4  88 4D 94                  MOV byte ptr [EBP + -0x6c],CL
005414B7  88 45 95                  MOV byte ptr [EBP + -0x6b],AL
005414BA  C6 45 96 46               MOV byte ptr [EBP + -0x6a],0x46
005414BE  C6 45 97 47               MOV byte ptr [EBP + -0x69],0x47
005414C2  C6 45 98 48               MOV byte ptr [EBP + -0x68],0x48
005414C6  C6 45 99 49               MOV byte ptr [EBP + -0x67],0x49
005414CA  C6 45 9A 4A               MOV byte ptr [EBP + -0x66],0x4a
005414CE  C6 45 9B 4B               MOV byte ptr [EBP + -0x65],0x4b
005414D2  C6 45 9C 4C               MOV byte ptr [EBP + -0x64],0x4c
005414D6  C6 45 9D 4D               MOV byte ptr [EBP + -0x63],0x4d
005414DA  C6 45 9E 4E               MOV byte ptr [EBP + -0x62],0x4e
005414DE  C6 45 9F 4F               MOV byte ptr [EBP + -0x61],0x4f
005414E2  C6 45 A0 50               MOV byte ptr [EBP + -0x60],0x50
005414E6  C6 45 A1 51               MOV byte ptr [EBP + -0x5f],0x51
005414EA  C6 45 A2 52               MOV byte ptr [EBP + -0x5e],0x52
005414EE  C6 45 A3 53               MOV byte ptr [EBP + -0x5d],0x53
005414F2  C6 45 A4 54               MOV byte ptr [EBP + -0x5c],0x54
005414F6  C6 45 A5 55               MOV byte ptr [EBP + -0x5b],0x55
005414FA  C6 45 A6 56               MOV byte ptr [EBP + -0x5a],0x56
005414FE  C6 45 A7 57               MOV byte ptr [EBP + -0x59],0x57
00541502  C6 45 A8 58               MOV byte ptr [EBP + -0x58],0x58
00541506  C6 45 A9 59               MOV byte ptr [EBP + -0x57],0x59
0054150A  C6 45 AA 5A               MOV byte ptr [EBP + -0x56],0x5a
0054150E  88 5D AB                  MOV byte ptr [EBP + -0x55],BL
00541511  C6 45 AC 5F               MOV byte ptr [EBP + -0x54],0x5f
00541515  C6 45 AD 61               MOV byte ptr [EBP + -0x53],0x61
00541519  C6 45 AE 62               MOV byte ptr [EBP + -0x52],0x62
0054151D  C6 45 AF 63               MOV byte ptr [EBP + -0x51],0x63
00541521  C6 45 B0 64               MOV byte ptr [EBP + -0x50],0x64
00541525  C6 45 B1 65               MOV byte ptr [EBP + -0x4f],0x65
00541529  C6 45 B2 66               MOV byte ptr [EBP + -0x4e],0x66
0054152D  C6 45 B3 67               MOV byte ptr [EBP + -0x4d],0x67
00541531  C6 45 B4 68               MOV byte ptr [EBP + -0x4c],0x68
00541535  88 4D B6                  MOV byte ptr [EBP + -0x4a],CL
00541538  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054153B  51                        PUSH ECX
0054153C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0054153F  68 1C 02 20 00            PUSH 0x20021c
00541544  52                        PUSH EDX
00541545  88 45 B7                  MOV byte ptr [EBP + -0x49],AL
00541548  6A 01                     PUSH 0x1
0054154A  6A 07                     PUSH 0x7
0054154C  8D 45 CC                  LEA EAX,[EBP + -0x34]
0054154F  6A 07                     PUSH 0x7
00541551  50                        PUSH EAX
00541552  8D 85 74 FF FF FF         LEA EAX,[EBP + 0xffffff74]
00541558  51                        PUSH ECX
00541559  50                        PUSH EAX
0054155A  8D 8D 38 FF FF FF         LEA ECX,[EBP + 0xffffff38]
00541560  52                        PUSH EDX
00541561  51                        PUSH ECX
00541562  68 9D 01 00 00            PUSH 0x19d
00541567  C6 45 B5 69               MOV byte ptr [EBP + -0x4b],0x69
0054156B  C6 45 B8 6A               MOV byte ptr [EBP + -0x48],0x6a
0054156F  C6 45 B9 6B               MOV byte ptr [EBP + -0x47],0x6b
00541573  C6 45 BA 6C               MOV byte ptr [EBP + -0x46],0x6c
00541577  C6 45 BB 6D               MOV byte ptr [EBP + -0x45],0x6d
0054157B  C6 45 BC 6E               MOV byte ptr [EBP + -0x44],0x6e
0054157F  C6 45 BD 6F               MOV byte ptr [EBP + -0x43],0x6f
00541583  C6 45 BE 70               MOV byte ptr [EBP + -0x42],0x70
00541587  C6 45 BF 71               MOV byte ptr [EBP + -0x41],0x71
0054158B  C6 45 C0 72               MOV byte ptr [EBP + -0x40],0x72
0054158F  C6 45 C1 73               MOV byte ptr [EBP + -0x3f],0x73
00541593  C6 45 C2 74               MOV byte ptr [EBP + -0x3e],0x74
00541597  C6 45 C3 75               MOV byte ptr [EBP + -0x3d],0x75
0054159B  C6 45 C4 76               MOV byte ptr [EBP + -0x3c],0x76
0054159F  C6 45 C5 77               MOV byte ptr [EBP + -0x3b],0x77
005415A3  C6 45 C6 78               MOV byte ptr [EBP + -0x3a],0x78
005415A7  C6 45 C7 79               MOV byte ptr [EBP + -0x39],0x79
005415AB  C6 45 C8 7A               MOV byte ptr [EBP + -0x38],0x7a
005415AF  C6 45 C9 7C               MOV byte ptr [EBP + -0x37],0x7c
005415B3  C6 45 CA 7E               MOV byte ptr [EBP + -0x36],0x7e
005415B7  E8 34 BC 1C 00            CALL 0x0070d1f0
005415BC  83 C4 30                  ADD ESP,0x30
005415BF  5F                        POP EDI
005415C0  5E                        POP ESI
005415C1  5B                        POP EBX
005415C2  8B E5                     MOV ESP,EBP
005415C4  5D                        POP EBP
005415C5  C3                        RET
