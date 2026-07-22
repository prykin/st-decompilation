FUN_00589940:
00589940  68 A6 02 00 00            PUSH 0x2a6
00589945  E8 86 6B 12 00            CALL 0x006b04d0
0058994A  85 C0                     TEST EAX,EAX
0058994C  74 07                     JZ 0x00589955
0058994E  8B C8                     MOV ECX,EAX
00589950  E9 DE 9D E7 FF            JMP 0x00403733
LAB_00589955:
00589955  33 C0                     XOR EAX,EAX
00589957  C3                        RET
