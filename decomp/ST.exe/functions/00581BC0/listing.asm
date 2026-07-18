FUN_00581bc0:
00581BC0  A1 38 2A 80 00            MOV EAX,[0x00802a38]
00581BC5  56                        PUSH ESI
00581BC6  33 D2                     XOR EDX,EDX
00581BC8  BE 3C 00 00 00            MOV ESI,0x3c
00581BCD  8B 80 E4 00 00 00         MOV EAX,dword ptr [EAX + 0xe4]
00581BD3  F7 F6                     DIV ESI
00581BD5  5E                        POP ESI
00581BD6  85 D2                     TEST EDX,EDX
00581BD8  75 05                     JNZ 0x00581bdf
00581BDA  E9 06 05 E8 FF            JMP 0x004020e5
LAB_00581bdf:
00581BDF  C3                        RET
