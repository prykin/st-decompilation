FUN_006e45c0:
006E45C0  55                        PUSH EBP
006E45C1  8B EC                     MOV EBP,ESP
006E45C3  53                        PUSH EBX
006E45C4  56                        PUSH ESI
006E45C5  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E45C8  57                        PUSH EDI
006E45C9  8B F9                     MOV EDI,ECX
006E45CB  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006E45CE  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_006e45d5:
006E45D5  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E45D8  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E45DB  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006E45DE  3B D0                     CMP EDX,EAX
006E45E0  73 2F                     JNC 0x006e4611
006E45E2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
006E45E5  8B 59 1C                  MOV EBX,dword ptr [ECX + 0x1c]
006E45E8  0F AF C2                  IMUL EAX,EDX
006E45EB  8D 52 01                  LEA EDX,[EDX + 0x1]
006E45EE  03 C3                     ADD EAX,EBX
006E45F0  89 51 04                  MOV dword ptr [ECX + 0x4],EDX
006E45F3  74 1C                     JZ 0x006e4611
006E45F5  83 38 01                  CMP dword ptr [EAX],0x1
006E45F8  74 DB                     JZ 0x006e45d5
006E45FA  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
006E45FD  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
006E4603  85 C9                     TEST ECX,ECX
006E4605  74 CE                     JZ 0x006e45d5
006E4607  50                        PUSH EAX
006E4608  8B CF                     MOV ECX,EDI
006E460A  E8 B1 FF FF FF            CALL 0x006e45c0
006E460F  EB C4                     JMP 0x006e45d5
LAB_006e4611:
006E4611  5F                        POP EDI
006E4612  5E                        POP ESI
006E4613  33 C0                     XOR EAX,EAX
006E4615  5B                        POP EBX
006E4616  5D                        POP EBP
006E4617  C2 04 00                  RET 0x4
