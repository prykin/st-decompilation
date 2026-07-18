FUN_006e4d20:
006E4D20  55                        PUSH EBP
006E4D21  8B EC                     MOV EBP,ESP
006E4D23  8B 41 10                  MOV EAX,dword ptr [ECX + 0x10]
006E4D26  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E4D29  50                        PUSH EAX
006E4D2A  52                        PUSH EDX
006E4D2B  E8 60 FF FF FF            CALL 0x006e4c90
006E4D30  5D                        POP EBP
006E4D31  C2 04 00                  RET 0x4
