FUN_00544100:
00544100  55                        PUSH EBP
00544101  8B EC                     MOV EBP,ESP
00544103  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00544106  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00544109  56                        PUSH ESI
0054410A  8B 34 85 76 82 80 00      MOV ESI,dword ptr [EAX*0x4 + 0x808276]
00544111  89 72 04                  MOV dword ptr [EDX + 0x4],ESI
00544114  8B 34 85 EE 82 80 00      MOV ESI,dword ptr [EAX*0x4 + 0x8082ee]
0054411B  89 72 1C                  MOV dword ptr [EDX + 0x1c],ESI
0054411E  8B 04 85 66 83 80 00      MOV EAX,dword ptr [EAX*0x4 + 0x808366]
00544125  89 42 3C                  MOV dword ptr [EDX + 0x3c],EAX
00544128  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
0054412B  52                        PUSH EDX
0054412C  6A 01                     PUSH 0x1
0054412E  6A 03                     PUSH 0x3
00544130  E8 CB 1E 1A 00            CALL 0x006e6000
00544135  5E                        POP ESI
00544136  5D                        POP EBP
00544137  C2 0C 00                  RET 0xc
