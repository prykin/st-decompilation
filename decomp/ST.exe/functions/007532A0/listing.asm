FUN_007532a0:
007532A0  55                        PUSH EBP
007532A1  8B EC                     MOV EBP,ESP
007532A3  56                        PUSH ESI
007532A4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007532A7  85 F6                     TEST ESI,ESI
007532A9  74 42                     JZ 0x007532ed
007532AB  56                        PUSH ESI
007532AC  E8 0F 1C 00 00            CALL 0x00754ec0
007532B1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007532B4  85 C0                     TEST EAX,EAX
007532B6  74 09                     JZ 0x007532c1
007532B8  83 C0 4C                  ADD EAX,0x4c
007532BB  50                        PUSH EAX
007532BC  E8 CF 65 F6 FF            CALL 0x006b9890
LAB_007532c1:
007532C1  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
007532C4  6A 00                     PUSH 0x0
007532C6  50                        PUSH EAX
007532C7  E8 D4 13 F8 FF            CALL 0x006d46a0
007532CC  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
007532CF  51                        PUSH ECX
007532D0  E8 BB 2B F5 FF            CALL 0x006a5e90
007532D5  8B 56 18                  MOV EDX,dword ptr [ESI + 0x18]
007532D8  52                        PUSH EDX
007532D9  E8 B2 2B F5 FF            CALL 0x006a5e90
007532DE  8B 46 1C                  MOV EAX,dword ptr [ESI + 0x1c]
007532E1  50                        PUSH EAX
007532E2  E8 A9 2B F5 FF            CALL 0x006a5e90
007532E7  56                        PUSH ESI
007532E8  E8 A3 2B F5 FF            CALL 0x006a5e90
LAB_007532ed:
007532ED  5E                        POP ESI
007532EE  5D                        POP EBP
007532EF  C2 04 00                  RET 0x4
