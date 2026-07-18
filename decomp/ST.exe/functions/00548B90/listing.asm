FUN_00548b90:
00548B90  8B 81 A2 04 00 00         MOV EAX,dword ptr [ECX + 0x4a2]
00548B96  85 C0                     TEST EAX,EAX
00548B98  75 06                     JNZ 0x00548ba0
00548B9A  B8 01 00 00 00            MOV EAX,0x1
00548B9F  C3                        RET
LAB_00548ba0:
00548BA0  E9 E2 CA EB FF            JMP 0x00405687
