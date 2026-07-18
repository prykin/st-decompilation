FUN_006822c0:
006822C0  55                        PUSH EBP
006822C1  8B EC                     MOV EBP,ESP
006822C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006822C6  80 38 01                  CMP byte ptr [EAX],0x1
006822C9  75 07                     JNZ 0x006822d2
006822CB  8B 40 01                  MOV EAX,dword ptr [EAX + 0x1]
006822CE  5D                        POP EBP
006822CF  C2 04 00                  RET 0x4
LAB_006822d2:
006822D2  0F BF 40 01               MOVSX EAX,word ptr [EAX + 0x1]
006822D6  50                        PUSH EAX
006822D7  E8 35 09 D8 FF            CALL 0x00402c11
006822DC  83 C4 04                  ADD ESP,0x4
006822DF  5D                        POP EBP
006822E0  C2 04 00                  RET 0x4
