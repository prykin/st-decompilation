FUN_006509e0:
006509E0  55                        PUSH EBP
006509E1  8B EC                     MOV EBP,ESP
006509E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006509E6  33 C0                     XOR EAX,EAX
006509E8  B2 08                     MOV DL,0x8
LAB_006509ea:
006509EA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006509F1  75 0D                     JNZ 0x00650a00
006509F3  40                        INC EAX
006509F4  83 F8 02                  CMP EAX,0x2
006509F7  7C F1                     JL 0x006509ea
006509F9  B8 01 00 00 00            MOV EAX,0x1
006509FE  5D                        POP EBP
006509FF  C3                        RET
LAB_00650a00:
00650A00  33 C0                     XOR EAX,EAX
00650A02  5D                        POP EBP
00650A03  C3                        RET
