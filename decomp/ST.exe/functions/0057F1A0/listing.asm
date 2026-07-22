CreateSTDcResourc:
0057F1A0  68 77 02 00 00            PUSH 0x277
0057F1A5  E8 26 13 13 00            CALL 0x006b04d0
0057F1AA  85 C0                     TEST EAX,EAX
0057F1AC  74 07                     JZ 0x0057f1b5
0057F1AE  8B C8                     MOV ECX,EAX
0057F1B0  E9 4F 65 E8 FF            JMP 0x00405704
LAB_0057f1b5:
0057F1B5  33 C0                     XOR EAX,EAX
0057F1B7  C3                        RET
