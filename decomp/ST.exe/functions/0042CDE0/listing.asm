FUN_0042cde0:
0042CDE0  55                        PUSH EBP
0042CDE1  8B EC                     MOV EBP,ESP
0042CDE3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042CDE6  53                        PUSH EBX
0042CDE7  56                        PUSH ESI
0042CDE8  83 E8 00                  SUB EAX,0x0
0042CDEB  57                        PUSH EDI
0042CDEC  74 4C                     JZ 0x0042ce3a
0042CDEE  48                        DEC EAX
0042CDEF  74 2E                     JZ 0x0042ce1f
0042CDF1  68 0C 63 7A 00            PUSH 0x7a630c
0042CDF6  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042CDFB  6A 00                     PUSH 0x0
0042CDFD  6A 00                     PUSH 0x0
0042CDFF  68 6A 03 00 00            PUSH 0x36a
0042CE04  68 04 60 7A 00            PUSH 0x7a6004
0042CE09  E8 C2 06 28 00            CALL 0x006ad4d0
0042CE0E  83 C4 18                  ADD ESP,0x18
0042CE11  85 C0                     TEST EAX,EAX
0042CE13  74 01                     JZ 0x0042ce16
0042CE15  CC                        INT3
LAB_0042ce16:
0042CE16  5F                        POP EDI
0042CE17  5E                        POP ESI
0042CE18  33 C0                     XOR EAX,EAX
0042CE1A  5B                        POP EBX
0042CE1B  5D                        POP EBP
0042CE1C  C2 14 00                  RET 0x14
LAB_0042ce1f:
0042CE1F  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042CE23  8D 0C 80                  LEA ECX,[EAX + EAX*0x4]
0042CE26  8D 14 C8                  LEA EDX,[EAX + ECX*0x8]
0042CE29  8D 0C 50                  LEA ECX,[EAX + EDX*0x2]
0042CE2C  C1 E1 04                  SHL ECX,0x4
0042CE2F  03 C8                     ADD ECX,EAX
0042CE31  8D 04 4D D3 4F 7F 00      LEA EAX,[ECX*0x2 + 0x7f4fd3]
0042CE38  EB 19                     JMP 0x0042ce53
LAB_0042ce3a:
0042CE3A  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
0042CE3E  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
0042CE41  8D 0C D0                  LEA ECX,[EAX + EDX*0x8]
0042CE44  8D 14 48                  LEA EDX,[EAX + ECX*0x2]
0042CE47  C1 E2 04                  SHL EDX,0x4
0042CE4A  03 D0                     ADD EDX,EAX
0042CE4C  8D 04 55 83 4F 7F 00      LEA EAX,[EDX*0x2 + 0x7f4f83]
LAB_0042ce53:
0042CE53  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042CE56  0F BE 55 14               MOVSX EDX,byte ptr [EBP + 0x14]
0042CE5A  C1 E1 04                  SHL ECX,0x4
0042CE5D  03 C1                     ADD EAX,ECX
0042CE5F  39 50 04                  CMP dword ptr [EAX + 0x4],EDX
0042CE62  75 B2                     JNZ 0x0042ce16
0042CE64  8B 78 0A                  MOV EDI,dword ptr [EAX + 0xa]
0042CE67  33 F6                     XOR ESI,ESI
0042CE69  8B 5F 0C                  MOV EBX,dword ptr [EDI + 0xc]
0042CE6C  85 DB                     TEST EBX,EBX
0042CE6E  7E A6                     JLE 0x0042ce16
LAB_0042ce70:
0042CE70  8D 45 0A                  LEA EAX,[EBP + 0xa]
0042CE73  8B D6                     MOV EDX,ESI
0042CE75  50                        PUSH EAX
0042CE76  8B CF                     MOV ECX,EDI
0042CE78  E8 F3 FD 27 00            CALL 0x006acc70
0042CE7D  66 8B 4D 18               MOV CX,word ptr [EBP + 0x18]
0042CE81  66 39 4D 0A               CMP word ptr [EBP + 0xa],CX
0042CE85  74 0E                     JZ 0x0042ce95
0042CE87  46                        INC ESI
0042CE88  3B F3                     CMP ESI,EBX
0042CE8A  7C E4                     JL 0x0042ce70
0042CE8C  5F                        POP EDI
0042CE8D  5E                        POP ESI
0042CE8E  33 C0                     XOR EAX,EAX
0042CE90  5B                        POP EBX
0042CE91  5D                        POP EBP
0042CE92  C2 14 00                  RET 0x14
LAB_0042ce95:
0042CE95  5F                        POP EDI
0042CE96  5E                        POP ESI
0042CE97  B8 01 00 00 00            MOV EAX,0x1
0042CE9C  5B                        POP EBX
0042CE9D  5D                        POP EBP
0042CE9E  C2 14 00                  RET 0x14
