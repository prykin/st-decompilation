FUN_00580b60:
00580B60  55                        PUSH EBP
00580B61  8B EC                     MOV EBP,ESP
00580B63  83 EC 4C                  SUB ESP,0x4c
00580B66  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00580B6B  56                        PUSH ESI
00580B6C  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00580B6F  57                        PUSH EDI
00580B70  8D 55 B8                  LEA EDX,[EBP + -0x48]
00580B73  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00580B76  6A 00                     PUSH 0x0
00580B78  52                        PUSH EDX
00580B79  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00580B80  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00580B83  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00580B89  E8 62 CC 1A 00            CALL 0x0072d7f0
00580B8E  83 C4 08                  ADD ESP,0x8
00580B91  85 C0                     TEST EAX,EAX
00580B93  0F 85 F2 00 00 00         JNZ 0x00580c8b
00580B99  8B 7D F8                  MOV EDI,dword ptr [EBP + -0x8]
00580B9C  8B 87 55 02 00 00         MOV EAX,dword ptr [EDI + 0x255]
00580BA2  2D DD 00 00 00            SUB EAX,0xdd
00580BA7  74 2C                     JZ 0x00580bd5
00580BA9  6A 00                     PUSH 0x0
00580BAB  6A 00                     PUSH 0x0
00580BAD  6A 01                     PUSH 0x1
00580BAF  48                        DEC EAX
00580BB0  6A 00                     PUSH 0x0
00580BB2  6A FF                     PUSH -0x1
00580BB4  74 0F                     JZ 0x00580bc5
00580BB6  A1 74 67 80 00            MOV EAX,[0x00806774]
00580BBB  68 00 B1 7C 00            PUSH 0x7cb100
00580BC0  6A 1D                     PUSH 0x1d
00580BC2  50                        PUSH EAX
00580BC3  EB 28                     JMP 0x00580bed
LAB_00580bc5:
00580BC5  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00580BCB  68 0C B1 7C 00            PUSH 0x7cb10c
00580BD0  6A 1D                     PUSH 0x1d
00580BD2  51                        PUSH ECX
00580BD3  EB 18                     JMP 0x00580bed
LAB_00580bd5:
00580BD5  8B 15 74 67 80 00         MOV EDX,dword ptr [0x00806774]
00580BDB  6A 00                     PUSH 0x0
00580BDD  6A 00                     PUSH 0x0
00580BDF  6A 01                     PUSH 0x1
00580BE1  6A 00                     PUSH 0x0
00580BE3  6A FF                     PUSH -0x1
00580BE5  68 00 B1 7C 00            PUSH 0x7cb100
00580BEA  6A 1D                     PUSH 0x1d
00580BEC  52                        PUSH EDX
LAB_00580bed:
00580BED  E8 FE 8E 18 00            CALL 0x00709af0
00580BF2  8B F0                     MOV ESI,EAX
00580BF4  83 C4 20                  ADD ESP,0x20
00580BF7  85 F6                     TEST ESI,ESI
00580BF9  74 7B                     JZ 0x00580c76
00580BFB  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
00580C01  85 C9                     TEST ECX,ECX
00580C03  74 71                     JZ 0x00580c76
00580C05  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00580C08  6A 01                     PUSH 0x1
00580C0A  99                        CDQ
00580C0B  2B C2                     SUB EAX,EDX
00580C0D  6A 01                     PUSH 0x1
00580C0F  D1 F8                     SAR EAX,0x1
00580C11  50                        PUSH EAX
00580C12  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00580C15  99                        CDQ
00580C16  2B C2                     SUB EAX,EDX
00580C18  8B 56 21                  MOV EDX,dword ptr [ESI + 0x21]
00580C1B  D1 F8                     SAR EAX,0x1
00580C1D  50                        PUSH EAX
00580C1E  8B 06                     MOV EAX,dword ptr [ESI]
00580C20  50                        PUSH EAX
00580C21  52                        PUSH EDX
00580C22  E8 39 58 16 00            CALL 0x006e6460
00580C27  8B F0                     MOV ESI,EAX
00580C29  85 F6                     TEST ESI,ESI
00580C2B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00580C2E  74 49                     JZ 0x00580c79
00580C30  DB 45 0C                  FILD dword ptr [EBP + 0xc]
00580C33  6A FF                     PUSH -0x1
00580C35  51                        PUSH ECX
00580C36  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00580C3C  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
00580C42  D9 1C 24                  FSTP float ptr [ESP]
00580C45  DB 45 08                  FILD dword ptr [EBP + 0x8]
00580C48  51                        PUSH ECX
00580C49  8B 8F 11 02 00 00         MOV ECX,dword ptr [EDI + 0x211]
00580C4F  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00580C55  D8 05 F4 04 79 00         FADD float ptr [0x007904f4]
00580C5B  D9 1C 24                  FSTP float ptr [ESP]
00580C5E  56                        PUSH ESI
00580C5F  E8 DC 58 16 00            CALL 0x006e6540
00580C64  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00580C67  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00580C6C  8B C6                     MOV EAX,ESI
00580C6E  5F                        POP EDI
00580C6F  5E                        POP ESI
00580C70  8B E5                     MOV ESP,EBP
00580C72  5D                        POP EBP
00580C73  C2 08 00                  RET 0x8
LAB_00580c76:
00580C76  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
LAB_00580c79:
00580C79  8B 45 B4                  MOV EAX,dword ptr [EBP + -0x4c]
00580C7C  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00580C81  8B C6                     MOV EAX,ESI
00580C83  5F                        POP EDI
00580C84  5E                        POP ESI
00580C85  8B E5                     MOV ESP,EBP
00580C87  5D                        POP EBP
00580C88  C2 08 00                  RET 0x8
LAB_00580c8b:
00580C8B  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00580C8E  68 C0 B2 7C 00            PUSH 0x7cb2c0
00580C93  68 CC 4C 7A 00            PUSH 0x7a4ccc
00580C98  50                        PUSH EAX
00580C99  6A 00                     PUSH 0x0
00580C9B  68 14 04 00 00            PUSH 0x414
00580CA0  68 9C B1 7C 00            PUSH 0x7cb19c
00580CA5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00580CAB  E8 20 C8 12 00            CALL 0x006ad4d0
00580CB0  83 C4 18                  ADD ESP,0x18
00580CB3  85 C0                     TEST EAX,EAX
00580CB5  74 01                     JZ 0x00580cb8
00580CB7  CC                        INT3
LAB_00580cb8:
00580CB8  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00580CBB  5F                        POP EDI
00580CBC  5E                        POP ESI
00580CBD  8B E5                     MOV ESP,EBP
00580CBF  5D                        POP EBP
00580CC0  C2 08 00                  RET 0x8
