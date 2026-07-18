FUN_00529f90:
00529F90  55                        PUSH EBP
00529F91  8B EC                     MOV EBP,ESP
00529F93  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00529F96  33 C0                     XOR EAX,EAX
00529F98  8B 49 14                  MOV ECX,dword ptr [ECX + 0x14]
00529F9B  83 F9 03                  CMP ECX,0x3
00529F9E  77 10                     JA 0x00529fb0
switchD_00529fa0::switchD:
00529FA0  FF 24 8D B4 9F 52 00      JMP dword ptr [ECX*0x4 + 0x529fb4]
switchD_00529fa0::caseD_0:
00529FA7  33 C0                     XOR EAX,EAX
00529FA9  5D                        POP EBP
00529FAA  C3                        RET
switchD_00529fa0::caseD_2:
00529FAB  B8 01 00 00 00            MOV EAX,0x1
switchD_00529fa0::default:
00529FB0  5D                        POP EBP
00529FB1  C3                        RET
