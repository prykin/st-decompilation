FUN_004fa400:
004FA400  55                        PUSH EBP
004FA401  8B EC                     MOV EBP,ESP
004FA403  83 EC 48                  SUB ESP,0x48
004FA406  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
004FA409  8B 91 30 01 00 00         MOV EDX,dword ptr [ECX + 0x130]
004FA40F  53                        PUSH EBX
004FA410  56                        PUSH ESI
004FA411  3B C2                     CMP EAX,EDX
004FA413  57                        PUSH EDI
004FA414  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
004FA417  75 0B                     JNZ 0x004fa424
004FA419  33 C0                     XOR EAX,EAX
004FA41B  5F                        POP EDI
004FA41C  5E                        POP ESI
004FA41D  5B                        POP EBX
004FA41E  8B E5                     MOV ESP,EBP
004FA420  5D                        POP EBP
004FA421  C2 04 00                  RET 0x4
LAB_004fa424:
004FA424  89 81 30 01 00 00         MOV dword ptr [ECX + 0x130],EAX
004FA42A  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
004FA42F  8D 55 BC                  LEA EDX,[EBP + -0x44]
004FA432  8D 4D B8                  LEA ECX,[EBP + -0x48]
004FA435  6A 00                     PUSH 0x0
004FA437  52                        PUSH EDX
004FA438  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
004FA43B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA441  E8 AA 33 23 00            CALL 0x0072d7f0
004FA446  8B F0                     MOV ESI,EAX
004FA448  83 C4 08                  ADD ESP,0x8
004FA44B  85 F6                     TEST ESI,ESI
004FA44D  75 7A                     JNZ 0x004fa4c9
004FA44F  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
004FA452  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
004FA455  57                        PUSH EDI
004FA456  6A 01                     PUSH 0x1
004FA458  8B CE                     MOV ECX,ESI
004FA45A  E8 5D B9 F0 FF            CALL 0x00405dbc
004FA45F  57                        PUSH EDI
004FA460  6A 00                     PUSH 0x0
004FA462  8B CE                     MOV ECX,ESI
004FA464  E8 53 B9 F0 FF            CALL 0x00405dbc
004FA469  8D BE A4 09 00 00         LEA EDI,[ESI + 0x9a4]
004FA46F  BB 07 00 00 00            MOV EBX,0x7
LAB_004fa474:
004FA474  8B 07                     MOV EAX,dword ptr [EDI]
004FA476  85 C0                     TEST EAX,EAX
004FA478  74 0E                     JZ 0x004fa488
004FA47A  8D 4E 18                  LEA ECX,[ESI + 0x18]
004FA47D  51                        PUSH ECX
004FA47E  50                        PUSH EAX
004FA47F  6A 02                     PUSH 0x2
004FA481  8B CE                     MOV ECX,ESI
004FA483  E8 F8 BB 1E 00            CALL 0x006e6080
LAB_004fa488:
004FA488  83 C7 04                  ADD EDI,0x4
004FA48B  4B                        DEC EBX
004FA48C  75 E6                     JNZ 0x004fa474
004FA48E  8D BE C0 09 00 00         LEA EDI,[ESI + 0x9c0]
004FA494  BB 02 00 00 00            MOV EBX,0x2
LAB_004fa499:
004FA499  8B 07                     MOV EAX,dword ptr [EDI]
004FA49B  85 C0                     TEST EAX,EAX
004FA49D  74 0E                     JZ 0x004fa4ad
004FA49F  8D 56 18                  LEA EDX,[ESI + 0x18]
004FA4A2  8B CE                     MOV ECX,ESI
004FA4A4  52                        PUSH EDX
004FA4A5  50                        PUSH EAX
004FA4A6  6A 02                     PUSH 0x2
004FA4A8  E8 D3 BB 1E 00            CALL 0x006e6080
LAB_004fa4ad:
004FA4AD  83 C7 04                  ADD EDI,0x4
004FA4B0  4B                        DEC EBX
004FA4B1  75 E6                     JNZ 0x004fa499
004FA4B3  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
004FA4B6  A3 F8 8D 85 00            MOV [0x00858df8],EAX
004FA4BB  B8 01 00 00 00            MOV EAX,0x1
004FA4C0  5F                        POP EDI
004FA4C1  5E                        POP ESI
004FA4C2  5B                        POP EBX
004FA4C3  8B E5                     MOV ESP,EBP
004FA4C5  5D                        POP EBP
004FA4C6  C2 04 00                  RET 0x4
LAB_004fa4c9:
004FA4C9  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
004FA4CC  68 A0 22 7C 00            PUSH 0x7c22a0
004FA4D1  68 CC 4C 7A 00            PUSH 0x7a4ccc
004FA4D6  56                        PUSH ESI
004FA4D7  6A 00                     PUSH 0x0
004FA4D9  68 2B 04 00 00            PUSH 0x42b
004FA4DE  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA4E3  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
004FA4E9  E8 E2 2F 1B 00            CALL 0x006ad4d0
004FA4EE  83 C4 18                  ADD ESP,0x18
004FA4F1  85 C0                     TEST EAX,EAX
004FA4F3  74 01                     JZ 0x004fa4f6
004FA4F5  CC                        INT3
LAB_004fa4f6:
004FA4F6  68 2B 04 00 00            PUSH 0x42b
004FA4FB  68 D8 1B 7C 00            PUSH 0x7c1bd8
004FA500  6A 00                     PUSH 0x0
004FA502  56                        PUSH ESI
004FA503  E8 38 B9 1A 00            CALL 0x006a5e40
004FA508  5F                        POP EDI
004FA509  5E                        POP ESI
004FA50A  B8 01 00 00 00            MOV EAX,0x1
004FA50F  5B                        POP EBX
004FA510  8B E5                     MOV ESP,EBP
004FA512  5D                        POP EBP
004FA513  C2 04 00                  RET 0x4
