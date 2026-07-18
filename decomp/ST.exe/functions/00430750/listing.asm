FUN_00430750:
00430750  55                        PUSH EBP
00430751  8B EC                     MOV EBP,ESP
00430753  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00430756  8D 41 FF                  LEA EAX,[ECX + -0x1]
00430759  3D BE 00 00 00            CMP EAX,0xbe
0043075E  77 3E                     JA 0x0043079e
00430760  33 D2                     XOR EDX,EDX
00430762  8A 90 EC 07 43 00         MOV DL,byte ptr [EAX + 0x4307ec]
switchD_00430768::switchD:
00430768  FF 24 95 CC 07 43 00      JMP dword ptr [EDX*0x4 + 0x4307cc]
switchD_00430768::caseD_96:
0043076F  B0 30                     MOV AL,0x30
00430771  5D                        POP EBP
00430772  C2 04 00                  RET 0x4
switchD_00430768::caseD_9b:
00430775  B0 C9                     MOV AL,0xc9
00430777  5D                        POP EBP
00430778  C2 04 00                  RET 0x4
switchD_00430768::caseD_9f:
0043077B  B0 60                     MOV AL,0x60
0043077D  5D                        POP EBP
0043077E  C2 04 00                  RET 0x4
switchD_00430768::caseD_a4:
00430781  B0 48                     MOV AL,0x48
00430783  5D                        POP EBP
00430784  C2 04 00                  RET 0x4
switchD_00430768::caseD_b9:
00430787  B0 3C                     MOV AL,0x3c
00430789  5D                        POP EBP
0043078A  C2 04 00                  RET 0x4
switchD_00430768::caseD_1:
0043078D  8A 04 8D 6C FC 7D 00      MOV AL,byte ptr [ECX*0x4 + 0x7dfc6c]
00430794  5D                        POP EBP
00430795  C2 04 00                  RET 0x4
switchD_00430768::caseD_ab:
00430798  B0 06                     MOV AL,0x6
0043079A  5D                        POP EBP
0043079B  C2 04 00                  RET 0x4
switchD_00430768::caseD_29:
0043079E  68 60 67 7A 00            PUSH 0x7a6760
004307A3  68 CC 4C 7A 00            PUSH 0x7a4ccc
004307A8  6A 00                     PUSH 0x0
004307AA  6A 00                     PUSH 0x0
004307AC  68 67 08 00 00            PUSH 0x867
004307B1  68 04 60 7A 00            PUSH 0x7a6004
004307B6  E8 15 CD 27 00            CALL 0x006ad4d0
004307BB  83 C4 18                  ADD ESP,0x18
004307BE  85 C0                     TEST EAX,EAX
004307C0  74 01                     JZ 0x004307c3
004307C2  CC                        INT3
LAB_004307c3:
004307C3  B0 01                     MOV AL,0x1
004307C5  5D                        POP EBP
004307C6  C2 04 00                  RET 0x4
