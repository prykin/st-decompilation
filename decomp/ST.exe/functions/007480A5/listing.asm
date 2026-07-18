FUN_007480a5:
007480A5  56                        PUSH ESI
007480A6  8B 74 24 08               MOV ESI,dword ptr [ESP + 0x8]
007480AA  57                        PUSH EDI
007480AB  8B 7E 5C                  MOV EDI,dword ptr [ESI + 0x5c]
007480AE  57                        PUSH EDI
007480AF  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
007480B5  8B 46 64                  MOV EAX,dword ptr [ESI + 0x64]
007480B8  83 78 14 00               CMP dword ptr [EAX + 0x14],0x0
007480BC  74 0E                     JZ 0x007480cc
007480BE  57                        PUSH EDI
007480BF  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007480C5  B8 24 02 04 80            MOV EAX,0x80040224
007480CA  EB 31                     JMP 0x007480fd
LAB_007480cc:
007480CC  83 7E 0C 00               CMP dword ptr [ESI + 0xc],0x0
007480D0  74 21                     JZ 0x007480f3
007480D2  8B 46 F4                  MOV EAX,dword ptr [ESI + -0xc]
007480D5  8D 4E F4                  LEA ECX,[ESI + -0xc]
007480D8  FF 50 2C                  CALL dword ptr [EAX + 0x2c]
007480DB  8B 46 0C                  MOV EAX,dword ptr [ESI + 0xc]
007480DE  50                        PUSH EAX
007480DF  8B 08                     MOV ECX,dword ptr [EAX]
007480E1  FF 51 08                  CALL dword ptr [ECX + 0x8]
007480E4  83 66 0C 00               AND dword ptr [ESI + 0xc],0x0
007480E8  57                        PUSH EDI
007480E9  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007480EF  33 C0                     XOR EAX,EAX
007480F1  EB 0A                     JMP 0x007480fd
LAB_007480f3:
007480F3  57                        PUSH EDI
007480F4  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
007480FA  6A 01                     PUSH 0x1
007480FC  58                        POP EAX
LAB_007480fd:
007480FD  5F                        POP EDI
007480FE  5E                        POP ESI
007480FF  C2 04 00                  RET 0x4
