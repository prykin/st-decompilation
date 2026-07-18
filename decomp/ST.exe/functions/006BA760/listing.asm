FUN_006ba760:
006BA760  55                        PUSH EBP
006BA761  8B EC                     MOV EBP,ESP
006BA763  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BA766  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BA769  80 CD 01                  OR CH,0x1
006BA76C  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006BA76F  5D                        POP EBP
006BA770  C2 04 00                  RET 0x4
