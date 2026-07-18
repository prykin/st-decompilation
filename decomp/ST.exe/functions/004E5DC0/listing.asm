FUN_004e5dc0:
004E5DC0  55                        PUSH EBP
004E5DC1  8B EC                     MOV EBP,ESP
004E5DC3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5DC6  85 C0                     TEST EAX,EAX
004E5DC8  7C 39                     JL 0x004e5e03
004E5DCA  83 F8 08                  CMP EAX,0x8
004E5DCD  7D 34                     JGE 0x004e5e03
004E5DCF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5DD2  83 F9 01                  CMP ECX,0x1
004E5DD5  7C 2C                     JL 0x004e5e03
004E5DD7  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5DDD  7D 24                     JGE 0x004e5e03
004E5DDF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5DE2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5DE5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5DE8  C1 E1 04                  SHL ECX,0x4
004E5DEB  03 C8                     ADD ECX,EAX
004E5DED  8D 14 4D 1F 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f511f]
004E5DF4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5DF7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5DFA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5DFD  80 F2 07                  XOR DL,0x7
004E5E00  0F B3 11                  BTR [ECX],EDX
LAB_004e5e03:
004E5E03  5D                        POP EBP
004E5E04  C2 08 00                  RET 0x8
