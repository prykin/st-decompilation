FUN_00747aa5:
00747AA5  55                        PUSH EBP
00747AA6  8B EC                     MOV EBP,ESP
00747AA8  83 EC 48                  SUB ESP,0x48
00747AAB  56                        PUSH ESI
00747AAC  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
00747AAF  8B CE                     MOV ECX,ESI
00747AB1  E8 85 04 00 00            CALL 0x00747f3b
00747AB6  83 F8 01                  CMP EAX,0x1
00747AB9  75 07                     JNZ 0x00747ac2
00747ABB  B8 03 02 04 80            MOV EAX,0x80040203
00747AC0  EB 31                     JMP 0x00747af3
LAB_00747ac2:
00747AC2  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00747AC5  8D 4D B8                  LEA ECX,[EBP + -0x48]
00747AC8  01 46 04                  ADD dword ptr [ESI + 0x4],EAX
00747ACB  E8 4D 3E 00 00            CALL 0x0074b91d
00747AD0  8B 4E 08                  MOV ECX,dword ptr [ESI + 0x8]
00747AD3  8D 55 B8                  LEA EDX,[EBP + -0x48]
00747AD6  52                        PUSH EDX
00747AD7  8B 56 04                  MOV EDX,dword ptr [ESI + 0x4]
00747ADA  8B 01                     MOV EAX,dword ptr [ECX]
00747ADC  4A                        DEC EDX
00747ADD  52                        PUSH EDX
00747ADE  FF 50 34                  CALL dword ptr [EAX + 0x34]
00747AE1  8B F0                     MOV ESI,EAX
00747AE3  8D 4D B8                  LEA ECX,[EBP + -0x48]
00747AE6  F7 DE                     NEG ESI
00747AE8  1B F6                     SBB ESI,ESI
00747AEA  F7 DE                     NEG ESI
00747AEC  E8 25 3E 00 00            CALL 0x0074b916
00747AF1  8B C6                     MOV EAX,ESI
LAB_00747af3:
00747AF3  5E                        POP ESI
00747AF4  C9                        LEAVE
00747AF5  C2 08 00                  RET 0x8
