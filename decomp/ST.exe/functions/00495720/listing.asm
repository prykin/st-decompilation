FUN_00495720:
00495720  6A 2C                     PUSH 0x2c
00495722  E8 A9 AD 21 00            CALL 0x006b04d0
00495727  85 C0                     TEST EAX,EAX
00495729  74 0D                     JZ 0x00495738
0049572B  8B C8                     MOV ECX,EAX
0049572D  E8 6E C3 F6 FF            CALL 0x00401aa0
00495732  A3 24 B2 7F 00            MOV [0x007fb224],EAX
00495737  C3                        RET
LAB_00495738:
00495738  33 C0                     XOR EAX,EAX
0049573A  A3 24 B2 7F 00            MOV [0x007fb224],EAX
0049573F  C3                        RET
