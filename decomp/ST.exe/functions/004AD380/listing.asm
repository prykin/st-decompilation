FUN_004ad380:
004AD380  55                        PUSH EBP
004AD381  8B EC                     MOV EBP,ESP
004AD383  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AD386  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AD389  52                        PUSH EDX
004AD38A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
004AD38D  50                        PUSH EAX
004AD38E  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AD391  89 51 08                  MOV dword ptr [ECX + 0x8],EDX
004AD394  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AD397  50                        PUSH EAX
004AD398  E8 93 C4 23 00            CALL 0x006e9830
004AD39D  5D                        POP EBP
004AD39E  C2 08 00                  RET 0x8
