STAllPlayersC::RegisterMine:
00449FD0  55                        PUSH EBP
00449FD1  8B EC                     MOV EBP,ESP
00449FD3  83 EC 48                  SUB ESP,0x48
00449FD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00449FDB  56                        PUSH ESI
00449FDC  8D 55 BC                  LEA EDX,[EBP + -0x44]
00449FDF  8D 4D B8                  LEA ECX,[EBP + -0x48]
00449FE2  6A 00                     PUSH 0x0
00449FE4  52                        PUSH EDX
00449FE5  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00449FE8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00449FEE  E8 FD 37 2E 00            CALL 0x0072d7f0
00449FF3  8B F0                     MOV ESI,EAX
00449FF5  83 C4 08                  ADD ESP,0x8
00449FF8  85 F6                     TEST ESI,ESI
00449FFA  0F 85 AA 00 00 00         JNZ 0x0044a0aa
0044A000  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0044A003  85 C0                     TEST EAX,EAX
0044A005  75 1A                     JNZ 0x0044a021
0044A007  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0044A00C  68 05 2F 00 00            PUSH 0x2f05
0044A011  68 04 60 7A 00            PUSH 0x7a6004
0044A016  50                        PUSH EAX
0044A017  68 04 00 FE AF            PUSH 0xaffe0004
0044A01C  E8 1F BE 25 00            CALL 0x006a5e40
LAB_0044a021:
0044A021  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0044A024  66 81 FE FF FF            CMP SI,0xffff
0044A029  74 40                     JZ 0x0044a06b
0044A02B  8D 4D FC                  LEA ECX,[EBP + -0x4]
0044A02E  8B D6                     MOV EDX,ESI
0044A030  51                        PUSH ECX
0044A031  8B 0D 58 A1 7F 00         MOV ECX,dword ptr [0x007fa158]
0044A037  81 E2 FF FF 00 00         AND EDX,0xffff
0044A03D  E8 2E 2C 26 00            CALL 0x006acc70
0044A042  83 F8 FC                  CMP EAX,-0x4
0044A045  74 30                     JZ 0x0044a077
0044A047  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0044A04A  85 C0                     TEST EAX,EAX
0044A04C  74 29                     JZ 0x0044a077
0044A04E  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0044A054  68 07 2F 00 00            PUSH 0x2f07
0044A059  68 04 60 7A 00            PUSH 0x7a6004
0044A05E  52                        PUSH EDX
0044A05F  68 06 00 FE AF            PUSH 0xaffe0006
0044A064  E8 D7 BD 25 00            CALL 0x006a5e40
0044A069  EB 0C                     JMP 0x0044a077
LAB_0044a06b:
0044A06B  A1 58 A1 7F 00            MOV EAX,[0x007fa158]
0044A070  66 8B 70 0C               MOV SI,word ptr [EAX + 0xc]
0044A074  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
LAB_0044a077:
0044A077  A1 58 A1 7F 00            MOV EAX,[0x007fa158]
0044A07C  8B D6                     MOV EDX,ESI
0044A07E  8D 4D 0C                  LEA ECX,[EBP + 0xc]
0044A081  81 E2 FF FF 00 00         AND EDX,0xffff
0044A087  51                        PUSH ECX
0044A088  52                        PUSH EDX
0044A089  50                        PUSH EAX
0044A08A  E8 B1 40 26 00            CALL 0x006ae140
0044A08F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0044A092  56                        PUSH ESI
0044A093  E8 50 73 FB FF            CALL 0x004013e8
0044A098  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0044A09B  33 C0                     XOR EAX,EAX
0044A09D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0044A0A3  5E                        POP ESI
0044A0A4  8B E5                     MOV ESP,EBP
0044A0A6  5D                        POP EBP
0044A0A7  C2 08 00                  RET 0x8
LAB_0044a0aa:
0044A0AA  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0044A0AD  68 58 87 7A 00            PUSH 0x7a8758
0044A0B2  68 CC 4C 7A 00            PUSH 0x7a4ccc
0044A0B7  56                        PUSH ESI
0044A0B8  6A 00                     PUSH 0x0
0044A0BA  68 0D 2F 00 00            PUSH 0x2f0d
0044A0BF  68 04 60 7A 00            PUSH 0x7a6004
0044A0C4  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0044A0CA  E8 01 34 26 00            CALL 0x006ad4d0
0044A0CF  83 C4 18                  ADD ESP,0x18
0044A0D2  85 C0                     TEST EAX,EAX
0044A0D4  74 01                     JZ 0x0044a0d7
0044A0D6  CC                        INT3
LAB_0044a0d7:
0044A0D7  68 0E 2F 00 00            PUSH 0x2f0e
0044A0DC  68 04 60 7A 00            PUSH 0x7a6004
0044A0E1  6A 00                     PUSH 0x0
0044A0E3  56                        PUSH ESI
0044A0E4  E8 57 BD 25 00            CALL 0x006a5e40
0044A0E9  83 C8 FF                  OR EAX,0xffffffff
0044A0EC  5E                        POP ESI
0044A0ED  8B E5                     MOV ESP,EBP
0044A0EF  5D                        POP EBP
0044A0F0  C2 08 00                  RET 0x8
