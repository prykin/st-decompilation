FUN_004d95a0:
004D95A0  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004D95A6  56                        PUSH ESI
004D95A7  33 F6                     XOR ESI,ESI
004D95A9  83 F8 04                  CMP EAX,0x4
004D95AC  77 35                     JA 0x004d95e3
switchD_004d95ae::switchD:
004D95AE  FF 24 85 E8 95 4D 00      JMP dword ptr [EAX*0x4 + 0x4d95e8]
switchD_004d95ae::caseD_2:
004D95B5  68 D8 F5 7B 00            PUSH 0x7bf5d8
004D95BA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D95BF  6A 00                     PUSH 0x0
004D95C1  6A 00                     PUSH 0x0
004D95C3  68 B0 00 00 00            PUSH 0xb0
004D95C8  68 B0 F5 7B 00            PUSH 0x7bf5b0
004D95CD  E8 FE 3E 1D 00            CALL 0x006ad4d0
004D95D2  83 C4 18                  ADD ESP,0x18
004D95D5  85 C0                     TEST EAX,EAX
004D95D7  74 0A                     JZ 0x004d95e3
004D95D9  CC                        INT3
switchD_004d95ae::caseD_0:
004D95DE  BE 01 00 00 00            MOV ESI,0x1
switchD_004d95ae::caseD_3:
004D95E3  8B C6                     MOV EAX,ESI
004D95E5  5E                        POP ESI
004D95E6  C3                        RET
