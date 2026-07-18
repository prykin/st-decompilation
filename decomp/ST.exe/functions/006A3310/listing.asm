FUN_006a3310:
006A3310  55                        PUSH EBP
006A3311  8B EC                     MOV EBP,ESP
006A3313  51                        PUSH ECX
006A3314  53                        PUSH EBX
006A3315  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
006A3318  56                        PUSH ESI
006A3319  57                        PUSH EDI
006A331A  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
006A331D  C7 45 FC FF FF FF FF      MOV dword ptr [EBP + -0x4],0xffffffff
006A3324  BE 01 00 00 00            MOV ESI,0x1
LAB_006a3329:
006A3329  85 DB                     TEST EBX,EBX
006A332B  7C 31                     JL 0x006a335e
006A332D  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006A3330  3B 18                     CMP EBX,dword ptr [EAX]
006A3332  7D 2A                     JGE 0x006a335e
006A3334  85 FF                     TEST EDI,EDI
006A3336  7C 26                     JL 0x006a335e
006A3338  3B 78 04                  CMP EDI,dword ptr [EAX + 0x4]
006A333B  7D 21                     JGE 0x006a335e
006A333D  85 F6                     TEST ESI,ESI
006A333F  7C 1D                     JL 0x006a335e
006A3341  83 FE 06                  CMP ESI,0x6
006A3344  7D 18                     JGE 0x006a335e
006A3346  68 FF 00 00 00            PUSH 0xff
006A334B  56                        PUSH ESI
006A334C  57                        PUSH EDI
006A334D  53                        PUSH EBX
006A334E  50                        PUSH EAX
006A334F  E8 5C E6 D5 FF            CALL 0x004019b0
006A3354  83 C4 14                  ADD ESP,0x14
006A3357  85 C0                     TEST EAX,EAX
006A3359  75 03                     JNZ 0x006a335e
006A335B  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
LAB_006a335e:
006A335E  46                        INC ESI
006A335F  83 FE 06                  CMP ESI,0x6
006A3362  7C C5                     JL 0x006a3329
006A3364  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
006A3367  5F                        POP EDI
006A3368  5E                        POP ESI
006A3369  5B                        POP EBX
006A336A  8B E5                     MOV ESP,EBP
006A336C  5D                        POP EBP
006A336D  C3                        RET
