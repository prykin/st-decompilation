FUN_00751ba0:
00751BA0  55                        PUSH EBP
00751BA1  8B EC                     MOV EBP,ESP
00751BA3  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751BA6  56                        PUSH ESI
00751BA7  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00751BAA  8D 45 0C                  LEA EAX,[EBP + 0xc]
00751BAD  50                        PUSH EAX
00751BAE  51                        PUSH ECX
00751BAF  8B 16                     MOV EDX,dword ptr [ESI]
00751BB1  52                        PUSH EDX
00751BB2  E8 09 20 00 00            CALL 0x00753bc0
00751BB7  85 C0                     TEST EAX,EAX
00751BB9  75 1A                     JNZ 0x00751bd5
00751BBB  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00751BBE  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00751BC1  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00751BC4  50                        PUSH EAX
00751BC5  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
00751BC8  51                        PUSH ECX
00751BC9  52                        PUSH EDX
00751BCA  50                        PUSH EAX
00751BCB  E8 90 27 00 00            CALL 0x00754360
00751BD0  5E                        POP ESI
00751BD1  5D                        POP EBP
00751BD2  C2 10 00                  RET 0x10
LAB_00751bd5:
00751BD5  83 E8 FC                  SUB EAX,-0x4
00751BD8  5E                        POP ESI
00751BD9  F7 D8                     NEG EAX
00751BDB  1B C0                     SBB EAX,EAX
00751BDD  83 E0 03                  AND EAX,0x3
00751BE0  83 C0 FC                  ADD EAX,-0x4
00751BE3  5D                        POP EBP
00751BE4  C2 10 00                  RET 0x10
