FUN_0074f1a9:
0074F1A9  55                        PUSH EBP
0074F1AA  8B EC                     MOV EBP,ESP
0074F1AC  56                        PUSH ESI
0074F1AD  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074F1B0  57                        PUSH EDI
0074F1B1  6A 10                     PUSH 0x10
0074F1B3  59                        POP ECX
0074F1B4  BF 00 12 7A 00            MOV EDI,0x7a1200
0074F1B9  33 C0                     XOR EAX,EAX
0074F1BB  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F1BD  75 1D                     JNZ 0x0074f1dc
0074F1BF  39 45 10                  CMP dword ptr [EBP + 0x10],EAX
0074F1C2  75 07                     JNZ 0x0074f1cb
0074F1C4  B8 03 40 00 80            MOV EAX,0x80004003
0074F1C9  EB 1F                     JMP 0x0074f1ea
LAB_0074f1cb:
0074F1CB  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F1CE  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F1D1  83 C0 FC                  ADD EAX,-0x4
0074F1D4  50                        PUSH EAX
0074F1D5  E8 CC C6 FF FF            CALL 0x0074b8a6
0074F1DA  EB 0E                     JMP 0x0074f1ea
LAB_0074f1dc:
0074F1DC  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F1DF  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F1E2  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074F1E5  E8 26 C6 FF FF            CALL 0x0074b810
LAB_0074f1ea:
0074F1EA  5F                        POP EDI
0074F1EB  5E                        POP ESI
0074F1EC  5D                        POP EBP
0074F1ED  C2 0C 00                  RET 0xc
