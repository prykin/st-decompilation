FUN_00589870:
00589870  55                        PUSH EBP
00589871  8B EC                     MOV EBP,ESP
00589873  83 EC 0C                  SUB ESP,0xc
00589876  8B 55 08                  MOV EDX,dword ptr [EBP + 0x8]
00589879  33 C0                     XOR EAX,EAX
0058987B  89 45 F4                  MOV dword ptr [EBP + -0xc],EAX
0058987E  89 45 F8                  MOV dword ptr [EBP + -0x8],EAX
00589881  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
00589884  B8 79 19 8C 02            MOV EAX,0x28c1979
00589889  85 D2                     TEST EDX,EDX
0058988B  7C 10                     JL 0x0058989d
0058988D  F7 EA                     IMUL EDX
0058988F  D1 FA                     SAR EDX,0x1
00589891  8B C2                     MOV EAX,EDX
00589893  C1 E8 1F                  SHR EAX,0x1f
00589896  03 D0                     ADD EDX,EAX
00589898  0F BF D2                  MOVSX EDX,DX
0058989B  EB 0F                     JMP 0x005898ac
LAB_0058989d:
0058989D  F7 EA                     IMUL EDX
0058989F  D1 FA                     SAR EDX,0x1
005898A1  8B C2                     MOV EAX,EDX
005898A3  C1 E8 1F                  SHR EAX,0x1f
005898A6  03 D0                     ADD EDX,EAX
005898A8  0F BF D2                  MOVSX EDX,DX
005898AB  4A                        DEC EDX
LAB_005898ac:
005898AC  89 55 F4                  MOV dword ptr [EBP + -0xc],EDX
005898AF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
005898B2  85 D2                     TEST EDX,EDX
005898B4  B8 79 19 8C 02            MOV EAX,0x28c1979
005898B9  7C 10                     JL 0x005898cb
005898BB  F7 EA                     IMUL EDX
005898BD  D1 FA                     SAR EDX,0x1
005898BF  8B C2                     MOV EAX,EDX
005898C1  C1 E8 1F                  SHR EAX,0x1f
005898C4  03 D0                     ADD EDX,EAX
005898C6  0F BF D2                  MOVSX EDX,DX
005898C9  EB 0F                     JMP 0x005898da
LAB_005898cb:
005898CB  F7 EA                     IMUL EDX
005898CD  D1 FA                     SAR EDX,0x1
005898CF  8B C2                     MOV EAX,EDX
005898D1  C1 E8 1F                  SHR EAX,0x1f
005898D4  03 D0                     ADD EDX,EAX
005898D6  0F BF D2                  MOVSX EDX,DX
005898D9  4A                        DEC EDX
LAB_005898da:
005898DA  8B 41 18                  MOV EAX,dword ptr [ECX + 0x18]
005898DD  89 55 F8                  MOV dword ptr [EBP + -0x8],EDX
005898E0  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
005898E3  8D 4D F4                  LEA ECX,[EBP + -0xc]
005898E6  6A 00                     PUSH 0x0
005898E8  51                        PUSH ECX
005898E9  52                        PUSH EDX
005898EA  6A 00                     PUSH 0x0
005898EC  6A 02                     PUSH 0x2
005898EE  B9 58 76 80 00            MOV ECX,0x807658
005898F3  89 45 FC                  MOV dword ptr [EBP + -0x4],EAX
005898F6  E8 DD B2 E7 FF            CALL 0x00404bd8
005898FB  8B E5                     MOV ESP,EBP
005898FD  5D                        POP EBP
005898FE  C2 0C 00                  RET 0xc
