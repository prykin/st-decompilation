CreateSoundManager:
00566590  53                        PUSH EBX
00566591  56                        PUSH ESI
00566592  6A 41                     PUSH 0x41
00566594  E8 37 9F 14 00            CALL 0x006b04d0
00566599  8B F0                     MOV ESI,EAX
0056659B  33 DB                     XOR EBX,EBX
0056659D  3B F3                     CMP ESI,EBX
0056659F  74 38                     JZ 0x005665d9
005665A1  8B CE                     MOV ECX,ESI
005665A3  E8 08 FA 17 00            CALL 0x006e5fb0
005665A8  8D 4E 2C                  LEA ECX,[ESI + 0x2c]
005665AB  33 C0                     XOR EAX,EAX
005665AD  C7 06 24 B0 79 00         MOV dword ptr [ESI],0x79b024
005665B3  88 5E 38                  MOV byte ptr [ESI + 0x38],BL
005665B6  89 5E 24                  MOV dword ptr [ESI + 0x24],EBX
005665B9  89 5E 20                  MOV dword ptr [ESI + 0x20],EBX
005665BC  C7 46 39 FF FF FF FF      MOV dword ptr [ESI + 0x39],0xffffffff
005665C3  89 5E 3D                  MOV dword ptr [ESI + 0x3d],EBX
005665C6  89 5E 28                  MOV dword ptr [ESI + 0x28],EBX
005665C9  89 01                     MOV dword ptr [ECX],EAX
005665CB  89 41 04                  MOV dword ptr [ECX + 0x4],EAX
005665CE  89 41 08                  MOV dword ptr [ECX + 0x8],EAX
005665D1  89 5E 18                  MOV dword ptr [ESI + 0x18],EBX
005665D4  8B C6                     MOV EAX,ESI
005665D6  5E                        POP ESI
005665D7  5B                        POP EBX
005665D8  C3                        RET
LAB_005665d9:
005665D9  5E                        POP ESI
005665DA  33 C0                     XOR EAX,EAX
005665DC  5B                        POP EBX
005665DD  C3                        RET
