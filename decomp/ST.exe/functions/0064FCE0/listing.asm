FUN_0064fce0:
0064FCE0  55                        PUSH EBP
0064FCE1  8B EC                     MOV EBP,ESP
0064FCE3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064FCE6  33 C0                     XOR EAX,EAX
LAB_0064fce8:
0064FCE8  80 BC 01 D0 00 00 00 08   CMP byte ptr [ECX + EAX*0x1 + 0xd0],0x8
0064FCF0  75 5C                     JNZ 0x0064fd4e
0064FCF2  40                        INC EAX
0064FCF3  83 F8 05                  CMP EAX,0x5
0064FCF6  7C F0                     JL 0x0064fce8
0064FCF8  66 8B 01                  MOV AX,word ptr [ECX]
0064FCFB  B2 0A                     MOV DL,0xa
0064FCFD  66 3D 06 00               CMP AX,0x6
0064FD01  7D 16                     JGE 0x0064fd19
0064FD03  C7 41 1C 00 00 00 00      MOV dword ptr [ECX + 0x1c],0x0
LAB_0064fd0a:
0064FD0A  66 3D 07 00               CMP AX,0x7
0064FD0E  7D 15                     JGE 0x0064fd25
0064FD10  C7 41 20 00 00 00 00      MOV dword ptr [ECX + 0x20],0x0
0064FD17  EB 18                     JMP 0x0064fd31
LAB_0064fd19:
0064FD19  38 91 D5 00 00 00         CMP byte ptr [ECX + 0xd5],DL
0064FD1F  74 E9                     JZ 0x0064fd0a
0064FD21  33 C0                     XOR EAX,EAX
0064FD23  5D                        POP EBP
0064FD24  C3                        RET
LAB_0064fd25:
0064FD25  38 91 D6 00 00 00         CMP byte ptr [ECX + 0xd6],DL
0064FD2B  74 04                     JZ 0x0064fd31
0064FD2D  33 C0                     XOR EAX,EAX
0064FD2F  5D                        POP EBP
0064FD30  C3                        RET
LAB_0064fd31:
0064FD31  66 3D 08 00               CMP AX,0x8
0064FD35  7D 0E                     JGE 0x0064fd45
0064FD37  C7 41 24 01 00 00 00      MOV dword ptr [ECX + 0x24],0x1
LAB_0064fd3e:
0064FD3E  B8 01 00 00 00            MOV EAX,0x1
0064FD43  5D                        POP EBP
0064FD44  C3                        RET
LAB_0064fd45:
0064FD45  80 B9 D7 00 00 00 08      CMP byte ptr [ECX + 0xd7],0x8
0064FD4C  74 F0                     JZ 0x0064fd3e
LAB_0064fd4e:
0064FD4E  33 C0                     XOR EAX,EAX
0064FD50  5D                        POP EBP
0064FD51  C3                        RET
