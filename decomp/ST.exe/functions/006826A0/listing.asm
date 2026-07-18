FUN_006826a0:
006826A0  55                        PUSH EBP
006826A1  8B EC                     MOV EBP,ESP
006826A3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006826A6  8B C1                     MOV EAX,ECX
006826A8  83 E8 1C                  SUB EAX,0x1c
006826AB  74 33                     JZ 0x006826e0
006826AD  48                        DEC EAX
006826AE  74 13                     JZ 0x006826c3
006826B0  51                        PUSH ECX
006826B1  E8 25 31 D8 FF            CALL 0x004057db
006826B6  50                        PUSH EAX
006826B7  6A 93                     PUSH -0x6d
006826B9  E8 53 2D D8 FF            CALL 0x00405411
006826BE  83 C4 08                  ADD ESP,0x8
006826C1  5D                        POP EBP
006826C2  C3                        RET
LAB_006826c3:
006826C3  A1 18 76 80 00            MOV EAX,[0x00807618]
006826C8  50                        PUSH EAX
006826C9  68 5D 1B 00 00            PUSH 0x1b5d
006826CE  E8 6D DA 02 00            CALL 0x006b0140
006826D3  50                        PUSH EAX
006826D4  6A 93                     PUSH -0x6d
006826D6  E8 36 2D D8 FF            CALL 0x00405411
006826DB  83 C4 08                  ADD ESP,0x8
006826DE  5D                        POP EBP
006826DF  C3                        RET
LAB_006826e0:
006826E0  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
006826E6  51                        PUSH ECX
006826E7  68 5E 1B 00 00            PUSH 0x1b5e
006826EC  E8 4F DA 02 00            CALL 0x006b0140
006826F1  50                        PUSH EAX
006826F2  6A 93                     PUSH -0x6d
006826F4  E8 18 2D D8 FF            CALL 0x00405411
006826F9  83 C4 08                  ADD ESP,0x8
006826FC  5D                        POP EBP
006826FD  C3                        RET
