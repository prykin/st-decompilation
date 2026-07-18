FUN_0074f77c:
0074F77C  55                        PUSH EBP
0074F77D  8B EC                     MOV EBP,ESP
0074F77F  56                        PUSH ESI
0074F780  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074F783  57                        PUSH EDI
0074F784  6A 10                     PUSH 0x10
0074F786  59                        POP ECX
0074F787  BF E8 1D 7A 00            MOV EDI,0x7a1de8
0074F78C  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F78F  33 C0                     XOR EAX,EAX
0074F791  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F793  75 0E                     JNZ 0x0074f7a3
0074F795  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F798  83 C0 FC                  ADD EAX,-0x4
0074F79B  50                        PUSH EAX
0074F79C  E8 05 C1 FF FF            CALL 0x0074b8a6
0074F7A1  EB 0B                     JMP 0x0074f7ae
LAB_0074f7a3:
0074F7A3  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F7A6  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074F7A9  E8 62 C0 FF FF            CALL 0x0074b810
LAB_0074f7ae:
0074F7AE  5F                        POP EDI
0074F7AF  5E                        POP ESI
0074F7B0  5D                        POP EBP
0074F7B1  C2 0C 00                  RET 0xc
