FUN_0073af90:
0073AF90  55                        PUSH EBP
0073AF91  8B EC                     MOV EBP,ESP
0073AF93  A1 8C 72 85 00            MOV EAX,[0x0085728c]
0073AF98  0D 04 01 00 00            OR EAX,0x104
0073AF9D  A3 8C 72 85 00            MOV [0x0085728c],EAX
0073AFA2  FF 15 18 BC 85 00         CALL dword ptr [0x0085bc18]
0073AFA8  A3 90 72 85 00            MOV [0x00857290],EAX
0073AFAD  8B 0D 90 72 85 00         MOV ECX,dword ptr [0x00857290]
0073AFB3  89 0D 74 72 85 00         MOV dword ptr [0x00857274],ECX
0073AFB9  5D                        POP EBP
0073AFBA  C3                        RET
