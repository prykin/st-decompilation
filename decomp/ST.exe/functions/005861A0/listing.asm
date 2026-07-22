FUN_005861a0:
005861A0  68 8A 02 00 00            PUSH 0x28a
005861A5  E8 26 A3 12 00            CALL 0x006b04d0
005861AA  85 C0                     TEST EAX,EAX
005861AC  74 07                     JZ 0x005861b5
005861AE  8B C8                     MOV ECX,EAX
005861B0  E9 52 C0 E7 FF            JMP 0x00402207
LAB_005861b5:
005861B5  33 C0                     XOR EAX,EAX
005861B7  C3                        RET
