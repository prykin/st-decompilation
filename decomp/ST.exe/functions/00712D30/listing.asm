ccFntTy::FormIndentText:
00712D30  55                        PUSH EBP
00712D31  8B EC                     MOV EBP,ESP
00712D33  83 EC 54                  SUB ESP,0x54
00712D36  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
00712D3B  53                        PUSH EBX
00712D3C  56                        PUSH ESI
00712D3D  89 4D F0                  MOV dword ptr [EBP + -0x10],ECX
00712D40  33 F6                     XOR ESI,ESI
00712D42  57                        PUSH EDI
00712D43  8D 55 B0                  LEA EDX,[EBP + -0x50]
00712D46  8D 4D AC                  LEA ECX,[EBP + -0x54]
00712D49  56                        PUSH ESI
00712D4A  52                        PUSH EDX
00712D4B  89 75 F8                  MOV dword ptr [EBP + -0x8],ESI
00712D4E  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00712D51  89 75 FC                  MOV dword ptr [EBP + -0x4],ESI
00712D54  89 45 AC                  MOV dword ptr [EBP + -0x54],EAX
00712D57  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712D5D  E8 8E AA 01 00            CALL 0x0072d7f0
00712D62  8B F8                     MOV EDI,EAX
00712D64  83 C4 08                  ADD ESP,0x8
00712D67  3B FE                     CMP EDI,ESI
00712D69  75 76                     JNZ 0x00712de1
00712D6B  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
00712D6E  8B 5D F0                  MOV EBX,dword ptr [EBP + -0x10]
00712D71  50                        PUSH EAX
00712D72  8B CB                     MOV ECX,EBX
00712D74  E8 07 02 00 00            CALL 0x00712f80
00712D79  8B F8                     MOV EDI,EAX
00712D7B  3B FE                     CMP EDI,ESI
00712D7D  89 7D F8                  MOV dword ptr [EBP + -0x8],EDI
00712D80  74 4A                     JZ 0x00712dcc
00712D82  8B 4D 20                  MOV ECX,dword ptr [EBP + 0x20]
00712D85  8B 55 1C                  MOV EDX,dword ptr [EBP + 0x1c]
00712D88  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
00712D8B  51                        PUSH ECX
00712D8C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00712D8F  52                        PUSH EDX
00712D90  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
00712D93  6A FF                     PUSH -0x1
00712D95  56                        PUSH ESI
00712D96  50                        PUSH EAX
00712D97  51                        PUSH ECX
00712D98  52                        PUSH EDX
00712D99  57                        PUSH EDI
00712D9A  8B CB                     MOV ECX,EBX
00712D9C  E8 3F F9 FF FF            CALL 0x007126e0
00712DA1  8B F0                     MOV ESI,EAX
00712DA3  57                        PUSH EDI
00712DA4  89 75 F4                  MOV dword ptr [EBP + -0xc],ESI
00712DA7  E8 C4 27 FA FF            CALL 0x006b5570
00712DAC  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00712DAF  56                        PUSH ESI
00712DB0  50                        PUSH EAX
00712DB1  8B CB                     MOV ECX,EBX
00712DB3  C7 45 F8 00 00 00 00      MOV dword ptr [EBP + -0x8],0x0
00712DBA  E8 C1 02 00 00            CALL 0x00713080
00712DBF  85 F6                     TEST ESI,ESI
00712DC1  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00712DC4  74 06                     JZ 0x00712dcc
00712DC6  56                        PUSH ESI
00712DC7  E8 A4 27 FA FF            CALL 0x006b5570
LAB_00712dcc:
00712DCC  8B 4D AC                  MOV ECX,dword ptr [EBP + -0x54]
00712DCF  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712DD2  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00712DD8  5F                        POP EDI
00712DD9  5E                        POP ESI
00712DDA  5B                        POP EBX
00712DDB  8B E5                     MOV ESP,EBP
00712DDD  5D                        POP EBP
00712DDE  C2 1C 00                  RET 0x1c
LAB_00712de1:
00712DE1  8B 55 AC                  MOV EDX,dword ptr [EBP + -0x54]
00712DE4  68 34 03 7F 00            PUSH 0x7f0334
00712DE9  68 CC 4C 7A 00            PUSH 0x7a4ccc
00712DEE  57                        PUSH EDI
00712DEF  56                        PUSH ESI
00712DF0  68 8F 08 00 00            PUSH 0x88f
00712DF5  68 90 01 7F 00            PUSH 0x7f0190
00712DFA  89 15 F8 8D 85 00         MOV dword ptr [0x00858df8],EDX
00712E00  E8 CB A6 F9 FF            CALL 0x006ad4d0
00712E05  83 C4 18                  ADD ESP,0x18
00712E08  85 C0                     TEST EAX,EAX
00712E0A  74 01                     JZ 0x00712e0d
00712E0C  CC                        INT3
LAB_00712e0d:
00712E0D  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00712E10  3B C6                     CMP EAX,ESI
00712E12  74 0E                     JZ 0x00712e22
00712E14  3B 45 08                  CMP EAX,dword ptr [EBP + 0x8]
00712E17  74 09                     JZ 0x00712e22
00712E19  8D 45 FC                  LEA EAX,[EBP + -0x4]
00712E1C  50                        PUSH EAX
00712E1D  E8 3E 82 F9 FF            CALL 0x006ab060
LAB_00712e22:
00712E22  8B 45 F8                  MOV EAX,dword ptr [EBP + -0x8]
00712E25  3B C6                     CMP EAX,ESI
00712E27  74 06                     JZ 0x00712e2f
00712E29  50                        PUSH EAX
00712E2A  E8 41 27 FA FF            CALL 0x006b5570
LAB_00712e2f:
00712E2F  8B 45 F4                  MOV EAX,dword ptr [EBP + -0xc]
00712E32  3B C6                     CMP EAX,ESI
00712E34  74 06                     JZ 0x00712e3c
00712E36  50                        PUSH EAX
00712E37  E8 34 27 FA FF            CALL 0x006b5570
LAB_00712e3c:
00712E3C  68 95 08 00 00            PUSH 0x895
00712E41  68 90 01 7F 00            PUSH 0x7f0190
00712E46  56                        PUSH ESI
00712E47  57                        PUSH EDI
00712E48  E8 F3 2F F9 FF            CALL 0x006a5e40
00712E4D  5F                        POP EDI
00712E4E  5E                        POP ESI
00712E4F  33 C0                     XOR EAX,EAX
00712E51  5B                        POP EBX
00712E52  8B E5                     MOV ESP,EBP
00712E54  5D                        POP EBP
00712E55  C2 1C 00                  RET 0x1c
