FUN_00650ad0:
00650AD0  55                        PUSH EBP
00650AD1  8B EC                     MOV EBP,ESP
00650AD3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650AD6  33 C0                     XOR EAX,EAX
00650AD8  B2 08                     MOV DL,0x8
LAB_00650ada:
00650ADA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650AE1  75 0D                     JNZ 0x00650af0
00650AE3  40                        INC EAX
00650AE4  83 F8 04                  CMP EAX,0x4
00650AE7  7C F1                     JL 0x00650ada
00650AE9  B8 01 00 00 00            MOV EAX,0x1
00650AEE  5D                        POP EBP
00650AEF  C3                        RET
LAB_00650af0:
00650AF0  33 C0                     XOR EAX,EAX
00650AF2  5D                        POP EBP
00650AF3  C3                        RET
