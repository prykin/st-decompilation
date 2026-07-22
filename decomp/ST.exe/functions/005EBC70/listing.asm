CreateSTArtiafact:
005EBC70  56                        PUSH ESI
005EBC71  68 77 04 00 00            PUSH 0x477
005EBC76  E8 55 48 0C 00            CALL 0x006b04d0
005EBC7B  8B F0                     MOV ESI,EAX
005EBC7D  85 F6                     TEST ESI,ESI
005EBC7F  74 1B                     JZ 0x005ebc9c
005EBC81  8B CE                     MOV ECX,ESI
005EBC83  E8 7F 5B E1 FF            CALL 0x00401807
005EBC88  C7 06 60 C2 79 00         MOV dword ptr [ESI],0x79c260
005EBC8E  C7 86 D5 01 00 00 5C C2 79 00  MOV dword ptr [ESI + 0x1d5],0x79c25c
005EBC98  8B C6                     MOV EAX,ESI
005EBC9A  5E                        POP ESI
005EBC9B  C3                        RET
LAB_005ebc9c:
005EBC9C  33 C0                     XOR EAX,EAX
005EBC9E  5E                        POP ESI
005EBC9F  C3                        RET
