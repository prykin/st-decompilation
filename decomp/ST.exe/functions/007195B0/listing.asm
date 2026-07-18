FUN_007195b0:
007195B0  55                        PUSH EBP
007195B1  8B EC                     MOV EBP,ESP
007195B3  56                        PUSH ESI
007195B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
007195B7  8B 06                     MOV EAX,dword ptr [ESI]
007195B9  85 C0                     TEST EAX,EAX
007195BB  75 08                     JNZ 0x007195c5
007195BD  B8 01 00 00 00            MOV EAX,0x1
007195C2  5E                        POP ESI
007195C3  5D                        POP EBP
007195C4  C3                        RET
LAB_007195c5:
007195C5  8D 4D 08                  LEA ECX,[EBP + 0x8]
007195C8  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
007195CF  51                        PUSH ECX
007195D0  6A 02                     PUSH 0x2
007195D2  68 55 08 00 00            PUSH 0x855
007195D7  50                        PUSH EAX
007195D8  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
007195DE  85 C0                     TEST EAX,EAX
007195E0  74 12                     JZ 0x007195f4
007195E2  56                        PUSH ESI
007195E3  50                        PUSH EAX
007195E4  E8 A7 06 00 00            CALL 0x00719c90
007195E9  83 C4 08                  ADD ESP,0x8
007195EC  B8 01 00 00 00            MOV EAX,0x1
007195F1  5E                        POP ESI
007195F2  5D                        POP EBP
007195F3  C3                        RET
LAB_007195f4:
007195F4  33 C0                     XOR EAX,EAX
007195F6  5E                        POP ESI
007195F7  5D                        POP EBP
007195F8  C3                        RET
