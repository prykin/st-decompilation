__set_errno:
00735E80  55                        PUSH EBP
00735E81  8B EC                     MOV EBP,ESP
00735E83  51                        PUSH ECX
00735E84  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00735E87  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00735E8A  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00735E8E  74 0E                     JZ 0x00735e9e
00735E90  83 7D FC 01               CMP dword ptr [EBP + -0x4],0x1
00735E94  7E 1E                     JLE 0x00735eb4
00735E96  83 7D FC 03               CMP dword ptr [EBP + -0x4],0x3
00735E9A  7E 0E                     JLE 0x00735eaa
00735E9C  EB 16                     JMP 0x00735eb4
LAB_00735e9e:
00735E9E  C7 05 48 71 85 00 21 00 00 00  MOV dword ptr [0x00857148],0x21
00735EA8  EB 0A                     JMP 0x00735eb4
LAB_00735eaa:
00735EAA  C7 05 48 71 85 00 22 00 00 00  MOV dword ptr [0x00857148],0x22
LAB_00735eb4:
00735EB4  8B E5                     MOV ESP,EBP
00735EB6  5D                        POP EBP
00735EB7  C3                        RET
