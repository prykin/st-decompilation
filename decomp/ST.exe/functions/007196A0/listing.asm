FUN_007196a0:
007196A0  55                        PUSH EBP
007196A1  8B EC                     MOV EBP,ESP
007196A3  83 EC 10                  SUB ESP,0x10
007196A6  56                        PUSH ESI
007196A7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007196AA  8B 06                     MOV EAX,dword ptr [ESI]
007196AC  85 C0                     TEST EAX,EAX
007196AE  75 0A                     JNZ 0x007196ba
007196B0  B8 01 00 00 00            MOV EAX,0x1
007196B5  5E                        POP ESI
007196B6  8B E5                     MOV ESP,EBP
007196B8  5D                        POP EBP
007196B9  C3                        RET
LAB_007196ba:
007196BA  33 C9                     XOR ECX,ECX
007196BC  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
007196BF  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
007196C2  89 4D F4                  MOV dword ptr [EBP + -0xc],ECX
007196C5  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
007196C8  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
007196CB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007196CE  8D 4D F0                  LEA ECX,[EBP + -0x10]
007196D1  51                        PUSH ECX
007196D2  68 00 00 01 00            PUSH 0x10000
007196D7  68 41 08 00 00            PUSH 0x841
007196DC  50                        PUSH EAX
007196DD  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
007196E3  85 C0                     TEST EAX,EAX
007196E5  74 14                     JZ 0x007196fb
007196E7  56                        PUSH ESI
007196E8  50                        PUSH EAX
007196E9  E8 A2 05 00 00            CALL 0x00719c90
007196EE  83 C4 08                  ADD ESP,0x8
007196F1  B8 01 00 00 00            MOV EAX,0x1
007196F6  5E                        POP ESI
007196F7  8B E5                     MOV ESP,EBP
007196F9  5D                        POP EBP
007196FA  C3                        RET
LAB_007196fb:
007196FB  33 C0                     XOR EAX,EAX
007196FD  5E                        POP ESI
007196FE  8B E5                     MOV ESP,EBP
00719700  5D                        POP EBP
00719701  C3                        RET
