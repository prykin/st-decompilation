STExplosion::sub_00604120:
00604120  56                        PUSH ESI
00604121  8B F1                     MOV ESI,ECX
00604123  8B 86 15 02 00 00         MOV EAX,dword ptr [ESI + 0x215]
00604129  85 C0                     TEST EAX,EAX
0060412B  74 06                     JZ 0x00604133
0060412D  50                        PUSH EAX
0060412E  E8 DD 9F 0A 00            CALL 0x006ae110
LAB_00604133:
00604133  8B 8E B3 02 00 00         MOV ECX,dword ptr [ESI + 0x2b3]
00604139  8D 86 B3 02 00 00         LEA EAX,[ESI + 0x2b3]
0060413F  85 C9                     TEST ECX,ECX
00604141  5E                        POP ESI
00604142  74 06                     JZ 0x0060414a
00604144  50                        PUSH EAX
00604145  E8 16 6F 0A 00            CALL 0x006ab060
LAB_0060414a:
0060414A  C3                        RET
