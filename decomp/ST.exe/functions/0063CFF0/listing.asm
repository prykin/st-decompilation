FUN_0063cff0:
0063CFF0  55                        PUSH EBP
0063CFF1  8B EC                     MOV EBP,ESP
0063CFF3  83 EC 10                  SUB ESP,0x10
0063CFF6  53                        PUSH EBX
0063CFF7  8B D9                     MOV EBX,ECX
0063CFF9  56                        PUSH ESI
0063CFFA  57                        PUSH EDI
0063CFFB  8B 8B 36 03 00 00         MOV ECX,dword ptr [EBX + 0x336]
0063D001  C7 45 FC 52 01 00 00      MOV dword ptr [EBP + -0x4],0x152
0063D008  85 C9                     TEST ECX,ECX
0063D00A  74 0F                     JZ 0x0063d01b
0063D00C  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
0063D00F  0F AF 41 08               IMUL EAX,dword ptr [ECX + 0x8]
0063D013  05 72 01 00 00            ADD EAX,0x172
0063D018  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_0063d01b:
0063D01B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063D01E  50                        PUSH EAX
0063D01F  E8 4C DC 06 00            CALL 0x006aac70
0063D024  85 DB                     TEST EBX,EBX
0063D026  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
0063D029  C7 83 49 02 00 00 01 00 00 00  MOV dword ptr [EBX + 0x249],0x1
0063D033  C7 83 3D 02 00 00 02 00 00 00  MOV dword ptr [EBX + 0x23d],0x2
0063D03D  74 08                     JZ 0x0063d047
0063D03F  8D B3 31 02 00 00         LEA ESI,[EBX + 0x231]
0063D045  EB 02                     JMP 0x0063d049
LAB_0063d047:
0063D047  33 F6                     XOR ESI,ESI
LAB_0063d049:
0063D049  B9 54 00 00 00            MOV ECX,0x54
0063D04E  8B F8                     MOV EDI,EAX
0063D050  F3 A5                     MOVSD.REP ES:EDI,ESI
0063D052  66 A5                     MOVSW ES:EDI,ESI
0063D054  8B 9B 36 03 00 00         MOV EBX,dword ptr [EBX + 0x336]
0063D05A  85 DB                     TEST EBX,EBX
0063D05C  74 4F                     JZ 0x0063d0ad
0063D05E  8D 4D F8                  LEA ECX,[EBP + -0x8]
0063D061  51                        PUSH ECX
0063D062  53                        PUSH EBX
0063D063  E8 B8 2F 07 00            CALL 0x006b0020
0063D068  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
0063D06B  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
0063D06E  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0063D071  89 93 52 01 00 00         MOV dword ptr [EBX + 0x152],EDX
0063D077  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0063D07A  8B 75 F4                  MOV ESI,dword ptr [EBP + -0xc]
0063D07D  8B C1                     MOV EAX,ECX
0063D07F  8D BB 56 01 00 00         LEA EDI,[EBX + 0x156]
0063D085  C1 E9 02                  SHR ECX,0x2
0063D088  F3 A5                     MOVSD.REP ES:EDI,ESI
0063D08A  8B C8                     MOV ECX,EAX
0063D08C  83 E1 03                  AND ECX,0x3
0063D08F  F3 A4                     MOVSB.REP ES:EDI,ESI
0063D091  8D 4D F4                  LEA ECX,[EBP + -0xc]
0063D094  51                        PUSH ECX
0063D095  E8 C6 DF 06 00            CALL 0x006ab060
0063D09A  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0063D09D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0063D0A0  5F                        POP EDI
0063D0A1  5E                        POP ESI
0063D0A2  89 02                     MOV dword ptr [EDX],EAX
0063D0A4  8B C3                     MOV EAX,EBX
0063D0A6  5B                        POP EBX
0063D0A7  8B E5                     MOV ESP,EBP
0063D0A9  5D                        POP EBP
0063D0AA  C2 04 00                  RET 0x4
LAB_0063d0ad:
0063D0AD  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063D0B0  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
0063D0B3  5F                        POP EDI
0063D0B4  5E                        POP ESI
0063D0B5  89 11                     MOV dword ptr [ECX],EDX
0063D0B7  5B                        POP EBX
0063D0B8  8B E5                     MOV ESP,EBP
0063D0BA  5D                        POP EBP
0063D0BB  C2 04 00                  RET 0x4
