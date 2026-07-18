FUN_00759d90:
00759D90  55                        PUSH EBP
00759D91  8B EC                     MOV EBP,ESP
00759D93  56                        PUSH ESI
00759D94  57                        PUSH EDI
00759D95  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00759D98  BE 01 00 00 00            MOV ESI,0x1
LAB_00759d9d:
00759D9D  56                        PUSH ESI
00759D9E  57                        PUSH EDI
00759D9F  E8 FC FE FF FF            CALL 0x00759ca0
00759DA4  4E                        DEC ESI
00759DA5  79 F6                     JNS 0x00759d9d
00759DA7  8B 07                     MOV EAX,dword ptr [EDI]
00759DA9  6A 50                     PUSH 0x50
00759DAB  50                        PUSH EAX
00759DAC  57                        PUSH EDI
00759DAD  E8 4E 65 00 00            CALL 0x00760300
00759DB2  57                        PUSH EDI
00759DB3  C7 07 00 00 00 00         MOV dword ptr [EDI],0x0
00759DB9  E8 E2 65 00 00            CALL 0x007603a0
00759DBE  5F                        POP EDI
00759DBF  5E                        POP ESI
00759DC0  5D                        POP EBP
00759DC1  C2 04 00                  RET 0x4
