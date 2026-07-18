FUN_006b0290:
006B0290  55                        PUSH EBP
006B0291  8B EC                     MOV EBP,ESP
006B0293  6A FF                     PUSH -0x1
006B0295  68 80 D8 79 00            PUSH 0x79d880
006B029A  68 64 D9 72 00            PUSH 0x72d964
006B029F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B02A5  50                        PUSH EAX
006B02A6  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B02AD  83 EC 08                  SUB ESP,0x8
006B02B0  53                        PUSH EBX
006B02B1  56                        PUSH ESI
006B02B2  57                        PUSH EDI
006B02B3  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B02B6  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B02BD  8B 45 2C                  MOV EAX,dword ptr [EBP + 0x2c]
006B02C0  50                        PUSH EAX
006B02C1  8B 4D 28                  MOV ECX,dword ptr [EBP + 0x28]
006B02C4  51                        PUSH ECX
006B02C5  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B02C8  50                        PUSH EAX
006B02C9  0F AF 45 24               IMUL EAX,dword ptr [EBP + 0x24]
006B02CD  03 45 18                  ADD EAX,dword ptr [EBP + 0x18]
006B02D0  03 45 20                  ADD EAX,dword ptr [EBP + 0x20]
006B02D3  50                        PUSH EAX
006B02D4  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B02D7  50                        PUSH EAX
006B02D8  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006B02DC  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
006B02DF  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006B02E2  50                        PUSH EAX
006B02E3  E8 78 E7 01 00            CALL 0x006cea60
006B02E8  EB 1E                     JMP 0x006b0308
LAB_006b0308:
006B0308  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B030F  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B0312  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B0319  5F                        POP EDI
006B031A  5E                        POP ESI
006B031B  5B                        POP EBX
006B031C  8B E5                     MOV ESP,EBP
006B031E  5D                        POP EBP
006B031F  C2 28 00                  RET 0x28
