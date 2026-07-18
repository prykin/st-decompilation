FUN_00544150:
00544150  55                        PUSH EBP
00544151  8B EC                     MOV EBP,ESP
00544153  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00544156  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00544159  56                        PUSH ESI
0054415A  8B 34 85 DE 83 80 00      MOV ESI,dword ptr [EAX*0x4 + 0x8083de]
00544161  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
00544164  8D B0 FF A6 00 00         LEA ESI,[EAX + 0xa6ff]
0054416A  89 72 1C                  MOV dword ptr [EDX + 0x1c],ESI
0054416D  8B 14 85 DE 83 80 00      MOV EDX,dword ptr [EAX*0x4 + 0x8083de]
00544174  85 D2                     TEST EDX,EDX
00544176  5E                        POP ESI
00544177  74 0D                     JZ 0x00544186
00544179  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0054417C  50                        PUSH EAX
0054417D  6A 01                     PUSH 0x1
0054417F  6A 03                     PUSH 0x3
00544181  E8 7A 1E 1A 00            CALL 0x006e6000
LAB_00544186:
00544186  5D                        POP EBP
00544187  C2 0C 00                  RET 0xc
