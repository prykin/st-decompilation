FUN_006f0700:
006F0700  55                        PUSH EBP
006F0701  8B EC                     MOV EBP,ESP
006F0703  83 EC 48                  SUB ESP,0x48
006F0706  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006F070B  56                        PUSH ESI
006F070C  57                        PUSH EDI
006F070D  8D 55 BC                  LEA EDX,[EBP + -0x44]
006F0710  8D 4D B8                  LEA ECX,[EBP + -0x48]
006F0713  6A 00                     PUSH 0x0
006F0715  52                        PUSH EDX
006F0716  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006F071D  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
006F0720  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0726  E8 C5 D0 03 00            CALL 0x0072d7f0
006F072B  8B F0                     MOV ESI,EAX
006F072D  83 C4 08                  ADD ESP,0x8
006F0730  85 F6                     TEST ESI,ESI
006F0732  75 57                     JNZ 0x006f078b
006F0734  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006F0737  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006F073A  85 F6                     TEST ESI,ESI
006F073C  7E 04                     JLE 0x006f0742
006F073E  85 FF                     TEST EDI,EDI
006F0740  7F 17                     JG 0x006f0759
LAB_006f0742:
006F0742  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006F0747  68 23 02 00 00            PUSH 0x223
006F074C  68 88 EF 7E 00            PUSH 0x7eef88
006F0751  50                        PUSH EAX
006F0752  6A CC                     PUSH -0x34
006F0754  E8 E7 56 FB FF            CALL 0x006a5e40
LAB_006f0759:
006F0759  8B C6                     MOV EAX,ESI
006F075B  0F AF C7                  IMUL EAX,EDI
006F075E  8D 0C C0                  LEA ECX,[EAX + EAX*0x8]
006F0761  8D 14 8D 0E 00 00 00      LEA EDX,[ECX*0x4 + 0xe]
006F0768  52                        PUSH EDX
006F0769  E8 A2 A4 FB FF            CALL 0x006aac10
006F076E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006F0771  89 30                     MOV dword ptr [EAX],ESI
006F0773  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F0776  89 78 04                  MOV dword ptr [EAX + 0x4],EDI
006F0779  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
006F077C  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006F077F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006F0785  5F                        POP EDI
006F0786  5E                        POP ESI
006F0787  8B E5                     MOV ESP,EBP
006F0789  5D                        POP EBP
006F078A  C3                        RET
LAB_006f078b:
006F078B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
006F078E  68 54 F0 7E 00            PUSH 0x7ef054
006F0793  68 CC 4C 7A 00            PUSH 0x7a4ccc
006F0798  56                        PUSH ESI
006F0799  6A 00                     PUSH 0x0
006F079B  68 29 02 00 00            PUSH 0x229
006F07A0  68 88 EF 7E 00            PUSH 0x7eef88
006F07A5  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006F07AB  E8 20 CD FB FF            CALL 0x006ad4d0
006F07B0  83 C4 18                  ADD ESP,0x18
006F07B3  85 C0                     TEST EAX,EAX
006F07B5  74 01                     JZ 0x006f07b8
006F07B7  CC                        INT3
LAB_006f07b8:
006F07B8  8D 45 FC                  LEA EAX,[EBP + -0x4]
006F07BB  50                        PUSH EAX
006F07BC  E8 1F 00 00 00            CALL 0x006f07e0
006F07C1  83 C4 04                  ADD ESP,0x4
006F07C4  68 2D 02 00 00            PUSH 0x22d
006F07C9  68 88 EF 7E 00            PUSH 0x7eef88
006F07CE  6A 00                     PUSH 0x0
006F07D0  56                        PUSH ESI
006F07D1  E8 6A 56 FB FF            CALL 0x006a5e40
006F07D6  5F                        POP EDI
006F07D7  33 C0                     XOR EAX,EAX
006F07D9  5E                        POP ESI
006F07DA  8B E5                     MOV ESP,EBP
006F07DC  5D                        POP EBP
006F07DD  C3                        RET
