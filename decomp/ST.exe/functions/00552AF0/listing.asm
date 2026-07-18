FUN_00552af0:
00552AF0  55                        PUSH EBP
00552AF1  8B EC                     MOV EBP,ESP
00552AF3  83 EC 44                  SUB ESP,0x44
00552AF6  56                        PUSH ESI
00552AF7  8B F1                     MOV ESI,ECX
00552AF9  57                        PUSH EDI
00552AFA  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00552AFD  3B 7E 5C                  CMP EDI,dword ptr [ESI + 0x5c]
00552B00  0F 84 82 00 00 00         JZ 0x00552b88
00552B06  57                        PUSH EDI
00552B07  E8 2A 22 EB FF            CALL 0x00404d36
00552B0C  8B 86 74 01 00 00         MOV EAX,dword ptr [ESI + 0x174]
00552B12  C7 46 28 24 00 00 00      MOV dword ptr [ESI + 0x28],0x24
00552B19  85 FF                     TEST EDI,EDI
00552B1B  74 02                     JZ 0x00552b1f
00552B1D  F7 D8                     NEG EAX
LAB_00552b1f:
00552B1F  66 89 46 2E               MOV word ptr [ESI + 0x2e],AX
00552B23  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00552B28  8D 4D C0                  LEA ECX,[EBP + -0x40]
00552B2B  6A 00                     PUSH 0x0
00552B2D  51                        PUSH ECX
00552B2E  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
00552B31  E8 BA AC 1D 00            CALL 0x0072d7f0
00552B36  8B F0                     MOV ESI,EAX
00552B38  83 C4 08                  ADD ESP,0x8
00552B3B  85 F6                     TEST ESI,ESI
00552B3D  75 11                     JNZ 0x00552b50
00552B3F  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
00552B42  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00552B48  5F                        POP EDI
00552B49  5E                        POP ESI
00552B4A  8B E5                     MOV ESP,EBP
00552B4C  5D                        POP EBP
00552B4D  C2 04 00                  RET 0x4
LAB_00552b50:
00552B50  8B 45 BC                  MOV EAX,dword ptr [EBP + -0x44]
00552B53  68 30 88 7C 00            PUSH 0x7c8830
00552B58  68 CC 4C 7A 00            PUSH 0x7a4ccc
00552B5D  56                        PUSH ESI
00552B5E  6A 00                     PUSH 0x0
00552B60  6A 36                     PUSH 0x36
00552B62  68 B8 87 7C 00            PUSH 0x7c87b8
00552B67  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00552B6C  E8 5F A9 15 00            CALL 0x006ad4d0
00552B71  83 C4 18                  ADD ESP,0x18
00552B74  85 C0                     TEST EAX,EAX
00552B76  74 01                     JZ 0x00552b79
00552B78  CC                        INT3
LAB_00552b79:
00552B79  6A 36                     PUSH 0x36
00552B7B  68 B8 87 7C 00            PUSH 0x7c87b8
00552B80  6A 00                     PUSH 0x0
00552B82  56                        PUSH ESI
00552B83  E8 B8 32 15 00            CALL 0x006a5e40
LAB_00552b88:
00552B88  5F                        POP EDI
00552B89  5E                        POP ESI
00552B8A  8B E5                     MOV ESP,EBP
00552B8C  5D                        POP EBP
00552B8D  C2 04 00                  RET 0x4
