FUN_004ece40:
004ECE40  56                        PUSH ESI
004ECE41  8B F1                     MOV ESI,ECX
004ECE43  8B 86 D0 04 00 00         MOV EAX,dword ptr [ESI + 0x4d0]
004ECE49  85 C0                     TEST EAX,EAX
004ECE4B  75 18                     JNZ 0x004ece65
004ECE4D  C7 86 D0 04 00 00 01 00 00 00  MOV dword ptr [ESI + 0x4d0],0x1
004ECE57  E8 B3 4B F1 FF            CALL 0x00401a0f
004ECE5C  6A 00                     PUSH 0x0
004ECE5E  8B CE                     MOV ECX,ESI
004ECE60  E8 92 5E F1 FF            CALL 0x00402cf7
LAB_004ece65:
004ECE65  B8 01 00 00 00            MOV EAX,0x1
004ECE6A  5E                        POP ESI
004ECE6B  C3                        RET
