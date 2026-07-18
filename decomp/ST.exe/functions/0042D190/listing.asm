FUN_0042d190:
0042D190  55                        PUSH EBP
0042D191  8B EC                     MOV EBP,ESP
0042D193  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042D196  53                        PUSH EBX
0042D197  56                        PUSH ESI
0042D198  57                        PUSH EDI
0042D199  3D 9A 01 00 00            CMP EAX,0x19a
0042D19E  8B F9                     MOV EDI,ECX
0042D1A0  0F 8F B9 00 00 00         JG 0x0042d25f
0042D1A6  74 50                     JZ 0x0042d1f8
0042D1A8  83 F8 5A                  CMP EAX,0x5a
0042D1AB  7F 40                     JG 0x0042d1ed
0042D1AD  74 12                     JZ 0x0042d1c1
0042D1AF  85 C0                     TEST EAX,EAX
0042D1B1  0F 84 52 01 00 00         JZ 0x0042d309
0042D1B7  83 F8 3C                  CMP EAX,0x3c
0042D1BA  74 3C                     JZ 0x0042d1f8
0042D1BC  E9 AF 00 00 00            JMP 0x0042d270
LAB_0042d1c1:
0042D1C1  6A 04                     PUSH 0x4
LAB_0042d1c3:
0042D1C3  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042D1C6  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0042D1C9  50                        PUSH EAX
0042D1CA  51                        PUSH ECX
0042D1CB  8B CF                     MOV ECX,EDI
0042D1CD  E8 E8 56 FD FF            CALL 0x004028ba
0042D1D2  8B F0                     MOV ESI,EAX
0042D1D4  85 F6                     TEST ESI,ESI
0042D1D6  0F 84 2D 01 00 00         JZ 0x0042d309
0042D1DC  8B 16                     MOV EDX,dword ptr [ESI]
0042D1DE  6A 00                     PUSH 0x0
0042D1E0  8B CE                     MOV ECX,ESI
0042D1E2  FF 92 E8 00 00 00         CALL dword ptr [EDX + 0xe8]
0042D1E8  E9 D6 00 00 00            JMP 0x0042d2c3
LAB_0042d1ed:
0042D1ED  3D 72 01 00 00            CMP EAX,0x172
0042D1F2  75 7C                     JNZ 0x0042d270
0042D1F4  6A 02                     PUSH 0x2
0042D1F6  EB CB                     JMP 0x0042d1c3
LAB_0042d1f8:
0042D1F8  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0042D1FB  33 DB                     XOR EBX,EBX
0042D1FD  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
0042D200  85 C0                     TEST EAX,EAX
0042D202  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0042D205  0F 8E FE 00 00 00         JLE 0x0042d309
LAB_0042d20b:
0042D20B  8D 4D 14                  LEA ECX,[EBP + 0x14]
0042D20E  8B D3                     MOV EDX,EBX
0042D210  51                        PUSH ECX
0042D211  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0042D214  E8 57 FA 27 00            CALL 0x006acc70
0042D219  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0042D21C  66 3D FF FF               CMP AX,0xffff
0042D220  74 2E                     JZ 0x0042d250
0042D222  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042D225  6A 01                     PUSH 0x1
0042D227  50                        PUSH EAX
0042D228  52                        PUSH EDX
0042D229  8B CF                     MOV ECX,EDI
0042D22B  E8 8A 56 FD FF            CALL 0x004028ba
0042D230  8B F0                     MOV ESI,EAX
0042D232  85 F6                     TEST ESI,ESI
0042D234  74 1A                     JZ 0x0042d250
0042D236  8B 06                     MOV EAX,dword ptr [ESI]
0042D238  6A 00                     PUSH 0x0
0042D23A  8B CE                     MOV ECX,ESI
0042D23C  FF 90 E8 00 00 00         CALL dword ptr [EAX + 0xe8]
0042D242  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042D245  85 C0                     TEST EAX,EAX
0042D247  74 07                     JZ 0x0042d250
0042D249  8B CE                     MOV ECX,ESI
0042D24B  E8 CF 5F FD FF            CALL 0x0040321f
LAB_0042d250:
0042D250  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0042D253  43                        INC EBX
0042D254  3B D8                     CMP EBX,EAX
0042D256  7C B3                     JL 0x0042d20b
0042D258  5F                        POP EDI
0042D259  5E                        POP ESI
0042D25A  5B                        POP EBX
0042D25B  5D                        POP EBP
0042D25C  C2 14 00                  RET 0x14
LAB_0042d25f:
0042D25F  2D A4 01 00 00            SUB EAX,0x1a4
0042D264  74 72                     JZ 0x0042d2d8
0042D266  83 E8 0A                  SUB EAX,0xa
0042D269  74 35                     JZ 0x0042d2a0
0042D26B  83 E8 0A                  SUB EAX,0xa
0042D26E  74 2C                     JZ 0x0042d29c
LAB_0042d270:
0042D270  68 68 63 7A 00            PUSH 0x7a6368
0042D275  68 CC 4C 7A 00            PUSH 0x7a4ccc
0042D27A  6A 00                     PUSH 0x0
0042D27C  6A 00                     PUSH 0x0
0042D27E  68 06 04 00 00            PUSH 0x406
0042D283  68 04 60 7A 00            PUSH 0x7a6004
0042D288  E8 43 02 28 00            CALL 0x006ad4d0
0042D28D  83 C4 18                  ADD ESP,0x18
0042D290  85 C0                     TEST EAX,EAX
0042D292  74 75                     JZ 0x0042d309
0042D294  CC                        INT3
LAB_0042d29c:
0042D29C  6A 06                     PUSH 0x6
0042D29E  EB 02                     JMP 0x0042d2a2
LAB_0042d2a0:
0042D2A0  6A 03                     PUSH 0x3
LAB_0042d2a2:
0042D2A2  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042D2A5  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042D2A8  51                        PUSH ECX
0042D2A9  52                        PUSH EDX
0042D2AA  8B CF                     MOV ECX,EDI
0042D2AC  E8 09 56 FD FF            CALL 0x004028ba
0042D2B1  8B F0                     MOV ESI,EAX
0042D2B3  85 F6                     TEST ESI,ESI
0042D2B5  74 52                     JZ 0x0042d309
0042D2B7  8B 06                     MOV EAX,dword ptr [ESI]
0042D2B9  6A 00                     PUSH 0x0
0042D2BB  8B CE                     MOV ECX,ESI
0042D2BD  FF 90 E8 00 00 00         CALL dword ptr [EAX + 0xe8]
LAB_0042d2c3:
0042D2C3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042D2C6  85 C0                     TEST EAX,EAX
0042D2C8  74 3F                     JZ 0x0042d309
0042D2CA  8B CE                     MOV ECX,ESI
0042D2CC  E8 4E 5F FD FF            CALL 0x0040321f
0042D2D1  5F                        POP EDI
0042D2D2  5E                        POP ESI
0042D2D3  5B                        POP EBX
0042D2D4  5D                        POP EBP
0042D2D5  C2 14 00                  RET 0x14
LAB_0042d2d8:
0042D2D8  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0042D2DB  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0042D2DE  6A 05                     PUSH 0x5
0042D2E0  51                        PUSH ECX
0042D2E1  52                        PUSH EDX
0042D2E2  8B CF                     MOV ECX,EDI
0042D2E4  E8 D1 55 FD FF            CALL 0x004028ba
0042D2E9  8B F0                     MOV ESI,EAX
0042D2EB  85 F6                     TEST ESI,ESI
0042D2ED  74 1A                     JZ 0x0042d309
0042D2EF  8B 06                     MOV EAX,dword ptr [ESI]
0042D2F1  6A 00                     PUSH 0x0
0042D2F3  8B CE                     MOV ECX,ESI
0042D2F5  FF 90 E8 00 00 00         CALL dword ptr [EAX + 0xe8]
0042D2FB  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0042D2FE  85 C0                     TEST EAX,EAX
0042D300  74 07                     JZ 0x0042d309
0042D302  8B CE                     MOV ECX,ESI
0042D304  E8 16 5F FD FF            CALL 0x0040321f
LAB_0042d309:
0042D309  5F                        POP EDI
0042D30A  5E                        POP ESI
0042D30B  5B                        POP EBX
0042D30C  5D                        POP EBP
0042D30D  C2 14 00                  RET 0x14
