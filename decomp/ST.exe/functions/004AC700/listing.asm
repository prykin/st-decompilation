FUN_004ac700:
004AC700  55                        PUSH EBP
004AC701  8B EC                     MOV EBP,ESP
004AC703  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC707  74 26                     JZ 0x004ac72f
004AC709  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC70C  84 C0                     TEST AL,AL
004AC70E  7C 1F                     JL 0x004ac72f
004AC710  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC713  0F BE C0                  MOVSX EAX,AL
004AC716  4A                        DEC EDX
004AC717  3B C2                     CMP EAX,EDX
004AC719  7F 14                     JG 0x004ac72f
004AC71B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC71E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC721  8D 4C 81 0D               LEA ECX,[ECX + EAX*0x4 + 0xd]
004AC725  0F BE 01                  MOVSX EAX,byte ptr [ECX]
004AC728  C6 01 02                  MOV byte ptr [ECX],0x2
004AC72B  5D                        POP EBP
004AC72C  C2 04 00                  RET 0x4
LAB_004ac72f:
004AC72F  83 C8 FF                  OR EAX,0xffffffff
004AC732  5D                        POP EBP
004AC733  C2 04 00                  RET 0x4
