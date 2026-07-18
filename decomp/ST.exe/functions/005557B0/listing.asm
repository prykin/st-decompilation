FUN_005557b0:
005557B0  57                        PUSH EDI
005557B1  8B F9                     MOV EDI,ECX
005557B3  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005557B6  85 C0                     TEST EAX,EAX
005557B8  74 55                     JZ 0x0055580f
005557BA  56                        PUSH ESI
005557BB  C7 40 04 00 00 00 00      MOV dword ptr [EAX + 0x4],0x0
LAB_005557c2:
005557C2  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
005557C5  8B 48 04                  MOV ECX,dword ptr [EAX + 0x4]
005557C8  8B 50 0C                  MOV EDX,dword ptr [EAX + 0xc]
005557CB  3B CA                     CMP ECX,EDX
005557CD  73 2F                     JNC 0x005557fe
005557CF  8B 70 08                  MOV ESI,dword ptr [EAX + 0x8]
005557D2  8B 50 1C                  MOV EDX,dword ptr [EAX + 0x1c]
005557D5  0F AF F1                  IMUL ESI,ECX
005557D8  8D 49 01                  LEA ECX,[ECX + 0x1]
005557DB  03 F2                     ADD ESI,EDX
005557DD  89 48 04                  MOV dword ptr [EAX + 0x4],ECX
005557E0  74 1C                     JZ 0x005557fe
005557E2  8B 46 32                  MOV EAX,dword ptr [ESI + 0x32]
005557E5  85 C0                     TEST EAX,EAX
005557E7  7C D9                     JL 0x005557c2
005557E9  8B 0D 98 75 80 00         MOV ECX,dword ptr [0x00807598]
005557EF  50                        PUSH EAX
005557F0  E8 AB 33 19 00            CALL 0x006e8ba0
005557F5  C7 46 32 FF FF FF FF      MOV dword ptr [ESI + 0x32],0xffffffff
005557FC  EB C4                     JMP 0x005557c2
LAB_005557fe:
005557FE  8B 47 24                  MOV EAX,dword ptr [EDI + 0x24]
00555801  50                        PUSH EAX
00555802  E8 09 89 15 00            CALL 0x006ae110
00555807  C7 47 24 00 00 00 00      MOV dword ptr [EDI + 0x24],0x0
0055580E  5E                        POP ESI
LAB_0055580f:
0055580F  5F                        POP EDI
00555810  C3                        RET
