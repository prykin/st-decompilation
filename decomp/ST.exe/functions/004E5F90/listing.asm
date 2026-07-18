FUN_004e5f90:
004E5F90  55                        PUSH EBP
004E5F91  8B EC                     MOV EBP,ESP
004E5F93  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5F96  85 C0                     TEST EAX,EAX
004E5F98  7C 41                     JL 0x004e5fdb
004E5F9A  83 F8 08                  CMP EAX,0x8
004E5F9D  7D 3C                     JGE 0x004e5fdb
004E5F9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5FA2  83 F9 01                  CMP ECX,0x1
004E5FA5  7C 34                     JL 0x004e5fdb
004E5FA7  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5FAD  7D 2C                     JGE 0x004e5fdb
004E5FAF  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5FB2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5FB5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5FB8  C1 E1 04                  SHL ECX,0x4
004E5FBB  03 C8                     ADD ECX,EAX
004E5FBD  8D 14 4D 33 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f5133]
004E5FC4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5FC7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5FCA  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5FCD  80 F2 07                  XOR DL,0x7
004E5FD0  33 C0                     XOR EAX,EAX
004E5FD2  0F A3 11                  BT [ECX],EDX
004E5FD5  D0 D0                     RCL AL,0x1
004E5FD7  5D                        POP EBP
004E5FD8  C2 08 00                  RET 0x8
LAB_004e5fdb:
004E5FDB  33 C0                     XOR EAX,EAX
004E5FDD  5D                        POP EBP
004E5FDE  C2 08 00                  RET 0x8
