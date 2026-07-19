_mfRLoadRelease:
0070A1B0  55                        PUSH EBP
0070A1B1  8B EC                     MOV EBP,ESP
0070A1B3  83 EC 4C                  SUB ESP,0x4c
0070A1B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0070A1BB  53                        PUSH EBX
0070A1BC  56                        PUSH ESI
0070A1BD  57                        PUSH EDI
0070A1BE  8D 55 B8                  LEA EDX,[EBP + -0x48]
0070A1C1  8D 4D B4                  LEA ECX,[EBP + -0x4c]
0070A1C4  6A 00                     PUSH 0x0
0070A1C6  52                        PUSH EDX
0070A1C7  C7 45 F8 FC FF FF FF      MOV dword ptr [EBP + -0x8],0xfffffffc
0070A1CE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
0070A1D1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0070A1D7  E8 14 36 02 00            CALL 0x0072d7f0
0070A1DC  8B F0                     MOV ESI,EAX
0070A1DE  83 C4 08                  ADD ESP,0x8
0070A1E1  85 F6                     TEST ESI,ESI
0070A1E3  0F 85 C2 00 00 00         JNZ 0x0070a2ab
0070A1E9  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0070A1EC  85 F6                     TEST ESI,ESI
0070A1EE  75 23                     JNZ 0x0070a213
0070A1F0  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0070A1F5  68 49 01 00 00            PUSH 0x149
0070A1FA  68 5C FF 7E 00            PUSH 0x7eff5c
0070A1FF  50                        PUSH EAX
0070A200  6A CC                     PUSH -0x34
0070A202  E8 39 BC F9 FF            CALL 0x006a5e40
0070A207  B8 CC FF FF FF            MOV EAX,0xffffffcc
0070A20C  5F                        POP EDI
0070A20D  5E                        POP ESI
0070A20E  5B                        POP EBX
0070A20F  8B E5                     MOV ESP,EBP
0070A211  5D                        POP EBP
0070A212  C3                        RET
LAB_0070a213:
0070A213  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
0070A216  85 C0                     TEST EAX,EAX
0070A218  75 24                     JNZ 0x0070a23e
0070A21A  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
0070A220  68 4A 01 00 00            PUSH 0x14a
0070A225  68 5C FF 7E 00            PUSH 0x7eff5c
0070A22A  51                        PUSH ECX
0070A22B  6A CC                     PUSH -0x34
0070A22D  E8 0E BC F9 FF            CALL 0x006a5e40
0070A232  B8 CC FF FF FF            MOV EAX,0xffffffcc
0070A237  5F                        POP EDI
0070A238  5E                        POP ESI
0070A239  5B                        POP EBX
0070A23A  8B E5                     MOV ESP,EBP
0070A23C  5D                        POP EBP
0070A23D  C3                        RET
LAB_0070a23e:
0070A23E  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0070A241  8D 55 FC                  LEA EDX,[EBP + -0x4]
0070A244  52                        PUSH EDX
0070A245  8B 03                     MOV EAX,dword ptr [EBX]
0070A247  50                        PUSH EAX
0070A248  56                        PUSH ESI
0070A249  E8 42 F7 FF FF            CALL 0x00709990
0070A24E  83 C4 0C                  ADD ESP,0xc
0070A251  85 C0                     TEST EAX,EAX
0070A253  74 41                     JZ 0x0070a296
0070A255  8B 50 25                  MOV EDX,dword ptr [EAX + 0x25]
0070A258  4A                        DEC EDX
0070A259  8B FA                     MOV EDI,EDX
0070A25B  89 50 25                  MOV dword ptr [EAX + 0x25],EDX
0070A25E  85 FF                     TEST EDI,EDI
0070A260  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
0070A263  75 34                     JNZ 0x0070a299
0070A265  8A 10                     MOV DL,byte ptr [EAX]
0070A267  8D 48 29                  LEA ECX,[EAX + 0x29]
0070A26A  51                        PUSH ECX
0070A26B  52                        PUSH EDX
0070A26C  56                        PUSH ESI
0070A26D  E8 9E F7 FF FF            CALL 0x00709a10
0070A272  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0070A275  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
0070A278  83 C4 0C                  ADD ESP,0xc
0070A27B  50                        PUSH EAX
0070A27C  51                        PUSH ECX
0070A27D  E8 EE 69 FA FF            CALL 0x006b0c70
0070A282  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0070A285  89 3B                     MOV dword ptr [EBX],EDI
0070A287  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A28D  8B C7                     MOV EAX,EDI
0070A28F  5F                        POP EDI
0070A290  5E                        POP ESI
0070A291  5B                        POP EBX
0070A292  8B E5                     MOV ESP,EBP
0070A294  5D                        POP EBP
0070A295  C3                        RET
LAB_0070a296:
0070A296  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
LAB_0070a299:
0070A299  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
0070A29C  8B C7                     MOV EAX,EDI
0070A29E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0070A2A4  5F                        POP EDI
0070A2A5  5E                        POP ESI
0070A2A6  5B                        POP EBX
0070A2A7  8B E5                     MOV ESP,EBP
0070A2A9  5D                        POP EBP
0070A2AA  C3                        RET
LAB_0070a2ab:
0070A2AB  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
0070A2AE  68 AC FF 7E 00            PUSH 0x7effac
0070A2B3  68 CC 4C 7A 00            PUSH 0x7a4ccc
0070A2B8  56                        PUSH ESI
0070A2B9  6A 00                     PUSH 0x0
0070A2BB  68 57 01 00 00            PUSH 0x157
0070A2C0  68 5C FF 7E 00            PUSH 0x7eff5c
0070A2C5  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0070A2CA  E8 01 32 FA FF            CALL 0x006ad4d0
0070A2CF  83 C4 18                  ADD ESP,0x18
0070A2D2  85 C0                     TEST EAX,EAX
0070A2D4  74 01                     JZ 0x0070a2d7
0070A2D6  CC                        INT3
LAB_0070a2d7:
0070A2D7  68 59 01 00 00            PUSH 0x159
0070A2DC  68 5C FF 7E 00            PUSH 0x7eff5c
0070A2E1  6A 00                     PUSH 0x0
0070A2E3  56                        PUSH ESI
0070A2E4  E8 57 BB F9 FF            CALL 0x006a5e40
0070A2E9  8B C6                     MOV EAX,ESI
0070A2EB  5F                        POP EDI
0070A2EC  5E                        POP ESI
0070A2ED  5B                        POP EBX
0070A2EE  8B E5                     MOV ESP,EBP
0070A2F0  5D                        POP EBP
0070A2F1  C3                        RET
