FUN_00724d40:
00724D40  66 8B 91 98 01 00 00      MOV DX,word ptr [ECX + 0x198]
00724D47  66 8B 81 94 01 00 00      MOV AX,word ptr [ECX + 0x194]
00724D4E  66 89 91 7E 01 00 00      MOV word ptr [ECX + 0x17e],DX
00724D55  66 89 81 7C 01 00 00      MOV word ptr [ECX + 0x17c],AX
00724D5C  8D 91 68 01 00 00         LEA EDX,[ECX + 0x168]
00724D62  56                        PUSH ESI
00724D63  8D 41 24                  LEA EAX,[ECX + 0x24]
00724D66  52                        PUSH EDX
00724D67  33 F6                     XOR ESI,ESI
00724D69  89 81 80 01 00 00         MOV dword ptr [ECX + 0x180],EAX
00724D6F  E8 6C 12 FC FF            CALL 0x006e5fe0
00724D74  85 C0                     TEST EAX,EAX
00724D76  74 05                     JZ 0x00724d7d
00724D78  83 C8 FF                  OR EAX,0xffffffff
00724D7B  5E                        POP ESI
00724D7C  C3                        RET
LAB_00724d7d:
00724D7D  8B C6                     MOV EAX,ESI
00724D7F  5E                        POP ESI
00724D80  C3                        RET
