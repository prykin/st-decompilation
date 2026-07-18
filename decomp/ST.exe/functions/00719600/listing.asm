FUN_00719600:
00719600  55                        PUSH EBP
00719601  8B EC                     MOV EBP,ESP
00719603  56                        PUSH ESI
00719604  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719607  8B 06                     MOV EAX,dword ptr [ESI]
00719609  85 C0                     TEST EAX,EAX
0071960B  75 08                     JNZ 0x00719615
0071960D  B8 01 00 00 00            MOV EAX,0x1
00719612  5E                        POP ESI
00719613  5D                        POP EBP
00719614  C3                        RET
LAB_00719615:
00719615  8D 4D 08                  LEA ECX,[EBP + 0x8]
00719618  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0071961F  51                        PUSH ECX
00719620  6A 02                     PUSH 0x2
00719622  68 09 08 00 00            PUSH 0x809
00719627  50                        PUSH EAX
00719628  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
0071962E  85 C0                     TEST EAX,EAX
00719630  74 12                     JZ 0x00719644
00719632  56                        PUSH ESI
00719633  50                        PUSH EAX
00719634  E8 57 06 00 00            CALL 0x00719c90
00719639  83 C4 08                  ADD ESP,0x8
0071963C  B8 01 00 00 00            MOV EAX,0x1
00719641  5E                        POP ESI
00719642  5D                        POP EBP
00719643  C3                        RET
LAB_00719644:
00719644  33 C0                     XOR EAX,EAX
00719646  5E                        POP ESI
00719647  5D                        POP EBP
00719648  C3                        RET
