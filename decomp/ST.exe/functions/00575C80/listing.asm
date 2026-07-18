FUN_00575c80:
00575C80  55                        PUSH EBP
00575C81  8B EC                     MOV EBP,ESP
00575C83  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00575C86  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00575C89  8B 40 14                  MOV EAX,dword ptr [EAX + 0x14]
00575C8C  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
00575C8F  2B C2                     SUB EAX,EDX
00575C91  5D                        POP EBP
00575C92  C3                        RET
