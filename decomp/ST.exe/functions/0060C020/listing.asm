FUN_0060c020:
0060C020  55                        PUSH EBP
0060C021  8B EC                     MOV EBP,ESP
0060C023  83 EC 18                  SUB ESP,0x18
0060C026  53                        PUSH EBX
0060C027  56                        PUSH ESI
0060C028  8B F1                     MOV ESI,ECX
0060C02A  68 83 00 00 00            PUSH 0x83
0060C02F  89 75 EC                  MOV dword ptr [EBP + -0x14],ESI
0060C032  C7 45 FC 83 00 00 00      MOV dword ptr [EBP + -0x4],0x83
0060C039  E8 32 EC 09 00            CALL 0x006aac70
0060C03E  85 F6                     TEST ESI,ESI
0060C040  8B D8                     MOV EBX,EAX
0060C042  C7 86 E1 01 00 00 02 00 00 00  MOV dword ptr [ESI + 0x1e1],0x2
0060C04C  74 08                     JZ 0x0060c056
0060C04E  81 C6 D5 01 00 00         ADD ESI,0x1d5
0060C054  EB 02                     JMP 0x0060c058
LAB_0060c056:
0060C056  33 F6                     XOR ESI,ESI
LAB_0060c058:
0060C058  57                        PUSH EDI
0060C059  B9 20 00 00 00            MOV ECX,0x20
0060C05E  8B FB                     MOV EDI,EBX
0060C060  8B 45 EC                  MOV EAX,dword ptr [EBP + -0x14]
0060C063  F3 A5                     MOVSD.REP ES:EDI,ESI
0060C065  66 A5                     MOVSW ES:EDI,ESI
0060C067  A4                        MOVSB ES:EDI,ESI
0060C068  8B 80 34 02 00 00         MOV EAX,dword ptr [EAX + 0x234]
0060C06E  85 C0                     TEST EAX,EAX
0060C070  0F 84 BD 00 00 00         JZ 0x0060c133
0060C076  8D 4D F8                  LEA ECX,[EBP + -0x8]
0060C079  51                        PUSH ECX
0060C07A  50                        PUSH EAX
0060C07B  E8 A0 3F 0A 00            CALL 0x006b0020
0060C080  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0060C083  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0060C086  8D B2 87 00 00 00         LEA ESI,[EDX + 0x87]
0060C08C  56                        PUSH ESI
0060C08D  53                        PUSH EBX
0060C08E  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0060C091  E8 BA 0E 0A 00            CALL 0x006acf50
0060C096  8B D8                     MOV EBX,EAX
0060C098  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060C09B  8B CB                     MOV ECX,EBX
0060C09D  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0060C0A0  2B C8                     SUB ECX,EAX
0060C0A2  8B FB                     MOV EDI,EBX
0060C0A4  89 44 31 FC               MOV dword ptr [ECX + ESI*0x1 + -0x4],EAX
0060C0A8  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0060C0AB  8B 75 F0                  MOV ESI,dword ptr [EBP + -0x10]
0060C0AE  2B F9                     SUB EDI,ECX
0060C0B0  03 FA                     ADD EDI,EDX
0060C0B2  8B D1                     MOV EDX,ECX
0060C0B4  C1 E9 02                  SHR ECX,0x2
0060C0B7  F3 A5                     MOVSD.REP ES:EDI,ESI
0060C0B9  8B CA                     MOV ECX,EDX
0060C0BB  8D 45 F0                  LEA EAX,[EBP + -0x10]
0060C0BE  83 E1 03                  AND ECX,0x3
0060C0C1  50                        PUSH EAX
0060C0C2  F3 A4                     MOVSB.REP ES:EDI,ESI
0060C0C4  E8 97 EF 09 00            CALL 0x006ab060
0060C0C9  8B 4D EC                  MOV ECX,dword ptr [EBP + -0x14]
0060C0CC  8B 81 3C 02 00 00         MOV EAX,dword ptr [ECX + 0x23c]
0060C0D2  85 C0                     TEST EAX,EAX
0060C0D4  74 5D                     JZ 0x0060c133
0060C0D6  8B 81 44 02 00 00         MOV EAX,dword ptr [ECX + 0x244]
0060C0DC  85 C0                     TEST EAX,EAX
0060C0DE  74 53                     JZ 0x0060c133
0060C0E0  8D 55 F4                  LEA EDX,[EBP + -0xc]
0060C0E3  52                        PUSH EDX
0060C0E4  E8 B2 86 DF FF            CALL 0x0040479b
0060C0E9  85 C0                     TEST EAX,EAX
0060C0EB  89 45 E8                  MOV dword ptr [EBP + -0x18],EAX
0060C0EE  74 43                     JZ 0x0060c133
0060C0F0  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
0060C0F3  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0060C0F6  8D 74 01 04               LEA ESI,[ECX + EAX*0x1 + 0x4]
0060C0FA  56                        PUSH ESI
0060C0FB  53                        PUSH EBX
0060C0FC  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
0060C0FF  E8 4C 0E 0A 00            CALL 0x006acf50
0060C104  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060C107  8B D8                     MOV EBX,EAX
0060C109  8B D3                     MOV EDX,EBX
0060C10B  2B D1                     SUB EDX,ECX
0060C10D  8D 44 32 FC               LEA EAX,[EDX + ESI*0x1 + -0x4]
0060C111  89 08                     MOV dword ptr [EAX],ECX
0060C113  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
0060C116  8B 75 E8                  MOV ESI,dword ptr [EBP + -0x18]
0060C119  8D 78 04                  LEA EDI,[EAX + 0x4]
0060C11C  8B C1                     MOV EAX,ECX
0060C11E  C1 E9 02                  SHR ECX,0x2
0060C121  F3 A5                     MOVSD.REP ES:EDI,ESI
0060C123  8B C8                     MOV ECX,EAX
0060C125  83 E1 03                  AND ECX,0x3
0060C128  F3 A4                     MOVSB.REP ES:EDI,ESI
0060C12A  8D 4D E8                  LEA ECX,[EBP + -0x18]
0060C12D  51                        PUSH ECX
0060C12E  E8 2D EF 09 00            CALL 0x006ab060
LAB_0060c133:
0060C133  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0060C136  5F                        POP EDI
0060C137  85 C0                     TEST EAX,EAX
0060C139  74 05                     JZ 0x0060c140
0060C13B  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0060C13E  89 10                     MOV dword ptr [EAX],EDX
LAB_0060c140:
0060C140  8B C3                     MOV EAX,EBX
0060C142  5E                        POP ESI
0060C143  5B                        POP EBX
0060C144  8B E5                     MOV ESP,EBP
0060C146  5D                        POP EBP
0060C147  C2 04 00                  RET 0x4
