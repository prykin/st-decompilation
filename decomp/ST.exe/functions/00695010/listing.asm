FUN_00695010:
00695010  55                        PUSH EBP
00695011  8B EC                     MOV EBP,ESP
00695013  83 EC 10                  SUB ESP,0x10
00695016  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00695019  53                        PUSH EBX
0069501A  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069501D  56                        PUSH ESI
0069501E  8B 70 04                  MOV ESI,dword ptr [EAX + 0x4]
00695021  57                        PUSH EDI
00695022  4E                        DEC ESI
00695023  8B F9                     MOV EDI,ECX
00695025  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
0069502C  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00695033  78 23                     JS 0x00695058
LAB_00695035:
00695035  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00695038  8B 57 08                  MOV EDX,dword ptr [EDI + 0x8]
0069503B  68 FF 00 00 00            PUSH 0xff
00695040  56                        PUSH ESI
00695041  53                        PUSH EBX
00695042  51                        PUSH ECX
00695043  52                        PUSH EDX
00695044  E8 67 C9 D6 FF            CALL 0x004019b0
00695049  83 C4 14                  ADD ESP,0x14
0069504C  85 C0                     TEST EAX,EAX
0069504E  75 05                     JNZ 0x00695055
00695050  4E                        DEC ESI
00695051  79 E2                     JNS 0x00695035
00695053  EB 03                     JMP 0x00695058
LAB_00695055:
00695055  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
LAB_00695058:
00695058  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069505B  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
0069505E  8D 45 F0                  LEA EAX,[EBP + -0x10]
00695061  50                        PUSH EAX
00695062  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
00695065  51                        PUSH ECX
00695066  53                        PUSH EBX
00695067  52                        PUSH EDX
00695068  50                        PUSH EAX
00695069  E8 DE F0 D6 FF            CALL 0x0040414c
0069506E  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
00695071  83 C4 14                  ADD ESP,0x14
00695074  F6 C5 20                  TEST CH,0x20
00695077  5F                        POP EDI
00695078  5E                        POP ESI
00695079  5B                        POP EBX
0069507A  75 0C                     JNZ 0x00695088
0069507C  66 81 F9 00 11            CMP CX,0x1100
00695081  B8 06 00 00 00            MOV EAX,0x6
00695086  75 03                     JNZ 0x0069508b
LAB_00695088:
00695088  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069508b:
0069508B  F6 C5 40                  TEST CH,0x40
0069508E  74 0A                     JZ 0x0069509a
00695090  C7 45 FC 10 71 00 00      MOV dword ptr [EBP + -0x4],0x7110
00695097  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0069509a:
0069509A  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
0069509D  85 C9                     TEST ECX,ECX
0069509F  74 12                     JZ 0x006950b3
006950A1  7E 15                     JLE 0x006950b8
006950A3  83 F9 04                  CMP ECX,0x4
006950A6  7F 10                     JG 0x006950b8
006950A8  B8 09 00 00 00            MOV EAX,0x9
006950AD  8B E5                     MOV ESP,EBP
006950AF  5D                        POP EBP
006950B0  C2 0C 00                  RET 0xc
LAB_006950b3:
006950B3  B8 01 00 00 00            MOV EAX,0x1
LAB_006950b8:
006950B8  8B E5                     MOV ESP,EBP
006950BA  5D                        POP EBP
006950BB  C2 0C 00                  RET 0xc
