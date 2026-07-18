FUN_006e6080:
006E6080  55                        PUSH EBP
006E6081  8B EC                     MOV EBP,ESP
006E6083  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E6086  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E6089  50                        PUSH EAX
006E608A  89 50 08                  MOV dword ptr [EAX + 0x8],EDX
006E608D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E6090  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
006E6093  E8 C8 FF FF FF            CALL 0x006e6060
006E6098  5D                        POP EBP
006E6099  C2 0C 00                  RET 0xc
