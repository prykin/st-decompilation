FUN_006301d0:
006301D0  55                        PUSH EBP
006301D1  8B EC                     MOV EBP,ESP
006301D3  56                        PUSH ESI
006301D4  57                        PUSH EDI
006301D5  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
006301D8  33 C0                     XOR EAX,EAX
006301DA  33 D2                     XOR EDX,EDX
006301DC  8D B1 E5 01 00 00         LEA ESI,[ECX + 0x1e5]
LAB_006301e2:
006301E2  8B 0E                     MOV ECX,dword ptr [ESI]
006301E4  85 C9                     TEST ECX,ECX
006301E6  74 13                     JZ 0x006301fb
006301E8  8B 49 04                  MOV ECX,dword ptr [ECX + 0x4]
006301EB  83 F9 03                  CMP ECX,0x3
006301EE  74 05                     JZ 0x006301f5
006301F0  83 F9 06                  CMP ECX,0x6
006301F3  75 06                     JNZ 0x006301fb
LAB_006301f5:
006301F5  89 17                     MOV dword ptr [EDI],EDX
006301F7  40                        INC EAX
006301F8  83 C7 04                  ADD EDI,0x4
LAB_006301fb:
006301FB  42                        INC EDX
006301FC  83 C6 04                  ADD ESI,0x4
006301FF  83 FA 05                  CMP EDX,0x5
00630202  7C DE                     JL 0x006301e2
00630204  5F                        POP EDI
00630205  5E                        POP ESI
00630206  5D                        POP EBP
00630207  C2 04 00                  RET 0x4
