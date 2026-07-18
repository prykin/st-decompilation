FUN_00553840:
00553840  55                        PUSH EBP
00553841  8B EC                     MOV EBP,ESP
00553843  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00553847  66 85 C9                  TEST CX,CX
0055384A  75 06                     JNZ 0x00553852
0055384C  66 B8 0F 00               MOV AX,0xf
00553850  5D                        POP EBP
00553851  C3                        RET
LAB_00553852:
00553852  33 C0                     XOR EAX,EAX
LAB_00553854:
00553854  0F BF D0                  MOVSX EDX,AX
00553857  66 3B 0C 55 84 88 7C 00   CMP CX,word ptr [EDX*0x2 + 0x7c8884]
0055385F  74 0B                     JZ 0x0055386c
00553861  40                        INC EAX
00553862  66 3D 0F 00               CMP AX,0xf
00553866  7C EC                     JL 0x00553854
00553868  66 0D FF FF               OR AX,0xffff
LAB_0055386c:
0055386C  5D                        POP EBP
0055386D  C3                        RET
