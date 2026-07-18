FUN_00613140:
00613140  55                        PUSH EBP
00613141  8B EC                     MOV EBP,ESP
00613143  83 EC 38                  SUB ESP,0x38
00613146  DB 45 14                  FILD dword ptr [EBP + 0x14]
00613149  56                        PUSH ESI
0061314A  6A 01                     PUSH 0x1
0061314C  6A 00                     PUSH 0x0
0061314E  6A 00                     PUSH 0x0
00613150  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613156  6A 00                     PUSH 0x0
00613158  8B F1                     MOV ESI,ECX
0061315A  6A 00                     PUSH 0x0
0061315C  6A 00                     PUSH 0x0
0061315E  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613164  8D 45 F4                  LEA EAX,[EBP + -0xc]
00613167  6A 00                     PUSH 0x0
00613169  8D 4D C8                  LEA ECX,[EBP + -0x38]
0061316C  50                        PUSH EAX
0061316D  D9 5D F4                  FSTP float ptr [EBP + -0xc]
00613170  DB 45 18                  FILD dword ptr [EBP + 0x18]
00613173  51                        PUSH ECX
00613174  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
0061317A  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613180  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613186  D9 5D F8                  FSTP float ptr [EBP + -0x8]
00613189  DB 45 1C                  FILD dword ptr [EBP + 0x1c]
0061318C  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
00613192  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
00613198  D9 5D FC                  FSTP float ptr [EBP + -0x4]
0061319B  E8 30 F4 0C 00            CALL 0x006e25d0
006131A0  DB 45 08                  FILD dword ptr [EBP + 0x8]
006131A3  6A 01                     PUSH 0x1
006131A5  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
006131AB  6A 00                     PUSH 0x0
006131AD  6A 00                     PUSH 0x0
006131AF  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006131B5  6A 00                     PUSH 0x0
006131B7  6A 00                     PUSH 0x0
006131B9  6A 00                     PUSH 0x0
006131BB  8D 55 E8                  LEA EDX,[EBP + -0x18]
006131BE  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006131C4  6A 00                     PUSH 0x0
006131C6  8D 45 D8                  LEA EAX,[EBP + -0x28]
006131C9  52                        PUSH EDX
006131CA  50                        PUSH EAX
006131CB  D9 5D E8                  FSTP float ptr [EBP + -0x18]
006131CE  DB 45 0C                  FILD dword ptr [EBP + 0xc]
006131D1  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006131D7  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006131DD  D9 5D EC                  FSTP float ptr [EBP + -0x14]
006131E0  DB 45 10                  FILD dword ptr [EBP + 0x10]
006131E3  D8 0D F8 04 79 00         FMUL float ptr [0x007904f8]
006131E9  D8 0D F0 04 79 00         FMUL float ptr [0x007904f0]
006131EF  D9 5D F0                  FSTP float ptr [EBP + -0x10]
006131F2  E8 D9 F3 0C 00            CALL 0x006e25d0
006131F7  8B 45 E0                  MOV EAX,dword ptr [EBP + -0x20]
006131FA  8B 4D DC                  MOV ECX,dword ptr [EBP + -0x24]
006131FD  C1 F8 10                  SAR EAX,0x10
00613200  50                        PUSH EAX
00613201  8B 45 D8                  MOV EAX,dword ptr [EBP + -0x28]
00613204  8B 16                     MOV EDX,dword ptr [ESI]
00613206  C1 F9 10                  SAR ECX,0x10
00613209  C1 F8 10                  SAR EAX,0x10
0061320C  51                        PUSH ECX
0061320D  8B 4D D0                  MOV ECX,dword ptr [EBP + -0x30]
00613210  50                        PUSH EAX
00613211  8B 45 CC                  MOV EAX,dword ptr [EBP + -0x34]
00613214  C1 F9 10                  SAR ECX,0x10
00613217  C1 F8 10                  SAR EAX,0x10
0061321A  51                        PUSH ECX
0061321B  8B 4D C8                  MOV ECX,dword ptr [EBP + -0x38]
0061321E  50                        PUSH EAX
0061321F  C1 F9 10                  SAR ECX,0x10
00613222  51                        PUSH ECX
00613223  8B CE                     MOV ECX,ESI
00613225  FF 52 14                  CALL dword ptr [EDX + 0x14]
00613228  0F BF D0                  MOVSX EDX,AX
0061322B  5E                        POP ESI
0061322C  8B 04 95 38 21 7D 00      MOV EAX,dword ptr [EDX*0x4 + 0x7d2138]
00613233  8B E5                     MOV ESP,EBP
00613235  5D                        POP EBP
00613236  C2 18 00                  RET 0x18
