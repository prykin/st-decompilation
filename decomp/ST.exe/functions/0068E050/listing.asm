FUN_0068e050:
0068E050  55                        PUSH EBP
0068E051  8B EC                     MOV EBP,ESP
0068E053  83 EC 48                  SUB ESP,0x48
0068E056  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0068E05B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
0068E05E  56                        PUSH ESI
0068E05F  8D 55 BC                  LEA EDX,[EBP + -0x44]
0068E062  8D 4D B8                  LEA ECX,[EBP + -0x48]
0068E065  6A 00                     PUSH 0x0
0068E067  52                        PUSH EDX
0068E068  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0068E06B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068E071  E8 7A F7 09 00            CALL 0x0072d7f0
0068E076  8B F0                     MOV ESI,EAX
0068E078  83 C4 08                  ADD ESP,0x8
0068E07B  85 F6                     TEST ESI,ESI
0068E07D  75 47                     JNZ 0x0068e0c6
0068E07F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
0068E082  85 F6                     TEST ESI,ESI
0068E084  74 05                     JZ 0x0068e08b
0068E086  8D 46 20                  LEA EAX,[ESI + 0x20]
0068E089  EB 02                     JMP 0x0068e08d
LAB_0068e08b:
0068E08B  33 C0                     XOR EAX,EAX
LAB_0068e08d:
0068E08D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0068E090  51                        PUSH ECX
0068E091  50                        PUSH EAX
0068E092  E8 F5 70 D7 FF            CALL 0x0040518c
0068E097  C7 00 8E 03 00 00         MOV dword ptr [EAX],0x38e
0068E09D  C7 40 0C 01 00 00 00      MOV dword ptr [EAX + 0xc],0x1
0068E0A4  8B 56 1C                  MOV EDX,dword ptr [ESI + 0x1c]
0068E0A7  83 C4 08                  ADD ESP,0x8
0068E0AA  89 50 5E                  MOV dword ptr [EAX + 0x5e],EDX
0068E0AD  66 C7 80 05 01 00 00 00 00  MOV word ptr [EAX + 0x105],0x0
0068E0B6  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0068E0B9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0068E0BF  5E                        POP ESI
0068E0C0  8B E5                     MOV ESP,EBP
0068E0C2  5D                        POP EBP
0068E0C3  C2 04 00                  RET 0x4
LAB_0068e0c6:
0068E0C6  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0068E0C9  68 30 57 7D 00            PUSH 0x7d5730
0068E0CE  68 CC 4C 7A 00            PUSH 0x7a4ccc
0068E0D3  56                        PUSH ESI
0068E0D4  6A 00                     PUSH 0x0
0068E0D6  68 81 00 00 00            PUSH 0x81
0068E0DB  68 E0 56 7D 00            PUSH 0x7d56e0
0068E0E0  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0068E0E6  E8 E5 F3 01 00            CALL 0x006ad4d0
0068E0EB  83 C4 18                  ADD ESP,0x18
0068E0EE  85 C0                     TEST EAX,EAX
0068E0F0  74 01                     JZ 0x0068e0f3
0068E0F2  CC                        INT3
LAB_0068e0f3:
0068E0F3  68 82 00 00 00            PUSH 0x82
0068E0F8  68 E0 56 7D 00            PUSH 0x7d56e0
0068E0FD  6A 00                     PUSH 0x0
0068E0FF  56                        PUSH ESI
0068E100  E8 3B 7D 01 00            CALL 0x006a5e40
0068E105  33 C0                     XOR EAX,EAX
0068E107  5E                        POP ESI
0068E108  8B E5                     MOV ESP,EBP
0068E10A  5D                        POP EBP
0068E10B  C2 04 00                  RET 0x4
