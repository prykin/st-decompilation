FUN_00751100:
00751100  55                        PUSH EBP
00751101  8B EC                     MOV EBP,ESP
00751103  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00751106  56                        PUSH ESI
00751107  57                        PUSH EDI
00751108  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0075110B  8D 45 0C                  LEA EAX,[EBP + 0xc]
0075110E  8B 17                     MOV EDX,dword ptr [EDI]
00751110  50                        PUSH EAX
00751111  51                        PUSH ECX
00751112  52                        PUSH EDX
00751113  E8 88 2D 00 00            CALL 0x00753ea0
00751118  8B F0                     MOV ESI,EAX
0075111A  85 F6                     TEST ESI,ESI
0075111C  75 11                     JNZ 0x0075112f
0075111E  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00751121  85 C0                     TEST EAX,EAX
00751123  74 0A                     JZ 0x0075112f
00751125  50                        PUSH EAX
00751126  8B 47 04                  MOV EAX,dword ptr [EDI + 0x4]
00751129  50                        PUSH EAX
0075112A  E8 B1 2B 00 00            CALL 0x00753ce0
LAB_0075112f:
0075112F  8B C6                     MOV EAX,ESI
00751131  5F                        POP EDI
00751132  5E                        POP ESI
00751133  5D                        POP EBP
00751134  C2 08 00                  RET 0x8
