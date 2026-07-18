FUN_005537d0:
005537D0  55                        PUSH EBP
005537D1  8B EC                     MOV EBP,ESP
005537D3  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
005537D7  66 85 C9                  TEST CX,CX
005537DA  75 06                     JNZ 0x005537e2
005537DC  66 B8 0F 00               MOV AX,0xf
005537E0  5D                        POP EBP
005537E1  C3                        RET
LAB_005537e2:
005537E2  33 C0                     XOR EAX,EAX
LAB_005537e4:
005537E4  0F BF D0                  MOVSX EDX,AX
005537E7  66 3B 0C 55 84 88 7C 00   CMP CX,word ptr [EDX*0x2 + 0x7c8884]
005537EF  74 27                     JZ 0x00553818
005537F1  40                        INC EAX
005537F2  66 3D 0F 00               CMP AX,0xf
005537F6  7C EC                     JL 0x005537e4
005537F8  33 C0                     XOR EAX,EAX
LAB_005537fa:
005537FA  0F BF D0                  MOVSX EDX,AX
005537FD  66 8B 14 55 84 88 7C 00   MOV DX,word ptr [EDX*0x2 + 0x7c8884]
00553805  66 33 D1                  XOR DX,CX
00553808  F6 C6 0F                  TEST DH,0xf
0055380B  74 0B                     JZ 0x00553818
0055380D  40                        INC EAX
0055380E  66 3D 0F 00               CMP AX,0xf
00553812  7C E6                     JL 0x005537fa
00553814  66 0D FF FF               OR AX,0xffff
LAB_00553818:
00553818  5D                        POP EBP
00553819  C3                        RET
