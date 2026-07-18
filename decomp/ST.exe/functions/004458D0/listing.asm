FUN_004458d0:
004458D0  55                        PUSH EBP
004458D1  8B EC                     MOV EBP,ESP
004458D3  56                        PUSH ESI
004458D4  57                        PUSH EDI
004458D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004458D8  33 F6                     XOR ESI,ESI
004458DA  8D 47 FF                  LEA EAX,[EDI + -0x1]
004458DD  83 F8 27                  CMP EAX,0x27
004458E0  77 19                     JA 0x004458fb
switchD_004458e2::switchD:
004458E2  FF 24 85 4C 59 44 00      JMP dword ptr [EAX*0x4 + 0x44594c]
switchD_004458e2::caseD_1:
004458E9  33 F6                     XOR ESI,ESI
004458EB  EB 33                     JMP 0x00445920
switchD_004458e2::caseD_2:
004458ED  BE 01 00 00 00            MOV ESI,0x1
004458F2  EB 2C                     JMP 0x00445920
switchD_004458e2::caseD_f:
004458F4  BE 02 00 00 00            MOV ESI,0x2
004458F9  EB 25                     JMP 0x00445920
switchD_004458e2::default:
004458FB  68 2C 83 7A 00            PUSH 0x7a832c
00445900  68 CC 4C 7A 00            PUSH 0x7a4ccc
00445905  6A 00                     PUSH 0x0
00445907  6A 00                     PUSH 0x0
00445909  68 1A 28 00 00            PUSH 0x281a
0044590E  68 04 60 7A 00            PUSH 0x7a6004
00445913  E8 B8 7B 26 00            CALL 0x006ad4d0
00445918  83 C4 18                  ADD ESP,0x18
0044591B  85 C0                     TEST EAX,EAX
0044591D  74 01                     JZ 0x00445920
0044591F  CC                        INT3
LAB_00445920:
00445920  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00445923  8B 04 BD 18 8B 7A 00      MOV EAX,dword ptr [EDI*0x4 + 0x7a8b18]
0044592A  89 01                     MOV dword ptr [ECX],EAX
0044592C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0044592F  8B 14 BD 58 8C 7A 00      MOV EDX,dword ptr [EDI*0x4 + 0x7a8c58]
00445936  89 10                     MOV dword ptr [EAX],EDX
00445938  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0044593B  8B 0C BD B8 8B 7A 00      MOV ECX,dword ptr [EDI*0x4 + 0x7a8bb8]
00445942  8B C6                     MOV EAX,ESI
00445944  5F                        POP EDI
00445945  89 0A                     MOV dword ptr [EDX],ECX
00445947  5E                        POP ESI
00445948  5D                        POP EBP
00445949  C2 10 00                  RET 0x10
