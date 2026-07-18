FUN_00757430:
00757430  55                        PUSH EBP
00757431  8B EC                     MOV EBP,ESP
00757433  57                        PUSH EDI
00757434  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00757437  83 C9 FF                  OR ECX,0xffffffff
0075743A  33 C0                     XOR EAX,EAX
0075743C  F2 AE                     SCASB.REPNE ES:EDI
0075743E  F7 D1                     NOT ECX
00757440  49                        DEC ECX
00757441  5F                        POP EDI
00757442  8B C1                     MOV EAX,ECX
00757444  40                        INC EAX
00757445  5D                        POP EBP
00757446  C2 04 00                  RET 0x4
