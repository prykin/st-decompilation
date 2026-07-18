FUN_0064ec30:
0064EC30  55                        PUSH EBP
0064EC31  8B EC                     MOV EBP,ESP
0064EC33  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EC36  33 C0                     XOR EAX,EAX
0064EC38  B2 08                     MOV DL,0x8
LAB_0064ec3a:
0064EC3A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EC41  75 28                     JNZ 0x0064ec6b
0064EC43  40                        INC EAX
0064EC44  83 F8 04                  CMP EAX,0x4
0064EC47  7C F1                     JL 0x0064ec3a
0064EC49  B8 04 00 00 00            MOV EAX,0x4
0064EC4E  B2 0A                     MOV DL,0xa
LAB_0064ec50:
0064EC50  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EC57  75 12                     JNZ 0x0064ec6b
0064EC59  40                        INC EAX
0064EC5A  83 F8 05                  CMP EAX,0x5
0064EC5D  7C F1                     JL 0x0064ec50
0064EC5F  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
0064EC62  33 C0                     XOR EAX,EAX
0064EC64  85 D2                     TEST EDX,EDX
0064EC66  0F 95 C0                  SETNZ AL
0064EC69  5D                        POP EBP
0064EC6A  C3                        RET
LAB_0064ec6b:
0064EC6B  33 C0                     XOR EAX,EAX
0064EC6D  5D                        POP EBP
0064EC6E  C3                        RET
