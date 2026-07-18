FUN_007552d0:
007552D0  55                        PUSH EBP
007552D1  8B EC                     MOV EBP,ESP
007552D3  53                        PUSH EBX
007552D4  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
007552D7  56                        PUSH ESI
007552D8  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007552DB  8D 45 0C                  LEA EAX,[EBP + 0xc]
007552DE  57                        PUSH EDI
007552DF  50                        PUSH EAX
007552E0  53                        PUSH EBX
007552E1  56                        PUSH ESI
007552E2  E8 59 F7 F7 FF            CALL 0x006d4a40
007552E7  85 C0                     TEST EAX,EAX
007552E9  75 1E                     JNZ 0x00755309
007552EB  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
007552EE  8B 7D 10                  MOV EDI,dword ptr [EBP + 0x10]
007552F1  51                        PUSH ECX
007552F2  57                        PUSH EDI
007552F3  56                        PUSH ESI
007552F4  E8 A7 F7 F7 FF            CALL 0x006d4aa0
007552F9  85 C0                     TEST EAX,EAX
007552FB  75 0C                     JNZ 0x00755309
007552FD  57                        PUSH EDI
007552FE  53                        PUSH EBX
007552FF  56                        PUSH ESI
00755300  E8 9B F7 F7 FF            CALL 0x006d4aa0
00755305  85 C0                     TEST EAX,EAX
00755307  74 1E                     JZ 0x00755327
LAB_00755309:
00755309  8B 15 7C D7 7E 00         MOV EDX,dword ptr [0x007ed77c]
0075530F  6A 1B                     PUSH 0x1b
00755311  68 F0 2C 7F 00            PUSH 0x7f2cf0
00755316  52                        PUSH EDX
00755317  50                        PUSH EAX
00755318  E8 23 0B F5 FF            CALL 0x006a5e40
0075531D  5F                        POP EDI
0075531E  5E                        POP ESI
0075531F  83 C8 FF                  OR EAX,0xffffffff
00755322  5B                        POP EBX
00755323  5D                        POP EBP
00755324  C2 0C 00                  RET 0xc
LAB_00755327:
00755327  8B C7                     MOV EAX,EDI
00755329  5F                        POP EDI
0075532A  5E                        POP ESI
0075532B  5B                        POP EBX
0075532C  5D                        POP EBP
0075532D  C2 0C 00                  RET 0xc
