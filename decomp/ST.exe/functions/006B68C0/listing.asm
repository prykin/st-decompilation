FUN_006b68c0:
006B68C0  55                        PUSH EBP
006B68C1  8B EC                     MOV EBP,ESP
006B68C3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006B68C6  8D 55 08                  LEA EDX,[EBP + 0x8]
006B68C9  6A 00                     PUSH 0x0
006B68CB  52                        PUSH EDX
006B68CC  8B 00                     MOV EAX,dword ptr [EAX]
006B68CE  68 B0 68 6B 00            PUSH 0x6b68b0
006B68D3  6A 00                     PUSH 0x0
006B68D5  50                        PUSH EAX
006B68D6  8B 08                     MOV ECX,dword ptr [EAX]
006B68D8  FF 51 30                  CALL dword ptr [ECX + 0x30]
006B68DB  5D                        POP EBP
006B68DC  C2 04 00                  RET 0x4
