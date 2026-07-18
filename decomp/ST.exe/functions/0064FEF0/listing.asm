FUN_0064fef0:
0064FEF0  55                        PUSH EBP
0064FEF1  8B EC                     MOV EBP,ESP
0064FEF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064FEF6  33 C0                     XOR EAX,EAX
0064FEF8  B2 08                     MOV DL,0x8
LAB_0064fefa:
0064FEFA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064FF01  75 3E                     JNZ 0x0064ff41
0064FF03  40                        INC EAX
0064FF04  83 F8 04                  CMP EAX,0x4
0064FF07  7C F1                     JL 0x0064fefa
0064FF09  66 8B 01                  MOV AX,word ptr [ECX]
0064FF0C  66 3D 05 00               CMP AX,0x5
0064FF10  7D 1B                     JGE 0x0064ff2d
0064FF12  C7 41 18 10 27 00 00      MOV dword ptr [ECX + 0x18],0x2710
LAB_0064ff19:
0064FF19  66 3D 06 00               CMP AX,0x6
0064FF1D  7D 1A                     JGE 0x0064ff39
0064FF1F  C7 41 1C 01 00 00 00      MOV dword ptr [ECX + 0x1c],0x1
0064FF26  B8 01 00 00 00            MOV EAX,0x1
0064FF2B  5D                        POP EBP
0064FF2C  C3                        RET
LAB_0064ff2d:
0064FF2D  38 91 D4 00 00 00         CMP byte ptr [ECX + 0xd4],DL
0064FF33  74 E4                     JZ 0x0064ff19
0064FF35  33 C0                     XOR EAX,EAX
0064FF37  5D                        POP EBP
0064FF38  C3                        RET
LAB_0064ff39:
0064FF39  38 91 D5 00 00 00         CMP byte ptr [ECX + 0xd5],DL
0064FF3F  74 04                     JZ 0x0064ff45
LAB_0064ff41:
0064FF41  33 C0                     XOR EAX,EAX
0064FF43  5D                        POP EBP
0064FF44  C3                        RET
LAB_0064ff45:
0064FF45  B8 01 00 00 00            MOV EAX,0x1
0064FF4A  5D                        POP EBP
0064FF4B  C3                        RET
