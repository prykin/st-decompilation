FUN_006809f0:
006809F0  55                        PUSH EBP
006809F1  8B EC                     MOV EBP,ESP
006809F3  83 EC 58                  SUB ESP,0x58
006809F6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006809FB  56                        PUSH ESI
006809FC  8D 55 AC                  LEA EDX,[EBP + -0x54]
006809FF  8D 4D A8                  LEA ECX,[EBP + -0x58]
00680A02  6A 00                     PUSH 0x0
00680A04  52                        PUSH EDX
00680A05  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00680A0C  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00680A13  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00680A16  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00680A1C  E8 CF CD 0A 00            CALL 0x0072d7f0
00680A21  8B F0                     MOV ESI,EAX
00680A23  83 C4 08                  ADD ESP,0x8
00680A26  85 F6                     TEST ESI,ESI
00680A28  75 55                     JNZ 0x00680a7f
00680A2A  89 45 EC                  MOV dword ptr [EBP + -0x14],EAX
00680A2D  8D 55 F8                  LEA EDX,[EBP + -0x8]
00680A30  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
00680A33  52                        PUSH EDX
00680A34  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
00680A37  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00680A3A  50                        PUSH EAX
00680A3B  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00680A3E  89 4D EC                  MOV dword ptr [EBP + -0x14],ECX
00680A41  E8 CA 7E 04 00            CALL 0x006c8910
00680A46  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00680A49  8D 4D EC                  LEA ECX,[EBP + -0x14]
00680A4C  51                        PUSH ECX
00680A4D  52                        PUSH EDX
00680A4E  50                        PUSH EAX
00680A4F  6A 17                     PUSH 0x17
00680A51  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00680A54  E8 ED 28 D8 FF            CALL 0x00403346
00680A59  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00680A5C  83 C4 10                  ADD ESP,0x10
00680A5F  85 C0                     TEST EAX,EAX
00680A61  74 09                     JZ 0x00680a6c
00680A63  8D 45 FC                  LEA EAX,[EBP + -0x4]
00680A66  50                        PUSH EAX
00680A67  E8 F4 A5 02 00            CALL 0x006ab060
LAB_00680a6c:
00680A6C  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
00680A6F  B8 01 00 00 00            MOV EAX,0x1
00680A74  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00680A7A  5E                        POP ESI
00680A7B  8B E5                     MOV ESP,EBP
00680A7D  5D                        POP EBP
00680A7E  C3                        RET
LAB_00680a7f:
00680A7F  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00680A82  8B 55 A8                  MOV EDX,dword ptr [EBP + -0x58]
00680A85  85 C0                     TEST EAX,EAX
00680A87  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00680A8D  74 09                     JZ 0x00680a98
00680A8F  8D 45 FC                  LEA EAX,[EBP + -0x4]
00680A92  50                        PUSH EAX
00680A93  E8 C8 A5 02 00            CALL 0x006ab060
LAB_00680a98:
00680A98  68 24 01 00 00            PUSH 0x124
00680A9D  68 04 56 7D 00            PUSH 0x7d5604
00680AA2  6A 00                     PUSH 0x0
00680AA4  56                        PUSH ESI
00680AA5  E8 96 53 02 00            CALL 0x006a5e40
00680AAA  33 C0                     XOR EAX,EAX
00680AAC  5E                        POP ESI
00680AAD  8B E5                     MOV ESP,EBP
00680AAF  5D                        POP EBP
00680AB0  C3                        RET
