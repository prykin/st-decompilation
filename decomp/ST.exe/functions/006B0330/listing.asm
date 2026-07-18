FUN_006b0330:
006B0330  55                        PUSH EBP
006B0331  8B EC                     MOV EBP,ESP
006B0333  6A FF                     PUSH -0x1
006B0335  68 90 D8 79 00            PUSH 0x79d890
006B033A  68 64 D9 72 00            PUSH 0x72d964
006B033F  64 A1 00 00 00 00         MOV EAX,FS:[0x0]
006B0345  50                        PUSH EAX
006B0346  64 89 25 00 00 00 00      MOV dword ptr FS:[0x0],ESP
006B034D  83 EC 08                  SUB ESP,0x8
006B0350  53                        PUSH EBX
006B0351  56                        PUSH ESI
006B0352  57                        PUSH EDI
006B0353  89 65 E8                  MOV dword ptr [EBP + -0x18],ESP
006B0356  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
006B035D  8B 45 30                  MOV EAX,dword ptr [EBP + 0x30]
006B0360  50                        PUSH EAX
006B0361  8B 4D 2C                  MOV ECX,dword ptr [EBP + 0x2c]
006B0364  51                        PUSH ECX
006B0365  8B 55 28                  MOV EDX,dword ptr [EBP + 0x28]
006B0368  52                        PUSH EDX
006B0369  8B 45 1C                  MOV EAX,dword ptr [EBP + 0x1c]
006B036C  50                        PUSH EAX
006B036D  0F AF 45 24               IMUL EAX,dword ptr [EBP + 0x24]
006B0371  03 45 18                  ADD EAX,dword ptr [EBP + 0x18]
006B0374  03 45 20                  ADD EAX,dword ptr [EBP + 0x20]
006B0377  50                        PUSH EAX
006B0378  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006B037B  50                        PUSH EAX
006B037C  0F AF 45 14               IMUL EAX,dword ptr [EBP + 0x14]
006B0380  03 45 08                  ADD EAX,dword ptr [EBP + 0x8]
006B0383  03 45 10                  ADD EAX,dword ptr [EBP + 0x10]
006B0386  50                        PUSH EAX
006B0387  E8 54 E8 01 00            CALL 0x006cebe0
006B038C  EB 1D                     JMP 0x006b03ab
LAB_006b03ab:
006B03AB  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006B03B2  8B 4D F0                  MOV ECX,dword ptr [EBP + -0x10]
006B03B5  64 89 0D 00 00 00 00      MOV dword ptr FS:[0x0],ECX
006B03BC  5F                        POP EDI
006B03BD  5E                        POP ESI
006B03BE  5B                        POP EBX
006B03BF  8B E5                     MOV ESP,EBP
006B03C1  5D                        POP EBP
006B03C2  C2 2C 00                  RET 0x2c
