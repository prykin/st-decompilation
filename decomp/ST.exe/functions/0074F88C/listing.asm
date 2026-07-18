FUN_0074f88c:
0074F88C  55                        PUSH EBP
0074F88D  8B EC                     MOV EBP,ESP
0074F88F  56                        PUSH ESI
0074F890  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074F893  57                        PUSH EDI
0074F894  6A 10                     PUSH 0x10
0074F896  59                        POP ECX
0074F897  BF F8 1D 7A 00            MOV EDI,0x7a1df8
0074F89C  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074F89F  33 C0                     XOR EAX,EAX
0074F8A1  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074F8A3  75 0E                     JNZ 0x0074f8b3
0074F8A5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074F8A8  83 C0 FC                  ADD EAX,-0x4
0074F8AB  50                        PUSH EAX
0074F8AC  E8 F5 BF FF FF            CALL 0x0074b8a6
0074F8B1  EB 0B                     JMP 0x0074f8be
LAB_0074f8b3:
0074F8B3  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074F8B6  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074F8B9  E8 52 BF FF FF            CALL 0x0074b810
LAB_0074f8be:
0074F8BE  5F                        POP EDI
0074F8BF  5E                        POP ESI
0074F8C0  5D                        POP EBP
0074F8C1  C2 0C 00                  RET 0xc
