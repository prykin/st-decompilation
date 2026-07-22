CreateSTShark:
0058E410  68 8F 02 00 00            PUSH 0x28f
0058E415  E8 B6 20 12 00            CALL 0x006b04d0
0058E41A  85 C0                     TEST EAX,EAX
0058E41C  74 07                     JZ 0x0058e425
0058E41E  8B C8                     MOV ECX,EAX
0058E420  E9 BD 58 E7 FF            JMP 0x00403ce2
LAB_0058e425:
0058E425  33 C0                     XOR EAX,EAX
0058E427  C3                        RET
