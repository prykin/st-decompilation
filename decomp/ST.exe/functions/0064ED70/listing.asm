FUN_0064ed70:
0064ED70  55                        PUSH EBP
0064ED71  8B EC                     MOV EBP,ESP
0064ED73  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064ED76  33 C0                     XOR EAX,EAX
0064ED78  B2 08                     MOV DL,0x8
LAB_0064ed7a:
0064ED7A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ED81  75 28                     JNZ 0x0064edab
0064ED83  40                        INC EAX
0064ED84  83 F8 02                  CMP EAX,0x2
0064ED87  7C F1                     JL 0x0064ed7a
0064ED89  B8 02 00 00 00            MOV EAX,0x2
0064ED8E  B2 0A                     MOV DL,0xa
LAB_0064ed90:
0064ED90  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064ED97  75 12                     JNZ 0x0064edab
0064ED99  40                        INC EAX
0064ED9A  83 F8 03                  CMP EAX,0x3
0064ED9D  7C F1                     JL 0x0064ed90
0064ED9F  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0064EDA2  33 C0                     XOR EAX,EAX
0064EDA4  85 D2                     TEST EDX,EDX
0064EDA6  0F 95 C0                  SETNZ AL
0064EDA9  5D                        POP EBP
0064EDAA  C3                        RET
LAB_0064edab:
0064EDAB  33 C0                     XOR EAX,EAX
0064EDAD  5D                        POP EBP
0064EDAE  C3                        RET
