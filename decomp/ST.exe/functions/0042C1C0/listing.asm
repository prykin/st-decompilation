STAllPlayersC::AddObjsToTmp:
0042C1C0  55                        PUSH EBP
0042C1C1  8B EC                     MOV EBP,ESP
0042C1C3  83 EC 50                  SUB ESP,0x50
0042C1C6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0042C1CB  53                        PUSH EBX
0042C1CC  56                        PUSH ESI
0042C1CD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0042C1D0  57                        PUSH EDI
0042C1D1  8D 55 B4                  LEA EDX,[EBP + -0x4c]
0042C1D4  8D 4D B0                  LEA ECX,[EBP + -0x50]
0042C1D7  6A 00                     PUSH 0x0
0042C1D9  52                        PUSH EDX
0042C1DA  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
0042C1DD  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0042C1E3  E8 08 16 30 00            CALL 0x0072d7f0
0042C1E8  8B F0                     MOV ESI,EAX
0042C1EA  83 C4 08                  ADD ESP,0x8
0042C1ED  85 F6                     TEST ESI,ESI
0042C1EF  75 75                     JNZ 0x0042c266
0042C1F1  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0042C1F4  85 DB                     TEST EBX,EBX
0042C1F6  75 1A                     JNZ 0x0042c212
0042C1F8  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0042C1FD  68 66 02 00 00            PUSH 0x266
0042C202  68 04 60 7A 00            PUSH 0x7a6004
0042C207  50                        PUSH EAX
0042C208  68 09 00 FE AF            PUSH 0xaffe0009
0042C20D  E8 2E 9C 27 00            CALL 0x006a5e40
LAB_0042c212:
0042C212  8B 43 0C                  MOV EAX,dword ptr [EBX + 0xc]
0042C215  33 FF                     XOR EDI,EDI
0042C217  85 C0                     TEST EAX,EAX
0042C219  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0042C21C  7E 34                     JLE 0x0042c252
0042C21E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
LAB_0042c221:
0042C221  8D 4D FC                  LEA ECX,[EBP + -0x4]
0042C224  8B D7                     MOV EDX,EDI
0042C226  51                        PUSH ECX
0042C227  8B CB                     MOV ECX,EBX
0042C229  E8 42 0A 28 00            CALL 0x006acc70
0042C22E  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0042C231  66 3D FF FF               CMP AX,0xffff
0042C235  74 13                     JZ 0x0042c24a
0042C237  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0042C23A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0042C23D  50                        PUSH EAX
0042C23E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042C241  56                        PUSH ESI
0042C242  52                        PUSH EDX
0042C243  50                        PUSH EAX
0042C244  56                        PUSH ESI
0042C245  E8 4E 7E FD FF            CALL 0x00404098
LAB_0042c24a:
0042C24A  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0042C24D  47                        INC EDI
0042C24E  3B F8                     CMP EDI,EAX
0042C250  7C CF                     JL 0x0042c221
LAB_0042c252:
0042C252  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
0042C255  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
LAB_0042c25b:
0042C25B  33 C0                     XOR EAX,EAX
0042C25D  5F                        POP EDI
0042C25E  5E                        POP ESI
0042C25F  5B                        POP EBX
0042C260  8B E5                     MOV ESP,EBP
0042C262  5D                        POP EBP
0042C263  C2 10 00                  RET 0x10
LAB_0042c266:
0042C266  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
0042C269  81 FE 09 00 FE AF         CMP ESI,0xaffe0009
0042C26F  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0042C275  74 E4                     JZ 0x0042c25b
0042C277  68 88 62 7A 00            PUSH 0x7a6288
0042C27C  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042C281  56                        PUSH ESI
0042C282  6A 00                     PUSH 0x0
0042C284  68 6E 02 00 00            PUSH 0x26e
0042C289  68 04 60 7A 00            PUSH 0x7a6004
0042C28E  E8 3D 12 28 00            CALL 0x006ad4d0
0042C293  83 C4 18                  ADD ESP,0x18
0042C296  85 C0                     TEST EAX,EAX
0042C298  74 01                     JZ 0x0042c29b
0042C29A  CC                        INT3
LAB_0042c29b:
0042C29B  68 6F 02 00 00            PUSH 0x26f
0042C2A0  68 04 60 7A 00            PUSH 0x7a6004
0042C2A5  6A 00                     PUSH 0x0
0042C2A7  56                        PUSH ESI
0042C2A8  E8 93 9B 27 00            CALL 0x006a5e40
0042C2AD  5F                        POP EDI
0042C2AE  5E                        POP ESI
0042C2AF  83 C8 FF                  OR EAX,0xffffffff
0042C2B2  5B                        POP EBX
0042C2B3  8B E5                     MOV ESP,EBP
0042C2B5  5D                        POP EBP
0042C2B6  C2 10 00                  RET 0x10
