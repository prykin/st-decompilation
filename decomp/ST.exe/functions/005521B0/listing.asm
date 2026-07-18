FUN_005521b0:
005521B0  55                        PUSH EBP
005521B1  8B EC                     MOV EBP,ESP
005521B3  83 EC 58                  SUB ESP,0x58
005521B6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005521BB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005521BE  56                        PUSH ESI
005521BF  8D 55 AC                  LEA EDX,[EBP + -0x54]
005521C2  8D 4D A8                  LEA ECX,[EBP + -0x58]
005521C5  6A 00                     PUSH 0x0
005521C7  52                        PUSH EDX
005521C8  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
005521CB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005521D1  E8 1A B6 1D 00            CALL 0x0072d7f0
005521D6  8B F0                     MOV ESI,EAX
005521D8  83 C4 08                  ADD ESP,0x8
005521DB  85 F6                     TEST ESI,ESI
005521DD  75 4C                     JNZ 0x0055222b
005521DF  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005521E2  8D 86 AB 01 00 00         LEA EAX,[ESI + 0x1ab]
005521E8  8B C8                     MOV ECX,EAX
005521EA  50                        PUSH EAX
005521EB  6A 0A                     PUSH 0xa
005521ED  8B 11                     MOV EDX,dword ptr [ECX]
005521EF  89 55 EC                  MOV dword ptr [EBP + -0x14],EDX
005521F2  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
005521F5  89 55 F0                  MOV dword ptr [EBP + -0x10],EDX
005521F8  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
005521FB  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005521FE  8B 49 0C                  MOV ECX,dword ptr [ECX + 0xc]
00552201  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00552204  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
0055220A  E8 AD 13 EB FF            CALL 0x004035bc
0055220F  8B CE                     MOV ECX,ESI
00552211  E8 87 2D EB FF            CALL 0x00404f9d
00552216  8B CE                     MOV ECX,ESI
00552218  E8 00 17 EB FF            CALL 0x0040391d
0055221D  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00552220  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552226  5E                        POP ESI
00552227  8B E5                     MOV ESP,EBP
00552229  5D                        POP EBP
0055222A  C3                        RET
LAB_0055222b:
0055222B  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0055222E  68 5C 87 7C 00            PUSH 0x7c875c
00552233  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552238  56                        PUSH ESI
00552239  6A 00                     PUSH 0x0
0055223B  68 2C 01 00 00            PUSH 0x12c
00552240  68 24 86 7C 00            PUSH 0x7c8624
00552245  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0055224A  E8 81 B2 15 00            CALL 0x006ad4d0
0055224F  83 C4 18                  ADD ESP,0x18
00552252  85 C0                     TEST EAX,EAX
00552254  74 01                     JZ 0x00552257
00552256  CC                        INT3
LAB_00552257:
00552257  68 2C 01 00 00            PUSH 0x12c
0055225C  68 24 86 7C 00            PUSH 0x7c8624
00552261  6A 00                     PUSH 0x0
00552263  56                        PUSH ESI
00552264  E8 D7 3B 15 00            CALL 0x006a5e40
00552269  5E                        POP ESI
0055226A  8B E5                     MOV ESP,EBP
0055226C  5D                        POP EBP
0055226D  C3                        RET
