FUN_00620160:
00620160  55                        PUSH EBP
00620161  8B EC                     MOV EBP,ESP
00620163  83 EC 14                  SUB ESP,0x14
00620166  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620169  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062016C  56                        PUSH ESI
0062016D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00620170  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00620173  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00620176  8B F1                     MOV ESI,ECX
00620178  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0062017B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0062017E  57                        PUSH EDI
0062017F  8B 86 C5 00 00 00         MOV EAX,dword ptr [ESI + 0xc5]
00620185  83 CF FF                  OR EDI,0xffffffff
00620188  85 C0                     TEST EAX,EAX
0062018A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
0062018D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00620190  75 13                     JNZ 0x006201a5
00620192  6A 0A                     PUSH 0xa
00620194  6A 14                     PUSH 0x14
00620196  6A 0A                     PUSH 0xa
00620198  6A 00                     PUSH 0x0
0062019A  E8 F1 E0 08 00            CALL 0x006ae290
0062019F  89 86 C5 00 00 00         MOV dword ptr [ESI + 0xc5],EAX
LAB_006201a5:
006201A5  8B B6 C5 00 00 00         MOV ESI,dword ptr [ESI + 0xc5]
006201AB  85 F6                     TEST ESI,ESI
006201AD  74 12                     JZ 0x006201c1
006201AF  8D 45 EC                  LEA EAX,[EBP + -0x14]
006201B2  50                        PUSH EAX
006201B3  56                        PUSH ESI
006201B4  E8 07 E0 08 00            CALL 0x006ae1c0
006201B9  5F                        POP EDI
006201BA  5E                        POP ESI
006201BB  8B E5                     MOV ESP,EBP
006201BD  5D                        POP EBP
006201BE  C2 10 00                  RET 0x10
LAB_006201c1:
006201C1  8B C7                     MOV EAX,EDI
006201C3  5F                        POP EDI
006201C4  5E                        POP ESI
006201C5  8B E5                     MOV ESP,EBP
006201C7  5D                        POP EBP
006201C8  C2 10 00                  RET 0x10
