FUN_00746c24:
00746C24  53                        PUSH EBX
00746C25  56                        PUSH ESI
00746C26  57                        PUSH EDI
00746C27  8B D9                     MOV EBX,ECX
00746C29  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746C2D  FF 74 24 14               PUSH dword ptr [ESP + 0x14]
00746C31  E8 82 4B 00 00            CALL 0x0074b7b8
00746C36  8B 74 24 1C               MOV ESI,dword ptr [ESP + 0x1c]
00746C3A  33 C0                     XOR EAX,EAX
00746C3C  89 43 10                  MOV dword ptr [EBX + 0x10],EAX
00746C3F  89 43 14                  MOV dword ptr [EBX + 0x14],EAX
00746C42  89 43 18                  MOV dword ptr [EBX + 0x18],EAX
00746C45  8D 7B 20                  LEA EDI,[EBX + 0x20]
00746C48  89 43 1C                  MOV dword ptr [EBX + 0x1c],EAX
00746C4B  8B 44 24 18               MOV EAX,dword ptr [ESP + 0x18]
00746C4F  A5                        MOVSD ES:EDI,ESI
00746C50  A5                        MOVSD ES:EDI,ESI
00746C51  A5                        MOVSD ES:EDI,ESI
00746C52  A5                        MOVSD ES:EDI,ESI
00746C53  89 43 30                  MOV dword ptr [EBX + 0x30],EAX
00746C56  5F                        POP EDI
00746C57  8B C3                     MOV EAX,EBX
00746C59  5E                        POP ESI
00746C5A  5B                        POP EBX
00746C5B  C2 10 00                  RET 0x10
