FUN_006c7980:
006C7980  55                        PUSH EBP
006C7981  8B EC                     MOV EBP,ESP
006C7983  56                        PUSH ESI
006C7984  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C7987  85 F6                     TEST ESI,ESI
006C7989  74 0F                     JZ 0x006c799a
006C798B  8B 46 1E                  MOV EAX,dword ptr [ESI + 0x1e]
006C798E  50                        PUSH EAX
006C798F  E8 FC E4 FD FF            CALL 0x006a5e90
006C7994  56                        PUSH ESI
006C7995  E8 F6 E4 FD FF            CALL 0x006a5e90
LAB_006c799a:
006C799A  5E                        POP ESI
006C799B  5D                        POP EBP
006C799C  C2 04 00                  RET 0x4
