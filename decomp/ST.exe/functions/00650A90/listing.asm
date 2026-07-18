FUN_00650a90:
00650A90  55                        PUSH EBP
00650A91  8B EC                     MOV EBP,ESP
00650A93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650A96  33 C0                     XOR EAX,EAX
00650A98  B2 08                     MOV DL,0x8
LAB_00650a9a:
00650A9A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650AA1  75 0D                     JNZ 0x00650ab0
00650AA3  40                        INC EAX
00650AA4  83 F8 02                  CMP EAX,0x2
00650AA7  7C F1                     JL 0x00650a9a
00650AA9  B8 01 00 00 00            MOV EAX,0x1
00650AAE  5D                        POP EBP
00650AAF  C3                        RET
LAB_00650ab0:
00650AB0  33 C0                     XOR EAX,EAX
00650AB2  5D                        POP EBP
00650AB3  C3                        RET
