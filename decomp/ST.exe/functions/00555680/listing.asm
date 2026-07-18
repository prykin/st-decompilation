FUN_00555680:
00555680  55                        PUSH EBP
00555681  8B EC                     MOV EBP,ESP
00555683  56                        PUSH ESI
00555684  8B F1                     MOV ESI,ECX
00555686  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
00555689  85 C0                     TEST EAX,EAX
0055568B  74 1F                     JZ 0x005556ac
0055568D  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00555690  85 C9                     TEST ECX,ECX
00555692  74 18                     JZ 0x005556ac
00555694  50                        PUSH EAX
00555695  51                        PUSH ECX
00555696  E8 D5 94 1D 00            CALL 0x0072eb70
0055569B  8B 46 4C                  MOV EAX,dword ptr [ESI + 0x4c]
0055569E  50                        PUSH EAX
0055569F  68 F4 8F 7C 00            PUSH 0x7c8ff4
005556A4  E8 C7 94 1D 00            CALL 0x0072eb70
005556A9  83 C4 10                  ADD ESP,0x10
LAB_005556ac:
005556AC  5E                        POP ESI
005556AD  5D                        POP EBP
005556AE  C2 04 00                  RET 0x4
