FUN_005fd6e0:
005FD6E0  68 43 02 00 00            PUSH 0x243
005FD6E5  E8 E6 2D 0B 00            CALL 0x006b04d0
005FD6EA  85 C0                     TEST EAX,EAX
005FD6EC  74 07                     JZ 0x005fd6f5
005FD6EE  8B C8                     MOV ECX,EAX
005FD6F0  E9 76 50 E0 FF            JMP 0x0040276b
LAB_005fd6f5:
005FD6F5  33 C0                     XOR EAX,EAX
005FD6F7  C3                        RET
