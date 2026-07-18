FUN_00678ba0:
00678BA0  56                        PUSH ESI
00678BA1  8B F1                     MOV ESI,ECX
00678BA3  8D 4E 1C                  LEA ECX,[ESI + 0x1c]
00678BA6  E8 69 A2 D8 FF            CALL 0x00402e14
00678BAB  85 F6                     TEST ESI,ESI
00678BAD  74 11                     JZ 0x00678bc0
00678BAF  8D 86 D3 05 00 00         LEA EAX,[ESI + 0x5d3]
00678BB5  50                        PUSH EAX
00678BB6  E8 1B B8 D8 FF            CALL 0x004043d6
00678BBB  83 C4 04                  ADD ESP,0x4
00678BBE  5E                        POP ESI
00678BBF  C3                        RET
LAB_00678bc0:
00678BC0  33 C0                     XOR EAX,EAX
00678BC2  50                        PUSH EAX
00678BC3  E8 0E B8 D8 FF            CALL 0x004043d6
00678BC8  83 C4 04                  ADD ESP,0x4
00678BCB  5E                        POP ESI
00678BCC  C3                        RET
