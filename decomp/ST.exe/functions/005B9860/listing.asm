FUN_005b9860:
005B9860  55                        PUSH EBP
005B9861  8B EC                     MOV EBP,ESP
005B9863  83 EC 48                  SUB ESP,0x48
005B9866  8B 45 24                  MOV EAX,dword ptr [EBP + 0x24]
005B9869  53                        PUSH EBX
005B986A  56                        PUSH ESI
005B986B  57                        PUSH EDI
005B986C  85 C0                     TEST EAX,EAX
005B986E  0F 84 1E 01 00 00         JZ 0x005b9992
005B9874  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005B9877  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005B987C  8D 55 BC                  LEA EDX,[EBP + -0x44]
005B987F  8D 4D B8                  LEA ECX,[EBP + -0x48]
005B9882  6A 00                     PUSH 0x0
005B9884  52                        PUSH EDX
005B9885  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005B9888  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B988E  E8 5D 3F 17 00            CALL 0x0072d7f0
005B9893  8B F0                     MOV ESI,EAX
005B9895  83 C4 08                  ADD ESP,0x8
005B9898  85 F6                     TEST ESI,ESI
005B989A  0F 85 B9 00 00 00         JNZ 0x005b9959
005B98A0  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B98A5  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
005B98A8  8B 7D 18                  MOV EDI,dword ptr [EBP + 0x18]
005B98AB  8B 75 1C                  MOV ESI,dword ptr [EBP + 0x1c]
005B98AE  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
005B98B1  05 40 01 00 00            ADD EAX,0x140
005B98B6  83 C1 EA                  ADD ECX,-0x16
005B98B9  50                        PUSH EAX
005B98BA  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
005B98BD  51                        PUSH ECX
005B98BE  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
005B98C1  8D 57 16                  LEA EDX,[EDI + 0x16]
005B98C4  56                        PUSH ESI
005B98C5  52                        PUSH EDX
005B98C6  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
005B98C9  53                        PUSH EBX
005B98CA  50                        PUSH EAX
005B98CB  51                        PUSH ECX
005B98CC  52                        PUSH EDX
005B98CD  E8 00 AA E4 FF            CALL 0x004042d2
005B98D2  A1 6C 17 81 00            MOV EAX,[0x0081176c]
005B98D7  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B98DA  05 44 01 00 00            ADD EAX,0x144
005B98DF  50                        PUSH EAX
005B98E0  6A 15                     PUSH 0x15
005B98E2  56                        PUSH ESI
005B98E3  57                        PUSH EDI
005B98E4  53                        PUSH EBX
005B98E5  51                        PUSH ECX
005B98E6  E8 05 D0 10 00            CALL 0x006c68f0
005B98EB  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B98F1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
005B98F4  8B 82 40 01 00 00         MOV EAX,dword ptr [EDX + 0x140]
005B98FA  50                        PUSH EAX
005B98FB  6A 15                     PUSH 0x15
005B98FD  56                        PUSH ESI
005B98FE  57                        PUSH EDI
005B98FF  53                        PUSH EBX
005B9900  51                        PUSH ECX
005B9901  E8 4A CF 10 00            CALL 0x006c6850
005B9906  8B 15 6C 17 81 00         MOV EDX,dword ptr [0x0081176c]
005B990C  6A 00                     PUSH 0x0
005B990E  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
005B9914  8B 42 34                  MOV EAX,dword ptr [EDX + 0x34]
005B9917  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
005B991A  50                        PUSH EAX
005B991B  6A FF                     PUSH -0x1
005B991D  8A 82 5F 1A 00 00         MOV AL,byte ptr [EDX + 0x1a5f]
005B9923  6A FE                     PUSH -0x2
005B9925  FE C8                     DEC AL
005B9927  51                        PUSH ECX
005B9928  F6 D8                     NEG AL
005B992A  1B C0                     SBB EAX,EAX
005B992C  05 B4 26 00 00            ADD EAX,0x26b4
005B9931  50                        PUSH EAX
005B9932  E8 09 68 0F 00            CALL 0x006b0140
005B9937  50                        PUSH EAX
005B9938  6A 15                     PUSH 0x15
005B993A  56                        PUSH ESI
005B993B  57                        PUSH EDI
005B993C  53                        PUSH EBX
005B993D  6A 00                     PUSH 0x0
005B993F  E8 E9 B2 E4 FF            CALL 0x00404c2d
005B9944  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
005B9947  83 C4 28                  ADD ESP,0x28
005B994A  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005B9950  5F                        POP EDI
005B9951  5E                        POP ESI
005B9952  5B                        POP EBX
005B9953  8B E5                     MOV ESP,EBP
005B9955  5D                        POP EBP
005B9956  C2 20 00                  RET 0x20
LAB_005b9959:
005B9959  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
005B995C  68 6C CD 7C 00            PUSH 0x7ccd6c
005B9961  68 CC 4C 7A 00            PUSH 0x7a4ccc
005B9966  56                        PUSH ESI
005B9967  6A 00                     PUSH 0x0
005B9969  6A 3B                     PUSH 0x3b
005B996B  68 28 CD 7C 00            PUSH 0x7ccd28
005B9970  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
005B9976  E8 55 3B 0F 00            CALL 0x006ad4d0
005B997B  83 C4 18                  ADD ESP,0x18
005B997E  85 C0                     TEST EAX,EAX
005B9980  74 01                     JZ 0x005b9983
005B9982  CC                        INT3
LAB_005b9983:
005B9983  6A 3B                     PUSH 0x3b
005B9985  68 28 CD 7C 00            PUSH 0x7ccd28
005B998A  6A 00                     PUSH 0x0
005B998C  56                        PUSH ESI
005B998D  E8 AE C4 0E 00            CALL 0x006a5e40
LAB_005b9992:
005B9992  5F                        POP EDI
005B9993  5E                        POP ESI
005B9994  5B                        POP EBX
005B9995  8B E5                     MOV ESP,EBP
005B9997  5D                        POP EBP
005B9998  C2 20 00                  RET 0x20
