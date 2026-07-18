FUN_0064fb00:
0064FB00  55                        PUSH EBP
0064FB01  8B EC                     MOV EBP,ESP
0064FB03  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064FB06  33 C0                     XOR EAX,EAX
0064FB08  BA 08 00 00 00            MOV EDX,0x8
LAB_0064fb0d:
0064FB0D  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064FB14  75 3E                     JNZ 0x0064fb54
0064FB16  40                        INC EAX
0064FB17  83 F8 07                  CMP EAX,0x7
0064FB1A  7C F1                     JL 0x0064fb0d
0064FB1C  66 8B 01                  MOV AX,word ptr [ECX]
0064FB1F  66 3B C2                  CMP AX,DX
0064FB22  7D 1B                     JGE 0x0064fb3f
0064FB24  C7 41 24 00 00 00 00      MOV dword ptr [ECX + 0x24],0x0
LAB_0064fb2b:
0064FB2B  66 3D 09 00               CMP AX,0x9
0064FB2F  7D 1B                     JGE 0x0064fb4c
0064FB31  C7 41 28 01 00 00 00      MOV dword ptr [ECX + 0x28],0x1
0064FB38  B8 01 00 00 00            MOV EAX,0x1
0064FB3D  5D                        POP EBP
0064FB3E  C3                        RET
LAB_0064fb3f:
0064FB3F  80 B9 D7 00 00 00 0A      CMP byte ptr [ECX + 0xd7],0xa
0064FB46  74 E3                     JZ 0x0064fb2b
0064FB48  33 C0                     XOR EAX,EAX
0064FB4A  5D                        POP EBP
0064FB4B  C3                        RET
LAB_0064fb4c:
0064FB4C  38 91 D8 00 00 00         CMP byte ptr [ECX + 0xd8],DL
0064FB52  74 04                     JZ 0x0064fb58
LAB_0064fb54:
0064FB54  33 C0                     XOR EAX,EAX
0064FB56  5D                        POP EBP
0064FB57  C3                        RET
LAB_0064fb58:
0064FB58  B8 01 00 00 00            MOV EAX,0x1
0064FB5D  5D                        POP EBP
0064FB5E  C3                        RET
