CreateAiTact:
00690E60  68 44 01 00 00            PUSH 0x144
00690E65  E8 66 F6 01 00            CALL 0x006b04d0
00690E6A  85 C0                     TEST EAX,EAX
00690E6C  74 07                     JZ 0x00690e75
00690E6E  8B C8                     MOV ECX,EAX
00690E70  E9 35 16 D7 FF            JMP 0x004024aa
LAB_00690e75:
00690E75  33 C0                     XOR EAX,EAX
00690E77  C3                        RET
