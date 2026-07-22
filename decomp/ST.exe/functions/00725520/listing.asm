CreateTrackbar:
00725520  56                        PUSH ESI
00725521  68 9C 01 00 00            PUSH 0x19c
00725526  E8 A5 AF F8 FF            CALL 0x006b04d0
0072552B  8B F0                     MOV ESI,EAX
0072552D  85 F6                     TEST ESI,ESI
0072552F  74 1B                     JZ 0x0072554c
00725531  8B CE                     MOV ECX,ESI
00725533  E8 C8 61 00 00            CALL 0x0072b700
00725538  C7 06 CC E2 79 00         MOV dword ptr [ESI],0x79e2cc
0072553E  C7 86 34 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x134],0x0
00725548  8B C6                     MOV EAX,ESI
0072554A  5E                        POP ESI
0072554B  C3                        RET
LAB_0072554c:
0072554C  33 C0                     XOR EAX,EAX
0072554E  5E                        POP ESI
0072554F  C3                        RET
