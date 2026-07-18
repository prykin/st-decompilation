FUN_00749024:
00749024  56                        PUSH ESI
00749025  57                        PUSH EDI
00749026  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
0074902A  8B F1                     MOV ESI,ECX
0074902C  FF 74 24 10               PUSH dword ptr [ESP + 0x10]
00749030  E8 83 27 00 00            CALL 0x0074b7b8
00749035  8D 46 10                  LEA EAX,[ESI + 0x10]
00749038  50                        PUSH EAX
00749039  FF 15 88 BB 85 00         CALL dword ptr [0x0085bb88]
0074903F  33 FF                     XOR EDI,EDI
00749041  39 7C 24 18               CMP dword ptr [ESP + 0x18],EDI
00749045  89 7E 28                  MOV dword ptr [ESI + 0x28],EDI
00749048  89 7E 2C                  MOV dword ptr [ESI + 0x2c],EDI
0074904B  89 7E 30                  MOV dword ptr [ESI + 0x30],EDI
0074904E  89 7E 34                  MOV dword ptr [ESI + 0x34],EDI
00749051  89 7E 38                  MOV dword ptr [ESI + 0x38],EDI
00749054  89 7E 3C                  MOV dword ptr [ESI + 0x3c],EDI
00749057  89 7E 40                  MOV dword ptr [ESI + 0x40],EDI
0074905A  89 7E 44                  MOV dword ptr [ESI + 0x44],EDI
0074905D  89 7E 48                  MOV dword ptr [ESI + 0x48],EDI
00749060  89 7E 4C                  MOV dword ptr [ESI + 0x4c],EDI
00749063  89 7E 50                  MOV dword ptr [ESI + 0x50],EDI
00749066  89 7E 54                  MOV dword ptr [ESI + 0x54],EDI
00749069  74 1F                     JZ 0x0074908a
0074906B  57                        PUSH EDI
0074906C  68 FF FF FF 7F            PUSH 0x7fffffff
00749071  57                        PUSH EDI
00749072  57                        PUSH EDI
00749073  FF 15 88 BC 85 00         CALL dword ptr [0x0085bc88]
00749079  3B C7                     CMP EAX,EDI
0074907B  89 46 30                  MOV dword ptr [ESI + 0x30],EAX
0074907E  75 0A                     JNZ 0x0074908a
00749080  8B 44 24 14               MOV EAX,dword ptr [ESP + 0x14]
00749084  C7 00 0E 00 07 80         MOV dword ptr [EAX],0x8007000e
LAB_0074908a:
0074908A  8B C6                     MOV EAX,ESI
0074908C  5F                        POP EDI
0074908D  5E                        POP ESI
0074908E  C2 10 00                  RET 0x10
