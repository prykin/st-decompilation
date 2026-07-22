FUN_00583e00:
00583E00  68 94 02 00 00            PUSH 0x294
00583E05  E8 C6 C6 12 00            CALL 0x006b04d0
00583E0A  85 C0                     TEST EAX,EAX
00583E0C  74 07                     JZ 0x00583e15
00583E0E  8B C8                     MOV ECX,EAX
00583E10  E9 18 18 E8 FF            JMP 0x0040562d
LAB_00583e15:
00583E15  33 C0                     XOR EAX,EAX
00583E17  C3                        RET
