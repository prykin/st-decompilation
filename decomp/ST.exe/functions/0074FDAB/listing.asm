FUN_0074fdab:
0074FDAB  55                        PUSH EBP
0074FDAC  8B EC                     MOV EBP,ESP
0074FDAE  56                        PUSH ESI
0074FDAF  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074FDB2  57                        PUSH EDI
0074FDB3  6A 10                     PUSH 0x10
0074FDB5  59                        POP ECX
0074FDB6  BF 28 1E 7A 00            MOV EDI,0x7a1e28
0074FDBB  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074FDBE  33 C0                     XOR EAX,EAX
0074FDC0  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074FDC2  75 16                     JNZ 0x0074fdda
0074FDC4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074FDC7  8B C8                     MOV ECX,EAX
0074FDC9  83 C0 0C                  ADD EAX,0xc
0074FDCC  F7 D9                     NEG ECX
0074FDCE  1B C9                     SBB ECX,ECX
0074FDD0  23 C8                     AND ECX,EAX
0074FDD2  51                        PUSH ECX
0074FDD3  E8 CE BA FF FF            CALL 0x0074b8a6
0074FDD8  EB 0B                     JMP 0x0074fde5
LAB_0074fdda:
0074FDDA  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074FDDD  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074FDE0  E8 2B BA FF FF            CALL 0x0074b810
LAB_0074fde5:
0074FDE5  5F                        POP EDI
0074FDE6  5E                        POP ESI
0074FDE7  5D                        POP EBP
0074FDE8  C2 0C 00                  RET 0xc
