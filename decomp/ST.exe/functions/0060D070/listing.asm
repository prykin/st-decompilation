FUN_0060d070:
0060D070  55                        PUSH EBP
0060D071  8B EC                     MOV EBP,ESP
0060D073  83 EC 20                  SUB ESP,0x20
0060D076  53                        PUSH EBX
0060D077  8B D9                     MOV EBX,ECX
0060D079  33 C0                     XOR EAX,EAX
0060D07B  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D081  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060D084  3B C8                     CMP ECX,EAX
0060D086  0F 84 1F 01 00 00         JZ 0x0060d1ab
0060D08C  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
0060D092  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060D095  3B C8                     CMP ECX,EAX
0060D097  0F 8E 0E 01 00 00         JLE 0x0060d1ab
0060D09D  56                        PUSH ESI
0060D09E  57                        PUSH EDI
LAB_0060d09f:
0060D09F  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D0A5  8B F0                     MOV ESI,EAX
0060D0A7  C1 E6 04                  SHL ESI,0x4
0060D0AA  03 F0                     ADD ESI,EAX
0060D0AC  C1 E6 02                  SHL ESI,0x2
0060D0AF  83 3C 0E 00               CMP dword ptr [ESI + ECX*0x1],0x0
0060D0B3  0F 84 D7 00 00 00         JZ 0x0060d190
0060D0B9  8B 15 38 2A 80 00         MOV EDX,dword ptr [0x00802a38]
0060D0BF  8B BA E4 00 00 00         MOV EDI,dword ptr [EDX + 0xe4]
0060D0C5  8B 54 0E 3C               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x3c]
0060D0C9  2B FA                     SUB EDI,EDX
0060D0CB  8B 54 0E 04               MOV EDX,dword ptr [ESI + ECX*0x1 + 0x4]
0060D0CF  0F AF 7C 0E 38            IMUL EDI,dword ptr [ESI + ECX*0x1 + 0x38]
0060D0D4  3B FA                     CMP EDI,EDX
0060D0D6  0F 8D 9D 00 00 00         JGE 0x0060d179
0060D0DC  8A 93 2F 02 00 00         MOV DL,byte ptr [EBX + 0x22f]
0060D0E2  84 D2                     TEST DL,DL
0060D0E4  75 2C                     JNZ 0x0060d112
0060D0E6  85 C0                     TEST EAX,EAX
0060D0E8  75 28                     JNZ 0x0060d112
0060D0EA  8B 41 04                  MOV EAX,dword ptr [ECX + 0x4]
0060D0ED  99                        CDQ
0060D0EE  2B C2                     SUB EAX,EDX
0060D0F0  8B D0                     MOV EDX,EAX
0060D0F2  8B C7                     MOV EAX,EDI
0060D0F4  D1 FA                     SAR EDX,0x1
0060D0F6  2B C2                     SUB EAX,EDX
0060D0F8  99                        CDQ
0060D0F9  33 C2                     XOR EAX,EDX
0060D0FB  2B C2                     SUB EAX,EDX
0060D0FD  8B 51 38                  MOV EDX,dword ptr [ECX + 0x38]
0060D100  3B C2                     CMP EAX,EDX
0060D102  7D 0E                     JGE 0x0060d112
0060D104  8B CB                     MOV ECX,EBX
0060D106  E8 DB 67 DF FF            CALL 0x004038e6
0060D10B  C6 83 2F 02 00 00 01      MOV byte ptr [EBX + 0x22f],0x1
LAB_0060d112:
0060D112  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060D115  40                        INC EAX
0060D116  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0060D119  8B 83 44 02 00 00         MOV EAX,dword ptr [EBX + 0x244]
0060D11F  8D 0C 06                  LEA ECX,[ESI + EAX*0x1]
0060D122  8B 44 06 34               MOV EAX,dword ptr [ESI + EAX*0x1 + 0x34]
0060D126  8B 71 30                  MOV ESI,dword ptr [ECX + 0x30]
0060D129  03 C6                     ADD EAX,ESI
0060D12B  3D 68 01 00 00            CMP EAX,0x168
0060D130  7E 05                     JLE 0x0060d137
0060D132  2D 68 01 00 00            SUB EAX,0x168
LAB_0060d137:
0060D137  8D 55 E0                  LEA EDX,[EBP + -0x20]
0060D13A  8B 71 04                  MOV ESI,dword ptr [ECX + 0x4]
0060D13D  52                        PUSH EDX
0060D13E  8B 51 08                  MOV EDX,dword ptr [ECX + 0x8]
0060D141  57                        PUSH EDI
0060D142  52                        PUSH EDX
0060D143  50                        PUSH EAX
0060D144  8B 41 2C                  MOV EAX,dword ptr [ECX + 0x2c]
0060D147  0F AF C7                  IMUL EAX,EDI
0060D14A  99                        CDQ
0060D14B  F7 FE                     IDIV ESI
0060D14D  03 41 20                  ADD EAX,dword ptr [ECX + 0x20]
0060D150  50                        PUSH EAX
0060D151  8B 41 28                  MOV EAX,dword ptr [ECX + 0x28]
0060D154  0F AF C7                  IMUL EAX,EDI
0060D157  99                        CDQ
0060D158  F7 FE                     IDIV ESI
0060D15A  03 41 1C                  ADD EAX,dword ptr [ECX + 0x1c]
0060D15D  50                        PUSH EAX
0060D15E  8B 41 24                  MOV EAX,dword ptr [ECX + 0x24]
0060D161  0F AF C7                  IMUL EAX,EDI
0060D164  99                        CDQ
0060D165  F7 FE                     IDIV ESI
0060D167  03 41 18                  ADD EAX,dword ptr [ECX + 0x18]
0060D16A  50                        PUSH EAX
0060D16B  8B 41 40                  MOV EAX,dword ptr [ECX + 0x40]
0060D16E  50                        PUSH EAX
0060D16F  E8 BF 51 DF FF            CALL 0x00402333
0060D174  83 C4 20                  ADD ESP,0x20
0060D177  EB 14                     JMP 0x0060d18d
LAB_0060d179:
0060D179  8B CB                     MOV ECX,EBX
0060D17B  E8 D7 7D DF FF            CALL 0x00404f57
0060D180  8B 8B 44 02 00 00         MOV ECX,dword ptr [EBX + 0x244]
0060D186  C7 04 0E 00 00 00 00      MOV dword ptr [ESI + ECX*0x1],0x0
LAB_0060d18d:
0060D18D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_0060d190:
0060D190  8B 8B 3C 02 00 00         MOV ECX,dword ptr [EBX + 0x23c]
0060D196  40                        INC EAX
0060D197  3B C1                     CMP EAX,ECX
0060D199  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0060D19C  0F 8C FD FE FF FF         JL 0x0060d09f
0060D1A2  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0060D1A5  5F                        POP EDI
0060D1A6  85 C0                     TEST EAX,EAX
0060D1A8  5E                        POP ESI
0060D1A9  75 0A                     JNZ 0x0060d1b5
LAB_0060d1ab:
0060D1AB  B8 02 00 00 00            MOV EAX,0x2
0060D1B0  5B                        POP EBX
0060D1B1  8B E5                     MOV ESP,EBP
0060D1B3  5D                        POP EBP
0060D1B4  C3                        RET
LAB_0060d1b5:
0060D1B5  B8 01 00 00 00            MOV EAX,0x1
0060D1BA  5B                        POP EBX
0060D1BB  8B E5                     MOV ESP,EBP
0060D1BD  5D                        POP EBP
0060D1BE  C3                        RET
