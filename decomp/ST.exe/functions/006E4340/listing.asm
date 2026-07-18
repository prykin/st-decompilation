FUN_006e4340:
006E4340  55                        PUSH EBP
006E4341  8B EC                     MOV EBP,ESP
006E4343  83 EC 10                  SUB ESP,0x10
006E4346  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4349  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E434C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E434F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E4352  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E4355  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E4358  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E435B  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E435E  50                        PUSH EAX
006E435F  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E4362  E8 59 FF FF FF            CALL 0x006e42c0
006E4367  8B E5                     MOV ESP,EBP
006E4369  5D                        POP EBP
006E436A  C2 10 00                  RET 0x10
