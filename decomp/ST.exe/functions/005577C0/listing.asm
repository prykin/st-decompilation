FUN_005577c0:
005577C0  56                        PUSH ESI
005577C1  57                        PUSH EDI
005577C2  8B F1                     MOV ESI,ECX
005577C4  E8 17 E9 18 00            CALL 0x006e60e0
005577C9  C7 06 EC AE 79 00         MOV dword ptr [ESI],0x79aeec
005577CF  33 D2                     XOR EDX,EDX
005577D1  89 35 88 2A 80 00         MOV dword ptr [0x00802a88],ESI
005577D7  B9 08 00 00 00            MOV ECX,0x8
005577DC  33 C0                     XOR EAX,EAX
005577DE  8D 7E 54                  LEA EDI,[ESI + 0x54]
005577E1  89 56 24                  MOV dword ptr [ESI + 0x24],EDX
005577E4  89 56 20                  MOV dword ptr [ESI + 0x20],EDX
005577E7  89 56 2C                  MOV dword ptr [ESI + 0x2c],EDX
005577EA  89 56 28                  MOV dword ptr [ESI + 0x28],EDX
005577ED  89 56 34                  MOV dword ptr [ESI + 0x34],EDX
005577F0  89 56 30                  MOV dword ptr [ESI + 0x30],EDX
005577F3  C7 86 04 01 00 00 01 00 00 00  MOV dword ptr [ESI + 0x104],0x1
005577FD  89 56 38                  MOV dword ptr [ESI + 0x38],EDX
00557800  89 56 4C                  MOV dword ptr [ESI + 0x4c],EDX
00557803  89 56 50                  MOV dword ptr [ESI + 0x50],EDX
00557806  F3 AB                     STOSD.REP ES:EDI
00557808  B9 08 00 00 00            MOV ECX,0x8
0055780D  8D 7E 74                  LEA EDI,[ESI + 0x74]
00557810  F3 AB                     STOSD.REP ES:EDI
00557812  B9 08 00 00 00            MOV ECX,0x8
00557817  8D BE 94 00 00 00         LEA EDI,[ESI + 0x94]
0055781D  F3 AB                     STOSD.REP ES:EDI
0055781F  8D 4E 3C                  LEA ECX,[ESI + 0x3c]
00557822  8D BE 18 01 00 00         LEA EDI,[ESI + 0x118]
00557828  89 01                     MOV dword ptr [ECX],EAX
0055782A  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
0055782D  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
00557830  89 41 0C                  MOV dword ptr [ECX + 0xc],EAX
00557833  B9 30 00 00 00            MOV ECX,0x30
00557838  89 96 F4 00 00 00         MOV dword ptr [ESI + 0xf4],EDX
0055783E  89 96 10 01 00 00         MOV dword ptr [ESI + 0x110],EDX
00557844  89 96 14 01 00 00         MOV dword ptr [ESI + 0x114],EDX
0055784A  C7 86 F8 00 00 00 01 00 00 00  MOV dword ptr [ESI + 0xf8],0x1
00557854  F3 AB                     STOSD.REP ES:EDI
00557856  B9 30 00 00 00            MOV ECX,0x30
0055785B  8D BE D8 01 00 00         LEA EDI,[ESI + 0x1d8]
00557861  F3 AB                     STOSD.REP ES:EDI
00557863  8D 86 FC 00 00 00         LEA EAX,[ESI + 0xfc]
00557869  89 96 FC 00 00 00         MOV dword ptr [ESI + 0xfc],EDX
0055786F  89 50 04                  MOV dword ptr [EAX + 0x4],EDX
00557872  8B 0D A0 B2 7F 00         MOV ECX,dword ptr [0x007fb2a0]
00557878  E8 9F DF EA FF            CALL 0x0040581c
0055787D  89 86 0C 01 00 00         MOV dword ptr [ESI + 0x10c],EAX
00557883  8B C6                     MOV EAX,ESI
00557885  5F                        POP EDI
00557886  5E                        POP ESI
00557887  C3                        RET
