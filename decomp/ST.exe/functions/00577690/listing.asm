FUN_00577690:
00577690  56                        PUSH ESI
00577691  8B F1                     MOV ESI,ECX
00577693  8B 4E 18                  MOV ECX,dword ptr [ESI + 0x18]
00577696  C6 86 30 04 00 00 01      MOV byte ptr [ESI + 0x430],0x1
0057769D  E8 0E DB 16 00            CALL 0x006e51b0
005776A2  89 46 20                  MOV dword ptr [ESI + 0x20],EAX
005776A5  C7 46 24 00 00 00 00      MOV dword ptr [ESI + 0x24],0x0
005776AC  A1 9C 67 80 00            MOV EAX,[0x0080679c]
005776B1  83 C6 28                  ADD ESI,0x28
005776B4  6A 00                     PUSH 0x0
005776B6  56                        PUSH ESI
005776B7  50                        PUSH EAX
005776B8  E8 A3 4C 14 00            CALL 0x006bc360
005776BD  5E                        POP ESI
005776BE  C3                        RET
