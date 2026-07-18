FUN_006c5bf0:
006C5BF0  55                        PUSH EBP
006C5BF1  8B EC                     MOV EBP,ESP
006C5BF3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5BF6  53                        PUSH EBX
006C5BF7  56                        PUSH ESI
006C5BF8  57                        PUSH EDI
006C5BF9  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5C00  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5C06  75 54                     JNZ 0x006c5c5c
006C5C08  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C5C0B  83 F9 07                  CMP ECX,0x7
006C5C0E  75 26                     JNZ 0x006c5c36
006C5C10  8B C8                     MOV ECX,EAX
006C5C12  48                        DEC EAX
006C5C13  85 C9                     TEST ECX,ECX
006C5C15  0F 84 D4 00 00 00         JZ 0x006c5cef
006C5C1B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5C1E  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5C21  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5C24  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5c27:
006C5C27  66 31 10                  XOR word ptr [EAX],DX
006C5C2A  03 C6                     ADD EAX,ESI
006C5C2C  49                        DEC ECX
006C5C2D  75 F8                     JNZ 0x006c5c27
006C5C2F  5F                        POP EDI
006C5C30  5E                        POP ESI
006C5C31  5B                        POP EBX
006C5C32  5D                        POP EBP
006C5C33  C2 20 00                  RET 0x20
LAB_006c5c36:
006C5C36  8B D0                     MOV EDX,EAX
006C5C38  48                        DEC EAX
006C5C39  85 D2                     TEST EDX,EDX
006C5C3B  0F 84 AE 00 00 00         JZ 0x006c5cef
006C5C41  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5C44  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5C47  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5C4A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5c4d:
006C5C4D  66 89 10                  MOV word ptr [EAX],DX
006C5C50  03 C6                     ADD EAX,ESI
006C5C52  49                        DEC ECX
006C5C53  75 F8                     JNZ 0x006c5c4d
006C5C55  5F                        POP EDI
006C5C56  5E                        POP ESI
006C5C57  5B                        POP EBX
006C5C58  5D                        POP EBP
006C5C59  C2 20 00                  RET 0x20
LAB_006c5c5c:
006C5C5C  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006C5C5F  83 F9 07                  CMP ECX,0x7
006C5C62  75 4B                     JNZ 0x006c5caf
006C5C64  8B C8                     MOV ECX,EAX
006C5C66  48                        DEC EAX
006C5C67  85 C9                     TEST ECX,ECX
006C5C69  0F 84 80 00 00 00         JZ 0x006c5cef
006C5C6F  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C5C72  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C5C75  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5C78  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006C5C7B  40                        INC EAX
006C5C7C  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C5C7F  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5c82:
006C5C82  85 4D 18                  TEST dword ptr [EBP + 0x18],ECX
006C5C85  74 05                     JZ 0x006c5c8c
006C5C87  66 31 38                  XOR word ptr [EAX],DI
006C5C8A  EB 08                     JMP 0x006c5c94
LAB_006c5c8c:
006C5C8C  83 FA FF                  CMP EDX,-0x1
006C5C8F  74 03                     JZ 0x006c5c94
006C5C91  66 31 10                  XOR word ptr [EAX],DX
LAB_006c5c94:
006C5C94  03 C6                     ADD EAX,ESI
006C5C96  D1 E9                     SHR ECX,0x1
006C5C98  75 05                     JNZ 0x006c5c9f
006C5C9A  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5c9f:
006C5C9F  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C5CA2  4B                        DEC EBX
006C5CA3  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006C5CA6  75 DA                     JNZ 0x006c5c82
006C5CA8  5F                        POP EDI
006C5CA9  5E                        POP ESI
006C5CAA  5B                        POP EBX
006C5CAB  5D                        POP EBP
006C5CAC  C2 20 00                  RET 0x20
LAB_006c5caf:
006C5CAF  8B D0                     MOV EDX,EAX
006C5CB1  48                        DEC EAX
006C5CB2  85 D2                     TEST EDX,EDX
006C5CB4  74 39                     JZ 0x006c5cef
006C5CB6  8B 55 24                  MOV EDX,dword ptr [EBP + 0x24]
006C5CB9  8B 7D 20                  MOV EDI,dword ptr [EBP + 0x20]
006C5CBC  8B 75 10                  MOV ESI,dword ptr [EBP + 0x10]
006C5CBF  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C5CC2  40                        INC EAX
006C5CC3  89 45 14                  MOV dword ptr [EBP + 0x14],EAX
006C5CC6  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
LAB_006c5cc9:
006C5CC9  85 45 18                  TEST dword ptr [EBP + 0x18],EAX
006C5CCC  74 05                     JZ 0x006c5cd3
006C5CCE  66 89 39                  MOV word ptr [ECX],DI
006C5CD1  EB 08                     JMP 0x006c5cdb
LAB_006c5cd3:
006C5CD3  83 FA FF                  CMP EDX,-0x1
006C5CD6  74 03                     JZ 0x006c5cdb
006C5CD8  66 89 11                  MOV word ptr [ECX],DX
LAB_006c5cdb:
006C5CDB  03 CE                     ADD ECX,ESI
006C5CDD  D1 E8                     SHR EAX,0x1
006C5CDF  75 05                     JNZ 0x006c5ce6
006C5CE1  B8 00 00 00 80            MOV EAX,0x80000000
LAB_006c5ce6:
006C5CE6  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
006C5CE9  4B                        DEC EBX
006C5CEA  89 5D 14                  MOV dword ptr [EBP + 0x14],EBX
006C5CED  75 DA                     JNZ 0x006c5cc9
LAB_006c5cef:
006C5CEF  5F                        POP EDI
006C5CF0  5E                        POP ESI
006C5CF1  5B                        POP EBX
006C5CF2  5D                        POP EBP
006C5CF3  C2 20 00                  RET 0x20
