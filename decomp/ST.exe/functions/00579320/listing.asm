CreateSTCrab:
00579320  68 81 02 00 00            PUSH 0x281
00579325  E8 A6 71 13 00            CALL 0x006b04d0
0057932A  85 C0                     TEST EAX,EAX
0057932C  74 07                     JZ 0x00579335
0057932E  8B C8                     MOV ECX,EAX
00579330  E9 A1 C4 E8 FF            JMP 0x004057d6
LAB_00579335:
00579335  33 C0                     XOR EAX,EAX
00579337  C3                        RET
