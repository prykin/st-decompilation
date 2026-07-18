FUN_00746ee3:
00746EE3  53                        PUSH EBX
00746EE4  56                        PUSH ESI
00746EE5  57                        PUSH EDI
00746EE6  8B D9                     MOV EBX,ECX
00746EE8  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746EEC  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746EF0  E8 C3 48 00 00            CALL 0x0074b7b8
00746EF5  8B 74 24 1C               MOV ESI,dword ptr [ESP + 0x1c]
00746EF9  33 C0                     XOR EAX,EAX
00746EFB  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00746EFE  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
00746F01  89 43 20                  MOV dword ptr [EBX + 0x20],EAX
00746F04  8D 7B 28                  LEA EDI,[EBX + 0x28]
00746F07  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
00746F0A  8B 4C 24 18               MOV ECX,dword ptr [ESP + 0x18]
00746F0E  A5                        MOVSD ES:EDI,ESI
00746F0F  A5                        MOVSD ES:EDI,ESI
00746F10  A5                        MOVSD ES:EDI,ESI
00746F11  A5                        MOVSD ES:EDI,ESI
00746F12  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
00746F15  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
00746F18  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
00746F1B  5F                        POP EDI
00746F1C  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
00746F1F  C7 43 48 01 00 00 00      MOV dword ptr [EBX + 0x48],0x1
00746F26  8B C3                     MOV EAX,EBX
00746F28  5E                        POP ESI
00746F29  5B                        POP EBX
00746F2A  C2 10 00                  RET 0x10
