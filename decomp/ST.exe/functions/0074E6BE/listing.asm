FUN_0074e6be:
0074E6BE  55                        PUSH EBP
0074E6BF  8B EC                     MOV EBP,ESP
0074E6C1  56                        PUSH ESI
0074E6C2  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074E6C5  57                        PUSH EDI
0074E6C6  6A 10                     PUSH 0x10
0074E6C8  59                        POP ECX
0074E6C9  BF 10 12 7A 00            MOV EDI,0x7a1210
0074E6CE  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E6D1  33 C0                     XOR EAX,EAX
0074E6D3  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E6D5  75 0E                     JNZ 0x0074e6e5
0074E6D7  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E6DA  83 C0 FC                  ADD EAX,-0x4
0074E6DD  50                        PUSH EAX
0074E6DE  E8 C3 D1 FF FF            CALL 0x0074b8a6
0074E6E3  EB 0B                     JMP 0x0074e6f0
LAB_0074e6e5:
0074E6E5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E6E8  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074E6EB  E8 20 D1 FF FF            CALL 0x0074b810
LAB_0074e6f0:
0074E6F0  5F                        POP EDI
0074E6F1  5E                        POP ESI
0074E6F2  5D                        POP EBP
0074E6F3  C2 0C 00                  RET 0xc
