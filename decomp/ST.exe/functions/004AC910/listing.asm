FUN_004ac910:
004AC910  55                        PUSH EBP
004AC911  8B EC                     MOV EBP,ESP
004AC913  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC917  74 20                     JZ 0x004ac939
004AC919  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC91C  84 C0                     TEST AL,AL
004AC91E  7C 19                     JL 0x004ac939
004AC920  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC923  0F BE C0                  MOVSX EAX,AL
004AC926  4A                        DEC EDX
004AC927  3B C2                     CMP EAX,EDX
004AC929  7F 0E                     JG 0x004ac939
004AC92B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC92E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC931  8B 44 81 18               MOV EAX,dword ptr [ECX + EAX*0x4 + 0x18]
004AC935  5D                        POP EBP
004AC936  C2 04 00                  RET 0x4
LAB_004ac939:
004AC939  83 C8 FF                  OR EAX,0xffffffff
004AC93C  5D                        POP EBP
004AC93D  C2 04 00                  RET 0x4
