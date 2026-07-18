FUN_004e81b0:
004E81B0  55                        PUSH EBP
004E81B1  8B EC                     MOV EBP,ESP
004E81B3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E81B6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E81B9  56                        PUSH ESI
004E81BA  33 C9                     XOR ECX,ECX
004E81BC  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
004E81BF  8B 04 B5 68 25 79 00      MOV EAX,dword ptr [ESI*0x4 + 0x792568]
004E81C6  85 C0                     TEST EAX,EAX
004E81C8  74 34                     JZ 0x004e81fe
004E81CA  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E81D0  50                        PUSH EAX
004E81D1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E81D4  50                        PUSH EAX
004E81D5  E8 91 96 F1 FF            CALL 0x0040186b
004E81DA  83 F8 01                  CMP EAX,0x1
004E81DD  7E 12                     JLE 0x004e81f1
004E81DF  B8 01 00 00 00            MOV EAX,0x1
004E81E4  8D 0C 70                  LEA ECX,[EAX + ESI*0x2]
004E81E7  5E                        POP ESI
004E81E8  8B 04 8D 48 21 79 00      MOV EAX,dword ptr [ECX*0x4 + 0x792148]
004E81EF  5D                        POP EBP
004E81F0  C3                        RET
LAB_004e81f1:
004E81F1  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004E81F4  5E                        POP ESI
004E81F5  8B 04 95 48 21 79 00      MOV EAX,dword ptr [EDX*0x4 + 0x792148]
004E81FC  5D                        POP EBP
004E81FD  C3                        RET
LAB_004e81fe:
004E81FE  8D 04 71                  LEA EAX,[ECX + ESI*0x2]
004E8201  5E                        POP ESI
004E8202  8B 04 85 48 21 79 00      MOV EAX,dword ptr [EAX*0x4 + 0x792148]
004E8209  5D                        POP EBP
004E820A  C3                        RET
