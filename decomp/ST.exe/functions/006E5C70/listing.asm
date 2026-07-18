FUN_006e5c70:
006E5C70  55                        PUSH EBP
006E5C71  8B EC                     MOV EBP,ESP
006E5C73  83 EC 50                  SUB ESP,0x50
006E5C76  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
006E5C7B  53                        PUSH EBX
006E5C7C  56                        PUSH ESI
006E5C7D  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
006E5C80  57                        PUSH EDI
006E5C81  8D 55 B4                  LEA EDX,[EBP + -0x4c]
006E5C84  8D 4D B0                  LEA ECX,[EBP + -0x50]
006E5C87  6A 00                     PUSH 0x0
006E5C89  52                        PUSH EDX
006E5C8A  89 45 B0                  MOV dword ptr [EBP + -0x50],EAX
006E5C8D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
006E5C93  E8 58 7B 04 00            CALL 0x0072d7f0
006E5C98  8B F0                     MOV ESI,EAX
006E5C9A  83 C4 08                  ADD ESP,0x8
006E5C9D  85 F6                     TEST ESI,ESI
006E5C9F  0F 85 8D 00 00 00         JNZ 0x006e5d32
006E5CA5  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
006E5CA8  8D 45 F4                  LEA EAX,[EBP + -0xc]
006E5CAB  50                        PUSH EAX
006E5CAC  8D 5E 0C                  LEA EBX,[ESI + 0xc]
006E5CAF  53                        PUSH EBX
006E5CB0  E8 5B 3C FD FF            CALL 0x006b9910
006E5CB5  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E5CB8  33 D2                     XOR EDX,EDX
006E5CBA  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E5CBD  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5CC0  85 C0                     TEST EAX,EAX
006E5CC2  76 50                     JBE 0x006e5d14
006E5CC4  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006E5CC7  3B D0                     CMP EDX,EAX
006E5CC9  73 0B                     JNC 0x006e5cd6
LAB_006e5ccb:
006E5CCB  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006E5CCE  0F AF C2                  IMUL EAX,EDX
006E5CD1  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
006E5CD4  EB 02                     JMP 0x006e5cd8
LAB_006e5cd6:
006E5CD6  33 C0                     XOR EAX,EAX
LAB_006e5cd8:
006E5CD8  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
006E5CDB  57                        PUSH EDI
006E5CDC  8B C8                     MOV ECX,EAX
006E5CDE  8B 10                     MOV EDX,dword ptr [EAX]
006E5CE0  FF 12                     CALL dword ptr [EDX]
006E5CE2  3D FF FF 00 00            CMP EAX,0xffff
006E5CE7  75 1A                     JNZ 0x006e5d03
006E5CE9  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006E5CEE  68 6B 04 00 00            PUSH 0x46b
006E5CF3  68 8C E7 7E 00            PUSH 0x7ee78c
006E5CF8  50                        PUSH EAX
006E5CF9  68 FF FF 00 00            PUSH 0xffff
006E5CFE  E8 3D 01 FC FF            CALL 0x006a5e40
LAB_006e5d03:
006E5D03  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
006E5D06  8B 4E 10                  MOV ECX,dword ptr [ESI + 0x10]
006E5D09  42                        INC EDX
006E5D0A  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
006E5D0D  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E5D10  3B D0                     CMP EDX,EAX
006E5D12  72 B7                     JC 0x006e5ccb
LAB_006e5d14:
006E5D14  8D 4D F4                  LEA ECX,[EBP + -0xc]
006E5D17  51                        PUSH ECX
006E5D18  53                        PUSH EBX
006E5D19  E8 A2 3B FD FF            CALL 0x006b98c0
006E5D1E  8B 55 B0                  MOV EDX,dword ptr [EBP + -0x50]
006E5D21  33 C0                     XOR EAX,EAX
006E5D23  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
006E5D29  5F                        POP EDI
006E5D2A  5E                        POP ESI
006E5D2B  5B                        POP EBX
006E5D2C  8B E5                     MOV ESP,EBP
006E5D2E  5D                        POP EBP
006E5D2F  C2 04 00                  RET 0x4
LAB_006e5d32:
006E5D32  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
006E5D35  8B 45 B0                  MOV EAX,dword ptr [EBP + -0x50]
006E5D38  8D 4D F4                  LEA ECX,[EBP + -0xc]
006E5D3B  83 C2 0C                  ADD EDX,0xc
006E5D3E  51                        PUSH ECX
006E5D3F  52                        PUSH EDX
006E5D40  A3 F8 8D 85 00            MOV [0x00858df8],EAX
006E5D45  E8 76 3B FD FF            CALL 0x006b98c0
006E5D4A  68 90 EB 7E 00            PUSH 0x7eeb90
006E5D4F  68 CC 4C 7A 00            PUSH 0x7a4ccc
006E5D54  56                        PUSH ESI
006E5D55  6A 00                     PUSH 0x0
006E5D57  68 73 04 00 00            PUSH 0x473
006E5D5C  68 8C E7 7E 00            PUSH 0x7ee78c
006E5D61  E8 6A 77 FC FF            CALL 0x006ad4d0
006E5D66  83 C4 18                  ADD ESP,0x18
006E5D69  85 C0                     TEST EAX,EAX
006E5D6B  74 01                     JZ 0x006e5d6e
006E5D6D  CC                        INT3
LAB_006e5d6e:
006E5D6E  68 74 04 00 00            PUSH 0x474
006E5D73  68 8C E7 7E 00            PUSH 0x7ee78c
006E5D78  6A 00                     PUSH 0x0
006E5D7A  56                        PUSH ESI
006E5D7B  E8 C0 00 FC FF            CALL 0x006a5e40
006E5D80  8B C6                     MOV EAX,ESI
006E5D82  5F                        POP EDI
006E5D83  5E                        POP ESI
006E5D84  5B                        POP EBX
006E5D85  8B E5                     MOV ESP,EBP
006E5D87  5D                        POP EBP
006E5D88  C2 04 00                  RET 0x4
