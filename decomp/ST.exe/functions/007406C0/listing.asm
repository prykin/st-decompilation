FID_conflict:__open:
007406C0  55                        PUSH EBP
007406C1  8B EC                     MOV EBP,ESP
007406C3  83 EC 08                  SUB ESP,0x8
007406C6  8D 45 10                  LEA EAX,[EBP + 0x10]
007406C9  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
007406CC  8B 4D F8                  MOV ECX,dword ptr [EBP + -0x8]
007406CF  83 C1 04                  ADD ECX,0x4
007406D2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007406D5  8B 55 F8                  MOV EDX,dword ptr [EBP + -0x8]
007406D8  8B 42 FC                  MOV EAX,dword ptr [EDX + -0x4]
007406DB  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
007406DE  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
007406E5  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
007406E8  51                        PUSH ECX
007406E9  6A 40                     PUSH 0x40
007406EB  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007406EE  52                        PUSH EDX
007406EF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007406F2  50                        PUSH EAX
007406F3  E8 08 00 00 00            CALL 0x00740700
007406F8  83 C4 10                  ADD ESP,0x10
007406FB  8B E5                     MOV ESP,EBP
007406FD  5D                        POP EBP
007406FE  C3                        RET
