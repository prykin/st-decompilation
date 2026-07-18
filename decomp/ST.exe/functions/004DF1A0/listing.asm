FUN_004df1a0:
004DF1A0  55                        PUSH EBP
004DF1A1  8B EC                     MOV EBP,ESP
004DF1A3  51                        PUSH ECX
004DF1A4  56                        PUSH ESI
004DF1A5  8B F1                     MOV ESI,ECX
004DF1A7  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF1AA  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF1AD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF1B0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF1B3  C1 E1 04                  SHL ECX,0x4
004DF1B6  03 C8                     ADD ECX,EAX
004DF1B8  8B 0C 4D 0E 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f580e]
004DF1BF  85 C9                     TEST ECX,ECX
004DF1C1  0F 84 9B 00 00 00         JZ 0x004df262
004DF1C7  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
004DF1CA  57                        PUSH EDI
004DF1CB  33 FF                     XOR EDI,EDI
004DF1CD  85 C0                     TEST EAX,EAX
004DF1CF  7E 4F                     JLE 0x004df220
LAB_004df1d1:
004DF1D1  8D 55 FC                  LEA EDX,[EBP + -0x4]
004DF1D4  52                        PUSH EDX
004DF1D5  8B D7                     MOV EDX,EDI
004DF1D7  E8 94 DA 1C 00            CALL 0x006acc70
004DF1DC  39 75 FC                  CMP dword ptr [EBP + -0x4],ESI
004DF1DF  74 20                     JZ 0x004df201
004DF1E1  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF1E4  47                        INC EDI
004DF1E5  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF1E8  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF1EB  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF1EE  C1 E1 04                  SHL ECX,0x4
004DF1F1  03 C8                     ADD ECX,EAX
004DF1F3  8B 0C 4D 0E 58 7F 00      MOV ECX,dword ptr [ECX*0x2 + 0x7f580e]
004DF1FA  3B 79 0C                  CMP EDI,dword ptr [ECX + 0xc]
004DF1FD  7C D2                     JL 0x004df1d1
004DF1FF  EB 1F                     JMP 0x004df220
LAB_004df201:
004DF201  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF204  57                        PUSH EDI
004DF205  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004DF208  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
004DF20B  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
004DF20E  C1 E2 04                  SHL EDX,0x4
004DF211  03 D0                     ADD EDX,EAX
004DF213  8B 04 55 0E 58 7F 00      MOV EAX,dword ptr [EDX*0x2 + 0x7f580e]
004DF21A  50                        PUSH EAX
004DF21B  E8 50 1A 1D 00            CALL 0x006b0c70
LAB_004df220:
004DF220  8B 46 24                  MOV EAX,dword ptr [ESI + 0x24]
004DF223  5F                        POP EDI
004DF224  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004DF227  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004DF22A  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004DF22D  C1 E1 04                  SHL ECX,0x4
004DF230  03 C8                     ADD ECX,EAX
004DF232  8B 04 4D 0E 58 7F 00      MOV EAX,dword ptr [ECX*0x2 + 0x7f580e]
004DF239  8B 48 0C                  MOV ECX,dword ptr [EAX + 0xc]
004DF23C  85 C9                     TEST ECX,ECX
004DF23E  75 22                     JNZ 0x004df262
004DF240  50                        PUSH EAX
004DF241  E8 CA EE 1C 00            CALL 0x006ae110
004DF246  8B 76 24                  MOV ESI,dword ptr [ESI + 0x24]
004DF249  8D 14 B6                  LEA EDX,[ESI + ESI*0x4]
004DF24C  8D 04 D6                  LEA EAX,[ESI + EDX*0x8]
004DF24F  8D 0C 46                  LEA ECX,[ESI + EAX*0x2]
004DF252  C1 E1 04                  SHL ECX,0x4
004DF255  03 CE                     ADD ECX,ESI
004DF257  C7 04 4D 0E 58 7F 00 00 00 00 00  MOV dword ptr [ECX*0x2 + 0x7f580e],0x0
LAB_004df262:
004DF262  33 C0                     XOR EAX,EAX
004DF264  5E                        POP ESI
004DF265  8B E5                     MOV ESP,EBP
004DF267  5D                        POP EBP
004DF268  C3                        RET
