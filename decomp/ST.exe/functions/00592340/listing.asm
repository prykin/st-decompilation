FUN_00592340:
00592340  55                        PUSH EBP
00592341  8B EC                     MOV EBP,ESP
00592343  83 EC 48                  SUB ESP,0x48
00592346  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0059234B  56                        PUSH ESI
0059234C  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0059234F  57                        PUSH EDI
00592350  8D 55 BC                  LEA EDX,[EBP + -0x44]
00592353  8D 4D B8                  LEA ECX,[EBP + -0x48]
00592356  6A 00                     PUSH 0x0
00592358  52                        PUSH EDX
00592359  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0059235C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00592362  E8 89 B4 19 00            CALL 0x0072d7f0
00592367  8B F0                     MOV ESI,EAX
00592369  83 C4 08                  ADD ESP,0x8
0059236C  85 F6                     TEST ESI,ESI
0059236E  75 73                     JNZ 0x005923e3
00592370  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00592373  8B 86 EC 1B 00 00         MOV EAX,dword ptr [ESI + 0x1bec]
00592379  85 C0                     TEST EAX,EAX
0059237B  74 57                     JZ 0x005923d4
0059237D  8B 4E 61                  MOV ECX,dword ptr [ESI + 0x61]
00592380  8D 86 F0 1B 00 00         LEA EAX,[ESI + 0x1bf0]
00592386  50                        PUSH EAX
00592387  A1 9C 75 80 00            MOV EAX,[0x0080759c]
0059238C  51                        PUSH ECX
0059238D  8D 96 F4 1B 00 00         LEA EDX,[ESI + 0x1bf4]
00592393  6A 02                     PUSH 0x2
00592395  52                        PUSH EDX
00592396  6A 0A                     PUSH 0xa
00592398  8D BE F8 1B 00 00         LEA EDI,[ESI + 0x1bf8]
0059239E  68 00 01 00 00            PUSH 0x100
005923A3  6A 00                     PUSH 0x0
005923A5  57                        PUSH EDI
005923A6  50                        PUSH EAX
005923A7  E8 94 6B 18 00            CALL 0x00718f40
005923AC  83 C4 24                  ADD ESP,0x24
005923AF  83 F8 FC                  CMP EAX,-0x4
005923B2  75 20                     JNZ 0x005923d4
005923B4  8B 0D 9C 75 80 00         MOV ECX,dword ptr [0x0080759c]
005923BA  6A 00                     PUSH 0x0
005923BC  68 00 01 00 00            PUSH 0x100
005923C1  6A 00                     PUSH 0x0
005923C3  57                        PUSH EDI
005923C4  51                        PUSH ECX
005923C5  E8 56 E6 11 00            CALL 0x006b0a20
005923CA  C7 86 EC 1B 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1bec],0x0
LAB_005923d4:
005923D4  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005923D7  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005923DD  5F                        POP EDI
005923DE  5E                        POP ESI
005923DF  8B E5                     MOV ESP,EBP
005923E1  5D                        POP EBP
005923E2  C3                        RET
LAB_005923e3:
005923E3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
005923E6  68 3C BE 7C 00            PUSH 0x7cbe3c
005923EB  68 CC 4C 7A 00            PUSH 0x7a4ccc
005923F0  56                        PUSH ESI
005923F1  6A 00                     PUSH 0x0
005923F3  68 2D 01 00 00            PUSH 0x12d
005923F8  68 D4 BC 7C 00            PUSH 0x7cbcd4
005923FD  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00592402  E8 C9 B0 11 00            CALL 0x006ad4d0
00592407  83 C4 18                  ADD ESP,0x18
0059240A  85 C0                     TEST EAX,EAX
0059240C  74 01                     JZ 0x0059240f
0059240E  CC                        INT3
LAB_0059240f:
0059240F  68 2D 01 00 00            PUSH 0x12d
00592414  68 D4 BC 7C 00            PUSH 0x7cbcd4
00592419  6A 00                     PUSH 0x0
0059241B  56                        PUSH ESI
0059241C  E8 1F 3A 11 00            CALL 0x006a5e40
00592421  5F                        POP EDI
00592422  5E                        POP ESI
00592423  8B E5                     MOV ESP,EBP
00592425  5D                        POP EBP
00592426  C3                        RET
