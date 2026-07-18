FUN_004ac5a0:
004AC5A0  55                        PUSH EBP
004AC5A1  8B EC                     MOV EBP,ESP
004AC5A3  83 79 18 FF               CMP dword ptr [ECX + 0x18],-0x1
004AC5A7  74 36                     JZ 0x004ac5df
004AC5A9  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004AC5AC  84 C0                     TEST AL,AL
004AC5AE  7C 2F                     JL 0x004ac5df
004AC5B0  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004AC5B3  0F BE C0                  MOVSX EAX,AL
004AC5B6  4A                        DEC EDX
004AC5B7  3B C2                     CMP EAX,EDX
004AC5B9  7F 24                     JG 0x004ac5df
004AC5BB  8B 51 20                  MOV EDX,dword ptr [ECX + 0x20]
004AC5BE  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004AC5C1  C1 E0 02                  SHL EAX,0x2
004AC5C4  66 81 64 10 0E FE FF      AND word ptr [EAX + EDX*0x1 + 0xe],0xfffe
004AC5CB  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004AC5CE  8D 54 10 0E               LEA EDX,[EAX + EDX*0x1 + 0xe]
004AC5D2  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
004AC5D5  89 54 08 1C               MOV dword ptr [EAX + ECX*0x1 + 0x1c],EDX
004AC5D9  33 C0                     XOR EAX,EAX
004AC5DB  5D                        POP EBP
004AC5DC  C2 08 00                  RET 0x8
LAB_004ac5df:
004AC5DF  83 C8 FF                  OR EAX,0xffffffff
004AC5E2  5D                        POP EBP
004AC5E3  C2 08 00                  RET 0x8
