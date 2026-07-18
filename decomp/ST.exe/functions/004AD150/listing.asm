FUN_004ad150:
004AD150  55                        PUSH EBP
004AD151  8B EC                     MOV EBP,ESP
004AD153  83 79 0C FF               CMP dword ptr [ECX + 0xc],-0x1
004AD157  7E 26                     JLE 0x004ad17f
004AD159  0F BE 45 08               MOVSX EAX,byte ptr [EBP + 0x8]
004AD15D  56                        PUSH ESI
004AD15E  8B 71 20                  MOV ESI,dword ptr [ECX + 0x20]
004AD161  8D 14 C0                  LEA EDX,[EAX + EAX*0x8]
004AD164  80 4C 96 0F 01            OR byte ptr [ESI + EDX*0x4 + 0xf],0x1
004AD169  8D 54 96 0E               LEA EDX,[ESI + EDX*0x4 + 0xe]
004AD16D  8B 51 0C                  MOV EDX,dword ptr [ECX + 0xc]
004AD170  52                        PUSH EDX
004AD171  50                        PUSH EAX
004AD172  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
004AD175  8B 49 3C                  MOV ECX,dword ptr [ECX + 0x3c]
004AD178  50                        PUSH EAX
004AD179  E8 42 C2 23 00            CALL 0x006e93c0
004AD17E  5E                        POP ESI
LAB_004ad17f:
004AD17F  5D                        POP EBP
004AD180  C2 04 00                  RET 0x4
