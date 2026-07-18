FUN_004f1390:
004F1390  55                        PUSH EBP
004F1391  8B EC                     MOV EBP,ESP
004F1393  83 EC 44                  SUB ESP,0x44
004F1396  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004F139B  56                        PUSH ESI
004F139C  8D 55 C0                  LEA EDX,[EBP + -0x40]
004F139F  8D 4D BC                  LEA ECX,[EBP + -0x44]
004F13A2  6A 00                     PUSH 0x0
004F13A4  52                        PUSH EDX
004F13A5  89 45 BC                  MOV dword ptr [EBP + -0x44],EAX
004F13A8  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F13AE  E8 3D C4 23 00            CALL 0x0072d7f0
004F13B3  8B F0                     MOV ESI,EAX
004F13B5  83 C4 08                  ADD ESP,0x8
004F13B8  85 F6                     TEST ESI,ESI
004F13BA  75 26                     JNZ 0x004f13e2
004F13BC  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
004F13BF  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
004F13C2  50                        PUSH EAX
004F13C3  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
004F13C6  50                        PUSH EAX
004F13C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004F13CA  51                        PUSH ECX
004F13CB  52                        PUSH EDX
004F13CC  50                        PUSH EAX
004F13CD  E8 6E 32 1C 00            CALL 0x006b4640
004F13D2  8B 4D BC                  MOV ECX,dword ptr [EBP + -0x44]
004F13D5  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004F13DB  5E                        POP ESI
004F13DC  8B E5                     MOV ESP,EBP
004F13DE  5D                        POP EBP
004F13DF  C2 20 00                  RET 0x20
LAB_004f13e2:
004F13E2  8B 55 BC                  MOV EDX,dword ptr [EBP + -0x44]
004F13E5  68 70 1A 7C 00            PUSH 0x7c1a70
004F13EA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004F13EF  56                        PUSH ESI
004F13F0  6A 00                     PUSH 0x0
004F13F2  6A 0F                     PUSH 0xf
004F13F4  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F13F9  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
004F13FF  E8 CC C0 1B 00            CALL 0x006ad4d0
004F1404  83 C4 18                  ADD ESP,0x18
004F1407  85 C0                     TEST EAX,EAX
004F1409  74 01                     JZ 0x004f140c
004F140B  CC                        INT3
LAB_004f140c:
004F140C  6A 0F                     PUSH 0xf
004F140E  68 4C 1A 7C 00            PUSH 0x7c1a4c
004F1413  6A 00                     PUSH 0x0
004F1415  56                        PUSH ESI
004F1416  E8 25 4A 1B 00            CALL 0x006a5e40
004F141B  5E                        POP ESI
004F141C  8B E5                     MOV ESP,EBP
004F141E  5D                        POP EBP
004F141F  C2 20 00                  RET 0x20
