FUN_00751140:
00751140  55                        PUSH EBP
00751141  8B EC                     MOV EBP,ESP
00751143  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00751146  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00751149  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0075114C  50                        PUSH EAX
0075114D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00751150  51                        PUSH ECX
00751151  6A 00                     PUSH 0x0
00751153  52                        PUSH EDX
00751154  50                        PUSH EAX
00751155  6A 00                     PUSH 0x0
00751157  E8 B4 2D 00 00            CALL 0x00753f10
0075115C  83 C4 18                  ADD ESP,0x18
0075115F  5D                        POP EBP
00751160  C2 10 00                  RET 0x10
