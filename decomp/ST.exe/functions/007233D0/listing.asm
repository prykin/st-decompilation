FUN_007233d0:
007233D0  55                        PUSH EBP
007233D1  8B EC                     MOV EBP,ESP
007233D3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007233D6  8D 51 44                  LEA EDX,[ECX + 0x44]
007233D9  52                        PUSH EDX
007233DA  89 41 58                  MOV dword ptr [ECX + 0x58],EAX
007233DD  E8 FE 2B FC FF            CALL 0x006e5fe0
007233E2  F7 D8                     NEG EAX
007233E4  1B C0                     SBB EAX,EAX
007233E6  5D                        POP EBP
007233E7  C2 04 00                  RET 0x4
