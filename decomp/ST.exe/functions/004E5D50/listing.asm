FUN_004e5d50:
004E5D50  55                        PUSH EBP
004E5D51  8B EC                     MOV EBP,ESP
004E5D53  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5D56  85 C0                     TEST EAX,EAX
004E5D58  7C 39                     JL 0x004e5d93
004E5D5A  83 F8 08                  CMP EAX,0x8
004E5D5D  7D 34                     JGE 0x004e5d93
004E5D5F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5D62  83 F9 01                  CMP ECX,0x1
004E5D65  7C 2C                     JL 0x004e5d93
004E5D67  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5D6D  7D 24                     JGE 0x004e5d93
004E5D6F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5D72  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5D75  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5D78  C1 E1 04                  SHL ECX,0x4
004E5D7B  03 C8                     ADD ECX,EAX
004E5D7D  8D 14 4D 1F 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f511f]
004E5D84  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5D87  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5D8A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5D8D  80 F2 07                  XOR DL,0x7
004E5D90  0F AB 11                  BTS [ECX],EDX
LAB_004e5d93:
004E5D93  5D                        POP EBP
004E5D94  C2 08 00                  RET 0x8
