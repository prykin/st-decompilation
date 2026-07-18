FUN_004e5a10:
004E5A10  55                        PUSH EBP
004E5A11  8B EC                     MOV EBP,ESP
004E5A13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5A16  85 C0                     TEST EAX,EAX
004E5A18  7C 39                     JL 0x004e5a53
004E5A1A  83 F8 08                  CMP EAX,0x8
004E5A1D  7D 34                     JGE 0x004e5a53
004E5A1F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5A22  83 F9 01                  CMP ECX,0x1
004E5A25  7C 2C                     JL 0x004e5a53
004E5A27  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5A2D  7D 24                     JGE 0x004e5a53
004E5A2F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5A32  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5A35  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5A38  C1 E1 04                  SHL ECX,0x4
004E5A3B  03 C8                     ADD ECX,EAX
004E5A3D  8D 14 4D 0B 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f510b]
004E5A44  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5A47  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5A4A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5A4D  80 F2 07                  XOR DL,0x7
004E5A50  0F AB 11                  BTS [ECX],EDX
LAB_004e5a53:
004E5A53  5D                        POP EBP
004E5A54  C2 08 00                  RET 0x8
