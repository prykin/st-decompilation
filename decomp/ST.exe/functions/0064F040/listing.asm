FUN_0064f040:
0064F040  55                        PUSH EBP
0064F041  8B EC                     MOV EBP,ESP
0064F043  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0064F046  33 C0                     XOR EAX,EAX
0064F048  B2 08                     MOV DL,0x8
LAB_0064f04a:
0064F04A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
0064F051  75 0D                     JNZ 0x0064f060
0064F053  40                        INC EAX
0064F054  83 F8 02                  CMP EAX,0x2
0064F057  7C F1                     JL 0x0064f04a
0064F059  B8 01 00 00 00            MOV EAX,0x1
0064F05E  5D                        POP EBP
0064F05F  C3                        RET
LAB_0064f060:
0064F060  33 C0                     XOR EAX,EAX
0064F062  5D                        POP EBP
0064F063  C3                        RET
