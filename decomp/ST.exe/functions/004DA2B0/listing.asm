FUN_004da2b0:
004DA2B0  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DA2B6  56                        PUSH ESI
004DA2B7  33 F6                     XOR ESI,ESI
004DA2B9  83 F8 04                  CMP EAX,0x4
004DA2BC  77 45                     JA 0x004da303
switchD_004da2be::switchD:
004DA2BE  FF 24 85 08 A3 4D 00      JMP dword ptr [EAX*0x4 + 0x4da308]
switchD_004da2be::caseD_2:
004DA2C5  68 F4 F5 7B 00            PUSH 0x7bf5f4
004DA2CA  68 CC 4C 7A 00            PUSH 0x7a4ccc
004DA2CF  6A 00                     PUSH 0x0
004DA2D1  6A 00                     PUSH 0x0
004DA2D3  68 99 00 00 00            PUSH 0x99
004DA2D8  68 18 F6 7B 00            PUSH 0x7bf618
004DA2DD  E8 EE 31 1D 00            CALL 0x006ad4d0
004DA2E2  83 C4 18                  ADD ESP,0x18
004DA2E5  85 C0                     TEST EAX,EAX
004DA2E7  74 1A                     JZ 0x004da303
004DA2E9  CC                        INT3
switchD_004da2be::caseD_4:
004DA2EE  8B 81 D4 04 00 00         MOV EAX,dword ptr [ECX + 0x4d4]
004DA2F4  8B 0D B0 8E 79 00         MOV ECX,dword ptr [0x00798eb0]
004DA2FA  3B C1                     CMP EAX,ECX
004DA2FC  7C 05                     JL 0x004da303
switchD_004da2be::caseD_0:
004DA2FE  BE 01 00 00 00            MOV ESI,0x1
switchD_004da2be::caseD_3:
004DA303  8B C6                     MOV EAX,ESI
004DA305  5E                        POP ESI
004DA306  C3                        RET
