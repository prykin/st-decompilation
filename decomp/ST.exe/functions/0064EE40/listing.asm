FUN_0064ee40:
0064EE40  55                        PUSH EBP
0064EE41  8B EC                     MOV EBP,ESP
0064EE43  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EE46  33 C0                     XOR EAX,EAX
0064EE48  B2 08                     MOV DL,0x8
LAB_0064ee4a:
0064EE4A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EE51  75 22                     JNZ 0x0064ee75
0064EE53  40                        INC EAX
0064EE54  83 F8 04                  CMP EAX,0x4
0064EE57  7C F1                     JL 0x0064ee4a
0064EE59  66 83 39 05               CMP word ptr [ECX],0x5
0064EE5D  7D 0E                     JGE 0x0064ee6d
0064EE5F  C7 41 18 00 00 00 00      MOV dword ptr [ECX + 0x18],0x0
LAB_0064ee66:
0064EE66  B8 01 00 00 00            MOV EAX,0x1
0064EE6B  5D                        POP EBP
0064EE6C  C3                        RET
LAB_0064ee6d:
0064EE6D  38 91 D4 00 00 00         CMP byte ptr [ECX + 0xd4],DL
0064EE73  74 F1                     JZ 0x0064ee66
LAB_0064ee75:
0064EE75  33 C0                     XOR EAX,EAX
0064EE77  5D                        POP EBP
0064EE78  C3                        RET
