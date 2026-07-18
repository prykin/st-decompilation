FUN_00719ae0:
00719AE0  55                        PUSH EBP
00719AE1  8B EC                     MOV EBP,ESP
00719AE3  83 EC 08                  SUB ESP,0x8
00719AE6  56                        PUSH ESI
00719AE7  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00719AEA  8B 06                     MOV EAX,dword ptr [ESI]
00719AEC  85 C0                     TEST EAX,EAX
00719AEE  74 3B                     JZ 0x00719b2b
00719AF0  33 C9                     XOR ECX,ECX
00719AF2  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00719AF5  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719AF8  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
00719AFB  83 F9 01                  CMP ECX,0x1
00719AFE  72 2B                     JC 0x00719b2b
00719B00  3B 0D 38 70 85 00         CMP ECX,dword ptr [0x00857038]
00719B06  77 23                     JA 0x00719b2b
00719B08  8D 55 F8                  LEA EDX,[EBP + -0x8]
00719B0B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00719B0E  52                        PUSH EDX
00719B0F  6A 08                     PUSH 0x8
00719B11  68 07 08 00 00            PUSH 0x807
00719B16  50                        PUSH EAX
00719B17  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
00719B1D  85 C0                     TEST EAX,EAX
00719B1F  74 14                     JZ 0x00719b35
00719B21  56                        PUSH ESI
00719B22  50                        PUSH EAX
00719B23  E8 68 01 00 00            CALL 0x00719c90
00719B28  83 C4 08                  ADD ESP,0x8
LAB_00719b2b:
00719B2B  B8 01 00 00 00            MOV EAX,0x1
00719B30  5E                        POP ESI
00719B31  8B E5                     MOV ESP,EBP
00719B33  5D                        POP EBP
00719B34  C3                        RET
LAB_00719b35:
00719B35  33 C0                     XOR EAX,EAX
00719B37  5E                        POP ESI
00719B38  8B E5                     MOV ESP,EBP
00719B3A  5D                        POP EBP
00719B3B  C3                        RET
