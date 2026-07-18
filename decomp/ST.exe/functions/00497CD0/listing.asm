FUN_00497cd0:
00497CD0  55                        PUSH EBP
00497CD1  8B EC                     MOV EBP,ESP
00497CD3  83 EC 4C                  SUB ESP,0x4c
00497CD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00497CDB  53                        PUSH EBX
00497CDC  56                        PUSH ESI
00497CDD  89 4D F8                  MOV dword ptr [EBP + -0x8],ECX
00497CE0  57                        PUSH EDI
00497CE1  8D 55 B8                  LEA EDX,[EBP + -0x48]
00497CE4  8D 4D B4                  LEA ECX,[EBP + -0x4c]
00497CE7  6A 00                     PUSH 0x0
00497CE9  52                        PUSH EDX
00497CEA  89 45 B4                  MOV dword ptr [EBP + -0x4c],EAX
00497CED  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00497CF3  E8 F8 5A 29 00            CALL 0x0072d7f0
00497CF8  8B F0                     MOV ESI,EAX
00497CFA  83 C4 08                  ADD ESP,0x8
00497CFD  85 F6                     TEST ESI,ESI
00497CFF  75 6C                     JNZ 0x00497d6d
00497D01  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00497D04  8B 5D F8                  MOV EBX,dword ptr [EBP + -0x8]
00497D07  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00497D0A  85 C0                     TEST EAX,EAX
00497D0C  76 34                     JBE 0x00497d42
LAB_00497d0e:
00497D0E  8D 45 FC                  LEA EAX,[EBP + -0x4]
00497D11  8B D6                     MOV EDX,ESI
00497D13  50                        PUSH EAX
00497D14  8B CF                     MOV ECX,EDI
00497D16  E8 55 4F 21 00            CALL 0x006acc70
00497D1B  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00497D1E  8A 53 24                  MOV DL,byte ptr [EBX + 0x24]
00497D21  6A 01                     PUSH 0x1
00497D23  51                        PUSH ECX
00497D24  8B 0D 74 A1 7F 00         MOV ECX,dword ptr [0x007fa174]
00497D2A  52                        PUSH EDX
00497D2B  E8 8A AB F6 FF            CALL 0x004028ba
00497D30  C7 80 FD 00 00 00 00 00 00 00  MOV dword ptr [EAX + 0xfd],0x0
00497D3A  8B 47 0C                  MOV EAX,dword ptr [EDI + 0xc]
00497D3D  46                        INC ESI
00497D3E  3B F0                     CMP ESI,EAX
00497D40  72 CC                     JC 0x00497d0e
LAB_00497d42:
00497D42  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00497D45  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00497D48  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00497D4B  50                        PUSH EAX
00497D4C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00497D4F  51                        PUSH ECX
00497D50  52                        PUSH EDX
00497D51  50                        PUSH EAX
00497D52  57                        PUSH EDI
00497D53  53                        PUSH EBX
00497D54  E8 D8 AC F6 FF            CALL 0x00402a31
00497D59  8B 4D B4                  MOV ECX,dword ptr [EBP + -0x4c]
00497D5C  33 C0                     XOR EAX,EAX
00497D5E  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00497D64  5F                        POP EDI
00497D65  5E                        POP ESI
00497D66  5B                        POP EBX
00497D67  8B E5                     MOV ESP,EBP
00497D69  5D                        POP EBP
00497D6A  C2 14 00                  RET 0x14
LAB_00497d6d:
00497D6D  8B 55 B4                  MOV EDX,dword ptr [EBP + -0x4c]
00497D70  68 60 BE 7A 00            PUSH 0x7abe60
00497D75  68 CC 4C 7A 00            PUSH 0x7a4ccc
00497D7A  56                        PUSH ESI
00497D7B  6A 00                     PUSH 0x0
00497D7D  6A 6E                     PUSH 0x6e
00497D7F  68 3C BE 7A 00            PUSH 0x7abe3c
00497D84  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00497D8A  E8 41 57 21 00            CALL 0x006ad4d0
00497D8F  83 C4 18                  ADD ESP,0x18
00497D92  85 C0                     TEST EAX,EAX
00497D94  74 01                     JZ 0x00497d97
00497D96  CC                        INT3
LAB_00497d97:
00497D97  6A 6F                     PUSH 0x6f
00497D99  68 3C BE 7A 00            PUSH 0x7abe3c
00497D9E  6A 00                     PUSH 0x0
00497DA0  56                        PUSH ESI
00497DA1  E8 9A E0 20 00            CALL 0x006a5e40
00497DA6  5F                        POP EDI
00497DA7  5E                        POP ESI
00497DA8  83 C8 FF                  OR EAX,0xffffffff
00497DAB  5B                        POP EBX
00497DAC  8B E5                     MOV ESP,EBP
00497DAE  5D                        POP EBP
00497DAF  C2 14 00                  RET 0x14
