CGenerate::sub_00696740:
00696740  55                        PUSH EBP
00696741  8B EC                     MOV EBP,ESP
00696743  53                        PUSH EBX
00696744  8B D9                     MOV EBX,ECX
00696746  56                        PUSH ESI
00696747  57                        PUSH EDI
00696748  8B 83 53 58 00 00         MOV EAX,dword ptr [EBX + 0x5853]
0069674E  85 C0                     TEST EAX,EAX
00696750  74 1A                     JZ 0x0069676c
00696752  8B 78 0C                  MOV EDI,dword ptr [EAX + 0xc]
00696755  33 F6                     XOR ESI,ESI
00696757  85 FF                     TEST EDI,EDI
00696759  7E 11                     JLE 0x0069676c
LAB_0069675b:
0069675B  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0069675E  8B CB                     MOV ECX,EBX
00696760  50                        PUSH EAX
00696761  56                        PUSH ESI
00696762  E8 A0 D8 D6 FF            CALL 0x00404007
00696767  46                        INC ESI
00696768  3B F7                     CMP ESI,EDI
0069676A  7C EF                     JL 0x0069675b
LAB_0069676c:
0069676C  5F                        POP EDI
0069676D  5E                        POP ESI
0069676E  5B                        POP EBX
0069676F  5D                        POP EBP
00696770  C2 04 00                  RET 0x4
