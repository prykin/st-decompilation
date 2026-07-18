FUN_004e8230:
004E8230  55                        PUSH EBP
004E8231  8B EC                     MOV EBP,ESP
004E8233  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004E8236  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E8239  56                        PUSH ESI
004E823A  33 C9                     XOR ECX,ECX
004E823C  8D 34 50                  LEA ESI,[EAX + EDX*0x2]
004E823F  8B 04 B5 24 02 7E 00      MOV EAX,dword ptr [ESI*0x4 + 0x7e0224]
004E8246  85 C0                     TEST EAX,EAX
004E8248  74 34                     JZ 0x004e827e
004E824A  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E8250  50                        PUSH EAX
004E8251  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E8254  50                        PUSH EAX
004E8255  E8 11 96 F1 FF            CALL 0x0040186b
004E825A  83 F8 01                  CMP EAX,0x1
004E825D  7E 12                     JLE 0x004e8271
004E825F  B8 01 00 00 00            MOV EAX,0x1
004E8264  8D 0C 70                  LEA ECX,[EAX + ESI*0x2]
004E8267  5E                        POP ESI
004E8268  8B 04 8D 30 FD 7D 00      MOV EAX,dword ptr [ECX*0x4 + 0x7dfd30]
004E826F  5D                        POP EBP
004E8270  C3                        RET
LAB_004e8271:
004E8271  8D 14 70                  LEA EDX,[EAX + ESI*0x2]
004E8274  5E                        POP ESI
004E8275  8B 04 95 30 FD 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7dfd30]
004E827C  5D                        POP EBP
004E827D  C3                        RET
LAB_004e827e:
004E827E  8D 04 71                  LEA EAX,[ECX + ESI*0x2]
004E8281  5E                        POP ESI
004E8282  8B 04 85 30 FD 7D 00      MOV EAX,dword ptr [EAX*0x4 + 0x7dfd30]
004E8289  5D                        POP EBP
004E828A  C3                        RET
