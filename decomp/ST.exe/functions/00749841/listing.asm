FUN_00749841:
00749841  8B 44 24 04               MOV EAX,dword ptr [ESP + 0x4]
00749845  8B 48 08                  MOV ECX,dword ptr [EAX + 0x8]
00749848  0F B7 50 0E               MOVZX EDX,word ptr [EAX + 0xe]
0074984C  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
0074984F  85 C9                     TEST ECX,ECX
00749851  7D 15                     JGE 0x00749868
00749853  0F AF C2                  IMUL EAX,EDX
00749856  83 C0 1F                  ADD EAX,0x1f
00749859  C1 E8 03                  SHR EAX,0x3
0074985C  25 FC FF FF 1F            AND EAX,0x1ffffffc
00749861  0F AF C1                  IMUL EAX,ECX
00749864  F7 D8                     NEG EAX
00749866  EB 11                     JMP 0x00749879
LAB_00749868:
00749868  0F AF C2                  IMUL EAX,EDX
0074986B  83 C0 1F                  ADD EAX,0x1f
0074986E  C1 E8 03                  SHR EAX,0x3
00749871  25 FC FF FF 1F            AND EAX,0x1ffffffc
00749876  0F AF C1                  IMUL EAX,ECX
LAB_00749879:
00749879  C2 04 00                  RET 0x4
