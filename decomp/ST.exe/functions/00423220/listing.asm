FUN_00423220:
00423220  55                        PUSH EBP
00423221  8B EC                     MOV EBP,ESP
00423223  53                        PUSH EBX
00423224  56                        PUSH ESI
00423225  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00423228  33 D2                     XOR EDX,EDX
0042322A  83 FE 01                  CMP ESI,0x1
0042322D  57                        PUSH EDI
0042322E  74 42                     JZ 0x00423272
00423230  8B 7D 08                  MOV EDI,dword ptr [EBP + 0x8]
00423233  85 F6                     TEST ESI,ESI
00423235  7E 0C                     JLE 0x00423243
00423237  8B C7                     MOV EAX,EDI
00423239  8B DE                     MOV EBX,ESI
LAB_0042323b:
0042323B  03 10                     ADD EDX,dword ptr [EAX]
0042323D  83 C0 2C                  ADD EAX,0x2c
00423240  4B                        DEC EBX
00423241  75 F8                     JNZ 0x0042323b
LAB_00423243:
00423243  8B 01                     MOV EAX,dword ptr [ECX]
00423245  69 C0 6D 4E C6 41         IMUL EAX,EAX,0x41c64e6d
0042324B  05 39 30 00 00            ADD EAX,0x3039
00423250  89 01                     MOV dword ptr [ECX],EAX
00423252  8D 4A 01                  LEA ECX,[EDX + 0x1]
00423255  C1 E8 10                  SHR EAX,0x10
00423258  33 D2                     XOR EDX,EDX
0042325A  F7 F1                     DIV ECX
0042325C  33 C9                     XOR ECX,ECX
0042325E  33 C0                     XOR EAX,EAX
00423260  85 F6                     TEST ESI,ESI
00423262  7E 0E                     JLE 0x00423272
LAB_00423264:
00423264  03 0F                     ADD ECX,dword ptr [EDI]
00423266  3B CA                     CMP ECX,EDX
00423268  7D 0A                     JGE 0x00423274
0042326A  40                        INC EAX
0042326B  83 C7 2C                  ADD EDI,0x2c
0042326E  3B C6                     CMP EAX,ESI
00423270  7C F2                     JL 0x00423264
LAB_00423272:
00423272  33 C0                     XOR EAX,EAX
LAB_00423274:
00423274  5F                        POP EDI
00423275  5E                        POP ESI
00423276  5B                        POP EBX
00423277  5D                        POP EBP
00423278  C2 08 00                  RET 0x8
