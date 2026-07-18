FUN_007490c6:
007490C6  55                        PUSH EBP
007490C7  8B EC                     MOV EBP,ESP
007490C9  56                        PUSH ESI
007490CA  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
007490CD  57                        PUSH EDI
007490CE  6A 10                     PUSH 0x10
007490D0  59                        POP ECX
007490D1  BF 90 1A 7A 00            MOV EDI,0x7a1a90
007490D6  FF 75 10                  PUSH dword ptr [EBP + 0x10]
007490D9  33 C0                     XOR EAX,EAX
007490DB  F3 A6                     CMPSB.REPE ES:EDI,ESI
007490DD  75 16                     JNZ 0x007490f5
007490DF  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
007490E2  8B C8                     MOV ECX,EAX
007490E4  83 C0 0C                  ADD EAX,0xc
007490E7  F7 D9                     NEG ECX
007490E9  1B C9                     SBB ECX,ECX
007490EB  23 C8                     AND ECX,EAX
007490ED  51                        PUSH ECX
007490EE  E8 B3 27 00 00            CALL 0x0074b8a6
007490F3  EB 0B                     JMP 0x00749100
LAB_007490f5:
007490F5  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
007490F8  FF 75 08                  PUSH dword ptr [EBP + 0x8]
007490FB  E8 10 27 00 00            CALL 0x0074b810
LAB_00749100:
00749100  5F                        POP EDI
00749101  5E                        POP ESI
00749102  5D                        POP EBP
00749103  C2 0C 00                  RET 0xc
