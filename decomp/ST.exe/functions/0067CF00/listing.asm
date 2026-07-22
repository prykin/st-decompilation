CreateAiPlr:
0067CF00  68 02 07 00 00            PUSH 0x702
0067CF05  E8 C6 35 03 00            CALL 0x006b04d0
0067CF0A  85 C0                     TEST EAX,EAX
0067CF0C  74 07                     JZ 0x0067cf15
0067CF0E  8B C8                     MOV ECX,EAX
0067CF10  E9 CB 6A D8 FF            JMP 0x004039e0
LAB_0067cf15:
0067CF15  33 C0                     XOR EAX,EAX
0067CF17  C3                        RET
