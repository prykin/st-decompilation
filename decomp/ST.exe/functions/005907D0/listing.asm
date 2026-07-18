FUN_005907d0:
005907D0  55                        PUSH EBP
005907D1  8B EC                     MOV EBP,ESP
005907D3  83 EC 44                  SUB ESP,0x44
005907D6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005907DB  56                        PUSH ESI
005907DC  8D 4D C0                  LEA ECX,[EBP + -0x40]
005907DF  6A 00                     PUSH 0x0
005907E1  51                        PUSH ECX
005907E2  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
005907E5  E8 06 D0 19 00            CALL 0x0072d7f0
005907EA  8B F0                     MOV ESI,EAX
005907EC  83 C4 08                  ADD ESP,0x8
005907EF  85 F6                     TEST ESI,ESI
005907F1  75 0E                     JNZ 0x00590801
005907F3  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
005907F6  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005907FC  5E                        POP ESI
005907FD  8B E5                     MOV ESP,EBP
005907FF  5D                        POP EBP
00590800  C3                        RET
LAB_00590801:
00590801  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00590804  68 8C BC 7C 00            PUSH 0x7cbc8c
00590809  68 CC 4C 7A 00            PUSH 0x7a4ccc
0059080E  56                        PUSH ESI
0059080F  6A 00                     PUSH 0x0
00590811  6A 57                     PUSH 0x57
00590813  68 24 BC 7C 00            PUSH 0x7cbc24
00590818  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0059081D  E8 AE CC 11 00            CALL 0x006ad4d0
00590822  83 C4 18                  ADD ESP,0x18
00590825  85 C0                     TEST EAX,EAX
00590827  74 01                     JZ 0x0059082a
00590829  CC                        INT3
LAB_0059082a:
0059082A  6A 57                     PUSH 0x57
0059082C  68 24 BC 7C 00            PUSH 0x7cbc24
00590831  6A 00                     PUSH 0x0
00590833  56                        PUSH ESI
00590834  E8 07 56 11 00            CALL 0x006a5e40
00590839  5E                        POP ESI
0059083A  8B E5                     MOV ESP,EBP
0059083C  5D                        POP EBP
0059083D  C3                        RET
