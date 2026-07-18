FUN_006b8a30:
006B8A30  55                        PUSH EBP
006B8A31  8B EC                     MOV EBP,ESP
006B8A33  56                        PUSH ESI
006B8A34  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006B8A37  85 F6                     TEST ESI,ESI
006B8A39  74 18                     JZ 0x006b8a53
006B8A3B  56                        PUSH ESI
006B8A3C  E8 0F FE FF FF            CALL 0x006b8850
006B8A41  8B 06                     MOV EAX,dword ptr [ESI]
006B8A43  56                        PUSH ESI
006B8A44  C7 80 E8 04 00 00 00 00 00 00  MOV dword ptr [EAX + 0x4e8],0x0
006B8A4E  E8 3D D4 FE FF            CALL 0x006a5e90
LAB_006b8a53:
006B8A53  5E                        POP ESI
006B8A54  5D                        POP EBP
006B8A55  C2 04 00                  RET 0x4
