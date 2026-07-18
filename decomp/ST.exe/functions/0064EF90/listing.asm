FUN_0064ef90:
0064EF90  55                        PUSH EBP
0064EF91  8B EC                     MOV EBP,ESP
0064EF93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EF96  33 C0                     XOR EAX,EAX
0064EF98  B2 08                     MOV DL,0x8
LAB_0064ef9a:
0064EF9A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EFA1  75 36                     JNZ 0x0064efd9
0064EFA3  40                        INC EAX
0064EFA4  83 F8 03                  CMP EAX,0x3
0064EFA7  7C F1                     JL 0x0064ef9a
0064EFA9  B8 03 00 00 00            MOV EAX,0x3
0064EFAE  B2 0A                     MOV DL,0xa
LAB_0064efb0:
0064EFB0  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EFB7  75 20                     JNZ 0x0064efd9
0064EFB9  40                        INC EAX
0064EFBA  83 F8 04                  CMP EAX,0x4
0064EFBD  7C F1                     JL 0x0064efb0
0064EFBF  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064EFC2  85 C0                     TEST EAX,EAX
0064EFC4  7C 13                     JL 0x0064efd9
0064EFC6  3D 00 01 00 00            CMP EAX,0x100
0064EFCB  7D 0C                     JGE 0x0064efd9
0064EFCD  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
0064EFD0  33 C0                     XOR EAX,EAX
0064EFD2  85 D2                     TEST EDX,EDX
0064EFD4  0F 95 C0                  SETNZ AL
0064EFD7  5D                        POP EBP
0064EFD8  C3                        RET
LAB_0064efd9:
0064EFD9  33 C0                     XOR EAX,EAX
0064EFDB  5D                        POP EBP
0064EFDC  C3                        RET
