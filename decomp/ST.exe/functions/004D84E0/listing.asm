FUN_004d84e0:
004D84E0  55                        PUSH EBP
004D84E1  8B EC                     MOV EBP,ESP
004D84E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
004D84E6  83 C8 FF                  OR EAX,0xffffffff
004D84E9  85 C9                     TEST ECX,ECX
004D84EB  74 24                     JZ 0x004d8511
004D84ED  A1 50 A1 7F 00            MOV EAX,[0x007fa150]
004D84F2  85 C0                     TEST EAX,EAX
004D84F4  75 11                     JNZ 0x004d8507
004D84F6  6A 14                     PUSH 0x14
004D84F8  6A 04                     PUSH 0x4
004D84FA  6A 14                     PUSH 0x14
004D84FC  50                        PUSH EAX
004D84FD  E8 8E 5D 1D 00            CALL 0x006ae290
004D8502  A3 50 A1 7F 00            MOV [0x007fa150],EAX
LAB_004d8507:
004D8507  8D 4D 08                  LEA ECX,[EBP + 0x8]
004D850A  51                        PUSH ECX
004D850B  50                        PUSH EAX
004D850C  E8 AF 5C 1D 00            CALL 0x006ae1c0
LAB_004d8511:
004D8511  5D                        POP EBP
004D8512  C2 04 00                  RET 0x4
