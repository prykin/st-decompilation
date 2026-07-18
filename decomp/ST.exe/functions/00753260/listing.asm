FUN_00753260:
00753260  55                        PUSH EBP
00753261  8B EC                     MOV EBP,ESP
00753263  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00753266  85 C0                     TEST EAX,EAX
00753268  74 28                     JZ 0x00753292
0075326A  F7 40 08 00 00 80 00      TEST dword ptr [EAX + 0x8],0x800000
00753271  74 17                     JZ 0x0075328a
00753273  56                        PUSH ESI
00753274  57                        PUSH EDI
00753275  8B 78 34                  MOV EDI,dword ptr [EAX + 0x34]
00753278  8D 70 10                  LEA ESI,[EAX + 0x10]
0075327B  8B 4F 0C                  MOV ECX,dword ptr [EDI + 0xc]
0075327E  89 48 1C                  MOV dword ptr [EAX + 0x1c],ECX
00753281  B9 08 00 00 00            MOV ECX,0x8
00753286  F3 A5                     MOVSD.REP ES:EDI,ESI
00753288  5F                        POP EDI
00753289  5E                        POP ESI
LAB_0075328a:
0075328A  6A 00                     PUSH 0x0
0075328C  50                        PUSH EAX
0075328D  E8 0E 14 F8 FF            CALL 0x006d46a0
LAB_00753292:
00753292  5D                        POP EBP
00753293  C2 04 00                  RET 0x4
