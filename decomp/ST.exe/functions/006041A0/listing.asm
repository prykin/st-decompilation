FUN_006041a0:
006041A0  55                        PUSH EBP
006041A1  8B EC                     MOV EBP,ESP
006041A3  83 EC 4C                  SUB ESP,0x4c
006041A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006041AB  53                        PUSH EBX
006041AC  56                        PUSH ESI
006041AD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006041B0  33 F6                     XOR ESI,ESI
006041B2  57                        PUSH EDI
006041B3  8D 55 B8                  LEA EDX,[EBP + -0x48]
006041B6  8D 4D B4                  LEA ECX,[EBP + -0x4c]
006041B9  56                        PUSH ESI
006041BA  52                        PUSH EDX
006041BB  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
006041BE  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
006041C1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006041C7  E8 24 96 12 00            CALL 0x0072d7f0
006041CC  8B D8                     MOV EBX,EAX
006041CE  83 C4 08                  ADD ESP,0x8
006041D1  3B DE                     CMP EBX,ESI
006041D3  75 4A                     JNZ 0x0060421f
006041D5  39 75 08                  CMP dword ptr [EBP + 0x8],ESI
006041D8  7E 30                     JLE 0x0060420a
006041DA  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
006041DD  8D BB 19 02 00 00         LEA EDI,[EBX + 0x219]
LAB_006041e3:
006041E3  E8 94 E3 DF FF            CALL 0x0040257c
006041E8  89 07                     MOV dword ptr [EDI],EAX
006041EA  89 98 CE 00 00 00         MOV dword ptr [EAX + 0xce],EBX
006041F0  8B 07                     MOV EAX,dword ptr [EDI]
006041F2  83 C7 04                  ADD EDI,0x4
006041F5  89 B0 D2 00 00 00         MOV dword ptr [EAX + 0xd2],ESI
006041FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006041FE  40                        INC EAX
006041FF  46                        INC ESI
00604200  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00604203  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00604206  3B F0                     CMP ESI,EAX
00604208  7C D9                     JL 0x006041e3
LAB_0060420a:
0060420A  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
0060420D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00604210  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00604216  5F                        POP EDI
00604217  5E                        POP ESI
00604218  5B                        POP EBX
00604219  8B E5                     MOV ESP,EBP
0060421B  5D                        POP EBP
0060421C  C2 04 00                  RET 0x4
LAB_0060421f:
0060421F  8B 7D FC                  MOV EDI,dword ptr [EBP + -0x4]
00604222  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00604225  85 FF                     TEST EDI,EDI
00604227  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0060422D  7E 1A                     JLE 0x00604249
0060422F  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00604232  8D B0 19 02 00 00         LEA ESI,[EAX + 0x219]
LAB_00604238:
00604238  8B 0E                     MOV ECX,dword ptr [ESI]
0060423A  51                        PUSH ECX
0060423B  E8 70 A0 12 00            CALL 0x0072e2b0
00604240  83 C4 04                  ADD ESP,0x4
00604243  83 C6 04                  ADD ESI,0x4
00604246  4F                        DEC EDI
00604247  75 EF                     JNZ 0x00604238
LAB_00604249:
00604249  68 70 F6 7C 00            PUSH 0x7cf670
0060424E  68 CC 4C 7A 00            PUSH 0x7a4ccc
00604253  53                        PUSH EBX
00604254  6A 00                     PUSH 0x0
00604256  68 F6 01 00 00            PUSH 0x1f6
0060425B  68 30 F6 7C 00            PUSH 0x7cf630
00604260  E8 6B 92 0A 00            CALL 0x006ad4d0
00604265  83 C4 18                  ADD ESP,0x18
00604268  85 C0                     TEST EAX,EAX
0060426A  74 01                     JZ 0x0060426d
0060426C  CC                        INT3
LAB_0060426d:
0060426D  68 F8 01 00 00            PUSH 0x1f8
00604272  68 30 F6 7C 00            PUSH 0x7cf630
00604277  6A 00                     PUSH 0x0
00604279  53                        PUSH EBX
0060427A  E8 C1 1B 0A 00            CALL 0x006a5e40
0060427F  5F                        POP EDI
00604280  5E                        POP ESI
00604281  B8 FF FF 00 00            MOV EAX,0xffff
00604286  5B                        POP EBX
00604287  8B E5                     MOV ESP,EBP
00604289  5D                        POP EBP
0060428A  C2 04 00                  RET 0x4
