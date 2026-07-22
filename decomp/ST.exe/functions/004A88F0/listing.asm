FUN_004a88f0:
004A88F0  6A 20                     PUSH 0x20
004A88F2  E8 D9 7B 20 00            CALL 0x006b04d0
004A88F7  85 C0                     TEST EAX,EAX
004A88F9  74 0D                     JZ 0x004a8908
004A88FB  8B C8                     MOV ECX,EAX
004A88FD  E8 A5 94 F5 FF            CALL 0x00401da7
004A8902  A3 A0 B2 7F 00            MOV [0x007fb2a0],EAX
004A8907  C3                        RET
LAB_004a8908:
004A8908  33 C0                     XOR EAX,EAX
004A890A  A3 A0 B2 7F 00            MOV [0x007fb2a0],EAX
004A890F  C3                        RET
