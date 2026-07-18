FUN_004e6190:
004E6190  55                        PUSH EBP
004E6191  8B EC                     MOV EBP,ESP
004E6193  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004E6196  56                        PUSH ESI
004E6197  85 C0                     TEST EAX,EAX
004E6199  7C 42                     JL 0x004e61dd
004E619B  83 F8 08                  CMP EAX,0x8
004E619E  7D 3D                     JGE 0x004e61dd
004E61A0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
004E61A3  83 FE 01                  CMP ESI,0x1
004E61A6  7C 35                     JL 0x004e61dd
004E61A8  81 FE 9B 00 00 00         CMP ESI,0x9b
004E61AE  7D 2D                     JGE 0x004e61dd
004E61B0  8D 14 80                  LEA EDX,[EAX + EAX*0x4]
004E61B3  57                        PUSH EDI
004E61B4  8D 3C B5 00 00 00 00      LEA EDI,[ESI*0x4 + 0x0]
004E61BB  8D 14 D0                  LEA EDX,[EAX + EDX*0x8]
004E61BE  8D 14 50                  LEA EDX,[EAX + EDX*0x2]
004E61C1  C1 E2 04                  SHL EDX,0x4
004E61C4  03 D0                     ADD EDX,EAX
004E61C6  8D 94 57 47 51 7F 00      LEA EDX,[EDI + EDX*0x2 + 0x7f5147]
004E61CD  8B 3A                     MOV EDI,dword ptr [EDX]
004E61CF  47                        INC EDI
004E61D0  89 3A                     MOV dword ptr [EDX],EDI
004E61D2  8B D7                     MOV EDX,EDI
004E61D4  52                        PUSH EDX
004E61D5  56                        PUSH ESI
004E61D6  50                        PUSH EAX
004E61D7  E8 54 BF F1 FF            CALL 0x00402130
004E61DC  5F                        POP EDI
LAB_004e61dd:
004E61DD  5E                        POP ESI
004E61DE  5D                        POP EBP
004E61DF  C2 08 00                  RET 0x8
