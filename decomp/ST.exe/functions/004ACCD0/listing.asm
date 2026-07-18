FUN_004accd0:
004ACCD0  55                        PUSH EBP
004ACCD1  8B EC                     MOV EBP,ESP
004ACCD3  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
004ACCD6  84 C0                     TEST AL,AL
004ACCD8  7C 18                     JL 0x004accf2
004ACCDA  8B 51 14                  MOV EDX,dword ptr [ECX + 0x14]
004ACCDD  0F BE C0                  MOVSX EAX,AL
004ACCE0  4A                        DEC EDX
004ACCE1  3B C2                     CMP EAX,EDX
004ACCE3  7F 0D                     JG 0x004accf2
004ACCE5  8B 49 20                  MOV ECX,dword ptr [ECX + 0x20]
004ACCE8  8D 04 C0                  LEA EAX,[EAX + EAX*0x8]
004ACCEB  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
004ACCEE  5D                        POP EBP
004ACCEF  C2 04 00                  RET 0x4
LAB_004accf2:
004ACCF2  33 C0                     XOR EAX,EAX
004ACCF4  5D                        POP EBP
004ACCF5  C2 04 00                  RET 0x4
