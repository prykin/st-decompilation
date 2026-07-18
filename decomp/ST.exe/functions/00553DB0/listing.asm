FUN_00553db0:
00553DB0  55                        PUSH EBP
00553DB1  8B EC                     MOV EBP,ESP
00553DB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00553DB6  53                        PUSH EBX
00553DB7  85 C0                     TEST EAX,EAX
00553DB9  74 38                     JZ 0x00553df3
00553DBB  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553DBE  33 DB                     XOR EBX,EBX
00553DC0  85 C0                     TEST EAX,EAX
00553DC2  7E 2F                     JLE 0x00553df3
00553DC4  56                        PUSH ESI
00553DC5  57                        PUSH EDI
00553DC6  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
LAB_00553dc9:
00553DC9  33 F6                     XOR ESI,ESI
00553DCB  85 FF                     TEST EDI,EDI
00553DCD  7E 1A                     JLE 0x00553de9
LAB_00553dcf:
00553DCF  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553DD2  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00553DD5  6A 00                     PUSH 0x0
00553DD7  50                        PUSH EAX
00553DD8  57                        PUSH EDI
00553DD9  51                        PUSH ECX
00553DDA  53                        PUSH EBX
00553DDB  56                        PUSH ESI
00553DDC  E8 26 DF EA FF            CALL 0x00401d07
00553DE1  83 C4 18                  ADD ESP,0x18
00553DE4  46                        INC ESI
00553DE5  3B F7                     CMP ESI,EDI
00553DE7  7C E6                     JL 0x00553dcf
LAB_00553de9:
00553DE9  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00553DEC  43                        INC EBX
00553DED  3B D8                     CMP EBX,EAX
00553DEF  7C D8                     JL 0x00553dc9
00553DF1  5F                        POP EDI
00553DF2  5E                        POP ESI
LAB_00553df3:
00553DF3  5B                        POP EBX
00553DF4  5D                        POP EBP
00553DF5  C3                        RET
