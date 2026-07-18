FUN_004deff0:
004DEFF0  55                        PUSH EBP
004DEFF1  8B EC                     MOV EBP,ESP
004DEFF3  51                        PUSH ECX
004DEFF4  56                        PUSH ESI
004DEFF5  8B F1                     MOV ESI,ECX
004DEFF7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DEFFA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DEFFD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF000  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF003  C1 E1 04                  SHL ECX,0x4
004DF006  03 C8                     ADD ECX,EAX
004DF008  8B 0C 4D 02 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5802]
004DF00F  85 C9                     TEST ECX,ECX
004DF011  0F 84 9B 00 00 00         JZ 0x004df0b2
004DF017  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DF01A  57                        PUSH EDI
004DF01B  33 FF                     XOR EDI,EDI
004DF01D  85 C0                     TEST EAX,EAX
004DF01F  7E 4F                     JLE 0x004df070
LAB_004df021:
004DF021  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DF024  52                        PUSH EDX
004DF025  8B D7                     MOV EDX,EDI
004DF027  E8 44 DC 1C 00            CALL 0x006acc70
004DF02C  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DF02F  74 20                     JZ 0x004df051
004DF031  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF034  47                        INC EDI
004DF035  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF038  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF03B  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF03E  C1 E1 04                  SHL ECX,0x4
004DF041  03 C8                     ADD ECX,EAX
004DF043  8B 0C 4D 02 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5802]
004DF04A  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DF04D  7C D2                     JL 0x004df021
004DF04F  EB 1F                     JMP 0x004df070
LAB_004df051:
004DF051  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF054  57                        PUSH EDI
004DF055  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DF058  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DF05B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DF05E  C1 E2 04                  SHL EDX,0x4
004DF061  03 D0                     ADD EDX,EAX
004DF063  8B 04 55 02 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f5802]
004DF06A  50                        PUSH EAX
004DF06B  E8 00 1C 1D 00            CALL 0x006b0c70
LAB_004df070:
004DF070  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF073  5F                        POP EDI
004DF074  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF077  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF07A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF07D  C1 E1 04                  SHL ECX,0x4
004DF080  03 C8                     ADD ECX,EAX
004DF082  8B 04 4D 02 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5802]
004DF089  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DF08C  85 C9                     TEST ECX,ECX
004DF08E  75 22                     JNZ 0x004df0b2
004DF090  50                        PUSH EAX
004DF091  E8 7A F0 1C 00            CALL 0x006ae110
004DF096  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DF099  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DF09C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DF09F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DF0A2  C1 E1 04                  SHL ECX,0x4
004DF0A5  03 CE                     ADD ECX,ESI
004DF0A7  C7 04 4D 02 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f5802],0x0
LAB_004df0b2:
004DF0B2  33 C0                     XOR EAX,EAX
004DF0B4  5E                        POP ESI
004DF0B5  8B E5                     MOV ESP,EBP
004DF0B7  5D                        POP EBP
004DF0B8  C3                        RET
