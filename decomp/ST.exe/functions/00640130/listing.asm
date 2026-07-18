FUN_00640130:
00640130  8B 81 7F 03 00 00         MOV EAX,dword ptr [ECX + 0x37f]
00640136  56                        PUSH ESI
00640137  8D B1 7F 03 00 00         LEA ESI,[ECX + 0x37f]
0064013D  85 C0                     TEST EAX,EAX
0064013F  74 18                     JZ 0x00640159
00640141  8B 00                     MOV EAX,dword ptr [EAX]
00640143  85 C0                     TEST EAX,EAX
00640145  7C 0C                     JL 0x00640153
00640147  8B 89 11 02 00 00         MOV ECX,dword ptr [ECX + 0x211]
0064014D  50                        PUSH EAX
0064014E  E8 4D 8A 0A 00            CALL 0x006e8ba0
LAB_00640153:
00640153  56                        PUSH ESI
00640154  E8 07 AF 06 00            CALL 0x006ab060
LAB_00640159:
00640159  5E                        POP ESI
0064015A  C3                        RET
