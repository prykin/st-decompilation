FUN_006e4540:
006E4540  55                        PUSH EBP
006E4541  8B EC                     MOV EBP,ESP
006E4543  53                        PUSH EBX
006E4544  56                        PUSH ESI
006E4545  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006E4548  33 C0                     XOR EAX,EAX
006E454A  57                        PUSH EDI
006E454B  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
006E454E  8B D9                     MOV EBX,ECX
006E4550  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
LAB_006e4553:
006E4553  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
006E4556  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
006E4559  3B D1                     CMP EDX,ECX
006E455B  73 31                     JNC 0x006e458e
006E455D  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
006E4560  0F AF CA                  IMUL ECX,EDX
006E4563  03 4E 1C                  ADD ECX,dword ptr [ESI + 0x1c]
006E4566  8D 52 01                  LEA EDX,[EDX + 0x1]
006E4569  89 56 04                  MOV dword ptr [ESI + 0x4],EDX
006E456C  74 20                     JZ 0x006e458e
006E456E  8B 51 04                  MOV EDX,dword ptr [ECX + 0x4]
006E4571  39 7A 14                  CMP dword ptr [EDX + 0x14],EDI
006E4574  74 16                     JZ 0x006e458c
006E4576  8B 49 08                  MOV ECX,dword ptr [ECX + 0x8]
006E4579  85 C9                     TEST ECX,ECX
006E457B  74 D6                     JZ 0x006e4553
006E457D  57                        PUSH EDI
006E457E  51                        PUSH ECX
006E457F  8B CB                     MOV ECX,EBX
006E4581  E8 BA FF FF FF            CALL 0x006e4540
006E4586  85 C0                     TEST EAX,EAX
006E4588  75 04                     JNZ 0x006e458e
006E458A  EB C7                     JMP 0x006e4553
LAB_006e458c:
006E458C  8B C1                     MOV EAX,ECX
LAB_006e458e:
006E458E  5F                        POP EDI
006E458F  5E                        POP ESI
006E4590  5B                        POP EBX
006E4591  5D                        POP EBP
006E4592  C2 08 00                  RET 0x8
