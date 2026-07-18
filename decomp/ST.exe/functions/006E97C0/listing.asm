FUN_006e97c0:
006E97C0  55                        PUSH EBP
006E97C1  8B EC                     MOV EBP,ESP
006E97C3  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006E97C6  8B 81 10 03 00 00         MOV EAX,dword ptr [ECX + 0x310]
006E97CC  3B D0                     CMP EDX,EAX
006E97CE  73 4A                     JNC 0x006e981a
006E97D0  8B 89 1C 03 00 00         MOV ECX,dword ptr [ECX + 0x31c]
006E97D6  8D 04 52                  LEA EAX,[EDX + EDX*0x2]
006E97D9  C1 E0 03                  SHL EAX,0x3
006E97DC  2B C2                     SUB EAX,EDX
006E97DE  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
006E97E1  8D 04 81                  LEA EAX,[ECX + EAX*0x4]
006E97E4  8B 08                     MOV ECX,dword ptr [EAX]
006E97E6  F6 C5 80                  TEST CH,0x80
006E97E9  74 2F                     JZ 0x006e981a
006E97EB  83 C9 04                  OR ECX,0x4
006E97EE  89 08                     MOV dword ptr [EAX],ECX
006E97F0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006E97F3  89 88 B8 00 00 00         MOV dword ptr [EAX + 0xb8],ECX
006E97F9  85 C9                     TEST ECX,ECX
006E97FB  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
006E97FE  74 0D                     JZ 0x006e980d
006E9800  81 C9 00 00 01 00         OR ECX,0x10000
006E9806  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E9809  5D                        POP EBP
006E980A  C2 08 00                  RET 0x8
LAB_006e980d:
006E980D  81 E1 FF FF FE FF         AND ECX,0xfffeffff
006E9813  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
006E9816  5D                        POP EBP
006E9817  C2 08 00                  RET 0x8
LAB_006e981a:
006E981A  83 FA FF                  CMP EDX,-0x1
006E981D  74 0A                     JZ 0x006e9829
006E981F  68 78 ED 7E 00            PUSH 0x7eed78
006E9824  E8 27 F4 FF FF            CALL 0x006e8c50
LAB_006e9829:
006E9829  5D                        POP EBP
006E982A  C2 08 00                  RET 0x8
