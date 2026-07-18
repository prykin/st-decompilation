FUN_00650370:
00650370  55                        PUSH EBP
00650371  8B EC                     MOV EBP,ESP
00650373  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00650376  33 C0                     XOR EAX,EAX
00650378  B2 0A                     MOV DL,0xa
LAB_0065037a:
0065037A  38 94 01 D0 00 00 00      CMP byte ptr [ECX + EAX*0x1 + 0xd0],DL
00650381  75 0D                     JNZ 0x00650390
00650383  40                        INC EAX
00650384  83 F8 02                  CMP EAX,0x2
00650387  7C F1                     JL 0x0065037a
00650389  B8 01 00 00 00            MOV EAX,0x1
0065038E  5D                        POP EBP
0065038F  C3                        RET
LAB_00650390:
00650390  33 C0                     XOR EAX,EAX
00650392  5D                        POP EBP
00650393  C3                        RET
