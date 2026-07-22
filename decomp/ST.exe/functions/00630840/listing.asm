CreateSTManRuin:
00630840  6A 75                     PUSH 0x75
00630842  E8 89 FC 07 00            CALL 0x006b04d0
00630847  85 C0                     TEST EAX,EAX
00630849  74 0D                     JZ 0x00630858
0063084B  8B C8                     MOV ECX,EAX
0063084D  E8 B8 34 DD FF            CALL 0x00403d0a
00630852  A3 B0 17 81 00            MOV [0x008117b0],EAX
00630857  C3                        RET
LAB_00630858:
00630858  33 C0                     XOR EAX,EAX
0063085A  A3 B0 17 81 00            MOV [0x008117b0],EAX
0063085F  C3                        RET
