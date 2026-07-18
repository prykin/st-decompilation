FUN_006e9770:
006E9770  55                        PUSH EBP
006E9771  8B EC                     MOV EBP,ESP
006E9773  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E9776  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E977C  3B D0                     CMP EDX,EAX
006E977E  73 2C                     JNC 0x006e97ac
006E9780  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E9786  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E9789  C1 E0 03                  SHL EAX,0x3
006E978C  2B C2                     SUB EAX,EDX
006E978E  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E9791  8D 0C 81                  LEA ECX,[ECX + EAX*0x4]
006E9794  8B 01                     MOV EAX,dword ptr [ECX]
006E9796  F6 C4 80                  TEST AH,0x80
006E9799  74 11                     JZ 0x006e97ac
006E979B  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E979E  0C 04                     OR AL,0x4
006E97A0  89 01                     MOV dword ptr [ECX],EAX
006E97A2  89 91 B4 00 00 00         MOV dword ptr [ECX + 0xb4],EDX
006E97A8  5D                        POP EBP
006E97A9  C2 08 00                  RET 0x8
LAB_006e97ac:
006E97AC  83 FA FF                  CMP EDX,-0x1
006E97AF  74 0A                     JZ 0x006e97bb
006E97B1  68 68 ED 7E 00            PUSH 0x7eed68
006E97B6  E8 95 F4 FF FF            CALL 0x006e8c50
LAB_006e97bb:
006E97BB  5D                        POP EBP
006E97BC  C2 08 00                  RET 0x8
