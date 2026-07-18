FUN_006c18d0:
006C18D0  55                        PUSH EBP
006C18D1  8B EC                     MOV EBP,ESP
006C18D3  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C18D8  56                        PUSH ESI
006C18D9  33 F6                     XOR ESI,ESI
006C18DB  85 C0                     TEST EAX,EAX
006C18DD  75 0A                     JNZ 0x006c18e9
006C18DF  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C18E4  5E                        POP ESI
006C18E5  5D                        POP EBP
006C18E6  C2 04 00                  RET 0x4
LAB_006c18e9:
006C18E9  68 98 68 85 00            PUSH 0x856898
006C18EE  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C18F4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C18F7  85 C0                     TEST EAX,EAX
006C18F9  7C 35                     JL 0x006c1930
006C18FB  83 F8 20                  CMP EAX,0x20
006C18FE  7D 30                     JGE 0x006c1930
006C1900  8D 0C 40                  LEA ECX,[EAX + EAX*0x2]
006C1903  C1 E1 04                  SHL ECX,0x4
006C1906  03 C8                     ADD ECX,EAX
006C1908  8B 04 8D F8 4F 85 00      MOV EAX,dword ptr [ECX*0x4 + 0x854ff8]
006C190F  A8 01                     TEST AL,0x1
006C1911  8D 0C 8D F8 4F 85 00      LEA ECX,[ECX*0x4 + 0x854ff8]
006C1918  74 16                     JZ 0x006c1930
006C191A  0C 08                     OR AL,0x8
006C191C  68 98 68 85 00            PUSH 0x856898
006C1921  89 01                     MOV dword ptr [ECX],EAX
006C1923  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1929  8B C6                     MOV EAX,ESI
006C192B  5E                        POP ESI
006C192C  5D                        POP EBP
006C192D  C2 04 00                  RET 0x4
LAB_006c1930:
006C1930  68 98 68 85 00            PUSH 0x856898
006C1935  BE FC FF FF FF            MOV ESI,0xfffffffc
006C193A  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C1940  8B C6                     MOV EAX,ESI
006C1942  5E                        POP ESI
006C1943  5D                        POP EBP
006C1944  C2 04 00                  RET 0x4
