FUN_0074a6cb:
0074A6CB  56                        PUSH ESI
0074A6CC  8B F1                     MOV ESI,ECX
0074A6CE  57                        PUSH EDI
0074A6CF  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0074A6D5  57                        PUSH EDI
0074A6D6  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
0074A6DC  83 7E 64 00               CMP dword ptr [ESI + 0x64],0x0
0074A6E0  75 0B                     JNZ 0x0074a6ed
0074A6E2  57                        PUSH EDI
0074A6E3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A6E9  33 C0                     XOR EAX,EAX
0074A6EB  EB 3A                     JMP 0x0074a727
LAB_0074a6ed:
0074A6ED  8B 4E 50                  MOV ECX,dword ptr [ESI + 0x50]
0074A6F0  83 A6 C0 00 00 00 00      AND dword ptr [ESI + 0xc0],0x0
0074A6F7  85 C9                     TEST ECX,ECX
0074A6F9  74 05                     JZ 0x0074a700
0074A6FB  E8 07 4A 00 00            CALL 0x0074f107
LAB_0074a700:
0074A700  8B CE                     MOV ECX,ESI
0074A702  6A 01                     PUSH 0x1
0074A704  F7 D9                     NEG ECX
0074A706  8D 56 0C                  LEA EDX,[ESI + 0xc]
0074A709  58                        POP EAX
0074A70A  1B C9                     SBB ECX,ECX
0074A70C  89 46 74                  MOV dword ptr [ESI + 0x74],EAX
0074A70F  23 CA                     AND ECX,EDX
0074A711  51                        PUSH ECX
0074A712  6A 00                     PUSH 0x0
0074A714  50                        PUSH EAX
0074A715  8B CE                     MOV ECX,ESI
0074A717  E8 EA CC FF FF            CALL 0x00747406
0074A71C  57                        PUSH EDI
0074A71D  8B F0                     MOV ESI,EAX
0074A71F  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
0074A725  8B C6                     MOV EAX,ESI
LAB_0074a727:
0074A727  5F                        POP EDI
0074A728  5E                        POP ESI
0074A729  C3                        RET
