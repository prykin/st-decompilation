FUN_004ac6b0:
004AC6B0  55                        PUSH EBP
004AC6B1  8B EC                     MOV EBP,ESP
004AC6B3  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC6B7  74 26                     JZ 0x004ac6df
004AC6B9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC6BC  84 C0                     TEST AL,AL
004AC6BE  7C 1F                     JL 0x004ac6df
004AC6C0  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC6C3  0F BE C0                  MOVSX EAX,AL
004AC6C6  4A                        DEC EDX
004AC6C7  3B C2                     CMP EAX,EDX
004AC6C9  7F 14                     JG 0x004ac6df
004AC6CB  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC6CE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC6D1  8D 4C 81 0D               LEA ECX,[ECX + EAX*0x4 + 0xd]
004AC6D5  0F BE 01                  MOVSX EAX,byte ptr [ECX]
004AC6D8  C6 01 01                  MOV byte ptr [ECX],0x1
004AC6DB  5D                        POP EBP
004AC6DC  C2 04 00                  RET 0x4
LAB_004ac6df:
004AC6DF  83 C8 FF                  OR EAX,0xffffffff
004AC6E2  5D                        POP EBP
004AC6E3  C2 04 00                  RET 0x4
