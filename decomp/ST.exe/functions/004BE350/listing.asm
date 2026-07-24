CreateTLOBase:
004BE350  68 23 06 00 00            PUSH 0x623
004BE355  E8 76 21 1F 00            CALL 0x006b04d0
004BE35A  85 C0                     TEST EAX,EAX
004BE35C  74 07                     JZ 0x004be365
004BE35E  8B C8                     MOV ECX,EAX
004BE360  E9 48 4D F4 FF            JMP 0x004030ad
LAB_004be365:
004BE365  33 C0                     XOR EAX,EAX
004BE367  C3                        RET
