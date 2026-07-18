FUN_0067cf30:
0067CF30  55                        PUSH EBP
0067CF31  8B EC                     MOV EBP,ESP
0067CF33  83 EC 48                  SUB ESP,0x48
0067CF36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067CF3B  56                        PUSH ESI
0067CF3C  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067CF3F  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067CF42  6A 00                     PUSH 0x0
0067CF44  52                        PUSH EDX
0067CF45  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067CF4C  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067CF4F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067CF55  E8 96 08 0B 00            CALL 0x0072d7f0
0067CF5A  8B F0                     MOV ESI,EAX
0067CF5C  83 C4 08                  ADD ESP,0x8
0067CF5F  85 F6                     TEST ESI,ESI
0067CF61  0F 85 B6 00 00 00         JNZ 0x0067d01d
0067CF67  68 2B 01 00 00            PUSH 0x12b
0067CF6C  E8 9F DC 02 00            CALL 0x006aac10
0067CF71  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0067CF74  C7 00 8E 03 00 00         MOV dword ptr [EAX],0x38e
0067CF7A  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067CF7D  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067CF80  6A 3F                     PUSH 0x3f
0067CF82  56                        PUSH ESI
0067CF83  C7 40 14 2B 01 00 00      MOV dword ptr [EAX + 0x14],0x12b
0067CF8A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067CF8D  C6 41 18 02               MOV byte ptr [ECX + 0x18],0x2
0067CF91  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067CF94  83 C2 1B                  ADD EDX,0x1b
0067CF97  52                        PUSH EDX
0067CF98  E8 A3 13 0B 00            CALL 0x0072e340
0067CF9D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0067CFA0  83 C4 0C                  ADD ESP,0xc
0067CFA3  85 C0                     TEST EAX,EAX
0067CFA5  6A 0B                     PUSH 0xb
0067CFA7  74 0A                     JZ 0x0067cfb3
0067CFA9  50                        PUSH EAX
0067CFAA  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067CFAD  83 C0 5B                  ADD EAX,0x5b
0067CFB0  50                        PUSH EAX
0067CFB1  EB 08                     JMP 0x0067cfbb
LAB_0067cfb3:
0067CFB3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067CFB6  56                        PUSH ESI
0067CFB7  83 C1 5B                  ADD ECX,0x5b
0067CFBA  51                        PUSH ECX
LAB_0067cfbb:
0067CFBB  E8 80 13 0B 00            CALL 0x0072e340
0067CFC0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067CFC3  66 8B 45 0C               MOV AX,word ptr [EBP + 0xc]
0067CFC7  83 C4 0C                  ADD ESP,0xc
0067CFCA  66 89 42 19               MOV word ptr [EDX + 0x19],AX
0067CFCE  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067CFD1  6A 05                     PUSH 0x5
0067CFD3  6A 10                     PUSH 0x10
0067CFD5  6A 05                     PUSH 0x5
0067CFD7  6A 00                     PUSH 0x0
0067CFD9  C7 41 6D FF 00 00 00      MOV dword ptr [ECX + 0x6d],0xff
0067CFE0  E8 AB 12 03 00            CALL 0x006ae290
0067CFE5  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067CFE8  56                        PUSH ESI
0067CFE9  89 82 C2 00 00 00         MOV dword ptr [EDX + 0xc2],EAX
0067CFEF  E8 ED 45 D8 FF            CALL 0x004015e1
0067CFF4  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0067CFF7  83 C4 04                  ADD ESP,0x4
0067CFFA  89 81 06 01 00 00         MOV dword ptr [ECX + 0x106],EAX
0067D000  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0067D003  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0067D006  89 82 0A 01 00 00         MOV dword ptr [EDX + 0x10a],EAX
0067D00C  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067D00F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067D012  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067D018  5E                        POP ESI
0067D019  8B E5                     MOV ESP,EBP
0067D01B  5D                        POP EBP
0067D01C  C3                        RET
LAB_0067d01d:
0067D01D  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067D020  8D 45 FC                  LEA EAX,[EBP + -0x4]
0067D023  50                        PUSH EAX
0067D024  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067D02A  E8 D6 5D D8 FF            CALL 0x00402e05
0067D02F  83 C4 04                  ADD ESP,0x4
0067D032  6A 28                     PUSH 0x28
0067D034  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067D039  6A 00                     PUSH 0x0
0067D03B  56                        PUSH ESI
0067D03C  E8 FF 8D 02 00            CALL 0x006a5e40
0067D041  33 C0                     XOR EAX,EAX
0067D043  5E                        POP ESI
0067D044  8B E5                     MOV ESP,EBP
0067D046  5D                        POP EBP
0067D047  C3                        RET
