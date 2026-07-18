FUN_004e2970:
004E2970  55                        PUSH EBP
004E2971  8B EC                     MOV EBP,ESP
004E2973  51                        PUSH ECX
004E2974  56                        PUSH ESI
004E2975  8B F1                     MOV ESI,ECX
004E2977  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E297A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E297D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E2980  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E2983  C1 E1 04                  SHL ECX,0x4
004E2986  03 C8                     ADD ECX,EAX
004E2988  8B 0C 4D FA 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fa]
004E298F  85 C9                     TEST ECX,ECX
004E2991  0F 84 9B 00 00 00         JZ 0x004e2a32
004E2997  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E299A  57                        PUSH EDI
004E299B  33 FF                     XOR EDI,EDI
004E299D  85 C0                     TEST EAX,EAX
004E299F  7E 4F                     JLE 0x004e29f0
LAB_004e29a1:
004E29A1  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E29A4  52                        PUSH EDX
004E29A5  8B D7                     MOV EDX,EDI
004E29A7  E8 C4 A2 1C 00            CALL 0x006acc70
004E29AC  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004E29AF  74 20                     JZ 0x004e29d1
004E29B1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E29B4  47                        INC EDI
004E29B5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E29B8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E29BB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E29BE  C1 E1 04                  SHL ECX,0x4
004E29C1  03 C8                     ADD ECX,EAX
004E29C3  8B 0C 4D FA 57 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f57fa]
004E29CA  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004E29CD  7C D2                     JL 0x004e29a1
004E29CF  EB 1F                     JMP 0x004e29f0
LAB_004e29d1:
004E29D1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E29D4  57                        PUSH EDI
004E29D5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E29D8  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004E29DB  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E29DE  C1 E2 04                  SHL EDX,0x4
004E29E1  03 D0                     ADD EDX,EAX
004E29E3  8B 04 55 FA 57 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f57fa]
004E29EA  50                        PUSH EAX
004E29EB  E8 80 E2 1C 00            CALL 0x006b0c70
LAB_004e29f0:
004E29F0  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E29F3  5F                        POP EDI
004E29F4  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E29F7  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E29FA  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E29FD  C1 E1 04                  SHL ECX,0x4
004E2A00  03 C8                     ADD ECX,EAX
004E2A02  8B 04 4D FA 57 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f57fa]
004E2A09  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004E2A0C  85 C9                     TEST ECX,ECX
004E2A0E  75 22                     JNZ 0x004e2a32
004E2A10  50                        PUSH EAX
004E2A11  E8 FA B6 1C 00            CALL 0x006ae110
004E2A16  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E2A19  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E2A1C  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004E2A1F  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E2A22  C1 E2 04                  SHL EDX,0x4
004E2A25  03 D0                     ADD EDX,EAX
004E2A27  C7 04 55 FA 57 7F 00 00 00 00 00  MOV dword ptr [EDX*0x2 + 0x7f57fa],0x0
LAB_004e2a32:
004E2A32  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E2A35  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
004E2A3B  50                        PUSH EAX
004E2A3C  E8 4F 19 F2 FF            CALL 0x00404390
004E2A41  33 C0                     XOR EAX,EAX
004E2A43  5E                        POP ESI
004E2A44  8B E5                     MOV ESP,EBP
004E2A46  5D                        POP EBP
004E2A47  C3                        RET
