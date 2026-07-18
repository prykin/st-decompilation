FUN_006e9720:
006E9720  55                        PUSH EBP
006E9721  8B EC                     MOV EBP,ESP
006E9723  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9726  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E972C  3B D0                     CMP EDX,EAX
006E972E  73 2C                     JNC 0x006e975c
006E9730  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9736  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9739  C1 E0 03                  SHL EAX,0x3
006E973C  2B C2                     SUB EAX,EDX
006E973E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9741  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006E9744  8B 01                     MOV EAX,dword ptr [ECX]
006E9746  F6 C4 80                  TEST AH,0x80
006E9749  74 11                     JZ 0x006e975c
006E974B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E974E  0C 40                     OR AL,0x40
006E9750  89 01                     MOV dword ptr [ECX],EAX
006E9752  89 91 04 01 00 00         MOV dword ptr [ECX + 0x104],EDX
006E9758  5D                        POP EBP
006E9759  C2 08 00                  RET 0x8
LAB_006e975c:
006E975C  83 FA FF                  CMP EDX,-0x1
006E975F  74 0A                     JZ 0x006e976b
006E9761  68 58 ED 7E 00            PUSH 0x7eed58
006E9766  E8 E5 F4 FF FF            CALL 0x006e8c50
LAB_006e976b:
006E976B  5D                        POP EBP
006E976C  C2 08 00                  RET 0x8
