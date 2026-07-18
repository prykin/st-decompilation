FUN_00719560:
00719560  55                        PUSH EBP
00719561  8B EC                     MOV EBP,ESP
00719563  56                        PUSH ESI
00719564  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00719567  8B 06                     MOV EAX,dword ptr [ESI]
00719569  85 C0                     TEST EAX,EAX
0071956B  75 08                     JNZ 0x00719575
0071956D  B8 01 00 00 00            MOV EAX,0x1
00719572  5E                        POP ESI
00719573  5D                        POP EBP
00719574  C3                        RET
LAB_00719575:
00719575  8D 4D 08                  LEA ECX,[EBP + 0x8]
00719578  C7 45 08 00 00 00 00      MOV dword ptr [EBP + 0x8],0x0
0071957F  51                        PUSH ECX
00719580  6A 02                     PUSH 0x2
00719582  68 08 08 00 00            PUSH 0x808
00719587  50                        PUSH EAX
00719588  FF 15 C0 BE 85 00         CALL dword ptr [0x0085bec0]
0071958E  85 C0                     TEST EAX,EAX
00719590  74 12                     JZ 0x007195a4
00719592  56                        PUSH ESI
00719593  50                        PUSH EAX
00719594  E8 F7 06 00 00            CALL 0x00719c90
00719599  83 C4 08                  ADD ESP,0x8
0071959C  B8 01 00 00 00            MOV EAX,0x1
007195A1  5E                        POP ESI
007195A2  5D                        POP EBP
007195A3  C3                        RET
LAB_007195a4:
007195A4  33 C0                     XOR EAX,EAX
007195A6  5E                        POP ESI
007195A7  5D                        POP EBP
007195A8  C3                        RET
