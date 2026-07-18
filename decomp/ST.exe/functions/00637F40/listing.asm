FUN_00637f40:
00637F40  55                        PUSH EBP
00637F41  8B EC                     MOV EBP,ESP
00637F43  56                        PUSH ESI
00637F44  57                        PUSH EDI
00637F45  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00637F48  6A 00                     PUSH 0x0
00637F4A  6A 00                     PUSH 0x0
00637F4C  6A 01                     PUSH 0x1
00637F4E  85 FF                     TEST EDI,EDI
00637F50  6A 00                     PUSH 0x0
00637F52  6A FF                     PUSH -0x1
00637F54  74 0F                     JZ 0x00637f65
00637F56  A1 74 67 80 00            MOV EAX,[0x00806774]
00637F5B  68 78 1C 7D 00            PUSH 0x7d1c78
00637F60  6A 1D                     PUSH 0x1d
00637F62  50                        PUSH EAX
00637F63  EB 0E                     JMP 0x00637f73
LAB_00637f65:
00637F65  8B 0D 74 67 80 00         MOV ECX,dword ptr [0x00806774]
00637F6B  68 70 1C 7D 00            PUSH 0x7d1c70
00637F70  6A 1D                     PUSH 0x1d
00637F72  51                        PUSH ECX
LAB_00637f73:
00637F73  E8 78 1B 0D 00            CALL 0x00709af0
00637F78  8B F0                     MOV ESI,EAX
00637F7A  83 C4 20                  ADD ESP,0x20
00637F7D  85 F6                     TEST ESI,ESI
00637F7F  0F 84 9A 00 00 00         JZ 0x0063801f
00637F85  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637F8B  85 C9                     TEST ECX,ECX
00637F8D  0F 84 8C 00 00 00         JZ 0x0063801f
00637F93  85 FF                     TEST EDI,EDI
00637F95  6A 00                     PUSH 0x0
00637F97  74 16                     JZ 0x00637faf
00637F99  8B 56 0D                  MOV EDX,dword ptr [ESI + 0xd]
00637F9C  8B 46 09                  MOV EAX,dword ptr [ESI + 0x9]
00637F9F  6A 64                     PUSH 0x64
00637FA1  6A 78                     PUSH 0x78
00637FA3  52                        PUSH EDX
00637FA4  50                        PUSH EAX
00637FA5  6A 00                     PUSH 0x0
00637FA7  8D 55 0C                  LEA EDX,[EBP + 0xc]
00637FAA  6A 01                     PUSH 0x1
00637FAC  52                        PUSH EDX
00637FAD  EB 14                     JMP 0x00637fc3
LAB_00637faf:
00637FAF  8B 46 0D                  MOV EAX,dword ptr [ESI + 0xd]
00637FB2  8B 56 09                  MOV EDX,dword ptr [ESI + 0x9]
00637FB5  6A 45                     PUSH 0x45
00637FB7  6A 5A                     PUSH 0x5a
00637FB9  50                        PUSH EAX
00637FBA  52                        PUSH EDX
00637FBB  6A 00                     PUSH 0x0
00637FBD  8D 45 0C                  LEA EAX,[EBP + 0xc]
00637FC0  6A 01                     PUSH 0x1
00637FC2  50                        PUSH EAX
LAB_00637fc3:
00637FC3  E8 98 06 0B 00            CALL 0x006e8660
00637FC8  8B 4E 21                  MOV ECX,dword ptr [ESI + 0x21]
00637FCB  8B 16                     MOV EDX,dword ptr [ESI]
00637FCD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00637FD0  6A 01                     PUSH 0x1
00637FD2  51                        PUSH ECX
00637FD3  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637FD9  52                        PUSH EDX
00637FDA  6A 00                     PUSH 0x0
00637FDC  50                        PUSH EAX
00637FDD  E8 FE 18 0B 00            CALL 0x006e98e0
00637FE2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637FE5  6A 00                     PUSH 0x0
00637FE7  6A 00                     PUSH 0x0
00637FE9  51                        PUSH ECX
00637FEA  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00637FF0  E8 7B 22 0B 00            CALL 0x006ea270
00637FF5  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00637FF8  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00637FFB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00637FFE  52                        PUSH EDX
00637FFF  50                        PUSH EAX
00638000  6A 02                     PUSH 0x2
00638002  51                        PUSH ECX
00638003  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638009  E8 42 20 0B 00            CALL 0x006ea050
0063800E  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00638011  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
00638017  6A 00                     PUSH 0x0
00638019  52                        PUSH EDX
0063801A  E8 81 2A 0B 00            CALL 0x006eaaa0
LAB_0063801f:
0063801F  5F                        POP EDI
00638020  5E                        POP ESI
00638021  5D                        POP EBP
00638022  C3                        RET
