FUN_00620c50:
00620C50  55                        PUSH EBP
00620C51  8B EC                     MOV EBP,ESP
00620C53  83 EC 14                  SUB ESP,0x14
00620C56  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00620C59  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00620C5C  56                        PUSH ESI
00620C5D  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00620C60  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00620C63  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00620C66  8B F1                     MOV ESI,ECX
00620C68  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00620C6B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00620C6E  57                        PUSH EDI
00620C6F  8B 86 E9 00 00 00         MOV EAX,dword ptr [ESI + 0xe9]
00620C75  83 CF FF                  OR EDI,0xffffffff
00620C78  85 C0                     TEST EAX,EAX
00620C7A  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00620C7D  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
00620C80  75 13                     JNZ 0x00620c95
00620C82  6A 0A                     PUSH 0xa
00620C84  6A 14                     PUSH 0x14
00620C86  6A 0A                     PUSH 0xa
00620C88  6A 00                     PUSH 0x0
00620C8A  E8 01 D6 08 00            CALL 0x006ae290
00620C8F  89 86 E9 00 00 00         MOV dword ptr [ESI + 0xe9],EAX
LAB_00620c95:
00620C95  8B B6 E9 00 00 00         MOV ESI,dword ptr [ESI + 0xe9]
00620C9B  85 F6                     TEST ESI,ESI
00620C9D  74 12                     JZ 0x00620cb1
00620C9F  8D 45 EC                  LEA EAX,[EBP + -0x14]
00620CA2  50                        PUSH EAX
00620CA3  56                        PUSH ESI
00620CA4  E8 17 D5 08 00            CALL 0x006ae1c0
00620CA9  5F                        POP EDI
00620CAA  5E                        POP ESI
00620CAB  8B E5                     MOV ESP,EBP
00620CAD  5D                        POP EBP
00620CAE  C2 10 00                  RET 0x10
LAB_00620cb1:
00620CB1  8B C7                     MOV EAX,EDI
00620CB3  5F                        POP EDI
00620CB4  5E                        POP ESI
00620CB5  8B E5                     MOV ESP,EBP
00620CB7  5D                        POP EBP
00620CB8  C2 10 00                  RET 0x10
