FUN_004ac8a0:
004AC8A0  55                        PUSH EBP
004AC8A1  8B EC                     MOV EBP,ESP
004AC8A3  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC8A7  74 36                     JZ 0x004ac8df
004AC8A9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC8AC  84 C0                     TEST AL,AL
004AC8AE  7C 2F                     JL 0x004ac8df
004AC8B0  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC8B3  0F BE C0                  MOVSX EAX,AL
004AC8B6  4A                        DEC EDX
004AC8B7  3B C2                     CMP EAX,EDX
004AC8B9  7F 24                     JG 0x004ac8df
004AC8BB  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC8BE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC8C1  8D 54 81 0E               LEA EDX,[ECX + EAX*0x4 + 0xe]
004AC8C5  66 8B 4C 81 0E            MOV CX,word ptr [ECX + EAX*0x4 + 0xe]
004AC8CA  8B C1                     MOV EAX,ECX
004AC8CC  C1 E8 02                  SHR EAX,0x2
004AC8CF  83 E0 01                  AND EAX,0x1
004AC8D2  81 E1 FB FF 00 00         AND ECX,0xfffb
004AC8D8  66 89 0A                  MOV word ptr [EDX],CX
004AC8DB  5D                        POP EBP
004AC8DC  C2 04 00                  RET 0x4
LAB_004ac8df:
004AC8DF  83 C8 FF                  OR EAX,0xffffffff
004AC8E2  5D                        POP EBP
004AC8E3  C2 04 00                  RET 0x4
