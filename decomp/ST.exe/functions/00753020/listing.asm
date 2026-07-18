FUN_00753020:
00753020  55                        PUSH EBP
00753021  8B EC                     MOV EBP,ESP
00753023  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00753026  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
00753029  03 D1                     ADD EDX,ECX
0075302B  57                        PUSH EDI
0075302C  8B FA                     MOV EDI,EDX
0075302E  83 C9 FF                  OR ECX,0xffffffff
00753031  33 C0                     XOR EAX,EAX
00753033  F2 AE                     SCASB.REPNE ES:EDI
00753035  F7 D1                     NOT ECX
00753037  49                        DEC ECX
00753038  8D 42 01                  LEA EAX,[EDX + 0x1]
0075303B  51                        PUSH ECX
0075303C  50                        PUSH EAX
0075303D  52                        PUSH EDX
0075303E  E8 2D AA FD FF            CALL 0x0072da70
00753043  83 C4 0C                  ADD ESP,0xc
00753046  5F                        POP EDI
00753047  5D                        POP EBP
00753048  C2 08 00                  RET 0x8
