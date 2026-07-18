FUN_00724f00:
00724F00  55                        PUSH EBP
00724F01  8B EC                     MOV EBP,ESP
00724F03  8B 41 20                  MOV EAX,dword ptr [ECX + 0x20]
00724F06  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00724F09  53                        PUSH EBX
00724F0A  56                        PUSH ESI
00724F0B  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00724F0E  83 F8 01                  CMP EAX,0x1
00724F11  57                        PUSH EDI
00724F12  75 20                     JNZ 0x00724f34
00724F14  8B B9 98 01 00 00         MOV EDI,dword ptr [ECX + 0x198]
00724F1A  8B 59 28                  MOV EBX,dword ptr [ECX + 0x28]
00724F1D  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
00724F20  3B F0                     CMP ESI,EAX
00724F22  7C 6D                     JL 0x00724f91
00724F24  8B 81 3C 01 00 00         MOV EAX,dword ptr [ECX + 0x13c]
00724F2A  03 C3                     ADD EAX,EBX
00724F2C  03 C7                     ADD EAX,EDI
00724F2E  3B F0                     CMP ESI,EAX
00724F30  7F 5F                     JG 0x00724f91
00724F32  EB 1E                     JMP 0x00724f52
LAB_00724f34:
00724F34  8B B9 94 01 00 00         MOV EDI,dword ptr [ECX + 0x194]
00724F3A  8B 59 24                  MOV EBX,dword ptr [ECX + 0x24]
00724F3D  8D 04 3B                  LEA EAX,[EBX + EDI*0x1]
00724F40  3B D0                     CMP EDX,EAX
00724F42  7C 4D                     JL 0x00724f91
00724F44  8B 81 3C 01 00 00         MOV EAX,dword ptr [ECX + 0x13c]
00724F4A  03 C3                     ADD EAX,EBX
00724F4C  03 C7                     ADD EAX,EDI
00724F4E  3B D0                     CMP EDX,EAX
00724F50  7F 3F                     JG 0x00724f91
LAB_00724f52:
00724F52  8B B9 40 01 00 00         MOV EDI,dword ptr [ECX + 0x140]
00724F58  B8 01 00 00 00            MOV EAX,0x1
00724F5D  85 FF                     TEST EDI,EDI
00724F5F  74 32                     JZ 0x00724f93
00724F61  8B 99 98 01 00 00         MOV EBX,dword ptr [ECX + 0x198]
00724F67  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
00724F6A  2B F3                     SUB ESI,EBX
00724F6C  8B 59 24                  MOV EBX,dword ptr [ECX + 0x24]
00724F6F  2B F0                     SUB ESI,EAX
00724F71  8B 81 94 01 00 00         MOV EAX,dword ptr [ECX + 0x194]
00724F77  8B 89 44 01 00 00         MOV ECX,dword ptr [ECX + 0x144]
00724F7D  2B D0                     SUB EDX,EAX
00724F7F  2B D3                     SUB EDX,EBX
00724F81  56                        PUSH ESI
00724F82  52                        PUSH EDX
00724F83  51                        PUSH ECX
00724F84  57                        PUSH EDI
00724F85  E8 36 06 F9 FF            CALL 0x006b55c0
00724F8A  5F                        POP EDI
00724F8B  5E                        POP ESI
00724F8C  5B                        POP EBX
00724F8D  5D                        POP EBP
00724F8E  C2 08 00                  RET 0x8
LAB_00724f91:
00724F91  33 C0                     XOR EAX,EAX
LAB_00724f93:
00724F93  5F                        POP EDI
00724F94  5E                        POP ESI
00724F95  5B                        POP EBX
00724F96  5D                        POP EBP
00724F97  C2 08 00                  RET 0x8
