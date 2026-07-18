FUN_00682d30:
00682D30  55                        PUSH EBP
00682D31  8B EC                     MOV EBP,ESP
00682D33  83 EC 08                  SUB ESP,0x8
00682D36  DD 05 48 75 85 00         FLD double ptr [0x00857548]
00682D3C  8D 45 F8                  LEA EAX,[EBP + -0x8]
00682D3F  C6 45 F8 02               MOV byte ptr [EBP + -0x8],0x2
00682D43  D9 5D F9                  FSTP float ptr [EBP + -0x7]
00682D46  50                        PUSH EAX
00682D47  E8 C8 E2 D7 FF            CALL 0x00401014
00682D4C  83 C4 04                  ADD ESP,0x4
00682D4F  E8 15 F7 D7 FF            CALL 0x00402469
00682D54  8B E5                     MOV ESP,EBP
00682D56  5D                        POP EBP
00682D57  C3                        RET
