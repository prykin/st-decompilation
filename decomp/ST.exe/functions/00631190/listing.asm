FUN_00631190:
00631190  55                        PUSH EBP
00631191  8B EC                     MOV EBP,ESP
00631193  53                        PUSH EBX
00631194  56                        PUSH ESI
00631195  57                        PUSH EDI
00631196  8B F9                     MOV EDI,ECX
00631198  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0063119B  8B 47 38                  MOV EAX,dword ptr [EDI + 0x38]
0063119E  3B 48 0C                  CMP ECX,dword ptr [EAX + 0xc]
006311A1  73 0B                     JNC 0x006311ae
006311A3  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
006311A6  0F AF F1                  IMUL ESI,ECX
006311A9  03 70 1C                  ADD ESI,dword ptr [EAX + 0x1c]
006311AC  EB 02                     JMP 0x006311b0
LAB_006311ae:
006311AE  33 F6                     XOR ESI,ESI
LAB_006311b0:
006311B0  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
006311B3  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006311B6  8B 4D 1C                  MOV ECX,dword ptr [EBP + 0x1c]
006311B9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006311BC  53                        PUSH EBX
006311BD  50                        PUSH EAX
006311BE  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006311C1  51                        PUSH ECX
006311C2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006311C5  52                        PUSH EDX
006311C6  50                        PUSH EAX
006311C7  51                        PUSH ECX
006311C8  8B CF                     MOV ECX,EDI
006311CA  E8 88 0B DD FF            CALL 0x00401d57
006311CF  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006311D2  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006311D5  53                        PUSH EBX
006311D6  6A 01                     PUSH 0x1
006311D8  6A 00                     PUSH 0x0
006311DA  52                        PUSH EDX
006311DB  50                        PUSH EAX
006311DC  8B CF                     MOV ECX,EDI
006311DE  E8 BC 4A DD FF            CALL 0x00405c9f
006311E3  89 46 10                  MOV dword ptr [ESI + 0x10],EAX
006311E6  5F                        POP EDI
006311E7  5E                        POP ESI
006311E8  5B                        POP EBX
006311E9  85 C0                     TEST EAX,EAX
006311EB  74 09                     JZ 0x006311f6
006311ED  B8 01 00 00 00            MOV EAX,0x1
006311F2  5D                        POP EBP
006311F3  C2 1C 00                  RET 0x1c
LAB_006311f6:
006311F6  33 C0                     XOR EAX,EAX
006311F8  5D                        POP EBP
006311F9  C2 1C 00                  RET 0x1c
