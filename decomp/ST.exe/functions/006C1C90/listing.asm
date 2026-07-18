FUN_006c1c90:
006C1C90  55                        PUSH EBP
006C1C91  8B EC                     MOV EBP,ESP
006C1C93  A1 B4 68 85 00            MOV EAX,[0x008568b4]
006C1C98  85 C0                     TEST EAX,EAX
006C1C9A  74 3D                     JZ 0x006c1cd9
006C1C9C  68 98 68 85 00            PUSH 0x856898
006C1CA1  FF 15 8C BB 85 00         CALL dword ptr [0x0085bb8c]
006C1CA7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006C1CAA  85 C9                     TEST ECX,ECX
006C1CAC  7C 20                     JL 0x006c1cce
006C1CAE  83 F9 20                  CMP ECX,0x20
006C1CB1  7D 1B                     JGE 0x006c1cce
006C1CB3  8D 04 49                  LEA EAX,[ECX + ECX*0x2]
006C1CB6  C1 E0 04                  SHL EAX,0x4
006C1CB9  03 C1                     ADD EAX,ECX
006C1CBB  C1 E0 02                  SHL EAX,0x2
006C1CBE  F6 80 F8 4F 85 00 01      TEST byte ptr [EAX + 0x854ff8],0x1
006C1CC5  74 07                     JZ 0x006c1cce
006C1CC7  83 A0 FC 4F 85 00 FE      AND dword ptr [EAX + 0x854ffc],0xfffffffe
LAB_006c1cce:
006C1CCE  68 98 68 85 00            PUSH 0x856898
006C1CD3  FF 15 90 BB 85 00         CALL dword ptr [0x0085bb90]
LAB_006c1cd9:
006C1CD9  5D                        POP EBP
006C1CDA  C2 04 00                  RET 0x4
