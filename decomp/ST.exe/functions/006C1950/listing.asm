FUN_006c1950:
006C1950  55                        PUSH EBP
006C1951  8B EC                     MOV EBP,ESP
006C1953  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1958  56                        PUSH ESI
006C1959  33 F6                     XOR ESI,ESI
006C195B  85 C0                     TEST EAX,EAX
006C195D  75 0A                     JNZ 0x006c1969
006C195F  B8 CC FF FF FF            MOV EAX,0xffffffcc
006C1964  5E                        POP ESI
006C1965  5D                        POP EBP
006C1966  C2 08 00                  RET 0x8
LAB_006c1969:
006C1969  68 98 68 85 00            PUSH 0x856898
006C196E  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1974  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C1977  85 C9                     TEST ECX,ECX
006C1979  7C 3A                     JL 0x006c19b5
006C197B  83 F9 20                  CMP ECX,0x20
006C197E  7D 35                     JGE 0x006c19b5
006C1980  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006C1983  C1 E0 04                  SHL EAX,0x4
006C1986  03 C1                     ADD EAX,ECX
006C1988  C1 E0 02                  SHL EAX,0x2
006C198B  F6 80 F8 4F 85 00 01      TEST byte ptr [EAX + 0x854ff8],0x1
006C1992  74 21                     JZ 0x006c19b5
006C1994  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C1997  68 98 68 85 00            PUSH 0x856898
006C199C  81 E1 FF 00 00 00         AND ECX,0xff
006C19A2  89 88 24 50 85 00         MOV dword ptr [EAX + 0x855024],ECX
006C19A8  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C19AE  8B C6                     MOV EAX,ESI
006C19B0  5E                        POP ESI
006C19B1  5D                        POP EBP
006C19B2  C2 08 00                  RET 0x8
LAB_006c19b5:
006C19B5  68 98 68 85 00            PUSH 0x856898
006C19BA  BE FC FF FF FF            MOV ESI,0xfffffffc
006C19BF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
006C19C5  8B C6                     MOV EAX,ESI
006C19C7  5E                        POP ESI
006C19C8  5D                        POP EBP
006C19C9  C2 08 00                  RET 0x8
