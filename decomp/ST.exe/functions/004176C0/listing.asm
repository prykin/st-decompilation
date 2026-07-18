FUN_004176c0:
004176C0  55                        PUSH EBP
004176C1  8B EC                     MOV EBP,ESP
004176C3  53                        PUSH EBX
004176C4  56                        PUSH ESI
004176C5  66 8B B1 86 00 00 00      MOV SI,word ptr [ECX + 0x86]
004176CC  57                        PUSH EDI
004176CD  0F BF 7D 08               MOVSX EDI,word ptr [EBP + 0x8]
004176D1  8B C7                     MOV EAX,EDI
004176D3  0F BF CE                  MOVSX ECX,SI
004176D6  99                        CDQ
004176D7  F7 F9                     IDIV ECX
004176D9  8B C8                     MOV ECX,EAX
004176DB  8B C7                     MOV EAX,EDI
004176DD  0F AF CE                  IMUL ECX,ESI
004176E0  03 F1                     ADD ESI,ECX
004176E2  0F BF D6                  MOVSX EDX,SI
004176E5  2B C2                     SUB EAX,EDX
004176E7  99                        CDQ
004176E8  8B D8                     MOV EBX,EAX
004176EA  8B C7                     MOV EAX,EDI
004176EC  33 DA                     XOR EBX,EDX
004176EE  2B DA                     SUB EBX,EDX
004176F0  0F BF D1                  MOVSX EDX,CX
004176F3  2B C2                     SUB EAX,EDX
004176F5  99                        CDQ
004176F6  33 C2                     XOR EAX,EDX
004176F8  2B C2                     SUB EAX,EDX
004176FA  3B C3                     CMP EAX,EBX
004176FC  7C 02                     JL 0x00417700
004176FE  8B CE                     MOV ECX,ESI
LAB_00417700:
00417700  66 8B C1                  MOV AX,CX
00417703  5F                        POP EDI
00417704  66 2D 68 01               SUB AX,0x168
00417708  5E                        POP ESI
00417709  66 F7 D8                  NEG AX
0041770C  1B C0                     SBB EAX,EAX
0041770E  5B                        POP EBX
0041770F  23 C1                     AND EAX,ECX
00417711  5D                        POP EBP
00417712  C2 04 00                  RET 0x4
