FUN_005b8f90:
005B8F90  55                        PUSH EBP
005B8F91  8B EC                     MOV EBP,ESP
005B8F93  56                        PUSH ESI
005B8F94  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
005B8F97  85 F6                     TEST ESI,ESI
005B8F99  74 4B                     JZ 0x005b8fe6
005B8F9B  8A 81 9A 00 00 00         MOV AL,byte ptr [ECX + 0x9a]
005B8FA1  C6 45 08 00               MOV byte ptr [EBP + 0x8],0x0
005B8FA5  84 C0                     TEST AL,AL
005B8FA7  76 3D                     JBE 0x005b8fe6
LAB_005b8fa9:
005B8FA9  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005B8FAC  25 FF 00 00 00            AND EAX,0xff
005B8FB1  80 3C 30 00               CMP byte ptr [EAX + ESI*0x1],0x0
005B8FB5  74 1D                     JZ 0x005b8fd4
005B8FB7  8D 14 C5 00 00 00 00      LEA EDX,[EAX*0x8 + 0x0]
005B8FBE  2B D0                     SUB EDX,EAX
005B8FC0  8D 14 52                  LEA EDX,[EDX + EDX*0x2]
005B8FC3  8D 04 D0                  LEA EAX,[EAX + EDX*0x8]
005B8FC6  8D 14 41                  LEA EDX,[ECX + EAX*0x2]
005B8FC9  C7 84 10 BC 00 00 00 00 00 00 00  MOV dword ptr [EAX + EDX*0x1 + 0xbc],0x0
LAB_005b8fd4:
005B8FD4  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
005B8FD7  8A 91 9A 00 00 00         MOV DL,byte ptr [ECX + 0x9a]
005B8FDD  FE C0                     INC AL
005B8FDF  3A C2                     CMP AL,DL
005B8FE1  88 45 08                  MOV byte ptr [EBP + 0x8],AL
005B8FE4  72 C3                     JC 0x005b8fa9
LAB_005b8fe6:
005B8FE6  5E                        POP ESI
005B8FE7  5D                        POP EBP
005B8FE8  C2 04 00                  RET 0x4
