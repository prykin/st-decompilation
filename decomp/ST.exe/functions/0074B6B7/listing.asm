FUN_0074b6b7:
0074B6B7  55                        PUSH EBP
0074B6B8  8B EC                     MOV EBP,ESP
0074B6BA  56                        PUSH ESI
0074B6BB  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074B6BE  57                        PUSH EDI
0074B6BF  6A 10                     PUSH 0x10
0074B6C1  59                        POP ECX
0074B6C2  BF 30 12 7A 00            MOV EDI,0x7a1230
0074B6C7  33 C0                     XOR EAX,EAX
0074B6C9  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B6CB  75 0F                     JNZ 0x0074b6dc
0074B6CD  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B6D0  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074B6D3  8B C8                     MOV ECX,EAX
0074B6D5  05 C8 00 00 00            ADD EAX,0xc8
0074B6DA  EB 1E                     JMP 0x0074b6fa
LAB_0074b6dc:
0074B6DC  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
0074B6DF  6A 10                     PUSH 0x10
0074B6E1  59                        POP ECX
0074B6E2  BF 40 1B 7A 00            MOV EDI,0x7a1b40
0074B6E7  FF 75 10                  PUSH dword ptr [EBP + 0x10]
0074B6EA  33 C0                     XOR EAX,EAX
0074B6EC  F3 A6                     CMPSB.REPE ES:EDI,ESI
0074B6EE  75 18                     JNZ 0x0074b708
0074B6F0  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
0074B6F3  8B C8                     MOV ECX,EAX
0074B6F5  05 CC 00 00 00            ADD EAX,0xcc
LAB_0074b6fa:
0074B6FA  F7 D9                     NEG ECX
0074B6FC  1B C9                     SBB ECX,ECX
0074B6FE  23 C8                     AND ECX,EAX
0074B700  51                        PUSH ECX
0074B701  E8 A0 01 00 00            CALL 0x0074b8a6
0074B706  EB 0B                     JMP 0x0074b713
LAB_0074b708:
0074B708  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
0074B70B  FF 75 08                  PUSH dword ptr [EBP + 0x8]
0074B70E  E8 91 E5 FF FF            CALL 0x00749ca4
LAB_0074b713:
0074B713  5F                        POP EDI
0074B714  5E                        POP ESI
0074B715  5D                        POP EBP
0074B716  C2 0C 00                  RET 0xc
