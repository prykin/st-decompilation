FUN_00691540:
00691540  55                        PUSH EBP
00691541  8B EC                     MOV EBP,ESP
00691543  56                        PUSH ESI
00691544  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00691547  8B 06                     MOV EAX,dword ptr [ESI]
00691549  85 C0                     TEST EAX,EAX
0069154B  74 0F                     JZ 0x0069155c
0069154D  50                        PUSH EAX
0069154E  E8 AF 0C D7 FF            CALL 0x00402202
00691553  83 C4 04                  ADD ESP,0x4
00691556  56                        PUSH ESI
00691557  E8 04 9B 01 00            CALL 0x006ab060
LAB_0069155c:
0069155C  5E                        POP ESI
0069155D  5D                        POP EBP
0069155E  C3                        RET
