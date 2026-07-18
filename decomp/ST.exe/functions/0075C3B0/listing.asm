FUN_0075c3b0:
0075C3B0  55                        PUSH EBP
0075C3B1  8B EC                     MOV EBP,ESP
0075C3B3  56                        PUSH ESI
0075C3B4  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0075C3B7  57                        PUSH EDI
0075C3B8  56                        PUSH ESI
0075C3B9  8B BE AA 01 00 00         MOV EDI,dword ptr [ESI + 0x1aa]
0075C3BF  8B 8E A6 01 00 00         MOV ECX,dword ptr [ESI + 0x1a6]
0075C3C5  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
0075C3C8  99                        CDQ
0075C3C9  83 E2 07                  AND EDX,0x7
0075C3CC  03 C2                     ADD EAX,EDX
0075C3CE  8B 51 5C                  MOV EDX,dword ptr [ECX + 0x5c]
0075C3D1  C1 F8 03                  SAR EAX,0x3
0075C3D4  03 D0                     ADD EDX,EAX
0075C3D6  89 51 5C                  MOV dword ptr [ECX + 0x5c],EDX
0075C3D9  C7 47 0C 00 00 00 00      MOV dword ptr [EDI + 0xc],0x0
0075C3E0  8B 86 A6 01 00 00         MOV EAX,dword ptr [ESI + 0x1a6]
0075C3E6  FF 50 08                  CALL dword ptr [EAX + 0x8]
0075C3E9  85 C0                     TEST EAX,EAX
0075C3EB  75 06                     JNZ 0x0075c3f3
0075C3ED  5F                        POP EDI
0075C3EE  5E                        POP ESI
0075C3EF  5D                        POP EBP
0075C3F0  C2 04 00                  RET 0x4
LAB_0075c3f3:
0075C3F3  8B 8E 36 01 00 00         MOV ECX,dword ptr [ESI + 0x136]
0075C3F9  33 C0                     XOR EAX,EAX
0075C3FB  85 C9                     TEST ECX,ECX
0075C3FD  7E 17                     JLE 0x0075c416
0075C3FF  8D 4F 18                  LEA ECX,[EDI + 0x18]
LAB_0075c402:
0075C402  C7 01 00 00 00 00         MOV dword ptr [ECX],0x0
0075C408  8B 96 36 01 00 00         MOV EDX,dword ptr [ESI + 0x136]
0075C40E  40                        INC EAX
0075C40F  83 C1 04                  ADD ECX,0x4
0075C412  3B C2                     CMP EAX,EDX
0075C414  7C EC                     JL 0x0075c402
LAB_0075c416:
0075C416  C7 47 14 00 00 00 00      MOV dword ptr [EDI + 0x14],0x0
0075C41D  8B 8E 0C 01 00 00         MOV ECX,dword ptr [ESI + 0x10c]
0075C423  89 4F 28                  MOV dword ptr [EDI + 0x28],ECX
0075C426  C7 47 10 00 00 00 00      MOV dword ptr [EDI + 0x10],0x0
0075C42D  5F                        POP EDI
0075C42E  B8 01 00 00 00            MOV EAX,0x1
0075C433  5E                        POP ESI
0075C434  5D                        POP EBP
0075C435  C2 04 00                  RET 0x4
