FUN_00648c10:
00648C10  55                        PUSH EBP
00648C11  8B EC                     MOV EBP,ESP
00648C13  83 EC 4C                  SUB ESP,0x4c
00648C16  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00648C1B  56                        PUSH ESI
00648C1C  57                        PUSH EDI
00648C1D  8D 55 B8                  LEA EDX,[EBP + -0x48]
00648C20  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00648C23  6A 00                     PUSH 0x0
00648C25  52                        PUSH EDX
00648C26  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00648C2D  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00648C34  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00648C37  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648C3D  E8 AE 4B 0E 00            CALL 0x0072d7f0
00648C42  8B F0                     MOV ESI,EAX
00648C44  83 C4 08                  ADD ESP,0x8
00648C47  85 F6                     TEST ESI,ESI
00648C49  0F 85 C8 00 00 00         JNZ 0x00648d17
00648C4F  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00648C54  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00648C57  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00648C5A  85 C0                     TEST EAX,EAX
00648C5C  74 16                     JZ 0x00648c74
00648C5E  85 FF                     TEST EDI,EDI
00648C60  74 12                     JZ 0x00648c74
00648C62  83 FE 08                  CMP ESI,0x8
00648C65  73 0D                     JNC 0x00648c74
00648C67  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
00648C6A  80 BC C0 E9 87 80 00 08   CMP byte ptr [EAX + EAX*0x8 + 0x8087e9],0x8
00648C72  72 14                     JC 0x00648c88
LAB_00648c74:
00648C74  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00648C79  6A 49                     PUSH 0x49
00648C7B  68 80 28 7D 00            PUSH 0x7d2880
00648C80  50                        PUSH EAX
00648C81  6A CC                     PUSH -0x34
00648C83  E8 B8 D1 05 00            CALL 0x006a5e40
LAB_00648c88:
00648C88  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00648C8E  56                        PUSH ESI
00648C8F  E8 31 91 DB FF            CALL 0x00401dc5
00648C94  85 C0                     TEST EAX,EAX
00648C96  74 09                     JZ 0x00648ca1
00648C98  56                        PUSH ESI
00648C99  E8 34 89 DB FF            CALL 0x004015d2
00648C9E  83 C4 04                  ADD ESP,0x4
LAB_00648ca1:
00648CA1  89 7D FC                  MOV dword ptr [EBP + -0x4],EDI
00648CA4  8D 04 F6                  LEA EAX,[ESI + ESI*0x8]
00648CA7  89 77 04                  MOV dword ptr [EDI + 0x4],ESI
00648CAA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00648CAD  66 8B 8C C0 EB 87 80 00   MOV CX,word ptr [EAX + EAX*0x8 + 0x8087eb]
00648CB5  6A 00                     PUSH 0x0
00648CB7  66 89 4A 67               MOV word ptr [EDX + 0x67],CX
00648CBB  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00648CBE  66 8B 8C C0 EF 87 80 00   MOV CX,word ptr [EAX + EAX*0x8 + 0x8087ef]
00648CC6  83 C6 29                  ADD ESI,0x29
00648CC9  66 89 4A 69               MOV word ptr [EDX + 0x69],CX
00648CCD  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00648CD0  66 8B 84 C0 F3 87 80 00   MOV AX,word ptr [EAX + EAX*0x8 + 0x8087f3]
00648CD8  66 89 41 6B               MOV word ptr [ECX + 0x6b],AX
00648CDC  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00648CDF  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
00648CE5  52                        PUSH EDX
00648CE6  6A 00                     PUSH 0x0
00648CE8  6A 00                     PUSH 0x0
00648CEA  56                        PUSH ESI
00648CEB  68 02 04 00 00            PUSH 0x402
00648CF0  E8 0B D5 09 00            CALL 0x006e6200
00648CF5  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00648CF8  85 C0                     TEST EAX,EAX
00648CFA  74 0C                     JZ 0x00648d08
00648CFC  8D 45 FC                  LEA EAX,[EBP + -0x4]
00648CFF  50                        PUSH EAX
00648D00  E8 00 A1 DB FF            CALL 0x00402e05
00648D05  83 C4 04                  ADD ESP,0x4
LAB_00648d08:
00648D08  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00648D0B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00648D11  5F                        POP EDI
00648D12  5E                        POP ESI
00648D13  8B E5                     MOV ESP,EBP
00648D15  5D                        POP EBP
00648D16  C3                        RET
LAB_00648d17:
00648D17  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00648D1A  68 A4 28 7D 00            PUSH 0x7d28a4
00648D1F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00648D24  56                        PUSH ESI
00648D25  6A 00                     PUSH 0x0
00648D27  6A 5F                     PUSH 0x5f
00648D29  68 80 28 7D 00            PUSH 0x7d2880
00648D2E  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00648D34  E8 97 47 06 00            CALL 0x006ad4d0
00648D39  83 C4 18                  ADD ESP,0x18
00648D3C  85 C0                     TEST EAX,EAX
00648D3E  74 01                     JZ 0x00648d41
00648D40  CC                        INT3
LAB_00648d41:
00648D41  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00648D44  85 C0                     TEST EAX,EAX
00648D46  74 0C                     JZ 0x00648d54
00648D48  8D 45 FC                  LEA EAX,[EBP + -0x4]
00648D4B  50                        PUSH EAX
00648D4C  E8 B4 A0 DB FF            CALL 0x00402e05
00648D51  83 C4 04                  ADD ESP,0x4
LAB_00648d54:
00648D54  6A 61                     PUSH 0x61
00648D56  68 80 28 7D 00            PUSH 0x7d2880
00648D5B  6A 00                     PUSH 0x0
00648D5D  56                        PUSH ESI
00648D5E  E8 DD D0 05 00            CALL 0x006a5e40
00648D63  5F                        POP EDI
00648D64  5E                        POP ESI
00648D65  8B E5                     MOV ESP,EBP
00648D67  5D                        POP EBP
00648D68  C3                        RET
