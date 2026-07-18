FUN_00548bc0:
00548BC0  8B 89 A2 04 00 00         MOV ECX,dword ptr [ECX + 0x4a2]
00548BC6  8D 41 FD                  LEA EAX,[ECX + -0x3]
00548BC9  83 F8 29                  CMP EAX,0x29
00548BCC  77 15                     JA 0x00548be3
00548BCE  33 C9                     XOR ECX,ECX
00548BD0  8A 88 F0 8B 54 00         MOV CL,byte ptr [EAX + 0x548bf0]
switchD_00548bd6::switchD:
00548BD6  FF 24 8D E8 8B 54 00      JMP dword ptr [ECX*0x4 + 0x548be8]
switchD_00548bd6::caseD_3:
00548BDD  B8 01 00 00 00            MOV EAX,0x1
00548BE2  C3                        RET
switchD_00548bd6::caseD_4:
00548BE3  33 C0                     XOR EAX,EAX
00548BE5  C3                        RET
