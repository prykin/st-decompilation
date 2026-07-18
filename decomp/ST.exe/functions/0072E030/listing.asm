x64toa:
0072E030  55                        PUSH EBP
0072E031  8B EC                     MOV EBP,ESP
0072E033  83 EC 10                  SUB ESP,0x10
0072E036  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0072E039  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0072E03C  83 7D 18 00               CMP dword ptr [EBP + 0x18],0x0
0072E040  74 22                     JZ 0x0072e064
0072E042  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E045  C6 01 2D                  MOV byte ptr [ECX],0x2d
0072E048  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E04B  83 C2 01                  ADD EDX,0x1
0072E04E  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072E051  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E054  F7 D8                     NEG EAX
0072E056  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0072E059  83 D1 00                  ADC ECX,0x0
0072E05C  F7 D9                     NEG ECX
0072E05E  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072E061  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_0072e064:
0072E064  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E067  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
LAB_0072e06a:
0072E06A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0072E06D  33 C9                     XOR ECX,ECX
0072E06F  51                        PUSH ECX
0072E070  50                        PUSH EAX
0072E071  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0072E074  52                        PUSH EDX
0072E075  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072E078  50                        PUSH EAX
0072E079  E8 12 72 00 00            CALL 0x00735290
0072E07E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0072E081  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0072E084  33 D2                     XOR EDX,EDX
0072E086  52                        PUSH EDX
0072E087  51                        PUSH ECX
0072E088  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0072E08B  50                        PUSH EAX
0072E08C  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0072E08F  51                        PUSH ECX
0072E090  E8 8B 71 00 00            CALL 0x00735220
0072E095  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
0072E098  89 55 0C                  MOV dword ptr [EBP + 0xc],EDX
0072E09B  83 7D F4 09               CMP dword ptr [EBP + -0xc],0x9
0072E09F  76 16                     JBE 0x0072e0b7
0072E0A1  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072E0A4  83 C2 57                  ADD EDX,0x57
0072E0A7  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E0AA  88 10                     MOV byte ptr [EAX],DL
0072E0AC  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E0AF  83 C1 01                  ADD ECX,0x1
0072E0B2  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0072E0B5  EB 14                     JMP 0x0072e0cb
LAB_0072e0b7:
0072E0B7  8B 55 F4                  MOV EDX,dword ptr [EBP + -0xc]
0072E0BA  83 C2 30                  ADD EDX,0x30
0072E0BD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E0C0  88 10                     MOV byte ptr [EAX],DL
0072E0C2  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E0C5  83 C1 01                  ADD ECX,0x1
0072E0C8  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_0072e0cb:
0072E0CB  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0072E0CF  77 99                     JA 0x0072e06a
0072E0D1  72 06                     JC 0x0072e0d9
0072E0D3  83 7D 08 00               CMP dword ptr [EBP + 0x8],0x0
0072E0D7  77 91                     JA 0x0072e06a
LAB_0072e0d9:
0072E0D9  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E0DC  C6 02 00                  MOV byte ptr [EDX],0x0
0072E0DF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E0E2  83 E8 01                  SUB EAX,0x1
0072E0E5  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0072e0e8:
0072E0E8  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0072E0EB  8A 11                     MOV DL,byte ptr [ECX]
0072E0ED  88 55 F0                  MOV byte ptr [EBP + -0x10],DL
0072E0F0  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0072E0F3  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072E0F6  8A 11                     MOV DL,byte ptr [ECX]
0072E0F8  88 10                     MOV byte ptr [EAX],DL
0072E0FA  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072E0FD  8A 4D F0                  MOV CL,byte ptr [EBP + -0x10]
0072E100  88 08                     MOV byte ptr [EAX],CL
0072E102  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0072E105  83 EA 01                  SUB EDX,0x1
0072E108  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0072E10B  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0072E10E  83 C0 01                  ADD EAX,0x1
0072E111  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0072E114  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0072E117  3B 4D FC                  CMP ECX,dword ptr [EBP + -0x4]
0072E11A  72 CC                     JC 0x0072e0e8
0072E11C  8B E5                     MOV ESP,EBP
0072E11E  5D                        POP EBP
0072E11F  C2 14 00                  RET 0x14
