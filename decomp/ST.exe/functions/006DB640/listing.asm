FUN_006db640:
006DB640  55                        PUSH EBP
006DB641  8B EC                     MOV EBP,ESP
006DB643  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
006DB646  85 C0                     TEST EAX,EAX
006DB648  7D 1E                     JGE 0x006db668
006DB64A  3D 99 FE FF FF            CMP EAX,0xfffffe99
006DB64F  7D 10                     JGE 0x006db661
006DB651  F7 D8                     NEG EAX
006DB653  99                        CDQ
006DB654  B9 68 01 00 00            MOV ECX,0x168
006DB659  F7 F9                     IDIV ECX
006DB65B  8B C1                     MOV EAX,ECX
006DB65D  2B C2                     SUB EAX,EDX
006DB65F  EB 18                     JMP 0x006db679
LAB_006db661:
006DB661  05 68 01 00 00            ADD EAX,0x168
006DB666  EB 11                     JMP 0x006db679
LAB_006db668:
006DB668  3D 68 01 00 00            CMP EAX,0x168
006DB66D  7C 0A                     JL 0x006db679
006DB66F  99                        CDQ
006DB670  B9 68 01 00 00            MOV ECX,0x168
006DB675  F7 F9                     IDIV ECX
006DB677  8B C2                     MOV EAX,EDX
LAB_006db679:
006DB679  3D B4 00 00 00            CMP EAX,0xb4
006DB67E  7E 2A                     JLE 0x006db6aa
006DB680  3D 0E 01 00 00            CMP EAX,0x10e
006DB685  7E 16                     JLE 0x006db69d
006DB687  8D 14 85 00 00 00 00      LEA EDX,[EAX*0x4 + 0x0]
006DB68E  B8 B8 E9 7E 00            MOV EAX,0x7ee9b8
006DB693  2B C2                     SUB EAX,EDX
006DB695  8B 00                     MOV EAX,dword ptr [EAX]
006DB697  F7 D8                     NEG EAX
006DB699  5D                        POP EBP
006DB69A  C2 04 00                  RET 0x4
LAB_006db69d:
006DB69D  8B 04 85 48 E1 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ee148]
006DB6A4  F7 D8                     NEG EAX
006DB6A6  5D                        POP EBP
006DB6A7  C2 04 00                  RET 0x4
LAB_006db6aa:
006DB6AA  83 F8 5A                  CMP EAX,0x5a
006DB6AD  7E 14                     JLE 0x006db6c3
006DB6AF  8D 0C 85 00 00 00 00      LEA ECX,[EAX*0x4 + 0x0]
006DB6B6  BA E8 E6 7E 00            MOV EDX,0x7ee6e8
006DB6BB  2B D1                     SUB EDX,ECX
006DB6BD  8B 02                     MOV EAX,dword ptr [EDX]
006DB6BF  5D                        POP EBP
006DB6C0  C2 04 00                  RET 0x4
LAB_006db6c3:
006DB6C3  8B 04 85 18 E4 7E 00      MOV EAX,dword ptr [EAX*0x4 + 0x7ee418]
006DB6CA  5D                        POP EBP
006DB6CB  C2 04 00                  RET 0x4
