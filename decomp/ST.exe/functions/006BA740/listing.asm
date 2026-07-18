FUN_006ba740:
006BA740  55                        PUSH EBP
006BA741  8B EC                     MOV EBP,ESP
006BA743  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006BA746  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
006BA749  80 E5 FE                  AND CH,0xfe
006BA74C  89 48 0C                  MOV dword ptr [EAX + 0xc],ECX
006BA74F  5D                        POP EBP
006BA750  C2 04 00                  RET 0x4
