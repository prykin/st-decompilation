FUN_0065d1f0:
0065D1F0  55                        PUSH EBP
0065D1F1  8B EC                     MOV EBP,ESP
0065D1F3  56                        PUSH ESI
0065D1F4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0065D1F7  8B 06                     MOV EAX,dword ptr [ESI]
0065D1F9  85 C0                     TEST EAX,EAX
0065D1FB  74 1C                     JZ 0x0065d219
0065D1FD  8B 40 0F                  MOV EAX,dword ptr [EAX + 0xf]
0065D200  85 C0                     TEST EAX,EAX
0065D202  74 0F                     JZ 0x0065d213
0065D204  50                        PUSH EAX
0065D205  E8 06 0F 05 00            CALL 0x006ae110
0065D20A  8B 06                     MOV EAX,dword ptr [ESI]
0065D20C  C7 40 0F 00 00 00 00      MOV dword ptr [EAX + 0xf],0x0
LAB_0065d213:
0065D213  56                        PUSH ESI
0065D214  E8 47 DE 04 00            CALL 0x006ab060
LAB_0065d219:
0065D219  5E                        POP ESI
0065D21A  5D                        POP EBP
0065D21B  C3                        RET
