FUN_006451b0:
006451B0  55                        PUSH EBP
006451B1  8B EC                     MOV EBP,ESP
006451B3  83 EC 50                  SUB ESP,0x50
006451B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006451BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006451BE  56                        PUSH ESI
006451BF  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006451C2  8D 4D B0                  LEA ECX,[EBP + -0x50]
006451C5  6A 00                     PUSH 0x0
006451C7  52                        PUSH EDX
006451C8  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006451CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006451D1  E8 1A 86 0E 00            CALL 0x0072d7f0
006451D6  8B F0                     MOV ESI,EAX
006451D8  83 C4 08                  ADD ESP,0x8
006451DB  85 F6                     TEST ESI,ESI
006451DD  75 3C                     JNZ 0x0064521b
006451DF  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006451E2  83 3E FF                  CMP dword ptr [ESI],-0x1
006451E5  75 22                     JNZ 0x00645209
006451E7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006451EA  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006451ED  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006451F0  8D 4D F4                  LEA ECX,[EBP + -0xc]
006451F3  8B 82 41 02 00 00         MOV EAX,dword ptr [EDX + 0x241]
006451F9  51                        PUSH ECX
006451FA  50                        PUSH EAX
006451FB  C7 45 F8 01 00 00 00      MOV dword ptr [EBP + -0x8],0x1
00645202  E8 B9 8F 06 00            CALL 0x006ae1c0
00645207  89 06                     MOV dword ptr [ESI],EAX
LAB_00645209:
00645209  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0064520C  33 C0                     XOR EAX,EAX
0064520E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00645214  5E                        POP ESI
00645215  8B E5                     MOV ESP,EBP
00645217  5D                        POP EBP
00645218  C2 08 00                  RET 0x8
LAB_0064521b:
0064521B  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0064521E  68 00 26 7D 00            PUSH 0x7d2600
00645223  68 CC 4C 7A 00            PUSH 0x7a4ccc
00645228  56                        PUSH ESI
00645229  6A 00                     PUSH 0x0
0064522B  68 86 04 00 00            PUSH 0x486
00645230  68 C0 25 7D 00            PUSH 0x7d25c0
00645235  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0064523B  E8 90 82 06 00            CALL 0x006ad4d0
00645240  83 C4 18                  ADD ESP,0x18
00645243  85 C0                     TEST EAX,EAX
00645245  74 01                     JZ 0x00645248
00645247  CC                        INT3
LAB_00645248:
00645248  68 87 04 00 00            PUSH 0x487
0064524D  68 C0 25 7D 00            PUSH 0x7d25c0
00645252  6A 00                     PUSH 0x0
00645254  56                        PUSH ESI
00645255  E8 E6 0B 06 00            CALL 0x006a5e40
0064525A  83 C8 FF                  OR EAX,0xffffffff
0064525D  5E                        POP ESI
0064525E  8B E5                     MOV ESP,EBP
00645260  5D                        POP EBP
00645261  C2 08 00                  RET 0x8
