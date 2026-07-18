FUN_00606fd0:
00606FD0  55                        PUSH EBP
00606FD1  8B EC                     MOV EBP,ESP
00606FD3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00606FD6  48                        DEC EAX
00606FD7  83 F8 17                  CMP EAX,0x17
00606FDA  0F 87 4A 01 00 00         JA 0x0060712a
00606FE0  33 C9                     XOR ECX,ECX
00606FE2  8A 88 78 71 60 00         MOV CL,byte ptr [EAX + 0x607178]
switchD_00606fe8::switchD:
00606FE8  FF 24 8D 58 71 60 00      JMP dword ptr [ECX*0x4 + 0x607158]
switchD_00606fe8::caseD_1:
00606FEF  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00606FF2  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00606FF5  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00606FF8  C7 02 04 00 00 00         MOV dword ptr [EDX],0x4
00606FFE  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607001  C7 00 00 00 00 00         MOV dword ptr [EAX],0x0
00607007  C7 01 05 00 00 00         MOV dword ptr [ECX],0x5
0060700D  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
00607013  B8 50 00 00 00            MOV EAX,0x50
00607018  5D                        POP EBP
00607019  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_2:
0060701C  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060701F  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00607022  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00607025  C7 00 06 00 00 00         MOV dword ptr [EAX],0x6
0060702B  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060702E  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00607034  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
0060703A  C7 00 01 00 00 00         MOV dword ptr [EAX],0x1
00607040  B8 78 00 00 00            MOV EAX,0x78
00607045  5D                        POP EBP
00607046  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_d:
00607049  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
0060704C  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
0060704F  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
00607052  C7 01 06 00 00 00         MOV dword ptr [ECX],0x6
00607058  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
0060705B  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00607061  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00607067  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
0060706D  B8 78 00 00 00            MOV EAX,0x78
00607072  5D                        POP EBP
00607073  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_5:
00607076  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00607079  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
0060707C  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
0060707F  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
00607085  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
00607088  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060708E  C7 01 03 00 00 00         MOV dword ptr [ECX],0x3
00607094  C7 02 01 00 00 00         MOV dword ptr [EDX],0x1
0060709A  B8 B4 00 00 00            MOV EAX,0xb4
0060709F  5D                        POP EBP
006070A0  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_10:
006070A3  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
006070A6  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
006070A9  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
006070AC  C7 00 06 00 00 00         MOV dword ptr [EAX],0x6
006070B2  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
006070B5  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
006070BB  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006070C1  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
006070C7  B8 B4 00 00 00            MOV EAX,0xb4
006070CC  5D                        POP EBP
006070CD  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_3:
006070D0  8B 4D 0C                  MOV ECX,dword ptr [EBP + 0xc]
006070D3  8B 55 10                  MOV EDX,dword ptr [EBP + 0x10]
006070D6  8B 45 14                  MOV EAX,dword ptr [EBP + 0x14]
006070D9  C7 01 07 00 00 00         MOV dword ptr [ECX],0x7
006070DF  8B 4D 18                  MOV ECX,dword ptr [EBP + 0x18]
006070E2  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
006070E8  C7 00 05 00 00 00         MOV dword ptr [EAX],0x5
006070EE  C7 01 01 00 00 00         MOV dword ptr [ECX],0x1
006070F4  B8 D2 00 00 00            MOV EAX,0xd2
006070F9  5D                        POP EBP
006070FA  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_f:
006070FD  8B 55 0C                  MOV EDX,dword ptr [EBP + 0xc]
00607100  8B 45 10                  MOV EAX,dword ptr [EBP + 0x10]
00607103  8B 4D 14                  MOV ECX,dword ptr [EBP + 0x14]
00607106  C7 02 07 00 00 00         MOV dword ptr [EDX],0x7
0060710C  8B 55 18                  MOV EDX,dword ptr [EBP + 0x18]
0060710F  C7 00 03 00 00 00         MOV dword ptr [EAX],0x3
00607115  C7 01 05 00 00 00         MOV dword ptr [ECX],0x5
0060711B  C7 02 02 00 00 00         MOV dword ptr [EDX],0x2
00607121  B8 D2 00 00 00            MOV EAX,0xd2
00607126  5D                        POP EBP
00607127  C2 14 00                  RET 0x14
switchD_00606fe8::caseD_9:
0060712A  8B 45 0C                  MOV EAX,dword ptr [EBP + 0xc]
0060712D  8B 4D 10                  MOV ECX,dword ptr [EBP + 0x10]
00607130  8B 55 14                  MOV EDX,dword ptr [EBP + 0x14]
00607133  C7 00 06 00 00 00         MOV dword ptr [EAX],0x6
00607139  8B 45 18                  MOV EAX,dword ptr [EBP + 0x18]
0060713C  C7 01 02 00 00 00         MOV dword ptr [ECX],0x2
00607142  C7 02 03 00 00 00         MOV dword ptr [EDX],0x3
00607148  C7 00 02 00 00 00         MOV dword ptr [EAX],0x2
0060714E  B8 28 00 00 00            MOV EAX,0x28
00607153  5D                        POP EBP
00607154  C2 14 00                  RET 0x14
