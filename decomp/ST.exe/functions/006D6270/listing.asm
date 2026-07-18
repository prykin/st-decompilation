FUN_006d6270:
006D6270  55                        PUSH EBP
006D6271  8B EC                     MOV EBP,ESP
006D6273  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D6276  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D6279  50                        PUSH EAX
006D627A  51                        PUSH ECX
006D627B  E8 63 2B 07 00            CALL 0x00748de3
006D6280  5D                        POP EBP
006D6281  C2 08 00                  RET 0x8
