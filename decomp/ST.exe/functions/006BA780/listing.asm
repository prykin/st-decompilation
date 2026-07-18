FUN_006ba780:
006BA780  55                        PUSH EBP
006BA781  8B EC                     MOV EBP,ESP
006BA783  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006BA786  85 C0                     TEST EAX,EAX
006BA788  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BA78B  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BA78E  74 0A                     JZ 0x006ba79a
006BA790  80 CD 10                  OR CH,0x10
006BA793  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006BA796  5D                        POP EBP
006BA797  C2 08 00                  RET 0x8
LAB_006ba79a:
006BA79A  80 E5 EF                  AND CH,0xef
006BA79D  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006BA7A0  5D                        POP EBP
006BA7A1  C2 08 00                  RET 0x8
