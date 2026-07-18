FUN_004e5a80:
004E5A80  55                        PUSH EBP
004E5A81  8B EC                     MOV EBP,ESP
004E5A83  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5A86  85 C0                     TEST EAX,EAX
004E5A88  7C 39                     JL 0x004e5ac3
004E5A8A  83 F8 08                  CMP EAX,0x8
004E5A8D  7D 34                     JGE 0x004e5ac3
004E5A8F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5A92  83 F9 01                  CMP ECX,0x1
004E5A95  7C 2C                     JL 0x004e5ac3
004E5A97  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5A9D  7D 24                     JGE 0x004e5ac3
004E5A9F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5AA2  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5AA5  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5AA8  C1 E1 04                  SHL ECX,0x4
004E5AAB  03 C8                     ADD ECX,EAX
004E5AAD  8D 14 4D 0B 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f510b]
004E5AB4  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5AB7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5ABA  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5ABD  80 F2 07                  XOR DL,0x7
004E5AC0  0F B3 11                  BTR [ECX],EDX
LAB_004e5ac3:
004E5AC3  5D                        POP EBP
004E5AC4  C2 08 00                  RET 0x8
