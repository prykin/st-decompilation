FUN_007485ec:
007485EC  55                        PUSH EBP
007485ED  8B EC                     MOV EBP,ESP
007485EF  56                        PUSH ESI
007485F0  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007485F3  57                        PUSH EDI
007485F4  6A 10                     PUSH 0x10
007485F6  59                        POP ECX
007485F7  BF 60 1B 7A 00            MOV EDI,0x7a1b60
007485FC  FF 75 10                  PUSH dword ptr [EBP + 0x10]
007485FF  33 C0                     XOR EAX,EAX
00748601  F3 A6                     CMPSB.REPE ES:EDI,ESI
00748603  75 18                     JNZ 0x0074861d
00748605  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00748608  8B C8                     MOV ECX,EAX
0074860A  05 98 00 00 00            ADD EAX,0x98
0074860F  F7 D9                     NEG ECX
00748611  1B C9                     SBB ECX,ECX
00748613  23 C8                     AND ECX,EAX
00748615  51                        PUSH ECX
00748616  E8 8B 32 00 00            CALL 0x0074b8a6
0074861B  EB 0B                     JMP 0x00748628
LAB_0074861d:
0074861D  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00748620  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00748623  E8 B7 F5 FF FF            CALL 0x00747bdf
LAB_00748628:
00748628  5F                        POP EDI
00748629  5E                        POP ESI
0074862A  5D                        POP EBP
0074862B  C2 0C 00                  RET 0xc
