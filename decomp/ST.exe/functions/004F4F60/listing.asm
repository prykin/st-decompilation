FUN_004f4f60:
004F4F60  68 EE 0D 00 00            PUSH 0xdee
004F4F65  E8 66 B5 1B 00            CALL 0x006b04d0
004F4F6A  85 C0                     TEST EAX,EAX
004F4F6C  74 07                     JZ 0x004f4f75
004F4F6E  8B C8                     MOV ECX,EAX
004F4F70  E9 2F DB F0 FF            JMP 0x00402aa4
LAB_004f4f75:
004F4F75  33 C0                     XOR EAX,EAX
004F4F77  C3                        RET
