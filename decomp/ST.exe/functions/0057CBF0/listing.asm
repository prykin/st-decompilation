FUN_0057cbf0:
0057CBF0  55                        PUSH EBP
0057CBF1  8B EC                     MOV EBP,ESP
0057CBF3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
0057CBF6  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0057CBF9  83 F9 03                  CMP ECX,0x3
0057CBFC  77 1F                     JA 0x0057cc1d
switchD_0057cbfe::switchD:
0057CBFE  FF 24 8D 24 CC 57 00      JMP dword ptr [ECX*0x4 + 0x57cc24]
switchD_0057cbfe::caseD_0:
0057CC05  83 C0 05                  ADD EAX,0x5
0057CC08  5D                        POP EBP
0057CC09  C2 08 00                  RET 0x8
switchD_0057cbfe::caseD_1:
0057CC0C  83 C0 02                  ADD EAX,0x2
0057CC0F  5D                        POP EBP
0057CC10  C2 08 00                  RET 0x8
switchD_0057cbfe::caseD_2:
0057CC13  83 C0 0A                  ADD EAX,0xa
0057CC16  5D                        POP EBP
0057CC17  C2 08 00                  RET 0x8
switchD_0057cbfe::caseD_3:
0057CC1A  83 C0 03                  ADD EAX,0x3
switchD_0057cbfe::default:
0057CC1D  5D                        POP EBP
0057CC1E  C2 08 00                  RET 0x8
