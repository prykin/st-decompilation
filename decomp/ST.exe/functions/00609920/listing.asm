FUN_00609920:
00609920  68 58 02 00 00            PUSH 0x258
00609925  E8 A6 6B 0A 00            CALL 0x006b04d0
0060992A  85 C0                     TEST EAX,EAX
0060992C  74 07                     JZ 0x00609935
0060992E  8B C8                     MOV ECX,EAX
00609930  E9 89 81 DF FF            JMP 0x00401abe
LAB_00609935:
00609935  33 C0                     XOR EAX,EAX
00609937  C3                        RET
