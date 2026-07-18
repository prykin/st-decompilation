FUN_00682d70:
00682D70  55                        PUSH EBP
00682D71  8B EC                     MOV EBP,ESP
00682D73  83 EC 08                  SUB ESP,0x8
00682D76  A1 48 75 85 00            MOV EAX,[0x00857548]
00682D7B  56                        PUSH ESI
00682D7C  50                        PUSH EAX
00682D7D  E8 F5 E8 D7 FF            CALL 0x00401677
00682D82  50                        PUSH EAX
00682D83  E8 10 31 D8 FF            CALL 0x00405e98
00682D88  8B F0                     MOV ESI,EAX
00682D8A  83 C4 08                  ADD ESP,0x8
00682D8D  85 F6                     TEST ESI,ESI
00682D8F  7D 18                     JGE 0x00682da9
00682D91  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00682D97  68 52 02 00 00            PUSH 0x252
00682D9C  68 04 56 7D 00            PUSH 0x7d5604
00682DA1  51                        PUSH ECX
00682DA2  6A FE                     PUSH -0x2
00682DA4  E8 97 30 02 00            CALL 0x006a5e40
LAB_00682da9:
00682DA9  8D 55 F8                  LEA EDX,[EBP + -0x8]
00682DAC  C6 45 F8 03               MOV byte ptr [EBP + -0x8],0x3
00682DB0  52                        PUSH EDX
00682DB1  66 89 75 F9               MOV word ptr [EBP + -0x7],SI
00682DB5  E8 5A E2 D7 FF            CALL 0x00401014
00682DBA  83 C4 04                  ADD ESP,0x4
00682DBD  E8 A7 F6 D7 FF            CALL 0x00402469
00682DC2  5E                        POP ESI
00682DC3  8B E5                     MOV ESP,EBP
00682DC5  5D                        POP EBP
00682DC6  C3                        RET
