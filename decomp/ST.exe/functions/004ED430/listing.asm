FUN_004ed430:
004ED430  8B 81 D0 04 00 00         MOV EAX,dword ptr [ECX + 0x4d0]
004ED436  56                        PUSH ESI
004ED437  33 F6                     XOR ESI,ESI
004ED439  83 F8 04                  CMP EAX,0x4
004ED43C  77 35                     JA 0x004ed473
switchD_004ed43e::switchD:
004ED43E  FF 24 85 78 D4 4E 00      JMP dword ptr [EAX*0x4 + 0x4ed478]
switchD_004ed43e::caseD_2:
004ED445  68 D8 F5 7B 00            PUSH 0x7bf5d8
004ED44A  68 CC 4C 7A 00            PUSH 0x7a4ccc
004ED44F  6A 00                     PUSH 0x0
004ED451  6A 00                     PUSH 0x0
004ED453  68 8F 00 00 00            PUSH 0x8f
004ED458  68 70 16 7C 00            PUSH 0x7c1670
004ED45D  E8 6E 00 1C 00            CALL 0x006ad4d0
004ED462  83 C4 18                  ADD ESP,0x18
004ED465  85 C0                     TEST EAX,EAX
004ED467  74 0A                     JZ 0x004ed473
004ED469  CC                        INT3
switchD_004ed43e::caseD_0:
004ED46E  BE 01 00 00 00            MOV ESI,0x1
switchD_004ed43e::caseD_3:
004ED473  8B C6                     MOV EAX,ESI
004ED475  5E                        POP ESI
004ED476  C3                        RET
