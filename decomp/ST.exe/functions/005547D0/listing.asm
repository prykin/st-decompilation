FUN_005547d0:
005547D0  55                        PUSH EBP
005547D1  8B EC                     MOV EBP,ESP
005547D3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
005547D6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005547D9  8B 15 9C 75 80 00         MOV EDX,dword ptr [0x0080759c]
005547DF  50                        PUSH EAX
005547E0  51                        PUSH ECX
005547E1  52                        PUSH EDX
005547E2  E8 5C D5 EA FF            CALL 0x00401d43
005547E7  83 C4 0C                  ADD ESP,0xc
005547EA  5D                        POP EBP
005547EB  C2 08 00                  RET 0x8
