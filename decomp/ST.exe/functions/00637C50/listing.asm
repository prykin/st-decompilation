FUN_00637c50:
00637C50  55                        PUSH EBP
00637C51  8B EC                     MOV EBP,ESP
00637C53  56                        PUSH ESI
00637C54  57                        PUSH EDI
00637C55  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00637C58  6A 00                     PUSH 0x0
00637C5A  6A 00                     PUSH 0x0
00637C5C  6A 01                     PUSH 0x1
00637C5E  85 FF                     TEST EDI,EDI
00637C60  6A 00                     PUSH 0x0
00637C62  6A FF                     PUSH -0x1
00637C64  74 0F                     JZ 0x00637c75
00637C66  A1 74 67 80 00            MOV EAX,[0x00806774]
00637C6B  68 58 1C 7D 00            PUSH 0x7d1c58
00637C70  6A 1D                     PUSH 0x1d
00637C72  50                        PUSH EAX
00637C73  EB 0E                     JMP 0x00637c83
LAB_00637c75:
00637C75  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00637C7B  68 50 1C 7D 00            PUSH 0x7d1c50
00637C80  6A 1D                     PUSH 0x1d
00637C82  51                        PUSH ECX
LAB_00637c83:
00637C83  E8 68 1E 0D 00            CALL 0x00709af0
00637C88  8B F0                     MOV ESI,EAX
00637C8A  83 C4 20                  ADD ESP,0x20
00637C8D  85 F6                     TEST ESI,ESI
00637C8F  0F 84 9A 00 00 00         JZ 0x00637d2f
00637C95  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637C9B  85 C9                     TEST ECX,ECX
00637C9D  0F 84 8C 00 00 00         JZ 0x00637d2f
00637CA3  85 FF                     TEST EDI,EDI
00637CA5  6A 00                     PUSH 0x0
00637CA7  74 16                     JZ 0x00637cbf
00637CA9  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
00637CAC  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00637CAF  6A 64                     PUSH 0x64
00637CB1  6A 78                     PUSH 0x78
00637CB3  52                        PUSH EDX
00637CB4  50                        PUSH EAX
00637CB5  6A 00                     PUSH 0x0
00637CB7  8D 55 0C                  LEA EDX,[EBP + 0xc]
00637CBA  6A 01                     PUSH 0x1
00637CBC  52                        PUSH EDX
00637CBD  EB 14                     JMP 0x00637cd3
LAB_00637cbf:
00637CBF  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00637CC2  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00637CC5  6A 45                     PUSH 0x45
00637CC7  6A 5A                     PUSH 0x5a
00637CC9  50                        PUSH EAX
00637CCA  52                        PUSH EDX
00637CCB  6A 00                     PUSH 0x0
00637CCD  8D 45 0C                  LEA EAX,[EBP + 0xc]
00637CD0  6A 01                     PUSH 0x1
00637CD2  50                        PUSH EAX
LAB_00637cd3:
00637CD3  E8 88 09 0B 00            CALL 0x006e8660
00637CD8  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00637CDB  8B 16                     MOV EDX,dword ptr [ESI]
00637CDD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00637CE0  6A 01                     PUSH 0x1
00637CE2  51                        PUSH ECX
00637CE3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637CE9  52                        PUSH EDX
00637CEA  6A 00                     PUSH 0x0
00637CEC  50                        PUSH EAX
00637CED  E8 EE 1B 0B 00            CALL 0x006e98e0
00637CF2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637CF5  6A 00                     PUSH 0x0
00637CF7  6A 00                     PUSH 0x0
00637CF9  51                        PUSH ECX
00637CFA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637D00  E8 6B 25 0B 00            CALL 0x006ea270
00637D05  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00637D08  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00637D0B  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637D0E  52                        PUSH EDX
00637D0F  50                        PUSH EAX
00637D10  6A 02                     PUSH 0x2
00637D12  51                        PUSH ECX
00637D13  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637D19  E8 32 23 0B 00            CALL 0x006ea050
00637D1E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00637D21  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637D27  6A 00                     PUSH 0x0
00637D29  52                        PUSH EDX
00637D2A  E8 71 2D 0B 00            CALL 0x006eaaa0
LAB_00637d2f:
00637D2F  5F                        POP EDI
00637D30  5E                        POP ESI
00637D31  5D                        POP EBP
00637D32  C3                        RET
