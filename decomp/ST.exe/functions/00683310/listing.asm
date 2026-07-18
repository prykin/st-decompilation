FUN_00683310:
00683310  E8 51 E0 D7 FF            CALL 0x00401366
00683315  A1 18 2D 7D 00            MOV EAX,[0x007d2d18]
0068331A  83 C0 E2                  ADD EAX,-0x1e
0068331D  83 F8 15                  CMP EAX,0x15
00683320  77 2D                     JA 0x0068334f
00683322  33 C9                     XOR ECX,ECX
00683324  8A 88 6C 33 68 00         MOV CL,byte ptr [EAX + 0x68336c]
switchD_0068332a::switchD:
0068332A  FF 24 8D 50 33 68 00      JMP dword ptr [ECX*0x4 + 0x683350]
switchD_0068332a::caseD_1e:
00683331  E9 26 F9 D7 FF            JMP 0x00402c5c
switchD_0068332a::caseD_2e:
00683336  E9 B1 0E D8 FF            JMP 0x004041ec
switchD_0068332a::caseD_2f:
0068333B  E9 8D E2 D7 FF            JMP 0x004015cd
switchD_0068332a::caseD_27:
00683340  E9 24 DD D7 FF            JMP 0x00401069
switchD_0068332a::caseD_28:
00683345  E9 F9 1B D8 FF            JMP 0x00404f43
switchD_0068332a::caseD_33:
0068334A  E9 7D E3 D7 FF            JMP 0x004016cc
switchD_0068332a::caseD_1f:
0068334F  C3                        RET
