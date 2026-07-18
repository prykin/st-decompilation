FUN_0067dfd0:
0067DFD0  55                        PUSH EBP
0067DFD1  8B EC                     MOV EBP,ESP
0067DFD3  83 EC 48                  SUB ESP,0x48
0067DFD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
0067DFDB  56                        PUSH ESI
0067DFDC  8D 55 BC                  LEA EDX,[EBP + -0x44]
0067DFDF  8D 4D B8                  LEA ECX,[EBP + -0x48]
0067DFE2  6A 00                     PUSH 0x0
0067DFE4  52                        PUSH EDX
0067DFE5  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
0067DFEC  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
0067DFEF  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067DFF5  E8 F6 F7 0A 00            CALL 0x0072d7f0
0067DFFA  8B F0                     MOV ESI,EAX
0067DFFC  83 C4 08                  ADD ESP,0x8
0067DFFF  85 F6                     TEST ESI,ESI
0067E001  75 44                     JNZ 0x0067e047
0067E003  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
0067E006  85 F6                     TEST ESI,ESI
0067E008  75 17                     JNZ 0x0067e021
0067E00A  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
0067E00F  68 81 01 00 00            PUSH 0x181
0067E014  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E019  50                        PUSH EAX
0067E01A  6A CC                     PUSH -0x34
0067E01C  E8 1F 7E 02 00            CALL 0x006a5e40
LAB_0067e021:
0067E021  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
0067E024  8B 15 28 D7 79 00         MOV EDX,dword ptr [0x0079d728]
0067E02A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0067E02D  51                        PUSH ECX
0067E02E  52                        PUSH EDX
0067E02F  50                        PUSH EAX
0067E030  56                        PUSH ESI
0067E031  E8 B5 35 D8 FF            CALL 0x004015eb
0067E036  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
0067E039  83 C4 10                  ADD ESP,0x10
0067E03C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
0067E042  5E                        POP ESI
0067E043  8B E5                     MOV ESP,EBP
0067E045  5D                        POP EBP
0067E046  C3                        RET
LAB_0067e047:
0067E047  8B 55 B8                  MOV EDX,dword ptr [EBP + -0x48]
0067E04A  68 3C 30 7D 00            PUSH 0x7d303c
0067E04F  68 CC 4C 7A 00            PUSH 0x7a4ccc
0067E054  56                        PUSH ESI
0067E055  6A 00                     PUSH 0x0
0067E057  68 84 01 00 00            PUSH 0x184
0067E05C  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E061  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
0067E067  E8 64 F4 02 00            CALL 0x006ad4d0
0067E06C  83 C4 18                  ADD ESP,0x18
0067E06F  85 C0                     TEST EAX,EAX
0067E071  74 01                     JZ 0x0067e074
0067E073  CC                        INT3
LAB_0067e074:
0067E074  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0067E077  50                        PUSH EAX
0067E078  E8 93 00 03 00            CALL 0x006ae110
0067E07D  68 86 01 00 00            PUSH 0x186
0067E082  68 A4 2F 7D 00            PUSH 0x7d2fa4
0067E087  6A 00                     PUSH 0x0
0067E089  56                        PUSH ESI
0067E08A  E8 B1 7D 02 00            CALL 0x006a5e40
0067E08F  33 C0                     XOR EAX,EAX
0067E091  5E                        POP ESI
0067E092  8B E5                     MOV ESP,EBP
0067E094  5D                        POP EBP
0067E095  C3                        RET
