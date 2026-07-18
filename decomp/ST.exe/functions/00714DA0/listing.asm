FUN_00714da0:
00714DA0  56                        PUSH ESI
00714DA1  8B F1                     MOV ESI,ECX
00714DA3  83 7E 04 01               CMP dword ptr [ESI + 0x4],0x1
00714DA7  73 0B                     JNC 0x00714db4
00714DA9  6A 01                     PUSH 0x1
00714DAB  E8 30 FF FF FF            CALL 0x00714ce0
00714DB0  85 C0                     TEST EAX,EAX
00714DB2  75 07                     JNZ 0x00714dbb
LAB_00714db4:
00714DB4  8B 06                     MOV EAX,dword ptr [ESI]
00714DB6  C6 00 00                  MOV byte ptr [EAX],0x0
00714DB9  33 C0                     XOR EAX,EAX
LAB_00714dbb:
00714DBB  5E                        POP ESI
00714DBC  C3                        RET
