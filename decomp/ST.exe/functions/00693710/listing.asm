FUN_00693710:
00693710  55                        PUSH EBP
00693711  8B EC                     MOV EBP,ESP
00693713  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00693716  83 F8 03                  CMP EAX,0x3
00693719  77 63                     JA 0x0069377e
switchD_0069371b::switchD:
0069371B  FF 24 85 80 37 69 00      JMP dword ptr [EAX*0x4 + 0x693780]
switchD_0069371b::caseD_0:
00693722  A1 A0 99 7D 00            MOV EAX,[0x007d99a0]
00693727  6A 00                     PUSH 0x0
00693729  50                        PUSH EAX
0069372A  68 C8 86 7D 00            PUSH 0x7d86c8
0069372F  E8 16 02 D7 FF            CALL 0x0040394a
00693734  83 C4 0C                  ADD ESP,0xc
00693737  5D                        POP EBP
00693738  C3                        RET
switchD_0069371b::caseD_1:
00693739  8B 0D 80 AC 7D 00         MOV ECX,dword ptr [0x007dac80]
0069373F  6A 00                     PUSH 0x0
00693741  51                        PUSH ECX
00693742  68 A8 99 7D 00            PUSH 0x7d99a8
00693747  E8 FE 01 D7 FF            CALL 0x0040394a
0069374C  83 C4 0C                  ADD ESP,0xc
0069374F  5D                        POP EBP
00693750  C3                        RET
switchD_0069371b::caseD_2:
00693751  8B 15 60 BF 7D 00         MOV EDX,dword ptr [0x007dbf60]
00693757  6A 00                     PUSH 0x0
00693759  52                        PUSH EDX
0069375A  68 88 AC 7D 00            PUSH 0x7dac88
0069375F  E8 E6 01 D7 FF            CALL 0x0040394a
00693764  83 C4 0C                  ADD ESP,0xc
00693767  5D                        POP EBP
00693768  C3                        RET
switchD_0069371b::caseD_3:
00693769  A1 40 D2 7D 00            MOV EAX,[0x007dd240]
0069376E  6A 00                     PUSH 0x0
00693770  50                        PUSH EAX
00693771  68 68 BF 7D 00            PUSH 0x7dbf68
00693776  E8 CF 01 D7 FF            CALL 0x0040394a
0069377B  83 C4 0C                  ADD ESP,0xc
switchD_0069371b::default:
0069377E  5D                        POP EBP
0069377F  C3                        RET
