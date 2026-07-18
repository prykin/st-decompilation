FUN_004ac830:
004AC830  55                        PUSH EBP
004AC831  8B EC                     MOV EBP,ESP
004AC833  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC837  74 33                     JZ 0x004ac86c
004AC839  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC83C  84 C0                     TEST AL,AL
004AC83E  7C 2C                     JL 0x004ac86c
004AC840  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC843  0F BE C0                  MOVSX EAX,AL
004AC846  4A                        DEC EDX
004AC847  3B C2                     CMP EAX,EDX
004AC849  7F 21                     JG 0x004ac86c
004AC84B  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC84E  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC851  8D 54 81 0E               LEA EDX,[ECX + EAX*0x4 + 0xe]
004AC855  66 8B 4C 81 0E            MOV CX,word ptr [ECX + EAX*0x4 + 0xe]
004AC85A  8B C1                     MOV EAX,ECX
004AC85C  C1 E8 02                  SHR EAX,0x2
004AC85F  83 E0 01                  AND EAX,0x1
004AC862  83 C9 04                  OR ECX,0x4
004AC865  66 89 0A                  MOV word ptr [EDX],CX
004AC868  5D                        POP EBP
004AC869  C2 04 00                  RET 0x4
LAB_004ac86c:
004AC86C  83 C8 FF                  OR EAX,0xffffffff
004AC86F  5D                        POP EBP
004AC870  C2 04 00                  RET 0x4
