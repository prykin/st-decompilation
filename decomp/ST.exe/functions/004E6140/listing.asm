FUN_004e6140:
004E6140  55                        PUSH EBP
004E6141  8B EC                     MOV EBP,ESP
004E6143  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6146  85 C0                     TEST EAX,EAX
004E6148  7C 30                     JL 0x004e617a
004E614A  83 F8 08                  CMP EAX,0x8
004E614D  7D 2B                     JGE 0x004e617a
004E614F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E6152  83 F9 01                  CMP ECX,0x1
004E6155  7C 23                     JL 0x004e617a
004E6157  81 F9 9B 00 00 00         CMP ECX,0x9b
004E615D  7D 1B                     JGE 0x004e617a
004E615F  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E6162  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E6165  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E6168  C1 E2 04                  SHL EDX,0x4
004E616B  03 D0                     ADD EDX,EAX
004E616D  33 C0                     XOR EAX,EAX
004E616F  8A 84 51 5B 55 7F 00      MOV AL,byte ptr [ECX + EDX*0x2 + 0x7f555b]
004E6176  5D                        POP EBP
004E6177  C2 08 00                  RET 0x8
LAB_004e617a:
004E617A  33 C0                     XOR EAX,EAX
004E617C  5D                        POP EBP
004E617D  C2 08 00                  RET 0x8
