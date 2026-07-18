FUN_004ed4b0:
004ED4B0  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004ED4B6  56                        PUSH ESI
004ED4B7  33 F6                     XOR ESI,ESI
004ED4B9  83 F8 04                  CMP EAX,0x4
004ED4BC  77 45                     JA 0x004ed503
switchD_004ed4be::switchD:
004ED4BE  FF 24 85 08 D5 4E 00      JMP dword ptr [EAX*0x4 + 0x4ed508]
switchD_004ed4be::caseD_2:
004ED4C5  68 F4 F5 7B 00            PUSH 0x7bf5f4
004ED4CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ED4CF  6A 00                     PUSH 0x0
004ED4D1  6A 00                     PUSH 0x0
004ED4D3  68 9B 00 00 00            PUSH 0x9b
004ED4D8  68 70 16 7C 00            PUSH 0x7c1670
004ED4DD  E8 EE FF 1B 00            CALL 0x006ad4d0
004ED4E2  83 C4 18                  ADD ESP,0x18
004ED4E5  85 C0                     TEST EAX,EAX
004ED4E7  74 1A                     JZ 0x004ed503
004ED4E9  CC                        INT3
switchD_004ed4be::caseD_4:
004ED4EE  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004ED4F4  8B 0D B8 AA 79 00         MOV ECX,dword ptr [0x0079aab8]
004ED4FA  3B C1                     CMP EAX,ECX
004ED4FC  7C 05                     JL 0x004ed503
switchD_004ed4be::caseD_0:
004ED4FE  BE 01 00 00 00            MOV ESI,0x1
switchD_004ed4be::caseD_3:
004ED503  8B C6                     MOV EAX,ESI
004ED505  5E                        POP ESI
004ED506  C3                        RET
