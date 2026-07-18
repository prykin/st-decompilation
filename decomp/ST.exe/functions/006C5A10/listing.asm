FUN_006c5a10:
006C5A10  55                        PUSH EBP
006C5A11  8B EC                     MOV EBP,ESP
006C5A13  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006C5A16  53                        PUSH EBX
006C5A17  56                        PUSH ESI
006C5A18  57                        PUSH EDI
006C5A19  F6 80 9C 04 00 00 01      TEST byte ptr [EAX + 0x49c],0x1
006C5A20  8B 88 98 04 00 00         MOV ECX,dword ptr [EAX + 0x498]
006C5A26  75 44                     JNZ 0x006c5a6c
006C5A28  83 F9 07                  CMP ECX,0x7
006C5A2B  75 27                     JNZ 0x006c5a54
006C5A2D  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C5A30  8B C8                     MOV ECX,EAX
006C5A32  48                        DEC EAX
006C5A33  85 C9                     TEST ECX,ECX
006C5A35  0F 84 B2 00 00 00         JZ 0x006c5aed
006C5A3B  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C5A3E  8D 48 01                  LEA ECX,[EAX + 0x1]
006C5A41  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5a44:
006C5A44  66 31 10                  XOR word ptr [EAX],DX
006C5A47  83 C0 02                  ADD EAX,0x2
006C5A4A  49                        DEC ECX
006C5A4B  75 F7                     JNZ 0x006c5a44
006C5A4D  5F                        POP EDI
006C5A4E  5E                        POP ESI
006C5A4F  5B                        POP EBX
006C5A50  5D                        POP EBP
006C5A51  C2 1C 00                  RET 0x1c
LAB_006c5a54:
006C5A54  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
006C5A57  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C5A5A  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C5A5D  52                        PUSH EDX
006C5A5E  50                        PUSH EAX
006C5A5F  51                        PUSH ECX
006C5A60  E8 5B 8C 00 00            CALL 0x006ce6c0
006C5A65  5F                        POP EDI
006C5A66  5E                        POP ESI
006C5A67  5B                        POP EBX
006C5A68  5D                        POP EBP
006C5A69  C2 1C 00                  RET 0x1c
LAB_006c5a6c:
006C5A6C  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006C5A6F  83 F9 07                  CMP ECX,0x7
006C5A72  75 40                     JNZ 0x006c5ab4
006C5A74  8B D0                     MOV EDX,EAX
006C5A76  48                        DEC EAX
006C5A77  85 D2                     TEST EDX,EDX
006C5A79  74 72                     JZ 0x006c5aed
006C5A7B  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5A7E  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006C5A81  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C5A84  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C5A87  8D 58 01                  LEA EBX,[EAX + 0x1]
006C5A8A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5a8d:
006C5A8D  85 F9                     TEST ECX,EDI
006C5A8F  74 05                     JZ 0x006c5a96
006C5A91  66 31 30                  XOR word ptr [EAX],SI
006C5A94  EB 08                     JMP 0x006c5a9e
LAB_006c5a96:
006C5A96  83 FA FF                  CMP EDX,-0x1
006C5A99  74 03                     JZ 0x006c5a9e
006C5A9B  66 31 10                  XOR word ptr [EAX],DX
LAB_006c5a9e:
006C5A9E  83 C0 02                  ADD EAX,0x2
006C5AA1  D1 E9                     SHR ECX,0x1
006C5AA3  75 05                     JNZ 0x006c5aaa
006C5AA5  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5aaa:
006C5AAA  4B                        DEC EBX
006C5AAB  75 E0                     JNZ 0x006c5a8d
006C5AAD  5F                        POP EDI
006C5AAE  5E                        POP ESI
006C5AAF  5B                        POP EBX
006C5AB0  5D                        POP EBP
006C5AB1  C2 1C 00                  RET 0x1c
LAB_006c5ab4:
006C5AB4  8B C8                     MOV ECX,EAX
006C5AB6  48                        DEC EAX
006C5AB7  85 C9                     TEST ECX,ECX
006C5AB9  74 32                     JZ 0x006c5aed
006C5ABB  8B 55 20                  MOV EDX,dword ptr [EBP + 0x20]
006C5ABE  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006C5AC1  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
006C5AC4  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006C5AC7  8D 58 01                  LEA EBX,[EAX + 0x1]
006C5ACA  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
LAB_006c5acd:
006C5ACD  85 F9                     TEST ECX,EDI
006C5ACF  74 05                     JZ 0x006c5ad6
006C5AD1  66 89 30                  MOV word ptr [EAX],SI
006C5AD4  EB 08                     JMP 0x006c5ade
LAB_006c5ad6:
006C5AD6  83 FA FF                  CMP EDX,-0x1
006C5AD9  74 03                     JZ 0x006c5ade
006C5ADB  66 89 10                  MOV word ptr [EAX],DX
LAB_006c5ade:
006C5ADE  83 C0 02                  ADD EAX,0x2
006C5AE1  D1 E9                     SHR ECX,0x1
006C5AE3  75 05                     JNZ 0x006c5aea
006C5AE5  B9 00 00 00 80            MOV ECX,0x80000000
LAB_006c5aea:
006C5AEA  4B                        DEC EBX
006C5AEB  75 E0                     JNZ 0x006c5acd
LAB_006c5aed:
006C5AED  5F                        POP EDI
006C5AEE  5E                        POP ESI
006C5AEF  5B                        POP EBX
006C5AF0  5D                        POP EBP
006C5AF1  C2 1C 00                  RET 0x1c
