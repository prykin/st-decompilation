FUN_004de0d0:
004DE0D0  55                        PUSH EBP
004DE0D1  8B EC                     MOV EBP,ESP
004DE0D3  51                        PUSH ECX
004DE0D4  56                        PUSH ESI
004DE0D5  8B F1                     MOV ESI,ECX
004DE0D7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DE0DA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE0DD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DE0E0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DE0E3  C1 E1 04                  SHL ECX,0x4
004DE0E6  03 C8                     ADD ECX,EAX
004DE0E8  8B 0C 4D EE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57ee]
004DE0EF  85 C9                     TEST ECX,ECX
004DE0F1  0F 84 9B 00 00 00         JZ 0x004de192
004DE0F7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DE0FA  57                        PUSH EDI
004DE0FB  33 FF                     XOR EDI,EDI
004DE0FD  85 C0                     TEST EAX,EAX
004DE0FF  7E 4F                     JLE 0x004de150
LAB_004de101:
004DE101  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DE104  52                        PUSH EDX
004DE105  8B D7                     MOV EDX,EDI
004DE107  E8 64 EB 1C 00            CALL 0x006acc70
004DE10C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DE10F  74 20                     JZ 0x004de131
004DE111  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DE114  47                        INC EDI
004DE115  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE118  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DE11B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DE11E  C1 E1 04                  SHL ECX,0x4
004DE121  03 C8                     ADD ECX,EAX
004DE123  8B 0C 4D EE 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57ee]
004DE12A  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DE12D  7C D2                     JL 0x004de101
004DE12F  EB 1F                     JMP 0x004de150
LAB_004de131:
004DE131  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DE134  57                        PUSH EDI
004DE135  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DE138  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DE13B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DE13E  C1 E2 04                  SHL EDX,0x4
004DE141  03 D0                     ADD EDX,EAX
004DE143  8B 04 55 EE 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57ee]
004DE14A  50                        PUSH EAX
004DE14B  E8 20 2B 1D 00            CALL 0x006b0c70
LAB_004de150:
004DE150  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DE153  5F                        POP EDI
004DE154  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DE157  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DE15A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DE15D  C1 E1 04                  SHL ECX,0x4
004DE160  03 C8                     ADD ECX,EAX
004DE162  8B 04 4D EE 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57ee]
004DE169  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DE16C  85 C9                     TEST ECX,ECX
004DE16E  75 22                     JNZ 0x004de192
004DE170  50                        PUSH EAX
004DE171  E8 9A FF 1C 00            CALL 0x006ae110
004DE176  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DE179  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DE17C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DE17F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DE182  C1 E1 04                  SHL ECX,0x4
004DE185  03 CE                     ADD ECX,ESI
004DE187  C7 04 4D EE 57 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f57ee],0x0
LAB_004de192:
004DE192  33 C0                     XOR EAX,EAX
004DE194  5E                        POP ESI
004DE195  8B E5                     MOV ESP,EBP
004DE197  5D                        POP EBP
004DE198  C3                        RET
