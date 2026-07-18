SpecPanelTy::ShiftControls:
0053EA50  55                        PUSH EBP
0053EA51  8B EC                     MOV EBP,ESP
0053EA53  83 EC 48                  SUB ESP,0x48
0053EA56  8B D1                     MOV EDX,ECX
0053EA58  56                        PUSH ESI
0053EA59  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0053EA5C  57                        PUSH EDI
0053EA5D  8B 42 5C                  MOV EAX,dword ptr [EDX + 0x5c]
0053EA60  89 55 FC                  MOV dword ptr [EBP + -0x4],EDX
0053EA63  3B F0                     CMP ESI,EAX
0053EA65  0F 84 B3 00 00 00         JZ 0x0053eb1e
0053EA6B  B9 08 00 00 00            MOV ECX,0x8
0053EA70  33 C0                     XOR EAX,EAX
0053EA72  8D 7A 18                  LEA EDI,[EDX + 0x18]
0053EA75  89 72 5C                  MOV dword ptr [EDX + 0x5c],ESI
0053EA78  F3 AB                     STOSD.REP ES:EDI
0053EA7A  8B 82 74 01 00 00         MOV EAX,dword ptr [EDX + 0x174]
0053EA80  C7 42 28 24 00 00 00      MOV dword ptr [EDX + 0x28],0x24
0053EA87  85 F6                     TEST ESI,ESI
0053EA89  74 02                     JZ 0x0053ea8d
0053EA8B  F7 D8                     NEG EAX
LAB_0053ea8d:
0053EA8D  66 89 42 2E               MOV word ptr [EDX + 0x2e],AX
0053EA91  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0053EA96  8D 55 BC                  LEA EDX,[EBP + -0x44]
0053EA99  8D 4D B8                  LEA ECX,[EBP + -0x48]
0053EA9C  6A 00                     PUSH 0x0
0053EA9E  52                        PUSH EDX
0053EA9F  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0053EAA2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053EAA8  E8 43 ED 1E 00            CALL 0x0072d7f0
0053EAAD  8B F0                     MOV ESI,EAX
0053EAAF  83 C4 08                  ADD ESP,0x8
0053EAB2  85 F6                     TEST ESI,ESI
0053EAB4  75 29                     JNZ 0x0053eadf
0053EAB6  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0053EAB9  8B 81 7C 01 00 00         MOV EAX,dword ptr [ECX + 0x17c]
0053EABF  85 C0                     TEST EAX,EAX
0053EAC1  74 0C                     JZ 0x0053eacf
0053EAC3  8D 51 18                  LEA EDX,[ECX + 0x18]
0053EAC6  52                        PUSH EDX
0053EAC7  50                        PUSH EAX
0053EAC8  6A 02                     PUSH 0x2
0053EACA  E8 B1 75 1A 00            CALL 0x006e6080
LAB_0053eacf:
0053EACF  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053EAD2  A3 F8 8D 85 00            MOV [0x00858df8],EAX
0053EAD7  5F                        POP EDI
0053EAD8  5E                        POP ESI
0053EAD9  8B E5                     MOV ESP,EBP
0053EADB  5D                        POP EBP
0053EADC  C2 04 00                  RET 0x4
LAB_0053eadf:
0053EADF  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0053EAE2  68 A0 79 7C 00            PUSH 0x7c79a0
0053EAE7  68 CC 4C 7A 00            PUSH 0x7a4ccc
0053EAEC  56                        PUSH ESI
0053EAED  6A 00                     PUSH 0x0
0053EAEF  68 34 01 00 00            PUSH 0x134
0053EAF4  68 70 78 7C 00            PUSH 0x7c7870
0053EAF9  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0053EAFF  E8 CC E9 16 00            CALL 0x006ad4d0
0053EB04  83 C4 18                  ADD ESP,0x18
0053EB07  85 C0                     TEST EAX,EAX
0053EB09  74 01                     JZ 0x0053eb0c
0053EB0B  CC                        INT3
LAB_0053eb0c:
0053EB0C  68 34 01 00 00            PUSH 0x134
0053EB11  68 70 78 7C 00            PUSH 0x7c7870
0053EB16  6A 00                     PUSH 0x0
0053EB18  56                        PUSH ESI
0053EB19  E8 22 73 16 00            CALL 0x006a5e40
LAB_0053eb1e:
0053EB1E  5F                        POP EDI
0053EB1F  5E                        POP ESI
0053EB20  8B E5                     MOV ESP,EBP
0053EB22  5D                        POP EBP
0053EB23  C2 04 00                  RET 0x4
