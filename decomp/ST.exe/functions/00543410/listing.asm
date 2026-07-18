FUN_00543410:
00543410  55                        PUSH EBP
00543411  8B EC                     MOV EBP,ESP
00543413  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00543416  48                        DEC EAX
00543417  78 1B                     JS 0x00543434
00543419  53                        PUSH EBX
0054341A  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0054341D  56                        PUSH ESI
0054341E  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00543421  57                        PUSH EDI
00543422  8D 78 01                  LEA EDI,[EAX + 0x1]
LAB_00543425:
00543425  8B CE                     MOV ECX,ESI
00543427  FF D3                     CALL EBX
00543429  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0054342C  03 F1                     ADD ESI,ECX
0054342E  4F                        DEC EDI
0054342F  75 F4                     JNZ 0x00543425
00543431  5F                        POP EDI
00543432  5E                        POP ESI
00543433  5B                        POP EBX
LAB_00543434:
00543434  5D                        POP EBP
00543435  C2 10 00                  RET 0x10
