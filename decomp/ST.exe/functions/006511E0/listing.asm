FUN_006511e0:
006511E0  55                        PUSH EBP
006511E1  8B EC                     MOV EBP,ESP
006511E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006511E6  33 C0                     XOR EAX,EAX
006511E8  B2 08                     MOV DL,0x8
LAB_006511ea:
006511EA  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
006511F1  75 23                     JNZ 0x00651216
006511F3  40                        INC EAX
006511F4  83 F8 03                  CMP EAX,0x3
006511F7  7C F1                     JL 0x006511ea
006511F9  B8 03 00 00 00            MOV EAX,0x3
006511FE  B2 0A                     MOV DL,0xa
LAB_00651200:
00651200  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00651207  75 0D                     JNZ 0x00651216
00651209  40                        INC EAX
0065120A  83 F8 04                  CMP EAX,0x4
0065120D  7C F1                     JL 0x00651200
0065120F  8B 41 14                  MOV EAX,dword ptr [ECX + 0x14]
00651212  85 C0                     TEST EAX,EAX
00651214  75 04                     JNZ 0x0065121a
LAB_00651216:
00651216  33 C0                     XOR EAX,EAX
00651218  5D                        POP EBP
00651219  C3                        RET
LAB_0065121a:
0065121A  8B 51 10                  MOV EDX,dword ptr [ECX + 0x10]
0065121D  33 C0                     XOR EAX,EAX
0065121F  85 D2                     TEST EDX,EDX
00651221  0F 9D C0                  SETGE AL
00651224  5D                        POP EBP
00651225  C3                        RET
