FUN_004d0f00:
004D0F00  55                        PUSH EBP
004D0F01  8B EC                     MOV EBP,ESP
004D0F03  83 EC 1C                  SUB ESP,0x1c
004D0F06  57                        PUSH EDI
004D0F07  B9 07 00 00 00            MOV ECX,0x7
004D0F0C  33 C0                     XOR EAX,EAX
004D0F0E  8D 7D E4                  LEA EDI,[EBP + -0x1c]
004D0F11  F3 AB                     STOSD.REP ES:EDI
004D0F13  8B 0D 38 2A 80 00         MOV ECX,dword ptr [0x00802a38]
004D0F19  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
004D0F1C  50                        PUSH EAX
004D0F1D  8D 45 E4                  LEA EAX,[EBP + -0x1c]
004D0F20  50                        PUSH EAX
004D0F21  6A 00                     PUSH 0x0
004D0F23  6A 00                     PUSH 0x0
004D0F25  68 EA 03 00 00            PUSH 0x3ea
004D0F2A  C7 45 F0 01 00 00 00      MOV dword ptr [EBP + -0x10],0x1
004D0F31  C7 45 EC 02 00 00 00      MOV dword ptr [EBP + -0x14],0x2
004D0F38  C7 45 E8 FF 00 00 00      MOV dword ptr [EBP + -0x18],0xff
004D0F3F  C7 45 E4 EA 03 00 00      MOV dword ptr [EBP + -0x1c],0x3ea
004D0F46  E8 77 0C F3 FF            CALL 0x00401bc2
004D0F4B  33 C0                     XOR EAX,EAX
004D0F4D  5F                        POP EDI
004D0F4E  8B E5                     MOV ESP,EBP
004D0F50  5D                        POP EBP
004D0F51  C3                        RET
