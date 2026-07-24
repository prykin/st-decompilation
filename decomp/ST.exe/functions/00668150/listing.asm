CreateAiFlt:
00668150  68 88 02 00 00            PUSH 0x288
00668155  E8 76 83 04 00            CALL 0x006b04d0
0066815A  85 C0                     TEST EAX,EAX
0066815C  74 07                     JZ 0x00668165
0066815E  8B C8                     MOV ECX,EAX
00668160  E9 40 C6 D9 FF            JMP 0x004047a5
LAB_00668165:
00668165  33 C0                     XOR EAX,EAX
00668167  C3                        RET
