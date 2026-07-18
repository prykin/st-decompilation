FUN_00759f50:
00759F50  55                        PUSH EBP
00759F51  8B EC                     MOV EBP,ESP
00759F53  53                        PUSH EBX
00759F54  56                        PUSH ESI
00759F55  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00759F58  6A 50                     PUSH 0x50
00759F5A  6A 01                     PUSH 0x1
00759F5C  56                        PUSH ESI
00759F5D  8B 06                     MOV EAX,dword ptr [ESI]
00759F5F  FF 10                     CALL dword ptr [EAX]
00759F61  8B D8                     MOV EBX,EAX
00759F63  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00759F66  89 9E 96 01 00 00         MOV dword ptr [ESI + 0x196],EBX
00759F6C  85 C0                     TEST EAX,EAX
00759F6E  C7 03 F0 A0 75 00         MOV dword ptr [EBX],0x75a0f0
00759F74  74 18                     JZ 0x00759f8e
00759F76  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00759F7C  68 EB 01 00 00            PUSH 0x1eb
00759F81  68 E0 2D 7F 00            PUSH 0x7f2de0
00759F86  51                        PUSH ECX
00759F87  6A 04                     PUSH 0x4
00759F89  E8 B2 BE F4 FF            CALL 0x006a5e40
LAB_00759f8e:
00759F8E  8B 96 B2 01 00 00         MOV EDX,dword ptr [ESI + 0x1b2]
00759F94  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00759F97  85 C0                     TEST EAX,EAX
00759F99  74 34                     JZ 0x00759fcf
00759F9B  83 BE 2A 01 00 00 02      CMP dword ptr [ESI + 0x12a],0x2
00759FA2  7D 17                     JGE 0x00759fbb
00759FA4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00759FA9  68 F2 01 00 00            PUSH 0x1f2
00759FAE  68 E0 2D 7F 00            PUSH 0x7f2de0
00759FB3  50                        PUSH EAX
00759FB4  6A 2E                     PUSH 0x2e
00759FB6  E8 85 BE F4 FF            CALL 0x006a5e40
LAB_00759fbb:
00759FBB  56                        PUSH ESI
00759FBC  E8 7F 00 00 00            CALL 0x0075a040
00759FC1  8B 86 2A 01 00 00         MOV EAX,dword ptr [ESI + 0x12a]
00759FC7  83 C0 02                  ADD EAX,0x2
00759FCA  89 45 08                  MOV dword ptr [EBP + 0x8],EAX
00759FCD  EB 09                     JMP 0x00759fd8
LAB_00759fcf:
00759FCF  8B 8E 2A 01 00 00         MOV ECX,dword ptr [ESI + 0x12a]
00759FD5  89 4D 08                  MOV dword ptr [EBP + 0x8],ECX
LAB_00759fd8:
00759FD8  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
00759FDB  8B 86 D0 00 00 00         MOV EAX,dword ptr [ESI + 0xd0]
00759FE1  85 C9                     TEST ECX,ECX
00759FE3  C7 45 0C 00 00 00 00      MOV dword ptr [EBP + 0xc],0x0
00759FEA  7E 41                     JLE 0x0075a02d
00759FEC  57                        PUSH EDI
00759FED  8D 78 24                  LEA EDI,[EAX + 0x24]
00759FF0  83 C3 08                  ADD EBX,0x8
LAB_00759ff3:
00759FF3  8B 0F                     MOV ECX,dword ptr [EDI]
00759FF5  8B 47 E8                  MOV EAX,dword ptr [EDI + -0x18]
00759FF8  0F AF C1                  IMUL EAX,ECX
00759FFB  99                        CDQ
00759FFC  F7 BE 2A 01 00 00         IDIV dword ptr [ESI + 0x12a]
0075A002  8B 16                     MOV EDX,dword ptr [ESI]
0075A004  0F AF 45 08               IMUL EAX,dword ptr [EBP + 0x8]
0075A008  50                        PUSH EAX
0075A009  8B 47 F8                  MOV EAX,dword ptr [EDI + -0x8]
0075A00C  0F AF C1                  IMUL EAX,ECX
0075A00F  50                        PUSH EAX
0075A010  6A 01                     PUSH 0x1
0075A012  56                        PUSH ESI
0075A013  FF 52 08                  CALL dword ptr [EDX + 0x8]
0075A016  89 03                     MOV dword ptr [EBX],EAX
0075A018  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0075A01B  8B 4E 1C                  MOV ECX,dword ptr [ESI + 0x1c]
0075A01E  40                        INC EAX
0075A01F  83 C3 04                  ADD EBX,0x4
0075A022  83 C7 54                  ADD EDI,0x54
0075A025  3B C1                     CMP EAX,ECX
0075A027  89 45 0C                  MOV dword ptr [EBP + 0xc],EAX
0075A02A  7C C7                     JL 0x00759ff3
0075A02C  5F                        POP EDI
LAB_0075a02d:
0075A02D  5E                        POP ESI
0075A02E  5B                        POP EBX
0075A02F  5D                        POP EBP
0075A030  C2 08 00                  RET 0x8
