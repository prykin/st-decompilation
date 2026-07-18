FUN_00619320:
00619320  8B 81 97 00 00 00         MOV EAX,dword ptr [ECX + 0x97]
00619326  85 C0                     TEST EAX,EAX
00619328  7C 0C                     JL 0x00619336
0061932A  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00619330  50                        PUSH EAX
00619331  E8 6A F8 0C 00            CALL 0x006e8ba0
LAB_00619336:
00619336  C3                        RET
