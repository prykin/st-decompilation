STJellyGunC::sub_00582530:
00582530  55                        PUSH EBP
00582531  8B EC                     MOV EBP,ESP
00582533  83 EC 20                  SUB ESP,0x20
00582536  8B D1                     MOV EDX,ECX
00582538  57                        PUSH EDI
00582539  B9 08 00 00 00            MOV ECX,0x8
0058253E  33 C0                     XOR EAX,EAX
00582540  8D 7D E0                  LEA EDI,[EBP + -0x20]
00582543  F3 AB                     STOSD.REP ES:EDI
00582545  8B 42 08                  MOV EAX,dword ptr [EDX + 0x8]
00582548  8D 4D E0                  LEA ECX,[EBP + -0x20]
0058254B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058254E  8B 82 86 02 00 00         MOV EAX,dword ptr [EDX + 0x286]
00582554  51                        PUSH ECX
00582555  50                        PUSH EAX
00582556  6A 04                     PUSH 0x4
00582558  8B CA                     MOV ECX,EDX
0058255A  C7 45 F0 24 01 00 00      MOV dword ptr [EBP + -0x10],0x124
00582561  E8 1A 3B 16 00            CALL 0x006e6080
00582566  5F                        POP EDI
00582567  8B E5                     MOV ESP,EBP
00582569  5D                        POP EBP
0058256A  C3                        RET
