OptPanelTy::UpdateObjectives:
005380E0  55                        PUSH EBP
005380E1  8B EC                     MOV EBP,ESP
005380E3  83 EC 48                  SUB ESP,0x48
005380E6  A1 F8 8D 85 00            MOV EAX,[0x00858df8]
005380EB  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
005380EE  56                        PUSH ESI
005380EF  8D 55 BC                  LEA EDX,[EBP + -0x44]
005380F2  8D 4D B8                  LEA ECX,[EBP + -0x48]
005380F5  6A 00                     PUSH 0x0
005380F7  52                        PUSH EDX
005380F8  89 45 B8                  MOV dword ptr [EBP + -0x48],EAX
005380FB  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00538101  E8 EA 56 1F 00            CALL 0x0072d7f0
00538106  8B F0                     MOV ESI,EAX
00538108  83 C4 08                  ADD ESP,0x8
0053810B  85 F6                     TEST ESI,ESI
0053810D  75 26                     JNZ 0x00538135
0053810F  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
00538112  E8 23 C3 EC FF            CALL 0x0040443a
00538117  8B 0D 90 16 80 00         MOV ECX,dword ptr [0x00801690]
0053811D  85 C9                     TEST ECX,ECX
0053811F  74 07                     JZ 0x00538128
00538121  6A 07                     PUSH 0x7
00538123  E8 10 AC EC FF            CALL 0x00402d38
LAB_00538128:
00538128  8B 45 B8                  MOV EAX,dword ptr [EBP + -0x48]
0053812B  A3 F8 8D 85 00            MOV [0x00858df8],EAX
00538130  5E                        POP ESI
00538131  8B E5                     MOV ESP,EBP
00538133  5D                        POP EBP
00538134  C3                        RET
LAB_00538135:
00538135  8B 4D B8                  MOV ECX,dword ptr [EBP + -0x48]
00538138  68 6C 73 7C 00            PUSH 0x7c736c
0053813D  68 CC 4C 7A 00            PUSH 0x7a4ccc
00538142  56                        PUSH ESI
00538143  6A 00                     PUSH 0x0
00538145  68 00 08 00 00            PUSH 0x800
0053814A  68 A0 70 7C 00            PUSH 0x7c70a0
0053814F  89 0D F8 8D 85 00         MOV dword ptr [0x00858df8],ECX
00538155  E8 76 53 17 00            CALL 0x006ad4d0
0053815A  83 C4 18                  ADD ESP,0x18
0053815D  85 C0                     TEST EAX,EAX
0053815F  74 01                     JZ 0x00538162
00538161  CC                        INT3
LAB_00538162:
00538162  68 00 08 00 00            PUSH 0x800
00538167  68 A0 70 7C 00            PUSH 0x7c70a0
0053816C  6A 00                     PUSH 0x0
0053816E  56                        PUSH ESI
0053816F  E8 CC DC 16 00            CALL 0x006a5e40
00538174  5E                        POP ESI
00538175  8B E5                     MOV ESP,EBP
00538177  5D                        POP EBP
00538178  C3                        RET
