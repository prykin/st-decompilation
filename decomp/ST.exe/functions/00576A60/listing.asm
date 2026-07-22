CreateSTAlga:
00576A60  56                        PUSH ESI
00576A61  6A 4C                     PUSH 0x4c
00576A63  E8 68 9A 13 00            CALL 0x006b04d0
00576A68  8B F0                     MOV ESI,EAX
00576A6A  85 F6                     TEST ESI,ESI
00576A6C  74 11                     JZ 0x00576a7f
00576A6E  8B CE                     MOV ECX,ESI
00576A70  E8 6B F6 16 00            CALL 0x006e60e0
00576A75  C7 06 88 B1 79 00         MOV dword ptr [ESI],0x79b188
00576A7B  8B C6                     MOV EAX,ESI
00576A7D  5E                        POP ESI
00576A7E  C3                        RET
LAB_00576a7f:
00576A7F  33 C0                     XOR EAX,EAX
00576A81  5E                        POP ESI
00576A82  C3                        RET
