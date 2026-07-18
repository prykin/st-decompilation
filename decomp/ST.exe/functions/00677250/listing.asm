FUN_00677250:
00677250  55                        PUSH EBP
00677251  8B EC                     MOV EBP,ESP
00677253  56                        PUSH ESI
00677254  8B 75 14                  MOV ESI,dword ptr [EBP + 0x14]
00677257  85 F6                     TEST ESI,ESI
00677259  74 16                     JZ 0x00677271
0067725B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067725E  E8 3C E5 D8 FF            CALL 0x0040579f
00677263  A8 08                     TEST AL,0x8
00677265  75 0A                     JNZ 0x00677271
00677267  8D 45 0C                  LEA EAX,[EBP + 0xc]
0067726A  50                        PUSH EAX
0067726B  56                        PUSH ESI
0067726C  E8 4F 6F 03 00            CALL 0x006ae1c0
LAB_00677271:
00677271  33 C0                     XOR EAX,EAX
00677273  5E                        POP ESI
00677274  5D                        POP EBP
00677275  C3                        RET
