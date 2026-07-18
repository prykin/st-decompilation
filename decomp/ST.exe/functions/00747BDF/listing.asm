FUN_00747bdf:
00747BDF  55                        PUSH EBP
00747BE0  8B EC                     MOV EBP,ESP
00747BE2  56                        PUSH ESI
00747BE3  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747BE6  57                        PUSH EDI
00747BE7  6A 10                     PUSH 0x10
00747BE9  59                        POP ECX
00747BEA  BF 50 1B 7A 00            MOV EDI,0x7a1b50
00747BEF  33 C0                     XOR EAX,EAX
00747BF1  F3 A6                     CMPSB.REPE ES:EDI,ESI
00747BF3  75 0D                     JNZ 0x00747c02
00747BF5  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747BF8  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747BFB  8B C8                     MOV ECX,EAX
00747BFD  83 C0 0C                  ADD EAX,0xc
00747C00  EB 1C                     JMP 0x00747c1e
LAB_00747c02:
00747C02  8B 75 0C                  MOV ESI,dword ptr [EBP + 0xc]
00747C05  6A 10                     PUSH 0x10
00747C07  59                        POP ECX
00747C08  BF 40 1B 7A 00            MOV EDI,0x7a1b40
00747C0D  FF 75 10                  PUSH dword ptr [EBP + 0x10]
00747C10  33 C0                     XOR EAX,EAX
00747C12  F3 A6                     CMPSB.REPE ES:EDI,ESI
00747C14  75 16                     JNZ 0x00747c2c
00747C16  8B 45 08                  MOV EAX,dword ptr [EBP + 0x8]
00747C19  8B C8                     MOV ECX,EAX
00747C1B  83 C0 10                  ADD EAX,0x10
LAB_00747c1e:
00747C1E  F7 D9                     NEG ECX
00747C20  1B C9                     SBB ECX,ECX
00747C22  23 C8                     AND ECX,EAX
00747C24  51                        PUSH ECX
00747C25  E8 7C 3C 00 00            CALL 0x0074b8a6
00747C2A  EB 0B                     JMP 0x00747c37
LAB_00747c2c:
00747C2C  FF 75 0C                  PUSH dword ptr [EBP + 0xc]
00747C2F  FF 75 08                  PUSH dword ptr [EBP + 0x8]
00747C32  E8 D9 3B 00 00            CALL 0x0074b810
LAB_00747c37:
00747C37  5F                        POP EDI
00747C38  5E                        POP ESI
00747C39  5D                        POP EBP
00747C3A  C2 0C 00                  RET 0xc
