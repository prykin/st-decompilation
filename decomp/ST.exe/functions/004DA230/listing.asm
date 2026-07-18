FUN_004da230:
004DA230  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004DA236  56                        PUSH ESI
004DA237  33 F6                     XOR ESI,ESI
004DA239  83 F8 04                  CMP EAX,0x4
004DA23C  77 35                     JA 0x004da273
switchD_004da23e::switchD:
004DA23E  FF 24 85 78 A2 4D 00      JMP dword ptr [EAX*0x4 + 0x4da278]
switchD_004da23e::caseD_2:
004DA245  68 D8 F5 7B 00            PUSH 0x7bf5d8
004DA24A  68 CC 4C 7A 00            PUSH 0x7a4ccc
004DA24F  6A 00                     PUSH 0x0
004DA251  6A 00                     PUSH 0x0
004DA253  68 8D 00 00 00            PUSH 0x8d
004DA258  68 18 F6 7B 00            PUSH 0x7bf618
004DA25D  E8 6E 32 1D 00            CALL 0x006ad4d0
004DA262  83 C4 18                  ADD ESP,0x18
004DA265  85 C0                     TEST EAX,EAX
004DA267  74 0A                     JZ 0x004da273
004DA269  CC                        INT3
switchD_004da23e::caseD_0:
004DA26E  BE 01 00 00 00            MOV ESI,0x1
switchD_004da23e::caseD_3:
004DA273  8B C6                     MOV EAX,ESI
004DA275  5E                        POP ESI
004DA276  C3                        RET
