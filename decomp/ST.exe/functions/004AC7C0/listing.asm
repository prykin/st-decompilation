FUN_004ac7c0:
004AC7C0  55                        PUSH EBP
004AC7C1  8B EC                     MOV EBP,ESP
004AC7C3  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC7C7  74 32                     JZ 0x004ac7fb
004AC7C9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC7CC  84 C0                     TEST AL,AL
004AC7CE  7C 2B                     JL 0x004ac7fb
004AC7D0  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC7D3  0F BE C0                  MOVSX EAX,AL
004AC7D6  4A                        DEC EDX
004AC7D7  3B C2                     CMP EAX,EDX
004AC7D9  7F 20                     JG 0x004ac7fb
004AC7DB  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC7DE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC7E1  8D 54 81 0E               LEA EDX,[ECX + EAX*0x4 + 0xe]
004AC7E5  66 8B 4C 81 0E            MOV CX,word ptr [ECX + EAX*0x4 + 0xe]
004AC7EA  8B C1                     MOV EAX,ECX
004AC7EC  D1 E8                     SHR EAX,0x1
004AC7EE  83 E0 01                  AND EAX,0x1
004AC7F1  83 C9 02                  OR ECX,0x2
004AC7F4  66 89 0A                  MOV word ptr [EDX],CX
004AC7F7  5D                        POP EBP
004AC7F8  C2 04 00                  RET 0x4
LAB_004ac7fb:
004AC7FB  83 C8 FF                  OR EAX,0xffffffff
004AC7FE  5D                        POP EBP
004AC7FF  C2 04 00                  RET 0x4
