FUN_004232e0:
004232E0  55                        PUSH EBP
004232E1  8B EC                     MOV EBP,ESP
004232E3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004232E6  89 41 1C                  MOV dword ptr [ECX + 0x1c],EAX
004232E9  5D                        POP EBP
004232EA  C2 04 00                  RET 0x4
