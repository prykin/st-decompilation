FUN_00620f60:
00620F60  55                        PUSH EBP
00620F61  8B EC                     MOV EBP,ESP
00620F63  83 EC 0C                  SUB ESP,0xc
00620F66  8B 81 F5 00 00 00         MOV EAX,dword ptr [ECX + 0xf5]
00620F6C  53                        PUSH EBX
00620F6D  83 CB FF                  OR EBX,0xffffffff
00620F70  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
00620F73  85 C0                     TEST EAX,EAX
00620F75  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620F78  0F 84 BB 00 00 00         JZ 0x00621039
00620F7E  8B 40 0C                  MOV EAX,dword ptr [EAX + 0xc]
00620F81  48                        DEC EAX
00620F82  0F 88 B1 00 00 00         JS 0x00621039
00620F88  8B D0                     MOV EDX,EAX
00620F8A  56                        PUSH ESI
00620F8B  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00620F8E  57                        PUSH EDI
00620F8F  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00620F92  EB 03                     JMP 0x00620f97
LAB_00620f94:
00620F94  8B 4D F4                  MOV ECX,dword ptr [EBP + -0xc]
LAB_00620f97:
00620F97  8B 89 F5 00 00 00         MOV ECX,dword ptr [ECX + 0xf5]
00620F9D  3B 51 0C                  CMP EDX,dword ptr [ECX + 0xc]
00620FA0  73 7F                     JNC 0x00621021
00620FA2  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00620FA5  8B 79 1C                  MOV EDI,dword ptr [ECX + 0x1c]
00620FA8  0F AF C2                  IMUL EAX,EDX
00620FAB  03 C7                     ADD EAX,EDI
00620FAD  85 C0                     TEST EAX,EAX
00620FAF  74 70                     JZ 0x00621021
00620FB1  8B 50 08                  MOV EDX,dword ptr [EAX + 0x8]
00620FB4  8D 7A FD                  LEA EDI,[EDX + -0x3]
00620FB7  39 7D 0C                  CMP dword ptr [EBP + 0xc],EDI
00620FBA  7C 4D                     JL 0x00621009
00620FBC  8B 7D 0C                  MOV EDI,dword ptr [EBP + 0xc]
00620FBF  83 C2 03                  ADD EDX,0x3
00620FC2  3B FA                     CMP EDI,EDX
00620FC4  7F 43                     JG 0x00621009
00620FC6  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
00620FC9  8D 5A FD                  LEA EBX,[EDX + -0x3]
00620FCC  39 5D 10                  CMP dword ptr [EBP + 0x10],EBX
00620FCF  7C 35                     JL 0x00621006
00620FD1  8D 5A 03                  LEA EBX,[EDX + 0x3]
00620FD4  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00620FD7  3B D3                     CMP EDX,EBX
00620FD9  7F 2B                     JG 0x00621006
00620FDB  89 78 08                  MOV dword ptr [EAX + 0x8],EDI
00620FDE  8B 38                     MOV EDI,dword ptr [EAX]
00620FE0  8B CE                     MOV ECX,ESI
00620FE2  BB 01 00 00 00            MOV EBX,0x1
00620FE7  2B CF                     SUB ECX,EDI
00620FE9  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00620FEC  81 F9 94 11 00 00         CMP ECX,0x1194
00620FF2  89 50 0C                  MOV dword ptr [EAX + 0xc],EDX
00620FF5  89 70 04                  MOV dword ptr [EAX + 0x4],ESI
00620FF8  76 27                     JBE 0x00621021
00620FFA  BB 02 00 00 00            MOV EBX,0x2
00620FFF  89 30                     MOV dword ptr [EAX],ESI
00621001  89 5D FC                  MOV dword ptr [EBP + -0x4],EBX
00621004  EB 1B                     JMP 0x00621021
LAB_00621006:
00621006  8B 5D FC                  MOV EBX,dword ptr [EBP + -0x4]
LAB_00621009:
00621009  8B 38                     MOV EDI,dword ptr [EAX]
0062100B  8B D6                     MOV EDX,ESI
0062100D  2B D7                     SUB EDX,EDI
0062100F  81 FA 94 11 00 00         CMP EDX,0x1194
00621015  76 0A                     JBE 0x00621021
00621017  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0062101A  50                        PUSH EAX
0062101B  51                        PUSH ECX
0062101C  E8 4F FC 08 00            CALL 0x006b0c70
LAB_00621021:
00621021  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
00621024  4A                        DEC EDX
00621025  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
00621028  0F 89 66 FF FF FF         JNS 0x00620f94
0062102E  5F                        POP EDI
0062102F  8B C3                     MOV EAX,EBX
00621031  5E                        POP ESI
00621032  5B                        POP EBX
00621033  8B E5                     MOV ESP,EBP
00621035  5D                        POP EBP
00621036  C2 10 00                  RET 0x10
LAB_00621039:
00621039  8B C3                     MOV EAX,EBX
0062103B  5B                        POP EBX
0062103C  8B E5                     MOV ESP,EBP
0062103E  5D                        POP EBP
0062103F  C2 10 00                  RET 0x10
