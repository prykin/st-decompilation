FUN_00716fd0:
00716FD0  55                        PUSH EBP
00716FD1  8B EC                     MOV EBP,ESP
00716FD3  83 EC 58                  SUB ESP,0x58
00716FD6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00716FDB  53                        PUSH EBX
00716FDC  56                        PUSH ESI
00716FDD  33 F6                     XOR ESI,ESI
00716FDF  57                        PUSH EDI
00716FE0  8D 55 AC                  LEA EDX,[EBP + -0x54]
00716FE3  8D 4D A8                  LEA ECX,[EBP + -0x58]
00716FE6  56                        PUSH ESI
00716FE7  52                        PUSH EDX
00716FE8  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00716FEB  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00716FEE  89 45 A8                  MOV dword ptr [EBP + -0x58],EAX
00716FF1  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00716FF7  E8 F4 67 01 00            CALL 0x0072d7f0
00716FFC  8B D8                     MOV EBX,EAX
00716FFE  83 C4 08                  ADD ESP,0x8
00717001  3B DE                     CMP EBX,ESI
00717003  0F 85 1C 01 00 00         JNZ 0x00717125
00717009  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
0071700C  3B FE                     CMP EDI,ESI
0071700E  75 17                     JNZ 0x00717027
00717010  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
00717015  68 F7 00 00 00            PUSH 0xf7
0071701A  68 04 05 7F 00            PUSH 0x7f0504
0071701F  50                        PUSH EAX
00717020  6A CC                     PUSH -0x34
00717022  E8 19 EE F8 FF            CALL 0x006a5e40
LAB_00717027:
00717027  8B 5D 14                  MOV EBX,dword ptr [EBP + 0x14]
0071702A  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0071702D  53                        PUSH EBX
0071702E  6A 00                     PUSH 0x0
00717030  56                        PUSH ESI
00717031  6A 13                     PUSH 0x13
00717033  8B CF                     MOV ECX,EDI
00717035  E8 A6 AC FD FF            CALL 0x006f1ce0
0071703A  85 C0                     TEST EAX,EAX
0071703C  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
0071703F  75 18                     JNZ 0x00717059
00717041  8B 0D 7C D7 7E 00         MOV ECX,dword ptr [0x007ed77c]
00717047  68 F9 00 00 00            PUSH 0xf9
0071704C  68 04 05 7F 00            PUSH 0x7f0504
00717051  51                        PUSH ECX
00717052  6A FC                     PUSH -0x4
00717054  E8 E7 ED F8 FF            CALL 0x006a5e40
LAB_00717059:
00717059  8D 55 EC                  LEA EDX,[EBP + -0x14]
0071705C  6A 01                     PUSH 0x1
0071705E  52                        PUSH EDX
0071705F  56                        PUSH ESI
00717060  6A 13                     PUSH 0x13
00717062  8B CF                     MOV ECX,EDI
00717064  E8 A7 B2 FD FF            CALL 0x006f2310
00717069  0F BF 45 EC               MOVSX EAX,word ptr [EBP + -0x14]
0071706D  8D 04 85 31 00 00 00      LEA EAX,[EAX*0x4 + 0x31]
00717074  50                        PUSH EAX
00717075  E8 96 3B F9 FF            CALL 0x006aac10
0071707A  66 8B 4D EC               MOV CX,word ptr [EBP + -0x14]
0071707E  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00717081  66 89 48 23               MOV word ptr [EAX + 0x23],CX
00717085  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
00717088  33 F6                     XOR ESI,ESI
0071708A  89 7A 25                  MOV dword ptr [EDX + 0x25],EDI
0071708D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00717090  66 39 70 23               CMP word ptr [EAX + 0x23],SI
00717094  7E 71                     JLE 0x00717107
LAB_00717096:
00717096  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00717099  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
0071709C  8B D6                     MOV EDX,ESI
0071709E  53                        PUSH EBX
0071709F  C1 E2 04                  SHL EDX,0x4
007170A2  03 D6                     ADD EDX,ESI
007170A4  51                        PUSH ECX
007170A5  8D 0C 90                  LEA ECX,[EAX + EDX*0x4]
007170A8  51                        PUSH ECX
007170A9  57                        PUSH EDI
007170AA  E8 A1 39 FF FF            CALL 0x0070aa50
007170AF  8B 55 FC                  MOV EDX,dword ptr [EBP + -0x4]
007170B2  83 C4 10                  ADD ESP,0x10
007170B5  89 44 B2 2D               MOV dword ptr [EDX + ESI*0x4 + 0x2d],EAX
007170B9  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007170BC  8B 4C B0 2D               MOV ECX,dword ptr [EAX + ESI*0x4 + 0x2d]
007170C0  85 C9                     TEST ECX,ECX
007170C2  75 1A                     JNZ 0x007170de
007170C4  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
007170C9  68 04 01 00 00            PUSH 0x104
007170CE  68 04 05 7F 00            PUSH 0x7f0504
007170D3  50                        PUSH EAX
007170D4  6A FC                     PUSH -0x4
007170D6  E8 65 ED F8 FF            CALL 0x006a5e40
007170DB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_007170de:
007170DE  85 F6                     TEST ESI,ESI
007170E0  75 1C                     JNZ 0x007170fe
007170E2  8B 48 2D                  MOV ECX,dword ptr [EAX + 0x2d]
007170E5  66 8B 51 04               MOV DX,word ptr [ECX + 0x4]
007170E9  66 89 50 29               MOV word ptr [EAX + 0x29],DX
007170ED  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007170F0  8B 48 2D                  MOV ECX,dword ptr [EAX + 0x2d]
007170F3  66 8B 51 08               MOV DX,word ptr [ECX + 0x8]
007170F7  66 89 50 2B               MOV word ptr [EAX + 0x2b],DX
007170FB  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
LAB_007170fe:
007170FE  0F BF 40 23               MOVSX EAX,word ptr [EAX + 0x23]
00717102  46                        INC ESI
00717103  3B F0                     CMP ESI,EAX
00717105  7C 8F                     JL 0x00717096
LAB_00717107:
00717107  8B 4D A8                  MOV ECX,dword ptr [EBP + -0x58]
0071710A  8D 55 F8                  LEA EDX,[EBP + -0x8]
0071710D  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00717113  52                        PUSH EDX
00717114  8B CF                     MOV ECX,EDI
00717116  E8 C5 AF FD FF            CALL 0x006f20e0
0071711B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071711E  5F                        POP EDI
0071711F  5E                        POP ESI
00717120  5B                        POP EBX
00717121  8B E5                     MOV ESP,EBP
00717123  5D                        POP EBP
00717124  C3                        RET
LAB_00717125:
00717125  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00717128  8B 45 A8                  MOV EAX,dword ptr [EBP + -0x58]
0071712B  8D 4D F8                  LEA ECX,[EBP + -0x8]
0071712E  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00717133  51                        PUSH ECX
00717134  8B CF                     MOV ECX,EDI
00717136  E8 A5 AF FD FF            CALL 0x006f20e0
0071713B  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
0071713E  3B C6                     CMP EAX,ESI
00717140  74 28                     JZ 0x0071716a
00717142  66 83 78 23 00            CMP word ptr [EAX + 0x23],0x0
00717147  7E 18                     JLE 0x00717161
LAB_00717149:
00717149  8D 54 B0 2D               LEA EDX,[EAX + ESI*0x4 + 0x2d]
0071714D  8B CF                     MOV ECX,EDI
0071714F  52                        PUSH EDX
00717150  E8 8B AF FD FF            CALL 0x006f20e0
00717155  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00717158  46                        INC ESI
00717159  0F BF 48 23               MOVSX ECX,word ptr [EAX + 0x23]
0071715D  3B F1                     CMP ESI,ECX
0071715F  7C E8                     JL 0x00717149
LAB_00717161:
00717161  8D 55 FC                  LEA EDX,[EBP + -0x4]
00717164  52                        PUSH EDX
00717165  E8 F6 3E F9 FF            CALL 0x006ab060
LAB_0071716a:
0071716A  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
0071716D  85 C0                     TEST EAX,EAX
0071716F  75 05                     JNZ 0x00717176
00717171  83 FB FC                  CMP EBX,-0x4
00717174  74 36                     JZ 0x007171ac
LAB_00717176:
00717176  68 2C 05 7F 00            PUSH 0x7f052c
0071717B  68 CC 4C 7A 00            PUSH 0x7a4ccc
00717180  53                        PUSH EBX
00717181  6A 00                     PUSH 0x0
00717183  68 14 01 00 00            PUSH 0x114
00717188  68 04 05 7F 00            PUSH 0x7f0504
0071718D  E8 3E 63 F9 FF            CALL 0x006ad4d0
00717192  83 C4 18                  ADD ESP,0x18
00717195  85 C0                     TEST EAX,EAX
00717197  74 01                     JZ 0x0071719a
00717199  CC                        INT3
LAB_0071719a:
0071719A  68 16 01 00 00            PUSH 0x116
0071719F  68 04 05 7F 00            PUSH 0x7f0504
007171A4  6A 00                     PUSH 0x0
007171A6  53                        PUSH EBX
007171A7  E8 94 EC F8 FF            CALL 0x006a5e40
LAB_007171ac:
007171AC  5F                        POP EDI
007171AD  5E                        POP ESI
007171AE  33 C0                     XOR EAX,EAX
007171B0  5B                        POP EBX
007171B1  8B E5                     MOV ESP,EBP
007171B3  5D                        POP EBP
007171B4  C3                        RET
