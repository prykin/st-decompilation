FUN_007242d0:
007242D0  56                        PUSH ESI
007242D1  6A 78                     PUSH 0x78
007242D3  E8 F8 C1 F8 FF            CALL 0x006b04d0
007242D8  8B F0                     MOV ESI,EAX
007242DA  85 F6                     TEST ESI,ESI
007242DC  74 1F                     JZ 0x007242fd
007242DE  8B CE                     MOV ECX,ESI
007242E0  E8 CB 1C FC FF            CALL 0x006e5fb0
007242E5  C7 06 C0 E2 79 00         MOV dword ptr [ESI],0x79e2c0
007242EB  C7 46 64 00 00 00 00      MOV dword ptr [ESI + 0x64],0x0
007242F2  C7 46 18 00 00 00 00      MOV dword ptr [ESI + 0x18],0x0
007242F9  8B C6                     MOV EAX,ESI
007242FB  5E                        POP ESI
007242FC  C3                        RET
LAB_007242fd:
007242FD  33 C0                     XOR EAX,EAX
007242FF  5E                        POP ESI
00724300  C3                        RET
