FUN_004e6080:
004E6080  55                        PUSH EBP
004E6081  8B EC                     MOV EBP,ESP
004E6083  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6086  85 C0                     TEST EAX,EAX
004E6088  7C 30                     JL 0x004e60ba
004E608A  83 F8 08                  CMP EAX,0x8
004E608D  7D 2B                     JGE 0x004e60ba
004E608F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E6092  85 C9                     TEST ECX,ECX
004E6094  7C 24                     JL 0x004e60ba
004E6096  83 F9 6A                  CMP ECX,0x6a
004E6099  7D 1F                     JGE 0x004e60ba
004E609B  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E609E  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E60A1  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E60A4  C1 E2 04                  SHL EDX,0x4
004E60A7  03 D0                     ADD EDX,EAX
004E60A9  8D 04 8D 00 00 00 00      LEA EAX,[ECX*0x4 + 0x0]
004E60B0  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
004E60B3  89 8C 50 B3 53 7F 00      MOV dword ptr [EAX + EDX*0x2 + 0x7f53b3],ECX
LAB_004e60ba:
004E60BA  5D                        POP EBP
004E60BB  C2 0C 00                  RET 0xc
