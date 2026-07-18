FUN_004f1460:
004F1460  55                        PUSH EBP
004F1461  8B EC                     MOV EBP,ESP
004F1463  83 EC 44                  SUB ESP,0x44
004F1466  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F146B  56                        PUSH ESI
004F146C  8D 55 C0                  LEA EDX,[EBP + -0x40]
004F146F  8D 4D BC                  LEA ECX,[EBP + -0x44]
004F1472  6A 00                     PUSH 0x0
004F1474  52                        PUSH EDX
004F1475  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004F1478  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F147E  E8 6D C3 23 00            CALL 0x0072d7f0
004F1483  8B F0                     MOV ESI,EAX
004F1485  83 C4 08                  ADD ESP,0x8
004F1488  85 F6                     TEST ESI,ESI
004F148A  75 2B                     JNZ 0x004f14b7
004F148C  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004F148F  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F1492  68 FF 00 00 00            PUSH 0xff
004F1497  50                        PUSH EAX
004F1498  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004F149B  50                        PUSH EAX
004F149C  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F149F  51                        PUSH ECX
004F14A0  52                        PUSH EDX
004F14A1  50                        PUSH EAX
004F14A2  E8 F9 33 1C 00            CALL 0x006b48a0
004F14A7  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004F14AA  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F14B0  5E                        POP ESI
004F14B1  8B E5                     MOV ESP,EBP
004F14B3  5D                        POP EBP
004F14B4  C2 20 00                  RET 0x20
LAB_004f14b7:
004F14B7  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004F14BA  68 70 1A 7C 00            PUSH 0x7c1a70
004F14BF  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F14C4  56                        PUSH ESI
004F14C5  6A 00                     PUSH 0x0
004F14C7  6A 17                     PUSH 0x17
004F14C9  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F14CE  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F14D4  E8 F7 BF 1B 00            CALL 0x006ad4d0
004F14D9  83 C4 18                  ADD ESP,0x18
004F14DC  85 C0                     TEST EAX,EAX
004F14DE  74 01                     JZ 0x004f14e1
004F14E0  CC                        INT3
LAB_004f14e1:
004F14E1  6A 17                     PUSH 0x17
004F14E3  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F14E8  6A 00                     PUSH 0x0
004F14EA  56                        PUSH ESI
004F14EB  E8 50 49 1B 00            CALL 0x006a5e40
004F14F0  5E                        POP ESI
004F14F1  8B E5                     MOV ESP,EBP
004F14F3  5D                        POP EBP
004F14F4  C2 20 00                  RET 0x20
