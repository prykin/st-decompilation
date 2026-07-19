FUN_00483880:
00483880  83 B9 55 04 00 00 01      CMP dword ptr [ECX + 0x455],0x1
00483887  75 03                     JNZ 0x0048388c
00483889  33 C0                     XOR EAX,EAX
0048388B  C3                        RET
LAB_0048388c:
0048388C  E9 66 21 F8 FF            JMP 0x004059f7
