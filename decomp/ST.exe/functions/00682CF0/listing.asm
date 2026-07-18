FUN_00682cf0:
00682CF0  55                        PUSH EBP
00682CF1  8B EC                     MOV EBP,ESP
00682CF3  83 EC 08                  SUB ESP,0x8
00682CF6  A1 48 75 85 00            MOV EAX,[0x00857548]
00682CFB  8D 4D F8                  LEA ECX,[EBP + -0x8]
00682CFE  51                        PUSH ECX
00682CFF  C6 45 F8 01               MOV byte ptr [EBP + -0x8],0x1
00682D03  89 45 F9                  MOV dword ptr [EBP + -0x7],EAX
00682D06  E8 09 E3 D7 FF            CALL 0x00401014
00682D0B  83 C4 04                  ADD ESP,0x4
00682D0E  E8 56 F7 D7 FF            CALL 0x00402469
00682D13  8B E5                     MOV ESP,EBP
00682D15  5D                        POP EBP
00682D16  C3                        RET
