FUN_006a0da0:
006A0DA0  55                        PUSH EBP
006A0DA1  8B EC                     MOV EBP,ESP
006A0DA3  83 EC 08                  SUB ESP,0x8
006A0DA6  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006A0DA9  57                        PUSH EDI
006A0DAA  85 C0                     TEST EAX,EAX
006A0DAC  8B F9                     MOV EDI,ECX
006A0DAE  75 55                     JNZ 0x006a0e05
006A0DB0  33 C0                     XOR EAX,EAX
006A0DB2  56                        PUSH ESI
006A0DB3  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
006A0DB6  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
006A0DB9  50                        PUSH EAX
006A0DBA  6A 02                     PUSH 0x2
006A0DBC  56                        PUSH ESI
006A0DBD  6A 01                     PUSH 0x1
006A0DBF  50                        PUSH EAX
006A0DC0  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006A0DC4  E8 76 31 D6 FF            CALL 0x00403f3f
006A0DC9  56                        PUSH ESI
006A0DCA  56                        PUSH ESI
006A0DCB  6A 01                     PUSH 0x1
006A0DCD  6A 00                     PUSH 0x0
006A0DCF  6A 02                     PUSH 0x2
006A0DD1  66 89 45 F8               MOV word ptr [EBP + -0x8],AX
006A0DD5  E8 D2 32 D6 FF            CALL 0x004040ac
006A0DDA  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006A0DDD  6A 00                     PUSH 0x0
006A0DDF  8D 4D F8                  LEA ECX,[EBP + -0x8]
006A0DE2  66 89 45 FC               MOV word ptr [EBP + -0x4],AX
006A0DE6  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
006A0DE9  6A 00                     PUSH 0x0
006A0DEB  51                        PUSH ECX
006A0DEC  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006A0DEF  52                        PUSH EDX
006A0DF0  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
006A0DF3  50                        PUSH EAX
006A0DF4  8B 47 08                  MOV EAX,dword ptr [EDI + 0x8]
006A0DF7  6A 00                     PUSH 0x0
006A0DF9  51                        PUSH ECX
006A0DFA  52                        PUSH EDX
006A0DFB  50                        PUSH EAX
006A0DFC  E8 99 26 D6 FF            CALL 0x0040349a
006A0E01  83 C4 4C                  ADD ESP,0x4c
006A0E04  5E                        POP ESI
LAB_006a0e05:
006A0E05  5F                        POP EDI
006A0E06  8B E5                     MOV ESP,EBP
006A0E08  5D                        POP EBP
006A0E09  C2 18 00                  RET 0x18
