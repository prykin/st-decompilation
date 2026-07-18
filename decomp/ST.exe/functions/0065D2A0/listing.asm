FUN_0065d2a0:
0065D2A0  55                        PUSH EBP
0065D2A1  8B EC                     MOV EBP,ESP
0065D2A3  83 EC 4C                  SUB ESP,0x4c
0065D2A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0065D2AB  53                        PUSH EBX
0065D2AC  56                        PUSH ESI
0065D2AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0065D2B0  57                        PUSH EDI
0065D2B1  8D 55 B8                  LEA EDX,[EBP + -0x48]
0065D2B4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0065D2B7  6A 00                     PUSH 0x0
0065D2B9  52                        PUSH EDX
0065D2BA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0065D2BD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0065D2C3  E8 28 05 0D 00            CALL 0x0072d7f0
0065D2C8  8B F0                     MOV ESI,EAX
0065D2CA  83 C4 08                  ADD ESP,0x8
0065D2CD  85 F6                     TEST ESI,ESI
0065D2CF  0F 85 F6 00 00 00         JNZ 0x0065d3cb
0065D2D5  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
0065D2D8  85 DB                     TEST EBX,EBX
0065D2DA  74 05                     JZ 0x0065d2e1
0065D2DC  8D 7B 20                  LEA EDI,[EBX + 0x20]
0065D2DF  EB 02                     JMP 0x0065d2e3
LAB_0065d2e1:
0065D2E1  33 FF                     XOR EDI,EDI
LAB_0065d2e3:
0065D2E3  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065D2E6  B9 98 00 00 00            MOV ECX,0x98
0065D2EB  F3 A5                     MOVSD.REP ES:EDI,ESI
0065D2ED  8D BB 0B 02 00 00         LEA EDI,[EBX + 0x20b]
0065D2F3  C7 43 20 84 03 00 00      MOV dword ptr [EBX + 0x20],0x384
0065D2FA  C6 43 38 01               MOV byte ptr [EBX + 0x38],0x1
0065D2FE  8B F7                     MOV ESI,EDI
0065D300  C7 45 FC 07 00 00 00      MOV dword ptr [EBP + -0x4],0x7
LAB_0065d307:
0065D307  83 3E 00                  CMP dword ptr [ESI],0x0
0065D30A  74 17                     JZ 0x0065d323
0065D30C  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0065D30F  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0065D312  8D 84 08 5F 02 00 00      LEA EAX,[EAX + ECX*0x1 + 0x25f]
0065D319  50                        PUSH EAX
0065D31A  6A 00                     PUSH 0x0
0065D31C  E8 3F 2D 05 00            CALL 0x006b0060
0065D321  89 06                     MOV dword ptr [ESI],EAX
LAB_0065d323:
0065D323  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0065D326  83 C6 0C                  ADD ESI,0xc
0065D329  48                        DEC EAX
0065D32A  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0065D32D  75 D8                     JNZ 0x0065d307
0065D32F  83 3F 00                  CMP dword ptr [EDI],0x0
0065D332  75 0F                     JNZ 0x0065d343
0065D334  6A 0A                     PUSH 0xa
0065D336  6A 2C                     PUSH 0x2c
0065D338  6A 0A                     PUSH 0xa
0065D33A  6A 00                     PUSH 0x0
0065D33C  E8 4F 0F 05 00            CALL 0x006ae290
0065D341  89 07                     MOV dword ptr [EDI],EAX
LAB_0065d343:
0065D343  8B 83 17 02 00 00         MOV EAX,dword ptr [EBX + 0x217]
0065D349  85 C0                     TEST EAX,EAX
0065D34B  75 13                     JNZ 0x0065d360
0065D34D  6A 0A                     PUSH 0xa
0065D34F  6A 34                     PUSH 0x34
0065D351  6A 14                     PUSH 0x14
0065D353  6A 00                     PUSH 0x0
0065D355  E8 36 0F 05 00            CALL 0x006ae290
0065D35A  89 83 17 02 00 00         MOV dword ptr [EBX + 0x217],EAX
LAB_0065d360:
0065D360  8B 83 23 02 00 00         MOV EAX,dword ptr [EBX + 0x223]
0065D366  85 C0                     TEST EAX,EAX
0065D368  75 13                     JNZ 0x0065d37d
0065D36A  6A 0A                     PUSH 0xa
0065D36C  6A 14                     PUSH 0x14
0065D36E  6A 0A                     PUSH 0xa
0065D370  6A 00                     PUSH 0x0
0065D372  E8 19 0F 05 00            CALL 0x006ae290
0065D377  89 83 23 02 00 00         MOV dword ptr [EBX + 0x223],EAX
LAB_0065d37d:
0065D37D  8B 83 2F 02 00 00         MOV EAX,dword ptr [EBX + 0x22f]
0065D383  85 C0                     TEST EAX,EAX
0065D385  75 13                     JNZ 0x0065d39a
0065D387  6A 0A                     PUSH 0xa
0065D389  6A 0C                     PUSH 0xc
0065D38B  6A 0A                     PUSH 0xa
0065D38D  6A 00                     PUSH 0x0
0065D38F  E8 FC 0E 05 00            CALL 0x006ae290
0065D394  89 83 2F 02 00 00         MOV dword ptr [EBX + 0x22f],EAX
LAB_0065d39a:
0065D39A  8B 83 3B 02 00 00         MOV EAX,dword ptr [EBX + 0x23b]
0065D3A0  85 C0                     TEST EAX,EAX
0065D3A2  75 13                     JNZ 0x0065d3b7
0065D3A4  6A 0A                     PUSH 0xa
0065D3A6  6A 04                     PUSH 0x4
0065D3A8  6A 0A                     PUSH 0xa
0065D3AA  6A 00                     PUSH 0x0
0065D3AC  E8 DF 0E 05 00            CALL 0x006ae290
0065D3B1  89 83 3B 02 00 00         MOV dword ptr [EBX + 0x23b],EAX
LAB_0065d3b7:
0065D3B7  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0065D3BA  33 C0                     XOR EAX,EAX
0065D3BC  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0065D3C2  5F                        POP EDI
0065D3C3  5E                        POP ESI
0065D3C4  5B                        POP EBX
0065D3C5  8B E5                     MOV ESP,EBP
0065D3C7  5D                        POP EBP
0065D3C8  C2 04 00                  RET 0x4
LAB_0065d3cb:
0065D3CB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0065D3CE  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0065D3D1  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0065D3D6  E8 31 4E DA FF            CALL 0x0040220c
0065D3DB  68 A0 2B 7D 00            PUSH 0x7d2ba0
0065D3E0  68 CC 4C 7A 00            PUSH 0x7a4ccc
0065D3E5  56                        PUSH ESI
0065D3E6  6A 00                     PUSH 0x0
0065D3E8  6A 31                     PUSH 0x31
0065D3EA  68 80 2B 7D 00            PUSH 0x7d2b80
0065D3EF  E8 DC 00 05 00            CALL 0x006ad4d0
0065D3F4  83 C4 18                  ADD ESP,0x18
0065D3F7  85 C0                     TEST EAX,EAX
0065D3F9  74 01                     JZ 0x0065d3fc
0065D3FB  CC                        INT3
LAB_0065d3fc:
0065D3FC  6A 32                     PUSH 0x32
0065D3FE  68 80 2B 7D 00            PUSH 0x7d2b80
0065D403  6A 00                     PUSH 0x0
0065D405  56                        PUSH ESI
0065D406  E8 35 8A 04 00            CALL 0x006a5e40
0065D40B  8B C6                     MOV EAX,ESI
0065D40D  5F                        POP EDI
0065D40E  5E                        POP ESI
0065D40F  5B                        POP EBX
0065D410  8B E5                     MOV ESP,EBP
0065D412  5D                        POP EBP
0065D413  C2 04 00                  RET 0x4
