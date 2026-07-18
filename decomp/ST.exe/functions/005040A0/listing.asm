FUN_005040a0:
005040A0  55                        PUSH EBP
005040A1  8B EC                     MOV EBP,ESP
005040A3  83 EC 48                  SUB ESP,0x48
005040A6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005040AB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005040AE  56                        PUSH ESI
005040AF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005040B2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005040B5  6A 00                     PUSH 0x0
005040B7  52                        PUSH EDX
005040B8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005040BB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
005040C1  E8 2A 97 22 00            CALL 0x0072d7f0
005040C6  8B F0                     MOV ESI,EAX
005040C8  83 C4 08                  ADD ESP,0x8
005040CB  85 F6                     TEST ESI,ESI
005040CD  0F 85 A2 00 00 00         JNZ 0x00504175
005040D3  8B 75 FC                  MOV ESI,dword ptr [EBP + -0x4]
005040D6  8B 86 94 09 00 00         MOV EAX,dword ptr [ESI + 0x994]
005040DC  8B 8E 90 01 00 00         MOV ECX,dword ptr [ESI + 0x190]
005040E2  50                        PUSH EAX
005040E3  6A 01                     PUSH 0x1
005040E5  6A 00                     PUSH 0x0
005040E7  6A 00                     PUSH 0x0
005040E9  51                        PUSH ECX
005040EA  E8 3A F1 EF FF            CALL 0x00403229
005040EF  8B 96 90 01 00 00         MOV EDX,dword ptr [ESI + 0x190]
005040F5  83 C4 14                  ADD ESP,0x14
005040F8  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
005040FE  6A 0A                     PUSH 0xa
00504100  6A 2A                     PUSH 0x2a
00504102  6A 06                     PUSH 0x6
00504104  6A 05                     PUSH 0x5
00504106  6A 00                     PUSH 0x0
00504108  52                        PUSH EDX
00504109  E8 82 C9 20 00            CALL 0x00710a90
0050410E  A0 4E 87 80 00            MOV AL,[0x0080874e]
00504113  8B 0D 18 76 80 00         MOV ECX,dword ptr [0x00807618]
00504119  2C 03                     SUB AL,0x3
0050411B  6A FF                     PUSH -0x1
0050411D  F6 D8                     NEG AL
0050411F  1B C0                     SBB EAX,EAX
00504121  6A FF                     PUSH -0x1
00504123  24 FC                     AND AL,0xfc
00504125  83 C0 05                  ADD EAX,0x5
00504128  50                        PUSH EAX
00504129  6A FF                     PUSH -0x1
0050412B  6A FE                     PUSH -0x2
0050412D  51                        PUSH ECX
0050412E  68 12 27 00 00            PUSH 0x2712
00504133  E8 08 C0 1A 00            CALL 0x006b0140
00504138  8B 8E B8 01 00 00         MOV ECX,dword ptr [ESI + 0x1b8]
0050413E  50                        PUSH EAX
0050413F  E8 2C DA 20 00            CALL 0x00711b70
00504144  8B 86 58 01 00 00         MOV EAX,dword ptr [ESI + 0x158]
0050414A  85 C0                     TEST EAX,EAX
0050414C  7C 1A                     JL 0x00504168
0050414E  8B 96 A4 00 00 00         MOV EDX,dword ptr [ESI + 0xa4]
00504154  8B 4E 4C                  MOV ECX,dword ptr [ESI + 0x4c]
00504157  52                        PUSH EDX
00504158  8B 15 A8 75 80 00         MOV EDX,dword ptr [0x008075a8]
0050415E  51                        PUSH ECX
0050415F  6A FF                     PUSH -0x1
00504161  50                        PUSH EAX
00504162  52                        PUSH EDX
00504163  E8 D8 F4 1A 00            CALL 0x006b3640
LAB_00504168:
00504168  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0050416B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00504170  5E                        POP ESI
00504171  8B E5                     MOV ESP,EBP
00504173  5D                        POP EBP
00504174  C3                        RET
LAB_00504175:
00504175  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00504178  68 C8 26 7C 00            PUSH 0x7c26c8
0050417D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00504182  56                        PUSH ESI
00504183  6A 00                     PUSH 0x0
00504185  6A 13                     PUSH 0x13
00504187  68 A0 26 7C 00            PUSH 0x7c26a0
0050418C  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00504192  E8 39 93 1A 00            CALL 0x006ad4d0
00504197  83 C4 18                  ADD ESP,0x18
0050419A  85 C0                     TEST EAX,EAX
0050419C  74 01                     JZ 0x0050419f
0050419E  CC                        INT3
LAB_0050419f:
0050419F  6A 13                     PUSH 0x13
005041A1  68 A0 26 7C 00            PUSH 0x7c26a0
005041A6  6A 00                     PUSH 0x0
005041A8  56                        PUSH ESI
005041A9  E8 92 1C 1A 00            CALL 0x006a5e40
005041AE  5E                        POP ESI
005041AF  8B E5                     MOV ESP,EBP
005041B1  5D                        POP EBP
005041B2  C3                        RET
