FUN_006b40e0:
006B40E0  55                        PUSH EBP
006B40E1  8B EC                     MOV EBP,ESP
006B40E3  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
006B40E6  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
006B40E9  8B 81 DC 01 00 00         MOV EAX,dword ptr [ECX + 0x1dc]
006B40EF  89 91 DC 01 00 00         MOV dword ptr [ECX + 0x1dc],EDX
006B40F5  3B C2                     CMP EAX,EDX
006B40F7  74 11                     JZ 0x006b410a
006B40F9  BA 01 00 00 00            MOV EDX,0x1
006B40FE  89 91 B8 01 00 00         MOV dword ptr [ECX + 0x1b8],EDX
006B4104  89 91 B4 01 00 00         MOV dword ptr [ECX + 0x1b4],EDX
LAB_006b410a:
006B410A  5D                        POP EBP
006B410B  C2 08 00                  RET 0x8
