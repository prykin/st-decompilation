FUN_005da130:
005DA130  55                        PUSH EBP
005DA131  8B EC                     MOV EBP,ESP
005DA133  83 EC 74                  SUB ESP,0x74
005DA136  56                        PUSH ESI
005DA137  57                        PUSH EDI
005DA138  B9 0F 00 00 00            MOV ECX,0xf
005DA13D  33 C0                     XOR EAX,EAX
005DA13F  8D 7D 8C                  LEA EDI,[EBP + -0x74]
005DA142  33 D2                     XOR EDX,EDX
005DA144  F3 AB                     STOSD.REP ES:EDI
005DA146  8A 45 10                  MOV AL,byte ptr [EBP + 0x10]
005DA149  BF C4 1B 7C 00            MOV EDI,0x7c1bc4
005DA14E  88 45 A3                  MOV byte ptr [EBP + -0x5d],AL
005DA151  83 C9 FF                  OR ECX,0xffffffff
005DA154  33 C0                     XOR EAX,EAX
005DA156  8D 75 A8                  LEA ESI,[EBP + -0x58]
005DA159  F2 AE                     SCASB.REPNE ES:EDI
005DA15B  F7 D1                     NOT ECX
005DA15D  2B F9                     SUB EDI,ECX
005DA15F  89 75 10                  MOV dword ptr [EBP + 0x10],ESI
005DA162  8B C1                     MOV EAX,ECX
005DA164  8B F7                     MOV ESI,EDI
005DA166  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
005DA169  C7 45 8C F0 FF FF FF      MOV dword ptr [EBP + -0x74],0xfffffff0
005DA170  C1 E9 02                  SHR ECX,0x2
005DA173  89 55 90                  MOV dword ptr [EBP + -0x70],EDX
005DA176  89 55 94                  MOV dword ptr [EBP + -0x6c],EDX
005DA179  89 55 98                  MOV dword ptr [EBP + -0x68],EDX
005DA17C  C7 45 9C 90 01 00 00      MOV dword ptr [EBP + -0x64],0x190
005DA183  88 55 A0                  MOV byte ptr [EBP + -0x60],DL
005DA186  88 55 A1                  MOV byte ptr [EBP + -0x5f],DL
005DA189  88 55 A2                  MOV byte ptr [EBP + -0x5e],DL
005DA18C  C6 45 A4 03               MOV byte ptr [EBP + -0x5c],0x3
005DA190  C6 45 A5 02               MOV byte ptr [EBP + -0x5b],0x2
005DA194  C6 45 A6 01               MOV byte ptr [EBP + -0x5a],0x1
005DA198  C6 45 A7 22               MOV byte ptr [EBP + -0x59],0x22
005DA19C  88 55 E8                  MOV byte ptr [EBP + -0x18],DL
005DA19F  F3 A5                     MOVSD.REP ES:EDI,ESI
005DA1A1  8B C8                     MOV ECX,EAX
005DA1A3  B0 FA                     MOV AL,0xfa
005DA1A5  88 45 ED                  MOV byte ptr [EBP + -0x13],AL
005DA1A8  88 45 F0                  MOV byte ptr [EBP + -0x10],AL
005DA1AB  88 45 F1                  MOV byte ptr [EBP + -0xf],AL
005DA1AE  B0 FB                     MOV AL,0xfb
005DA1B0  88 45 F3                  MOV byte ptr [EBP + -0xd],AL
005DA1B3  88 45 F4                  MOV byte ptr [EBP + -0xc],AL
005DA1B6  B0 06                     MOV AL,0x6
005DA1B8  83 E1 03                  AND ECX,0x3
005DA1BB  88 45 F6                  MOV byte ptr [EBP + -0xa],AL
005DA1BE  88 45 F7                  MOV byte ptr [EBP + -0x9],AL
005DA1C1  B0 FE                     MOV AL,0xfe
005DA1C3  C6 45 E9 13               MOV byte ptr [EBP + -0x17],0x13
005DA1C7  F3 A4                     MOVSB.REP ES:EDI,ESI
005DA1C9  C6 45 EA 02               MOV byte ptr [EBP + -0x16],0x2
005DA1CD  C6 45 EB 02               MOV byte ptr [EBP + -0x15],0x2
005DA1D1  C6 45 EC 14               MOV byte ptr [EBP + -0x14],0x14
005DA1D5  C6 45 EE 16               MOV byte ptr [EBP + -0x12],0x16
005DA1D9  C6 45 EF 15               MOV byte ptr [EBP + -0x11],0x15
005DA1DD  C6 45 F2 10               MOV byte ptr [EBP + -0xe],0x10
005DA1E1  C6 45 F5 33               MOV byte ptr [EBP + -0xb],0x33
005DA1E5  C6 45 F8 0D               MOV byte ptr [EBP + -0x8],0xd
005DA1E9  88 45 F9                  MOV byte ptr [EBP + -0x7],AL
005DA1EC  88 45 FA                  MOV byte ptr [EBP + -0x6],AL
005DA1EF  C6 45 FB 0E               MOV byte ptr [EBP + -0x5],0xe
005DA1F3  88 45 FC                  MOV byte ptr [EBP + -0x4],AL
005DA1F6  88 45 FD                  MOV byte ptr [EBP + -0x3],AL
005DA1F9  C6 45 C8 27               MOV byte ptr [EBP + -0x38],0x27
005DA1FD  C6 45 C9 28               MOV byte ptr [EBP + -0x37],0x28
005DA201  C6 45 CA 29               MOV byte ptr [EBP + -0x36],0x29
005DA205  C6 45 CB 2C               MOV byte ptr [EBP + -0x35],0x2c
005DA209  C6 45 CC 2D               MOV byte ptr [EBP + -0x34],0x2d
005DA20D  C6 45 CD 2E               MOV byte ptr [EBP + -0x33],0x2e
005DA211  C6 45 CE 41               MOV byte ptr [EBP + -0x32],0x41
005DA215  C6 45 CF 42               MOV byte ptr [EBP + -0x31],0x42
005DA219  C6 45 D0 43               MOV byte ptr [EBP + -0x30],0x43
005DA21D  C6 45 D1 44               MOV byte ptr [EBP + -0x2f],0x44
005DA221  C6 45 D2 45               MOV byte ptr [EBP + -0x2e],0x45
005DA225  C6 45 D3 46               MOV byte ptr [EBP + -0x2d],0x46
005DA229  C6 45 D4 47               MOV byte ptr [EBP + -0x2c],0x47
005DA22D  C6 45 D5 48               MOV byte ptr [EBP + -0x2b],0x48
005DA231  C6 45 D6 49               MOV byte ptr [EBP + -0x2a],0x49
005DA235  C6 45 D7 4A               MOV byte ptr [EBP + -0x29],0x4a
005DA239  C6 45 D8 4B               MOV byte ptr [EBP + -0x28],0x4b
005DA23D  C6 45 D9 4C               MOV byte ptr [EBP + -0x27],0x4c
005DA241  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005DA244  8D 45 E8                  LEA EAX,[EBP + -0x18]
005DA247  51                        PUSH ECX
005DA248  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DA24B  68 1C 01 00 01            PUSH 0x100011c
005DA250  6A 01                     PUSH 0x1
005DA252  6A 01                     PUSH 0x1
005DA254  6A 03                     PUSH 0x3
005DA256  6A 07                     PUSH 0x7
005DA258  50                        PUSH EAX
005DA259  8D 45 C8                  LEA EAX,[EBP + -0x38]
005DA25C  51                        PUSH ECX
005DA25D  50                        PUSH EAX
005DA25E  8D 4D 8C                  LEA ECX,[EBP + -0x74]
005DA261  52                        PUSH EDX
005DA262  51                        PUSH ECX
005DA263  68 9D 01 00 00            PUSH 0x19d
005DA268  C6 45 DA 4D               MOV byte ptr [EBP + -0x26],0x4d
005DA26C  C6 45 DB 4E               MOV byte ptr [EBP + -0x25],0x4e
005DA270  C6 45 DC 4F               MOV byte ptr [EBP + -0x24],0x4f
005DA274  C6 45 DD 50               MOV byte ptr [EBP + -0x23],0x50
005DA278  C6 45 DE 51               MOV byte ptr [EBP + -0x22],0x51
005DA27C  C6 45 DF 52               MOV byte ptr [EBP + -0x21],0x52
005DA280  C6 45 E0 53               MOV byte ptr [EBP + -0x20],0x53
005DA284  C6 45 E1 54               MOV byte ptr [EBP + -0x1f],0x54
005DA288  C6 45 E2 55               MOV byte ptr [EBP + -0x1e],0x55
005DA28C  C6 45 E3 56               MOV byte ptr [EBP + -0x1d],0x56
005DA290  C6 45 E4 57               MOV byte ptr [EBP + -0x1c],0x57
005DA294  C6 45 E5 58               MOV byte ptr [EBP + -0x1b],0x58
005DA298  C6 45 E6 59               MOV byte ptr [EBP + -0x1a],0x59
005DA29C  C6 45 E7 5A               MOV byte ptr [EBP + -0x19],0x5a
005DA2A0  E8 4B 2F 13 00            CALL 0x0070d1f0
005DA2A5  83 C4 30                  ADD ESP,0x30
005DA2A8  5F                        POP EDI
005DA2A9  5E                        POP ESI
005DA2AA  8B E5                     MOV ESP,EBP
005DA2AC  5D                        POP EBP
005DA2AD  C3                        RET
