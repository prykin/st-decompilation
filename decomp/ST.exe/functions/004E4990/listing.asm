FUN_004e4990:
004E4990  55                        PUSH EBP
004E4991  8B EC                     MOV EBP,ESP
004E4993  51                        PUSH ECX
004E4994  56                        PUSH ESI
004E4995  8B F1                     MOV ESI,ECX
004E4997  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E499A  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E499D  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E49A0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E49A3  C1 E1 04                  SHL ECX,0x4
004E49A6  03 C8                     ADD ECX,EAX
004E49A8  8B 0C 4D 06 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5806]
004E49AF  85 C9                     TEST ECX,ECX
004E49B1  0F 84 9B 00 00 00         JZ 0x004e4a52
004E49B7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004E49BA  57                        PUSH EDI
004E49BB  33 FF                     XOR EDI,EDI
004E49BD  85 C0                     TEST EAX,EAX
004E49BF  7E 4F                     JLE 0x004e4a10
LAB_004e49c1:
004E49C1  8D 55 FC                  LEA EDX,[EBP + -0x4]
004E49C4  52                        PUSH EDX
004E49C5  8B D7                     MOV EDX,EDI
004E49C7  E8 A4 82 1C 00            CALL 0x006acc70
004E49CC  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004E49CF  74 20                     JZ 0x004e49f1
004E49D1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E49D4  47                        INC EDI
004E49D5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E49D8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E49DB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E49DE  C1 E1 04                  SHL ECX,0x4
004E49E1  03 C8                     ADD ECX,EAX
004E49E3  8B 0C 4D 06 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f5806]
004E49EA  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004E49ED  7C D2                     JL 0x004e49c1
004E49EF  EB 1F                     JMP 0x004e4a10
LAB_004e49f1:
004E49F1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E49F4  57                        PUSH EDI
004E49F5  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E49F8  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004E49FB  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004E49FE  C1 E2 04                  SHL EDX,0x4
004E4A01  03 D0                     ADD EDX,EAX
004E4A03  8B 04 55 06 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f5806]
004E4A0A  50                        PUSH EAX
004E4A0B  E8 60 C2 1C 00            CALL 0x006b0c70
LAB_004e4a10:
004E4A10  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004E4A13  5F                        POP EDI
004E4A14  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E4A17  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E4A1A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E4A1D  C1 E1 04                  SHL ECX,0x4
004E4A20  03 C8                     ADD ECX,EAX
004E4A22  8B 04 4D 06 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f5806]
004E4A29  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004E4A2C  85 C9                     TEST ECX,ECX
004E4A2E  75 22                     JNZ 0x004e4a52
004E4A30  50                        PUSH EAX
004E4A31  E8 DA 96 1C 00            CALL 0x006ae110
004E4A36  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004E4A39  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004E4A3C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004E4A3F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004E4A42  C1 E1 04                  SHL ECX,0x4
004E4A45  03 CE                     ADD ECX,ESI
004E4A47  C7 04 4D 06 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f5806],0x0
LAB_004e4a52:
004E4A52  33 C0                     XOR EAX,EAX
004E4A54  5E                        POP ESI
004E4A55  8B E5                     MOV ESP,EBP
004E4A57  5D                        POP EBP
004E4A58  C3                        RET
