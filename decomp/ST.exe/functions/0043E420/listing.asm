FUN_0043e420:
0043E420  55                        PUSH EBP
0043E421  8B EC                     MOV EBP,ESP
0043E423  0F BE 45 0C               MOVSX EAX,byte ptr [EBP + 0xc]
0043E427  56                        PUSH ESI
0043E428  57                        PUSH EDI
0043E429  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0043E42C  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0043E42F  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0043E432  C1 E1 04                  SHL ECX,0x4
0043E435  03 C8                     ADD ECX,EAX
0043E437  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0043E43A  8B F8                     MOV EDI,EAX
0043E43C  8D 34 4D 4B 4E 7F 00      LEA ESI,[ECX*0x2 + 0x7f4e4b]
0043E443  B9 4E 00 00 00            MOV ECX,0x4e
0043E448  F3 A5                     MOVSD.REP ES:EDI,ESI
0043E44A  5F                        POP EDI
0043E44B  5E                        POP ESI
0043E44C  5D                        POP EBP
0043E44D  C2 08 00                  RET 0x8
