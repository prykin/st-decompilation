mfRLoadRelease:
0070A050  55                        PUSH EBP
0070A051  8B EC                     MOV EBP,ESP
0070A053  83 EC 50                  SUB ESP,0x50
0070A056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A05B  56                        PUSH ESI
0070A05C  57                        PUSH EDI
0070A05D  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0070A060  8D 4D B0                  LEA ECX,[EBP + -0x50]
0070A063  6A 00                     PUSH 0x0
0070A065  52                        PUSH EDX
0070A066  C7 45 F4 FC FF FF FF      MOV dword ptr [EBP + -0xc],0xfffffffc
0070A06D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0070A074  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0070A077  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A07D  E8 6E 37 02 00            CALL 0x0072d7f0
0070A082  8B F0                     MOV ESI,EAX
0070A084  83 C4 08                  ADD ESP,0x8
0070A087  85 F6                     TEST ESI,ESI
0070A089  0F 85 CD 00 00 00         JNZ 0x0070a15c
0070A08F  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070A092  85 F6                     TEST ESI,ESI
0070A094  75 22                     JNZ 0x0070a0b8
0070A096  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070A09B  68 26 01 00 00            PUSH 0x126
0070A0A0  68 5C FF 7E 00            PUSH 0x7eff5c
0070A0A5  50                        PUSH EAX
0070A0A6  6A CC                     PUSH -0x34
0070A0A8  E8 93 BD F9 FF            CALL 0x006a5e40
0070A0AD  B8 CC FF FF FF            MOV EAX,0xffffffcc
0070A0B2  5F                        POP EDI
0070A0B3  5E                        POP ESI
0070A0B4  8B E5                     MOV ESP,EBP
0070A0B6  5D                        POP EBP
0070A0B7  C3                        RET
LAB_0070a0b8:
0070A0B8  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0070A0BB  85 C0                     TEST EAX,EAX
0070A0BD  75 23                     JNZ 0x0070a0e2
0070A0BF  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070A0C5  68 27 01 00 00            PUSH 0x127
0070A0CA  68 5C FF 7E 00            PUSH 0x7eff5c
0070A0CF  51                        PUSH ECX
0070A0D0  6A CC                     PUSH -0x34
0070A0D2  E8 69 BD F9 FF            CALL 0x006a5e40
0070A0D7  B8 CC FF FF FF            MOV EAX,0xffffffcc
0070A0DC  5F                        POP EDI
0070A0DD  5E                        POP ESI
0070A0DE  8B E5                     MOV ESP,EBP
0070A0E0  5D                        POP EBP
0070A0E1  C3                        RET
LAB_0070a0e2:
0070A0E2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0070A0E5  8D 55 F8                  LEA EDX,[EBP + -0x8]
0070A0E8  8D 45 FC                  LEA EAX,[EBP + -0x4]
0070A0EB  52                        PUSH EDX
0070A0EC  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0070A0EF  50                        PUSH EAX
0070A0F0  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0070A0F3  51                        PUSH ECX
0070A0F4  52                        PUSH EDX
0070A0F5  50                        PUSH EAX
0070A0F6  56                        PUSH ESI
0070A0F7  E8 A4 F7 FF FF            CALL 0x007098a0
0070A0FC  83 C4 18                  ADD ESP,0x18
0070A0FF  85 C0                     TEST EAX,EAX
0070A101  74 45                     JZ 0x0070a148
0070A103  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070A106  8B 50 25                  MOV EDX,dword ptr [EAX + 0x25]
0070A109  4A                        DEC EDX
0070A10A  89 50 25                  MOV dword ptr [EAX + 0x25],EDX
0070A10D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070A110  8B 78 25                  MOV EDI,dword ptr [EAX + 0x25]
0070A113  85 FF                     TEST EDI,EDI
0070A115  89 7D F4                  MOV dword ptr [EBP + -0xc],EDI
0070A118  75 31                     JNZ 0x0070a14b
0070A11A  8A 10                     MOV DL,byte ptr [EAX]
0070A11C  8D 48 29                  LEA ECX,[EAX + 0x29]
0070A11F  51                        PUSH ECX
0070A120  52                        PUSH EDX
0070A121  56                        PUSH ESI
0070A122  E8 E9 F8 FF FF            CALL 0x00709a10
0070A127  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0070A12A  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0070A12D  83 C4 0C                  ADD ESP,0xc
0070A130  50                        PUSH EAX
0070A131  51                        PUSH ECX
0070A132  E8 39 6B FA FF            CALL 0x006b0c70
0070A137  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A13A  8B C7                     MOV EAX,EDI
0070A13C  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A142  5F                        POP EDI
0070A143  5E                        POP ESI
0070A144  8B E5                     MOV ESP,EBP
0070A146  5D                        POP EBP
0070A147  C3                        RET
LAB_0070a148:
0070A148  8B 7D F4                  MOV EDI,dword ptr [EBP + -0xc]
LAB_0070a14b:
0070A14B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0070A14E  8B C7                     MOV EAX,EDI
0070A150  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A156  5F                        POP EDI
0070A157  5E                        POP ESI
0070A158  8B E5                     MOV ESP,EBP
0070A15A  5D                        POP EBP
0070A15B  C3                        RET
LAB_0070a15c:
0070A15C  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
0070A15F  68 9C FF 7E 00            PUSH 0x7eff9c
0070A164  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A169  56                        PUSH ESI
0070A16A  6A 00                     PUSH 0x0
0070A16C  68 33 01 00 00            PUSH 0x133
0070A171  68 5C FF 7E 00            PUSH 0x7eff5c
0070A176  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A17B  E8 50 33 FA FF            CALL 0x006ad4d0
0070A180  83 C4 18                  ADD ESP,0x18
0070A183  85 C0                     TEST EAX,EAX
0070A185  74 01                     JZ 0x0070a188
0070A187  CC                        INT3
LAB_0070a188:
0070A188  68 35 01 00 00            PUSH 0x135
0070A18D  68 5C FF 7E 00            PUSH 0x7eff5c
0070A192  6A 00                     PUSH 0x0
0070A194  56                        PUSH ESI
0070A195  E8 A6 BC F9 FF            CALL 0x006a5e40
0070A19A  8B C6                     MOV EAX,ESI
0070A19C  5F                        POP EDI
0070A19D  5E                        POP ESI
0070A19E  8B E5                     MOV ESP,EBP
0070A1A0  5D                        POP EBP
0070A1A1  C3                        RET
