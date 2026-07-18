FUN_004e5c40:
004E5C40  55                        PUSH EBP
004E5C41  8B EC                     MOV EBP,ESP
004E5C43  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E5C46  85 C0                     TEST EAX,EAX
004E5C48  7C 41                     JL 0x004e5c8b
004E5C4A  83 F8 08                  CMP EAX,0x8
004E5C4D  7D 3C                     JGE 0x004e5c8b
004E5C4F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
004E5C52  83 F9 01                  CMP ECX,0x1
004E5C55  7C 34                     JL 0x004e5c8b
004E5C57  81 F9 9B 00 00 00         CMP ECX,0x9b
004E5C5D  7D 2C                     JGE 0x004e5c8b
004E5C5F  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
004E5C62  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
004E5C65  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
004E5C68  C1 E1 04                  SHL ECX,0x4
004E5C6B  03 C8                     ADD ECX,EAX
004E5C6D  8D 14 4D 1F 51 7F 00      LEA EDX,[ECX*0x2 + 0x7f511f]
004E5C74  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
004E5C77  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004E5C7A  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004E5C7D  80 F2 07                  XOR DL,0x7
004E5C80  33 C0                     XOR EAX,EAX
004E5C82  0F A3 11                  BT [ECX],EDX
004E5C85  D0 D0                     RCL AL,0x1
004E5C87  5D                        POP EBP
004E5C88  C2 08 00                  RET 0x8
LAB_004e5c8b:
004E5C8B  33 C0                     XOR EAX,EAX
004E5C8D  5D                        POP EBP
004E5C8E  C2 08 00                  RET 0x8
