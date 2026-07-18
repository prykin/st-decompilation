FUN_0064ef10:
0064EF10  55                        PUSH EBP
0064EF11  8B EC                     MOV EBP,ESP
0064EF13  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064EF16  33 C0                     XOR EAX,EAX
0064EF18  B2 08                     MOV DL,0x8
LAB_0064ef1a:
0064EF1A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064EF21  75 19                     JNZ 0x0064ef3c
0064EF23  40                        INC EAX
0064EF24  83 F8 03                  CMP EAX,0x3
0064EF27  7C F1                     JL 0x0064ef1a
0064EF29  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
0064EF2C  85 C0                     TEST EAX,EAX
0064EF2E  7C 0C                     JL 0x0064ef3c
0064EF30  83 F8 02                  CMP EAX,0x2
0064EF33  7F 07                     JG 0x0064ef3c
0064EF35  B8 01 00 00 00            MOV EAX,0x1
0064EF3A  5D                        POP EBP
0064EF3B  C3                        RET
LAB_0064ef3c:
0064EF3C  33 C0                     XOR EAX,EAX
0064EF3E  5D                        POP EBP
0064EF3F  C3                        RET
