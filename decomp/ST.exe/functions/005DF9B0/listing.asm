FUN_005df9b0:
005DF9B0  55                        PUSH EBP
005DF9B1  8B EC                     MOV EBP,ESP
005DF9B3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005DF9B6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005DF9B9  8B C2                     MOV EAX,EDX
005DF9BB  53                        PUSH EBX
005DF9BC  C1 E0 05                  SHL EAX,0x5
005DF9BF  2B C2                     SUB EAX,EDX
005DF9C1  56                        PUSH ESI
005DF9C2  57                        PUSH EDI
005DF9C3  8D 34 41                  LEA ESI,[ECX + EAX*0x2]
005DF9C6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005DF9C9  8B C8                     MOV ECX,EAX
005DF9CB  8B FE                     MOV EDI,ESI
005DF9CD  C1 E1 05                  SHL ECX,0x5
005DF9D0  2B C8                     SUB ECX,EAX
005DF9D2  33 C0                     XOR EAX,EAX
005DF9D4  D1 E1                     SHL ECX,0x1
005DF9D6  8B D9                     MOV EBX,ECX
005DF9D8  C1 E9 02                  SHR ECX,0x2
005DF9DB  F3 AB                     STOSD.REP ES:EDI
005DF9DD  8B CB                     MOV ECX,EBX
005DF9DF  83 E1 03                  AND ECX,0x3
005DF9E2  F3 AA                     STOSB.REP ES:EDI
005DF9E4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005DF9E7  03 C2                     ADD EAX,EDX
005DF9E9  3B D0                     CMP EDX,EAX
005DF9EB  73 10                     JNC 0x005df9fd
005DF9ED  8B CE                     MOV ECX,ESI
005DF9EF  2B C2                     SUB EAX,EDX
LAB_005df9f1:
005DF9F1  C7 01 FF FF FF FF         MOV dword ptr [ECX],0xffffffff
005DF9F7  83 C1 3E                  ADD ECX,0x3e
005DF9FA  48                        DEC EAX
005DF9FB  75 F4                     JNZ 0x005df9f1
LAB_005df9fd:
005DF9FD  5F                        POP EDI
005DF9FE  5E                        POP ESI
005DF9FF  5B                        POP EBX
005DFA00  5D                        POP EBP
005DFA01  C2 0C 00                  RET 0xc
