FUN_00618170:
00618170  55                        PUSH EBP
00618171  8B EC                     MOV EBP,ESP
00618173  51                        PUSH ECX
00618174  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00618177  53                        PUSH EBX
00618178  8B D9                     MOV EBX,ECX
0061817A  56                        PUSH ESI
0061817B  57                        PUSH EDI
0061817C  B9 14 00 00 00            MOV ECX,0x14
00618181  8B F0                     MOV ESI,EAX
00618183  8D 7B 1C                  LEA EDI,[EBX + 0x1c]
00618186  F3 A5                     MOVSD.REP ES:EDI,ESI
00618188  66 A5                     MOVSW ES:EDI,ESI
0061818A  8D 70 52                  LEA ESI,[EAX + 0x52]
0061818D  8B 43 5E                  MOV EAX,dword ptr [EBX + 0x5e]
00618190  85 C0                     TEST EAX,EAX
00618192  C7 45 FC 52 00 00 00      MOV dword ptr [EBP + -0x4],0x52
00618199  74 1A                     JZ 0x006181b5
0061819B  8B FE                     MOV EDI,ESI
0061819D  83 C6 04                  ADD ESI,0x4
006181A0  56                        PUSH ESI
006181A1  6A 00                     PUSH 0x0
006181A3  E8 B8 7E 09 00            CALL 0x006b0060
006181A8  89 43 5E                  MOV dword ptr [EBX + 0x5e],EAX
006181AB  8B 07                     MOV EAX,dword ptr [EDI]
006181AD  03 F0                     ADD ESI,EAX
006181AF  83 C0 52                  ADD EAX,0x52
006181B2  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
LAB_006181b5:
006181B5  8B 43 62                  MOV EAX,dword ptr [EBX + 0x62]
006181B8  85 C0                     TEST EAX,EAX
006181BA  74 1C                     JZ 0x006181d8
006181BC  8B FE                     MOV EDI,ESI
006181BE  83 C6 04                  ADD ESI,0x4
006181C1  56                        PUSH ESI
006181C2  6A 00                     PUSH 0x0
006181C4  E8 97 7E 09 00            CALL 0x006b0060
006181C9  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
006181CC  89 43 62                  MOV dword ptr [EBX + 0x62],EAX
006181CF  8B 07                     MOV EAX,dword ptr [EDI]
006181D1  03 F0                     ADD ESI,EAX
006181D3  03 C8                     ADD ECX,EAX
006181D5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
LAB_006181d8:
006181D8  8B 43 66                  MOV EAX,dword ptr [EBX + 0x66]
006181DB  85 C0                     TEST EAX,EAX
006181DD  74 1E                     JZ 0x006181fd
006181DF  8D 46 04                  LEA EAX,[ESI + 0x4]
006181E2  50                        PUSH EAX
006181E3  6A 00                     PUSH 0x0
006181E5  E8 76 7E 09 00            CALL 0x006b0060
006181EA  89 43 66                  MOV dword ptr [EBX + 0x66],EAX
006181ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006181F0  8B 0E                     MOV ECX,dword ptr [ESI]
006181F2  5F                        POP EDI
006181F3  5E                        POP ESI
006181F4  03 C1                     ADD EAX,ECX
006181F6  5B                        POP EBX
006181F7  8B E5                     MOV ESP,EBP
006181F9  5D                        POP EBP
006181FA  C2 04 00                  RET 0x4
LAB_006181fd:
006181FD  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00618200  5F                        POP EDI
00618201  5E                        POP ESI
00618202  5B                        POP EBX
00618203  8B E5                     MOV ESP,EBP
00618205  5D                        POP EBP
00618206  C2 04 00                  RET 0x4
