FUN_00724330:
00724330  55                        PUSH EBP
00724331  8B EC                     MOV EBP,ESP
00724333  8B 51 58                  MOV EDX,dword ptr [ECX + 0x58]
00724336  56                        PUSH ESI
00724337  85 D2                     TEST EDX,EDX
00724339  B8 01 00 00 00            MOV EAX,0x1
0072433E  74 12                     JZ 0x00724352
00724340  8B 71 5C                  MOV ESI,dword ptr [ECX + 0x5c]
00724343  85 F6                     TEST ESI,ESI
00724345  74 0B                     JZ 0x00724352
00724347  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0072434A  99                        CDQ
0072434B  F7 FE                     IDIV ESI
0072434D  0F AF 41 60               IMUL EAX,dword ptr [ECX + 0x60]
00724351  40                        INC EAX
LAB_00724352:
00724352  5E                        POP ESI
00724353  5D                        POP EBP
00724354  C2 04 00                  RET 0x4
