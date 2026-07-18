FUN_00754047:
00754047  0A C0                     OR AL,AL
00754049  74 08                     JZ 0x00754053
0075404B  66 8B 45 4C               MOV AX,word ptr [EBP + 0x4c]
0075404F  66 09 45 4E               OR word ptr [EBP + 0x4e],AX
LAB_00754053:
00754053  66 D1 65 4C               SHL word ptr [EBP + 0x4c],0x1
00754057  75 05                     JNZ 0x0075405e
00754059  E8 99 FF FF FF            CALL 0x00753ff7
LAB_0075405e:
0075405E  C3                        RET
