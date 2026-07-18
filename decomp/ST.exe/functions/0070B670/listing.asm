FUN_0070b670:
0070B670  55                        PUSH EBP
0070B671  8B EC                     MOV EBP,ESP
0070B673  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0070B676  66 C7 40 06 FF FF         MOV word ptr [EAX + 0x6],0xffff
0070B67C  5D                        POP EBP
0070B67D  C3                        RET
