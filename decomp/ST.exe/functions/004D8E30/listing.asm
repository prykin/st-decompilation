FUN_004d8e30:
004D8E30  56                        PUSH ESI
004D8E31  8B F1                     MOV ESI,ECX
004D8E33  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004D8E39  85 C0                     TEST EAX,EAX
004D8E3B  75 18                     JNZ 0x004d8e55
004D8E3D  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004D8E47  E8 C3 8B F2 FF            CALL 0x00401a0f
004D8E4C  6A 00                     PUSH 0x0
004D8E4E  8B CE                     MOV ECX,ESI
004D8E50  E8 A2 9E F2 FF            CALL 0x00402cf7
LAB_004d8e55:
004D8E55  B8 01 00 00 00            MOV EAX,0x1
004D8E5A  5E                        POP ESI
004D8E5B  C3                        RET
