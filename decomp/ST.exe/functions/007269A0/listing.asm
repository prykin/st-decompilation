mfUSprGetSect:
007269A0  55                        PUSH EBP
007269A1  8B EC                     MOV EBP,ESP
007269A3  83 EC 50                  SUB ESP,0x50
007269A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
007269AB  56                        PUSH ESI
007269AC  8D 55 B4                  LEA EDX,[EBP + -0x4c]
007269AF  8D 4D B0                  LEA ECX,[EBP + -0x50]
007269B2  6A 00                     PUSH 0x0
007269B4  52                        PUSH EDX
007269B5  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
007269B8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
007269BE  E8 2D 6E 00 00            CALL 0x0072d7f0
007269C3  8B F0                     MOV ESI,EAX
007269C5  83 C4 08                  ADD ESP,0x8
007269C8  85 F6                     TEST ESI,ESI
007269CA  75 42                     JNZ 0x00726a0e
007269CC  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
007269CF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007269D2  8D 4D F4                  LEA ECX,[EBP + -0xc]
007269D5  50                        PUSH EAX
007269D6  51                        PUSH ECX
007269D7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007269DA  52                        PUSH EDX
007269DB  6A 15                     PUSH 0x15
007269DD  E8 2E B9 FC FF            CALL 0x006f2310
007269E2  85 C0                     TEST EAX,EAX
007269E4  75 17                     JNZ 0x007269fd
007269E6  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007269EB  68 A1 01 00 00            PUSH 0x1a1
007269F0  68 8C 0C 7F 00            PUSH 0x7f0c8c
007269F5  50                        PUSH EAX
007269F6  6A FC                     PUSH -0x4
007269F8  E8 43 F4 F7 FF            CALL 0x006a5e40
LAB_007269fd:
007269FD  8B 4D B0                  MOV ECX,dword ptr [EBP + -0x50]
00726A00  8A 45 FA                  MOV AL,byte ptr [EBP + -0x6]
00726A03  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00726A09  5E                        POP ESI
00726A0A  8B E5                     MOV ESP,EBP
00726A0C  5D                        POP EBP
00726A0D  C3                        RET
LAB_00726a0e:
00726A0E  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00726A11  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
00726A14  85 C0                     TEST EAX,EAX
00726A16  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00726A1C  75 0C                     JNZ 0x00726a2a
00726A1E  83 FE FC                  CMP ESI,-0x4
00726A21  75 07                     JNZ 0x00726a2a
00726A23  B0 FC                     MOV AL,0xfc
00726A25  5E                        POP ESI
00726A26  8B E5                     MOV ESP,EBP
00726A28  5D                        POP EBP
00726A29  C3                        RET
LAB_00726a2a:
00726A2A  68 1C 0D 7F 00            PUSH 0x7f0d1c
00726A2F  68 CC 4C 7A 00            PUSH 0x7a4ccc
00726A34  56                        PUSH ESI
00726A35  6A 00                     PUSH 0x0
00726A37  68 A5 01 00 00            PUSH 0x1a5
00726A3C  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726A41  E8 8A 6A F8 FF            CALL 0x006ad4d0
00726A46  83 C4 18                  ADD ESP,0x18
00726A49  85 C0                     TEST EAX,EAX
00726A4B  74 01                     JZ 0x00726a4e
00726A4D  CC                        INT3
LAB_00726a4e:
00726A4E  68 A7 01 00 00            PUSH 0x1a7
00726A53  68 8C 0C 7F 00            PUSH 0x7f0c8c
00726A58  6A 00                     PUSH 0x0
00726A5A  68 FF 00 00 00            PUSH 0xff
00726A5F  E8 DC F3 F7 FF            CALL 0x006a5e40
00726A64  85 F6                     TEST ESI,ESI
00726A66  7D 07                     JGE 0x00726a6f
00726A68  8B C6                     MOV EAX,ESI
00726A6A  5E                        POP ESI
00726A6B  8B E5                     MOV ESP,EBP
00726A6D  5D                        POP EBP
00726A6E  C3                        RET
LAB_00726a6f:
00726A6F  83 C8 FF                  OR EAX,0xffffffff
00726A72  5E                        POP ESI
00726A73  8B E5                     MOV ESP,EBP
00726A75  5D                        POP EBP
00726A76  C3                        RET
