CreateSTOctopus:
0058A9B0  68 AD 02 00 00            PUSH 0x2ad
0058A9B5  E8 16 5B 12 00            CALL 0x006b04d0
0058A9BA  85 C0                     TEST EAX,EAX
0058A9BC  74 07                     JZ 0x0058a9c5
0058A9BE  8B C8                     MOV ECX,EAX
0058A9C0  E9 5A B0 E7 FF            JMP 0x00405a1f
LAB_0058a9c5:
0058A9C5  33 C0                     XOR EAX,EAX
0058A9C7  C3                        RET
