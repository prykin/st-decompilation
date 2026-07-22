FUN_0058cf60:
0058CF60  68 9B 02 00 00            PUSH 0x29b
0058CF65  E8 66 35 12 00            CALL 0x006b04d0
0058CF6A  85 C0                     TEST EAX,EAX
0058CF6C  74 07                     JZ 0x0058cf75
0058CF6E  8B C8                     MOV ECX,EAX
0058CF70  E9 59 4F E7 FF            JMP 0x00401ece
LAB_0058cf75:
0058CF75  33 C0                     XOR EAX,EAX
0058CF77  C3                        RET
