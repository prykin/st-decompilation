__ismbbkana:
007445F0  55                        PUSH EBP
007445F1  8B EC                     MOV EBP,ESP
007445F3  51                        PUSH ECX
007445F4  81 3D E0 A2 85 00 A4 03 00 00  CMP dword ptr [0x0085a2e0],0x3a4
007445FE  75 1D                     JNZ 0x0074461d
00744600  6A 03                     PUSH 0x3
00744602  6A 00                     PUSH 0x0
00744604  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00744607  50                        PUSH EAX
00744608  E8 23 00 00 00            CALL 0x00744630
0074460D  83 C4 0C                  ADD ESP,0xc
00744610  85 C0                     TEST EAX,EAX
00744612  74 09                     JZ 0x0074461d
00744614  C7 45 FC 01 00 00 00      MOV dword ptr [EBP + -0x4],0x1
0074461B  EB 07                     JMP 0x00744624
LAB_0074461d:
0074461D  C7 45 FC 00 00 00 00      MOV dword ptr [EBP + -0x4],0x0
LAB_00744624:
00744624  8B 45 FC                  MOV EAX,dword ptr [EBP + -0x4]
00744627  8B E5                     MOV ESP,EBP
00744629  5D                        POP EBP
0074462A  C3                        RET
