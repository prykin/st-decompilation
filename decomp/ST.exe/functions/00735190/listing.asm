__cfltcvt:
00735190  55                        PUSH EBP
00735191  8B EC                     MOV EBP,ESP
00735193  83 7D 10 65               CMP dword ptr [EBP + 0x10],0x65
00735197  74 06                     JZ 0x0073519f
00735199  83 7D 10 45               CMP dword ptr [EBP + 0x10],0x45
0073519D  75 1A                     JNZ 0x007351b9
LAB_0073519f:
0073519F  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
007351A2  50                        PUSH EAX
007351A3  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007351A6  51                        PUSH ECX
007351A7  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007351AA  52                        PUSH EDX
007351AB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007351AE  50                        PUSH EAX
007351AF  E8 1C FB FF FF            CALL 0x00734cd0
007351B4  83 C4 10                  ADD ESP,0x10
007351B7  EB 34                     JMP 0x007351ed
LAB_007351b9:
007351B9  83 7D 10 66               CMP dword ptr [EBP + 0x10],0x66
007351BD  75 16                     JNZ 0x007351d5
007351BF  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
007351C2  51                        PUSH ECX
007351C3  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
007351C6  52                        PUSH EDX
007351C7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007351CA  50                        PUSH EAX
007351CB  E8 C0 FC FF FF            CALL 0x00734e90
007351D0  83 C4 0C                  ADD ESP,0xc
007351D3  EB 18                     JMP 0x007351ed
LAB_007351d5:
007351D5  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
007351D8  51                        PUSH ECX
007351D9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
007351DC  52                        PUSH EDX
007351DD  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
007351E0  50                        PUSH EAX
007351E1  8B 4D 08                  MOV ECX,dword ptr [EBP + 0x8]
007351E4  51                        PUSH ECX
007351E5  E8 36 FE FF FF            CALL 0x00735020
007351EA  83 C4 10                  ADD ESP,0x10
LAB_007351ed:
007351ED  5D                        POP EBP
007351EE  C3                        RET
