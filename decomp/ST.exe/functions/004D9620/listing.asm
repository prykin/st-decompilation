FUN_004d9620:
004D9620  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004D9626  56                        PUSH ESI
004D9627  33 F6                     XOR ESI,ESI
004D9629  83 F8 04                  CMP EAX,0x4
004D962C  77 45                     JA 0x004d9673
switchD_004d962e::switchD:
004D962E  FF 24 85 78 96 4D 00      JMP dword ptr [EAX*0x4 + 0x4d9678]
switchD_004d962e::caseD_2:
004D9635  68 F4 F5 7B 00            PUSH 0x7bf5f4
004D963A  68 CC 4C 7A 00            PUSH 0x7a4ccc
004D963F  6A 00                     PUSH 0x0
004D9641  6A 00                     PUSH 0x0
004D9643  68 BC 00 00 00            PUSH 0xbc
004D9648  68 B0 F5 7B 00            PUSH 0x7bf5b0
004D964D  E8 7E 3E 1D 00            CALL 0x006ad4d0
004D9652  83 C4 18                  ADD ESP,0x18
004D9655  85 C0                     TEST EAX,EAX
004D9657  74 1A                     JZ 0x004d9673
004D9659  CC                        INT3
switchD_004d962e::caseD_4:
004D965E  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004D9664  8B 0D E0 8D 79 00         MOV ECX,dword ptr [0x00798de0]
004D966A  3B C1                     CMP EAX,ECX
004D966C  7C 05                     JL 0x004d9673
switchD_004d962e::caseD_0:
004D966E  BE 01 00 00 00            MOV ESI,0x1
switchD_004d962e::caseD_3:
004D9673  8B C6                     MOV EAX,ESI
004D9675  5E                        POP ESI
004D9676  C3                        RET
