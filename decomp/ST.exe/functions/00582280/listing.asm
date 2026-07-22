CreateSTJellyMan:
00582280  68 13 02 00 00            PUSH 0x213
00582285  E8 46 E2 12 00            CALL 0x006b04d0
0058228A  85 C0                     TEST EAX,EAX
0058228C  74 07                     JZ 0x00582295
0058228E  8B C8                     MOV ECX,EAX
00582290  E9 F3 00 E8 FF            JMP 0x00402388
LAB_00582295:
00582295  33 C0                     XOR EAX,EAX
00582297  C3                        RET
