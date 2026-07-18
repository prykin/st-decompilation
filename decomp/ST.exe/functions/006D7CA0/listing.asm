FUN_006d7ca0:
006D7CA0  55                        PUSH EBP
006D7CA1  8B EC                     MOV EBP,ESP
006D7CA3  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006D7CA6  56                        PUSH ESI
006D7CA7  85 C0                     TEST EAX,EAX
006D7CA9  7E 3B                     JLE 0x006d7ce6
006D7CAB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
006D7CAE  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006D7CB1  2B F0                     SUB ESI,EAX
006D7CB3  49                        DEC ECX
006D7CB4  89 75 0C                  MOV dword ptr [EBP + 0xc],ESI
006D7CB7  78 2D                     JS 0x006d7ce6
006D7CB9  8B 75 18                  MOV ESI,dword ptr [EBP + 0x18]
006D7CBC  53                        PUSH EBX
006D7CBD  57                        PUSH EDI
006D7CBE  8D 78 FF                  LEA EDI,[EAX + -0x1]
006D7CC1  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006D7CC4  8D 51 01                  LEA EDX,[ECX + 0x1]
LAB_006d7cc7:
006D7CC7  85 FF                     TEST EDI,EDI
006D7CC9  7C 11                     JL 0x006d7cdc
006D7CCB  8D 4F 01                  LEA ECX,[EDI + 0x1]
LAB_006d7cce:
006D7CCE  33 DB                     XOR EBX,EBX
006D7CD0  8A 18                     MOV BL,byte ptr [EAX]
006D7CD2  40                        INC EAX
006D7CD3  49                        DEC ECX
006D7CD4  8A 1C 33                  MOV BL,byte ptr [EBX + ESI*0x1]
006D7CD7  88 58 FF                  MOV byte ptr [EAX + -0x1],BL
006D7CDA  75 F2                     JNZ 0x006d7cce
LAB_006d7cdc:
006D7CDC  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006D7CDF  03 C3                     ADD EAX,EBX
006D7CE1  4A                        DEC EDX
006D7CE2  75 E3                     JNZ 0x006d7cc7
006D7CE4  5F                        POP EDI
006D7CE5  5B                        POP EBX
LAB_006d7ce6:
006D7CE6  5E                        POP ESI
006D7CE7  5D                        POP EBP
006D7CE8  C2 14 00                  RET 0x14
