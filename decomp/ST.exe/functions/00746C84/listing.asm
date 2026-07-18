FUN_00746c84:
00746C84  55                        PUSH EBP
00746C85  8B EC                     MOV EBP,ESP
00746C87  56                        PUSH ESI
00746C88  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00746C8B  57                        PUSH EDI
00746C8C  6A 10                     PUSH 0x10
00746C8E  59                        POP ECX
00746C8F  BF C0 1A 7A 00            MOV EDI,0x7a1ac0
00746C94  33 C0                     XOR EAX,EAX
00746C96  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746C98  75 05                     JNZ 0x00746c9f
00746C9A  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00746C9D  EB 14                     JMP 0x00746cb3
LAB_00746c9f:
00746C9F  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00746CA2  6A 10                     PUSH 0x10
00746CA4  59                        POP ECX
00746CA5  BF C8 22 7A 00            MOV EDI,0x7a22c8
00746CAA  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00746CAD  33 C0                     XOR EAX,EAX
00746CAF  F3 A6                     CMPSB.REPE ES:EDI,ESI
00746CB1  75 16                     JNZ 0x00746cc9
LAB_00746cb3:
00746CB3  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00746CB6  8B C8                     MOV ECX,EAX
00746CB8  83 C0 0C                  ADD EAX,0xc
00746CBB  F7 D9                     NEG ECX
00746CBD  1B C9                     SBB ECX,ECX
00746CBF  23 C8                     AND ECX,EAX
00746CC1  51                        PUSH ECX
00746CC2  E8 DF 4B 00 00            CALL 0x0074b8a6
00746CC7  EB 0B                     JMP 0x00746cd4
LAB_00746cc9:
00746CC9  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00746CCC  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00746CCF  E8 3C 4B 00 00            CALL 0x0074b810
LAB_00746cd4:
00746CD4  5F                        POP EDI
00746CD5  5E                        POP ESI
00746CD6  5D                        POP EBP
00746CD7  C2 0C 00                  RET 0xc
