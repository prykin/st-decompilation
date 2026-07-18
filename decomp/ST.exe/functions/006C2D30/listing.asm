FUN_006c2d30:
006C2D30  55                        PUSH EBP
006C2D31  8B EC                     MOV EBP,ESP
006C2D33  56                        PUSH ESI
006C2D34  8B 75 08                  MOV ESI,dword ptr [EBP + 0x8]
006C2D37  85 F6                     TEST ESI,ESI
006C2D39  74 0E                     JZ 0x006c2d49
006C2D3B  83 3E 00                  CMP dword ptr [ESI],0x0
006C2D3E  74 09                     JZ 0x006c2d49
006C2D40  F7 46 08 00 00 00 40      TEST dword ptr [ESI + 0x8],0x40000000
006C2D47  75 17                     JNZ 0x006c2d60
LAB_006c2d49:
006C2D49  A1 7C D7 7E 00            MOV EAX,[0x007ed77c]
006C2D4E  68 F2 00 00 00            PUSH 0xf2
006C2D53  68 64 DE 7E 00            PUSH 0x7ede64
006C2D58  50                        PUSH EAX
006C2D59  6A CC                     PUSH -0x34
006C2D5B  E8 E0 30 FE FF            CALL 0x006a5e40
LAB_006c2d60:
006C2D60  8B 46 08                  MOV EAX,dword ptr [ESI + 0x8]
006C2D63  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006C2D66  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006C2D69  89 4E 0C                  MOV dword ptr [ESI + 0xc],ECX
006C2D6C  A8 02                     TEST AL,0x2
006C2D6E  89 56 10                  MOV dword ptr [ESI + 0x10],EDX
006C2D71  75 0C                     JNZ 0x006c2d7f
006C2D73  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
006C2D76  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
006C2D79  89 4E 14                  MOV dword ptr [ESI + 0x14],ECX
006C2D7C  89 56 18                  MOV dword ptr [ESI + 0x18],EDX
LAB_006c2d7f:
006C2D7F  0D 00 00 00 04            OR EAX,0x4000000
006C2D84  89 46 08                  MOV dword ptr [ESI + 0x8],EAX
006C2D87  5E                        POP ESI
006C2D88  5D                        POP EBP
006C2D89  C2 14 00                  RET 0x14
