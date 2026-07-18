FUN_006507e0:
006507E0  55                        PUSH EBP
006507E1  8B EC                     MOV EBP,ESP
006507E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006507E6  33 C0                     XOR EAX,EAX
006507E8  B2 08                     MOV DL,0x8
LAB_006507ea:
006507EA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006507F1  75 0D                     JNZ 0x00650800
006507F3  40                        INC EAX
006507F4  83 F8 02                  CMP EAX,0x2
006507F7  7C F1                     JL 0x006507ea
006507F9  B8 01 00 00 00            MOV EAX,0x1
006507FE  5D                        POP EBP
006507FF  C3                        RET
LAB_00650800:
00650800  33 C0                     XOR EAX,EAX
00650802  5D                        POP EBP
00650803  C3                        RET
