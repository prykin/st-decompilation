CreateRadio:
0071E6D0  6A 68                     PUSH 0x68
0071E6D2  E8 F9 1D F9 FF            CALL 0x006b04d0
0071E6D7  85 C0                     TEST EAX,EAX
0071E6D9  74 07                     JZ 0x0071e6e2
0071E6DB  8B C8                     MOV ECX,EAX
0071E6DD  E9 5E F9 FF FF            JMP 0x0071e040
LAB_0071e6e2:
0071E6E2  33 C0                     XOR EAX,EAX
0071E6E4  C3                        RET
