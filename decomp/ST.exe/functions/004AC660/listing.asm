FUN_004ac660:
004AC660  55                        PUSH EBP
004AC661  8B EC                     MOV EBP,ESP
004AC663  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC667  74 26                     JZ 0x004ac68f
004AC669  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC66C  84 C0                     TEST AL,AL
004AC66E  7C 1F                     JL 0x004ac68f
004AC670  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC673  0F BE C0                  MOVSX EAX,AL
004AC676  4A                        DEC EDX
004AC677  3B C2                     CMP EAX,EDX
004AC679  7F 14                     JG 0x004ac68f
004AC67B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC67E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC681  8D 4C 81 0D               LEA ECX,[ECX + EAX*0x4 + 0xd]
004AC685  0F BE 01                  MOVSX EAX,byte ptr [ECX]
004AC688  C6 01 00                  MOV byte ptr [ECX],0x0
004AC68B  5D                        POP EBP
004AC68C  C2 04 00                  RET 0x4
LAB_004ac68f:
004AC68F  83 C8 FF                  OR EAX,0xffffffff
004AC692  5D                        POP EBP
004AC693  C2 04 00                  RET 0x4
