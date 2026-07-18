FUN_005ecd70:
005ECD70  55                        PUSH EBP
005ECD71  8B EC                     MOV EBP,ESP
005ECD73  53                        PUSH EBX
005ECD74  8A 5D 18                  MOV BL,byte ptr [EBP + 0x18]
005ECD77  56                        PUSH ESI
005ECD78  8B F1                     MOV ESI,ECX
005ECD7A  57                        PUSH EDI
005ECD7B  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
005ECD7E  8B 86 77 02 00 00         MOV EAX,dword ptr [ESI + 0x277]
005ECD84  8B 8E 7B 02 00 00         MOV ECX,dword ptr [ESI + 0x27b]
005ECD8A  8B 96 7F 02 00 00         MOV EDX,dword ptr [ESI + 0x27f]
005ECD90  89 86 5B 02 00 00         MOV dword ptr [ESI + 0x25b],EAX
005ECD96  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ECD99  89 8E 5F 02 00 00         MOV dword ptr [ESI + 0x25f],ECX
005ECD9F  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005ECDA2  89 96 63 02 00 00         MOV dword ptr [ESI + 0x263],EDX
005ECDA8  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005ECDAB  88 9E 5A 02 00 00         MOV byte ptr [ESI + 0x25a],BL
005ECDB1  89 86 67 02 00 00         MOV dword ptr [ESI + 0x267],EAX
005ECDB7  89 8E 6B 02 00 00         MOV dword ptr [ESI + 0x26b],ECX
005ECDBD  89 96 6F 02 00 00         MOV dword ptr [ESI + 0x26f],EDX
005ECDC3  C7 86 83 02 00 00 01 00 00 00  MOV dword ptr [ESI + 0x283],0x1
005ECDCD  A1 38 2A 80 00            MOV EAX,[0x00802a38]
005ECDD2  8B 88 E4 00 00 00         MOV ECX,dword ptr [EAX + 0xe4]
005ECDD8  89 BE 73 02 00 00         MOV dword ptr [ESI + 0x273],EDI
005ECDDE  89 8E 8F 02 00 00         MOV dword ptr [ESI + 0x28f],ECX
005ECDE4  8B CE                     MOV ECX,ESI
005ECDE6  E8 AB 42 E1 FF            CALL 0x00401096
005ECDEB  8B 86 BA 02 00 00         MOV EAX,dword ptr [ESI + 0x2ba]
005ECDF1  3B C7                     CMP EAX,EDI
005ECDF3  74 15                     JZ 0x005ece0a
005ECDF5  8D 04 40                  LEA EAX,[EAX + EAX*0x2]
005ECDF8  57                        PUSH EDI
005ECDF9  8B CE                     MOV ECX,ESI
005ECDFB  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
005ECDFE  52                        PUSH EDX
005ECDFF  E8 52 5F E1 FF            CALL 0x00402d56
005ECE04  89 86 8B 02 00 00         MOV dword ptr [ESI + 0x28b],EAX
LAB_005ece0a:
005ECE0A  84 DB                     TEST BL,BL
005ECE0C  75 25                     JNZ 0x005ece33
005ECE0E  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
005ECE11  8B 8E 77 02 00 00         MOV ECX,dword ptr [ESI + 0x277]
005ECE17  3B C1                     CMP EAX,ECX
005ECE19  75 11                     JNZ 0x005ece2c
005ECE1B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005ECE1E  8B 86 7B 02 00 00         MOV EAX,dword ptr [ESI + 0x27b]
005ECE24  3B C8                     CMP ECX,EAX
005ECE26  0F 84 06 01 00 00         JZ 0x005ecf32
LAB_005ece2c:
005ECE2C  C6 86 5A 02 00 00 01      MOV byte ptr [ESI + 0x25a],0x1
LAB_005ece33:
005ECE33  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
005ECE36  8B 8E 6F 02 00 00         MOV ECX,dword ptr [ESI + 0x26f]
005ECE3C  8B 96 6B 02 00 00         MOV EDX,dword ptr [ESI + 0x26b]
005ECE42  89 86 87 02 00 00         MOV dword ptr [ESI + 0x287],EAX
005ECE48  8B 86 67 02 00 00         MOV EAX,dword ptr [ESI + 0x267]
005ECE4E  51                        PUSH ECX
005ECE4F  8B 8E 63 02 00 00         MOV ECX,dword ptr [ESI + 0x263]
005ECE55  52                        PUSH EDX
005ECE56  8B 96 5F 02 00 00         MOV EDX,dword ptr [ESI + 0x25f]
005ECE5C  50                        PUSH EAX
005ECE5D  8B 86 5B 02 00 00         MOV EAX,dword ptr [ESI + 0x25b]
005ECE63  51                        PUSH ECX
005ECE64  52                        PUSH EDX
005ECE65  50                        PUSH EAX
005ECE66  E8 A2 00 0C 00            CALL 0x006acf0d
005ECE6B  8B C8                     MOV ECX,EAX
005ECE6D  83 C4 18                  ADD ESP,0x18
005ECE70  85 C9                     TEST ECX,ECX
005ECE72  0F 84 DD 00 00 00         JZ 0x005ecf55
005ECE78  8B BE 67 02 00 00         MOV EDI,dword ptr [ESI + 0x267]
005ECE7E  8B 9E 5B 02 00 00         MOV EBX,dword ptr [ESI + 0x25b]
005ECE84  8B C7                     MOV EAX,EDI
005ECE86  2B C3                     SUB EAX,EBX
005ECE88  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECE8B  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECE8E  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECE91  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECE94  C1 E0 04                  SHL EAX,0x4
005ECE97  99                        CDQ
005ECE98  F7 F9                     IDIV ECX
005ECE9A  8B 96 5F 02 00 00         MOV EDX,dword ptr [ESI + 0x25f]
005ECEA0  89 86 97 02 00 00         MOV dword ptr [ESI + 0x297],EAX
005ECEA6  8B 86 6B 02 00 00         MOV EAX,dword ptr [ESI + 0x26b]
005ECEAC  2B C2                     SUB EAX,EDX
005ECEAE  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEB1  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEB4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEB7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEBA  C1 E0 04                  SHL EAX,0x4
005ECEBD  99                        CDQ
005ECEBE  F7 F9                     IDIV ECX
005ECEC0  8B 96 63 02 00 00         MOV EDX,dword ptr [ESI + 0x263]
005ECEC6  89 86 9B 02 00 00         MOV dword ptr [ESI + 0x29b],EAX
005ECECC  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
005ECED2  2B C2                     SUB EAX,EDX
005ECED4  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECED7  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEDA  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEDD  8D 04 80                  LEA EAX,[EAX + EAX*0x4]
005ECEE0  C1 E0 04                  SHL EAX,0x4
005ECEE3  99                        CDQ
005ECEE4  F7 F9                     IDIV ECX
005ECEE6  89 86 9F 02 00 00         MOV dword ptr [ESI + 0x29f],EAX
005ECEEC  8B 86 63 02 00 00         MOV EAX,dword ptr [ESI + 0x263]
005ECEF2  50                        PUSH EAX
005ECEF3  8B 86 5F 02 00 00         MOV EAX,dword ptr [ESI + 0x25f]
005ECEF9  50                        PUSH EAX
005ECEFA  8B 86 6F 02 00 00         MOV EAX,dword ptr [ESI + 0x26f]
005ECF00  53                        PUSH EBX
005ECF01  50                        PUSH EAX
005ECF02  8B 86 6B 02 00 00         MOV EAX,dword ptr [ESI + 0x26b]
005ECF08  50                        PUSH EAX
005ECF09  57                        PUSH EDI
005ECF0A  E8 FE FF 0B 00            CALL 0x006acf0d
005ECF0F  89 86 93 02 00 00         MOV dword ptr [ESI + 0x293],EAX
005ECF15  8B 86 1C 03 00 00         MOV EAX,dword ptr [ESI + 0x31c]
005ECF1B  83 C4 18                  ADD ESP,0x18
005ECF1E  24 FE                     AND AL,0xfe
005ECF20  89 86 1C 03 00 00         MOV dword ptr [ESI + 0x31c],EAX
005ECF26  B8 01 00 00 00            MOV EAX,0x1
005ECF2B  5F                        POP EDI
005ECF2C  5E                        POP ESI
005ECF2D  5B                        POP EBX
005ECF2E  5D                        POP EBP
005ECF2F  C2 18 00                  RET 0x18
LAB_005ecf32:
005ECF32  8B 8E 1C 03 00 00         MOV ECX,dword ptr [ESI + 0x31c]
005ECF38  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
005ECF3B  B8 01 00 00 00            MOV EAX,0x1
005ECF40  89 96 87 02 00 00         MOV dword ptr [ESI + 0x287],EDX
005ECF46  0B C8                     OR ECX,EAX
005ECF48  5F                        POP EDI
005ECF49  89 8E 1C 03 00 00         MOV dword ptr [ESI + 0x31c],ECX
005ECF4F  5E                        POP ESI
005ECF50  5B                        POP EBX
005ECF51  5D                        POP EBP
005ECF52  C2 18 00                  RET 0x18
LAB_005ecf55:
005ECF55  5F                        POP EDI
005ECF56  5E                        POP ESI
005ECF57  33 C0                     XOR EAX,EAX
005ECF59  5B                        POP EBX
005ECF5A  5D                        POP EBP
005ECF5B  C2 18 00                  RET 0x18
