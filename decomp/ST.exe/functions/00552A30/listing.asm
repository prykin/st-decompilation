FUN_00552a30:
00552A30  55                        PUSH EBP
00552A31  8B EC                     MOV EBP,ESP
00552A33  83 EC 48                  SUB ESP,0x48
00552A36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00552A3B  56                        PUSH ESI
00552A3C  57                        PUSH EDI
00552A3D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00552A40  33 FF                     XOR EDI,EDI
00552A42  8D 4D BC                  LEA ECX,[EBP + -0x44]
00552A45  57                        PUSH EDI
00552A46  51                        PUSH ECX
00552A47  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00552A4A  E8 A1 AD 1D 00            CALL 0x0072d7f0
00552A4F  8B F0                     MOV ESI,EAX
00552A51  83 C4 08                  ADD ESP,0x8
00552A54  3B F7                     CMP ESI,EDI
00552A56  75 2A                     JNZ 0x00552a82
00552A58  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00552A5B  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00552A5E  89 B8 F3 03 00 00         MOV dword ptr [EAX + 0x3f3],EDI
00552A64  89 B8 EF 03 00 00         MOV dword ptr [EAX + 0x3ef],EDI
00552A6A  89 B8 EB 03 00 00         MOV dword ptr [EAX + 0x3eb],EDI
00552A70  89 3D 48 2A 80 00         MOV dword ptr [0x00802a48],EDI
00552A76  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552A7C  5F                        POP EDI
00552A7D  5E                        POP ESI
00552A7E  8B E5                     MOV ESP,EBP
00552A80  5D                        POP EBP
00552A81  C3                        RET
LAB_00552a82:
00552A82  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
00552A85  68 10 88 7C 00            PUSH 0x7c8810
00552A8A  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552A8F  56                        PUSH ESI
00552A90  57                        PUSH EDI
00552A91  6A 2A                     PUSH 0x2a
00552A93  68 B8 87 7C 00            PUSH 0x7c87b8
00552A98  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00552A9D  E8 2E AA 15 00            CALL 0x006ad4d0
00552AA2  83 C4 18                  ADD ESP,0x18
00552AA5  85 C0                     TEST EAX,EAX
00552AA7  74 01                     JZ 0x00552aaa
00552AA9  CC                        INT3
LAB_00552aaa:
00552AAA  6A 2A                     PUSH 0x2a
00552AAC  68 B8 87 7C 00            PUSH 0x7c87b8
00552AB1  57                        PUSH EDI
00552AB2  56                        PUSH ESI
00552AB3  E8 88 33 15 00            CALL 0x006a5e40
00552AB8  5F                        POP EDI
00552AB9  5E                        POP ESI
00552ABA  8B E5                     MOV ESP,EBP
00552ABC  5D                        POP EBP
00552ABD  C3                        RET
