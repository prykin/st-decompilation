FUN_0056a4d0:
0056A4D0  8B 81 07 0E 00 00         MOV EAX,dword ptr [ECX + 0xe07]
0056A4D6  85 C0                     TEST EAX,EAX
0056A4D8  7D 03                     JGE 0x0056a4dd
0056A4DA  33 C0                     XOR EAX,EAX
0056A4DC  C3                        RET
LAB_0056a4dd:
0056A4DD  50                        PUSH EAX
0056A4DE  E8 AD 7A 15 00            CALL 0x006c1f90
0056A4E3  C3                        RET
