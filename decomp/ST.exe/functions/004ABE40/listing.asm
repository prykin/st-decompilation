STT3DSprC::SetCurFase:
004ABE40  55                        PUSH EBP
004ABE41  8B EC                     MOV EBP,ESP
004ABE43  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004ABE46  56                        PUSH ESI
004ABE47  83 F8 FF                  CMP EAX,-0x1
004ABE4A  74 74                     JZ 0x004abec0
004ABE4C  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004ABE4F  84 C0                     TEST AL,AL
004ABE51  7C 48                     JL 0x004abe9b
004ABE53  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004ABE56  0F BE C0                  MOVSX EAX,AL
004ABE59  4A                        DEC EDX
004ABE5A  3B C2                     CMP EAX,EDX
004ABE5C  7F 3D                     JG 0x004abe9b
004ABE5E  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004ABE61  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ABE64  C1 E0 02                  SHL EAX,0x2
004ABE67  03 D0                     ADD EDX,EAX
004ABE69  8B 32                     MOV ESI,dword ptr [EDX]
004ABE6B  85 F6                     TEST ESI,ESI
004ABE6D  74 51                     JZ 0x004abec0
004ABE6F  57                        PUSH EDI
004ABE70  8B 7A 18                  MOV EDI,dword ptr [EDX + 0x18]
004ABE73  85 FF                     TEST EDI,EDI
004ABE75  7C 12                     JL 0x004abe89
004ABE77  53                        PUSH EBX
004ABE78  8B 1E                     MOV EBX,dword ptr [ESI]
004ABE7A  3B FB                     CMP EDI,EBX
004ABE7C  5B                        POP EBX
004ABE7D  7D 0A                     JGE 0x004abe89
004ABE7F  8B 52 04                  MOV EDX,dword ptr [EDX + 0x4]
004ABE82  8B 74 BE 31               MOV ESI,dword ptr [ESI + EDI*0x4 + 0x31]
004ABE86  89 34 BA                  MOV dword ptr [EDX + EDI*0x4],ESI
LAB_004abe89:
004ABE89  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ABE8C  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004ABE8F  5F                        POP EDI
004ABE90  5E                        POP ESI
004ABE91  89 54 08 18               MOV dword ptr [EAX + ECX*0x1 + 0x18],EDX
004ABE95  33 C0                     XOR EAX,EAX
004ABE97  5D                        POP EBP
004ABE98  C2 08 00                  RET 0x8
LAB_004abe9b:
004ABE9B  68 7C C6 7A 00            PUSH 0x7ac67c
004ABEA0  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ABEA5  6A 00                     PUSH 0x0
004ABEA7  6A 00                     PUSH 0x0
004ABEA9  68 93 00 00 00            PUSH 0x93
004ABEAE  68 38 C6 7A 00            PUSH 0x7ac638
004ABEB3  E8 18 16 20 00            CALL 0x006ad4d0
004ABEB8  83 C4 18                  ADD ESP,0x18
004ABEBB  85 C0                     TEST EAX,EAX
004ABEBD  74 01                     JZ 0x004abec0
004ABEBF  CC                        INT3
LAB_004abec0:
004ABEC0  83 C8 FF                  OR EAX,0xffffffff
004ABEC3  5E                        POP ESI
004ABEC4  5D                        POP EBP
004ABEC5  C2 08 00                  RET 0x8
