FUN_00755180:
00755180  55                        PUSH EBP
00755181  8B EC                     MOV EBP,ESP
00755183  83 EC 48                  SUB ESP,0x48
00755186  56                        PUSH ESI
00755187  57                        PUSH EDI
00755188  6A 54                     PUSH 0x54
0075518A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00755191  E8 3A B3 F5 FF            CALL 0x006b04d0
00755196  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00755199  85 C0                     TEST EAX,EAX
0075519B  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
0075519E  75 0D                     JNZ 0x007551ad
007551A0  B8 FE FF FF FF            MOV EAX,0xfffffffe
007551A5  5F                        POP EDI
007551A6  5E                        POP ESI
007551A7  8B E5                     MOV ESP,EBP
007551A9  5D                        POP EBP
007551AA  C2 14 00                  RET 0x14
LAB_007551ad:
007551AD  8B 15 F8 8D 85 00         MOV EDX,dword ptr [0x00858df8]
007551B3  8D 4D BC                  LEA ECX,[EBP + -0x44]
007551B6  8D 45 B8                  LEA EAX,[EBP + -0x48]
007551B9  6A 00                     PUSH 0x0
007551BB  51                        PUSH ECX
007551BC  89 55 B8                  MOV dword ptr [EBP + -0x48],EDX
007551BF  A3 F8 8D 85 00            MOV [0x00858df8],EAX
007551C4  E8 27 86 FD FF            CALL 0x0072d7f0
007551C9  8B F0                     MOV ESI,EAX
007551CB  83 C4 08                  ADD ESP,0x8
007551CE  85 F6                     TEST ESI,ESI
007551D0  0F 85 D8 00 00 00         JNZ 0x007552ae
007551D6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
007551D9  83 F8 01                  CMP EAX,0x1
007551DC  75 17                     JNZ 0x007551f5
007551DE  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007551E1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007551E4  6A 00                     PUSH 0x0
007551E6  52                        PUSH EDX
007551E7  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
007551EA  8D 77 08                  LEA ESI,[EDI + 0x8]
007551ED  50                        PUSH EAX
007551EE  E8 8D F1 F7 FF            CALL 0x006d4380
007551F3  EB 33                     JMP 0x00755228
LAB_007551f5:
007551F5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
007551F8  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007551FB  83 F8 02                  CMP EAX,0x2
007551FE  51                        PUSH ECX
007551FF  8D 77 08                  LEA ESI,[EDI + 0x8]
00755202  68 00 00 10 00            PUSH 0x100000
00755207  75 13                     JNZ 0x0075521c
00755209  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075520C  8B 06                     MOV EAX,dword ptr [ESI]
0075520E  68 00 00 10 00            PUSH 0x100000
00755213  52                        PUSH EDX
00755214  50                        PUSH EAX
00755215  E8 06 F0 F7 FF            CALL 0x006d4220
0075521A  EB 0C                     JMP 0x00755228
LAB_0075521c:
0075521C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075521F  8B 06                     MOV EAX,dword ptr [ESI]
00755221  52                        PUSH EDX
00755222  50                        PUSH EAX
00755223  E8 E8 F2 F7 FF            CALL 0x006d4510
LAB_00755228:
00755228  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0075522B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00755231  8B 06                     MOV EAX,dword ptr [ESI]
00755233  83 78 38 20               CMP dword ptr [EAX + 0x38],0x20
00755237  73 1B                     JNC 0x00755254
00755239  6A 00                     PUSH 0x0
0075523B  50                        PUSH EAX
0075523C  E8 5F F4 F7 FF            CALL 0x006d46a0
00755241  56                        PUSH ESI
00755242  E8 19 5E F5 FF            CALL 0x006ab060
00755247  B8 FB FF FF FF            MOV EAX,0xfffffffb
0075524C  5F                        POP EDI
0075524D  5E                        POP ESI
0075524E  8B E5                     MOV ESP,EBP
00755250  5D                        POP EBP
00755251  C2 14 00                  RET 0x14
LAB_00755254:
00755254  68 80 00 00 00            PUSH 0x80
00755259  E8 72 B2 F5 FF            CALL 0x006b04d0
0075525E  8B 16                     MOV EDX,dword ptr [ESI]
00755260  89 42 4C                  MOV dword ptr [EDX + 0x4c],EAX
00755263  8B 06                     MOV EAX,dword ptr [ESI]
00755265  8B 48 4C                  MOV ECX,dword ptr [EAX + 0x4c]
00755268  89 48 50                  MOV dword ptr [EAX + 0x50],ECX
0075526B  8B 06                     MOV EAX,dword ptr [ESI]
0075526D  8B 48 50                  MOV ECX,dword ptr [EAX + 0x50]
00755270  85 C9                     TEST ECX,ECX
00755272  75 1B                     JNZ 0x0075528f
00755274  6A 00                     PUSH 0x0
00755276  50                        PUSH EAX
00755277  E8 24 F4 F7 FF            CALL 0x006d46a0
0075527C  56                        PUSH ESI
0075527D  E8 DE 5D F5 FF            CALL 0x006ab060
00755282  B8 FE FF FF FF            MOV EAX,0xfffffffe
00755287  5F                        POP EDI
00755288  5E                        POP ESI
00755289  8B E5                     MOV ESP,EBP
0075528B  5D                        POP EBP
0075528C  C2 14 00                  RET 0x14
LAB_0075528f:
0075528F  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00755292  8B 40 4C                  MOV EAX,dword ptr [EAX + 0x4c]
00755295  52                        PUSH EDX
00755296  50                        PUSH EAX
00755297  E8 24 FE FF FF            CALL 0x007550c0
0075529C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0075529F  C7 47 14 12 00 00 00      MOV dword ptr [EDI + 0x14],0x12
007552A6  5F                        POP EDI
007552A7  5E                        POP ESI
007552A8  8B E5                     MOV ESP,EBP
007552AA  5D                        POP EBP
007552AB  C2 14 00                  RET 0x14
LAB_007552ae:
007552AE  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007552B1  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
007552B4  83 C2 08                  ADD EDX,0x8
007552B7  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007552BD  52                        PUSH EDX
007552BE  E8 9D 5D F5 FF            CALL 0x006ab060
007552C3  8B C6                     MOV EAX,ESI
007552C5  5F                        POP EDI
007552C6  5E                        POP ESI
007552C7  8B E5                     MOV ESP,EBP
007552C9  5D                        POP EBP
007552CA  C2 14 00                  RET 0x14
