FUN_004e5f20:
004E5F20  55                        PUSH EBP
004E5F21  8B EC                     MOV EBP,ESP
004E5F23  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5F26  85 C0                     TEST EAX,EAX
004E5F28  7C 39                     JL 0x004e5f63
004E5F2A  83 F8 08                  CMP EAX,0x8
004E5F2D  7D 34                     JGE 0x004e5f63
004E5F2F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5F32  83 F9 01                  CMP ECX,0x1
004E5F35  7C 2C                     JL 0x004e5f63
004E5F37  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5F3D  7D 24                     JGE 0x004e5f63
004E5F3F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5F42  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5F45  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5F48  C1 E1 04                  SHL ECX,0x4
004E5F4B  03 C8                     ADD ECX,EAX
004E5F4D  8D 14 4D 33 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f5133]
004E5F54  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5F57  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5F5A  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5F5D  80 F2 07                  XOR DL,0x7
004E5F60  0F B3 11                  BTR [ECX],EDX
LAB_004e5f63:
004E5F63  5D                        POP EBP
004E5F64  C2 08 00                  RET 0x8
