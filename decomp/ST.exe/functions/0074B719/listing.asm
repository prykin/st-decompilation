FUN_0074b719:
0074B719  55                        PUSH EBP
0074B71A  8B EC                     MOV EBP,ESP
0074B71C  83 7D 0C 00               CMP dword ptr [EBP + 0xc],0x0
0074B720  56                        PUSH ESI
0074B721  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0074B724  75 2C                     JNZ 0x0074b752
0074B726  83 7E 34 00               CMP dword ptr [ESI + 0x34],0x0
0074B72A  74 26                     JZ 0x0074b752
0074B72C  8B 06                     MOV EAX,dword ptr [ESI]
0074B72E  8D 4D 08                  LEA ECX,[EBP + 0x8]
0074B731  51                        PUSH ECX
0074B732  68 68 13 7A 00            PUSH 0x7a1368
0074B737  56                        PUSH ESI
0074B738  FF 10                     CALL dword ptr [EAX]
0074B73A  6A 00                     PUSH 0x0
0074B73C  8D 4E F4                  LEA ECX,[ESI + -0xc]
0074B73F  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074B742  6A 15                     PUSH 0x15
0074B744  E8 BD BC FF FF            CALL 0x00747406
0074B749  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B74C  50                        PUSH EAX
0074B74D  8B 08                     MOV ECX,dword ptr [EAX]
0074B74F  FF 51 08                  CALL dword ptr [ECX + 0x8]
LAB_0074b752:
0074B752  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074B755  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074B758  56                        PUSH ESI
0074B759  E8 0C BC FF FF            CALL 0x0074736a
0074B75E  5E                        POP ESI
0074B75F  5D                        POP EBP
0074B760  C2 0C 00                  RET 0xc
