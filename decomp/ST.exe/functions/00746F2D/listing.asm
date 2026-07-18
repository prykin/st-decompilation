FUN_00746f2d:
00746F2D  53                        PUSH EBX
00746F2E  56                        PUSH ESI
00746F2F  57                        PUSH EDI
00746F30  8B D9                     MOV EBX,ECX
00746F32  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746F36  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746F3A  E8 79 48 00 00            CALL 0x0074b7b8
00746F3F  8B 74 24 1C               MOV ESI,dword ptr [ESP + 0x1c]
00746F43  33 C0                     XOR EAX,EAX
00746F45  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00746F48  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
00746F4B  89 43 20                  MOV dword ptr [EBX + 0x20],EAX
00746F4E  8D 7B 28                  LEA EDI,[EBX + 0x28]
00746F51  89 43 24                  MOV dword ptr [EBX + 0x24],EAX
00746F54  8B 4C 24 18               MOV ECX,dword ptr [ESP + 0x18]
00746F58  A5                        MOVSD ES:EDI,ESI
00746F59  A5                        MOVSD ES:EDI,ESI
00746F5A  A5                        MOVSD ES:EDI,ESI
00746F5B  A5                        MOVSD ES:EDI,ESI
00746F5C  89 43 3C                  MOV dword ptr [EBX + 0x3c],EAX
00746F5F  89 43 40                  MOV dword ptr [EBX + 0x40],EAX
00746F62  89 43 44                  MOV dword ptr [EBX + 0x44],EAX
00746F65  5F                        POP EDI
00746F66  89 4B 38                  MOV dword ptr [EBX + 0x38],ECX
00746F69  C7 43 48 01 00 00 00      MOV dword ptr [EBX + 0x48],0x1
00746F70  8B C3                     MOV EAX,EBX
00746F72  5E                        POP ESI
00746F73  5B                        POP EBX
00746F74  C2 14 00                  RET 0x14
