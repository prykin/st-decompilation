FUN_004be470:
004BE470  55                        PUSH EBP
004BE471  8B EC                     MOV EBP,ESP
004BE473  56                        PUSH ESI
004BE474  8B F1                     MOV ESI,ECX
004BE476  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004BE47C  8A 86 3D 02 00 00         MOV AL,byte ptr [ESI + 0x23d]
004BE482  50                        PUSH EAX
004BE483  E8 2F 65 F4 FF            CALL 0x004049b7
004BE488  25 FF 00 00 00            AND EAX,0xff
004BE48D  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
004BE490  48                        DEC EAX
004BE491  89 96 41 02 00 00         MOV dword ptr [ESI + 0x241],EDX
004BE497  8B C8                     MOV ECX,EAX
004BE499  8B 86 35 02 00 00         MOV EAX,dword ptr [ESI + 0x235]
004BE49F  8D 0C 41                  LEA ECX,[ECX + EAX*0x2]
004BE4A2  03 C1                     ADD EAX,ECX
004BE4A4  8D 0C 85 7C 41 7E 00      LEA ECX,[EAX*0x4 + 0x7e417c]
004BE4AB  8B 04 85 7C 41 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7e417c]
004BE4B2  3B D0                     CMP EDX,EAX
004BE4B4  7E 06                     JLE 0x004be4bc
004BE4B6  89 86 41 02 00 00         MOV dword ptr [ESI + 0x241],EAX
LAB_004be4bc:
004BE4BC  8B 86 41 02 00 00         MOV EAX,dword ptr [ESI + 0x241]
004BE4C2  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004BE4C5  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
004BE4C8  C1 E0 02                  SHL EAX,0x2
004BE4CB  99                        CDQ
004BE4CC  F7 39                     IDIV dword ptr [ECX]
004BE4CE  89 86 D7 05 00 00         MOV dword ptr [ESI + 0x5d7],EAX
004BE4D4  5E                        POP ESI
004BE4D5  5D                        POP EBP
004BE4D6  C2 04 00                  RET 0x4
