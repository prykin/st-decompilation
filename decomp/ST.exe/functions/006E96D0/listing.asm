FUN_006e96d0:
006E96D0  55                        PUSH EBP
006E96D1  8B EC                     MOV EBP,ESP
006E96D3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E96D6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E96DC  3B D0                     CMP EDX,EAX
006E96DE  73 23                     JNC 0x006e9703
006E96E0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E96E6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E96E9  C1 E0 03                  SHL EAX,0x3
006E96EC  2B C2                     SUB EAX,EDX
006E96EE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E96F1  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006E96F4  8B 01                     MOV EAX,dword ptr [ECX]
006E96F6  F6 C4 80                  TEST AH,0x80
006E96F9  74 08                     JZ 0x006e9703
006E96FB  0C 40                     OR AL,0x40
006E96FD  89 01                     MOV dword ptr [ECX],EAX
006E96FF  5D                        POP EBP
006E9700  C2 04 00                  RET 0x4
LAB_006e9703:
006E9703  83 FA FF                  CMP EDX,-0x1
006E9706  74 0A                     JZ 0x006e9712
006E9708  68 58 ED 7E 00            PUSH 0x7eed58
006E970D  E8 3E F5 FF FF            CALL 0x006e8c50
LAB_006e9712:
006E9712  5D                        POP EBP
006E9713  C2 04 00                  RET 0x4
