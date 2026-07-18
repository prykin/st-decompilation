FUN_0074d204:
0074D204  8B 01                     MOV EAX,dword ptr [ECX]
0074D206  85 C0                     TEST EAX,EAX
0074D208  74 07                     JZ 0x0074d211
0074D20A  50                        PUSH EAX
0074D20B  FF 15 C8 BB 85 00         CALL dword ptr [0x0085bbc8]
LAB_0074d211:
0074D211  C3                        RET
