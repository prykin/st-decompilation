FUN_004e2190:
004E2190  55                        PUSH EBP
004E2191  8B EC                     MOV EBP,ESP
004E2193  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E2196  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004E2199  8D 04 C1                  LEA EAX,[ECX + EAX*0x8]
004E219C  8B 88 D0 04 00 00         MOV ECX,dword ptr [EAX + 0x4d0]
004E21A2  85 C9                     TEST ECX,ECX
004E21A4  74 26                     JZ 0x004e21cc
004E21A6  8B 90 D4 04 00 00         MOV EDX,dword ptr [EAX + 0x4d4]
004E21AC  85 D2                     TEST EDX,EDX
004E21AE  74 1C                     JZ 0x004e21cc
004E21B0  8D 55 08                  LEA EDX,[EBP + 0x8]
004E21B3  52                        PUSH EDX
004E21B4  51                        PUSH ECX
004E21B5  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004E21BB  E8 10 41 20 00            CALL 0x006e62d0
004E21C0  85 C0                     TEST EAX,EAX
004E21C2  75 08                     JNZ 0x004e21cc
004E21C4  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E21C7  E8 7F 20 F2 FF            CALL 0x0040424b
LAB_004e21cc:
004E21CC  33 C0                     XOR EAX,EAX
004E21CE  5D                        POP EBP
004E21CF  C2 04 00                  RET 0x4
