FUN_004e5eb0:
004E5EB0  55                        PUSH EBP
004E5EB1  8B EC                     MOV EBP,ESP
004E5EB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5EB6  85 C0                     TEST EAX,EAX
004E5EB8  7C 39                     JL 0x004e5ef3
004E5EBA  83 F8 08                  CMP EAX,0x8
004E5EBD  7D 34                     JGE 0x004e5ef3
004E5EBF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5EC2  83 F9 01                  CMP ECX,0x1
004E5EC5  7C 2C                     JL 0x004e5ef3
004E5EC7  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5ECD  7D 24                     JGE 0x004e5ef3
004E5ECF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5ED2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5ED5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5ED8  C1 E1 04                  SHL ECX,0x4
004E5EDB  03 C8                     ADD ECX,EAX
004E5EDD  8D 14 4D 33 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f5133]
004E5EE4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5EE7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5EEA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5EED  80 F2 07                  XOR DL,0x7
004E5EF0  0F AB 11                  BTS [ECX],EDX
LAB_004e5ef3:
004E5EF3  5D                        POP EBP
004E5EF4  C2 08 00                  RET 0x8
