IntercomPanelTy::SwitchIntercomPanel:
00522D40  55                        PUSH EBP
00522D41  8B EC                     MOV EBP,ESP
00522D43  83 EC 48                  SUB ESP,0x48
00522D46  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00522D4B  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
00522D4E  56                        PUSH ESI
00522D4F  8D 55 BC                  LEA EDX,[EBP + -0x44]
00522D52  8D 4D B8                  LEA ECX,[EBP + -0x48]
00522D55  6A 00                     PUSH 0x0
00522D57  52                        PUSH EDX
00522D58  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
00522D5B  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522D61  E8 8A AA 20 00            CALL 0x0072d7f0
00522D66  8B F0                     MOV ESI,EAX
00522D68  83 C4 08                  ADD ESP,0x8
00522D6B  85 F6                     TEST ESI,ESI
00522D6D  75 7F                     JNZ 0x00522dee
00522D6F  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
00522D72  66 8B 86 72 01 00 00      MOV AX,word ptr [ESI + 0x172]
00522D79  48                        DEC EAX
00522D7A  74 2F                     JZ 0x00522dab
00522D7C  48                        DEC EAX
00522D7D  74 13                     JZ 0x00522d92
00522D7F  48                        DEC EAX
00522D80  74 29                     JZ 0x00522dab
00522D82  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00522D85  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522D8B  5E                        POP ESI
00522D8C  8B E5                     MOV ESP,EBP
00522D8E  5D                        POP EBP
00522D8F  C2 04 00                  RET 0x4
LAB_00522d92:
00522D92  8A 45 08                  MOV AL,byte ptr [EBP + 0x8]
00522D95  66 C7 86 72 01 00 00 03 00  MOV word ptr [ESI + 0x172],0x3
00522D9E  88 86 A4 01 00 00         MOV byte ptr [ESI + 0x1a4],AL
00522DA4  68 AF 00 00 00            PUSH 0xaf
00522DA9  EB 2B                     JMP 0x00522dd6
LAB_00522dab:
00522DAB  8B 86 A0 01 00 00         MOV EAX,dword ptr [ESI + 0x1a0]
00522DB1  66 C7 86 72 01 00 00 04 00  MOV word ptr [ESI + 0x172],0x4
00522DBA  85 C0                     TEST EAX,EAX
00522DBC  74 09                     JZ 0x00522dc7
00522DBE  8B 4E 0C                  MOV ECX,dword ptr [ESI + 0xc]
00522DC1  50                        PUSH EAX
00522DC2  E8 E9 28 1C 00            CALL 0x006e56b0
LAB_00522dc7:
00522DC7  C7 86 A0 01 00 00 00 00 00 00  MOV dword ptr [ESI + 0x1a0],0x0
00522DD1  68 B0 00 00 00            PUSH 0xb0
LAB_00522dd6:
00522DD6  E8 54 30 EE FF            CALL 0x00405e2f
00522DDB  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00522DDE  83 C4 04                  ADD ESP,0x4
00522DE1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00522DE7  5E                        POP ESI
00522DE8  8B E5                     MOV ESP,EBP
00522DEA  5D                        POP EBP
00522DEB  C2 04 00                  RET 0x4
LAB_00522dee:
00522DEE  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
00522DF1  68 74 41 7C 00            PUSH 0x7c4174
00522DF6  68 CC 4C 7A 00            PUSH 0x7a4ccc
00522DFB  56                        PUSH ESI
00522DFC  6A 00                     PUSH 0x0
00522DFE  68 3B 01 00 00            PUSH 0x13b
00522E03  68 1C 40 7C 00            PUSH 0x7c401c
00522E08  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00522E0E  E8 BD A6 18 00            CALL 0x006ad4d0
00522E13  83 C4 18                  ADD ESP,0x18
00522E16  85 C0                     TEST EAX,EAX
00522E18  74 01                     JZ 0x00522e1b
00522E1A  CC                        INT3
LAB_00522e1b:
00522E1B  68 3B 01 00 00            PUSH 0x13b
00522E20  68 1C 40 7C 00            PUSH 0x7c401c
00522E25  6A 00                     PUSH 0x0
00522E27  56                        PUSH ESI
00522E28  E8 13 30 18 00            CALL 0x006a5e40
00522E2D  5E                        POP ESI
00522E2E  8B E5                     MOV ESP,EBP
00522E30  5D                        POP EBP
00522E31  C2 04 00                  RET 0x4
