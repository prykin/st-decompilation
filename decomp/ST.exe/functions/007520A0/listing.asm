FUN_007520a0:
007520A0  55                        PUSH EBP
007520A1  8B EC                     MOV EBP,ESP
007520A3  83 EC 54                  SUB ESP,0x54
007520A6  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007520A9  56                        PUSH ESI
007520AA  57                        PUSH EDI
007520AB  6A 00                     PUSH 0x0
007520AD  50                        PUSH EAX
007520AE  6A 00                     PUSH 0x0
007520B0  C7 45 F4 00 00 00 00      MOV dword ptr [EBP + -0xc],0x0
007520B7  E8 C4 22 F8 FF            CALL 0x006d4380
007520BC  8B F8                     MOV EDI,EAX
007520BE  85 FF                     TEST EDI,EDI
007520C0  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
007520C3  75 08                     JNZ 0x007520cd
007520C5  5F                        POP EDI
007520C6  5E                        POP ESI
007520C7  8B E5                     MOV ESP,EBP
007520C9  5D                        POP EBP
007520CA  C2 14 00                  RET 0x14
LAB_007520cd:
007520CD  8B 47 34                  MOV EAX,dword ptr [EDI + 0x34]
007520D0  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
007520D7  66 81 38 42 4D            CMP word ptr [EAX],0x4d42
007520DC  0F 85 88 00 00 00         JNZ 0x0075216a
007520E2  8B 48 0E                  MOV ECX,dword ptr [EAX + 0xe]
007520E5  83 C0 0E                  ADD EAX,0xe
007520E8  83 F9 28                  CMP ECX,0x28
007520EB  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
007520EE  75 7A                     JNZ 0x0075216a
007520F0  50                        PUSH EAX
007520F1  E8 EA 2E F6 FF            CALL 0x006b4fe0
007520F6  3D 00 01 00 00            CMP EAX,0x100
007520FB  7F 6D                     JG 0x0075216a
007520FD  8B 0D F8 8D 85 00         MOV ECX,dword ptr [0x00858df8]
00752103  8D 45 B0                  LEA EAX,[EBP + -0x50]
00752106  8D 55 AC                  LEA EDX,[EBP + -0x54]
00752109  6A 00                     PUSH 0x0
0075210B  50                        PUSH EAX
0075210C  89 4D AC                  MOV dword ptr [EBP + -0x54],ECX
0075210F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00752115  E8 D6 B6 FD FF            CALL 0x0072d7f0
0075211A  83 C4 08                  ADD ESP,0x8
0075211D  85 C0                     TEST EAX,EAX
0075211F  75 36                     JNZ 0x00752157
00752121  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
00752124  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00752127  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0075212A  51                        PUSH ECX
0075212B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0075212E  52                        PUSH EDX
0075212F  8B 55 F0                  MOV EDX,dword ptr [EBP + -0x10]
00752132  50                        PUSH EAX
00752133  51                        PUSH ECX
00752134  6A 00                     PUSH 0x0
00752136  52                        PUSH EDX
00752137  6A 00                     PUSH 0x0
00752139  6A 00                     PUSH 0x0
0075213B  6A 00                     PUSH 0x0
0075213D  6A 00                     PUSH 0x0
0075213F  E8 AC 34 F6 FF            CALL 0x006b55f0
00752144  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00752147  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0075214A  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0075214D  8B 45 AC                  MOV EAX,dword ptr [EBP + -0x54]
00752150  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00752155  EB 1B                     JMP 0x00752172
LAB_00752157:
00752157  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
0075215A  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
0075215D  8B F0                     MOV ESI,EAX
0075215F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00752165  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00752168  EB 08                     JMP 0x00752172
LAB_0075216a:
0075216A  BE FB FF FF FF            MOV ESI,0xfffffffb
0075216F  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_00752172:
00752172  6A 00                     PUSH 0x0
00752174  57                        PUSH EDI
00752175  E8 26 25 F8 FF            CALL 0x006d46a0
0075217A  85 F6                     TEST ESI,ESI
0075217C  74 1E                     JZ 0x0075219c
0075217E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
00752184  6A 32                     PUSH 0x32
00752186  68 90 2B 7F 00            PUSH 0x7f2b90
0075218B  52                        PUSH EDX
0075218C  56                        PUSH ESI
0075218D  E8 AE 3C F5 FF            CALL 0x006a5e40
00752192  33 C0                     XOR EAX,EAX
00752194  5F                        POP EDI
00752195  5E                        POP ESI
00752196  8B E5                     MOV ESP,EBP
00752198  5D                        POP EBP
00752199  C2 14 00                  RET 0x14
LAB_0075219c:
0075219C  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0075219F  5F                        POP EDI
007521A0  5E                        POP ESI
007521A1  8B E5                     MOV ESP,EBP
007521A3  5D                        POP EBP
007521A4  C2 14 00                  RET 0x14
