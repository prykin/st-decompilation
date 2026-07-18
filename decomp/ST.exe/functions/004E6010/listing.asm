FUN_004e6010:
004E6010  55                        PUSH EBP
004E6011  8B EC                     MOV EBP,ESP
004E6013  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6016  85 C0                     TEST EAX,EAX
004E6018  7C 31                     JL 0x004e604b
004E601A  83 F8 08                  CMP EAX,0x8
004E601D  7D 2C                     JGE 0x004e604b
004E601F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E6022  85 C9                     TEST ECX,ECX
004E6024  7C 25                     JL 0x004e604b
004E6026  83 F9 6A                  CMP ECX,0x6a
004E6029  7D 20                     JGE 0x004e604b
004E602B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E602E  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E6031  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E6034  C1 E2 04                  SHL EDX,0x4
004E6037  03 D0                     ADD EDX,EAX
004E6039  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
004E6040  8B 84 50 B3 53 7F 00      MOV EAX,dword ptr [EAX + EDX*0x2 + 0x7f53b3]
004E6047  5D                        POP EBP
004E6048  C2 08 00                  RET 0x8
LAB_004e604b:
004E604B  33 C0                     XOR EAX,EAX
004E604D  5D                        POP EBP
004E604E  C2 08 00                  RET 0x8
