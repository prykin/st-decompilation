FUN_0074e57d:
0074E57D  55                        PUSH EBP
0074E57E  8B EC                     MOV EBP,ESP
0074E580  56                        PUSH ESI
0074E581  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074E584  57                        PUSH EDI
0074E585  6A 10                     PUSH 0x10
0074E587  59                        POP ECX
0074E588  BF D8 10 7A 00            MOV EDI,0x7a10d8
0074E58D  33 C0                     XOR EAX,EAX
0074E58F  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E591  74 21                     JZ 0x0074e5b4
0074E593  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074E596  6A 10                     PUSH 0x10
0074E598  59                        POP ECX
0074E599  BF C8 1D 7A 00            MOV EDI,0x7a1dc8
0074E59E  33 C0                     XOR EAX,EAX
0074E5A0  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074E5A2  74 10                     JZ 0x0074e5b4
0074E5A4  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E5A7  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074E5AA  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074E5AD  E8 5E D2 FF FF            CALL 0x0074b810
0074E5B2  EB 0F                     JMP 0x0074e5c3
LAB_0074e5b4:
0074E5B4  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074E5B7  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074E5BA  83 C0 FC                  ADD EAX,-0x4
0074E5BD  50                        PUSH EAX
0074E5BE  E8 E3 D2 FF FF            CALL 0x0074b8a6
LAB_0074e5c3:
0074E5C3  5F                        POP EDI
0074E5C4  5E                        POP ESI
0074E5C5  5D                        POP EBP
0074E5C6  C2 0C 00                  RET 0xc
