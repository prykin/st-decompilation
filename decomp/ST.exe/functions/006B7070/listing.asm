FUN_006b7070:
006B7070  55                        PUSH EBP
006B7071  8B EC                     MOV EBP,ESP
006B7073  6A FF                     PUSH -0x1
006B7075  68 08 D9 79 00            PUSH 0x79d908
006B707A  68 64 D9 72 00            PUSH 0x72d964
006B707F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B7085  50                        PUSH EAX
006B7086  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B708D  83 EC 14                  SUB ESP,0x14
006B7090  53                        PUSH EBX
006B7091  56                        PUSH ESI
006B7092  57                        PUSH EDI
006B7093  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B7096  8B 5D 08                  MOV EBX,dword ptr [EBP + 0x8]
006B7099  F6 43 04 01               TEST byte ptr [EBX + 0x4],0x1
006B709D  0F 84 80 00 00 00         JZ 0x006b7123
006B70A3  8B 03                     MOV EAX,dword ptr [EBX]
006B70A5  8B 08                     MOV ECX,dword ptr [EAX]
006B70A7  8D 55 DC                  LEA EDX,[EBP + -0x24]
006B70AA  52                        PUSH EDX
006B70AB  6A 00                     PUSH 0x0
006B70AD  50                        PUSH EAX
006B70AE  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B70B1  3D 1E 00 77 88            CMP EAX,0x8877001e
006B70B6  75 6B                     JNZ 0x006b7123
006B70B8  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B70BF  8B 7D DC                  MOV EDI,dword ptr [EBP + -0x24]
006B70C2  8B C7                     MOV EAX,EDI
006B70C4  83 C0 03                  ADD EAX,0x3
006B70C7  24 FC                     AND AL,0xfc
006B70C9  E8 72 69 07 00            CALL 0x0072da40
006B70CE  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B70D1  8B F4                     MOV ESI,ESP
006B70D3  89 75 E4                  MOV dword ptr [EBP + -0x1c],ESI
006B70D6  8B CF                     MOV ECX,EDI
006B70D8  33 C0                     XOR EAX,EAX
006B70DA  8B FE                     MOV EDI,ESI
006B70DC  8B D1                     MOV EDX,ECX
006B70DE  C1 E9 02                  SHR ECX,0x2
006B70E1  F3 AB                     STOSD.REP ES:EDI
006B70E3  8B CA                     MOV ECX,EDX
006B70E5  83 E1 03                  AND ECX,0x3
006B70E8  F3 AA                     STOSB.REP ES:EDI
006B70EA  8B 03                     MOV EAX,dword ptr [EBX]
006B70EC  8B 08                     MOV ECX,dword ptr [EAX]
006B70EE  8D 55 DC                  LEA EDX,[EBP + -0x24]
006B70F1  52                        PUSH EDX
006B70F2  56                        PUSH ESI
006B70F3  50                        PUSH EAX
006B70F4  FF 51 58                  CALL dword ptr [ECX + 0x58]
006B70F7  85 C0                     TEST EAX,EAX
006B70F9  75 21                     JNZ 0x006b711c
006B70FB  8B 46 04                  MOV EAX,dword ptr [ESI + 0x4]
006B70FE  0C 20                     OR AL,0x20
006B7100  89 46 04                  MOV dword ptr [ESI + 0x4],EAX
006B7103  8B 1B                     MOV EBX,dword ptr [EBX]
006B7105  8B 03                     MOV EAX,dword ptr [EBX]
006B7107  6A 00                     PUSH 0x0
006B7109  56                        PUSH ESI
006B710A  53                        PUSH EBX
006B710B  FF 50 7C                  CALL dword ptr [EAX + 0x7c]
006B710E  89 45 E0                  MOV dword ptr [EBP + -0x20],EAX
006B7111  EB 09                     JMP 0x006b711c
LAB_006b711c:
006B711C  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
LAB_006b7123:
006B7123  8D 65 D0                  LEA ESP,[EBP + -0x30]
006B7126  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B7129  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B7130  5F                        POP EDI
006B7131  5E                        POP ESI
006B7132  5B                        POP EBX
006B7133  8B E5                     MOV ESP,EBP
006B7135  5D                        POP EBP
006B7136  C2 04 00                  RET 0x4
