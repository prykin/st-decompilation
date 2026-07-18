FUN_0070cd90:
0070CD90  55                        PUSH EBP
0070CD91  8B EC                     MOV EBP,ESP
0070CD93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070CD96  56                        PUSH ESI
0070CD97  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0070CD9A  50                        PUSH EAX
0070CD9B  56                        PUSH ESI
0070CD9C  E8 EF 37 02 00            CALL 0x00730590
0070CDA1  83 C4 08                  ADD ESP,0x8
0070CDA4  85 C0                     TEST EAX,EAX
0070CDA6  75 06                     JNZ 0x0070cdae
0070CDA8  83 C8 FF                  OR EAX,0xffffffff
0070CDAB  5E                        POP ESI
0070CDAC  5D                        POP EBP
0070CDAD  C3                        RET
LAB_0070cdae:
0070CDAE  2B C6                     SUB EAX,ESI
0070CDB0  5E                        POP ESI
0070CDB1  F7 D8                     NEG EAX
0070CDB3  1B C0                     SBB EAX,EAX
0070CDB5  5D                        POP EBP
0070CDB6  C3                        RET
