FUN_004ae080:
004AE080  55                        PUSH EBP
004AE081  8B EC                     MOV EBP,ESP
004AE083  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004AE086  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AE089  50                        PUSH EAX
004AE08A  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004AE08D  52                        PUSH EDX
004AE08E  8B 51 18                  MOV EDX,dword ptr [ECX + 0x18]
004AE091  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AE094  50                        PUSH EAX
004AE095  52                        PUSH EDX
004AE096  E8 D5 B5 25 00            CALL 0x00709670
004AE09B  5D                        POP EBP
004AE09C  C2 0C 00                  RET 0xc
