FUN_00495950:
00495950  6A 18                     PUSH 0x18
00495952  E8 79 AB 21 00            CALL 0x006b04d0
00495957  85 C0                     TEST EAX,EAX
00495959  74 0D                     JZ 0x00495968
0049595B  8B C8                     MOV ECX,EAX
0049595D  E8 48 02 F7 FF            CALL 0x00405baa
00495962  A3 84 B2 7F 00            MOV [0x007fb284],EAX
00495967  C3                        RET
LAB_00495968:
00495968  33 C0                     XOR EAX,EAX
0049596A  A3 84 B2 7F 00            MOV [0x007fb284],EAX
0049596F  C3                        RET
