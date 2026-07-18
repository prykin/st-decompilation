FUN_006cfe10:
006CFE10  55                        PUSH EBP
006CFE11  8B EC                     MOV EBP,ESP
006CFE13  51                        PUSH ECX
006CFE14  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFE17  56                        PUSH ESI
006CFE18  8A 48 0D                  MOV CL,byte ptr [EAX + 0xd]
006CFE1B  8D 70 16                  LEA ESI,[EAX + 0x16]
006CFE1E  0F BF 40 12               MOVSX EAX,word ptr [EAX + 0x12]
006CFE22  C1 E9 02                  SHR ECX,0x2
006CFE25  83 E1 07                  AND ECX,0x7
006CFE28  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
006CFE2B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CFE2E  8D 14 4E                  LEA EDX,[ESI + ECX*0x2]
006CFE31  89 55 08                  MOV dword ptr [EBP + 0x8],EDX
006CFE34  99                        CDQ
006CFE35  83 E2 0F                  AND EDX,0xf
006CFE38  03 C2                     ADD EAX,EDX
006CFE3A  C1 F8 04                  SAR EAX,0x4
006CFE3D  85 C0                     TEST EAX,EAX
006CFE3F  7E 23                     JLE 0x006cfe64
006CFE41  85 C9                     TEST ECX,ECX
006CFE43  7E 1F                     JLE 0x006cfe64
006CFE45  3B C1                     CMP EAX,ECX
006CFE47  7E 02                     JLE 0x006cfe4b
006CFE49  8B C1                     MOV EAX,ECX
LAB_006cfe4b:
006CFE4B  33 C9                     XOR ECX,ECX
006CFE4D  66 8B 4C 46 FE            MOV CX,word ptr [ESI + EAX*0x2 + -0x2]
006CFE52  03 CE                     ADD ECX,ESI
006CFE54  F7 D8                     NEG EAX
006CFE56  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
006CFE59  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006CFE5C  C1 E0 04                  SHL EAX,0x4
006CFE5F  03 C8                     ADD ECX,EAX
006CFE61  89 4D 0C                  MOV dword ptr [EBP + 0xc],ECX
LAB_006cfe64:
006CFE64  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006CFE67  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006CFE6A  F7 65 FC                  MUL dword ptr [EBP + -0x4]
006CFE6D  8B D0                     MOV EDX,EAX
006CFE6F  33 C9                     XOR ECX,ECX
LAB_006cfe71:
006CFE71  2B D1                     SUB EDX,ECX
006CFE73  7E 25                     JLE 0x006cfe9a
006CFE75  33 C9                     XOR ECX,ECX
006CFE77  8A 0E                     MOV CL,byte ptr [ESI]
006CFE79  46                        INC ESI
006CFE7A  0B C9                     OR ECX,ECX
006CFE7C  74 17                     JZ 0x006cfe95
006CFE7E  F6 C1 80                  TEST CL,0x80
006CFE81  74 EE                     JZ 0x006cfe71
006CFE83  F6 C1 40                  TEST CL,0x40
006CFE86  74 06                     JZ 0x006cfe8e
006CFE88  46                        INC ESI
006CFE89  80 E1 3F                  AND CL,0x3f
006CFE8C  EB E3                     JMP 0x006cfe71
LAB_006cfe8e:
006CFE8E  80 E1 3F                  AND CL,0x3f
006CFE91  03 F1                     ADD ESI,ECX
006CFE93  EB DC                     JMP 0x006cfe71
LAB_006cfe95:
006CFE95  2B 55 FC                  SUB EDX,dword ptr [EBP + -0x4]
006CFE98  7F D7                     JG 0x006cfe71
LAB_006cfe9a:
006CFE9A  89 75 08                  MOV dword ptr [EBP + 0x8],ESI
006CFE9D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006CFEA0  5E                        POP ESI
006CFEA1  8B E5                     MOV ESP,EBP
006CFEA3  5D                        POP EBP
006CFEA4  C2 08 00                  RET 0x8
