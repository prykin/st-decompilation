FUN_00621090:
00621090  55                        PUSH EBP
00621091  8B EC                     MOV EBP,ESP
00621093  83 EC 14                  SUB ESP,0x14
00621096  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00621099  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
0062109C  56                        PUSH ESI
0062109D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006210A0  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
006210A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006210A6  8B F1                     MOV ESI,ECX
006210A8  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
006210AB  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006210AE  57                        PUSH EDI
006210AF  8B 86 F5 00 00 00         MOV EAX,dword ptr [ESI + 0xf5]
006210B5  83 CF FF                  OR EDI,0xffffffff
006210B8  85 C0                     TEST EAX,EAX
006210BA  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
006210BD  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006210C0  75 13                     JNZ 0x006210d5
006210C2  6A 0A                     PUSH 0xa
006210C4  6A 14                     PUSH 0x14
006210C6  6A 0A                     PUSH 0xa
006210C8  6A 00                     PUSH 0x0
006210CA  E8 C1 D1 08 00            CALL 0x006ae290
006210CF  89 86 F5 00 00 00         MOV dword ptr [ESI + 0xf5],EAX
LAB_006210d5:
006210D5  8B B6 F5 00 00 00         MOV ESI,dword ptr [ESI + 0xf5]
006210DB  85 F6                     TEST ESI,ESI
006210DD  74 12                     JZ 0x006210f1
006210DF  8D 45 EC                  LEA EAX,[EBP + -0x14]
006210E2  50                        PUSH EAX
006210E3  56                        PUSH ESI
006210E4  E8 D7 D0 08 00            CALL 0x006ae1c0
006210E9  5F                        POP EDI
006210EA  5E                        POP ESI
006210EB  8B E5                     MOV ESP,EBP
006210ED  5D                        POP EBP
006210EE  C2 10 00                  RET 0x10
LAB_006210f1:
006210F1  8B C7                     MOV EAX,EDI
006210F3  5F                        POP EDI
006210F4  5E                        POP ESI
006210F5  8B E5                     MOV ESP,EBP
006210F7  5D                        POP EBP
006210F8  C2 10 00                  RET 0x10
