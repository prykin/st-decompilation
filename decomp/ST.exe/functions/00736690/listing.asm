FUN_00736690:
00736690  55                        PUSH EBP
00736691  8B EC                     MOV EBP,ESP
00736693  51                        PUSH ECX
00736694  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00736697  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
0073669A  8B 4D FC                  MOV ECX,dword ptr [EBP + -0x4]
0073669D  81 E9 A4 03 00 00         SUB ECX,0x3a4
007366A3  89 4D FC                  MOV dword ptr [EBP + -0x4],ECX
007366A6  83 7D FC 12               CMP dword ptr [EBP + -0x4],0x12
007366AA  77 2E                     JA 0x007366da
007366AC  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
007366AF  33 D2                     XOR EDX,EDX
007366B1  8A 90 F4 66 73 00         MOV DL,byte ptr [EAX + 0x7366f4]
switchD_007366b7::switchD:
007366B7  FF 24 95 E0 66 73 00      JMP dword ptr [EDX*0x4 + 0x7366e0]
switchD_007366b7::caseD_3a4:
007366BE  B8 11 04 00 00            MOV EAX,0x411
007366C3  EB 17                     JMP 0x007366dc
switchD_007366b7::caseD_3a8:
007366C5  B8 04 08 00 00            MOV EAX,0x804
007366CA  EB 10                     JMP 0x007366dc
switchD_007366b7::caseD_3b5:
007366CC  B8 12 04 00 00            MOV EAX,0x412
007366D1  EB 09                     JMP 0x007366dc
switchD_007366b7::caseD_3b6:
007366D3  B8 04 04 00 00            MOV EAX,0x404
007366D8  EB 02                     JMP 0x007366dc
switchD_007366b7::caseD_3a5:
007366DA  33 C0                     XOR EAX,EAX
LAB_007366dc:
007366DC  8B E5                     MOV ESP,EBP
007366DE  5D                        POP EBP
007366DF  C3                        RET
