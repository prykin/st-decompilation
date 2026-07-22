CreateSndUnderAttMeneg:
0061FE30  56                        PUSH ESI
0061FE31  68 0E 01 00 00            PUSH 0x10e
0061FE36  E8 95 06 09 00            CALL 0x006b04d0
0061FE3B  8B F0                     MOV ESI,EAX
0061FE3D  85 F6                     TEST ESI,ESI
0061FE3F  74 21                     JZ 0x0061fe62
0061FE41  8B CE                     MOV ECX,ESI
0061FE43  E8 98 62 0C 00            CALL 0x006e60e0
0061FE48  C7 06 D8 CE 79 00         MOV dword ptr [ESI],0x79ced8
0061FE4E  8B CE                     MOV ECX,ESI
0061FE50  89 35 98 17 81 00         MOV dword ptr [0x00811798],ESI
0061FE56  E8 71 2C DE FF            CALL 0x00402acc
0061FE5B  A1 98 17 81 00            MOV EAX,[0x00811798]
0061FE60  5E                        POP ESI
0061FE61  C3                        RET
LAB_0061fe62:
0061FE62  33 C0                     XOR EAX,EAX
0061FE64  5E                        POP ESI
0061FE65  A3 98 17 81 00            MOV [0x00811798],EAX
0061FE6A  C3                        RET
