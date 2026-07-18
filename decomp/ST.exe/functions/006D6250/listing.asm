FUN_006d6250:
006D6250  55                        PUSH EBP
006D6251  8B EC                     MOV EBP,ESP
006D6253  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D6256  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006D6259  50                        PUSH EAX
006D625A  51                        PUSH ECX
006D625B  E8 4E 2B 07 00            CALL 0x00748dae
006D6260  5D                        POP EBP
006D6261  C2 08 00                  RET 0x8
