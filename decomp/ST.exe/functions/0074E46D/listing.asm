FUN_0074e46d:
0074E46D  55                        PUSH EBP
0074E46E  8B EC                     MOV EBP,ESP
0074E470  56                        PUSH ESI
0074E471  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074E474  57                        PUSH EDI
0074E475  6A 10                     PUSH 0x10
0074E477  59                        POP ECX
0074E478  BF 20 12 7A 00            MOV EDI,0x7a1220
0074E47D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E480  33 C0                     XOR EAX,EAX
0074E482  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E484  75 0E                     JNZ 0x0074e494
0074E486  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E489  83 C0 FC                  ADD EAX,-0x4
0074E48C  50                        PUSH EAX
0074E48D  E8 14 D4 FF FF            CALL 0x0074b8a6
0074E492  EB 0B                     JMP 0x0074e49f
LAB_0074e494:
0074E494  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E497  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074E49A  E8 71 D3 FF FF            CALL 0x0074b810
LAB_0074e49f:
0074E49F  5F                        POP EDI
0074E4A0  5E                        POP ESI
0074E4A1  5D                        POP EBP
0074E4A2  C2 0C 00                  RET 0xc
