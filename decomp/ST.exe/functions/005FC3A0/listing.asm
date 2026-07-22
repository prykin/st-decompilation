CreateSTContainer:
005FC3A0  56                        PUSH ESI
005FC3A1  68 7B 04 00 00            PUSH 0x47b
005FC3A6  E8 25 41 0B 00            CALL 0x006b04d0
005FC3AB  8B F0                     MOV ESI,EAX
005FC3AD  85 F6                     TEST ESI,ESI
005FC3AF  74 1B                     JZ 0x005fc3cc
005FC3B1  8B CE                     MOV ECX,ESI
005FC3B3  E8 4F 54 E0 FF            CALL 0x00401807
005FC3B8  C7 06 14 C7 79 00         MOV dword ptr [ESI],0x79c714
005FC3BE  C7 86 D5 01 00 00 10 C7 79 00  MOV dword ptr [ESI + 0x1d5],0x79c710
005FC3C8  8B C6                     MOV EAX,ESI
005FC3CA  5E                        POP ESI
005FC3CB  C3                        RET
LAB_005fc3cc:
005FC3CC  33 C0                     XOR EAX,EAX
005FC3CE  5E                        POP ESI
005FC3CF  C3                        RET
