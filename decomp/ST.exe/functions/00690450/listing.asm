FUN_00690450:
00690450  55                        PUSH EBP
00690451  8B EC                     MOV EBP,ESP
00690453  56                        PUSH ESI
00690454  57                        PUSH EDI
00690455  8B F9                     MOV EDI,ECX
00690457  33 F6                     XOR ESI,ESI
00690459  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0069045F  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
00690462  85 C0                     TEST EAX,EAX
00690464  7E 42                     JLE 0x006904a8
00690466  53                        PUSH EBX
00690467  8B 5D 0C                  MOV EBX,dword ptr [EBP + 0xc]
0069046A  3B F0                     CMP ESI,EAX
LAB_0069046c:
0069046C  73 2B                     JNC 0x00690499
0069046E  8B 41 08                  MOV EAX,dword ptr [ECX + 0x8]
00690471  8B 51 1C                  MOV EDX,dword ptr [ECX + 0x1c]
00690474  0F AF C6                  IMUL EAX,ESI
00690477  03 C2                     ADD EAX,EDX
00690479  85 C0                     TEST EAX,EAX
0069047B  74 1C                     JZ 0x00690499
0069047D  8B 40 04                  MOV EAX,dword ptr [EAX + 0x4]
00690480  85 C0                     TEST EAX,EAX
00690482  74 15                     JZ 0x00690499
00690484  66 8B 4D 08               MOV CX,word ptr [EBP + 0x8]
00690488  66 39 48 7B               CMP word ptr [EAX + 0x7b],CX
0069048C  75 0B                     JNZ 0x00690499
0069048E  85 C0                     TEST EAX,EAX
00690490  74 07                     JZ 0x00690499
00690492  8B 10                     MOV EDX,dword ptr [EAX]
00690494  53                        PUSH EBX
00690495  8B C8                     MOV ECX,EAX
00690497  FF 12                     CALL dword ptr [EDX]
LAB_00690499:
00690499  8B 8F A5 00 00 00         MOV ECX,dword ptr [EDI + 0xa5]
0069049F  46                        INC ESI
006904A0  8B 41 0C                  MOV EAX,dword ptr [ECX + 0xc]
006904A3  3B F0                     CMP ESI,EAX
006904A5  7C C5                     JL 0x0069046c
006904A7  5B                        POP EBX
LAB_006904a8:
006904A8  5F                        POP EDI
006904A9  5E                        POP ESI
006904AA  5D                        POP EBP
006904AB  C2 08 00                  RET 0x8
