FUN_00718f40:
00718F40  55                        PUSH EBP
00718F41  8B EC                     MOV EBP,ESP
00718F43  81 EC 48 04 00 00         SUB ESP,0x448
00718F49  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00718F4E  53                        PUSH EBX
00718F4F  56                        PUSH ESI
00718F50  57                        PUSH EDI
00718F51  8D 55 BC                  LEA EDX,[EBP + -0x44]
00718F54  8D 4D B8                  LEA ECX,[EBP + -0x48]
00718F57  6A 00                     PUSH 0x0
00718F59  52                        PUSH EDX
00718F5A  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
00718F61  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00718F64  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00718F6A  E8 81 48 01 00            CALL 0x0072d7f0
00718F6F  8B F0                     MOV ESI,EAX
00718F71  83 C4 08                  ADD ESP,0x8
00718F74  85 F6                     TEST ESI,ESI
00718F76  0F 85 AD 00 00 00         JNZ 0x00719029
00718F7C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00718F7F  68 00 04 00 00            PUSH 0x400
00718F84  8D 8D B8 FB FF FF         LEA ECX,[EBP + 0xfffffbb8]
00718F8A  50                        PUSH EAX
00718F8B  51                        PUSH ECX
00718F8C  E8 DF 4A 01 00            CALL 0x0072da70
00718F91  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
00718F94  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00718F97  83 C4 0C                  ADD ESP,0xc
00718F9A  8B 16                     MOV EDX,dword ptr [ESI]
00718F9C  3B D0                     CMP EDX,EAX
00718F9E  7D 6F                     JGE 0x0071900f
00718FA0  8B 45 28                  MOV EAX,dword ptr [EBP + 0x28]
00718FA3  8B 5D 20                  MOV EBX,dword ptr [EBP + 0x20]
00718FA6  8B 4D 24                  MOV ECX,dword ptr [EBP + 0x24]
00718FA9  8B 10                     MOV EDX,dword ptr [EAX]
00718FAB  03 D3                     ADD EDX,EBX
00718FAD  3B CA                     CMP ECX,EDX
00718FAF  72 65                     JC 0x00719016
00718FB1  DB 45 18                  FILD dword ptr [EBP + 0x18]
00718FB4  89 08                     MOV dword ptr [EAX],ECX
00718FB6  8D 85 B8 FB FF FF         LEA EAX,[EBP + 0xfffffbb8]
00718FBC  50                        PUSH EAX
00718FBD  6A 64                     PUSH 0x64
00718FBF  DC 3D B0 DF 79 00         FDIVR double ptr [0x0079dfb0]
00718FC5  DA 0E                     FIMUL dword ptr [ESI]
00718FC7  E8 BC 52 01 00            CALL 0x0072e288
00718FCC  8B 7D 14                  MOV EDI,dword ptr [EBP + 0x14]
00718FCF  8B 5D 10                  MOV EBX,dword ptr [EBP + 0x10]
00718FD2  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00718FD5  50                        PUSH EAX
00718FD6  6A 64                     PUSH 0x64
00718FD8  57                        PUSH EDI
00718FD9  53                        PUSH EBX
00718FDA  51                        PUSH ECX
00718FDB  E8 70 FD FF FF            CALL 0x00718d50
00718FE0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00718FE3  83 C4 1C                  ADD ESP,0x1c
00718FE6  8D 95 B8 FB FF FF         LEA EDX,[EBP + 0xfffffbb8]
00718FEC  6A 01                     PUSH 0x1
00718FEE  57                        PUSH EDI
00718FEF  53                        PUSH EBX
00718FF0  52                        PUSH EDX
00718FF1  50                        PUSH EAX
00718FF2  E8 29 7A F9 FF            CALL 0x006b0a20
00718FF7  8B 06                     MOV EAX,dword ptr [ESI]
00718FF9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00718FFC  40                        INC EAX
00718FFD  89 06                     MOV dword ptr [ESI],EAX
00718FFF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00719002  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719008  5F                        POP EDI
00719009  5E                        POP ESI
0071900A  5B                        POP EBX
0071900B  8B E5                     MOV ESP,EBP
0071900D  5D                        POP EBP
0071900E  C3                        RET
LAB_0071900f:
0071900F  C7 45 FC FC FF FF FF      MOV dword ptr [EBP + -0x4],0xfffffffc
LAB_00719016:
00719016  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00719019  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071901C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00719022  5F                        POP EDI
00719023  5E                        POP ESI
00719024  5B                        POP EBX
00719025  8B E5                     MOV ESP,EBP
00719027  5D                        POP EBP
00719028  C3                        RET
LAB_00719029:
00719029  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0071902C  68 9C 07 7F 00            PUSH 0x7f079c
00719031  68 CC 4C 7A 00            PUSH 0x7a4ccc
00719036  56                        PUSH ESI
00719037  6A 00                     PUSH 0x0
00719039  68 51 01 00 00            PUSH 0x151
0071903E  68 18 07 7F 00            PUSH 0x7f0718
00719043  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00719049  E8 82 44 F9 FF            CALL 0x006ad4d0
0071904E  83 C4 18                  ADD ESP,0x18
00719051  85 C0                     TEST EAX,EAX
00719053  74 01                     JZ 0x00719056
00719055  CC                        INT3
LAB_00719056:
00719056  68 52 01 00 00            PUSH 0x152
0071905B  68 18 07 7F 00            PUSH 0x7f0718
00719060  6A 00                     PUSH 0x0
00719062  56                        PUSH ESI
00719063  E8 D8 CD F8 FF            CALL 0x006a5e40
00719068  8B C6                     MOV EAX,ESI
0071906A  5F                        POP EDI
0071906B  5E                        POP ESI
0071906C  5B                        POP EBX
0071906D  8B E5                     MOV ESP,EBP
0071906F  5D                        POP EBP
00719070  C3                        RET
