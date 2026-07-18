FUN_004407a0:
004407A0  55                        PUSH EBP
004407A1  8B EC                     MOV EBP,ESP
004407A3  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004407A7  53                        PUSH EBX
004407A8  56                        PUSH ESI
004407A9  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004407AC  57                        PUSH EDI
004407AD  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004407B0  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004407B3  C1 E1 04                  SHL ECX,0x4
004407B6  03 C8                     ADD ECX,EAX
004407B8  8B 3C 4D 25 4E 7F 00      MOV EDI,dword ptr [ECX*0x2 + 0x7f4e25]
004407BF  85 FF                     TEST EDI,EDI
004407C1  74 33                     JZ 0x004407f6
004407C3  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
004407C6  85 DB                     TEST EBX,EBX
004407C8  76 2C                     JBE 0x004407f6
004407CA  33 F6                     XOR ESI,ESI
004407CC  85 DB                     TEST EBX,EBX
004407CE  7E 26                     JLE 0x004407f6
LAB_004407d0:
004407D0  8D 55 08                  LEA EDX,[EBP + 0x8]
004407D3  8B CF                     MOV ECX,EDI
004407D5  52                        PUSH EDX
004407D6  8B D6                     MOV EDX,ESI
004407D8  E8 93 C4 26 00            CALL 0x006acc70
004407DD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004407E0  85 C9                     TEST ECX,ECX
004407E2  74 0D                     JZ 0x004407f1
004407E4  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
004407E7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004407EA  50                        PUSH EAX
004407EB  52                        PUSH EDX
004407EC  E8 9A 2C FC FF            CALL 0x0040348b
LAB_004407f1:
004407F1  46                        INC ESI
004407F2  3B F3                     CMP ESI,EBX
004407F4  7C DA                     JL 0x004407d0
LAB_004407f6:
004407F6  5F                        POP EDI
004407F7  5E                        POP ESI
004407F8  5B                        POP EBX
004407F9  5D                        POP EBP
004407FA  C2 0C 00                  RET 0xc
