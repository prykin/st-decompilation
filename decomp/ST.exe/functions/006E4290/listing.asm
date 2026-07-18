FUN_006e4290:
006E4290  55                        PUSH EBP
006E4291  8B EC                     MOV EBP,ESP
006E4293  83 EC 10                  SUB ESP,0x10
006E4296  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006E4299  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006E429C  89 45 F0                  MOV dword ptr [EBP + -0x10],EAX
006E429F  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006E42A2  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006E42A5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
006E42A8  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006E42AB  8D 45 F0                  LEA EAX,[EBP + -0x10]
006E42AE  50                        PUSH EAX
006E42AF  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
006E42B2  E8 19 FF FF FF            CALL 0x006e41d0
006E42B7  8B E5                     MOV ESP,EBP
006E42B9  5D                        POP EBP
006E42BA  C2 10 00                  RET 0x10
