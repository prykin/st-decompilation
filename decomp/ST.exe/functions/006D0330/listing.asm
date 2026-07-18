FUN_006d0330:
006D0330  55                        PUSH EBP
006D0331  8B EC                     MOV EBP,ESP
006D0333  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006D0336  57                        PUSH EDI
006D0337  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006D033A  3B 87 A0 01 00 00         CMP EAX,dword ptr [EDI + 0x1a0]
006D0340  73 45                     JNC 0x006d0387
006D0342  8B 8F B0 01 00 00         MOV ECX,dword ptr [EDI + 0x1b0]
006D0348  8B 04 81                  MOV EAX,dword ptr [ECX + EAX*0x4]
006D034B  8B 10                     MOV EDX,dword ptr [EAX]
006D034D  81 E2 00 C0 00 00         AND EDX,0xc000
006D0353  81 FA 00 C0 00 00         CMP EDX,0xc000
006D0359  75 2C                     JNZ 0x006d0387
006D035B  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006D035E  56                        PUSH ESI
006D035F  8B B0 C0 00 00 00         MOV ESI,dword ptr [EAX + 0xc0]
006D0365  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006D0368  50                        PUSH EAX
006D0369  51                        PUSH ECX
006D036A  8B 16                     MOV EDX,dword ptr [ESI]
006D036C  52                        PUSH EDX
006D036D  57                        PUSH EDI
006D036E  E8 8D 24 FE FF            CALL 0x006b2800
006D0373  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006D0376  8B 4E 04                  MOV ECX,dword ptr [ESI + 0x4]
006D0379  8B 16                     MOV EDX,dword ptr [ESI]
006D037B  50                        PUSH EAX
006D037C  51                        PUSH ECX
006D037D  6A FF                     PUSH -0x1
006D037F  52                        PUSH EDX
006D0380  57                        PUSH EDI
006D0381  E8 BA 32 FE FF            CALL 0x006b3640
006D0386  5E                        POP ESI
LAB_006d0387:
006D0387  5F                        POP EDI
006D0388  5D                        POP EBP
006D0389  C2 10 00                  RET 0x10
