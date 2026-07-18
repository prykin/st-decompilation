FUN_00491980:
00491980  56                        PUSH ESI
00491981  8B F1                     MOV ESI,ECX
00491983  E8 54 15 F7 FF            CALL 0x00402edc
00491988  83 F8 14                  CMP EAX,0x14
0049198B  74 14                     JZ 0x004919a1
0049198D  6A 14                     PUSH 0x14
0049198F  8B CE                     MOV ECX,ESI
00491991  E8 63 34 F7 FF            CALL 0x00404df9
00491996  85 C0                     TEST EAX,EAX
00491998  75 07                     JNZ 0x004919a1
0049199A  B8 01 00 00 00            MOV EAX,0x1
0049199F  5E                        POP ESI
004919A0  C3                        RET
LAB_004919a1:
004919A1  33 C0                     XOR EAX,EAX
004919A3  5E                        POP ESI
004919A4  C3                        RET
